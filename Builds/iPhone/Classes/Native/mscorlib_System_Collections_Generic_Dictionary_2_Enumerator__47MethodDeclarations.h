#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
struct Enumerator_t8145;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t8142;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_51.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m51792_gshared (Enumerator_t8145 * __this, Dictionary_2_t8142 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m51792(__this, ___dictionary, method) (( void (*) (Enumerator_t8145 *, Dictionary_2_t8142 *, const MethodInfo*))Enumerator__ctor_m51792_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m51794_gshared (Enumerator_t8145 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m51794(__this, method) (( Object_t * (*) (Enumerator_t8145 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m51794_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m51796_gshared (Enumerator_t8145 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m51796(__this, method) (( void (*) (Enumerator_t8145 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m51796_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t748  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m51798_gshared (Enumerator_t8145 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m51798(__this, method) (( DictionaryEntry_t748  (*) (Enumerator_t8145 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m51798_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m51800_gshared (Enumerator_t8145 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m51800(__this, method) (( Object_t * (*) (Enumerator_t8145 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m51800_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m51802_gshared (Enumerator_t8145 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m51802(__this, method) (( Object_t * (*) (Enumerator_t8145 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m51802_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::MoveNext()
extern "C" bool Enumerator_MoveNext_m51804_gshared (Enumerator_t8145 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m51804(__this, method) (( bool (*) (Enumerator_t8145 *, const MethodInfo*))Enumerator_MoveNext_m51804_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_Current()
extern "C" KeyValuePair_2_t8085  Enumerator_get_Current_m51806_gshared (Enumerator_t8145 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m51806(__this, method) (( KeyValuePair_2_t8085  (*) (Enumerator_t8145 *, const MethodInfo*))Enumerator_get_Current_m51806_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m51808_gshared (Enumerator_t8145 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m51808(__this, method) (( Object_t * (*) (Enumerator_t8145 *, const MethodInfo*))Enumerator_get_CurrentKey_m51808_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentValue()
extern "C" double Enumerator_get_CurrentValue_m51810_gshared (Enumerator_t8145 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m51810(__this, method) (( double (*) (Enumerator_t8145 *, const MethodInfo*))Enumerator_get_CurrentValue_m51810_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Reset()
extern "C" void Enumerator_Reset_m51812_gshared (Enumerator_t8145 * __this, const MethodInfo* method);
#define Enumerator_Reset_m51812(__this, method) (( void (*) (Enumerator_t8145 *, const MethodInfo*))Enumerator_Reset_m51812_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyState()
extern "C" void Enumerator_VerifyState_m51814_gshared (Enumerator_t8145 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m51814(__this, method) (( void (*) (Enumerator_t8145 *, const MethodInfo*))Enumerator_VerifyState_m51814_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m51816_gshared (Enumerator_t8145 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m51816(__this, method) (( void (*) (Enumerator_t8145 *, const MethodInfo*))Enumerator_VerifyCurrent_m51816_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Dispose()
extern "C" void Enumerator_Dispose_m51818_gshared (Enumerator_t8145 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m51818(__this, method) (( void (*) (Enumerator_t8145 *, const MethodInfo*))Enumerator_Dispose_m51818_gshared)(__this, method)
