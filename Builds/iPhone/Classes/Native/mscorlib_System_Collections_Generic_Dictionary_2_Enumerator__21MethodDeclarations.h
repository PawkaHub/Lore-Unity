#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>
struct Enumerator_t6725;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>
struct Dictionary_2_t6720;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m31923_gshared (Enumerator_t6725 * __this, Dictionary_2_t6720 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m31923(__this, ___dictionary, method) (( void (*) (Enumerator_t6725 *, Dictionary_2_t6720 *, const MethodInfo*))Enumerator__ctor_m31923_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m31924_gshared (Enumerator_t6725 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m31924(__this, method) (( Object_t * (*) (Enumerator_t6725 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m31924_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m31925_gshared (Enumerator_t6725 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m31925(__this, method) (( void (*) (Enumerator_t6725 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m31925_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t748  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31926_gshared (Enumerator_t6725 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31926(__this, method) (( DictionaryEntry_t748  (*) (Enumerator_t6725 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31926_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31927_gshared (Enumerator_t6725 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31927(__this, method) (( Object_t * (*) (Enumerator_t6725 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31927_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31928_gshared (Enumerator_t6725 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31928(__this, method) (( Object_t * (*) (Enumerator_t6725 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31928_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::MoveNext()
extern "C" bool Enumerator_MoveNext_m31929_gshared (Enumerator_t6725 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m31929(__this, method) (( bool (*) (Enumerator_t6725 *, const MethodInfo*))Enumerator_MoveNext_m31929_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::get_Current()
extern "C" KeyValuePair_2_t6721  Enumerator_get_Current_m31930_gshared (Enumerator_t6725 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m31930(__this, method) (( KeyValuePair_2_t6721  (*) (Enumerator_t6725 *, const MethodInfo*))Enumerator_get_Current_m31930_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m31931_gshared (Enumerator_t6725 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m31931(__this, method) (( int32_t (*) (Enumerator_t6725 *, const MethodInfo*))Enumerator_get_CurrentKey_m31931_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::get_CurrentValue()
extern "C" Color_t121  Enumerator_get_CurrentValue_m31932_gshared (Enumerator_t6725 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m31932(__this, method) (( Color_t121  (*) (Enumerator_t6725 *, const MethodInfo*))Enumerator_get_CurrentValue_m31932_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::Reset()
extern "C" void Enumerator_Reset_m31933_gshared (Enumerator_t6725 * __this, const MethodInfo* method);
#define Enumerator_Reset_m31933(__this, method) (( void (*) (Enumerator_t6725 *, const MethodInfo*))Enumerator_Reset_m31933_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::VerifyState()
extern "C" void Enumerator_VerifyState_m31934_gshared (Enumerator_t6725 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m31934(__this, method) (( void (*) (Enumerator_t6725 *, const MethodInfo*))Enumerator_VerifyState_m31934_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m31935_gshared (Enumerator_t6725 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m31935(__this, method) (( void (*) (Enumerator_t6725 *, const MethodInfo*))Enumerator_VerifyCurrent_m31935_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::Dispose()
extern "C" void Enumerator_Dispose_m31936_gshared (Enumerator_t6725 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m31936(__this, method) (( void (*) (Enumerator_t6725 *, const MethodInfo*))Enumerator_Dispose_m31936_gshared)(__this, method)
