#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t6405;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m45171_gshared (DefaultComparer_t6405 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m45171(__this, method) (( void (*) (DefaultComparer_t6405 *, const MethodInfo*))DefaultComparer__ctor_m45171_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m45172_gshared (DefaultComparer_t6405 * __this, DateTime_t1219  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m45172(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6405 *, DateTime_t1219 , const MethodInfo*))DefaultComparer_GetHashCode_m45172_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m45173_gshared (DefaultComparer_t6405 * __this, DateTime_t1219  ___x, DateTime_t1219  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m45173(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6405 *, DateTime_t1219 , DateTime_t1219 , const MethodInfo*))DefaultComparer_Equals_m45173_gshared)(__this, ___x, ___y, method)
