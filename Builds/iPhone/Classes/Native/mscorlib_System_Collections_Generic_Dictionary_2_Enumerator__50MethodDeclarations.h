#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t6177;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t6171;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m42176_gshared (Enumerator_t6177 * __this, Dictionary_2_t6171 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m42176(__this, ___dictionary, method) (( void (*) (Enumerator_t6177 *, Dictionary_2_t6171 *, const MethodInfo*))Enumerator__ctor_m42176_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m42177_gshared (Enumerator_t6177 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m42177(__this, method) (( Object_t * (*) (Enumerator_t6177 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m42177_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m42178_gshared (Enumerator_t6177 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m42178(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t6177 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m42178_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m42179_gshared (Enumerator_t6177 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m42179(__this, method) (( Object_t * (*) (Enumerator_t6177 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m42179_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m42180_gshared (Enumerator_t6177 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m42180(__this, method) (( Object_t * (*) (Enumerator_t6177 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m42180_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m42181_gshared (Enumerator_t6177 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m42181(__this, method) (( bool (*) (Enumerator_t6177 *, const MethodInfo*))Enumerator_MoveNext_m42181_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t6172  Enumerator_get_Current_m42182_gshared (Enumerator_t6177 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m42182(__this, method) (( KeyValuePair_2_t6172  (*) (Enumerator_t6177 *, const MethodInfo*))Enumerator_get_Current_m42182_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m42183_gshared (Enumerator_t6177 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m42183(__this, method) (( uint64_t (*) (Enumerator_t6177 *, const MethodInfo*))Enumerator_get_CurrentKey_m42183_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m42184_gshared (Enumerator_t6177 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m42184(__this, method) (( Object_t * (*) (Enumerator_t6177 *, const MethodInfo*))Enumerator_get_CurrentValue_m42184_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m42185_gshared (Enumerator_t6177 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m42185(__this, method) (( void (*) (Enumerator_t6177 *, const MethodInfo*))Enumerator_VerifyState_m42185_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m42186_gshared (Enumerator_t6177 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m42186(__this, method) (( void (*) (Enumerator_t6177 *, const MethodInfo*))Enumerator_VerifyCurrent_m42186_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m42187_gshared (Enumerator_t6177 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m42187(__this, method) (( void (*) (Enumerator_t6177 *, const MethodInfo*))Enumerator_Dispose_m42187_gshared)(__this, method)
