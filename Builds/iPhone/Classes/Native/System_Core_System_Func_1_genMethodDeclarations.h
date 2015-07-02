﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Boolean>
struct Func_1_t685;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Byte>
#include "System_Core_System_Func_1_gen_5MethodDeclarations.h"
#define Func_1__ctor_m3172(__this, ___object, ___method, method) (( void (*) (Func_1_t685 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m28364_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Boolean>::Invoke()
#define Func_1_Invoke_m28365(__this, method) (( bool (*) (Func_1_t685 *, const MethodInfo*))Func_1_Invoke_m28366_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Boolean>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m28367(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t685 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m28368_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m28369(__this, ___result, method) (( bool (*) (Func_1_t685 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m28370_gshared)(__this, ___result, method)