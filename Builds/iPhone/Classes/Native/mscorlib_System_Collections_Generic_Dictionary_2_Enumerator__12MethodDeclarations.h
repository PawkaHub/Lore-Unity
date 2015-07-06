#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t6264;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t4612;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m28351_gshared (Enumerator_t6264 * __this, Dictionary_2_t4612 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m28351(__this, ___dictionary, method) (( void (*) (Enumerator_t6264 *, Dictionary_2_t4612 *, const MethodInfo*))Enumerator__ctor_m28351_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m28352_gshared (Enumerator_t6264 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m28352(__this, method) (( Object_t * (*) (Enumerator_t6264 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m28352_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m28353_gshared (Enumerator_t6264 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m28353(__this, method) (( void (*) (Enumerator_t6264 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m28353_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28354_gshared (Enumerator_t6264 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28354(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t6264 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m28354_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28355_gshared (Enumerator_t6264 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28355(__this, method) (( Object_t * (*) (Enumerator_t6264 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m28355_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28356_gshared (Enumerator_t6264 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28356(__this, method) (( Object_t * (*) (Enumerator_t6264 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m28356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m28357_gshared (Enumerator_t6264 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m28357(__this, method) (( bool (*) (Enumerator_t6264 *, const MethodInfo*))Enumerator_MoveNext_m28357_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t6260  Enumerator_get_Current_m28358_gshared (Enumerator_t6264 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m28358(__this, method) (( KeyValuePair_2_t6260  (*) (Enumerator_t6264 *, const MethodInfo*))Enumerator_get_Current_m28358_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m28359_gshared (Enumerator_t6264 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m28359(__this, method) (( int32_t (*) (Enumerator_t6264 *, const MethodInfo*))Enumerator_get_CurrentKey_m28359_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m28360_gshared (Enumerator_t6264 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m28360(__this, method) (( Object_t * (*) (Enumerator_t6264 *, const MethodInfo*))Enumerator_get_CurrentValue_m28360_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m28361_gshared (Enumerator_t6264 * __this, const MethodInfo* method);
#define Enumerator_Reset_m28361(__this, method) (( void (*) (Enumerator_t6264 *, const MethodInfo*))Enumerator_Reset_m28361_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m28362_gshared (Enumerator_t6264 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m28362(__this, method) (( void (*) (Enumerator_t6264 *, const MethodInfo*))Enumerator_VerifyState_m28362_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m28363_gshared (Enumerator_t6264 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m28363(__this, method) (( void (*) (Enumerator_t6264 *, const MethodInfo*))Enumerator_VerifyCurrent_m28363_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m28364_gshared (Enumerator_t6264 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m28364(__this, method) (( void (*) (Enumerator_t6264 *, const MethodInfo*))Enumerator_Dispose_m28364_gshared)(__this, method)
