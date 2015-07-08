﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.DictionaryEntry>
struct Transform_1_t8161;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_86MethodDeclarations.h"
#define Transform_1__ctor_m52072(__this, ___object, ___method, method) (( void (*) (Transform_1_t8161 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m52073_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m52074(__this, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Transform_1_t8161 *, String_t*, DateTime_t1953 , const MethodInfo*))Transform_1_Invoke_m52075_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m52076(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t8161 *, String_t*, DateTime_t1953 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m52077_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m52078(__this, ___result, method) (( DictionaryEntry_t748  (*) (Transform_1_t8161 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m52079_gshared)(__this, ___result, method)
