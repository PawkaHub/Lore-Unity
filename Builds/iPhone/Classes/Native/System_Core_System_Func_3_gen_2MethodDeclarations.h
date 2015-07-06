#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1748;
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
#include "System_Core_System_Func_3_genMethodDeclarations.h"
#define Func_3__ctor_m37047(__this, ___object, ___method, method) (( void (*) (Func_3_t1748 *, Object_t *, IntPtr_t, const MethodInfo*))Func_3__ctor_m8531_gshared)(__this, ___object, ___method, method)
// TResult System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(T1,T2)
#define Func_3_Invoke_m37048(__this, ___arg1, ___arg2, method) (( Object_t * (*) (Func_3_t1748 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_3_Invoke_m37049_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
#define Func_3_BeginInvoke_m37050(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Func_3_t1748 *, AsyncCallback_t449 *, Object_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_3_BeginInvoke_m37051_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// TResult System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>::EndInvoke(System.IAsyncResult)
#define Func_3_EndInvoke_m37052(__this, ___result, method) (( Object_t * (*) (Func_3_t1748 *, Object_t *, const MethodInfo*))Func_3_EndInvoke_m37053_gshared)(__this, ___result, method)
