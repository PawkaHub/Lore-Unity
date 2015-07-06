#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>
struct Enumerator_t4907;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m24433_gshared (Enumerator_t4907 * __this, Dictionary_2_t28 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m24433(__this, ___dictionary, method) (( void (*) (Enumerator_t4907 *, Dictionary_2_t28 *, const MethodInfo*))Enumerator__ctor_m24433_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m24434_gshared (Enumerator_t4907 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m24434(__this, method) (( Object_t * (*) (Enumerator_t4907 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m24434_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m24435_gshared (Enumerator_t4907 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m24435(__this, method) (( void (*) (Enumerator_t4907 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m24435_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24436_gshared (Enumerator_t4907 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24436(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t4907 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24436_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24437_gshared (Enumerator_t4907 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24437(__this, method) (( Object_t * (*) (Enumerator_t4907 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24437_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24438_gshared (Enumerator_t4907 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24438(__this, method) (( Object_t * (*) (Enumerator_t4907 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24438_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18292_gshared (Enumerator_t4907 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18292(__this, method) (( bool (*) (Enumerator_t4907 *, const MethodInfo*))Enumerator_MoveNext_m18292_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::get_Current()
extern "C" KeyValuePair_2_t4906  Enumerator_get_Current_m18289_gshared (Enumerator_t4907 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18289(__this, method) (( KeyValuePair_2_t4906  (*) (Enumerator_t4907 *, const MethodInfo*))Enumerator_get_Current_m18289_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::get_CurrentKey()
extern "C" uint8_t Enumerator_get_CurrentKey_m24439_gshared (Enumerator_t4907 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m24439(__this, method) (( uint8_t (*) (Enumerator_t4907 *, const MethodInfo*))Enumerator_get_CurrentKey_m24439_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m24440_gshared (Enumerator_t4907 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m24440(__this, method) (( Object_t * (*) (Enumerator_t4907 *, const MethodInfo*))Enumerator_get_CurrentValue_m24440_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::Reset()
extern "C" void Enumerator_Reset_m24441_gshared (Enumerator_t4907 * __this, const MethodInfo* method);
#define Enumerator_Reset_m24441(__this, method) (( void (*) (Enumerator_t4907 *, const MethodInfo*))Enumerator_Reset_m24441_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m24442_gshared (Enumerator_t4907 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m24442(__this, method) (( void (*) (Enumerator_t4907 *, const MethodInfo*))Enumerator_VerifyState_m24442_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m24443_gshared (Enumerator_t4907 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m24443(__this, method) (( void (*) (Enumerator_t4907 *, const MethodInfo*))Enumerator_VerifyCurrent_m24443_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m24444_gshared (Enumerator_t4907 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m24444(__this, method) (( void (*) (Enumerator_t4907 *, const MethodInfo*))Enumerator_Dispose_m24444_gshared)(__this, method)
