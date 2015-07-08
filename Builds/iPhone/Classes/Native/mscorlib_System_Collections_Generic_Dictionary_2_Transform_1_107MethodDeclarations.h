#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>,System.Collections.DictionaryEntry>
struct Transform_1_t9547;
// System.Object
struct Object_t;
// Language.Lua.Tuple`2<System.Int32,System.String>
struct Tuple_2_t3841;
// Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>
struct Tuple_3_t3842;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m69076(__this, ___object, ___method, method) (( void (*) (Transform_1_t9547 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m24693_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m69077(__this, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Transform_1_t9547 *, Tuple_2_t3841 *, Tuple_3_t3842 *, const MethodInfo*))Transform_1_Invoke_m24694_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m69078(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t9547 *, Tuple_2_t3841 *, Tuple_3_t3842 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m24695_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m69079(__this, ___result, method) (( DictionaryEntry_t748  (*) (Transform_1_t9547 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m24696_gshared)(__this, ___result, method)
