#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>
struct DefaultComparer_t6733;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::.ctor()
extern "C" void DefaultComparer__ctor_m31985_gshared (DefaultComparer_t6733 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m31985(__this, method) (( void (*) (DefaultComparer_t6733 *, const MethodInfo*))DefaultComparer__ctor_m31985_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m31986_gshared (DefaultComparer_t6733 * __this, Color_t121  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m31986(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6733 *, Color_t121 , const MethodInfo*))DefaultComparer_GetHashCode_m31986_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m31987_gshared (DefaultComparer_t6733 * __this, Color_t121  ___x, Color_t121  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m31987(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6733 *, Color_t121 , Color_t121 , const MethodInfo*))DefaultComparer_Equals_m31987_gshared)(__this, ___x, ___y, method)
