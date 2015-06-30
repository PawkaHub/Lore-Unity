#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t6183;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t6171;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m42223_gshared (ShimEnumerator_t6183 * __this, Dictionary_2_t6171 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m42223(__this, ___host, method) (( void (*) (ShimEnumerator_t6183 *, Dictionary_2_t6171 *, const MethodInfo*))ShimEnumerator__ctor_m42223_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m42224_gshared (ShimEnumerator_t6183 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m42224(__this, method) (( bool (*) (ShimEnumerator_t6183 *, const MethodInfo*))ShimEnumerator_MoveNext_m42224_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m42225_gshared (ShimEnumerator_t6183 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m42225(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t6183 *, const MethodInfo*))ShimEnumerator_get_Entry_m42225_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m42226_gshared (ShimEnumerator_t6183 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m42226(__this, method) (( Object_t * (*) (ShimEnumerator_t6183 *, const MethodInfo*))ShimEnumerator_get_Key_m42226_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m42227_gshared (ShimEnumerator_t6183 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m42227(__this, method) (( Object_t * (*) (ShimEnumerator_t6183 *, const MethodInfo*))ShimEnumerator_get_Value_m42227_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m42228_gshared (ShimEnumerator_t6183 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m42228(__this, method) (( Object_t * (*) (ShimEnumerator_t6183 *, const MethodInfo*))ShimEnumerator_get_Current_m42228_gshared)(__this, method)
