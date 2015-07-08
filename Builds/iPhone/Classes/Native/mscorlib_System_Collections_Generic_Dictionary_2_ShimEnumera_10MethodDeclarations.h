#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>
struct ShimEnumerator_t8151;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t8142;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m51949_gshared (ShimEnumerator_t8151 * __this, Dictionary_2_t8142 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m51949(__this, ___host, method) (( void (*) (ShimEnumerator_t8151 *, Dictionary_2_t8142 *, const MethodInfo*))ShimEnumerator__ctor_m51949_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m51950_gshared (ShimEnumerator_t8151 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m51950(__this, method) (( bool (*) (ShimEnumerator_t8151 *, const MethodInfo*))ShimEnumerator_MoveNext_m51950_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m51951_gshared (ShimEnumerator_t8151 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m51951(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t8151 *, const MethodInfo*))ShimEnumerator_get_Entry_m51951_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m51952_gshared (ShimEnumerator_t8151 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m51952(__this, method) (( Object_t * (*) (ShimEnumerator_t8151 *, const MethodInfo*))ShimEnumerator_get_Key_m51952_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m51953_gshared (ShimEnumerator_t8151 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m51953(__this, method) (( Object_t * (*) (ShimEnumerator_t8151 *, const MethodInfo*))ShimEnumerator_get_Value_m51953_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m51954_gshared (ShimEnumerator_t8151 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m51954(__this, method) (( Object_t * (*) (ShimEnumerator_t8151 *, const MethodInfo*))ShimEnumerator_get_Current_m51954_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::Reset()
extern "C" void ShimEnumerator_Reset_m51955_gshared (ShimEnumerator_t8151 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m51955(__this, method) (( void (*) (ShimEnumerator_t8151 *, const MethodInfo*))ShimEnumerator_Reset_m51955_gshared)(__this, method)
