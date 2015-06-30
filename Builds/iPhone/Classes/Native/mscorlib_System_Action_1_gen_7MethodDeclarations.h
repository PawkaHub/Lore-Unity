#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Action>
struct Action_1_t1527;
// System.Object
struct Object_t;
// System.Action
struct Action_t250;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Action>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_20MethodDeclarations.h"
#define Action_1__ctor_m7680(__this, ___object, ___method, method) (( void (*) (Action_1_t1527 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m32374_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Action>::Invoke(T)
#define Action_1_Invoke_m33150(__this, ___obj, method) (( void (*) (Action_1_t1527 *, Action_t250 *, const MethodInfo*))Action_1_Invoke_m32375_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Action>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m33151(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1527 *, Action_t250 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m32376_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Action>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m33152(__this, ___result, method) (( void (*) (Action_1_t1527 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m32377_gshared)(__this, ___result, method)
