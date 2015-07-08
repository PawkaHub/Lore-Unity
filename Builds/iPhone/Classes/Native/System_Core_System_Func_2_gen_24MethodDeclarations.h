#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>
struct Func_2_t2051;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1965;
// System.Threading.Tasks.Task
struct Task_t344;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_19MethodDeclarations.h"
#define Func_2__ctor_m9078(__this, ___object, ___method, method) (( void (*) (Func_2_t2051 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m9054_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::Invoke(T)
#define Func_2_Invoke_m40077(__this, ___arg1, method) (( Task_1_t1965 * (*) (Func_2_t2051 *, Task_t344 *, const MethodInfo*))Func_2_Invoke_m28610_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m40078(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2051 *, Task_t344 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m28611_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m40079(__this, ___result, method) (( Task_1_t1965 * (*) (Func_2_t2051 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m28612_gshared)(__this, ___result, method)
