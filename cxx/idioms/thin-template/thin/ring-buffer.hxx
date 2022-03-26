// Copyright 2016 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIN_V8_BASE_RING_BUFFER_HXX
#define THIN_V8_BASE_RING_BUFFER_HXX

#include "./ring-buffer-base.hxx"

namespace v8 {
namespace base {

template <typename T>
class RingBuffer : private RingBufferBase {
  RingBuffer(const RingBuffer&) = delete;
  RingBuffer& operator=(const RingBuffer&) = delete;
public:
  inline RingBuffer()
  : RingBufferBase(sizeof(T)) {
    // THIS METHOD INTENTIONLLY LEFT BLANK
  }

  inline void Push1(const T& value) {
    RingBufferBase::Push1(static_cast<const void*>(&value));
  }

  inline void Push2(const T& value) {
    RingBufferBase::Push2(static_cast<const void*>(&value));
  }

  inline void Push3(const T& value) {
    RingBufferBase::Push3(static_cast<const void*>(&value));
  }

  inline void Push4(const T& value) {
    RingBufferBase::Push4(static_cast<const void*>(&value));
  }

  inline void Push5(const T& value) {
    RingBufferBase::Push5(static_cast<const void*>(&value));
  }

  inline void Push6(const T& value) {
    RingBufferBase::Push6(static_cast<const void*>(&value));
  }

  inline void Push7(const T& value) {
    RingBufferBase::Push7(static_cast<const void*>(&value));
  }

  inline void Push8(const T& value) {
    RingBufferBase::Push8(static_cast<const void*>(&value));
  }

  inline void Push9(const T& value) {
    RingBufferBase::Push9(static_cast<const void*>(&value));
  }

  inline int Count() const {
    return RingBufferBase::Count();
  }

  inline int x(const T& value) {
    return RingBufferBase::x(static_cast<const void*>(&value));
  }
};

}  // namespace base
}  // namespace v8

#endif  // THIN_V8_BASE_RING_BUFFER_HXX
