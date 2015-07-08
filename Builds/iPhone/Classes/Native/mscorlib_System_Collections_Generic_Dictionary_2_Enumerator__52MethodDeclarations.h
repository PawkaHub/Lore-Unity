#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t8198;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t8195;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m52506_gshared (Enumerator_t8198 * __this, Dictionary_2_t8195 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m52506(__this, ___dictionary, method) (( void (*) (Enumerator_t8198 *, Dictionary_2_t8195 *, const MethodInfo*))Enumerator__ctor_m52506_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m52508_gshared (Enumerator_t8198 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m52508(__this, method) (( Object_t * (*) (Enumerator_t8198 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m52508_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m52510_gshared (Enumerator_t8198 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m52510(__this, method) (( void (*) (Enumerator_t8198 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m52510_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t748  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m52512_gshared (Enumerator_t8198 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m52512(__this, method) (( DictionaryEntry_t748  (*) (Enumerator_t8198 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m52512_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m52514_gshared (Enumerator_t8198 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m52514(__this, method) (( Object_t * (*) (Enumerator_t8198 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m52514_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m52516_gshared (Enumerator_t8198 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m52516(__this, method) (( Object_t * (*) (Enumerator_t8198 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m52516_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m52518_gshared (Enumerator_t8198 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m52518(__this, method) (( bool (*) (Enumerator_t8198 *, const MethodInfo*))Enumerator_MoveNext_m52518_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" KeyValuePair_2_t8105  Enumerator_get_Current_m52520_gshared (Enumerator_t8198 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m52520(__this, method) (( KeyValuePair_2_t8105  (*) (Enumerator_t8198 *, const MethodInfo*))Enumerator_get_Current_m52520_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m52522_gshared (Enumerator_t8198 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m52522(__this, method) (( Object_t * (*) (Enumerator_t8198 *, const MethodInfo*))Enumerator_get_CurrentKey_m52522_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentValue()
extern "C" ParseGeoPoint_t935  Enumerator_get_CurrentValue_m52524_gshared (Enumerator_t8198 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m52524(__this, method) (( ParseGeoPoint_t935  (*) (Enumerator_t8198 *, const MethodInfo*))Enumerator_get_CurrentValue_m52524_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void Enumerator_Reset_m52526_gshared (Enumerator_t8198 * __this, const MethodInfo* method);
#define Enumerator_Reset_m52526(__this, method) (( void (*) (Enumerator_t8198 *, const MethodInfo*))Enumerator_Reset_m52526_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyState()
extern "C" void Enumerator_VerifyState_m52528_gshared (Enumerator_t8198 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m52528(__this, method) (( void (*) (Enumerator_t8198 *, const MethodInfo*))Enumerator_VerifyState_m52528_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m52530_gshared (Enumerator_t8198 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m52530(__this, method) (( void (*) (Enumerator_t8198 *, const MethodInfo*))Enumerator_VerifyCurrent_m52530_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m52532_gshared (Enumerator_t8198 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m52532(__this, method) (( void (*) (Enumerator_t8198 *, const MethodInfo*))Enumerator_Dispose_m52532_gshared)(__this, method)
