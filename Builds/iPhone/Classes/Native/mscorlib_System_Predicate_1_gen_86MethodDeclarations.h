﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct Predicate_1_t7230;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Predicate_1_gen_83MethodDeclarations.h"
#define Predicate_1__ctor_m40042(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7230 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m39257_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Invoke(T)
#define Predicate_1_Invoke_m40043(__this, ___obj, method) (( bool (*) (Predicate_1_t7230 *, KeyValuePair_2_t1694 , const MethodInfo*))Predicate_1_Invoke_m39258_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m40044(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7230 *, KeyValuePair_2_t1694 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m39259_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m40045(__this, ___result, method) (( bool (*) (Predicate_1_t7230 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m39260_gshared)(__this, ___result, method)
