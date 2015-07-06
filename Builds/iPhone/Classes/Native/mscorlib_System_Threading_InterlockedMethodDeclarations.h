#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Interlocked
struct Interlocked_t1761;

// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C" int32_t Interlocked_CompareExchange_m7096 (Object_t * __this /* static, unused */, int32_t* ___location1, int32_t ___value, int32_t ___comparand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
extern "C" int32_t Interlocked_Decrement_m8985 (Object_t * __this /* static, unused */, int32_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Threading.Interlocked::Increment(System.Int64&)
extern "C" int64_t Interlocked_Increment_m22037 (Object_t * __this /* static, unused */, int64_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
