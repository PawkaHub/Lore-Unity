#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t2710;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_28MethodDeclarations.h"
#define Action_1__ctor_m40458(__this, ___object, ___method, method) (( void (*) (Action_1_t2710 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m40459_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m40460(__this, ___obj, method) (( void (*) (Action_1_t2710 *, bool, const MethodInfo*))Action_1_Invoke_m40461_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m40462(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t2710 *, bool, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m40463_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m40464(__this, ___result, method) (( void (*) (Action_1_t2710 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m40465_gshared)(__this, ___result, method)
