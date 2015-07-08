#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>
struct Enumerator_t9551;
// System.Object
struct Object_t;
// Language.Lua.Tuple`2<System.Int32,System.String>
struct Tuple_2_t3841;
// Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>
struct Tuple_3_t3842;
// System.Collections.Generic.Dictionary`2<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>
struct Dictionary_2_t3820;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_130.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7MethodDeclarations.h"
#define Enumerator__ctor_m69114(__this, ___dictionary, method) (( void (*) (Enumerator_t9551 *, Dictionary_2_t3820 *, const MethodInfo*))Enumerator__ctor_m24655_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m69115(__this, method) (( Object_t * (*) (Enumerator_t9551 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m24656_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m69116(__this, method) (( void (*) (Enumerator_t9551 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m24657_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m69117(__this, method) (( DictionaryEntry_t748  (*) (Enumerator_t9551 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24658_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m69118(__this, method) (( Object_t * (*) (Enumerator_t9551 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24659_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m69119(__this, method) (( Object_t * (*) (Enumerator_t9551 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24660_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::MoveNext()
#define Enumerator_MoveNext_m69120(__this, method) (( bool (*) (Enumerator_t9551 *, const MethodInfo*))Enumerator_MoveNext_m24661_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::get_Current()
#define Enumerator_get_Current_m69121(__this, method) (( KeyValuePair_2_t9548  (*) (Enumerator_t9551 *, const MethodInfo*))Enumerator_get_Current_m24662_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m69122(__this, method) (( Tuple_2_t3841 * (*) (Enumerator_t9551 *, const MethodInfo*))Enumerator_get_CurrentKey_m24663_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m69123(__this, method) (( Tuple_3_t3842 * (*) (Enumerator_t9551 *, const MethodInfo*))Enumerator_get_CurrentValue_m24664_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::Reset()
#define Enumerator_Reset_m69124(__this, method) (( void (*) (Enumerator_t9551 *, const MethodInfo*))Enumerator_Reset_m24665_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::VerifyState()
#define Enumerator_VerifyState_m69125(__this, method) (( void (*) (Enumerator_t9551 *, const MethodInfo*))Enumerator_VerifyState_m24666_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m69126(__this, method) (( void (*) (Enumerator_t9551 *, const MethodInfo*))Enumerator_VerifyCurrent_m24667_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::Dispose()
#define Enumerator_Dispose_m69127(__this, method) (( void (*) (Enumerator_t9551 *, const MethodInfo*))Enumerator_Dispose_m24668_gshared)(__this, method)
