#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t6482;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m31961_gshared (DefaultComparer_t6482 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m31961(__this, method) (( void (*) (DefaultComparer_t6482 *, const MethodInfo*))DefaultComparer__ctor_m31961_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m31962_gshared (DefaultComparer_t6482 * __this, UIVertex_t876  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m31962(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6482 *, UIVertex_t876 , const MethodInfo*))DefaultComparer_GetHashCode_m31962_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m31963_gshared (DefaultComparer_t6482 * __this, UIVertex_t876  ___x, UIVertex_t876  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m31963(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6482 *, UIVertex_t876 , UIVertex_t876 , const MethodInfo*))DefaultComparer_Equals_m31963_gshared)(__this, ___x, ___y, method)
