#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t7925;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m49006_gshared (DefaultComparer_t7925 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m49006(__this, method) (( void (*) (DefaultComparer_t7925 *, const MethodInfo*))DefaultComparer__ctor_m49006_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m49007_gshared (DefaultComparer_t7925 * __this, DateTime_t1953  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m49007(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7925 *, DateTime_t1953 , const MethodInfo*))DefaultComparer_GetHashCode_m49007_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m49008_gshared (DefaultComparer_t7925 * __this, DateTime_t1953  ___x, DateTime_t1953  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m49008(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7925 *, DateTime_t1953 , DateTime_t1953 , const MethodInfo*))DefaultComparer_Equals_m49008_gshared)(__this, ___x, ___y, method)
