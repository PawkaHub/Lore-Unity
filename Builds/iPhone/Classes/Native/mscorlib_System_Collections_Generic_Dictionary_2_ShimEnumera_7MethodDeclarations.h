#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
struct ShimEnumerator_t5584;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5575;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m33308_gshared (ShimEnumerator_t5584 * __this, Dictionary_2_t5575 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m33308(__this, ___host, method) (( void (*) (ShimEnumerator_t5584 *, Dictionary_2_t5575 *, const MethodInfo*))ShimEnumerator__ctor_m33308_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m33309_gshared (ShimEnumerator_t5584 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m33309(__this, method) (( bool (*) (ShimEnumerator_t5584 *, const MethodInfo*))ShimEnumerator_MoveNext_m33309_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m33310_gshared (ShimEnumerator_t5584 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m33310(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t5584 *, const MethodInfo*))ShimEnumerator_get_Entry_m33310_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m33311_gshared (ShimEnumerator_t5584 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m33311(__this, method) (( Object_t * (*) (ShimEnumerator_t5584 *, const MethodInfo*))ShimEnumerator_get_Key_m33311_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m33312_gshared (ShimEnumerator_t5584 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m33312(__this, method) (( Object_t * (*) (ShimEnumerator_t5584 *, const MethodInfo*))ShimEnumerator_get_Value_m33312_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m33313_gshared (ShimEnumerator_t5584 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m33313(__this, method) (( Object_t * (*) (ShimEnumerator_t5584 *, const MethodInfo*))ShimEnumerator_get_Current_m33313_gshared)(__this, method)
