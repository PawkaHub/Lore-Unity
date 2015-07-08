#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Guid>
struct Nullable_1_t1818;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Nullable`1<System.Guid>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.Guid>::.ctor(T)
extern "C" void Nullable_1__ctor_m9051_gshared (Nullable_1_t1818 * __this, Guid_t1979  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m9051(__this, ___value, method) (( void (*) (Nullable_1_t1818 *, Guid_t1979 , const MethodInfo*))Nullable_1__ctor_m9051_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Guid>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m9049_gshared (Nullable_1_t1818 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m9049(__this, method) (( bool (*) (Nullable_1_t1818 *, const MethodInfo*))Nullable_1_get_HasValue_m9049_gshared)(__this, method)
// T System.Nullable`1<System.Guid>::get_Value()
extern "C" Guid_t1979  Nullable_1_get_Value_m9238_gshared (Nullable_1_t1818 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m9238(__this, method) (( Guid_t1979  (*) (Nullable_1_t1818 *, const MethodInfo*))Nullable_1_get_Value_m9238_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Guid>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m39821_gshared (Nullable_1_t1818 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m39821(__this, ___other, method) (( bool (*) (Nullable_1_t1818 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m39821_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Guid>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m39822_gshared (Nullable_1_t1818 * __this, Nullable_1_t1818  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m39822(__this, ___other, method) (( bool (*) (Nullable_1_t1818 *, Nullable_1_t1818 , const MethodInfo*))Nullable_1_Equals_m39822_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Guid>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m39823_gshared (Nullable_1_t1818 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m39823(__this, method) (( int32_t (*) (Nullable_1_t1818 *, const MethodInfo*))Nullable_1_GetHashCode_m39823_gshared)(__this, method)
// T System.Nullable`1<System.Guid>::GetValueOrDefault()
extern "C" Guid_t1979  Nullable_1_GetValueOrDefault_m39824_gshared (Nullable_1_t1818 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m39824(__this, method) (( Guid_t1979  (*) (Nullable_1_t1818 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m39824_gshared)(__this, method)
// System.String System.Nullable`1<System.Guid>::ToString()
extern "C" String_t* Nullable_1_ToString_m39825_gshared (Nullable_1_t1818 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m39825(__this, method) (( String_t* (*) (Nullable_1_t1818 *, const MethodInfo*))Nullable_1_ToString_m39825_gshared)(__this, method)
