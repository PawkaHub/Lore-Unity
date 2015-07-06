#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t7024;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t7021;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_43.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m39973_gshared (Enumerator_t7024 * __this, Dictionary_2_t7021 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m39973(__this, ___dictionary, method) (( void (*) (Enumerator_t7024 *, Dictionary_2_t7021 *, const MethodInfo*))Enumerator__ctor_m39973_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m39974_gshared (Enumerator_t7024 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m39974(__this, method) (( Object_t * (*) (Enumerator_t7024 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m39974_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m39975_gshared (Enumerator_t7024 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m39975(__this, method) (( void (*) (Enumerator_t7024 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m39975_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m39976_gshared (Enumerator_t7024 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m39976(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t7024 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m39976_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m39977_gshared (Enumerator_t7024 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m39977(__this, method) (( Object_t * (*) (Enumerator_t7024 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m39977_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m39978_gshared (Enumerator_t7024 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m39978(__this, method) (( Object_t * (*) (Enumerator_t7024 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m39978_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m39979_gshared (Enumerator_t7024 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m39979(__this, method) (( bool (*) (Enumerator_t7024 *, const MethodInfo*))Enumerator_MoveNext_m39979_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t7001  Enumerator_get_Current_m39980_gshared (Enumerator_t7024 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m39980(__this, method) (( KeyValuePair_2_t7001  (*) (Enumerator_t7024 *, const MethodInfo*))Enumerator_get_Current_m39980_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m39981_gshared (Enumerator_t7024 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m39981(__this, method) (( Object_t * (*) (Enumerator_t7024 *, const MethodInfo*))Enumerator_get_CurrentKey_m39981_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m39982_gshared (Enumerator_t7024 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m39982(__this, method) (( uint8_t (*) (Enumerator_t7024 *, const MethodInfo*))Enumerator_get_CurrentValue_m39982_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m39983_gshared (Enumerator_t7024 * __this, const MethodInfo* method);
#define Enumerator_Reset_m39983(__this, method) (( void (*) (Enumerator_t7024 *, const MethodInfo*))Enumerator_Reset_m39983_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m39984_gshared (Enumerator_t7024 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m39984(__this, method) (( void (*) (Enumerator_t7024 *, const MethodInfo*))Enumerator_VerifyState_m39984_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m39985_gshared (Enumerator_t7024 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m39985(__this, method) (( void (*) (Enumerator_t7024 *, const MethodInfo*))Enumerator_VerifyCurrent_m39985_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m39986_gshared (Enumerator_t7024 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m39986(__this, method) (( void (*) (Enumerator_t7024 *, const MethodInfo*))Enumerator_Dispose_m39986_gshared)(__this, method)
