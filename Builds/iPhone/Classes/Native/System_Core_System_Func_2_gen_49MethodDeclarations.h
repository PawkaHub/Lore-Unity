﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Single>
struct Func_2_t5952;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m38773_gshared (Func_2_t5952 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m38773(__this, ___object, ___method, method) (( void (*) (Func_2_t5952 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m38773_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m38775_gshared (Func_2_t5952 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m38775(__this, ___arg1, method) (( float (*) (Func_2_t5952 *, Object_t *, const MethodInfo*))Func_2_Invoke_m38775_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m38777_gshared (Func_2_t5952 * __this, Object_t * ___arg1, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m38777(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t5952 *, Object_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m38777_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m38779_gshared (Func_2_t5952 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m38779(__this, ___result, method) (( float (*) (Func_2_t5952 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m38779_gshared)(__this, ___result, method)
