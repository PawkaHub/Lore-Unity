#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t6318;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6313;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m29345_gshared (Enumerator_t6318 * __this, Dictionary_2_t6313 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m29345(__this, ___dictionary, method) (( void (*) (Enumerator_t6318 *, Dictionary_2_t6313 *, const MethodInfo*))Enumerator__ctor_m29345_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m29346_gshared (Enumerator_t6318 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m29346(__this, method) (( Object_t * (*) (Enumerator_t6318 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m29346_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m29347_gshared (Enumerator_t6318 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m29347(__this, method) (( void (*) (Enumerator_t6318 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m29347_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29348_gshared (Enumerator_t6318 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29348(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t6318 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29348_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29349_gshared (Enumerator_t6318 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29349(__this, method) (( Object_t * (*) (Enumerator_t6318 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29349_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29350_gshared (Enumerator_t6318 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29350(__this, method) (( Object_t * (*) (Enumerator_t6318 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m29351_gshared (Enumerator_t6318 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m29351(__this, method) (( bool (*) (Enumerator_t6318 *, const MethodInfo*))Enumerator_MoveNext_m29351_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t6314  Enumerator_get_Current_m29352_gshared (Enumerator_t6318 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m29352(__this, method) (( KeyValuePair_2_t6314  (*) (Enumerator_t6318 *, const MethodInfo*))Enumerator_get_Current_m29352_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m29353_gshared (Enumerator_t6318 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m29353(__this, method) (( Object_t * (*) (Enumerator_t6318 *, const MethodInfo*))Enumerator_get_CurrentKey_m29353_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m29354_gshared (Enumerator_t6318 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m29354(__this, method) (( int32_t (*) (Enumerator_t6318 *, const MethodInfo*))Enumerator_get_CurrentValue_m29354_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m29355_gshared (Enumerator_t6318 * __this, const MethodInfo* method);
#define Enumerator_Reset_m29355(__this, method) (( void (*) (Enumerator_t6318 *, const MethodInfo*))Enumerator_Reset_m29355_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m29356_gshared (Enumerator_t6318 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m29356(__this, method) (( void (*) (Enumerator_t6318 *, const MethodInfo*))Enumerator_VerifyState_m29356_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m29357_gshared (Enumerator_t6318 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m29357(__this, method) (( void (*) (Enumerator_t6318 *, const MethodInfo*))Enumerator_VerifyCurrent_m29357_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m29358_gshared (Enumerator_t6318 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m29358(__this, method) (( void (*) (Enumerator_t6318 *, const MethodInfo*))Enumerator_Dispose_m29358_gshared)(__this, method)
