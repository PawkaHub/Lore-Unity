#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>
struct ShimEnumerator_t5317;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>
struct Dictionary_2_t5306;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m29097_gshared (ShimEnumerator_t5317 * __this, Dictionary_2_t5306 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m29097(__this, ___host, method) (( void (*) (ShimEnumerator_t5317 *, Dictionary_2_t5306 *, const MethodInfo*))ShimEnumerator__ctor_m29097_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m29098_gshared (ShimEnumerator_t5317 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m29098(__this, method) (( bool (*) (ShimEnumerator_t5317 *, const MethodInfo*))ShimEnumerator_MoveNext_m29098_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>::get_Entry()
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m29099_gshared (ShimEnumerator_t5317 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m29099(__this, method) (( DictionaryEntry_t660  (*) (ShimEnumerator_t5317 *, const MethodInfo*))ShimEnumerator_get_Entry_m29099_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m29100_gshared (ShimEnumerator_t5317 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m29100(__this, method) (( Object_t * (*) (ShimEnumerator_t5317 *, const MethodInfo*))ShimEnumerator_get_Key_m29100_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m29101_gshared (ShimEnumerator_t5317 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m29101(__this, method) (( Object_t * (*) (ShimEnumerator_t5317 *, const MethodInfo*))ShimEnumerator_get_Value_m29101_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.Color>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m29102_gshared (ShimEnumerator_t5317 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m29102(__this, method) (( Object_t * (*) (ShimEnumerator_t5317 *, const MethodInfo*))ShimEnumerator_get_Current_m29102_gshared)(__this, method)
