#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t6997;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1433;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m36783_gshared (ShimEnumerator_t6997 * __this, Dictionary_2_t1433 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m36783(__this, ___host, method) (( void (*) (ShimEnumerator_t6997 *, Dictionary_2_t1433 *, const MethodInfo*))ShimEnumerator__ctor_m36783_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m36784_gshared (ShimEnumerator_t6997 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m36784(__this, method) (( bool (*) (ShimEnumerator_t6997 *, const MethodInfo*))ShimEnumerator_MoveNext_m36784_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m36785_gshared (ShimEnumerator_t6997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m36785(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t6997 *, const MethodInfo*))ShimEnumerator_get_Entry_m36785_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m36786_gshared (ShimEnumerator_t6997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m36786(__this, method) (( Object_t * (*) (ShimEnumerator_t6997 *, const MethodInfo*))ShimEnumerator_get_Key_m36786_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m36787_gshared (ShimEnumerator_t6997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m36787(__this, method) (( Object_t * (*) (ShimEnumerator_t6997 *, const MethodInfo*))ShimEnumerator_get_Value_m36787_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m36788_gshared (ShimEnumerator_t6997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m36788(__this, method) (( Object_t * (*) (ShimEnumerator_t6997 *, const MethodInfo*))ShimEnumerator_get_Current_m36788_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m36789_gshared (ShimEnumerator_t6997 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m36789(__this, method) (( void (*) (ShimEnumerator_t6997 *, const MethodInfo*))ShimEnumerator_Reset_m36789_gshared)(__this, method)
