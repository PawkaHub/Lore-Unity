#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct Enumerator_t5578;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5575;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m33261_gshared (Enumerator_t5578 * __this, Dictionary_2_t5575 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m33261(__this, ___dictionary, method) (( void (*) (Enumerator_t5578 *, Dictionary_2_t5575 *, const MethodInfo*))Enumerator__ctor_m33261_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m33262_gshared (Enumerator_t5578 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m33262(__this, method) (( Object_t * (*) (Enumerator_t5578 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m33262_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33263_gshared (Enumerator_t5578 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33263(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t5578 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m33263_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33264_gshared (Enumerator_t5578 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33264(__this, method) (( Object_t * (*) (Enumerator_t5578 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m33264_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33265_gshared (Enumerator_t5578 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33265(__this, method) (( Object_t * (*) (Enumerator_t5578 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m33265_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m33266_gshared (Enumerator_t5578 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m33266(__this, method) (( bool (*) (Enumerator_t5578 *, const MethodInfo*))Enumerator_MoveNext_m33266_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t5570  Enumerator_get_Current_m33267_gshared (Enumerator_t5578 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m33267(__this, method) (( KeyValuePair_2_t5570  (*) (Enumerator_t5578 *, const MethodInfo*))Enumerator_get_Current_m33267_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m33268_gshared (Enumerator_t5578 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m33268(__this, method) (( int64_t (*) (Enumerator_t5578 *, const MethodInfo*))Enumerator_get_CurrentKey_m33268_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m33269_gshared (Enumerator_t5578 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m33269(__this, method) (( Object_t * (*) (Enumerator_t5578 *, const MethodInfo*))Enumerator_get_CurrentValue_m33269_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m33270_gshared (Enumerator_t5578 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m33270(__this, method) (( void (*) (Enumerator_t5578 *, const MethodInfo*))Enumerator_VerifyState_m33270_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m33271_gshared (Enumerator_t5578 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m33271(__this, method) (( void (*) (Enumerator_t5578 *, const MethodInfo*))Enumerator_VerifyCurrent_m33271_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m33272_gshared (Enumerator_t5578 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m33272(__this, method) (( void (*) (Enumerator_t5578 *, const MethodInfo*))Enumerator_Dispose_m33272_gshared)(__this, method)
