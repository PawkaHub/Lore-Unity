#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t5427;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t849;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_29.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m31307_gshared (Enumerator_t5427 * __this, Dictionary_2_t849 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m31307(__this, ___dictionary, method) (( void (*) (Enumerator_t5427 *, Dictionary_2_t849 *, const MethodInfo*))Enumerator__ctor_m31307_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m31308_gshared (Enumerator_t5427 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m31308(__this, method) (( Object_t * (*) (Enumerator_t5427 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m31308_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31309_gshared (Enumerator_t5427 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31309(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t5427 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31309_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31310_gshared (Enumerator_t5427 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31310(__this, method) (( Object_t * (*) (Enumerator_t5427 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31310_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31311_gshared (Enumerator_t5427 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31311(__this, method) (( Object_t * (*) (Enumerator_t5427 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31311_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m31312_gshared (Enumerator_t5427 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m31312(__this, method) (( bool (*) (Enumerator_t5427 *, const MethodInfo*))Enumerator_MoveNext_m31312_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t5423  Enumerator_get_Current_m31313_gshared (Enumerator_t5427 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m31313(__this, method) (( KeyValuePair_2_t5423  (*) (Enumerator_t5427 *, const MethodInfo*))Enumerator_get_Current_m31313_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m31314_gshared (Enumerator_t5427 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m31314(__this, method) (( int32_t (*) (Enumerator_t5427 *, const MethodInfo*))Enumerator_get_CurrentKey_m31314_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m31315_gshared (Enumerator_t5427 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m31315(__this, method) (( int32_t (*) (Enumerator_t5427 *, const MethodInfo*))Enumerator_get_CurrentValue_m31315_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m31316_gshared (Enumerator_t5427 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m31316(__this, method) (( void (*) (Enumerator_t5427 *, const MethodInfo*))Enumerator_VerifyState_m31316_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m31317_gshared (Enumerator_t5427 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m31317(__this, method) (( void (*) (Enumerator_t5427 *, const MethodInfo*))Enumerator_VerifyCurrent_m31317_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m31318_gshared (Enumerator_t5427 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m31318(__this, method) (( void (*) (Enumerator_t5427 *, const MethodInfo*))Enumerator_Dispose_m31318_gshared)(__this, method)
