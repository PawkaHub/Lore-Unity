#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>
struct ShimEnumerator_t6029;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t6018;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m24688_gshared (ShimEnumerator_t6029 * __this, Dictionary_2_t6018 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m24688(__this, ___host, method) (( void (*) (ShimEnumerator_t6029 *, Dictionary_2_t6018 *, const MethodInfo*))ShimEnumerator__ctor_m24688_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m24689_gshared (ShimEnumerator_t6029 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m24689(__this, method) (( bool (*) (ShimEnumerator_t6029 *, const MethodInfo*))ShimEnumerator_MoveNext_m24689_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m24690_gshared (ShimEnumerator_t6029 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m24690(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t6029 *, const MethodInfo*))ShimEnumerator_get_Entry_m24690_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m24691_gshared (ShimEnumerator_t6029 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m24691(__this, method) (( Object_t * (*) (ShimEnumerator_t6029 *, const MethodInfo*))ShimEnumerator_get_Key_m24691_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m24692_gshared (ShimEnumerator_t6029 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m24692(__this, method) (( Object_t * (*) (ShimEnumerator_t6029 *, const MethodInfo*))ShimEnumerator_get_Value_m24692_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m24693_gshared (ShimEnumerator_t6029 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m24693(__this, method) (( Object_t * (*) (ShimEnumerator_t6029 *, const MethodInfo*))ShimEnumerator_get_Current_m24693_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m24694_gshared (ShimEnumerator_t6029 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m24694(__this, method) (( void (*) (ShimEnumerator_t6029 *, const MethodInfo*))ShimEnumerator_Reset_m24694_gshared)(__this, method)
