#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>
struct ShimEnumerator_t8204;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t8195;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m52663_gshared (ShimEnumerator_t8204 * __this, Dictionary_2_t8195 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m52663(__this, ___host, method) (( void (*) (ShimEnumerator_t8204 *, Dictionary_2_t8195 *, const MethodInfo*))ShimEnumerator__ctor_m52663_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m52664_gshared (ShimEnumerator_t8204 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m52664(__this, method) (( bool (*) (ShimEnumerator_t8204 *, const MethodInfo*))ShimEnumerator_MoveNext_m52664_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Entry()
extern "C" DictionaryEntry_t748  ShimEnumerator_get_Entry_m52665_gshared (ShimEnumerator_t8204 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m52665(__this, method) (( DictionaryEntry_t748  (*) (ShimEnumerator_t8204 *, const MethodInfo*))ShimEnumerator_get_Entry_m52665_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m52666_gshared (ShimEnumerator_t8204 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m52666(__this, method) (( Object_t * (*) (ShimEnumerator_t8204 *, const MethodInfo*))ShimEnumerator_get_Key_m52666_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m52667_gshared (ShimEnumerator_t8204 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m52667(__this, method) (( Object_t * (*) (ShimEnumerator_t8204 *, const MethodInfo*))ShimEnumerator_get_Value_m52667_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m52668_gshared (ShimEnumerator_t8204 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m52668(__this, method) (( Object_t * (*) (ShimEnumerator_t8204 *, const MethodInfo*))ShimEnumerator_get_Current_m52668_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void ShimEnumerator_Reset_m52669_gshared (ShimEnumerator_t8204 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m52669(__this, method) (( void (*) (ShimEnumerator_t8204 *, const MethodInfo*))ShimEnumerator_Reset_m52669_gshared)(__this, method)
