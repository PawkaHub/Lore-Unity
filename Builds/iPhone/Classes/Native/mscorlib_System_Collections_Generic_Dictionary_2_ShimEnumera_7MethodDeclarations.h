#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>
struct ShimEnumerator_t7149;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t7140;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m38919_gshared (ShimEnumerator_t7149 * __this, Dictionary_2_t7140 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m38919(__this, ___host, method) (( void (*) (ShimEnumerator_t7149 *, Dictionary_2_t7140 *, const MethodInfo*))ShimEnumerator__ctor_m38919_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m38920_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m38920(__this, method) (( bool (*) (ShimEnumerator_t7149 *, const MethodInfo*))ShimEnumerator_MoveNext_m38920_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m38921_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m38921(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t7149 *, const MethodInfo*))ShimEnumerator_get_Entry_m38921_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m38922_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m38922(__this, method) (( Object_t * (*) (ShimEnumerator_t7149 *, const MethodInfo*))ShimEnumerator_get_Key_m38922_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m38923_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m38923(__this, method) (( Object_t * (*) (ShimEnumerator_t7149 *, const MethodInfo*))ShimEnumerator_get_Value_m38923_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m38924_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m38924(__this, method) (( Object_t * (*) (ShimEnumerator_t7149 *, const MethodInfo*))ShimEnumerator_get_Current_m38924_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m38925_gshared (ShimEnumerator_t7149 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m38925(__this, method) (( void (*) (ShimEnumerator_t7149 *, const MethodInfo*))ShimEnumerator_Reset_m38925_gshared)(__this, method)
