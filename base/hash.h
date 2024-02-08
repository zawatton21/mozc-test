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

#ifndef MOZC_BASE_HASH_H_
#define MOZC_BASE_HASH_H_

#include <cstddef>
#include <cstdint>
#include <type_traits>

#include "absl/strings/string_view.h"

namespace mozc {

// Calculates 64-bit fingerprint.
uint64_t Fingerprint(absl::string_view str);
uint64_t FingerprintWithSeed(absl::string_view str, uint32_t seed);

// Calculates 32-bit fingerprint.
uint32_t Fingerprint32(absl::string_view str);
uint32_t Fingerprint32WithSeed(absl::string_view str, uint32_t seed);

template <class T,
          std::enable_if_t<std::is_integral_v<T>, std::nullptr_t> = nullptr>
uint64_t Fingerprint(T num) {
  return Fingerprint(
      absl::string_view(reinterpret_cast<const char*>(&num), sizeof(num)));
}

template <class T,
          std::enable_if_t<std::is_integral_v<T>, std::nullptr_t> = nullptr>
uint64_t FingerprintWithSeed(T num, uint32_t seed) {
  return FingerprintWithSeed(
      absl::string_view(reinterpret_cast<const char*>(&num), sizeof(num)),
      seed);
}

template <class T,
          std::enable_if_t<std::is_integral_v<T>, std::nullptr_t> = nullptr>
uint32_t Fingerprint32(T num) {
  return Fingerprint32(
      absl::string_view(reinterpret_cast<const char*>(&num), sizeof(num)));
}

template <class T,
          std::enable_if_t<std::is_integral_v<T>, std::nullptr_t> = nullptr>
uint32_t Fingerprint32WithSeed(T num, uint32_t seed) {
  return Fingerprint32WithSeed(
      absl::string_view(reinterpret_cast<const char*>(&num), sizeof(num)),
      seed);
}

}  // namespace mozc

#endif  // MOZC_BASE_HASH_H_
