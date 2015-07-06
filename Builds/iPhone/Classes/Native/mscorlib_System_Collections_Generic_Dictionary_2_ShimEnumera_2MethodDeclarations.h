#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t6270;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t4612;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m28401_gshared (ShimEnumerator_t6270 * __this, Dictionary_2_t4612 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m28401(__this, ___host, method) (( void (*) (ShimEnumerator_t6270 *, Dictionary_2_t4612 *, const MethodInfo*))ShimEnumerator__ctor_m28401_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m28402_gshared (ShimEnumerator_t6270 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m28402(__this, method) (( bool (*) (ShimEnumerator_t6270 *, const MethodInfo*))ShimEnumerator_MoveNext_m28402_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m28403_gshared (ShimEnumerator_t6270 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m28403(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t6270 *, const MethodInfo*))ShimEnumerator_get_Entry_m28403_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m28404_gshared (ShimEnumerator_t6270 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m28404(__this, method) (( Object_t * (*) (ShimEnumerator_t6270 *, const MethodInfo*))ShimEnumerator_get_Key_m28404_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m28405_gshared (ShimEnumerator_t6270 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m28405(__this, method) (( Object_t * (*) (ShimEnumerator_t6270 *, const MethodInfo*))ShimEnumerator_get_Value_m28405_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m28406_gshared (ShimEnumerator_t6270 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m28406(__this, method) (( Object_t * (*) (ShimEnumerator_t6270 *, const MethodInfo*))ShimEnumerator_get_Current_m28406_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m28407_gshared (ShimEnumerator_t6270 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m28407(__this, method) (( void (*) (ShimEnumerator_t6270 *, const MethodInfo*))ShimEnumerator_Reset_m28407_gshared)(__this, method)
