#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t6598;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t4850;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m29874_gshared (ShimEnumerator_t6598 * __this, Dictionary_2_t4850 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m29874(__this, ___host, method) (( void (*) (ShimEnumerator_t6598 *, Dictionary_2_t4850 *, const MethodInfo*))ShimEnumerator__ctor_m29874_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m29875_gshared (ShimEnumerator_t6598 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m29875(__this, method) (( bool (*) (ShimEnumerator_t6598 *, const MethodInfo*))ShimEnumerator_MoveNext_m29875_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m29876_gshared (ShimEnumerator_t6598 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m29876(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t6598 *, const MethodInfo*))ShimEnumerator_get_Entry_m29876_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m29877_gshared (ShimEnumerator_t6598 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m29877(__this, method) (( Object_t * (*) (ShimEnumerator_t6598 *, const MethodInfo*))ShimEnumerator_get_Key_m29877_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m29878_gshared (ShimEnumerator_t6598 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m29878(__this, method) (( Object_t * (*) (ShimEnumerator_t6598 *, const MethodInfo*))ShimEnumerator_get_Value_m29878_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m29879_gshared (ShimEnumerator_t6598 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m29879(__this, method) (( Object_t * (*) (ShimEnumerator_t6598 *, const MethodInfo*))ShimEnumerator_get_Current_m29879_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m29880_gshared (ShimEnumerator_t6598 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m29880(__this, method) (( void (*) (ShimEnumerator_t6598 *, const MethodInfo*))ShimEnumerator_Reset_m29880_gshared)(__this, method)
