#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
struct ShimEnumerator_t7305;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t7296;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m40815_gshared (ShimEnumerator_t7305 * __this, Dictionary_2_t7296 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m40815(__this, ___host, method) (( void (*) (ShimEnumerator_t7305 *, Dictionary_2_t7296 *, const MethodInfo*))ShimEnumerator__ctor_m40815_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m40816_gshared (ShimEnumerator_t7305 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m40816(__this, method) (( bool (*) (ShimEnumerator_t7305 *, const MethodInfo*))ShimEnumerator_MoveNext_m40816_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m40817_gshared (ShimEnumerator_t7305 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m40817(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t7305 *, const MethodInfo*))ShimEnumerator_get_Entry_m40817_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m40818_gshared (ShimEnumerator_t7305 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m40818(__this, method) (( Object_t * (*) (ShimEnumerator_t7305 *, const MethodInfo*))ShimEnumerator_get_Key_m40818_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m40819_gshared (ShimEnumerator_t7305 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m40819(__this, method) (( Object_t * (*) (ShimEnumerator_t7305 *, const MethodInfo*))ShimEnumerator_get_Value_m40819_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m40820_gshared (ShimEnumerator_t7305 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m40820(__this, method) (( Object_t * (*) (ShimEnumerator_t7305 *, const MethodInfo*))ShimEnumerator_get_Current_m40820_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m40821_gshared (ShimEnumerator_t7305 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m40821(__this, method) (( void (*) (ShimEnumerator_t7305 *, const MethodInfo*))ShimEnumerator_Reset_m40821_gshared)(__this, method)
