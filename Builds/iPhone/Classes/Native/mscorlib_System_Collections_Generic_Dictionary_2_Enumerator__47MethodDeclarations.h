#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
struct Enumerator_t7863;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7860;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_51.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m50877_gshared (Enumerator_t7863 * __this, Dictionary_2_t7860 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m50877(__this, ___dictionary, method) (( void (*) (Enumerator_t7863 *, Dictionary_2_t7860 *, const MethodInfo*))Enumerator__ctor_m50877_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m50879_gshared (Enumerator_t7863 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m50879(__this, method) (( Object_t * (*) (Enumerator_t7863 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m50879_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m50881_gshared (Enumerator_t7863 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m50881(__this, method) (( void (*) (Enumerator_t7863 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m50881_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m50883_gshared (Enumerator_t7863 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m50883(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t7863 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m50883_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m50885_gshared (Enumerator_t7863 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m50885(__this, method) (( Object_t * (*) (Enumerator_t7863 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m50885_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m50887_gshared (Enumerator_t7863 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m50887(__this, method) (( Object_t * (*) (Enumerator_t7863 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m50887_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::MoveNext()
extern "C" bool Enumerator_MoveNext_m50889_gshared (Enumerator_t7863 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m50889(__this, method) (( bool (*) (Enumerator_t7863 *, const MethodInfo*))Enumerator_MoveNext_m50889_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_Current()
extern "C" KeyValuePair_2_t7803  Enumerator_get_Current_m50891_gshared (Enumerator_t7863 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m50891(__this, method) (( KeyValuePair_2_t7803  (*) (Enumerator_t7863 *, const MethodInfo*))Enumerator_get_Current_m50891_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m50893_gshared (Enumerator_t7863 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m50893(__this, method) (( Object_t * (*) (Enumerator_t7863 *, const MethodInfo*))Enumerator_get_CurrentKey_m50893_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentValue()
extern "C" double Enumerator_get_CurrentValue_m50895_gshared (Enumerator_t7863 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m50895(__this, method) (( double (*) (Enumerator_t7863 *, const MethodInfo*))Enumerator_get_CurrentValue_m50895_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Reset()
extern "C" void Enumerator_Reset_m50897_gshared (Enumerator_t7863 * __this, const MethodInfo* method);
#define Enumerator_Reset_m50897(__this, method) (( void (*) (Enumerator_t7863 *, const MethodInfo*))Enumerator_Reset_m50897_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyState()
extern "C" void Enumerator_VerifyState_m50899_gshared (Enumerator_t7863 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m50899(__this, method) (( void (*) (Enumerator_t7863 *, const MethodInfo*))Enumerator_VerifyState_m50899_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m50901_gshared (Enumerator_t7863 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m50901(__this, method) (( void (*) (Enumerator_t7863 *, const MethodInfo*))Enumerator_VerifyCurrent_m50901_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Dispose()
extern "C" void Enumerator_Dispose_m50903_gshared (Enumerator_t7863 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m50903(__this, method) (( void (*) (Enumerator_t7863 *, const MethodInfo*))Enumerator_Dispose_m50903_gshared)(__this, method)
