#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t5882;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m37690_gshared (DefaultComparer_t5882 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m37690(__this, method) (( void (*) (DefaultComparer_t5882 *, const MethodInfo*))DefaultComparer__ctor_m37690_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m37691_gshared (DefaultComparer_t5882 * __this, UIVertex_t2056  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m37691(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t5882 *, UIVertex_t2056 , const MethodInfo*))DefaultComparer_GetHashCode_m37691_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m37692_gshared (DefaultComparer_t5882 * __this, UIVertex_t2056  ___x, UIVertex_t2056  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m37692(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t5882 *, UIVertex_t2056 , UIVertex_t2056 , const MethodInfo*))DefaultComparer_Equals_m37692_gshared)(__this, ___x, ___y, method)
