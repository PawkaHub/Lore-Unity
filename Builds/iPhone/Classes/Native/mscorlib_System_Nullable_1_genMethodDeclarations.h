#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Guid>
struct Nullable_1_t1563;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Nullable`1<System.Guid>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.Guid>::.ctor(T)
extern "C" void Nullable_1__ctor_m8618_gshared (Nullable_1_t1563 * __this, Guid_t1733  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m8618(__this, ___value, method) (( void (*) (Nullable_1_t1563 *, Guid_t1733 , const MethodInfo*))Nullable_1__ctor_m8618_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Guid>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m8616_gshared (Nullable_1_t1563 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m8616(__this, method) (( bool (*) (Nullable_1_t1563 *, const MethodInfo*))Nullable_1_get_HasValue_m8616_gshared)(__this, method)
// T System.Nullable`1<System.Guid>::get_Value()
extern "C" Guid_t1733  Nullable_1_get_Value_m8806_gshared (Nullable_1_t1563 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m8806(__this, method) (( Guid_t1733  (*) (Nullable_1_t1563 *, const MethodInfo*))Nullable_1_get_Value_m8806_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Guid>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m38583_gshared (Nullable_1_t1563 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m38583(__this, ___other, method) (( bool (*) (Nullable_1_t1563 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m38583_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Guid>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m38584_gshared (Nullable_1_t1563 * __this, Nullable_1_t1563  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m38584(__this, ___other, method) (( bool (*) (Nullable_1_t1563 *, Nullable_1_t1563 , const MethodInfo*))Nullable_1_Equals_m38584_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Guid>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m38585_gshared (Nullable_1_t1563 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m38585(__this, method) (( int32_t (*) (Nullable_1_t1563 *, const MethodInfo*))Nullable_1_GetHashCode_m38585_gshared)(__this, method)
// T System.Nullable`1<System.Guid>::GetValueOrDefault()
extern "C" Guid_t1733  Nullable_1_GetValueOrDefault_m38586_gshared (Nullable_1_t1563 * __this, const MethodInfo* method);
#define Nullable_1_GetValueOrDefault_m38586(__this, method) (( Guid_t1733  (*) (Nullable_1_t1563 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m38586_gshared)(__this, method)
// System.String System.Nullable`1<System.Guid>::ToString()
extern "C" String_t* Nullable_1_ToString_m38587_gshared (Nullable_1_t1563 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m38587(__this, method) (( String_t* (*) (Nullable_1_t1563 *, const MethodInfo*))Nullable_1_ToString_m38587_gshared)(__this, method)
