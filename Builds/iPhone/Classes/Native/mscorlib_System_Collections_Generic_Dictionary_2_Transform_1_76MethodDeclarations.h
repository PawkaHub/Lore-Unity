#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.DictionaryEntry>
struct Transform_1_t7388;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1810;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m42310(__this, ___object, ___method, method) (( void (*) (Transform_1_t7388 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m24693_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m42311(__this, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Transform_1_t7388 *, String_t*, Object_t*, const MethodInfo*))Transform_1_Invoke_m24694_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m42312(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7388 *, String_t*, Object_t*, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m24695_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m42313(__this, ___result, method) (( DictionaryEntry_t748  (*) (Transform_1_t7388 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m24696_gshared)(__this, ___result, method)
