#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t5707;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t5698;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m34846_gshared (ShimEnumerator_t5707 * __this, Dictionary_2_t5698 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m34846(__this, ___host, method) (( void (*) (ShimEnumerator_t5707 *, Dictionary_2_t5698 *, const MethodInfo*))ShimEnumerator__ctor_m34846_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m34847_gshared (ShimEnumerator_t5707 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m34847(__this, method) (( bool (*) (ShimEnumerator_t5707 *, const MethodInfo*))ShimEnumerator_MoveNext_m34847_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m34848_gshared (ShimEnumerator_t5707 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m34848(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t5707 *, const MethodInfo*))ShimEnumerator_get_Entry_m34848_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m34849_gshared (ShimEnumerator_t5707 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m34849(__this, method) (( Object_t * (*) (ShimEnumerator_t5707 *, const MethodInfo*))ShimEnumerator_get_Key_m34849_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m34850_gshared (ShimEnumerator_t5707 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m34850(__this, method) (( Object_t * (*) (ShimEnumerator_t5707 *, const MethodInfo*))ShimEnumerator_get_Value_m34850_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m34851_gshared (ShimEnumerator_t5707 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m34851(__this, method) (( Object_t * (*) (ShimEnumerator_t5707 *, const MethodInfo*))ShimEnumerator_get_Current_m34851_gshared)(__this, method)
