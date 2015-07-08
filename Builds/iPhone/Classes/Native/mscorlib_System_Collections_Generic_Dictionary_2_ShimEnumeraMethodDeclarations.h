﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t6232;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2067;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m24707_gshared (ShimEnumerator_t6232 * __this, Dictionary_2_t2067 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m24707(__this, ___host, method) (( void (*) (ShimEnumerator_t6232 *, Dictionary_2_t2067 *, const MethodInfo*))ShimEnumerator__ctor_m24707_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m24708_gshared (ShimEnumerator_t6232 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m24708(__this, method) (( bool (*) (ShimEnumerator_t6232 *, const MethodInfo*))ShimEnumerator_MoveNext_m24708_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m24709_gshared (ShimEnumerator_t6232 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m24709(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t6232 *, const MethodInfo*))ShimEnumerator_get_Entry_m24709_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m24710_gshared (ShimEnumerator_t6232 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m24710(__this, method) (( Object_t * (*) (ShimEnumerator_t6232 *, const MethodInfo*))ShimEnumerator_get_Key_m24710_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m24711_gshared (ShimEnumerator_t6232 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m24711(__this, method) (( Object_t * (*) (ShimEnumerator_t6232 *, const MethodInfo*))ShimEnumerator_get_Value_m24711_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m24712_gshared (ShimEnumerator_t6232 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m24712(__this, method) (( Object_t * (*) (ShimEnumerator_t6232 *, const MethodInfo*))ShimEnumerator_get_Current_m24712_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m24713_gshared (ShimEnumerator_t6232 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m24713(__this, method) (( void (*) (ShimEnumerator_t6232 *, const MethodInfo*))ShimEnumerator_Reset_m24713_gshared)(__this, method)
