#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct Enumerator_t7143;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t7140;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m38869_gshared (Enumerator_t7143 * __this, Dictionary_2_t7140 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m38869(__this, ___dictionary, method) (( void (*) (Enumerator_t7143 *, Dictionary_2_t7140 *, const MethodInfo*))Enumerator__ctor_m38869_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m38870_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m38870(__this, method) (( Object_t * (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m38870_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m38871_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m38871(__this, method) (( void (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m38871_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t748  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38872_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38872(__this, method) (( DictionaryEntry_t748  (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38872_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38873_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38873(__this, method) (( Object_t * (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38873_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38874_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38874(__this, method) (( Object_t * (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m38875_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m38875(__this, method) (( bool (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_MoveNext_m38875_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t7135  Enumerator_get_Current_m38876_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m38876(__this, method) (( KeyValuePair_2_t7135  (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_get_Current_m38876_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m38877_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m38877(__this, method) (( int64_t (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_get_CurrentKey_m38877_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m38878_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m38878(__this, method) (( Object_t * (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_get_CurrentValue_m38878_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m38879_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_Reset_m38879(__this, method) (( void (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_Reset_m38879_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m38880_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m38880(__this, method) (( void (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_VerifyState_m38880_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m38881_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m38881(__this, method) (( void (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_VerifyCurrent_m38881_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m38882_gshared (Enumerator_t7143 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m38882(__this, method) (( void (*) (Enumerator_t7143 *, const MethodInfo*))Enumerator_Dispose_m38882_gshared)(__this, method)
