#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t5432;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t849;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m31350_gshared (ShimEnumerator_t5432 * __this, Dictionary_2_t849 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m31350(__this, ___host, method) (( void (*) (ShimEnumerator_t5432 *, Dictionary_2_t849 *, const MethodInfo*))ShimEnumerator__ctor_m31350_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m31351_gshared (ShimEnumerator_t5432 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m31351(__this, method) (( bool (*) (ShimEnumerator_t5432 *, const MethodInfo*))ShimEnumerator_MoveNext_m31351_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m31352_gshared (ShimEnumerator_t5432 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m31352(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t5432 *, const MethodInfo*))ShimEnumerator_get_Entry_m31352_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m31353_gshared (ShimEnumerator_t5432 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m31353(__this, method) (( Object_t * (*) (ShimEnumerator_t5432 *, const MethodInfo*))ShimEnumerator_get_Key_m31353_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m31354_gshared (ShimEnumerator_t5432 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m31354(__this, method) (( Object_t * (*) (ShimEnumerator_t5432 *, const MethodInfo*))ShimEnumerator_get_Value_m31354_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m31355_gshared (ShimEnumerator_t5432 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m31355(__this, method) (( Object_t * (*) (ShimEnumerator_t5432 *, const MethodInfo*))ShimEnumerator_get_Current_m31355_gshared)(__this, method)
