#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t6833;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t219;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_26MethodDeclarations.h"
#define Transform_1__ctor_m33832(__this, ___object, ___method, method) (( void (*) (Transform_1_t6833 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m30860_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m33833(__this, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Transform_1_t6833 *, Graphic_t219 *, int32_t, const MethodInfo*))Transform_1_Invoke_m30861_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m33834(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6833 *, Graphic_t219 *, int32_t, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m30862_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m33835(__this, ___result, method) (( DictionaryEntry_t748  (*) (Transform_1_t6833 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m30863_gshared)(__this, ___result, method)
