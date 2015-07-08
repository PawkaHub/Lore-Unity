#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,ExitGames.Client.Photon.Hashtable,System.Collections.DictionaryEntry>
struct Transform_1_t6636;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t464;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,ExitGames.Client.Photon.Hashtable,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_16MethodDeclarations.h"
#define Transform_1__ctor_m30638(__this, ___object, ___method, method) (( void (*) (Transform_1_t6636 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m29866_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,ExitGames.Client.Photon.Hashtable,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m30639(__this, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Transform_1_t6636 *, int32_t, Hashtable_t464 *, const MethodInfo*))Transform_1_Invoke_m29867_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,ExitGames.Client.Photon.Hashtable,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m30640(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6636 *, int32_t, Hashtable_t464 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m29868_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,ExitGames.Client.Photon.Hashtable,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m30641(__this, ___result, method) (( DictionaryEntry_t748  (*) (Transform_1_t6636 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m29869_gshared)(__this, ___result, method)
