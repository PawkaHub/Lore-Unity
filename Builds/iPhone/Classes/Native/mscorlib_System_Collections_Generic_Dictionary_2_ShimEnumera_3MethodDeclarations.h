#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t5236;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5225;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m27919_gshared (ShimEnumerator_t5236 * __this, Dictionary_2_t5225 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m27919(__this, ___host, method) (( void (*) (ShimEnumerator_t5236 *, Dictionary_2_t5225 *, const MethodInfo*))ShimEnumerator__ctor_m27919_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m27920_gshared (ShimEnumerator_t5236 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m27920(__this, method) (( bool (*) (ShimEnumerator_t5236 *, const MethodInfo*))ShimEnumerator_MoveNext_m27920_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m27921_gshared (ShimEnumerator_t5236 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m27921(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t5236 *, const MethodInfo*))ShimEnumerator_get_Entry_m27921_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m27922_gshared (ShimEnumerator_t5236 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m27922(__this, method) (( Object_t * (*) (ShimEnumerator_t5236 *, const MethodInfo*))ShimEnumerator_get_Key_m27922_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m27923_gshared (ShimEnumerator_t5236 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m27923(__this, method) (( Object_t * (*) (ShimEnumerator_t5236 *, const MethodInfo*))ShimEnumerator_get_Value_m27923_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m27924_gshared (ShimEnumerator_t5236 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m27924(__this, method) (( Object_t * (*) (ShimEnumerator_t5236 *, const MethodInfo*))ShimEnumerator_get_Current_m27924_gshared)(__this, method)
