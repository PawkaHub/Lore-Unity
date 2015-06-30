#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
struct Enumerator_t5453;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t5448;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_31.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m31784_gshared (Enumerator_t5453 * __this, Dictionary_2_t5448 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m31784(__this, ___dictionary, method) (( void (*) (Enumerator_t5453 *, Dictionary_2_t5448 *, const MethodInfo*))Enumerator__ctor_m31784_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m31785_gshared (Enumerator_t5453 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m31785(__this, method) (( Object_t * (*) (Enumerator_t5453 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m31785_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31786_gshared (Enumerator_t5453 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31786(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t5453 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31786_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31787_gshared (Enumerator_t5453 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31787(__this, method) (( Object_t * (*) (Enumerator_t5453 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31787_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31788_gshared (Enumerator_t5453 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31788(__this, method) (( Object_t * (*) (Enumerator_t5453 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31788_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::MoveNext()
extern "C" bool Enumerator_MoveNext_m31789_gshared (Enumerator_t5453 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m31789(__this, method) (( bool (*) (Enumerator_t5453 *, const MethodInfo*))Enumerator_MoveNext_m31789_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_Current()
extern "C" KeyValuePair_2_t5449  Enumerator_get_Current_m31790_gshared (Enumerator_t5453 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m31790(__this, method) (( KeyValuePair_2_t5449  (*) (Enumerator_t5453 *, const MethodInfo*))Enumerator_get_Current_m31790_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m31791_gshared (Enumerator_t5453 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m31791(__this, method) (( Object_t * (*) (Enumerator_t5453 *, const MethodInfo*))Enumerator_get_CurrentKey_m31791_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::get_CurrentValue()
extern "C" float Enumerator_get_CurrentValue_m31792_gshared (Enumerator_t5453 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m31792(__this, method) (( float (*) (Enumerator_t5453 *, const MethodInfo*))Enumerator_get_CurrentValue_m31792_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::VerifyState()
extern "C" void Enumerator_VerifyState_m31793_gshared (Enumerator_t5453 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m31793(__this, method) (( void (*) (Enumerator_t5453 *, const MethodInfo*))Enumerator_VerifyState_m31793_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m31794_gshared (Enumerator_t5453 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m31794(__this, method) (( void (*) (Enumerator_t5453 *, const MethodInfo*))Enumerator_VerifyCurrent_m31794_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>::Dispose()
extern "C" void Enumerator_Dispose_m31795_gshared (Enumerator_t5453 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m31795(__this, method) (( void (*) (Enumerator_t5453 *, const MethodInfo*))Enumerator_Dispose_m31795_gshared)(__this, method)
