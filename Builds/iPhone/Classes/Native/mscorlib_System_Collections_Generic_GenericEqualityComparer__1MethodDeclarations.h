#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t5486;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m22973_gshared (GenericEqualityComparer_1_t5486 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m22973(__this, method) (( void (*) (GenericEqualityComparer_1_t5486 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m22973_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m72496_gshared (GenericEqualityComparer_1_t5486 * __this, Guid_t1733  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m72496(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t5486 *, Guid_t1733 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m72496_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m72497_gshared (GenericEqualityComparer_1_t5486 * __this, Guid_t1733  ___x, Guid_t1733  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m72497(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t5486 *, Guid_t1733 , Guid_t1733 , const MethodInfo*))GenericEqualityComparer_1_Equals_m72497_gshared)(__this, ___x, ___y, method)
