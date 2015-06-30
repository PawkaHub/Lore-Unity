#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Int32>
struct Nullable_1_t2660;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_1.h"

// System.Void System.Nullable`1<System.Int32>::.ctor(T)
extern "C" void Nullable_1__ctor_m12154_gshared (Nullable_1_t2660 * __this, int32_t ___value, const MethodInfo* method);
#define Nullable_1__ctor_m12154(__this, ___value, method) (( void (*) (Nullable_1_t2660 *, int32_t, const MethodInfo*))Nullable_1__ctor_m12154_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m12151_gshared (Nullable_1_t2660 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m12151(__this, method) (( bool (*) (Nullable_1_t2660 *, const MethodInfo*))Nullable_1_get_HasValue_m12151_gshared)(__this, method)
// T System.Nullable`1<System.Int32>::get_Value()
extern "C" int32_t Nullable_1_get_Value_m12152_gshared (Nullable_1_t2660 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m12152(__this, method) (( int32_t (*) (Nullable_1_t2660 *, const MethodInfo*))Nullable_1_get_Value_m12152_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m39604_gshared (Nullable_1_t2660 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m39604(__this, ___other, method) (( bool (*) (Nullable_1_t2660 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m39604_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m39605_gshared (Nullable_1_t2660 * __this, Nullable_1_t2660  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m39605(__this, ___other, method) (( bool (*) (Nullable_1_t2660 *, Nullable_1_t2660 , const MethodInfo*))Nullable_1_Equals_m39605_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Int32>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m39606_gshared (Nullable_1_t2660 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m39606(__this, method) (( int32_t (*) (Nullable_1_t2660 *, const MethodInfo*))Nullable_1_GetHashCode_m39606_gshared)(__this, method)
// System.String System.Nullable`1<System.Int32>::ToString()
extern "C" String_t* Nullable_1_ToString_m39607_gshared (Nullable_1_t2660 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m39607(__this, method) (( String_t* (*) (Nullable_1_t2660 *, const MethodInfo*))Nullable_1_ToString_m39607_gshared)(__this, method)
