#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.DictionaryEntry>
struct Transform_1_t7853;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_81MethodDeclarations.h"
#define Transform_1__ctor_m50806(__this, ___object, ___method, method) (( void (*) (Transform_1_t7853 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m50807_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m50808(__this, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Transform_1_t7853 *, String_t*, double, const MethodInfo*))Transform_1_Invoke_m50809_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m50810(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7853 *, String_t*, double, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m50811_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m50812(__this, ___result, method) (( DictionaryEntry_t679  (*) (Transform_1_t7853 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m50813_gshared)(__this, ___result, method)
