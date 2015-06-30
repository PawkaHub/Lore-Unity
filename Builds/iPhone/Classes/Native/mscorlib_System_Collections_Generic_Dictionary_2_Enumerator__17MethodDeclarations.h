#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t5230;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5225;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m27872_gshared (Enumerator_t5230 * __this, Dictionary_2_t5225 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m27872(__this, ___dictionary, method) (( void (*) (Enumerator_t5230 *, Dictionary_2_t5225 *, const MethodInfo*))Enumerator__ctor_m27872_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m27873_gshared (Enumerator_t5230 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m27873(__this, method) (( Object_t * (*) (Enumerator_t5230 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m27873_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27874_gshared (Enumerator_t5230 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27874(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t5230 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m27874_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27875_gshared (Enumerator_t5230 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27875(__this, method) (( Object_t * (*) (Enumerator_t5230 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m27875_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27876_gshared (Enumerator_t5230 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27876(__this, method) (( Object_t * (*) (Enumerator_t5230 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m27876_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m27877_gshared (Enumerator_t5230 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m27877(__this, method) (( bool (*) (Enumerator_t5230 *, const MethodInfo*))Enumerator_MoveNext_m27877_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t5226  Enumerator_get_Current_m27878_gshared (Enumerator_t5230 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m27878(__this, method) (( KeyValuePair_2_t5226  (*) (Enumerator_t5230 *, const MethodInfo*))Enumerator_get_Current_m27878_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m27879_gshared (Enumerator_t5230 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m27879(__this, method) (( Object_t * (*) (Enumerator_t5230 *, const MethodInfo*))Enumerator_get_CurrentKey_m27879_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m27880_gshared (Enumerator_t5230 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m27880(__this, method) (( int32_t (*) (Enumerator_t5230 *, const MethodInfo*))Enumerator_get_CurrentValue_m27880_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m27881_gshared (Enumerator_t5230 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m27881(__this, method) (( void (*) (Enumerator_t5230 *, const MethodInfo*))Enumerator_VerifyState_m27881_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m27882_gshared (Enumerator_t5230 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m27882(__this, method) (( void (*) (Enumerator_t5230 *, const MethodInfo*))Enumerator_VerifyCurrent_m27882_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m27883_gshared (Enumerator_t5230 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m27883(__this, method) (( void (*) (Enumerator_t5230 *, const MethodInfo*))Enumerator_Dispose_m27883_gshared)(__this, method)
