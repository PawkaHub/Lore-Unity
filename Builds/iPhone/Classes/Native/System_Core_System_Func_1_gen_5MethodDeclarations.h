#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Int32>
struct Func_1_t1934;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m9400_gshared (Func_1_t1934 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m9400(__this, ___object, ___method, method) (( void (*) (Func_1_t1934 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m9400_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Int32>::Invoke()
extern "C" int32_t Func_1_Invoke_m66851_gshared (Func_1_t1934 * __this, const MethodInfo* method);
#define Func_1_Invoke_m66851(__this, method) (( int32_t (*) (Func_1_t1934 *, const MethodInfo*))Func_1_Invoke_m66851_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Int32>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m66852_gshared (Func_1_t1934 * __this, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m66852(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1934 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m66852_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Func_1_EndInvoke_m66853_gshared (Func_1_t1934 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m66853(__this, ___result, method) (( int32_t (*) (Func_1_t1934 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m66853_gshared)(__this, ___result, method)
