#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t4972;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m23780_gshared (DefaultComparer_t4972 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m23780(__this, method) (( void (*) (DefaultComparer_t4972 *, const MethodInfo*))DefaultComparer__ctor_m23780_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m23781_gshared (DefaultComparer_t4972 * __this, Vector3_t53  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m23781(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4972 *, Vector3_t53 , const MethodInfo*))DefaultComparer_GetHashCode_m23781_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m23782_gshared (DefaultComparer_t4972 * __this, Vector3_t53  ___x, Vector3_t53  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m23782(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4972 *, Vector3_t53 , Vector3_t53 , const MethodInfo*))DefaultComparer_Equals_m23782_gshared)(__this, ___x, ___y, method)
