#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>
struct Enumerator_t6023;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t6018;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m24638_gshared (Enumerator_t6023 * __this, Dictionary_2_t6018 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m24638(__this, ___dictionary, method) (( void (*) (Enumerator_t6023 *, Dictionary_2_t6018 *, const MethodInfo*))Enumerator__ctor_m24638_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m24639_gshared (Enumerator_t6023 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m24639(__this, method) (( Object_t * (*) (Enumerator_t6023 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m24639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m24640_gshared (Enumerator_t6023 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m24640(__this, method) (( void (*) (Enumerator_t6023 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m24640_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24641_gshared (Enumerator_t6023 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24641(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t6023 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24641_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24642_gshared (Enumerator_t6023 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24642(__this, method) (( Object_t * (*) (Enumerator_t6023 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24642_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24643_gshared (Enumerator_t6023 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24643(__this, method) (( Object_t * (*) (Enumerator_t6023 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24643_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m24644_gshared (Enumerator_t6023 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m24644(__this, method) (( bool (*) (Enumerator_t6023 *, const MethodInfo*))Enumerator_MoveNext_m24644_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t6019  Enumerator_get_Current_m24645_gshared (Enumerator_t6023 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m24645(__this, method) (( KeyValuePair_2_t6019  (*) (Enumerator_t6023 *, const MethodInfo*))Enumerator_get_Current_m24645_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::get_CurrentKey()
extern "C" uint8_t Enumerator_get_CurrentKey_m24646_gshared (Enumerator_t6023 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m24646(__this, method) (( uint8_t (*) (Enumerator_t6023 *, const MethodInfo*))Enumerator_get_CurrentKey_m24646_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m24647_gshared (Enumerator_t6023 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m24647(__this, method) (( int32_t (*) (Enumerator_t6023 *, const MethodInfo*))Enumerator_get_CurrentValue_m24647_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m24648_gshared (Enumerator_t6023 * __this, const MethodInfo* method);
#define Enumerator_Reset_m24648(__this, method) (( void (*) (Enumerator_t6023 *, const MethodInfo*))Enumerator_Reset_m24648_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m24649_gshared (Enumerator_t6023 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m24649(__this, method) (( void (*) (Enumerator_t6023 *, const MethodInfo*))Enumerator_VerifyState_m24649_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m24650_gshared (Enumerator_t6023 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m24650(__this, method) (( void (*) (Enumerator_t6023 *, const MethodInfo*))Enumerator_VerifyCurrent_m24650_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m24651_gshared (Enumerator_t6023 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m24651(__this, method) (( void (*) (Enumerator_t6023 *, const MethodInfo*))Enumerator_Dispose_m24651_gshared)(__this, method)
