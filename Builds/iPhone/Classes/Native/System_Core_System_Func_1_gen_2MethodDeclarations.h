#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t1403;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_6MethodDeclarations.h"
#define Func_1__ctor_m7328(__this, ___object, ___method, method) (( void (*) (Func_1_t1403 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m32975_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Threading.Tasks.Task>::Invoke()
#define Func_1_Invoke_m33022(__this, method) (( Task_t1418 * (*) (Func_1_t1403 *, const MethodInfo*))Func_1_Invoke_m32977_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Threading.Tasks.Task>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m33023(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1403 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m32979_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Threading.Tasks.Task>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m33024(__this, ___result, method) (( Task_t1418 * (*) (Func_1_t1403 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m32981_gshared)(__this, ___result, method)
