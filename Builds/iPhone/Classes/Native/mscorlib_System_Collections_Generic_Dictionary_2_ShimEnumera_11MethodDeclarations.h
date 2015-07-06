#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>
struct ShimEnumerator_t7895;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7886;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m51385_gshared (ShimEnumerator_t7895 * __this, Dictionary_2_t7886 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m51385(__this, ___host, method) (( void (*) (ShimEnumerator_t7895 *, Dictionary_2_t7886 *, const MethodInfo*))ShimEnumerator__ctor_m51385_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m51386_gshared (ShimEnumerator_t7895 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m51386(__this, method) (( bool (*) (ShimEnumerator_t7895 *, const MethodInfo*))ShimEnumerator_MoveNext_m51386_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m51387_gshared (ShimEnumerator_t7895 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m51387(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t7895 *, const MethodInfo*))ShimEnumerator_get_Entry_m51387_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m51388_gshared (ShimEnumerator_t7895 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m51388(__this, method) (( Object_t * (*) (ShimEnumerator_t7895 *, const MethodInfo*))ShimEnumerator_get_Key_m51388_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m51389_gshared (ShimEnumerator_t7895 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m51389(__this, method) (( Object_t * (*) (ShimEnumerator_t7895 *, const MethodInfo*))ShimEnumerator_get_Value_m51389_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m51390_gshared (ShimEnumerator_t7895 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m51390(__this, method) (( Object_t * (*) (ShimEnumerator_t7895 *, const MethodInfo*))ShimEnumerator_get_Current_m51390_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::Reset()
extern "C" void ShimEnumerator_Reset_m51391_gshared (ShimEnumerator_t7895 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m51391(__this, method) (( void (*) (ShimEnumerator_t7895 *, const MethodInfo*))ShimEnumerator_Reset_m51391_gshared)(__this, method)
