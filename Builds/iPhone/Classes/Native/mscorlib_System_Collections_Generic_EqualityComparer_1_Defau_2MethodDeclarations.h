#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t6298;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m25575_gshared (DefaultComparer_t6298 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25575(__this, method) (( void (*) (DefaultComparer_t6298 *, const MethodInfo*))DefaultComparer__ctor_m25575_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25576_gshared (DefaultComparer_t6298 * __this, Vector3_t53  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25576(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6298 *, Vector3_t53 , const MethodInfo*))DefaultComparer_GetHashCode_m25576_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25577_gshared (DefaultComparer_t6298 * __this, Vector3_t53  ___x, Vector3_t53  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25577(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6298 *, Vector3_t53 , Vector3_t53 , const MethodInfo*))DefaultComparer_Equals_m25577_gshared)(__this, ___x, ___y, method)
