#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t6413;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m45209_gshared (DefaultComparer_t6413 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m45209(__this, method) (( void (*) (DefaultComparer_t6413 *, const MethodInfo*))DefaultComparer__ctor_m45209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m45210_gshared (DefaultComparer_t6413 * __this, Guid_t1562  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m45210(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6413 *, Guid_t1562 , const MethodInfo*))DefaultComparer_GetHashCode_m45210_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m45211_gshared (DefaultComparer_t6413 * __this, Guid_t1562  ___x, Guid_t1562  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m45211(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6413 *, Guid_t1562 , Guid_t1562 , const MethodInfo*))DefaultComparer_Equals_m45211_gshared)(__this, ___x, ___y, method)
