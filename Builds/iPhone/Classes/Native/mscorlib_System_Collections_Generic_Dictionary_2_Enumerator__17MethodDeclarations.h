#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t6646;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6641;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m30818_gshared (Enumerator_t6646 * __this, Dictionary_2_t6641 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m30818(__this, ___dictionary, method) (( void (*) (Enumerator_t6646 *, Dictionary_2_t6641 *, const MethodInfo*))Enumerator__ctor_m30818_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m30819_gshared (Enumerator_t6646 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m30819(__this, method) (( Object_t * (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m30819_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m30820_gshared (Enumerator_t6646 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m30820(__this, method) (( void (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m30820_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t748  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30821_gshared (Enumerator_t6646 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30821(__this, method) (( DictionaryEntry_t748  (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30821_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30822_gshared (Enumerator_t6646 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30822(__this, method) (( Object_t * (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30822_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30823_gshared (Enumerator_t6646 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30823(__this, method) (( Object_t * (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30823_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m30824_gshared (Enumerator_t6646 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m30824(__this, method) (( bool (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_MoveNext_m30824_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t6642  Enumerator_get_Current_m30825_gshared (Enumerator_t6646 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m30825(__this, method) (( KeyValuePair_2_t6642  (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_get_Current_m30825_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m30826_gshared (Enumerator_t6646 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m30826(__this, method) (( Object_t * (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_get_CurrentKey_m30826_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m30827_gshared (Enumerator_t6646 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m30827(__this, method) (( int32_t (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_get_CurrentValue_m30827_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m30828_gshared (Enumerator_t6646 * __this, const MethodInfo* method);
#define Enumerator_Reset_m30828(__this, method) (( void (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_Reset_m30828_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m30829_gshared (Enumerator_t6646 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m30829(__this, method) (( void (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_VerifyState_m30829_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m30830_gshared (Enumerator_t6646 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m30830(__this, method) (( void (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_VerifyCurrent_m30830_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m30831_gshared (Enumerator_t6646 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m30831(__this, method) (( void (*) (Enumerator_t6646 *, const MethodInfo*))Enumerator_Dispose_m30831_gshared)(__this, method)
