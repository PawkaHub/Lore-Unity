#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.Guid>
struct Nullable_1_t1436;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Nullable`1<System.Guid>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.Guid>::.ctor(T)
extern "C" void Nullable_1__ctor_m7421_gshared (Nullable_1_t1436 * __this, Guid_t1562  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m7421(__this, ___value, method) (( void (*) (Nullable_1_t1436 *, Guid_t1562 , const MethodInfo*))Nullable_1__ctor_m7421_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Guid>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7419_gshared (Nullable_1_t1436 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m7419(__this, method) (( bool (*) (Nullable_1_t1436 *, const MethodInfo*))Nullable_1_get_HasValue_m7419_gshared)(__this, method)
// T System.Nullable`1<System.Guid>::get_Value()
extern "C" Guid_t1562  Nullable_1_get_Value_m7578_gshared (Nullable_1_t1436 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m7578(__this, method) (( Guid_t1562  (*) (Nullable_1_t1436 *, const MethodInfo*))Nullable_1_get_Value_m7578_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Guid>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m34218_gshared (Nullable_1_t1436 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m34218(__this, ___other, method) (( bool (*) (Nullable_1_t1436 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m34218_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Guid>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m34219_gshared (Nullable_1_t1436 * __this, Nullable_1_t1436  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m34219(__this, ___other, method) (( bool (*) (Nullable_1_t1436 *, Nullable_1_t1436 , const MethodInfo*))Nullable_1_Equals_m34219_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Guid>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m34220_gshared (Nullable_1_t1436 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m34220(__this, method) (( int32_t (*) (Nullable_1_t1436 *, const MethodInfo*))Nullable_1_GetHashCode_m34220_gshared)(__this, method)
// System.String System.Nullable`1<System.Guid>::ToString()
extern "C" String_t* Nullable_1_ToString_m34221_gshared (Nullable_1_t1436 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m34221(__this, method) (( String_t* (*) (Nullable_1_t1436 *, const MethodInfo*))Nullable_1_ToString_m34221_gshared)(__this, method)
