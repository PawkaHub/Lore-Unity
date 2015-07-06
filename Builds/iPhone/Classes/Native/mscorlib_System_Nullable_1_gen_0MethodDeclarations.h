#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.DateTime>
struct Nullable_1_t1619;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
extern "C" void Nullable_1__ctor_m8749_gshared (Nullable_1_t1619 * __this, DateTime_t1705  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m8749(__this, ___value, method) (( void (*) (Nullable_1_t1619 *, DateTime_t1705 , const MethodInfo*))Nullable_1__ctor_m8749_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m8750_gshared (Nullable_1_t1619 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m8750(__this, method) (( bool (*) (Nullable_1_t1619 *, const MethodInfo*))Nullable_1_get_HasValue_m8750_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::get_Value()
extern "C" DateTime_t1705  Nullable_1_get_Value_m8804_gshared (Nullable_1_t1619 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m8804(__this, method) (( DateTime_t1705  (*) (Nullable_1_t1619 *, const MethodInfo*))Nullable_1_get_Value_m8804_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m39654_gshared (Nullable_1_t1619 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m39654(__this, ___other, method) (( bool (*) (Nullable_1_t1619 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m39654_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m39655_gshared (Nullable_1_t1619 * __this, Nullable_1_t1619  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m39655(__this, ___other, method) (( bool (*) (Nullable_1_t1619 *, Nullable_1_t1619 , const MethodInfo*))Nullable_1_Equals_m39655_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.DateTime>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m39656_gshared (Nullable_1_t1619 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m39656(__this, method) (( int32_t (*) (Nullable_1_t1619 *, const MethodInfo*))Nullable_1_GetHashCode_m39656_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::GetValueOrDefault()
extern "C" DateTime_t1705  Nullable_1_GetValueOrDefault_m39657_gshared (Nullable_1_t1619 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m39657(__this, method) (( DateTime_t1705  (*) (Nullable_1_t1619 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m39657_gshared)(__this, method)
// System.String System.Nullable`1<System.DateTime>::ToString()
extern "C" String_t* Nullable_1_ToString_m39658_gshared (Nullable_1_t1619 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m39658(__this, method) (( String_t* (*) (Nullable_1_t1619 *, const MethodInfo*))Nullable_1_ToString_m39658_gshared)(__this, method)
