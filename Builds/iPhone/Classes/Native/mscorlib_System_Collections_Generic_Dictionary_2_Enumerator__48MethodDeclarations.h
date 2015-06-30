#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t6142;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t6137;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m41725_gshared (Enumerator_t6142 * __this, Dictionary_2_t6137 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m41725(__this, ___dictionary, method) (( void (*) (Enumerator_t6142 *, Dictionary_2_t6137 *, const MethodInfo*))Enumerator__ctor_m41725_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m41726_gshared (Enumerator_t6142 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m41726(__this, method) (( Object_t * (*) (Enumerator_t6142 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m41726_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m41727_gshared (Enumerator_t6142 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m41727(__this, method) (( DictionaryEntry_t660  (*) (Enumerator_t6142 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m41727_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m41728_gshared (Enumerator_t6142 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m41728(__this, method) (( Object_t * (*) (Enumerator_t6142 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m41728_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m41729_gshared (Enumerator_t6142 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m41729(__this, method) (( Object_t * (*) (Enumerator_t6142 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m41729_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m41730_gshared (Enumerator_t6142 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m41730(__this, method) (( bool (*) (Enumerator_t6142 *, const MethodInfo*))Enumerator_MoveNext_m41730_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t6138  Enumerator_get_Current_m41731_gshared (Enumerator_t6142 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m41731(__this, method) (( KeyValuePair_2_t6138  (*) (Enumerator_t6142 *, const MethodInfo*))Enumerator_get_Current_m41731_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m41732_gshared (Enumerator_t6142 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m41732(__this, method) (( Object_t * (*) (Enumerator_t6142 *, const MethodInfo*))Enumerator_get_CurrentKey_m41732_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m41733_gshared (Enumerator_t6142 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m41733(__this, method) (( int64_t (*) (Enumerator_t6142 *, const MethodInfo*))Enumerator_get_CurrentValue_m41733_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m41734_gshared (Enumerator_t6142 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m41734(__this, method) (( void (*) (Enumerator_t6142 *, const MethodInfo*))Enumerator_VerifyState_m41734_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m41735_gshared (Enumerator_t6142 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m41735(__this, method) (( void (*) (Enumerator_t6142 *, const MethodInfo*))Enumerator_VerifyCurrent_m41735_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m41736_gshared (Enumerator_t6142 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m41736(__this, method) (( void (*) (Enumerator_t6142 *, const MethodInfo*))Enumerator_Dispose_m41736_gshared)(__this, method)
