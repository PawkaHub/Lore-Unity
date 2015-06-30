#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>
struct DefaultComparer_t4881;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::.ctor()
extern "C" void DefaultComparer__ctor_m22653_gshared (DefaultComparer_t4881 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m22653(__this, method) (( void (*) (DefaultComparer_t4881 *, const MethodInfo*))DefaultComparer__ctor_m22653_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m22654_gshared (DefaultComparer_t4881 * __this, Object_t * ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m22654(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4881 *, Object_t *, const MethodInfo*))DefaultComparer_GetHashCode_m22654_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m22655_gshared (DefaultComparer_t4881 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m22655(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4881 *, Object_t *, Object_t *, const MethodInfo*))DefaultComparer_Equals_m22655_gshared)(__this, ___x, ___y, method)
