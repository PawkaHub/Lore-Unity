#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t6121;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m41421_gshared (DefaultComparer_t6121 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m41421(__this, method) (( void (*) (DefaultComparer_t6121 *, const MethodInfo*))DefaultComparer__ctor_m41421_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m41422_gshared (DefaultComparer_t6121 * __this, UICharInfo_t2177  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m41422(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6121 *, UICharInfo_t2177 , const MethodInfo*))DefaultComparer_GetHashCode_m41422_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m41423_gshared (DefaultComparer_t6121 * __this, UICharInfo_t2177  ___x, UICharInfo_t2177  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m41423(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6121 *, UICharInfo_t2177 , UICharInfo_t2177 , const MethodInfo*))DefaultComparer_Equals_m41423_gshared)(__this, ___x, ___y, method)
