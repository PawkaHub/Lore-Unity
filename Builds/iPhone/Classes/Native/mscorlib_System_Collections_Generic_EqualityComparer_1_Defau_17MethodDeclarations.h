#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct DefaultComparer_t6337;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void DefaultComparer__ctor_m44600_gshared (DefaultComparer_t6337 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m44600(__this, method) (( void (*) (DefaultComparer_t6337 *, const MethodInfo*))DefaultComparer__ctor_m44600_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m44601_gshared (DefaultComparer_t6337 * __this, KeyValuePair_2_t3245  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m44601(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6337 *, KeyValuePair_2_t3245 , const MethodInfo*))DefaultComparer_GetHashCode_m44601_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m44602_gshared (DefaultComparer_t6337 * __this, KeyValuePair_2_t3245  ___x, KeyValuePair_2_t3245  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m44602(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6337 *, KeyValuePair_2_t3245 , KeyValuePair_2_t3245 , const MethodInfo*))DefaultComparer_Equals_m44602_gshared)(__this, ___x, ___y, method)
