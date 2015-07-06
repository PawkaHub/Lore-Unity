#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
struct Enumerator_t7889;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7886;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m51228_gshared (Enumerator_t7889 * __this, Dictionary_2_t7886 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m51228(__this, ___dictionary, method) (( void (*) (Enumerator_t7889 *, Dictionary_2_t7886 *, const MethodInfo*))Enumerator__ctor_m51228_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m51230_gshared (Enumerator_t7889 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m51230(__this, method) (( Object_t * (*) (Enumerator_t7889 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m51230_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m51232_gshared (Enumerator_t7889 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m51232(__this, method) (( void (*) (Enumerator_t7889 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m51232_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m51234_gshared (Enumerator_t7889 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m51234(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t7889 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m51234_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m51236_gshared (Enumerator_t7889 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m51236(__this, method) (( Object_t * (*) (Enumerator_t7889 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m51236_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m51238_gshared (Enumerator_t7889 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m51238(__this, method) (( Object_t * (*) (Enumerator_t7889 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m51238_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m51240_gshared (Enumerator_t7889 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m51240(__this, method) (( bool (*) (Enumerator_t7889 *, const MethodInfo*))Enumerator_MoveNext_m51240_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" KeyValuePair_2_t7814  Enumerator_get_Current_m51242_gshared (Enumerator_t7889 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m51242(__this, method) (( KeyValuePair_2_t7814  (*) (Enumerator_t7889 *, const MethodInfo*))Enumerator_get_Current_m51242_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m51244_gshared (Enumerator_t7889 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m51244(__this, method) (( Object_t * (*) (Enumerator_t7889 *, const MethodInfo*))Enumerator_get_CurrentKey_m51244_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::get_CurrentValue()
extern "C" DateTime_t1705  Enumerator_get_CurrentValue_m51246_gshared (Enumerator_t7889 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m51246(__this, method) (( DateTime_t1705  (*) (Enumerator_t7889 *, const MethodInfo*))Enumerator_get_CurrentValue_m51246_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Reset()
extern "C" void Enumerator_Reset_m51248_gshared (Enumerator_t7889 * __this, const MethodInfo* method);
#define Enumerator_Reset_m51248(__this, method) (( void (*) (Enumerator_t7889 *, const MethodInfo*))Enumerator_Reset_m51248_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyState()
extern "C" void Enumerator_VerifyState_m51250_gshared (Enumerator_t7889 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m51250(__this, method) (( void (*) (Enumerator_t7889 *, const MethodInfo*))Enumerator_VerifyState_m51250_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m51252_gshared (Enumerator_t7889 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m51252(__this, method) (( void (*) (Enumerator_t7889 *, const MethodInfo*))Enumerator_VerifyCurrent_m51252_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m51254_gshared (Enumerator_t7889 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m51254(__this, method) (( void (*) (Enumerator_t7889 *, const MethodInfo*))Enumerator_Dispose_m51254_gshared)(__this, method)
