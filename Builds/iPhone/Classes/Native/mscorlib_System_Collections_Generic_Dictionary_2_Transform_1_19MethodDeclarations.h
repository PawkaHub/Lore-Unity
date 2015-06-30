#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.DictionaryEntry>
struct Transform_1_t5203;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t49;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m27365(__this, ___object, ___method, method) (( void (*) (Transform_1_t5203 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m22923_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m27366(__this, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Transform_1_t5203 *, String_t*, GameObject_t49 *, const MethodInfo*))Transform_1_Invoke_m22924_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m27367(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5203 *, String_t*, GameObject_t49 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m22925_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m27368(__this, ___result, method) (( DictionaryEntry_t660  (*) (Transform_1_t5203 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m22926_gshared)(__this, ___result, method)
