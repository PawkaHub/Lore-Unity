#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct DefaultComparer_t7172;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void DefaultComparer__ctor_m39254_gshared (DefaultComparer_t7172 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m39254(__this, method) (( void (*) (DefaultComparer_t7172 *, const MethodInfo*))DefaultComparer__ctor_m39254_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m39255_gshared (DefaultComparer_t7172 * __this, KeyValuePair_2_t2037  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m39255(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7172 *, KeyValuePair_2_t2037 , const MethodInfo*))DefaultComparer_GetHashCode_m39255_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m39256_gshared (DefaultComparer_t7172 * __this, KeyValuePair_2_t2037  ___x, KeyValuePair_2_t2037  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m39256(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7172 *, KeyValuePair_2_t2037 , KeyValuePair_2_t2037 , const MethodInfo*))DefaultComparer_Equals_m39256_gshared)(__this, ___x, ___y, method)
