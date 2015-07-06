#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>
struct ShimEnumerator_t6693;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t6682;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m35827_gshared (ShimEnumerator_t6693 * __this, Dictionary_2_t6682 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m35827(__this, ___host, method) (( void (*) (ShimEnumerator_t6693 *, Dictionary_2_t6682 *, const MethodInfo*))ShimEnumerator__ctor_m35827_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m35828_gshared (ShimEnumerator_t6693 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m35828(__this, method) (( bool (*) (ShimEnumerator_t6693 *, const MethodInfo*))ShimEnumerator_MoveNext_m35828_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m35829_gshared (ShimEnumerator_t6693 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m35829(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t6693 *, const MethodInfo*))ShimEnumerator_get_Entry_m35829_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m35830_gshared (ShimEnumerator_t6693 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m35830(__this, method) (( Object_t * (*) (ShimEnumerator_t6693 *, const MethodInfo*))ShimEnumerator_get_Key_m35830_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m35831_gshared (ShimEnumerator_t6693 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m35831(__this, method) (( Object_t * (*) (ShimEnumerator_t6693 *, const MethodInfo*))ShimEnumerator_get_Value_m35831_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m35832_gshared (ShimEnumerator_t6693 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m35832(__this, method) (( Object_t * (*) (ShimEnumerator_t6693 *, const MethodInfo*))ShimEnumerator_get_Current_m35832_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::Reset()
extern "C" void ShimEnumerator_Reset_m35833_gshared (ShimEnumerator_t6693 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m35833(__this, method) (( void (*) (ShimEnumerator_t6693 *, const MethodInfo*))ShimEnumerator_Reset_m35833_gshared)(__this, method)
