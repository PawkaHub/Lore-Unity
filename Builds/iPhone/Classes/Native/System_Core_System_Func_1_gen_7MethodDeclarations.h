#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Object>
struct Func_1_t1996;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m38388_gshared (Func_1_t1996 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m38388(__this, ___object, ___method, method) (( void (*) (Func_1_t1996 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m38388_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Object>::Invoke()
extern "C" Object_t * Func_1_Invoke_m38390_gshared (Func_1_t1996 * __this, const MethodInfo* method);
#define Func_1_Invoke_m38390(__this, method) (( Object_t * (*) (Func_1_t1996 *, const MethodInfo*))Func_1_Invoke_m38390_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m38392_gshared (Func_1_t1996 * __this, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m38392(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1996 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m38392_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_1_EndInvoke_m38394_gshared (Func_1_t1996 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m38394(__this, ___result, method) (( Object_t * (*) (Func_1_t1996 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m38394_gshared)(__this, ___result, method)
