#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>
struct ShimEnumerator_t7922;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7913;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m51748_gshared (ShimEnumerator_t7922 * __this, Dictionary_2_t7913 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m51748(__this, ___host, method) (( void (*) (ShimEnumerator_t7922 *, Dictionary_2_t7913 *, const MethodInfo*))ShimEnumerator__ctor_m51748_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m51749_gshared (ShimEnumerator_t7922 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m51749(__this, method) (( bool (*) (ShimEnumerator_t7922 *, const MethodInfo*))ShimEnumerator_MoveNext_m51749_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m51750_gshared (ShimEnumerator_t7922 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m51750(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t7922 *, const MethodInfo*))ShimEnumerator_get_Entry_m51750_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m51751_gshared (ShimEnumerator_t7922 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m51751(__this, method) (( Object_t * (*) (ShimEnumerator_t7922 *, const MethodInfo*))ShimEnumerator_get_Key_m51751_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m51752_gshared (ShimEnumerator_t7922 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m51752(__this, method) (( Object_t * (*) (ShimEnumerator_t7922 *, const MethodInfo*))ShimEnumerator_get_Value_m51752_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m51753_gshared (ShimEnumerator_t7922 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m51753(__this, method) (( Object_t * (*) (ShimEnumerator_t7922 *, const MethodInfo*))ShimEnumerator_get_Current_m51753_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void ShimEnumerator_Reset_m51754_gshared (ShimEnumerator_t7922 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m51754(__this, method) (( void (*) (ShimEnumerator_t7922 *, const MethodInfo*))ShimEnumerator_Reset_m51754_gshared)(__this, method)
