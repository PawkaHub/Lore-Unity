#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Uri>
struct Action_1_t1504;
// System.Object
struct Object_t;
// System.Uri
struct Uri_t32;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Uri>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_22MethodDeclarations.h"
#define Action_1__ctor_m37742(__this, ___object, ___method, method) (( void (*) (Action_1_t1504 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m31792_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Uri>::Invoke(T)
#define Action_1_Invoke_m37743(__this, ___obj, method) (( void (*) (Action_1_t1504 *, Uri_t32 *, const MethodInfo*))Action_1_Invoke_m31794_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Uri>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m37744(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1504 *, Uri_t32 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m31796_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Uri>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m37745(__this, ___result, method) (( void (*) (Action_1_t1504 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m31798_gshared)(__this, ___result, method)
