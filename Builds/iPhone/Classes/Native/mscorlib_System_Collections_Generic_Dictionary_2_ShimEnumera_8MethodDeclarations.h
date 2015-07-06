#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
struct ShimEnumerator_t7018;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t7009;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m39827_gshared (ShimEnumerator_t7018 * __this, Dictionary_2_t7009 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m39827(__this, ___host, method) (( void (*) (ShimEnumerator_t7018 *, Dictionary_2_t7009 *, const MethodInfo*))ShimEnumerator__ctor_m39827_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m39828_gshared (ShimEnumerator_t7018 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m39828(__this, method) (( bool (*) (ShimEnumerator_t7018 *, const MethodInfo*))ShimEnumerator_MoveNext_m39828_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m39829_gshared (ShimEnumerator_t7018 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m39829(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t7018 *, const MethodInfo*))ShimEnumerator_get_Entry_m39829_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m39830_gshared (ShimEnumerator_t7018 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m39830(__this, method) (( Object_t * (*) (ShimEnumerator_t7018 *, const MethodInfo*))ShimEnumerator_get_Key_m39830_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m39831_gshared (ShimEnumerator_t7018 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m39831(__this, method) (( Object_t * (*) (ShimEnumerator_t7018 *, const MethodInfo*))ShimEnumerator_get_Value_m39831_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m39832_gshared (ShimEnumerator_t7018 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m39832(__this, method) (( Object_t * (*) (ShimEnumerator_t7018 *, const MethodInfo*))ShimEnumerator_get_Current_m39832_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m39833_gshared (ShimEnumerator_t7018 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m39833(__this, method) (( void (*) (ShimEnumerator_t7018 *, const MethodInfo*))ShimEnumerator_Reset_m39833_gshared)(__this, method)
