#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t7643;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m48091_gshared (DefaultComparer_t7643 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m48091(__this, method) (( void (*) (DefaultComparer_t7643 *, const MethodInfo*))DefaultComparer__ctor_m48091_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m48092_gshared (DefaultComparer_t7643 * __this, DateTime_t1705  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m48092(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7643 *, DateTime_t1705 , const MethodInfo*))DefaultComparer_GetHashCode_m48092_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m48093_gshared (DefaultComparer_t7643 * __this, DateTime_t1705  ___x, DateTime_t1705  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m48093(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7643 *, DateTime_t1705 , DateTime_t1705 , const MethodInfo*))DefaultComparer_Equals_m48093_gshared)(__this, ___x, ___y, method)
