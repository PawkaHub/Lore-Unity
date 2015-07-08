#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>
struct ShimEnumerator_t9410;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t9401;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m66844_gshared (ShimEnumerator_t9410 * __this, Dictionary_2_t9401 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m66844(__this, ___host, method) (( void (*) (ShimEnumerator_t9410 *, Dictionary_2_t9401 *, const MethodInfo*))ShimEnumerator__ctor_m66844_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m66845_gshared (ShimEnumerator_t9410 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m66845(__this, method) (( bool (*) (ShimEnumerator_t9410 *, const MethodInfo*))ShimEnumerator_MoveNext_m66845_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m66846_gshared (ShimEnumerator_t9410 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m66846(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t9410 *, const MethodInfo*))ShimEnumerator_get_Entry_m66846_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m66847_gshared (ShimEnumerator_t9410 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m66847(__this, method) (( Object_t * (*) (ShimEnumerator_t9410 *, const MethodInfo*))ShimEnumerator_get_Key_m66847_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m66848_gshared (ShimEnumerator_t9410 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m66848(__this, method) (( Object_t * (*) (ShimEnumerator_t9410 *, const MethodInfo*))ShimEnumerator_get_Value_m66848_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m66849_gshared (ShimEnumerator_t9410 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m66849(__this, method) (( Object_t * (*) (ShimEnumerator_t9410 *, const MethodInfo*))ShimEnumerator_get_Current_m66849_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m66850_gshared (ShimEnumerator_t9410 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m66850(__this, method) (( void (*) (ShimEnumerator_t9410 *, const MethodInfo*))ShimEnumerator_Reset_m66850_gshared)(__this, method)
