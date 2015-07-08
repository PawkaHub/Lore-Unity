#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>
struct Enumerator_t6261;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t6256;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25055_gshared (Enumerator_t6261 * __this, Dictionary_2_t6256 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25055(__this, ___dictionary, method) (( void (*) (Enumerator_t6261 *, Dictionary_2_t6256 *, const MethodInfo*))Enumerator__ctor_m25055_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25056_gshared (Enumerator_t6261 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25056(__this, method) (( Object_t * (*) (Enumerator_t6261 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25056_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m25057_gshared (Enumerator_t6261 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m25057(__this, method) (( void (*) (Enumerator_t6261 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m25057_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t748  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25058_gshared (Enumerator_t6261 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25058(__this, method) (( DictionaryEntry_t748  (*) (Enumerator_t6261 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25058_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25059_gshared (Enumerator_t6261 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25059(__this, method) (( Object_t * (*) (Enumerator_t6261 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25059_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25060_gshared (Enumerator_t6261 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25060(__this, method) (( Object_t * (*) (Enumerator_t6261 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25060_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25061_gshared (Enumerator_t6261 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25061(__this, method) (( bool (*) (Enumerator_t6261 *, const MethodInfo*))Enumerator_MoveNext_m25061_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t6257  Enumerator_get_Current_m25062_gshared (Enumerator_t6261 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25062(__this, method) (( KeyValuePair_2_t6257  (*) (Enumerator_t6261 *, const MethodInfo*))Enumerator_get_Current_m25062_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::get_CurrentKey()
extern "C" uint8_t Enumerator_get_CurrentKey_m25063_gshared (Enumerator_t6261 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25063(__this, method) (( uint8_t (*) (Enumerator_t6261 *, const MethodInfo*))Enumerator_get_CurrentKey_m25063_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m25064_gshared (Enumerator_t6261 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25064(__this, method) (( int32_t (*) (Enumerator_t6261 *, const MethodInfo*))Enumerator_get_CurrentValue_m25064_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m25065_gshared (Enumerator_t6261 * __this, const MethodInfo* method);
#define Enumerator_Reset_m25065(__this, method) (( void (*) (Enumerator_t6261 *, const MethodInfo*))Enumerator_Reset_m25065_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m25066_gshared (Enumerator_t6261 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25066(__this, method) (( void (*) (Enumerator_t6261 *, const MethodInfo*))Enumerator_VerifyState_m25066_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25067_gshared (Enumerator_t6261 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25067(__this, method) (( void (*) (Enumerator_t6261 *, const MethodInfo*))Enumerator_VerifyCurrent_m25067_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m25068_gshared (Enumerator_t6261 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25068(__this, method) (( void (*) (Enumerator_t6261 *, const MethodInfo*))Enumerator_Dispose_m25068_gshared)(__this, method)
