#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>
struct ShimEnumerator_t6731;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>
struct Dictionary_2_t6720;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m31973_gshared (ShimEnumerator_t6731 * __this, Dictionary_2_t6720 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m31973(__this, ___host, method) (( void (*) (ShimEnumerator_t6731 *, Dictionary_2_t6720 *, const MethodInfo*))ShimEnumerator__ctor_m31973_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m31974_gshared (ShimEnumerator_t6731 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m31974(__this, method) (( bool (*) (ShimEnumerator_t6731 *, const MethodInfo*))ShimEnumerator_MoveNext_m31974_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m31975_gshared (ShimEnumerator_t6731 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m31975(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t6731 *, const MethodInfo*))ShimEnumerator_get_Entry_m31975_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m31976_gshared (ShimEnumerator_t6731 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m31976(__this, method) (( Object_t * (*) (ShimEnumerator_t6731 *, const MethodInfo*))ShimEnumerator_get_Key_m31976_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m31977_gshared (ShimEnumerator_t6731 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m31977(__this, method) (( Object_t * (*) (ShimEnumerator_t6731 *, const MethodInfo*))ShimEnumerator_get_Value_m31977_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m31978_gshared (ShimEnumerator_t6731 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m31978(__this, method) (( Object_t * (*) (ShimEnumerator_t6731 *, const MethodInfo*))ShimEnumerator_get_Current_m31978_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>::Reset()
extern "C" void ShimEnumerator_Reset_m31979_gshared (ShimEnumerator_t6731 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m31979(__this, method) (( void (*) (ShimEnumerator_t6731 *, const MethodInfo*))ShimEnumerator_Reset_m31979_gshared)(__this, method)
