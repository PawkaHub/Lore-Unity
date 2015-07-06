#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
struct Enumerator_t7012;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t7009;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m39777_gshared (Enumerator_t7012 * __this, Dictionary_2_t7009 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m39777(__this, ___dictionary, method) (( void (*) (Enumerator_t7012 *, Dictionary_2_t7009 *, const MethodInfo*))Enumerator__ctor_m39777_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m39778_gshared (Enumerator_t7012 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m39778(__this, method) (( Object_t * (*) (Enumerator_t7012 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m39778_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m39779_gshared (Enumerator_t7012 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m39779(__this, method) (( void (*) (Enumerator_t7012 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m39779_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m39780_gshared (Enumerator_t7012 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m39780(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t7012 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m39780_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m39781_gshared (Enumerator_t7012 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m39781(__this, method) (( Object_t * (*) (Enumerator_t7012 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m39781_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m39782_gshared (Enumerator_t7012 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m39782(__this, method) (( Object_t * (*) (Enumerator_t7012 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m39782_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m39783_gshared (Enumerator_t7012 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m39783(__this, method) (( bool (*) (Enumerator_t7012 *, const MethodInfo*))Enumerator_MoveNext_m39783_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t7006  Enumerator_get_Current_m39784_gshared (Enumerator_t7012 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m39784(__this, method) (( KeyValuePair_2_t7006  (*) (Enumerator_t7012 *, const MethodInfo*))Enumerator_get_Current_m39784_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m39785_gshared (Enumerator_t7012 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m39785(__this, method) (( int64_t (*) (Enumerator_t7012 *, const MethodInfo*))Enumerator_get_CurrentKey_m39785_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m39786_gshared (Enumerator_t7012 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m39786(__this, method) (( uint8_t (*) (Enumerator_t7012 *, const MethodInfo*))Enumerator_get_CurrentValue_m39786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m39787_gshared (Enumerator_t7012 * __this, const MethodInfo* method);
#define Enumerator_Reset_m39787(__this, method) (( void (*) (Enumerator_t7012 *, const MethodInfo*))Enumerator_Reset_m39787_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m39788_gshared (Enumerator_t7012 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m39788(__this, method) (( void (*) (Enumerator_t7012 *, const MethodInfo*))Enumerator_VerifyState_m39788_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m39789_gshared (Enumerator_t7012 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m39789(__this, method) (( void (*) (Enumerator_t7012 *, const MethodInfo*))Enumerator_VerifyCurrent_m39789_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m39790_gshared (Enumerator_t7012 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m39790(__this, method) (( void (*) (Enumerator_t7012 *, const MethodInfo*))Enumerator_Dispose_m39790_gshared)(__this, method)
