#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t6417;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m45226_gshared (DefaultComparer_t6417 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m45226(__this, method) (( void (*) (DefaultComparer_t6417 *, const MethodInfo*))DefaultComparer__ctor_m45226_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m45227_gshared (DefaultComparer_t6417 * __this, TimeSpan_t2672  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m45227(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6417 *, TimeSpan_t2672 , const MethodInfo*))DefaultComparer_GetHashCode_m45227_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m45228_gshared (DefaultComparer_t6417 * __this, TimeSpan_t2672  ___x, TimeSpan_t2672  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m45228(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6417 *, TimeSpan_t2672 , TimeSpan_t2672 , const MethodInfo*))DefaultComparer_Equals_m45228_gshared)(__this, ___x, ___y, method)
