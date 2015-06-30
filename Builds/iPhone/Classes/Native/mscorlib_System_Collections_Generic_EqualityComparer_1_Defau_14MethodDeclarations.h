#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t6130;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m41576_gshared (DefaultComparer_t6130 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m41576(__this, method) (( void (*) (DefaultComparer_t6130 *, const MethodInfo*))DefaultComparer__ctor_m41576_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m41577_gshared (DefaultComparer_t6130 * __this, UILineInfo_t2175  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m41577(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6130 *, UILineInfo_t2175 , const MethodInfo*))DefaultComparer_GetHashCode_m41577_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m41578_gshared (DefaultComparer_t6130 * __this, UILineInfo_t2175  ___x, UILineInfo_t2175  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m41578(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6130 *, UILineInfo_t2175 , UILineInfo_t2175 , const MethodInfo*))DefaultComparer_Equals_m41578_gshared)(__this, ___x, ___y, method)
