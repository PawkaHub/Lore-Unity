#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
struct ShimEnumerator_t6832;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6823;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m37602_gshared (ShimEnumerator_t6832 * __this, Dictionary_2_t6823 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m37602(__this, ___host, method) (( void (*) (ShimEnumerator_t6832 *, Dictionary_2_t6823 *, const MethodInfo*))ShimEnumerator__ctor_m37602_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m37603_gshared (ShimEnumerator_t6832 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m37603(__this, method) (( bool (*) (ShimEnumerator_t6832 *, const MethodInfo*))ShimEnumerator_MoveNext_m37603_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m37604_gshared (ShimEnumerator_t6832 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m37604(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t6832 *, const MethodInfo*))ShimEnumerator_get_Entry_m37604_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m37605_gshared (ShimEnumerator_t6832 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m37605(__this, method) (( Object_t * (*) (ShimEnumerator_t6832 *, const MethodInfo*))ShimEnumerator_get_Key_m37605_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m37606_gshared (ShimEnumerator_t6832 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m37606(__this, method) (( Object_t * (*) (ShimEnumerator_t6832 *, const MethodInfo*))ShimEnumerator_get_Value_m37606_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m37607_gshared (ShimEnumerator_t6832 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m37607(__this, method) (( Object_t * (*) (ShimEnumerator_t6832 *, const MethodInfo*))ShimEnumerator_get_Current_m37607_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m37608_gshared (ShimEnumerator_t6832 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m37608(__this, method) (( void (*) (ShimEnumerator_t6832 *, const MethodInfo*))ShimEnumerator_Reset_m37608_gshared)(__this, method)
