#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>
struct ShimEnumerator_t6247;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m24898_gshared (ShimEnumerator_t6247 * __this, Dictionary_2_t28 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m24898(__this, ___host, method) (( void (*) (ShimEnumerator_t6247 *, Dictionary_2_t28 *, const MethodInfo*))ShimEnumerator__ctor_m24898_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m24899_gshared (ShimEnumerator_t6247 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m24899(__this, method) (( bool (*) (ShimEnumerator_t6247 *, const MethodInfo*))ShimEnumerator_MoveNext_m24899_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m24900_gshared (ShimEnumerator_t6247 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m24900(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t6247 *, const MethodInfo*))ShimEnumerator_get_Entry_m24900_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m24901_gshared (ShimEnumerator_t6247 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m24901(__this, method) (( Object_t * (*) (ShimEnumerator_t6247 *, const MethodInfo*))ShimEnumerator_get_Key_m24901_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m24902_gshared (ShimEnumerator_t6247 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m24902(__this, method) (( Object_t * (*) (ShimEnumerator_t6247 *, const MethodInfo*))ShimEnumerator_get_Value_m24902_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m24903_gshared (ShimEnumerator_t6247 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m24903(__this, method) (( Object_t * (*) (ShimEnumerator_t6247 *, const MethodInfo*))ShimEnumerator_get_Current_m24903_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m24904_gshared (ShimEnumerator_t6247 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m24904(__this, method) (( void (*) (ShimEnumerator_t6247 *, const MethodInfo*))ShimEnumerator_Reset_m24904_gshared)(__this, method)
