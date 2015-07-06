#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t9176;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3062;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_129.h"
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m66564_gshared (Enumerator_t9176 * __this, Dictionary_2_t3062 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m66564(__this, ___dictionary, method) (( void (*) (Enumerator_t9176 *, Dictionary_2_t3062 *, const MethodInfo*))Enumerator__ctor_m66564_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m66565_gshared (Enumerator_t9176 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m66565(__this, method) (( Object_t * (*) (Enumerator_t9176 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m66565_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m66566_gshared (Enumerator_t9176 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m66566(__this, method) (( void (*) (Enumerator_t9176 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m66566_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66567_gshared (Enumerator_t9176 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66567(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t9176 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66567_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66568_gshared (Enumerator_t9176 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66568(__this, method) (( Object_t * (*) (Enumerator_t9176 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66568_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66569_gshared (Enumerator_t9176 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66569(__this, method) (( Object_t * (*) (Enumerator_t9176 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66569_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m66570_gshared (Enumerator_t9176 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m66570(__this, method) (( bool (*) (Enumerator_t9176 *, const MethodInfo*))Enumerator_MoveNext_m66570_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" KeyValuePair_2_t9171  Enumerator_get_Current_m66571_gshared (Enumerator_t9176 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m66571(__this, method) (( KeyValuePair_2_t9171  (*) (Enumerator_t9176 *, const MethodInfo*))Enumerator_get_Current_m66571_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m66572_gshared (Enumerator_t9176 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m66572(__this, method) (( int32_t (*) (Enumerator_t9176 *, const MethodInfo*))Enumerator_get_CurrentKey_m66572_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentValue()
extern "C" TimeType_t3051  Enumerator_get_CurrentValue_m66573_gshared (Enumerator_t9176 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m66573(__this, method) (( TimeType_t3051  (*) (Enumerator_t9176 *, const MethodInfo*))Enumerator_get_CurrentValue_m66573_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void Enumerator_Reset_m66574_gshared (Enumerator_t9176 * __this, const MethodInfo* method);
#define Enumerator_Reset_m66574(__this, method) (( void (*) (Enumerator_t9176 *, const MethodInfo*))Enumerator_Reset_m66574_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyState()
extern "C" void Enumerator_VerifyState_m66575_gshared (Enumerator_t9176 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m66575(__this, method) (( void (*) (Enumerator_t9176 *, const MethodInfo*))Enumerator_VerifyState_m66575_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m66576_gshared (Enumerator_t9176 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m66576(__this, method) (( void (*) (Enumerator_t9176 *, const MethodInfo*))Enumerator_VerifyCurrent_m66576_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m66577_gshared (Enumerator_t9176 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m66577(__this, method) (( void (*) (Enumerator_t9176 *, const MethodInfo*))Enumerator_Dispose_m66577_gshared)(__this, method)
