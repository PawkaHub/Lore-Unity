﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.DictionaryEntry>
struct Transform_1_t5754;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1555;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m35587(__this, ___object, ___method, method) (( void (*) (Transform_1_t5754 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m22923_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m35588(__this, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Transform_1_t5754 *, Type_t *, Object_t*, const MethodInfo*))Transform_1_Invoke_m22924_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m35589(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5754 *, Type_t *, Object_t*, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m22925_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m35590(__this, ___result, method) (( DictionaryEntry_t660  (*) (Transform_1_t5754 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m22926_gshared)(__this, ___result, method)