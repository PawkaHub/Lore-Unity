#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>
struct Enumerator_t4935;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t4930;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23271_gshared (Enumerator_t4935 * __this, Dictionary_2_t4930 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23271(__this, ___dictionary, method) (( void (*) (Enumerator_t4935 *, Dictionary_2_t4930 *, const MethodInfo*))Enumerator__ctor_m23271_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23272_gshared (Enumerator_t4935 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23272(__this, method) (( Object_t * (*) (Enumerator_t4935 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23272_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23273_gshared (Enumerator_t4935 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23273(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t4935 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23273_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23274_gshared (Enumerator_t4935 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23274(__this, method) (( Object_t * (*) (Enumerator_t4935 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23274_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23275_gshared (Enumerator_t4935 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23275(__this, method) (( Object_t * (*) (Enumerator_t4935 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23275_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23276_gshared (Enumerator_t4935 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23276(__this, method) (( bool (*) (Enumerator_t4935 *, const MethodInfo*))Enumerator_MoveNext_m23276_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t4931  Enumerator_get_Current_m23277_gshared (Enumerator_t4935 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23277(__this, method) (( KeyValuePair_2_t4931  (*) (Enumerator_t4935 *, const MethodInfo*))Enumerator_get_Current_m23277_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::get_CurrentKey()
extern "C" uint8_t Enumerator_get_CurrentKey_m23278_gshared (Enumerator_t4935 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23278(__this, method) (( uint8_t (*) (Enumerator_t4935 *, const MethodInfo*))Enumerator_get_CurrentKey_m23278_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m23279_gshared (Enumerator_t4935 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23279(__this, method) (( int32_t (*) (Enumerator_t4935 *, const MethodInfo*))Enumerator_get_CurrentValue_m23279_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m23280_gshared (Enumerator_t4935 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23280(__this, method) (( void (*) (Enumerator_t4935 *, const MethodInfo*))Enumerator_VerifyState_m23280_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23281_gshared (Enumerator_t4935 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23281(__this, method) (( void (*) (Enumerator_t4935 *, const MethodInfo*))Enumerator_VerifyCurrent_m23281_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m23282_gshared (Enumerator_t4935 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23282(__this, method) (( void (*) (Enumerator_t4935 *, const MethodInfo*))Enumerator_Dispose_m23282_gshared)(__this, method)
