#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,Parse.ParseUser>
struct Func_2_t1870;
// System.Object
struct Object_t;
// Parse.ParseUser
struct ParseUser_t722;
// System.Threading.Tasks.Task
struct Task_t723;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,Parse.ParseUser>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_17MethodDeclarations.h"
#define Func_2__ctor_m8876(__this, ___object, ___method, method) (( void (*) (Func_2_t1870 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m8621_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,Parse.ParseUser>::Invoke(T)
#define Func_2_Invoke_m41430(__this, ___arg1, method) (( ParseUser_t722 * (*) (Func_2_t1870 *, Task_t723 *, const MethodInfo*))Func_2_Invoke_m36381_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,Parse.ParseUser>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m41431(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1870 *, Task_t723 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36382_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,Parse.ParseUser>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m41432(__this, ___result, method) (( ParseUser_t722 * (*) (Func_2_t1870 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36383_gshared)(__this, ___result, method)
