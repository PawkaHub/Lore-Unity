#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t1507;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t723;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_7MethodDeclarations.h"
#define Func_1__ctor_m8443(__this, ___object, ___method, method) (( void (*) (Func_1_t1507 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m36961_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Threading.Tasks.Task>::Invoke()
#define Func_1_Invoke_m37009(__this, method) (( Task_t723 * (*) (Func_1_t1507 *, const MethodInfo*))Func_1_Invoke_m36963_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Threading.Tasks.Task>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m37010(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1507 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m36965_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Threading.Tasks.Task>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m37011(__this, ___result, method) (( Task_t723 * (*) (Func_1_t1507 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m36967_gshared)(__this, ___result, method)
