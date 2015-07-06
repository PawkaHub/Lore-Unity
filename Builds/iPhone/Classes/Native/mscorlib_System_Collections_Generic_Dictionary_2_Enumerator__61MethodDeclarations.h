#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>
struct Enumerator_t9269;
// System.Object
struct Object_t;
// Language.Lua.Tuple`2<System.Int32,System.String>
struct Tuple_2_t3603;
// Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>
struct Tuple_3_t3604;
// System.Collections.Generic.Dictionary`2<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>
struct Dictionary_2_t3582;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_130.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7MethodDeclarations.h"
#define Enumerator__ctor_m68199(__this, ___dictionary, method) (( void (*) (Enumerator_t9269 *, Dictionary_2_t3582 *, const MethodInfo*))Enumerator__ctor_m24238_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m68200(__this, method) (( Object_t * (*) (Enumerator_t9269 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m24239_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m68201(__this, method) (( void (*) (Enumerator_t9269 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m24240_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m68202(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t9269 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24241_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m68203(__this, method) (( Object_t * (*) (Enumerator_t9269 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24242_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m68204(__this, method) (( Object_t * (*) (Enumerator_t9269 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24243_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::MoveNext()
#define Enumerator_MoveNext_m68205(__this, method) (( bool (*) (Enumerator_t9269 *, const MethodInfo*))Enumerator_MoveNext_m24244_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::get_Current()
#define Enumerator_get_Current_m68206(__this, method) (( KeyValuePair_2_t9266  (*) (Enumerator_t9269 *, const MethodInfo*))Enumerator_get_Current_m24245_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m68207(__this, method) (( Tuple_2_t3603 * (*) (Enumerator_t9269 *, const MethodInfo*))Enumerator_get_CurrentKey_m24246_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m68208(__this, method) (( Tuple_3_t3604 * (*) (Enumerator_t9269 *, const MethodInfo*))Enumerator_get_CurrentValue_m24247_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::Reset()
#define Enumerator_Reset_m68209(__this, method) (( void (*) (Enumerator_t9269 *, const MethodInfo*))Enumerator_Reset_m24248_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::VerifyState()
#define Enumerator_VerifyState_m68210(__this, method) (( void (*) (Enumerator_t9269 *, const MethodInfo*))Enumerator_VerifyState_m24249_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m68211(__this, method) (( void (*) (Enumerator_t9269 *, const MethodInfo*))Enumerator_VerifyCurrent_m24250_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>>::Dispose()
#define Enumerator_Dispose_m68212(__this, method) (( void (*) (Enumerator_t9269 *, const MethodInfo*))Enumerator_Dispose_m24251_gshared)(__this, method)
