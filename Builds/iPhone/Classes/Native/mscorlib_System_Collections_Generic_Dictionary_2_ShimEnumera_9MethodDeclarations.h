#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t7317;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t7308;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m41011_gshared (ShimEnumerator_t7317 * __this, Dictionary_2_t7308 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m41011(__this, ___host, method) (( void (*) (ShimEnumerator_t7317 *, Dictionary_2_t7308 *, const MethodInfo*))ShimEnumerator__ctor_m41011_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m41012_gshared (ShimEnumerator_t7317 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m41012(__this, method) (( bool (*) (ShimEnumerator_t7317 *, const MethodInfo*))ShimEnumerator_MoveNext_m41012_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m41013_gshared (ShimEnumerator_t7317 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m41013(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t7317 *, const MethodInfo*))ShimEnumerator_get_Entry_m41013_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m41014_gshared (ShimEnumerator_t7317 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m41014(__this, method) (( Object_t * (*) (ShimEnumerator_t7317 *, const MethodInfo*))ShimEnumerator_get_Key_m41014_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m41015_gshared (ShimEnumerator_t7317 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m41015(__this, method) (( Object_t * (*) (ShimEnumerator_t7317 *, const MethodInfo*))ShimEnumerator_get_Value_m41015_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m41016_gshared (ShimEnumerator_t7317 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m41016(__this, method) (( Object_t * (*) (ShimEnumerator_t7317 *, const MethodInfo*))ShimEnumerator_get_Current_m41016_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m41017_gshared (ShimEnumerator_t7317 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m41017(__this, method) (( void (*) (ShimEnumerator_t7317 *, const MethodInfo*))ShimEnumerator_Reset_m41017_gshared)(__this, method)
