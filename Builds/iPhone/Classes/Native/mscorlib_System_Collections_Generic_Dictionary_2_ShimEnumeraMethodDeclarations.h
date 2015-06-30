#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t4906;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1625;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m22936_gshared (ShimEnumerator_t4906 * __this, Dictionary_2_t1625 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m22936(__this, ___host, method) (( void (*) (ShimEnumerator_t4906 *, Dictionary_2_t1625 *, const MethodInfo*))ShimEnumerator__ctor_m22936_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m22937_gshared (ShimEnumerator_t4906 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m22937(__this, method) (( bool (*) (ShimEnumerator_t4906 *, const MethodInfo*))ShimEnumerator_MoveNext_m22937_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m22938_gshared (ShimEnumerator_t4906 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m22938(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t4906 *, const MethodInfo*))ShimEnumerator_get_Entry_m22938_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m22939_gshared (ShimEnumerator_t4906 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m22939(__this, method) (( Object_t * (*) (ShimEnumerator_t4906 *, const MethodInfo*))ShimEnumerator_get_Key_m22939_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m22940_gshared (ShimEnumerator_t4906 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m22940(__this, method) (( Object_t * (*) (ShimEnumerator_t4906 *, const MethodInfo*))ShimEnumerator_get_Value_m22940_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m22941_gshared (ShimEnumerator_t4906 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m22941(__this, method) (( Object_t * (*) (ShimEnumerator_t4906 *, const MethodInfo*))ShimEnumerator_get_Current_m22941_gshared)(__this, method)
