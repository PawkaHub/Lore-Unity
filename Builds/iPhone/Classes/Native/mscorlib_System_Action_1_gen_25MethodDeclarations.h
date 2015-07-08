#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Object>
struct Action_1_t3305;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m28570_gshared (Action_1_t3305 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m28570(__this, ___object, ___method, method) (( void (*) (Action_1_t3305 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m28570_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" void Action_1_Invoke_m28572_gshared (Action_1_t3305 * __this, Object_t * ___obj, const MethodInfo* method);
#define Action_1_Invoke_m28572(__this, ___obj, method) (( void (*) (Action_1_t3305 *, Object_t *, const MethodInfo*))Action_1_Invoke_m28572_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m28574_gshared (Action_1_t3305 * __this, Object_t * ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m28574(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3305 *, Object_t *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m28574_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m28576_gshared (Action_1_t3305 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m28576(__this, ___result, method) (( void (*) (Action_1_t3305 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m28576_gshared)(__this, ___result, method)
