#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct Enumerator_t6826;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6823;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m37552_gshared (Enumerator_t6826 * __this, Dictionary_2_t6823 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m37552(__this, ___dictionary, method) (( void (*) (Enumerator_t6826 *, Dictionary_2_t6823 *, const MethodInfo*))Enumerator__ctor_m37552_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m37553_gshared (Enumerator_t6826 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m37553(__this, method) (( Object_t * (*) (Enumerator_t6826 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m37553_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m37554_gshared (Enumerator_t6826 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m37554(__this, method) (( void (*) (Enumerator_t6826 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m37554_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m37555_gshared (Enumerator_t6826 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m37555(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t6826 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m37555_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m37556_gshared (Enumerator_t6826 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m37556(__this, method) (( Object_t * (*) (Enumerator_t6826 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m37556_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m37557_gshared (Enumerator_t6826 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m37557(__this, method) (( Object_t * (*) (Enumerator_t6826 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m37557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m37558_gshared (Enumerator_t6826 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m37558(__this, method) (( bool (*) (Enumerator_t6826 *, const MethodInfo*))Enumerator_MoveNext_m37558_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t6818  Enumerator_get_Current_m37559_gshared (Enumerator_t6826 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m37559(__this, method) (( KeyValuePair_2_t6818  (*) (Enumerator_t6826 *, const MethodInfo*))Enumerator_get_Current_m37559_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m37560_gshared (Enumerator_t6826 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m37560(__this, method) (( int64_t (*) (Enumerator_t6826 *, const MethodInfo*))Enumerator_get_CurrentKey_m37560_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m37561_gshared (Enumerator_t6826 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m37561(__this, method) (( Object_t * (*) (Enumerator_t6826 *, const MethodInfo*))Enumerator_get_CurrentValue_m37561_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Reset()
extern "C" void Enumerator_Reset_m37562_gshared (Enumerator_t6826 * __this, const MethodInfo* method);
#define Enumerator_Reset_m37562(__this, method) (( void (*) (Enumerator_t6826 *, const MethodInfo*))Enumerator_Reset_m37562_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m37563_gshared (Enumerator_t6826 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m37563(__this, method) (( void (*) (Enumerator_t6826 *, const MethodInfo*))Enumerator_VerifyState_m37563_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m37564_gshared (Enumerator_t6826 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m37564(__this, method) (( void (*) (Enumerator_t6826 *, const MethodInfo*))Enumerator_VerifyCurrent_m37564_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m37565_gshared (Enumerator_t6826 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m37565(__this, method) (( void (*) (Enumerator_t6826 *, const MethodInfo*))Enumerator_Dispose_m37565_gshared)(__this, method)
