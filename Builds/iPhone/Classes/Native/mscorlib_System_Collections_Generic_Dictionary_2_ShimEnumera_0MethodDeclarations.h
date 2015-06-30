#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>
struct ShimEnumerator_t4921;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23118_gshared (ShimEnumerator_t4921 * __this, Dictionary_2_t28 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23118(__this, ___host, method) (( void (*) (ShimEnumerator_t4921 *, Dictionary_2_t28 *, const MethodInfo*))ShimEnumerator__ctor_m23118_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23119_gshared (ShimEnumerator_t4921 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23119(__this, method) (( bool (*) (ShimEnumerator_t4921 *, const MethodInfo*))ShimEnumerator_MoveNext_m23119_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m23120_gshared (ShimEnumerator_t4921 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23120(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t4921 *, const MethodInfo*))ShimEnumerator_get_Entry_m23120_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23121_gshared (ShimEnumerator_t4921 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23121(__this, method) (( Object_t * (*) (ShimEnumerator_t4921 *, const MethodInfo*))ShimEnumerator_get_Key_m23121_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23122_gshared (ShimEnumerator_t4921 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23122(__this, method) (( Object_t * (*) (ShimEnumerator_t4921 *, const MethodInfo*))ShimEnumerator_get_Value_m23122_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23123_gshared (ShimEnumerator_t4921 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23123(__this, method) (( Object_t * (*) (ShimEnumerator_t4921 *, const MethodInfo*))ShimEnumerator_get_Current_m23123_gshared)(__this, method)
