#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t5176;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2877;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26901_gshared (Enumerator_t5176 * __this, Dictionary_2_t2877 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m26901(__this, ___dictionary, method) (( void (*) (Enumerator_t5176 *, Dictionary_2_t2877 *, const MethodInfo*))Enumerator__ctor_m26901_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26902_gshared (Enumerator_t5176 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m26902(__this, method) (( Object_t * (*) (Enumerator_t5176 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m26902_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26903_gshared (Enumerator_t5176 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26903(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t5176 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26903_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26904_gshared (Enumerator_t5176 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26904(__this, method) (( Object_t * (*) (Enumerator_t5176 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26904_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26905_gshared (Enumerator_t5176 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26905(__this, method) (( Object_t * (*) (Enumerator_t5176 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26905_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26906_gshared (Enumerator_t5176 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m26906(__this, method) (( bool (*) (Enumerator_t5176 *, const MethodInfo*))Enumerator_MoveNext_m26906_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t5172  Enumerator_get_Current_m26907_gshared (Enumerator_t5176 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m26907(__this, method) (( KeyValuePair_2_t5172  (*) (Enumerator_t5176 *, const MethodInfo*))Enumerator_get_Current_m26907_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m26908_gshared (Enumerator_t5176 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m26908(__this, method) (( int32_t (*) (Enumerator_t5176 *, const MethodInfo*))Enumerator_get_CurrentKey_m26908_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m26909_gshared (Enumerator_t5176 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m26909(__this, method) (( Object_t * (*) (Enumerator_t5176 *, const MethodInfo*))Enumerator_get_CurrentValue_m26909_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m26910_gshared (Enumerator_t5176 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m26910(__this, method) (( void (*) (Enumerator_t5176 *, const MethodInfo*))Enumerator_VerifyState_m26910_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m26911_gshared (Enumerator_t5176 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m26911(__this, method) (( void (*) (Enumerator_t5176 *, const MethodInfo*))Enumerator_VerifyCurrent_m26911_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m26912_gshared (Enumerator_t5176 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m26912(__this, method) (( void (*) (Enumerator_t5176 *, const MethodInfo*))Enumerator_Dispose_m26912_gshared)(__this, method)
