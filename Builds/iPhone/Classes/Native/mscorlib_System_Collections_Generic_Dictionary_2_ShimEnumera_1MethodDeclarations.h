#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>
struct ShimEnumerator_t4941;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t4930;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23318_gshared (ShimEnumerator_t4941 * __this, Dictionary_2_t4930 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23318(__this, ___host, method) (( void (*) (ShimEnumerator_t4941 *, Dictionary_2_t4930 *, const MethodInfo*))ShimEnumerator__ctor_m23318_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23319_gshared (ShimEnumerator_t4941 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23319(__this, method) (( bool (*) (ShimEnumerator_t4941 *, const MethodInfo*))ShimEnumerator_MoveNext_m23319_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m23320_gshared (ShimEnumerator_t4941 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23320(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t4941 *, const MethodInfo*))ShimEnumerator_get_Entry_m23320_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23321_gshared (ShimEnumerator_t4941 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23321(__this, method) (( Object_t * (*) (ShimEnumerator_t4941 *, const MethodInfo*))ShimEnumerator_get_Key_m23321_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23322_gshared (ShimEnumerator_t4941 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23322(__this, method) (( Object_t * (*) (ShimEnumerator_t4941 *, const MethodInfo*))ShimEnumerator_get_Value_m23322_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23323_gshared (ShimEnumerator_t4941 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23323(__this, method) (( Object_t * (*) (ShimEnumerator_t4941 *, const MethodInfo*))ShimEnumerator_get_Current_m23323_gshared)(__this, method)
