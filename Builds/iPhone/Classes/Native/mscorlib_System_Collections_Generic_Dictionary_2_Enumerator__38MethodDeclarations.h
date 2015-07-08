#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t7311;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t7308;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_43.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m40961_gshared (Enumerator_t7311 * __this, Dictionary_2_t7308 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m40961(__this, ___dictionary, method) (( void (*) (Enumerator_t7311 *, Dictionary_2_t7308 *, const MethodInfo*))Enumerator__ctor_m40961_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m40962_gshared (Enumerator_t7311 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m40962(__this, method) (( Object_t * (*) (Enumerator_t7311 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m40962_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m40963_gshared (Enumerator_t7311 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m40963(__this, method) (( void (*) (Enumerator_t7311 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m40963_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t748  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m40964_gshared (Enumerator_t7311 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m40964(__this, method) (( DictionaryEntry_t748  (*) (Enumerator_t7311 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m40964_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m40965_gshared (Enumerator_t7311 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m40965(__this, method) (( Object_t * (*) (Enumerator_t7311 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m40965_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m40966_gshared (Enumerator_t7311 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m40966(__this, method) (( Object_t * (*) (Enumerator_t7311 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m40966_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m40967_gshared (Enumerator_t7311 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m40967(__this, method) (( bool (*) (Enumerator_t7311 *, const MethodInfo*))Enumerator_MoveNext_m40967_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t7288  Enumerator_get_Current_m40968_gshared (Enumerator_t7311 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m40968(__this, method) (( KeyValuePair_2_t7288  (*) (Enumerator_t7311 *, const MethodInfo*))Enumerator_get_Current_m40968_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m40969_gshared (Enumerator_t7311 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m40969(__this, method) (( Object_t * (*) (Enumerator_t7311 *, const MethodInfo*))Enumerator_get_CurrentKey_m40969_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m40970_gshared (Enumerator_t7311 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m40970(__this, method) (( uint8_t (*) (Enumerator_t7311 *, const MethodInfo*))Enumerator_get_CurrentValue_m40970_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m40971_gshared (Enumerator_t7311 * __this, const MethodInfo* method);
#define Enumerator_Reset_m40971(__this, method) (( void (*) (Enumerator_t7311 *, const MethodInfo*))Enumerator_Reset_m40971_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m40972_gshared (Enumerator_t7311 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m40972(__this, method) (( void (*) (Enumerator_t7311 *, const MethodInfo*))Enumerator_VerifyState_m40972_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m40973_gshared (Enumerator_t7311 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m40973(__this, method) (( void (*) (Enumerator_t7311 *, const MethodInfo*))Enumerator_VerifyCurrent_m40973_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m40974_gshared (Enumerator_t7311 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m40974(__this, method) (( void (*) (Enumerator_t7311 *, const MethodInfo*))Enumerator_Dispose_m40974_gshared)(__this, method)
