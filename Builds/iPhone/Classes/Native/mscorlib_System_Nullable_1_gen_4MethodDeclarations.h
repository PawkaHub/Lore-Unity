﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Byte>
struct Nullable_1_t6303;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Nullable`1<System.Byte>
#include "mscorlib_System_Nullable_1_gen_4.h"

// System.Void System.Nullable`1<System.Byte>::.ctor(T)
extern "C" void Nullable_1__ctor_m44086_gshared (Nullable_1_t6303 * __this, uint8_t ___value, const MethodInfo* method);
#define Nullable_1__ctor_m44086(__this, ___value, method) (( void (*) (Nullable_1_t6303 *, uint8_t, const MethodInfo*))Nullable_1__ctor_m44086_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Byte>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m44088_gshared (Nullable_1_t6303 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m44088(__this, method) (( bool (*) (Nullable_1_t6303 *, const MethodInfo*))Nullable_1_get_HasValue_m44088_gshared)(__this, method)
// T System.Nullable`1<System.Byte>::get_Value()
extern "C" uint8_t Nullable_1_get_Value_m44090_gshared (Nullable_1_t6303 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m44090(__this, method) (( uint8_t (*) (Nullable_1_t6303 *, const MethodInfo*))Nullable_1_get_Value_m44090_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Byte>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m44092_gshared (Nullable_1_t6303 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m44092(__this, ___other, method) (( bool (*) (Nullable_1_t6303 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m44092_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Byte>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m44094_gshared (Nullable_1_t6303 * __this, Nullable_1_t6303  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m44094(__this, ___other, method) (( bool (*) (Nullable_1_t6303 *, Nullable_1_t6303 , const MethodInfo*))Nullable_1_Equals_m44094_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Byte>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m44096_gshared (Nullable_1_t6303 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m44096(__this, method) (( int32_t (*) (Nullable_1_t6303 *, const MethodInfo*))Nullable_1_GetHashCode_m44096_gshared)(__this, method)
// System.String System.Nullable`1<System.Byte>::ToString()
extern "C" String_t* Nullable_1_ToString_m44098_gshared (Nullable_1_t6303 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m44098(__this, method) (( String_t* (*) (Nullable_1_t6303 *, const MethodInfo*))Nullable_1_ToString_m44098_gshared)(__this, method)