#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
struct Enumerator_t7299;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t7296;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m40765_gshared (Enumerator_t7299 * __this, Dictionary_2_t7296 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m40765(__this, ___dictionary, method) (( void (*) (Enumerator_t7299 *, Dictionary_2_t7296 *, const MethodInfo*))Enumerator__ctor_m40765_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m40766_gshared (Enumerator_t7299 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m40766(__this, method) (( Object_t * (*) (Enumerator_t7299 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m40766_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m40767_gshared (Enumerator_t7299 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m40767(__this, method) (( void (*) (Enumerator_t7299 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m40767_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t748  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m40768_gshared (Enumerator_t7299 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m40768(__this, method) (( DictionaryEntry_t748  (*) (Enumerator_t7299 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m40768_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m40769_gshared (Enumerator_t7299 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m40769(__this, method) (( Object_t * (*) (Enumerator_t7299 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m40769_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m40770_gshared (Enumerator_t7299 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m40770(__this, method) (( Object_t * (*) (Enumerator_t7299 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m40770_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m40771_gshared (Enumerator_t7299 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m40771(__this, method) (( bool (*) (Enumerator_t7299 *, const MethodInfo*))Enumerator_MoveNext_m40771_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t7293  Enumerator_get_Current_m40772_gshared (Enumerator_t7299 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m40772(__this, method) (( KeyValuePair_2_t7293  (*) (Enumerator_t7299 *, const MethodInfo*))Enumerator_get_Current_m40772_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m40773_gshared (Enumerator_t7299 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m40773(__this, method) (( int64_t (*) (Enumerator_t7299 *, const MethodInfo*))Enumerator_get_CurrentKey_m40773_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m40774_gshared (Enumerator_t7299 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m40774(__this, method) (( uint8_t (*) (Enumerator_t7299 *, const MethodInfo*))Enumerator_get_CurrentValue_m40774_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m40775_gshared (Enumerator_t7299 * __this, const MethodInfo* method);
#define Enumerator_Reset_m40775(__this, method) (( void (*) (Enumerator_t7299 *, const MethodInfo*))Enumerator_Reset_m40775_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m40776_gshared (Enumerator_t7299 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m40776(__this, method) (( void (*) (Enumerator_t7299 *, const MethodInfo*))Enumerator_VerifyState_m40776_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m40777_gshared (Enumerator_t7299 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m40777(__this, method) (( void (*) (Enumerator_t7299 *, const MethodInfo*))Enumerator_VerifyCurrent_m40777_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m40778_gshared (Enumerator_t7299 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m40778(__this, method) (( void (*) (Enumerator_t7299 *, const MethodInfo*))Enumerator_Dispose_m40778_gshared)(__this, method)
