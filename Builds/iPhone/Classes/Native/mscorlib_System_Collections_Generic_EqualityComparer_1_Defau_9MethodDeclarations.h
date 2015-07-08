#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t6744;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m32187_gshared (DefaultComparer_t6744 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m32187(__this, method) (( void (*) (DefaultComparer_t6744 *, const MethodInfo*))DefaultComparer__ctor_m32187_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m32188_gshared (DefaultComparer_t6744 * __this, UIVertex_t585  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m32188(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6744 *, UIVertex_t585 , const MethodInfo*))DefaultComparer_GetHashCode_m32188_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m32189_gshared (DefaultComparer_t6744 * __this, UIVertex_t585  ___x, UIVertex_t585  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m32189(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6744 *, UIVertex_t585 , UIVertex_t585 , const MethodInfo*))DefaultComparer_Equals_m32189_gshared)(__this, ___x, ___y, method)
