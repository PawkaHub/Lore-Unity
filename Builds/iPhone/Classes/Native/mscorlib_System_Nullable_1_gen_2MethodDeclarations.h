#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Int32>
struct Nullable_1_t2835;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_2.h"

// System.Void System.Nullable`1<System.Int32>::.ctor(T)
extern "C" void Nullable_1__ctor_m10946_gshared (Nullable_1_t2835 * __this, int32_t ___value, const MethodInfo* method);
#define Nullable_1__ctor_m10946(__this, ___value, method) (( void (*) (Nullable_1_t2835 *, int32_t, const MethodInfo*))Nullable_1__ctor_m10946_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m10943_gshared (Nullable_1_t2835 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m10943(__this, method) (( bool (*) (Nullable_1_t2835 *, const MethodInfo*))Nullable_1_get_HasValue_m10943_gshared)(__this, method)
// T System.Nullable`1<System.Int32>::get_Value()
extern "C" int32_t Nullable_1_get_Value_m10944_gshared (Nullable_1_t2835 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m10944(__this, method) (( int32_t (*) (Nullable_1_t2835 *, const MethodInfo*))Nullable_1_get_Value_m10944_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m39164_gshared (Nullable_1_t2835 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m39164(__this, ___other, method) (( bool (*) (Nullable_1_t2835 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m39164_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m39165_gshared (Nullable_1_t2835 * __this, Nullable_1_t2835  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m39165(__this, ___other, method) (( bool (*) (Nullable_1_t2835 *, Nullable_1_t2835 , const MethodInfo*))Nullable_1_Equals_m39165_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Int32>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m39166_gshared (Nullable_1_t2835 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m39166(__this, method) (( int32_t (*) (Nullable_1_t2835 *, const MethodInfo*))Nullable_1_GetHashCode_m39166_gshared)(__this, method)
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
extern "C" int32_t Nullable_1_GetValueOrDefault_m39167_gshared (Nullable_1_t2835 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m39167(__this, method) (( int32_t (*) (Nullable_1_t2835 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m39167_gshared)(__this, method)
// System.String System.Nullable`1<System.Int32>::ToString()
extern "C" String_t* Nullable_1_ToString_m39168_gshared (Nullable_1_t2835 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m39168(__this, method) (( String_t* (*) (Nullable_1_t2835 *, const MethodInfo*))Nullable_1_ToString_m39168_gshared)(__this, method)
