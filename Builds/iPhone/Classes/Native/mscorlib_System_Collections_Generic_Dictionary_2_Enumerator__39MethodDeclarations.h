#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
struct Enumerator_t5792;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t5789;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m36209_gshared (Enumerator_t5792 * __this, Dictionary_2_t5789 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m36209(__this, ___dictionary, method) (( void (*) (Enumerator_t5792 *, Dictionary_2_t5789 *, const MethodInfo*))Enumerator__ctor_m36209_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m36210_gshared (Enumerator_t5792 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m36210(__this, method) (( Object_t * (*) (Enumerator_t5792 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m36210_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m36211_gshared (Enumerator_t5792 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m36211(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t5792 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m36211_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m36212_gshared (Enumerator_t5792 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m36212(__this, method) (( Object_t * (*) (Enumerator_t5792 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m36212_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m36213_gshared (Enumerator_t5792 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m36213(__this, method) (( Object_t * (*) (Enumerator_t5792 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m36213_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m36214_gshared (Enumerator_t5792 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m36214(__this, method) (( bool (*) (Enumerator_t5792 *, const MethodInfo*))Enumerator_MoveNext_m36214_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t5786  Enumerator_get_Current_m36215_gshared (Enumerator_t5792 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m36215(__this, method) (( KeyValuePair_2_t5786  (*) (Enumerator_t5792 *, const MethodInfo*))Enumerator_get_Current_m36215_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m36216_gshared (Enumerator_t5792 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m36216(__this, method) (( int64_t (*) (Enumerator_t5792 *, const MethodInfo*))Enumerator_get_CurrentKey_m36216_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m36217_gshared (Enumerator_t5792 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m36217(__this, method) (( int32_t (*) (Enumerator_t5792 *, const MethodInfo*))Enumerator_get_CurrentValue_m36217_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m36218_gshared (Enumerator_t5792 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m36218(__this, method) (( void (*) (Enumerator_t5792 *, const MethodInfo*))Enumerator_VerifyState_m36218_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m36219_gshared (Enumerator_t5792 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m36219(__this, method) (( void (*) (Enumerator_t5792 *, const MethodInfo*))Enumerator_VerifyCurrent_m36219_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m36220_gshared (Enumerator_t5792 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m36220(__this, method) (( void (*) (Enumerator_t5792 *, const MethodInfo*))Enumerator_Dispose_m36220_gshared)(__this, method)
