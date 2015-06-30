#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>
struct ShimEnumerator_t5459;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t5448;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m31831_gshared (ShimEnumerator_t5459 * __this, Dictionary_2_t5448 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m31831(__this, ___host, method) (( void (*) (ShimEnumerator_t5459 *, Dictionary_2_t5448 *, const MethodInfo*))ShimEnumerator__ctor_m31831_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m31832_gshared (ShimEnumerator_t5459 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m31832(__this, method) (( bool (*) (ShimEnumerator_t5459 *, const MethodInfo*))ShimEnumerator_MoveNext_m31832_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m31833_gshared (ShimEnumerator_t5459 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m31833(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t5459 *, const MethodInfo*))ShimEnumerator_get_Entry_m31833_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m31834_gshared (ShimEnumerator_t5459 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m31834(__this, method) (( Object_t * (*) (ShimEnumerator_t5459 *, const MethodInfo*))ShimEnumerator_get_Key_m31834_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m31835_gshared (ShimEnumerator_t5459 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m31835(__this, method) (( Object_t * (*) (ShimEnumerator_t5459 *, const MethodInfo*))ShimEnumerator_get_Value_m31835_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m31836_gshared (ShimEnumerator_t5459 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m31836(__this, method) (( Object_t * (*) (ShimEnumerator_t5459 *, const MethodInfo*))ShimEnumerator_get_Current_m31836_gshared)(__this, method)
