#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.DateTime>
struct Nullable_1_t1479;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
extern "C" void Nullable_1__ctor_m7531_gshared (Nullable_1_t1479 * __this, DateTime_t1219  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m7531(__this, ___value, method) (( void (*) (Nullable_1_t1479 *, DateTime_t1219 , const MethodInfo*))Nullable_1__ctor_m7531_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7532_gshared (Nullable_1_t1479 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m7532(__this, method) (( bool (*) (Nullable_1_t1479 *, const MethodInfo*))Nullable_1_get_HasValue_m7532_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::get_Value()
extern "C" DateTime_t1219  Nullable_1_get_Value_m7577_gshared (Nullable_1_t1479 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m7577(__this, method) (( DateTime_t1219  (*) (Nullable_1_t1479 *, const MethodInfo*))Nullable_1_get_Value_m7577_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m34495_gshared (Nullable_1_t1479 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m34495(__this, ___other, method) (( bool (*) (Nullable_1_t1479 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m34495_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m34496_gshared (Nullable_1_t1479 * __this, Nullable_1_t1479  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m34496(__this, ___other, method) (( bool (*) (Nullable_1_t1479 *, Nullable_1_t1479 , const MethodInfo*))Nullable_1_Equals_m34496_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.DateTime>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m34497_gshared (Nullable_1_t1479 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m34497(__this, method) (( int32_t (*) (Nullable_1_t1479 *, const MethodInfo*))Nullable_1_GetHashCode_m34497_gshared)(__this, method)
// System.String System.Nullable`1<System.DateTime>::ToString()
extern "C" String_t* Nullable_1_ToString_m34498_gshared (Nullable_1_t1479 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m34498(__this, method) (( String_t* (*) (Nullable_1_t1479 *, const MethodInfo*))Nullable_1_ToString_m34498_gshared)(__this, method)
