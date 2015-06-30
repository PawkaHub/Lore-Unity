#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t4900;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1625;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m22888_gshared (Enumerator_t4900 * __this, Dictionary_2_t1625 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m22888(__this, ___dictionary, method) (( void (*) (Enumerator_t4900 *, Dictionary_2_t1625 *, const MethodInfo*))Enumerator__ctor_m22888_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m22889_gshared (Enumerator_t4900 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m22889(__this, method) (( Object_t * (*) (Enumerator_t4900 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m22889_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22890_gshared (Enumerator_t4900 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22890(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t4900 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22890_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22891_gshared (Enumerator_t4900 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22891(__this, method) (( Object_t * (*) (Enumerator_t4900 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22891_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22892_gshared (Enumerator_t4900 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22892(__this, method) (( Object_t * (*) (Enumerator_t4900 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22892_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m22893_gshared (Enumerator_t4900 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m22893(__this, method) (( bool (*) (Enumerator_t4900 *, const MethodInfo*))Enumerator_MoveNext_m22893_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1591  Enumerator_get_Current_m22894_gshared (Enumerator_t4900 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m22894(__this, method) (( KeyValuePair_2_t1591  (*) (Enumerator_t4900 *, const MethodInfo*))Enumerator_get_Current_m22894_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m22895_gshared (Enumerator_t4900 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m22895(__this, method) (( Object_t * (*) (Enumerator_t4900 *, const MethodInfo*))Enumerator_get_CurrentKey_m22895_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m22896_gshared (Enumerator_t4900 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m22896(__this, method) (( Object_t * (*) (Enumerator_t4900 *, const MethodInfo*))Enumerator_get_CurrentValue_m22896_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m22897_gshared (Enumerator_t4900 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m22897(__this, method) (( void (*) (Enumerator_t4900 *, const MethodInfo*))Enumerator_VerifyState_m22897_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m22898_gshared (Enumerator_t4900 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m22898(__this, method) (( void (*) (Enumerator_t4900 *, const MethodInfo*))Enumerator_VerifyCurrent_m22898_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m22899_gshared (Enumerator_t4900 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m22899(__this, method) (( void (*) (Enumerator_t4900 *, const MethodInfo*))Enumerator_Dispose_m22899_gshared)(__this, method)
