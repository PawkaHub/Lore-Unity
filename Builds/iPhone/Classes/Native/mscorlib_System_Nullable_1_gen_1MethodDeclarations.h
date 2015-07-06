#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1627;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_1.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m22971_gshared (Nullable_1_t1627 * __this, TimeSpan_t1746  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m22971(__this, ___value, method) (( void (*) (Nullable_1_t1627 *, TimeSpan_t1746 , const MethodInfo*))Nullable_1__ctor_m22971_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m8822_gshared (Nullable_1_t1627 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m8822(__this, method) (( bool (*) (Nullable_1_t1627 *, const MethodInfo*))Nullable_1_get_HasValue_m8822_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t1746  Nullable_1_get_Value_m8824_gshared (Nullable_1_t1627 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m8824(__this, method) (( TimeSpan_t1746  (*) (Nullable_1_t1627 *, const MethodInfo*))Nullable_1_get_Value_m8824_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m41040_gshared (Nullable_1_t1627 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m41040(__this, ___other, method) (( bool (*) (Nullable_1_t1627 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m41040_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m41041_gshared (Nullable_1_t1627 * __this, Nullable_1_t1627  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m41041(__this, ___other, method) (( bool (*) (Nullable_1_t1627 *, Nullable_1_t1627 , const MethodInfo*))Nullable_1_Equals_m41041_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m41042_gshared (Nullable_1_t1627 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m41042(__this, method) (( int32_t (*) (Nullable_1_t1627 *, const MethodInfo*))Nullable_1_GetHashCode_m41042_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C" TimeSpan_t1746  Nullable_1_GetValueOrDefault_m41043_gshared (Nullable_1_t1627 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m41043(__this, method) (( TimeSpan_t1746  (*) (Nullable_1_t1627 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m41043_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m41044_gshared (Nullable_1_t1627 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m41044(__this, method) (( String_t* (*) (Nullable_1_t1627 *, const MethodInfo*))Nullable_1_ToString_m41044_gshared)(__this, method)
