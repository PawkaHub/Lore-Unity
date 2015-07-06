#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct ShimEnumerator_t9182;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3062;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m66614_gshared (ShimEnumerator_t9182 * __this, Dictionary_2_t3062 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m66614(__this, ___host, method) (( void (*) (ShimEnumerator_t9182 *, Dictionary_2_t3062 *, const MethodInfo*))ShimEnumerator__ctor_m66614_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m66615_gshared (ShimEnumerator_t9182 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m66615(__this, method) (( bool (*) (ShimEnumerator_t9182 *, const MethodInfo*))ShimEnumerator_MoveNext_m66615_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m66616_gshared (ShimEnumerator_t9182 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m66616(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t9182 *, const MethodInfo*))ShimEnumerator_get_Entry_m66616_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m66617_gshared (ShimEnumerator_t9182 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m66617(__this, method) (( Object_t * (*) (ShimEnumerator_t9182 *, const MethodInfo*))ShimEnumerator_get_Key_m66617_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m66618_gshared (ShimEnumerator_t9182 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m66618(__this, method) (( Object_t * (*) (ShimEnumerator_t9182 *, const MethodInfo*))ShimEnumerator_get_Value_m66618_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m66619_gshared (ShimEnumerator_t9182 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m66619(__this, method) (( Object_t * (*) (ShimEnumerator_t9182 *, const MethodInfo*))ShimEnumerator_get_Current_m66619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void ShimEnumerator_Reset_m66620_gshared (ShimEnumerator_t9182 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m66620(__this, method) (( void (*) (ShimEnumerator_t9182 *, const MethodInfo*))ShimEnumerator_Reset_m66620_gshared)(__this, method)
