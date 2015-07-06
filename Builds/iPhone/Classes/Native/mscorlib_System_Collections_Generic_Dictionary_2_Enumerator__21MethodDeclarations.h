#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>
struct Enumerator_t6399;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>
struct Dictionary_2_t6394;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m30551_gshared (Enumerator_t6399 * __this, Dictionary_2_t6394 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m30551(__this, ___dictionary, method) (( void (*) (Enumerator_t6399 *, Dictionary_2_t6394 *, const MethodInfo*))Enumerator__ctor_m30551_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m30552_gshared (Enumerator_t6399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m30552(__this, method) (( Object_t * (*) (Enumerator_t6399 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m30552_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m30553_gshared (Enumerator_t6399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m30553(__this, method) (( void (*) (Enumerator_t6399 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m30553_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30554_gshared (Enumerator_t6399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30554(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t6399 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m30554_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30555_gshared (Enumerator_t6399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30555(__this, method) (( Object_t * (*) (Enumerator_t6399 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m30555_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30556_gshared (Enumerator_t6399 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30556(__this, method) (( Object_t * (*) (Enumerator_t6399 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m30556_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::MoveNext()
extern "C" bool Enumerator_MoveNext_m30557_gshared (Enumerator_t6399 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m30557(__this, method) (( bool (*) (Enumerator_t6399 *, const MethodInfo*))Enumerator_MoveNext_m30557_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::get_Current()
extern "C" KeyValuePair_2_t6395  Enumerator_get_Current_m30558_gshared (Enumerator_t6399 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m30558(__this, method) (( KeyValuePair_2_t6395  (*) (Enumerator_t6399 *, const MethodInfo*))Enumerator_get_Current_m30558_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m30559_gshared (Enumerator_t6399 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m30559(__this, method) (( int32_t (*) (Enumerator_t6399 *, const MethodInfo*))Enumerator_get_CurrentKey_m30559_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::get_CurrentValue()
extern "C" Color_t121  Enumerator_get_CurrentValue_m30560_gshared (Enumerator_t6399 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m30560(__this, method) (( Color_t121  (*) (Enumerator_t6399 *, const MethodInfo*))Enumerator_get_CurrentValue_m30560_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::Reset()
extern "C" void Enumerator_Reset_m30561_gshared (Enumerator_t6399 * __this, const MethodInfo* method);
#define Enumerator_Reset_m30561(__this, method) (( void (*) (Enumerator_t6399 *, const MethodInfo*))Enumerator_Reset_m30561_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::VerifyState()
extern "C" void Enumerator_VerifyState_m30562_gshared (Enumerator_t6399 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m30562(__this, method) (( void (*) (Enumerator_t6399 *, const MethodInfo*))Enumerator_VerifyState_m30562_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m30563_gshared (Enumerator_t6399 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m30563(__this, method) (( void (*) (Enumerator_t6399 *, const MethodInfo*))Enumerator_VerifyCurrent_m30563_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::Dispose()
extern "C" void Enumerator_Dispose_m30564_gshared (Enumerator_t6399 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m30564(__this, method) (( void (*) (Enumerator_t6399 *, const MethodInfo*))Enumerator_Dispose_m30564_gshared)(__this, method)
