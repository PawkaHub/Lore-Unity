﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Boolean>
struct Func_2_t332;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityParseHelpers.Loom/DelayedQueueItem
#include "AssemblyU2DCSharp_UnityParseHelpers_Loom_DelayedQueueItem.h"

// System.Void System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"
#define Func_2__ctor_m3219(__this, ___object, ___method, method) (( void (*) (Func_2_t332 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m28536_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m28537(__this, ___arg1, method) (( bool (*) (Func_2_t332 *, DelayedQueueItem_t323 , const MethodInfo*))Func_2_Invoke_m28538_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m28539(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t332 *, DelayedQueueItem_t323 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m28540_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m28541(__this, ___result, method) (( bool (*) (Func_2_t332 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m28542_gshared)(__this, ___result, method)
