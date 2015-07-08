#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t2120;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t1950;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.String>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_25MethodDeclarations.h"
#define Action_1__ctor_m9353(__this, ___object, ___method, method) (( void (*) (Action_1_t2120 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m28570_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.String>>::Invoke(T)
#define Action_1_Invoke_m38385(__this, ___obj, method) (( void (*) (Action_1_t2120 *, Task_1_t1950 *, const MethodInfo*))Action_1_Invoke_m28572_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.String>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m38386(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t2120 *, Task_1_t1950 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m28574_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.String>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m38387(__this, ___result, method) (( void (*) (Action_1_t2120 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m28576_gshared)(__this, ___result, method)
