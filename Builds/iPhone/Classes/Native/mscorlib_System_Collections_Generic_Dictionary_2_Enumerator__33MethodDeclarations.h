#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Enumerator_t7206;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t2016;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1782;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Dictionary_2_t2019;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_39.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7MethodDeclarations.h"
#define Enumerator__ctor_m39590(__this, ___dictionary, method) (( void (*) (Enumerator_t7206 *, Dictionary_2_t2019 *, const MethodInfo*))Enumerator__ctor_m24655_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m39591(__this, method) (( Object_t * (*) (Enumerator_t7206 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m24656_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m39592(__this, method) (( void (*) (Enumerator_t7206 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m24657_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m39593(__this, method) (( DictionaryEntry_t748  (*) (Enumerator_t7206 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24658_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m39594(__this, method) (( Object_t * (*) (Enumerator_t7206 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24659_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m39595(__this, method) (( Object_t * (*) (Enumerator_t7206 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24660_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::MoveNext()
#define Enumerator_MoveNext_m39596(__this, method) (( bool (*) (Enumerator_t7206 *, const MethodInfo*))Enumerator_MoveNext_m24661_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Current()
#define Enumerator_get_Current_m39597(__this, method) (( KeyValuePair_2_t7203  (*) (Enumerator_t7206 *, const MethodInfo*))Enumerator_get_Current_m24662_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m39598(__this, method) (( Tuple_2_t2016 * (*) (Enumerator_t7206 *, const MethodInfo*))Enumerator_get_CurrentKey_m24663_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m39599(__this, method) (( Func_3_t1782 * (*) (Enumerator_t7206 *, const MethodInfo*))Enumerator_get_CurrentValue_m24664_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Reset()
#define Enumerator_Reset_m39600(__this, method) (( void (*) (Enumerator_t7206 *, const MethodInfo*))Enumerator_Reset_m24665_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::VerifyState()
#define Enumerator_VerifyState_m39601(__this, method) (( void (*) (Enumerator_t7206 *, const MethodInfo*))Enumerator_VerifyState_m24666_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m39602(__this, method) (( void (*) (Enumerator_t7206 *, const MethodInfo*))Enumerator_VerifyCurrent_m24667_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Dispose()
#define Enumerator_Dispose_m39603(__this, method) (( void (*) (Enumerator_t7206 *, const MethodInfo*))Enumerator_Dispose_m24668_gshared)(__this, method)
