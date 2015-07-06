#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t7030;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t7021;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m40023_gshared (ShimEnumerator_t7030 * __this, Dictionary_2_t7021 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m40023(__this, ___host, method) (( void (*) (ShimEnumerator_t7030 *, Dictionary_2_t7021 *, const MethodInfo*))ShimEnumerator__ctor_m40023_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m40024_gshared (ShimEnumerator_t7030 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m40024(__this, method) (( bool (*) (ShimEnumerator_t7030 *, const MethodInfo*))ShimEnumerator_MoveNext_m40024_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m40025_gshared (ShimEnumerator_t7030 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m40025(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t7030 *, const MethodInfo*))ShimEnumerator_get_Entry_m40025_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m40026_gshared (ShimEnumerator_t7030 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m40026(__this, method) (( Object_t * (*) (ShimEnumerator_t7030 *, const MethodInfo*))ShimEnumerator_get_Key_m40026_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m40027_gshared (ShimEnumerator_t7030 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m40027(__this, method) (( Object_t * (*) (ShimEnumerator_t7030 *, const MethodInfo*))ShimEnumerator_get_Value_m40027_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m40028_gshared (ShimEnumerator_t7030 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m40028(__this, method) (( Object_t * (*) (ShimEnumerator_t7030 *, const MethodInfo*))ShimEnumerator_get_Current_m40028_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m40029_gshared (ShimEnumerator_t7030 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m40029(__this, method) (( void (*) (ShimEnumerator_t7030 *, const MethodInfo*))ShimEnumerator_Reset_m40029_gshared)(__this, method)
