// Copyright 2016 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIN_V8_BASE_RING_BUFFER_BASE_HXX
#define THIN_V8_BASE_RING_BUFFER_BASE_HXX

#include <cstdlib>
#include <cstring>

namespace v8 {
namespace base {

class RingBufferBase {
  RingBufferBase(const RingBufferBase&) = delete;
  RingBufferBase& operator=(const RingBufferBase&) = delete;

public:
  static constexpr std::size_t kSize = 1000000;

protected:
  RingBufferBase(int size);

public:
  void Push1(const void* value);
  void Push2(const void* value);
  void Push3(const void* value);
  void Push4(const void* value);
  void Push5(const void* value);
  void Push6(const void* value);
  void Push7(const void* value);
  void Push8(const void* value);
  void Push9(const void* value);
  int Count() const;
  int x(const void* value);

 private:
  void* elements_;
  int start_;
  int count_;
  std::size_t size_;
};

}  // namespace base
}  // namespace v8

#endif  // THIN_V8_BASE_RING_BUFFER_BASE_HXX
