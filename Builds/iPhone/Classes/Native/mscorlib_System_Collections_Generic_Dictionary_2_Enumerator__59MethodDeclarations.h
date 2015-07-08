#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t9458;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3300;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_129.h"
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m67479_gshared (Enumerator_t9458 * __this, Dictionary_2_t3300 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m67479(__this, ___dictionary, method) (( void (*) (Enumerator_t9458 *, Dictionary_2_t3300 *, const MethodInfo*))Enumerator__ctor_m67479_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m67480_gshared (Enumerator_t9458 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m67480(__this, method) (( Object_t * (*) (Enumerator_t9458 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m67480_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m67481_gshared (Enumerator_t9458 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m67481(__this, method) (( void (*) (Enumerator_t9458 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m67481_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t748  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m67482_gshared (Enumerator_t9458 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m67482(__this, method) (( DictionaryEntry_t748  (*) (Enumerator_t9458 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m67482_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m67483_gshared (Enumerator_t9458 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m67483(__this, method) (( Object_t * (*) (Enumerator_t9458 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m67483_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m67484_gshared (Enumerator_t9458 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m67484(__this, method) (( Object_t * (*) (Enumerator_t9458 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m67484_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m67485_gshared (Enumerator_t9458 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m67485(__this, method) (( bool (*) (Enumerator_t9458 *, const MethodInfo*))Enumerator_MoveNext_m67485_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" KeyValuePair_2_t9453  Enumerator_get_Current_m67486_gshared (Enumerator_t9458 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m67486(__this, method) (( KeyValuePair_2_t9453  (*) (Enumerator_t9458 *, const MethodInfo*))Enumerator_get_Current_m67486_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m67487_gshared (Enumerator_t9458 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m67487(__this, method) (( int32_t (*) (Enumerator_t9458 *, const MethodInfo*))Enumerator_get_CurrentKey_m67487_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_CurrentValue()
extern "C" TimeType_t3289  Enumerator_get_CurrentValue_m67488_gshared (Enumerator_t9458 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m67488(__this, method) (( TimeType_t3289  (*) (Enumerator_t9458 *, const MethodInfo*))Enumerator_get_CurrentValue_m67488_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Reset()
extern "C" void Enumerator_Reset_m67489_gshared (Enumerator_t9458 * __this, const MethodInfo* method);
#define Enumerator_Reset_m67489(__this, method) (( void (*) (Enumerator_t9458 *, const MethodInfo*))Enumerator_Reset_m67489_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyState()
extern "C" void Enumerator_VerifyState_m67490_gshared (Enumerator_t9458 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m67490(__this, method) (( void (*) (Enumerator_t9458 *, const MethodInfo*))Enumerator_VerifyState_m67490_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m67491_gshared (Enumerator_t9458 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m67491(__this, method) (( void (*) (Enumerator_t9458 *, const MethodInfo*))Enumerator_VerifyCurrent_m67491_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m67492_gshared (Enumerator_t9458 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m67492(__this, method) (( void (*) (Enumerator_t9458 *, const MethodInfo*))Enumerator_Dispose_m67492_gshared)(__this, method)
