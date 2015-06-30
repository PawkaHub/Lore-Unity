#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>
struct Enumerator_t3176;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23073_gshared (Enumerator_t3176 * __this, Dictionary_2_t28 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23073(__this, ___dictionary, method) (( void (*) (Enumerator_t3176 *, Dictionary_2_t28 *, const MethodInfo*))Enumerator__ctor_m23073_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23074_gshared (Enumerator_t3176 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23074(__this, method) (( Object_t * (*) (Enumerator_t3176 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23074_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23075_gshared (Enumerator_t3176 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23075(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t3176 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23075_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23076_gshared (Enumerator_t3176 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23076(__this, method) (( Object_t * (*) (Enumerator_t3176 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23076_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23077_gshared (Enumerator_t3176 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23077(__this, method) (( Object_t * (*) (Enumerator_t3176 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14419_gshared (Enumerator_t3176 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14419(__this, method) (( bool (*) (Enumerator_t3176 *, const MethodInfo*))Enumerator_MoveNext_m14419_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3175  Enumerator_get_Current_m14416_gshared (Enumerator_t3176 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14416(__this, method) (( KeyValuePair_2_t3175  (*) (Enumerator_t3176 *, const MethodInfo*))Enumerator_get_Current_m14416_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::get_CurrentKey()
extern "C" uint8_t Enumerator_get_CurrentKey_m23078_gshared (Enumerator_t3176 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23078(__this, method) (( uint8_t (*) (Enumerator_t3176 *, const MethodInfo*))Enumerator_get_CurrentKey_m23078_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m23079_gshared (Enumerator_t3176 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23079(__this, method) (( Object_t * (*) (Enumerator_t3176 *, const MethodInfo*))Enumerator_get_CurrentValue_m23079_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m23080_gshared (Enumerator_t3176 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23080(__this, method) (( void (*) (Enumerator_t3176 *, const MethodInfo*))Enumerator_VerifyState_m23080_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23081_gshared (Enumerator_t3176 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23081(__this, method) (( void (*) (Enumerator_t3176 *, const MethodInfo*))Enumerator_VerifyCurrent_m23081_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m23082_gshared (Enumerator_t3176 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23082(__this, method) (( void (*) (Enumerator_t3176 *, const MethodInfo*))Enumerator_Dispose_m23082_gshared)(__this, method)
