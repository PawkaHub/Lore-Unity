#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>
struct DefaultComparer_t7688;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::.ctor()
extern "C" void DefaultComparer__ctor_m45916_gshared (DefaultComparer_t7688 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m45916(__this, method) (( void (*) (DefaultComparer_t7688 *, const MethodInfo*))DefaultComparer__ctor_m45916_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m45917_gshared (DefaultComparer_t7688 * __this, uint32_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m45917(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7688 *, uint32_t, const MethodInfo*))DefaultComparer_GetHashCode_m45917_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m45918_gshared (DefaultComparer_t7688 * __this, uint32_t ___x, uint32_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m45918(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7688 *, uint32_t, uint32_t, const MethodInfo*))DefaultComparer_Equals_m45918_gshared)(__this, ___x, ___y, method)
