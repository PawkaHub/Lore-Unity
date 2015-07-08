#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.SByte>
struct DefaultComparer_t7513;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.SByte>::.ctor()
extern "C" void DefaultComparer__ctor_m43734_gshared (DefaultComparer_t7513 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m43734(__this, method) (( void (*) (DefaultComparer_t7513 *, const MethodInfo*))DefaultComparer__ctor_m43734_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.SByte>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m43735_gshared (DefaultComparer_t7513 * __this, int8_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m43735(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7513 *, int8_t, const MethodInfo*))DefaultComparer_GetHashCode_m43735_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.SByte>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m43736_gshared (DefaultComparer_t7513 * __this, int8_t ___x, int8_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m43736(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7513 *, int8_t, int8_t, const MethodInfo*))DefaultComparer_Equals_m43736_gshared)(__this, ___x, ___y, method)
