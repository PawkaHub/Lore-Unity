#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t4374;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_2.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m21643_gshared (Nullable_1_t4374 * __this, TimeSpan_t2672  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m21643(__this, ___value, method) (( void (*) (Nullable_1_t4374 *, TimeSpan_t2672 , const MethodInfo*))Nullable_1__ctor_m21643_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m21644_gshared (Nullable_1_t4374 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m21644(__this, method) (( bool (*) (Nullable_1_t4374 *, const MethodInfo*))Nullable_1_get_HasValue_m21644_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t2672  Nullable_1_get_Value_m21645_gshared (Nullable_1_t4374 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m21645(__this, method) (( TimeSpan_t2672  (*) (Nullable_1_t4374 *, const MethodInfo*))Nullable_1_get_Value_m21645_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m45191_gshared (Nullable_1_t4374 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m45191(__this, ___other, method) (( bool (*) (Nullable_1_t4374 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m45191_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m45192_gshared (Nullable_1_t4374 * __this, Nullable_1_t4374  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m45192(__this, ___other, method) (( bool (*) (Nullable_1_t4374 *, Nullable_1_t4374 , const MethodInfo*))Nullable_1_Equals_m45192_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m45193_gshared (Nullable_1_t4374 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m45193(__this, method) (( int32_t (*) (Nullable_1_t4374 *, const MethodInfo*))Nullable_1_GetHashCode_m45193_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m45194_gshared (Nullable_1_t4374 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m45194(__this, method) (( String_t* (*) (Nullable_1_t4374 *, const MethodInfo*))Nullable_1_ToString_m45194_gshared)(__this, method)
