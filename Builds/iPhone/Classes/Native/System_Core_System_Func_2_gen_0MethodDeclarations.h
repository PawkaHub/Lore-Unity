#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.IAsyncResult,System.Int32>
struct Func_2_t1578;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.IAsyncResult,System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Int32>
#include "System_Core_System_Func_2_gen_34MethodDeclarations.h"
#define Func_2__ctor_m7333(__this, ___object, ___method, method) (( void (*) (Func_2_t1578 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m33047_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.IAsyncResult,System.Int32>::Invoke(T)
#define Func_2_Invoke_m33048(__this, ___arg1, method) (( int32_t (*) (Func_2_t1578 *, Object_t *, const MethodInfo*))Func_2_Invoke_m33049_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.IAsyncResult,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m33050(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1578 *, Object_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m33051_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.IAsyncResult,System.Int32>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m33052(__this, ___result, method) (( int32_t (*) (Func_2_t1578 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m33053_gshared)(__this, ___result, method)
