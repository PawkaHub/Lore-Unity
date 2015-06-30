#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>
struct Enumerator_t5311;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>
struct Dictionary_2_t5306;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m29050_gshared (Enumerator_t5311 * __this, Dictionary_2_t5306 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m29050(__this, ___dictionary, method) (( void (*) (Enumerator_t5311 *, Dictionary_2_t5306 *, const MethodInfo*))Enumerator__ctor_m29050_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m29051_gshared (Enumerator_t5311 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m29051(__this, method) (( Object_t * (*) (Enumerator_t5311 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m29051_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29052_gshared (Enumerator_t5311 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29052(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t5311 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29052_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29053_gshared (Enumerator_t5311 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29053(__this, method) (( Object_t * (*) (Enumerator_t5311 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29053_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29054_gshared (Enumerator_t5311 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29054(__this, method) (( Object_t * (*) (Enumerator_t5311 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29054_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::MoveNext()
extern "C" bool Enumerator_MoveNext_m29055_gshared (Enumerator_t5311 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m29055(__this, method) (( bool (*) (Enumerator_t5311 *, const MethodInfo*))Enumerator_MoveNext_m29055_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::get_Current()
extern "C" KeyValuePair_2_t5307  Enumerator_get_Current_m29056_gshared (Enumerator_t5311 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m29056(__this, method) (( KeyValuePair_2_t5307  (*) (Enumerator_t5311 *, const MethodInfo*))Enumerator_get_Current_m29056_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m29057_gshared (Enumerator_t5311 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m29057(__this, method) (( int32_t (*) (Enumerator_t5311 *, const MethodInfo*))Enumerator_get_CurrentKey_m29057_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::get_CurrentValue()
extern "C" Color_t121  Enumerator_get_CurrentValue_m29058_gshared (Enumerator_t5311 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m29058(__this, method) (( Color_t121  (*) (Enumerator_t5311 *, const MethodInfo*))Enumerator_get_CurrentValue_m29058_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::VerifyState()
extern "C" void Enumerator_VerifyState_m29059_gshared (Enumerator_t5311 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m29059(__this, method) (( void (*) (Enumerator_t5311 *, const MethodInfo*))Enumerator_VerifyState_m29059_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m29060_gshared (Enumerator_t5311 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m29060(__this, method) (( void (*) (Enumerator_t5311 *, const MethodInfo*))Enumerator_VerifyCurrent_m29060_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>::Dispose()
extern "C" void Enumerator_Dispose_m29061_gshared (Enumerator_t5311 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m29061(__this, method) (( void (*) (Enumerator_t5311 *, const MethodInfo*))Enumerator_Dispose_m29061_gshared)(__this, method)
