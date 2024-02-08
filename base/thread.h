// Copyright 2010-2021, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef MOZC_BASE_THREAD_H_
#define MOZC_BASE_THREAD_H_

#include <functional>
#include <memory>
#include <optional>
#include <utility>

#include "absl/base/thread_annotations.h"
#include "absl/functional/bind_front.h"
#include "absl/synchronization/mutex.h"
#include "absl/synchronization/notification.h"

#include <thread>  // NOLINT(build/c++11): this is external environment only.

namespace mozc {

// Represents a thread, exposing a subset of `std::thread` APIs.
//
// Most notably, threads are undetachable unlike `std::thread`, thus must be
// `join()`ed before destruction. This means that the `mozc::Thread` instance
// must be retained even for a long-running one, though which may be until
// the end of the process.
//
// The semantics of the present APIs are mostly the same as `std::thread`
// counterpart of the same (but lowercase) name, except that the behavior of
// situations where `std::thread` would throw an exception (e.g. destruction
// before `join()`) is unspecified. It's guaranteed to be either the same
// exception as `std::thread`, silently ignored or process termination, but
// since there isn't really a way to robustly handle all of them you should
// avoid such a situation as if they're UB.
//
// NOTE: This serves as a compatibility layer for Google where we use a
// different threading implementation internally.
class Thread {
 public:
  Thread() noexcept = default;

  template <class Function, class... Args>
  explicit Thread(Function &&f, Args &&...args)
      : thread_(std::forward<Function>(f), std::forward<Args>(args)...) {}

  ~Thread() = default;

  Thread(const Thread &) = delete;
  Thread &operator=(const Thread &) = delete;

  Thread(Thread &&) noexcept = default;
  Thread &operator=(Thread &&) noexcept = default;

  void Join() { thread_.join(); }

 private:
  std::thread thread_;
};

// Represents a value that will be available in the future. This class spawns
// a dedicated background thread to execute the provider function.
//
// `R` must be a movable type if not `void`.
//
// Roughly equivalent to a combination of `std::async` and `std::future`, but
// note that the API is not really compatible with `std::future<R>`'s.
template <class R>
class BackgroundFuture {
 public:
  // Spawns a dedicated thread to invoke `f(args...)`, and eventually fulfills
  // the future.
  template <class F, class... Args>
  explicit BackgroundFuture(F &&f, Args &&...args);

  BackgroundFuture(const BackgroundFuture &) = delete;
  BackgroundFuture &operator=(const BackgroundFuture &) = delete;

  BackgroundFuture(BackgroundFuture &&) = default;
  BackgroundFuture &operator=(BackgroundFuture &&) = default;

  ~BackgroundFuture();

  // Blocks until the future becomes ready, and returns the computed value by
  // reference.
  const R &Get() const &ABSL_LOCKS_EXCLUDED(state_->mutex);

  // Blocks until the future becomes ready, and returns the computed value by
  // move.
  //
  // This method consumes the prepared value, so any subsequent method calls
  // that involve wait will block forever. This method takes rvalue reference
  // to *this (i.e. `std::move(your_future).Get()`) to clarify this point, so
  // you shouldn't use the instance after this method call anyway.
  R Get() && ABSL_LOCKS_EXCLUDED(state_->mutex);

  // Returns whether the future is ready.
  bool Ready() const noexcept ABSL_LOCKS_EXCLUDED(state_->mutex);

  // Blocks until the future becomes ready.
  void Wait() const ABSL_LOCKS_EXCLUDED(state_->mutex);

 private:
  struct State {
    mutable absl::Mutex mutex;
    std::optional<R> value ABSL_GUARDED_BY(mutex);
  };
  std::unique_ptr<State> state_;
  Thread thread_;
};

template <>
class BackgroundFuture<void> {
 public:
  // Spawns a dedicated thread to invoke `f(args...)`, and eventually fulfills
  // the future.
  //
  // This is essentially equivalent to `Thread` along with "done" notification.
  template <class F, class... Args>
  explicit BackgroundFuture(F &&f, Args &&...args);

  BackgroundFuture(const BackgroundFuture &) = delete;
  BackgroundFuture &operator=(const BackgroundFuture &) = delete;

  BackgroundFuture(BackgroundFuture &&) = default;
  BackgroundFuture &operator=(BackgroundFuture &&) = default;

  ~BackgroundFuture();

  // Returns whether the future is ready.
  bool Ready() const noexcept;

  // Blocks until the future becomes ready.
  void Wait() const;

 private:
  std::unique_ptr<absl::Notification> done_;
  Thread thread_;
};

////////////////////////////////////////////////////////////////////////////////
// Implementations
////////////////////////////////////////////////////////////////////////////////

template <class R>
template <class F, class... Args>
BackgroundFuture<R>::BackgroundFuture(F &&f, Args &&...args)
    : state_(std::make_unique<State>()),
      thread_([&state = *state_,
               f = absl::bind_front(std::forward<F>(f),
                                    std::forward<Args>(args)...)]() mutable {
        R r = std::invoke(std::move(f));

        absl::MutexLock lock(&state.mutex);
        state.value = std::move(r);
      }) {}

template <class R>
BackgroundFuture<R>::~BackgroundFuture() {
  thread_.Join();
}

template <class R>
const R &BackgroundFuture<R>::Get() const & {
  absl::MutexLock lock(
      &state_->mutex,
      absl::Condition(
          +[](std::optional<R> *v) { return v->has_value(); }, &state_->value));
  return *state_->value;
}

template <class R>
R BackgroundFuture<R>::Get() && {
  absl::MutexLock lock(
      &state_->mutex,
      absl::Condition(
          +[](std::optional<R> *v) { return v->has_value(); }, &state_->value));
  R r = *std::move(state_->value);
  state_->value.reset();
  return r;
}

template <class R>
bool BackgroundFuture<R>::Ready() const noexcept {
  absl::MutexLock lock(&state_->mutex);
  return state_->value.has_value();
}

template <class R>
void BackgroundFuture<R>::Wait() const {
  absl::MutexLock lock(
      &state_->mutex,
      absl::Condition(
          +[](std::optional<R> *v) { return v->has_value(); }, &state_->value));
}

template <class F, class... Args>
BackgroundFuture<void>::BackgroundFuture(F &&f, Args &&...args)
    : done_(std::make_unique<absl::Notification>()),
      thread_([&done = *done_,
               f = absl::bind_front(std::forward<F>(f),
                                    std::forward<Args>(args)...)]() mutable {
        std::invoke(std::move(f));
        done.Notify();
      }) {}

inline BackgroundFuture<void>::~BackgroundFuture() { thread_.Join(); }

inline void BackgroundFuture<void>::Wait() const {
  done_->WaitForNotification();
}

inline bool BackgroundFuture<void>::Ready() const noexcept {
  return done_->HasBeenNotified();
}

}  // namespace mozc

#endif  // MOZC_BASE_THREAD_H_
