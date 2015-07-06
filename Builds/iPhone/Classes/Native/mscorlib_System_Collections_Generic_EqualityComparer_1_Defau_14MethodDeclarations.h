#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt16>
struct DefaultComparer_t7325;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt16>::.ctor()
extern "C" void DefaultComparer__ctor_m43993_gshared (DefaultComparer_t7325 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m43993(__this, method) (( void (*) (DefaultComparer_t7325 *, const MethodInfo*))DefaultComparer__ctor_m43993_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt16>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m43994_gshared (DefaultComparer_t7325 * __this, uint16_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m43994(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7325 *, uint16_t, const MethodInfo*))DefaultComparer_GetHashCode_m43994_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt16>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m43995_gshared (DefaultComparer_t7325 * __this, uint16_t ___x, uint16_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m43995(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7325 *, uint16_t, uint16_t, const MethodInfo*))DefaultComparer_Equals_m43995_gshared)(__this, ___x, ___y, method)
