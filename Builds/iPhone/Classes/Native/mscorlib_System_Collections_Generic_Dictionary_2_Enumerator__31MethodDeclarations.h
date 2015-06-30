#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t5701;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t5698;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m34799_gshared (Enumerator_t5701 * __this, Dictionary_2_t5698 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m34799(__this, ___dictionary, method) (( void (*) (Enumerator_t5701 *, Dictionary_2_t5698 *, const MethodInfo*))Enumerator__ctor_m34799_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m34800_gshared (Enumerator_t5701 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m34800(__this, method) (( Object_t * (*) (Enumerator_t5701 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m34800_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m34801_gshared (Enumerator_t5701 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m34801(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t5701 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m34801_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m34802_gshared (Enumerator_t5701 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m34802(__this, method) (( Object_t * (*) (Enumerator_t5701 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m34802_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m34803_gshared (Enumerator_t5701 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m34803(__this, method) (( Object_t * (*) (Enumerator_t5701 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m34803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m34804_gshared (Enumerator_t5701 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m34804(__this, method) (( bool (*) (Enumerator_t5701 *, const MethodInfo*))Enumerator_MoveNext_m34804_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t5678  Enumerator_get_Current_m34805_gshared (Enumerator_t5701 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m34805(__this, method) (( KeyValuePair_2_t5678  (*) (Enumerator_t5701 *, const MethodInfo*))Enumerator_get_Current_m34805_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m34806_gshared (Enumerator_t5701 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m34806(__this, method) (( Object_t * (*) (Enumerator_t5701 *, const MethodInfo*))Enumerator_get_CurrentKey_m34806_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m34807_gshared (Enumerator_t5701 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m34807(__this, method) (( uint8_t (*) (Enumerator_t5701 *, const MethodInfo*))Enumerator_get_CurrentValue_m34807_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m34808_gshared (Enumerator_t5701 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m34808(__this, method) (( void (*) (Enumerator_t5701 *, const MethodInfo*))Enumerator_VerifyState_m34808_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m34809_gshared (Enumerator_t5701 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m34809(__this, method) (( void (*) (Enumerator_t5701 *, const MethodInfo*))Enumerator_VerifyCurrent_m34809_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m34810_gshared (Enumerator_t5701 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m34810(__this, method) (( void (*) (Enumerator_t5701 *, const MethodInfo*))Enumerator_Dispose_m34810_gshared)(__this, method)
