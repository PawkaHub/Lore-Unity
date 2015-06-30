#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t5182;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2877;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m26948_gshared (ShimEnumerator_t5182 * __this, Dictionary_2_t2877 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m26948(__this, ___host, method) (( void (*) (ShimEnumerator_t5182 *, Dictionary_2_t2877 *, const MethodInfo*))ShimEnumerator__ctor_m26948_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m26949_gshared (ShimEnumerator_t5182 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m26949(__this, method) (( bool (*) (ShimEnumerator_t5182 *, const MethodInfo*))ShimEnumerator_MoveNext_m26949_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m26950_gshared (ShimEnumerator_t5182 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m26950(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t5182 *, const MethodInfo*))ShimEnumerator_get_Entry_m26950_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m26951_gshared (ShimEnumerator_t5182 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m26951(__this, method) (( Object_t * (*) (ShimEnumerator_t5182 *, const MethodInfo*))ShimEnumerator_get_Key_m26951_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m26952_gshared (ShimEnumerator_t5182 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m26952(__this, method) (( Object_t * (*) (ShimEnumerator_t5182 *, const MethodInfo*))ShimEnumerator_get_Value_m26952_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m26953_gshared (ShimEnumerator_t5182 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m26953(__this, method) (( Object_t * (*) (ShimEnumerator_t5182 *, const MethodInfo*))ShimEnumerator_get_Current_m26953_gshared)(__this, method)
