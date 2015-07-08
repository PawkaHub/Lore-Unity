#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>
struct ShimEnumerator_t7024;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7013;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m37276_gshared (ShimEnumerator_t7024 * __this, Dictionary_2_t7013 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m37276(__this, ___host, method) (( void (*) (ShimEnumerator_t7024 *, Dictionary_2_t7013 *, const MethodInfo*))ShimEnumerator__ctor_m37276_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m37277_gshared (ShimEnumerator_t7024 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m37277(__this, method) (( bool (*) (ShimEnumerator_t7024 *, const MethodInfo*))ShimEnumerator_MoveNext_m37277_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m37278_gshared (ShimEnumerator_t7024 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m37278(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t7024 *, const MethodInfo*))ShimEnumerator_get_Entry_m37278_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m37279_gshared (ShimEnumerator_t7024 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m37279(__this, method) (( Object_t * (*) (ShimEnumerator_t7024 *, const MethodInfo*))ShimEnumerator_get_Key_m37279_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m37280_gshared (ShimEnumerator_t7024 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m37280(__this, method) (( Object_t * (*) (ShimEnumerator_t7024 *, const MethodInfo*))ShimEnumerator_get_Value_m37280_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m37281_gshared (ShimEnumerator_t7024 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m37281(__this, method) (( Object_t * (*) (ShimEnumerator_t7024 *, const MethodInfo*))ShimEnumerator_get_Current_m37281_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::Reset()
extern "C" void ShimEnumerator_Reset_m37282_gshared (ShimEnumerator_t7024 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m37282(__this, method) (( void (*) (ShimEnumerator_t7024 *, const MethodInfo*))ShimEnumerator_Reset_m37282_gshared)(__this, method)
