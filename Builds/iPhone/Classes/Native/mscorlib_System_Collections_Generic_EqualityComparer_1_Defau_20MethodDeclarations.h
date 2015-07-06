#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct DefaultComparer_t8071;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_43.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C" void DefaultComparer__ctor_m53141_gshared (DefaultComparer_t8071 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m53141(__this, method) (( void (*) (DefaultComparer_t8071 *, const MethodInfo*))DefaultComparer__ctor_m53141_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m53142_gshared (DefaultComparer_t8071 * __this, KeyValuePair_2_t7001  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m53142(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8071 *, KeyValuePair_2_t7001 , const MethodInfo*))DefaultComparer_GetHashCode_m53142_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m53143_gshared (DefaultComparer_t8071 * __this, KeyValuePair_2_t7001  ___x, KeyValuePair_2_t7001  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m53143(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8071 *, KeyValuePair_2_t7001 , KeyValuePair_2_t7001 , const MethodInfo*))DefaultComparer_Equals_m53143_gshared)(__this, ___x, ___y, method)
