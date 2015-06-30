#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t6148;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t6137;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m41772_gshared (ShimEnumerator_t6148 * __this, Dictionary_2_t6137 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m41772(__this, ___host, method) (( void (*) (ShimEnumerator_t6148 *, Dictionary_2_t6137 *, const MethodInfo*))ShimEnumerator__ctor_m41772_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m41773_gshared (ShimEnumerator_t6148 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m41773(__this, method) (( bool (*) (ShimEnumerator_t6148 *, const MethodInfo*))ShimEnumerator_MoveNext_m41773_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m41774_gshared (ShimEnumerator_t6148 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m41774(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t6148 *, const MethodInfo*))ShimEnumerator_get_Entry_m41774_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m41775_gshared (ShimEnumerator_t6148 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m41775(__this, method) (( Object_t * (*) (ShimEnumerator_t6148 *, const MethodInfo*))ShimEnumerator_get_Key_m41775_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m41776_gshared (ShimEnumerator_t6148 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m41776(__this, method) (( Object_t * (*) (ShimEnumerator_t6148 *, const MethodInfo*))ShimEnumerator_get_Value_m41776_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m41777_gshared (ShimEnumerator_t6148 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m41777(__this, method) (( Object_t * (*) (ShimEnumerator_t6148 *, const MethodInfo*))ShimEnumerator_get_Current_m41777_gshared)(__this, method)
