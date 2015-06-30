#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t6409;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m45188_gshared (DefaultComparer_t6409 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m45188(__this, method) (( void (*) (DefaultComparer_t6409 *, const MethodInfo*))DefaultComparer__ctor_m45188_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m45189_gshared (DefaultComparer_t6409 * __this, DateTimeOffset_t2963  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m45189(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6409 *, DateTimeOffset_t2963 , const MethodInfo*))DefaultComparer_GetHashCode_m45189_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m45190_gshared (DefaultComparer_t6409 * __this, DateTimeOffset_t2963  ___x, DateTimeOffset_t2963  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m45190(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6409 *, DateTimeOffset_t2963 , DateTimeOffset_t2963 , const MethodInfo*))DefaultComparer_Equals_m45190_gshared)(__this, ___x, ___y, method)
