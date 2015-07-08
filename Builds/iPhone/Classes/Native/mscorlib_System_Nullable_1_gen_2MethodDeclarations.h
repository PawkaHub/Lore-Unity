#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Int32>
struct Nullable_1_t3072;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_2.h"

// System.Void System.Nullable`1<System.Int32>::.ctor(T)
extern "C" void Nullable_1__ctor_m11365_gshared (Nullable_1_t3072 * __this, int32_t ___value, const MethodInfo* method);
#define Nullable_1__ctor_m11365(__this, ___value, method) (( void (*) (Nullable_1_t3072 *, int32_t, const MethodInfo*))Nullable_1__ctor_m11365_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m11362_gshared (Nullable_1_t3072 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m11362(__this, method) (( bool (*) (Nullable_1_t3072 *, const MethodInfo*))Nullable_1_get_HasValue_m11362_gshared)(__this, method)
// T System.Nullable`1<System.Int32>::get_Value()
extern "C" int32_t Nullable_1_get_Value_m11363_gshared (Nullable_1_t3072 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m11363(__this, method) (( int32_t (*) (Nullable_1_t3072 *, const MethodInfo*))Nullable_1_get_Value_m11363_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m28774_gshared (Nullable_1_t3072 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m28774(__this, ___other, method) (( bool (*) (Nullable_1_t3072 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m28774_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m28775_gshared (Nullable_1_t3072 * __this, Nullable_1_t3072  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m28775(__this, ___other, method) (( bool (*) (Nullable_1_t3072 *, Nullable_1_t3072 , const MethodInfo*))Nullable_1_Equals_m28775_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Int32>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m28776_gshared (Nullable_1_t3072 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m28776(__this, method) (( int32_t (*) (Nullable_1_t3072 *, const MethodInfo*))Nullable_1_GetHashCode_m28776_gshared)(__this, method)
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
extern "C" int32_t Nullable_1_GetValueOrDefault_m28777_gshared (Nullable_1_t3072 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m28777(__this, method) (( int32_t (*) (Nullable_1_t3072 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m28777_gshared)(__this, method)
// System.String System.Nullable`1<System.Int32>::ToString()
extern "C" String_t* Nullable_1_ToString_m28778_gshared (Nullable_1_t3072 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m28778(__this, method) (( String_t* (*) (Nullable_1_t3072 *, const MethodInfo*))Nullable_1_ToString_m28778_gshared)(__this, method)
