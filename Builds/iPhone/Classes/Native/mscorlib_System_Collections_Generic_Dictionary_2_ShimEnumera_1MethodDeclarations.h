#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>
struct ShimEnumerator_t6267;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t6256;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25105_gshared (ShimEnumerator_t6267 * __this, Dictionary_2_t6256 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25105(__this, ___host, method) (( void (*) (ShimEnumerator_t6267 *, Dictionary_2_t6256 *, const MethodInfo*))ShimEnumerator__ctor_m25105_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25106_gshared (ShimEnumerator_t6267 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25106(__this, method) (( bool (*) (ShimEnumerator_t6267 *, const MethodInfo*))ShimEnumerator_MoveNext_m25106_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m25107_gshared (ShimEnumerator_t6267 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25107(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t6267 *, const MethodInfo*))ShimEnumerator_get_Entry_m25107_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25108_gshared (ShimEnumerator_t6267 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25108(__this, method) (( Object_t * (*) (ShimEnumerator_t6267 *, const MethodInfo*))ShimEnumerator_get_Key_m25108_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25109_gshared (ShimEnumerator_t6267 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25109(__this, method) (( Object_t * (*) (ShimEnumerator_t6267 *, const MethodInfo*))ShimEnumerator_get_Value_m25109_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25110_gshared (ShimEnumerator_t6267 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25110(__this, method) (( Object_t * (*) (ShimEnumerator_t6267 *, const MethodInfo*))ShimEnumerator_get_Current_m25110_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m25111_gshared (ShimEnumerator_t6267 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m25111(__this, method) (( void (*) (ShimEnumerator_t6267 *, const MethodInfo*))ShimEnumerator_Reset_m25111_gshared)(__this, method)
