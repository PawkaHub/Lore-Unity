#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t6225;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t6216;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m42857_gshared (ShimEnumerator_t6225 * __this, Dictionary_2_t6216 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m42857(__this, ___host, method) (( void (*) (ShimEnumerator_t6225 *, Dictionary_2_t6216 *, const MethodInfo*))ShimEnumerator__ctor_m42857_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m42858_gshared (ShimEnumerator_t6225 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m42858(__this, method) (( bool (*) (ShimEnumerator_t6225 *, const MethodInfo*))ShimEnumerator_MoveNext_m42858_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m42859_gshared (ShimEnumerator_t6225 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m42859(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t6225 *, const MethodInfo*))ShimEnumerator_get_Entry_m42859_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m42860_gshared (ShimEnumerator_t6225 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m42860(__this, method) (( Object_t * (*) (ShimEnumerator_t6225 *, const MethodInfo*))ShimEnumerator_get_Key_m42860_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m42861_gshared (ShimEnumerator_t6225 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m42861(__this, method) (( Object_t * (*) (ShimEnumerator_t6225 *, const MethodInfo*))ShimEnumerator_get_Value_m42861_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m42862_gshared (ShimEnumerator_t6225 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m42862(__this, method) (( Object_t * (*) (ShimEnumerator_t6225 *, const MethodInfo*))ShimEnumerator_get_Current_m42862_gshared)(__this, method)
