#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>
struct DefaultComparer_t6698;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::.ctor()
extern "C" void DefaultComparer__ctor_m31609_gshared (DefaultComparer_t6698 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m31609(__this, method) (( void (*) (DefaultComparer_t6698 *, const MethodInfo*))DefaultComparer__ctor_m31609_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m31610_gshared (DefaultComparer_t6698 * __this, float ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m31610(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6698 *, float, const MethodInfo*))DefaultComparer_GetHashCode_m31610_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m31611_gshared (DefaultComparer_t6698 * __this, float ___x, float ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m31611(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6698 *, float, float, const MethodInfo*))DefaultComparer_Equals_m31611_gshared)(__this, ___x, ___y, method)
