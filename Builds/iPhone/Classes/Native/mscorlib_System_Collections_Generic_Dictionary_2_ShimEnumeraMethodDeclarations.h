#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t5994;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1828;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m24290_gshared (ShimEnumerator_t5994 * __this, Dictionary_2_t1828 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m24290(__this, ___host, method) (( void (*) (ShimEnumerator_t5994 *, Dictionary_2_t1828 *, const MethodInfo*))ShimEnumerator__ctor_m24290_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m24291_gshared (ShimEnumerator_t5994 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m24291(__this, method) (( bool (*) (ShimEnumerator_t5994 *, const MethodInfo*))ShimEnumerator_MoveNext_m24291_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m24292_gshared (ShimEnumerator_t5994 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m24292(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t5994 *, const MethodInfo*))ShimEnumerator_get_Entry_m24292_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m24293_gshared (ShimEnumerator_t5994 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m24293(__this, method) (( Object_t * (*) (ShimEnumerator_t5994 *, const MethodInfo*))ShimEnumerator_get_Key_m24293_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m24294_gshared (ShimEnumerator_t5994 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m24294(__this, method) (( Object_t * (*) (ShimEnumerator_t5994 *, const MethodInfo*))ShimEnumerator_get_Value_m24294_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m24295_gshared (ShimEnumerator_t5994 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m24295(__this, method) (( Object_t * (*) (ShimEnumerator_t5994 *, const MethodInfo*))ShimEnumerator_get_Current_m24295_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m24296_gshared (ShimEnumerator_t5994 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m24296(__this, method) (( void (*) (ShimEnumerator_t5994 *, const MethodInfo*))ShimEnumerator_Reset_m24296_gshared)(__this, method)
