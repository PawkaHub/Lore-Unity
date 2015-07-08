#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseObject,System.String>
struct Func_2_t1788;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Parse.ParseObject
struct ParseObject_t596;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseObject,System.String>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_19MethodDeclarations.h"
#define Func_2__ctor_m8994(__this, ___object, ___method, method) (( void (*) (Func_2_t1788 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m9054_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseObject,System.String>::Invoke(T)
#define Func_2_Invoke_m39708(__this, ___arg1, method) (( String_t* (*) (Func_2_t1788 *, ParseObject_t596 *, const MethodInfo*))Func_2_Invoke_m28610_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseObject,System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39709(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1788 *, ParseObject_t596 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m28611_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseObject,System.String>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39710(__this, ___result, method) (( String_t* (*) (Func_2_t1788 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m28612_gshared)(__this, ___result, method)
