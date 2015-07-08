#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct ShimEnumerator_t9464;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3300;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m67529_gshared (ShimEnumerator_t9464 * __this, Dictionary_2_t3300 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m67529(__this, ___host, method) (( void (*) (ShimEnumerator_t9464 *, Dictionary_2_t3300 *, const MethodInfo*))ShimEnumerator__ctor_m67529_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m67530_gshared (ShimEnumerator_t9464 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m67530(__this, method) (( bool (*) (ShimEnumerator_t9464 *, const MethodInfo*))ShimEnumerator_MoveNext_m67530_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m67531_gshared (ShimEnumerator_t9464 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m67531(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t9464 *, const MethodInfo*))ShimEnumerator_get_Entry_m67531_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m67532_gshared (ShimEnumerator_t9464 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m67532(__this, method) (( Object_t * (*) (ShimEnumerator_t9464 *, const MethodInfo*))ShimEnumerator_get_Key_m67532_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m67533_gshared (ShimEnumerator_t9464 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m67533(__this, method) (( Object_t * (*) (ShimEnumerator_t9464 *, const MethodInfo*))ShimEnumerator_get_Value_m67533_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m67534_gshared (ShimEnumerator_t9464 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m67534(__this, method) (( Object_t * (*) (ShimEnumerator_t9464 *, const MethodInfo*))ShimEnumerator_get_Current_m67534_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void ShimEnumerator_Reset_m67535_gshared (ShimEnumerator_t9464 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m67535(__this, method) (( void (*) (ShimEnumerator_t9464 *, const MethodInfo*))ShimEnumerator_Reset_m67535_gshared)(__this, method)
