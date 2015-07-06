#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
struct Enumerator_t9122;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t9119;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_127.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m65879_gshared (Enumerator_t9122 * __this, Dictionary_2_t9119 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m65879(__this, ___dictionary, method) (( void (*) (Enumerator_t9122 *, Dictionary_2_t9119 *, const MethodInfo*))Enumerator__ctor_m65879_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m65880_gshared (Enumerator_t9122 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m65880(__this, method) (( Object_t * (*) (Enumerator_t9122 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m65880_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m65881_gshared (Enumerator_t9122 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m65881(__this, method) (( void (*) (Enumerator_t9122 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m65881_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m65882_gshared (Enumerator_t9122 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m65882(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t9122 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m65882_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m65883_gshared (Enumerator_t9122 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m65883(__this, method) (( Object_t * (*) (Enumerator_t9122 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m65883_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m65884_gshared (Enumerator_t9122 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m65884(__this, method) (( Object_t * (*) (Enumerator_t9122 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m65884_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m65885_gshared (Enumerator_t9122 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m65885(__this, method) (( bool (*) (Enumerator_t9122 *, const MethodInfo*))Enumerator_MoveNext_m65885_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t9116  Enumerator_get_Current_m65886_gshared (Enumerator_t9122 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m65886(__this, method) (( KeyValuePair_2_t9116  (*) (Enumerator_t9122 *, const MethodInfo*))Enumerator_get_Current_m65886_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m65887_gshared (Enumerator_t9122 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m65887(__this, method) (( int64_t (*) (Enumerator_t9122 *, const MethodInfo*))Enumerator_get_CurrentKey_m65887_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m65888_gshared (Enumerator_t9122 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m65888(__this, method) (( int32_t (*) (Enumerator_t9122 *, const MethodInfo*))Enumerator_get_CurrentValue_m65888_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m65889_gshared (Enumerator_t9122 * __this, const MethodInfo* method);
#define Enumerator_Reset_m65889(__this, method) (( void (*) (Enumerator_t9122 *, const MethodInfo*))Enumerator_Reset_m65889_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m65890_gshared (Enumerator_t9122 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m65890(__this, method) (( void (*) (Enumerator_t9122 *, const MethodInfo*))Enumerator_VerifyState_m65890_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m65891_gshared (Enumerator_t9122 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m65891(__this, method) (( void (*) (Enumerator_t9122 *, const MethodInfo*))Enumerator_VerifyCurrent_m65891_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m65892_gshared (Enumerator_t9122 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m65892(__this, method) (( void (*) (Enumerator_t9122 *, const MethodInfo*))Enumerator_Dispose_m65892_gshared)(__this, method)
