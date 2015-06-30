#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t6219;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t6216;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m42810_gshared (Enumerator_t6219 * __this, Dictionary_2_t6216 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m42810(__this, ___dictionary, method) (( void (*) (Enumerator_t6219 *, Dictionary_2_t6216 *, const MethodInfo*))Enumerator__ctor_m42810_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m42811_gshared (Enumerator_t6219 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m42811(__this, method) (( Object_t * (*) (Enumerator_t6219 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m42811_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m42812_gshared (Enumerator_t6219 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m42812(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t6219 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m42812_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m42813_gshared (Enumerator_t6219 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m42813(__this, method) (( Object_t * (*) (Enumerator_t6219 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m42813_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m42814_gshared (Enumerator_t6219 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m42814(__this, method) (( Object_t * (*) (Enumerator_t6219 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m42814_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m42815_gshared (Enumerator_t6219 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m42815(__this, method) (( bool (*) (Enumerator_t6219 *, const MethodInfo*))Enumerator_MoveNext_m42815_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t6192  Enumerator_get_Current_m42816_gshared (Enumerator_t6219 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m42816(__this, method) (( KeyValuePair_2_t6192  (*) (Enumerator_t6219 *, const MethodInfo*))Enumerator_get_Current_m42816_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m42817_gshared (Enumerator_t6219 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m42817(__this, method) (( Object_t * (*) (Enumerator_t6219 *, const MethodInfo*))Enumerator_get_CurrentKey_m42817_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t1591  Enumerator_get_CurrentValue_m42818_gshared (Enumerator_t6219 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m42818(__this, method) (( KeyValuePair_2_t1591  (*) (Enumerator_t6219 *, const MethodInfo*))Enumerator_get_CurrentValue_m42818_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m42819_gshared (Enumerator_t6219 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m42819(__this, method) (( void (*) (Enumerator_t6219 *, const MethodInfo*))Enumerator_VerifyState_m42819_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m42820_gshared (Enumerator_t6219 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m42820(__this, method) (( void (*) (Enumerator_t6219 *, const MethodInfo*))Enumerator_VerifyCurrent_m42820_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m42821_gshared (Enumerator_t6219 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m42821(__this, method) (( void (*) (Enumerator_t6219 *, const MethodInfo*))Enumerator_Dispose_m42821_gshared)(__this, method)
