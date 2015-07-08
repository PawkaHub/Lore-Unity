#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t6771;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m32575_gshared (DefaultComparer_t6771 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m32575(__this, method) (( void (*) (DefaultComparer_t6771 *, const MethodInfo*))DefaultComparer__ctor_m32575_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m32576_gshared (DefaultComparer_t6771 * __this, RaycastResult_t1104  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m32576(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6771 *, RaycastResult_t1104 , const MethodInfo*))DefaultComparer_GetHashCode_m32576_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m32577_gshared (DefaultComparer_t6771 * __this, RaycastResult_t1104  ___x, RaycastResult_t1104  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m32577(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6771 *, RaycastResult_t1104 , RaycastResult_t1104 , const MethodInfo*))DefaultComparer_Equals_m32577_gshared)(__this, ___x, ___y, method)
