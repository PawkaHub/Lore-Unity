#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct DefaultComparer_t6860;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void DefaultComparer__ctor_m37969_gshared (DefaultComparer_t6860 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m37969(__this, method) (( void (*) (DefaultComparer_t6860 *, const MethodInfo*))DefaultComparer__ctor_m37969_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m37970_gshared (DefaultComparer_t6860 * __this, KeyValuePair_2_t1797  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m37970(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6860 *, KeyValuePair_2_t1797 , const MethodInfo*))DefaultComparer_GetHashCode_m37970_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m37971_gshared (DefaultComparer_t6860 * __this, KeyValuePair_2_t1797  ___x, KeyValuePair_2_t1797  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m37971(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6860 *, KeyValuePair_2_t1797 , KeyValuePair_2_t1797 , const MethodInfo*))DefaultComparer_Equals_m37971_gshared)(__this, ___x, ___y, method)
