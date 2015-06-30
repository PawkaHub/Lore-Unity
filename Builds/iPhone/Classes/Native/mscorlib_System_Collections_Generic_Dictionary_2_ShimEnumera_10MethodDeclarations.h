#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>
struct ShimEnumerator_t5798;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t5789;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m36256_gshared (ShimEnumerator_t5798 * __this, Dictionary_2_t5789 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m36256(__this, ___host, method) (( void (*) (ShimEnumerator_t5798 *, Dictionary_2_t5789 *, const MethodInfo*))ShimEnumerator__ctor_m36256_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m36257_gshared (ShimEnumerator_t5798 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m36257(__this, method) (( bool (*) (ShimEnumerator_t5798 *, const MethodInfo*))ShimEnumerator_MoveNext_m36257_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m36258_gshared (ShimEnumerator_t5798 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m36258(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t5798 *, const MethodInfo*))ShimEnumerator_get_Entry_m36258_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m36259_gshared (ShimEnumerator_t5798 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m36259(__this, method) (( Object_t * (*) (ShimEnumerator_t5798 *, const MethodInfo*))ShimEnumerator_get_Key_m36259_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m36260_gshared (ShimEnumerator_t5798 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m36260(__this, method) (( Object_t * (*) (ShimEnumerator_t5798 *, const MethodInfo*))ShimEnumerator_get_Value_m36260_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m36261_gshared (ShimEnumerator_t5798 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m36261(__this, method) (( Object_t * (*) (ShimEnumerator_t5798 *, const MethodInfo*))ShimEnumerator_get_Current_m36261_gshared)(__this, method)
