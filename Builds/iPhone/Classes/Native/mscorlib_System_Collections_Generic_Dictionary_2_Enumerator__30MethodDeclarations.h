#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
struct Enumerator_t5689;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t5686;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_37.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m34615_gshared (Enumerator_t5689 * __this, Dictionary_2_t5686 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m34615(__this, ___dictionary, method) (( void (*) (Enumerator_t5689 *, Dictionary_2_t5686 *, const MethodInfo*))Enumerator__ctor_m34615_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m34616_gshared (Enumerator_t5689 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m34616(__this, method) (( Object_t * (*) (Enumerator_t5689 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m34616_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m34617_gshared (Enumerator_t5689 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m34617(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t5689 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m34617_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m34618_gshared (Enumerator_t5689 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m34618(__this, method) (( Object_t * (*) (Enumerator_t5689 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m34618_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m34619_gshared (Enumerator_t5689 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m34619(__this, method) (( Object_t * (*) (Enumerator_t5689 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m34619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m34620_gshared (Enumerator_t5689 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m34620(__this, method) (( bool (*) (Enumerator_t5689 *, const MethodInfo*))Enumerator_MoveNext_m34620_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t5683  Enumerator_get_Current_m34621_gshared (Enumerator_t5689 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m34621(__this, method) (( KeyValuePair_2_t5683  (*) (Enumerator_t5689 *, const MethodInfo*))Enumerator_get_Current_m34621_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m34622_gshared (Enumerator_t5689 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m34622(__this, method) (( int64_t (*) (Enumerator_t5689 *, const MethodInfo*))Enumerator_get_CurrentKey_m34622_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m34623_gshared (Enumerator_t5689 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m34623(__this, method) (( uint8_t (*) (Enumerator_t5689 *, const MethodInfo*))Enumerator_get_CurrentValue_m34623_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m34624_gshared (Enumerator_t5689 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m34624(__this, method) (( void (*) (Enumerator_t5689 *, const MethodInfo*))Enumerator_VerifyState_m34624_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m34625_gshared (Enumerator_t5689 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m34625(__this, method) (( void (*) (Enumerator_t5689 *, const MethodInfo*))Enumerator_VerifyCurrent_m34625_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m34626_gshared (Enumerator_t5689 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m34626(__this, method) (( void (*) (Enumerator_t5689 *, const MethodInfo*))Enumerator_Dispose_m34626_gshared)(__this, method)
