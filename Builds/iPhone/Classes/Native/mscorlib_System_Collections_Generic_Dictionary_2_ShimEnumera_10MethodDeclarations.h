#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>
struct ShimEnumerator_t7869;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7860;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m51034_gshared (ShimEnumerator_t7869 * __this, Dictionary_2_t7860 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m51034(__this, ___host, method) (( void (*) (ShimEnumerator_t7869 *, Dictionary_2_t7860 *, const MethodInfo*))ShimEnumerator__ctor_m51034_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m51035_gshared (ShimEnumerator_t7869 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m51035(__this, method) (( bool (*) (ShimEnumerator_t7869 *, const MethodInfo*))ShimEnumerator_MoveNext_m51035_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m51036_gshared (ShimEnumerator_t7869 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m51036(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t7869 *, const MethodInfo*))ShimEnumerator_get_Entry_m51036_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m51037_gshared (ShimEnumerator_t7869 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m51037(__this, method) (( Object_t * (*) (ShimEnumerator_t7869 *, const MethodInfo*))ShimEnumerator_get_Key_m51037_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m51038_gshared (ShimEnumerator_t7869 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m51038(__this, method) (( Object_t * (*) (ShimEnumerator_t7869 *, const MethodInfo*))ShimEnumerator_get_Value_m51038_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m51039_gshared (ShimEnumerator_t7869 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m51039(__this, method) (( Object_t * (*) (ShimEnumerator_t7869 *, const MethodInfo*))ShimEnumerator_get_Current_m51039_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::Reset()
extern "C" void ShimEnumerator_Reset_m51040_gshared (ShimEnumerator_t7869 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m51040(__this, method) (( void (*) (ShimEnumerator_t7869 *, const MethodInfo*))ShimEnumerator_Reset_m51040_gshared)(__this, method)
