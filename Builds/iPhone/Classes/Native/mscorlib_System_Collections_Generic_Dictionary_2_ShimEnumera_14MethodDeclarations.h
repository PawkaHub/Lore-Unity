#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct ShimEnumerator_t6327;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3231;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m44443_gshared (ShimEnumerator_t6327 * __this, Dictionary_2_t3231 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m44443(__this, ___host, method) (( void (*) (ShimEnumerator_t6327 *, Dictionary_2_t3231 *, const MethodInfo*))ShimEnumerator__ctor_m44443_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m44444_gshared (ShimEnumerator_t6327 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m44444(__this, method) (( bool (*) (ShimEnumerator_t6327 *, const MethodInfo*))ShimEnumerator_MoveNext_m44444_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m44445_gshared (ShimEnumerator_t6327 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m44445(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t6327 *, const MethodInfo*))ShimEnumerator_get_Entry_m44445_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m44446_gshared (ShimEnumerator_t6327 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m44446(__this, method) (( Object_t * (*) (ShimEnumerator_t6327 *, const MethodInfo*))ShimEnumerator_get_Key_m44446_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m44447_gshared (ShimEnumerator_t6327 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m44447(__this, method) (( Object_t * (*) (ShimEnumerator_t6327 *, const MethodInfo*))ShimEnumerator_get_Value_m44447_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m44448_gshared (ShimEnumerator_t6327 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m44448(__this, method) (( Object_t * (*) (ShimEnumerator_t6327 *, const MethodInfo*))ShimEnumerator_get_Current_m44448_gshared)(__this, method)
