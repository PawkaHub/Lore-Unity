#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct Func_2_t1802;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_79MethodDeclarations.h"
#define Func_2__ctor_m9025(__this, ___object, ___method, method) (( void (*) (Func_2_t1802 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m39794_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::Invoke(T)
#define Func_2_Invoke_m39795(__this, ___arg1, method) (( String_t* (*) (Func_2_t1802 *, KeyValuePair_2_t1962 , const MethodInfo*))Func_2_Invoke_m39796_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39797(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1802 *, KeyValuePair_2_t1962 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m39798_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39799(__this, ___result, method) (( String_t* (*) (Func_2_t1802 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m39800_gshared)(__this, ___result, method)
