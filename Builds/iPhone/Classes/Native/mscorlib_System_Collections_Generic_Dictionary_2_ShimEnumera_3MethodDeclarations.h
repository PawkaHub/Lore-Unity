#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t6324;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6313;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m29395_gshared (ShimEnumerator_t6324 * __this, Dictionary_2_t6313 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m29395(__this, ___host, method) (( void (*) (ShimEnumerator_t6324 *, Dictionary_2_t6313 *, const MethodInfo*))ShimEnumerator__ctor_m29395_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m29396_gshared (ShimEnumerator_t6324 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m29396(__this, method) (( bool (*) (ShimEnumerator_t6324 *, const MethodInfo*))ShimEnumerator_MoveNext_m29396_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m29397_gshared (ShimEnumerator_t6324 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m29397(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t6324 *, const MethodInfo*))ShimEnumerator_get_Entry_m29397_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m29398_gshared (ShimEnumerator_t6324 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m29398(__this, method) (( Object_t * (*) (ShimEnumerator_t6324 *, const MethodInfo*))ShimEnumerator_get_Key_m29398_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m29399_gshared (ShimEnumerator_t6324 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m29399(__this, method) (( Object_t * (*) (ShimEnumerator_t6324 *, const MethodInfo*))ShimEnumerator_get_Value_m29399_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m29400_gshared (ShimEnumerator_t6324 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m29400(__this, method) (( Object_t * (*) (ShimEnumerator_t6324 *, const MethodInfo*))ShimEnumerator_get_Current_m29400_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m29401_gshared (ShimEnumerator_t6324 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m29401(__this, method) (( void (*) (ShimEnumerator_t6324 *, const MethodInfo*))ShimEnumerator_Reset_m29401_gshared)(__this, method)
