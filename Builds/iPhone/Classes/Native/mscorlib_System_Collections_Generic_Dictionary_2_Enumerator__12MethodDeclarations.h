#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t6592;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t4850;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m29824_gshared (Enumerator_t6592 * __this, Dictionary_2_t4850 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m29824(__this, ___dictionary, method) (( void (*) (Enumerator_t6592 *, Dictionary_2_t4850 *, const MethodInfo*))Enumerator__ctor_m29824_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m29825_gshared (Enumerator_t6592 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m29825(__this, method) (( Object_t * (*) (Enumerator_t6592 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m29825_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m29826_gshared (Enumerator_t6592 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m29826(__this, method) (( void (*) (Enumerator_t6592 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m29826_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t748  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29827_gshared (Enumerator_t6592 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29827(__this, method) (( DictionaryEntry_t748  (*) (Enumerator_t6592 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29827_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29828_gshared (Enumerator_t6592 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29828(__this, method) (( Object_t * (*) (Enumerator_t6592 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29828_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29829_gshared (Enumerator_t6592 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29829(__this, method) (( Object_t * (*) (Enumerator_t6592 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29829_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m29830_gshared (Enumerator_t6592 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m29830(__this, method) (( bool (*) (Enumerator_t6592 *, const MethodInfo*))Enumerator_MoveNext_m29830_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t6588  Enumerator_get_Current_m29831_gshared (Enumerator_t6592 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m29831(__this, method) (( KeyValuePair_2_t6588  (*) (Enumerator_t6592 *, const MethodInfo*))Enumerator_get_Current_m29831_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m29832_gshared (Enumerator_t6592 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m29832(__this, method) (( int32_t (*) (Enumerator_t6592 *, const MethodInfo*))Enumerator_get_CurrentKey_m29832_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m29833_gshared (Enumerator_t6592 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m29833(__this, method) (( Object_t * (*) (Enumerator_t6592 *, const MethodInfo*))Enumerator_get_CurrentValue_m29833_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m29834_gshared (Enumerator_t6592 * __this, const MethodInfo* method);
#define Enumerator_Reset_m29834(__this, method) (( void (*) (Enumerator_t6592 *, const MethodInfo*))Enumerator_Reset_m29834_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m29835_gshared (Enumerator_t6592 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m29835(__this, method) (( void (*) (Enumerator_t6592 *, const MethodInfo*))Enumerator_VerifyState_m29835_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m29836_gshared (Enumerator_t6592 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m29836(__this, method) (( void (*) (Enumerator_t6592 *, const MethodInfo*))Enumerator_VerifyCurrent_m29836_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m29837_gshared (Enumerator_t6592 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m29837(__this, method) (( void (*) (Enumerator_t6592 *, const MethodInfo*))Enumerator_Dispose_m29837_gshared)(__this, method)
