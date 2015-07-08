#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
struct Enumerator_t9404;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t9401;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_127.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m66794_gshared (Enumerator_t9404 * __this, Dictionary_2_t9401 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m66794(__this, ___dictionary, method) (( void (*) (Enumerator_t9404 *, Dictionary_2_t9401 *, const MethodInfo*))Enumerator__ctor_m66794_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m66795_gshared (Enumerator_t9404 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m66795(__this, method) (( Object_t * (*) (Enumerator_t9404 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m66795_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m66796_gshared (Enumerator_t9404 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m66796(__this, method) (( void (*) (Enumerator_t9404 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m66796_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t748  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66797_gshared (Enumerator_t9404 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66797(__this, method) (( DictionaryEntry_t748  (*) (Enumerator_t9404 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m66797_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66798_gshared (Enumerator_t9404 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66798(__this, method) (( Object_t * (*) (Enumerator_t9404 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m66798_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66799_gshared (Enumerator_t9404 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66799(__this, method) (( Object_t * (*) (Enumerator_t9404 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m66799_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m66800_gshared (Enumerator_t9404 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m66800(__this, method) (( bool (*) (Enumerator_t9404 *, const MethodInfo*))Enumerator_MoveNext_m66800_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t9398  Enumerator_get_Current_m66801_gshared (Enumerator_t9404 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m66801(__this, method) (( KeyValuePair_2_t9398  (*) (Enumerator_t9404 *, const MethodInfo*))Enumerator_get_Current_m66801_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m66802_gshared (Enumerator_t9404 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m66802(__this, method) (( int64_t (*) (Enumerator_t9404 *, const MethodInfo*))Enumerator_get_CurrentKey_m66802_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m66803_gshared (Enumerator_t9404 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m66803(__this, method) (( int32_t (*) (Enumerator_t9404 *, const MethodInfo*))Enumerator_get_CurrentValue_m66803_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m66804_gshared (Enumerator_t9404 * __this, const MethodInfo* method);
#define Enumerator_Reset_m66804(__this, method) (( void (*) (Enumerator_t9404 *, const MethodInfo*))Enumerator_Reset_m66804_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m66805_gshared (Enumerator_t9404 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m66805(__this, method) (( void (*) (Enumerator_t9404 *, const MethodInfo*))Enumerator_VerifyState_m66805_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m66806_gshared (Enumerator_t9404 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m66806(__this, method) (( void (*) (Enumerator_t9404 *, const MethodInfo*))Enumerator_VerifyCurrent_m66806_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m66807_gshared (Enumerator_t9404 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m66807(__this, method) (( void (*) (Enumerator_t9404 *, const MethodInfo*))Enumerator_Dispose_m66807_gshared)(__this, method)
