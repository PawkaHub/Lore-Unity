#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t5482;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m22968_gshared (GenericEqualityComparer_1_t5482 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m22968(__this, method) (( void (*) (GenericEqualityComparer_1_t5482 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m22968_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m48089_gshared (GenericEqualityComparer_1_t5482 * __this, DateTime_t1705  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m48089(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t5482 *, DateTime_t1705 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m48089_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m48090_gshared (GenericEqualityComparer_1_t5482 * __this, DateTime_t1705  ___x, DateTime_t1705  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m48090(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t5482 *, DateTime_t1705 , DateTime_t1705 , const MethodInfo*))GenericEqualityComparer_1_Equals_m48090_gshared)(__this, ___x, ___y, method)
