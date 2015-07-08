#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
struct Enumerator_t8171;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t8168;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m52143_gshared (Enumerator_t8171 * __this, Dictionary_2_t8168 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m52143(__this, ___dictionary, method) (( void (*) (Enumerator_t8171 *, Dictionary_2_t8168 *, const MethodInfo*))Enumerator__ctor_m52143_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m52145_gshared (Enumerator_t8171 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m52145(__this, method) (( Object_t * (*) (Enumerator_t8171 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m52145_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m52147_gshared (Enumerator_t8171 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m52147(__this, method) (( void (*) (Enumerator_t8171 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m52147_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t748  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m52149_gshared (Enumerator_t8171 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m52149(__this, method) (( DictionaryEntry_t748  (*) (Enumerator_t8171 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m52149_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m52151_gshared (Enumerator_t8171 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m52151(__this, method) (( Object_t * (*) (Enumerator_t8171 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m52151_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m52153_gshared (Enumerator_t8171 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m52153(__this, method) (( Object_t * (*) (Enumerator_t8171 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m52153_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m52155_gshared (Enumerator_t8171 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m52155(__this, method) (( bool (*) (Enumerator_t8171 *, const MethodInfo*))Enumerator_MoveNext_m52155_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" KeyValuePair_2_t8096  Enumerator_get_Current_m52157_gshared (Enumerator_t8171 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m52157(__this, method) (( KeyValuePair_2_t8096  (*) (Enumerator_t8171 *, const MethodInfo*))Enumerator_get_Current_m52157_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m52159_gshared (Enumerator_t8171 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m52159(__this, method) (( Object_t * (*) (Enumerator_t8171 *, const MethodInfo*))Enumerator_get_CurrentKey_m52159_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentValue()
extern "C" DateTime_t1953  Enumerator_get_CurrentValue_m52161_gshared (Enumerator_t8171 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m52161(__this, method) (( DateTime_t1953  (*) (Enumerator_t8171 *, const MethodInfo*))Enumerator_get_CurrentValue_m52161_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Reset()
extern "C" void Enumerator_Reset_m52163_gshared (Enumerator_t8171 * __this, const MethodInfo* method);
#define Enumerator_Reset_m52163(__this, method) (( void (*) (Enumerator_t8171 *, const MethodInfo*))Enumerator_Reset_m52163_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyState()
extern "C" void Enumerator_VerifyState_m52165_gshared (Enumerator_t8171 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m52165(__this, method) (( void (*) (Enumerator_t8171 *, const MethodInfo*))Enumerator_VerifyState_m52165_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m52167_gshared (Enumerator_t8171 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m52167(__this, method) (( void (*) (Enumerator_t8171 *, const MethodInfo*))Enumerator_VerifyCurrent_m52167_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m52169_gshared (Enumerator_t8171 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m52169(__this, method) (( void (*) (Enumerator_t8171 *, const MethodInfo*))Enumerator_Dispose_m52169_gshared)(__this, method)
