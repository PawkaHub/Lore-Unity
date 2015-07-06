#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t6666;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1174;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m35334_gshared (ShimEnumerator_t6666 * __this, Dictionary_2_t1174 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m35334(__this, ___host, method) (( void (*) (ShimEnumerator_t6666 *, Dictionary_2_t1174 *, const MethodInfo*))ShimEnumerator__ctor_m35334_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m35335_gshared (ShimEnumerator_t6666 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m35335(__this, method) (( bool (*) (ShimEnumerator_t6666 *, const MethodInfo*))ShimEnumerator_MoveNext_m35335_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m35336_gshared (ShimEnumerator_t6666 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m35336(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t6666 *, const MethodInfo*))ShimEnumerator_get_Entry_m35336_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m35337_gshared (ShimEnumerator_t6666 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m35337(__this, method) (( Object_t * (*) (ShimEnumerator_t6666 *, const MethodInfo*))ShimEnumerator_get_Key_m35337_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m35338_gshared (ShimEnumerator_t6666 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m35338(__this, method) (( Object_t * (*) (ShimEnumerator_t6666 *, const MethodInfo*))ShimEnumerator_get_Value_m35338_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m35339_gshared (ShimEnumerator_t6666 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m35339(__this, method) (( Object_t * (*) (ShimEnumerator_t6666 *, const MethodInfo*))ShimEnumerator_get_Current_m35339_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m35340_gshared (ShimEnumerator_t6666 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m35340(__this, method) (( void (*) (ShimEnumerator_t6666 *, const MethodInfo*))ShimEnumerator_Reset_m35340_gshared)(__this, method)
