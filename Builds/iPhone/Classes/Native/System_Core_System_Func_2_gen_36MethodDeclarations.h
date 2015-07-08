#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,Parse.ParseObject>
struct Func_2_t2070;
// System.Object
struct Object_t;
// Parse.ParseObject
struct ParseObject_t596;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1965;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,Parse.ParseObject>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_19MethodDeclarations.h"
#define Func_2__ctor_m9195(__this, ___object, ___method, method) (( void (*) (Func_2_t2070 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m9054_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,Parse.ParseObject>::Invoke(T)
#define Func_2_Invoke_m41340(__this, ___arg1, method) (( ParseObject_t596 * (*) (Func_2_t2070 *, Task_1_t1965 *, const MethodInfo*))Func_2_Invoke_m28610_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,Parse.ParseObject>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m41341(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2070 *, Task_1_t1965 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m28611_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,Parse.ParseObject>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m41342(__this, ___result, method) (( ParseObject_t596 * (*) (Func_2_t2070 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m28612_gshared)(__this, ___result, method)
