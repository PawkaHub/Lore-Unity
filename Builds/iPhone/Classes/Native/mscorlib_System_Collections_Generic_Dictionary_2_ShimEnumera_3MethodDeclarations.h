#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t6652;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6641;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m30868_gshared (ShimEnumerator_t6652 * __this, Dictionary_2_t6641 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m30868(__this, ___host, method) (( void (*) (ShimEnumerator_t6652 *, Dictionary_2_t6641 *, const MethodInfo*))ShimEnumerator__ctor_m30868_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m30869_gshared (ShimEnumerator_t6652 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m30869(__this, method) (( bool (*) (ShimEnumerator_t6652 *, const MethodInfo*))ShimEnumerator_MoveNext_m30869_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m30870_gshared (ShimEnumerator_t6652 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m30870(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t6652 *, const MethodInfo*))ShimEnumerator_get_Entry_m30870_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m30871_gshared (ShimEnumerator_t6652 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m30871(__this, method) (( Object_t * (*) (ShimEnumerator_t6652 *, const MethodInfo*))ShimEnumerator_get_Key_m30871_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m30872_gshared (ShimEnumerator_t6652 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m30872(__this, method) (( Object_t * (*) (ShimEnumerator_t6652 *, const MethodInfo*))ShimEnumerator_get_Value_m30872_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m30873_gshared (ShimEnumerator_t6652 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m30873(__this, method) (( Object_t * (*) (ShimEnumerator_t6652 *, const MethodInfo*))ShimEnumerator_get_Current_m30873_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m30874_gshared (ShimEnumerator_t6652 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m30874(__this, method) (( void (*) (ShimEnumerator_t6652 *, const MethodInfo*))ShimEnumerator_Reset_m30874_gshared)(__this, method)
