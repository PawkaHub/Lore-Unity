#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t6321;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3231;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44396_gshared (Enumerator_t6321 * __this, Dictionary_2_t3231 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44396(__this, ___dictionary, method) (( void (*) (Enumerator_t6321 *, Dictionary_2_t3231 *, const MethodInfo*))Enumerator__ctor_m44396_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44397_gshared (Enumerator_t6321 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44397(__this, method) (( Object_t * (*) (Enumerator_t6321 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44397_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44398_gshared (Enumerator_t6321 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44398(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t6321 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44398_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44399_gshared (Enumerator_t6321 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44399(__this, method) (( Object_t * (*) (Enumerator_t6321 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44399_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44400_gshared (Enumerator_t6321 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44400(__this, method) (( Object_t * (*) (Enumerator_t6321 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44400_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44401_gshared (Enumerator_t6321 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44401(__this, method) (( bool (*) (Enumerator_t6321 *, const MethodInfo*))Enumerator_MoveNext_m44401_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" KeyValuePair_2_t6316  Enumerator_get_Current_m44402_gshared (Enumerator_t6321 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44402(__this, method) (( KeyValuePair_2_t6316  (*) (Enumerator_t6321 *, const MethodInfo*))Enumerator_get_Current_m44402_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m44403_gshared (Enumerator_t6321 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44403(__this, method) (( int32_t (*) (Enumerator_t6321 *, const MethodInfo*))Enumerator_get_CurrentKey_m44403_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentValue()
extern "C" TimeType_t3222  Enumerator_get_CurrentValue_m44404_gshared (Enumerator_t6321 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44404(__this, method) (( TimeType_t3222  (*) (Enumerator_t6321 *, const MethodInfo*))Enumerator_get_CurrentValue_m44404_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyState()
extern "C" void Enumerator_VerifyState_m44405_gshared (Enumerator_t6321 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44405(__this, method) (( void (*) (Enumerator_t6321 *, const MethodInfo*))Enumerator_VerifyState_m44405_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44406_gshared (Enumerator_t6321 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44406(__this, method) (( void (*) (Enumerator_t6321 *, const MethodInfo*))Enumerator_VerifyCurrent_m44406_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m44407_gshared (Enumerator_t6321 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44407(__this, method) (( void (*) (Enumerator_t6321 *, const MethodInfo*))Enumerator_Dispose_m44407_gshared)(__this, method)
