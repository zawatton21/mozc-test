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

#include "engine/engine_builder.h"

#include <algorithm>
#include <cstdint>
#include <memory>
#include <string>
#include <utility>

#include "absl/status/status.h"
#include "absl/status/statusor.h"
#include "absl/synchronization/mutex.h"
#include "base/file_util.h"
#include "base/hash.h"
#include "base/logging.h"
#include "base/protobuf/message.h"
#include "base/thread.h"
#include "data_manager/data_manager.h"
#include "engine/engine.h"
#include "engine/engine_interface.h"
#include "protocol/engine_builder.pb.h"

namespace mozc {
namespace {
EngineReloadResponse::Status ConvertStatus(DataManager::Status status) {
  switch (status) {
    case DataManager::Status::ENGINE_VERSION_MISMATCH:
      return EngineReloadResponse::ENGINE_VERSION_MISMATCH;
    case DataManager::Status::DATA_MISSING:
      return EngineReloadResponse::DATA_MISSING;
    case DataManager::Status::DATA_BROKEN:
      return EngineReloadResponse::DATA_BROKEN;
    case DataManager::Status::MMAP_FAILURE:
      return EngineReloadResponse::MMAP_FAILURE;
    case DataManager::Status::UNKNOWN:
      return EngineReloadResponse::UNKNOWN_ERROR;
    default:
      LOG(DFATAL) << "Should not reach here";
  }
  return EngineReloadResponse::UNKNOWN_ERROR;
}
}  // namespace

uint64_t EngineBuilder::RegisterRequest(const EngineReloadRequest &request) {
  const uint64_t id = Fingerprint(request.SerializeAsString());

  absl::WriterMutexLock lock(&mutex_);

  // Already requesting latest id.
  if (!requests_.empty() && requests_.front().id == id) {
    return id;
  }

  if (unregistered_.contains(id)) {
    return requests_.empty() ? 0 : requests_.front().id;
  }

  ++sequence_id_;

  auto it = std::find_if(requests_.begin(), requests_.end(),
                         [id](const auto &v) { return v.id == id; });
  if (it != requests_.end()) {
    it->sequence_id = sequence_id_.load();
  } else {
    requests_.emplace_back(
        RequestData{id, request.priority(), sequence_id_.load(), request});
  }

  // Sorts the requests so requests[0] stores the request with
  // the highest priority.
  std::sort(requests_.begin(), requests_.end(),
            [](const auto &lhs, const auto &rhs) {
              return (lhs.priority < rhs.priority ||
                      (lhs.priority == rhs.priority &&
                       lhs.sequence_id > rhs.sequence_id));
            });

  return requests_.front().id;
}

uint64_t EngineBuilder::UnregisterRequest(uint64_t id) {
  absl::WriterMutexLock lock(&mutex_);

  const auto it = std::remove_if(requests_.begin(), requests_.end(),
                                 [id](const auto &v) { return v.id == id; });
  if (it != requests_.end()) {
    requests_.erase(it, requests_.end());
    unregistered_.emplace(id);
  }

  return requests_.empty() ? 0 : requests_.front().id;
}

std::unique_ptr<EngineBuilder::EngineResponseFuture> EngineBuilder::Build(
    uint64_t id) const {
  return std::make_unique<BackgroundFuture<EngineResponse>>([&, id]() {
    EngineResponse result;
    result.id = id;
    result.response.set_status(EngineReloadResponse::DATA_MISSING);

    // Finds the request associated with `id`.
    {
      absl::ReaderMutexLock lock(&mutex_);
      const auto it = std::find_if(requests_.begin(), requests_.end(),
                                   [id](const auto &v) { return v.id == id; });
      if (it == requests_.end()) {
        return result;
      }
      *result.response.mutable_request() = it->request;
    }

    const auto &request = result.response.request();

    // Initializes DataManager
    auto data_manager = std::make_unique<DataManager>();

    const auto status = request.has_magic_number()
                            ? data_manager->InitFromFile(request.file_path(),
                                                         request.magic_number())
                            : data_manager->InitFromFile(request.file_path());

    result.response.set_status(EngineReloadResponse::RELOAD_READY);

    if (status != DataManager::Status::OK) {
      LOG(ERROR) << "Failed to load data [" << status << "] "
                 << protobuf::Utf8Format(request);
      result.response.set_status(ConvertStatus(status));
    } else if (request.has_install_location()) {
      if (const absl::Status s = FileUtil::LinkOrCopyFile(
              request.file_path(), request.install_location());
          !s.ok()) {
        LOG(ERROR) << "Copy faild: " << protobuf::Utf8Format(request) << ": "
                   << s;
        result.response.set_status(EngineReloadResponse::INSTALL_FAILURE);
      }
    }

    if (result.response.status() != EngineReloadResponse::RELOAD_READY) {
      return result;
    }

    // Initializes engine.
    absl::StatusOr<std::unique_ptr<Engine>> engine;
    switch (request.engine_type()) {
      case EngineReloadRequest::DESKTOP:
        engine = Engine::CreateDesktopEngine(std::move(data_manager));
        break;
      case EngineReloadRequest::MOBILE:
        engine = Engine::CreateMobileEngine(std::move(data_manager));
        break;
      default:
        LOG(DFATAL) << "Should not reach here";
        break;
    }

    if (engine.ok()) {
      result.engine = *std::move(engine);
    } else {
      LOG(ERROR) << engine.status();
    }

    return result;
  });
}

void EngineBuilder::Clear() {
  absl::WriterMutexLock lock(&mutex_);
  requests_.clear();
  sequence_id_ = 0;
}

}  // namespace mozc
