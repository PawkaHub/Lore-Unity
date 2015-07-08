#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.DateTime>
struct Nullable_1_t1870;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
extern "C" void Nullable_1__ctor_m9182_gshared (Nullable_1_t1870 * __this, DateTime_t1953  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m9182(__this, ___value, method) (( void (*) (Nullable_1_t1870 *, DateTime_t1953 , const MethodInfo*))Nullable_1__ctor_m9182_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m9183_gshared (Nullable_1_t1870 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m9183(__this, method) (( bool (*) (Nullable_1_t1870 *, const MethodInfo*))Nullable_1_get_HasValue_m9183_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::get_Value()
extern "C" DateTime_t1953  Nullable_1_get_Value_m9236_gshared (Nullable_1_t1870 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m9236(__this, method) (( DateTime_t1953  (*) (Nullable_1_t1870 *, const MethodInfo*))Nullable_1_get_Value_m9236_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m40642_gshared (Nullable_1_t1870 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m40642(__this, ___other, method) (( bool (*) (Nullable_1_t1870 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m40642_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m40643_gshared (Nullable_1_t1870 * __this, Nullable_1_t1870  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m40643(__this, ___other, method) (( bool (*) (Nullable_1_t1870 *, Nullable_1_t1870 , const MethodInfo*))Nullable_1_Equals_m40643_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.DateTime>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m40644_gshared (Nullable_1_t1870 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m40644(__this, method) (( int32_t (*) (Nullable_1_t1870 *, const MethodInfo*))Nullable_1_GetHashCode_m40644_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::GetValueOrDefault()
extern "C" DateTime_t1953  Nullable_1_GetValueOrDefault_m40645_gshared (Nullable_1_t1870 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m40645(__this, method) (( DateTime_t1953  (*) (Nullable_1_t1870 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m40645_gshared)(__this, method)
// System.String System.Nullable`1<System.DateTime>::ToString()
extern "C" String_t* Nullable_1_ToString_m40646_gshared (Nullable_1_t1870 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m40646(__this, method) (( String_t* (*) (Nullable_1_t1870 *, const MethodInfo*))Nullable_1_ToString_m40646_gshared)(__this, method)
