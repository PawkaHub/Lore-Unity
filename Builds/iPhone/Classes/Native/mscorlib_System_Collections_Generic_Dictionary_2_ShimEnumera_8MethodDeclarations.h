#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
struct ShimEnumerator_t5695;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t5686;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m34662_gshared (ShimEnumerator_t5695 * __this, Dictionary_2_t5686 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m34662(__this, ___host, method) (( void (*) (ShimEnumerator_t5695 *, Dictionary_2_t5686 *, const MethodInfo*))ShimEnumerator__ctor_m34662_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m34663_gshared (ShimEnumerator_t5695 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m34663(__this, method) (( bool (*) (ShimEnumerator_t5695 *, const MethodInfo*))ShimEnumerator_MoveNext_m34663_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m34664_gshared (ShimEnumerator_t5695 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m34664(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t5695 *, const MethodInfo*))ShimEnumerator_get_Entry_m34664_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m34665_gshared (ShimEnumerator_t5695 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m34665(__this, method) (( Object_t * (*) (ShimEnumerator_t5695 *, const MethodInfo*))ShimEnumerator_get_Key_m34665_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m34666_gshared (ShimEnumerator_t5695 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m34666(__this, method) (( Object_t * (*) (ShimEnumerator_t5695 *, const MethodInfo*))ShimEnumerator_get_Value_m34666_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m34667_gshared (ShimEnumerator_t5695 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m34667(__this, method) (( Object_t * (*) (ShimEnumerator_t5695 *, const MethodInfo*))ShimEnumerator_get_Current_m34667_gshared)(__this, method)
