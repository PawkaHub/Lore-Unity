#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>
struct ShimEnumerator_t8177;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t8168;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m52300_gshared (ShimEnumerator_t8177 * __this, Dictionary_2_t8168 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m52300(__this, ___host, method) (( void (*) (ShimEnumerator_t8177 *, Dictionary_2_t8168 *, const MethodInfo*))ShimEnumerator__ctor_m52300_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m52301_gshared (ShimEnumerator_t8177 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m52301(__this, method) (( bool (*) (ShimEnumerator_t8177 *, const MethodInfo*))ShimEnumerator_MoveNext_m52301_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m52302_gshared (ShimEnumerator_t8177 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m52302(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t8177 *, const MethodInfo*))ShimEnumerator_get_Entry_m52302_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m52303_gshared (ShimEnumerator_t8177 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m52303(__this, method) (( Object_t * (*) (ShimEnumerator_t8177 *, const MethodInfo*))ShimEnumerator_get_Key_m52303_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m52304_gshared (ShimEnumerator_t8177 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m52304(__this, method) (( Object_t * (*) (ShimEnumerator_t8177 *, const MethodInfo*))ShimEnumerator_get_Value_m52304_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m52305_gshared (ShimEnumerator_t8177 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m52305(__this, method) (( Object_t * (*) (ShimEnumerator_t8177 *, const MethodInfo*))ShimEnumerator_get_Current_m52305_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.DateTime>::Reset()
extern "C" void ShimEnumerator_Reset_m52306_gshared (ShimEnumerator_t8177 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m52306(__this, method) (( void (*) (ShimEnumerator_t8177 *, const MethodInfo*))ShimEnumerator_Reset_m52306_gshared)(__this, method)
