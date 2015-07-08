#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1878;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_1.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m23388_gshared (Nullable_1_t1878 * __this, TimeSpan_t629  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m23388(__this, ___value, method) (( void (*) (Nullable_1_t1878 *, TimeSpan_t629 , const MethodInfo*))Nullable_1__ctor_m23388_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m9254_gshared (Nullable_1_t1878 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m9254(__this, method) (( bool (*) (Nullable_1_t1878 *, const MethodInfo*))Nullable_1_get_HasValue_m9254_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t629  Nullable_1_get_Value_m9256_gshared (Nullable_1_t1878 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m9256(__this, method) (( TimeSpan_t629  (*) (Nullable_1_t1878 *, const MethodInfo*))Nullable_1_get_Value_m9256_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m42028_gshared (Nullable_1_t1878 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m42028(__this, ___other, method) (( bool (*) (Nullable_1_t1878 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m42028_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m42029_gshared (Nullable_1_t1878 * __this, Nullable_1_t1878  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m42029(__this, ___other, method) (( bool (*) (Nullable_1_t1878 *, Nullable_1_t1878 , const MethodInfo*))Nullable_1_Equals_m42029_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m42030_gshared (Nullable_1_t1878 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m42030(__this, method) (( int32_t (*) (Nullable_1_t1878 *, const MethodInfo*))Nullable_1_GetHashCode_m42030_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t629  Nullable_1_GetValueOrDefault_m42031_gshared (Nullable_1_t1878 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m42031(__this, method) (( TimeSpan_t629  (*) (Nullable_1_t1878 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m42031_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m42032_gshared (Nullable_1_t1878 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m42032(__this, method) (( String_t* (*) (Nullable_1_t1878 *, const MethodInfo*))Nullable_1_ToString_m42032_gshared)(__this, method)
