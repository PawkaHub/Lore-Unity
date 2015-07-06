#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>
struct DefaultComparer_t6407;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::.ctor()
extern "C" void DefaultComparer__ctor_m30613_gshared (DefaultComparer_t6407 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m30613(__this, method) (( void (*) (DefaultComparer_t6407 *, const MethodInfo*))DefaultComparer__ctor_m30613_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m30614_gshared (DefaultComparer_t6407 * __this, Color_t121  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m30614(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6407 *, Color_t121 , const MethodInfo*))DefaultComparer_GetHashCode_m30614_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m30615_gshared (DefaultComparer_t6407 * __this, Color_t121  ___x, Color_t121  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m30615(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6407 *, Color_t121 , Color_t121 , const MethodInfo*))DefaultComparer_Equals_m30615_gshared)(__this, ___x, ___y, method)
