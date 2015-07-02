﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Byte>,System.Object>
struct Func_2_t1581;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1573;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Byte>,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_8MethodDeclarations.h"
#define Func_2__ctor_m33807(__this, ___object, ___method, method) (( void (*) (Func_2_t1581 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7423_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Byte>,System.Object>::Invoke(T)
#define Func_2_Invoke_m33808(__this, ___arg1, method) (( Object_t * (*) (Func_2_t1581 *, Task_1_t1573 *, const MethodInfo*))Func_2_Invoke_m32379_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Byte>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m33809(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1581 *, Task_1_t1573 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m32380_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Byte>,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m33810(__this, ___result, method) (( Object_t * (*) (Func_2_t1581 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m32381_gshared)(__this, ___result, method)