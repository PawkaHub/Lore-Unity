#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>
struct ShimEnumerator_t9128;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t9119;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m65929_gshared (ShimEnumerator_t9128 * __this, Dictionary_2_t9119 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m65929(__this, ___host, method) (( void (*) (ShimEnumerator_t9128 *, Dictionary_2_t9119 *, const MethodInfo*))ShimEnumerator__ctor_m65929_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m65930_gshared (ShimEnumerator_t9128 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m65930(__this, method) (( bool (*) (ShimEnumerator_t9128 *, const MethodInfo*))ShimEnumerator_MoveNext_m65930_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m65931_gshared (ShimEnumerator_t9128 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m65931(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t9128 *, const MethodInfo*))ShimEnumerator_get_Entry_m65931_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m65932_gshared (ShimEnumerator_t9128 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m65932(__this, method) (( Object_t * (*) (ShimEnumerator_t9128 *, const MethodInfo*))ShimEnumerator_get_Key_m65932_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m65933_gshared (ShimEnumerator_t9128 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m65933(__this, method) (( Object_t * (*) (ShimEnumerator_t9128 *, const MethodInfo*))ShimEnumerator_get_Value_m65933_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m65934_gshared (ShimEnumerator_t9128 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m65934(__this, method) (( Object_t * (*) (ShimEnumerator_t9128 *, const MethodInfo*))ShimEnumerator_get_Current_m65934_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m65935_gshared (ShimEnumerator_t9128 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m65935(__this, method) (( void (*) (ShimEnumerator_t9128 *, const MethodInfo*))ShimEnumerator_Reset_m65935_gshared)(__this, method)
