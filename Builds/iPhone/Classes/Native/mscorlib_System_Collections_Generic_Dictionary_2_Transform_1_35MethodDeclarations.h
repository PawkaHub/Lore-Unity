#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.LogType,UnityEngine.Color,System.Collections.DictionaryEntry>
struct Transform_1_t6718;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.LogType,UnityEngine.Color,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_33MethodDeclarations.h"
#define Transform_1__ctor_m31988(__this, ___object, ___method, method) (( void (*) (Transform_1_t6718 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m31965_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.LogType,UnityEngine.Color,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m31989(__this, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Transform_1_t6718 *, int32_t, Color_t121 , const MethodInfo*))Transform_1_Invoke_m31966_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.LogType,UnityEngine.Color,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m31990(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6718 *, int32_t, Color_t121 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m31967_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.LogType,UnityEngine.Color,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m31991(__this, ___result, method) (( DictionaryEntry_t748  (*) (Transform_1_t6718 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m31968_gshared)(__this, ___result, method)
