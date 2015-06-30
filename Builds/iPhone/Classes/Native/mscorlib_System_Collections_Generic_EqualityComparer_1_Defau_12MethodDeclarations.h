#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt16>
struct DefaultComparer_t6028;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt16>::.ctor()
extern "C" void DefaultComparer__ctor_m40022_gshared (DefaultComparer_t6028 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m40022(__this, method) (( void (*) (DefaultComparer_t6028 *, const MethodInfo*))DefaultComparer__ctor_m40022_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt16>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m40023_gshared (DefaultComparer_t6028 * __this, uint16_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m40023(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6028 *, uint16_t, const MethodInfo*))DefaultComparer_GetHashCode_m40023_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt16>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m40024_gshared (DefaultComparer_t6028 * __this, uint16_t ___x, uint16_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m40024(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6028 *, uint16_t, uint16_t, const MethodInfo*))DefaultComparer_Equals_m40024_gshared)(__this, ___x, ___y, method)
