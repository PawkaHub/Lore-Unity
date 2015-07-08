﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Buffer
struct Buffer_t5610;
// System.Array
struct Array_t;

// System.Int32 System.Buffer::ByteLength(System.Array)
extern "C" int32_t Buffer_ByteLength_m22587 (Object_t * __this /* static, unused */, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void Buffer_BlockCopy_m13293 (Object_t * __this /* static, unused */, Array_t * ___src, int32_t ___srcOffset, Array_t * ___dst, int32_t ___dstOffset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Buffer::ByteLengthInternal(System.Array)
extern "C" int32_t Buffer_ByteLengthInternal_m22588 (Object_t * __this /* static, unused */, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Buffer::BlockCopyInternal(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" bool Buffer_BlockCopyInternal_m22589 (Object_t * __this /* static, unused */, Array_t * ___src, int32_t ___src_offset, Array_t * ___dest, int32_t ___dest_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
