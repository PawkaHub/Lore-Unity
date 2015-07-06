#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t7916;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7913;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m51591_gshared (Enumerator_t7916 * __this, Dictionary_2_t7913 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m51591(__this, ___dictionary, method) (( void (*) (Enumerator_t7916 *, Dictionary_2_t7913 *, const MethodInfo*))Enumerator__ctor_m51591_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m51593_gshared (Enumerator_t7916 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m51593(__this, method) (( Object_t * (*) (Enumerator_t7916 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m51593_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m51595_gshared (Enumerator_t7916 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m51595(__this, method) (( void (*) (Enumerator_t7916 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m51595_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m51597_gshared (Enumerator_t7916 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m51597(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t7916 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m51597_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m51599_gshared (Enumerator_t7916 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m51599(__this, method) (( Object_t * (*) (Enumerator_t7916 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m51599_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m51601_gshared (Enumerator_t7916 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m51601(__this, method) (( Object_t * (*) (Enumerator_t7916 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m51601_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m51603_gshared (Enumerator_t7916 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m51603(__this, method) (( bool (*) (Enumerator_t7916 *, const MethodInfo*))Enumerator_MoveNext_m51603_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" KeyValuePair_2_t7823  Enumerator_get_Current_m51605_gshared (Enumerator_t7916 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m51605(__this, method) (( KeyValuePair_2_t7823  (*) (Enumerator_t7916 *, const MethodInfo*))Enumerator_get_Current_m51605_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m51607_gshared (Enumerator_t7916 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m51607(__this, method) (( Object_t * (*) (Enumerator_t7916 *, const MethodInfo*))Enumerator_get_CurrentKey_m51607_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::get_CurrentValue()
extern "C" ParseGeoPoint_t1579  Enumerator_get_CurrentValue_m51609_gshared (Enumerator_t7916 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m51609(__this, method) (( ParseGeoPoint_t1579  (*) (Enumerator_t7916 *, const MethodInfo*))Enumerator_get_CurrentValue_m51609_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Reset()
extern "C" void Enumerator_Reset_m51611_gshared (Enumerator_t7916 * __this, const MethodInfo* method);
#define Enumerator_Reset_m51611(__this, method) (( void (*) (Enumerator_t7916 *, const MethodInfo*))Enumerator_Reset_m51611_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyState()
extern "C" void Enumerator_VerifyState_m51613_gshared (Enumerator_t7916 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m51613(__this, method) (( void (*) (Enumerator_t7916 *, const MethodInfo*))Enumerator_VerifyState_m51613_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m51615_gshared (Enumerator_t7916 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m51615(__this, method) (( void (*) (Enumerator_t7916 *, const MethodInfo*))Enumerator_VerifyCurrent_m51615_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m51617_gshared (Enumerator_t7916 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m51617(__this, method) (( void (*) (Enumerator_t7916 *, const MethodInfo*))Enumerator_Dispose_m51617_gshared)(__this, method)
