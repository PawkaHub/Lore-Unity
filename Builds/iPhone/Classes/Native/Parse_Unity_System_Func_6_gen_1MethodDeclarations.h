#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`6<System.Object,System.Int32,System.Int32,System.Object,System.Object,System.Object>
struct Func_6_t6777;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`6<System.Object,System.Int32,System.Int32,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_6__ctor_m37027_gshared (Func_6_t6777 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_6__ctor_m37027(__this, ___object, ___method, method) (( void (*) (Func_6_t6777 *, Object_t *, IntPtr_t, const MethodInfo*))Func_6__ctor_m37027_gshared)(__this, ___object, ___method, method)
// TResult System.Func`6<System.Object,System.Int32,System.Int32,System.Object,System.Object,System.Object>::Invoke(TArg1,TArg2,TArg3,TArg4,TArg5)
extern "C" Object_t * Func_6_Invoke_m37029_gshared (Func_6_t6777 * __this, Object_t * ___arg1, int32_t ___arg2, int32_t ___arg3, Object_t * ___arg4, Object_t * ___arg5, const MethodInfo* method);
#define Func_6_Invoke_m37029(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___arg5, method) (( Object_t * (*) (Func_6_t6777 *, Object_t *, int32_t, int32_t, Object_t *, Object_t *, const MethodInfo*))Func_6_Invoke_m37029_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___arg5, method)
// System.IAsyncResult System.Func`6<System.Object,System.Int32,System.Int32,System.Object,System.Object,System.Object>::BeginInvoke(TArg1,TArg2,TArg3,TArg4,TArg5,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_6_BeginInvoke_m37031_gshared (Func_6_t6777 * __this, Object_t * ___arg1, int32_t ___arg2, int32_t ___arg3, Object_t * ___arg4, Object_t * ___arg5, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_6_BeginInvoke_m37031(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___arg5, ___callback, ___object, method) (( Object_t * (*) (Func_6_t6777 *, Object_t *, int32_t, int32_t, Object_t *, Object_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_6_BeginInvoke_m37031_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___arg5, ___callback, ___object, method)
// TResult System.Func`6<System.Object,System.Int32,System.Int32,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_6_EndInvoke_m37033_gshared (Func_6_t6777 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_6_EndInvoke_m37033(__this, ___result, method) (( Object_t * (*) (Func_6_t6777 *, Object_t *, const MethodInfo*))Func_6_EndInvoke_m37033_gshared)(__this, ___result, method)
