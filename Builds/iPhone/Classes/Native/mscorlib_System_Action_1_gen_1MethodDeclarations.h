#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>
struct Action_1_t613;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t639;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_25MethodDeclarations.h"
#define Action_1__ctor_m3750(__this, ___object, ___method, method) (( void (*) (Action_1_t613 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m28570_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::Invoke(T)
#define Action_1_Invoke_m32310(__this, ___obj, method) (( void (*) (Action_1_t613 *, Task_1_t639 *, const MethodInfo*))Action_1_Invoke_m28572_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m32311(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t613 *, Task_1_t639 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m28574_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseUser>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m32312(__this, ___result, method) (( void (*) (Action_1_t613 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m28576_gshared)(__this, ___result, method)
