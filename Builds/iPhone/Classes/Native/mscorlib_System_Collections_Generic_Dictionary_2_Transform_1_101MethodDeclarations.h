#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t9164;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.String,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_15MethodDeclarations.h"
#define Transform_1__ctor_m66424(__this, ___object, ___method, method) (( void (*) (Transform_1_t9164 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m28393_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.String,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m66425(__this, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Transform_1_t9164 *, int32_t, String_t*, const MethodInfo*))Transform_1_Invoke_m28394_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.String,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m66426(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t9164 *, int32_t, String_t*, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m28395_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.String,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m66427(__this, ___result, method) (( DictionaryEntry_t679  (*) (Transform_1_t9164 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m28396_gshared)(__this, ___result, method)
