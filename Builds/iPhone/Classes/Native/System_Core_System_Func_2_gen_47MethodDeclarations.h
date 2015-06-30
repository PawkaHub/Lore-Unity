#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int32,System.Object>
struct Func_2_t1614;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m35774_gshared (Func_2_t1614 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m35774(__this, ___object, ___method, method) (( void (*) (Func_2_t1614 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m35774_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int32,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m35776_gshared (Func_2_t1614 * __this, int32_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m35776(__this, ___arg1, method) (( Object_t * (*) (Func_2_t1614 *, int32_t, const MethodInfo*))Func_2_Invoke_m35776_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int32,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m35778_gshared (Func_2_t1614 * __this, int32_t ___arg1, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m35778(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1614 *, int32_t, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35778_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m35780_gshared (Func_2_t1614 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m35780(__this, ___result, method) (( Object_t * (*) (Func_2_t1614 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35780_gshared)(__this, ___result, method)
