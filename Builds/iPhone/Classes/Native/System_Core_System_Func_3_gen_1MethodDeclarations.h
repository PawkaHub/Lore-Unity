#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1571;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::.ctor(System.Object,System.IntPtr)
// System.Func`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Func_3_gen_2MethodDeclarations.h"
#define Func_3__ctor_m33060(__this, ___object, ___method, method) (( void (*) (Func_3_t1571 *, Object_t *, IntPtr_t, const MethodInfo*))Func_3__ctor_m33061_gshared)(__this, ___object, ___method, method)
// TResult System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(T1,T2)
#define Func_3_Invoke_m33062(__this, ___arg1, ___arg2, method) (( Object_t * (*) (Func_3_t1571 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_3_Invoke_m33063_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
#define Func_3_BeginInvoke_m33064(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Func_3_t1571 *, AsyncCallback_t449 *, Object_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_3_BeginInvoke_m33065_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// TResult System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::EndInvoke(System.IAsyncResult)
#define Func_3_EndInvoke_m33066(__this, ___result, method) (( Object_t * (*) (Func_3_t1571 *, Object_t *, const MethodInfo*))Func_3_EndInvoke_m33067_gshared)(__this, ___result, method)
