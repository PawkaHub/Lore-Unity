#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t4449;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t4614;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_22MethodDeclarations.h"
#define Action_1__ctor_m68623(__this, ___object, ___method, method) (( void (*) (Action_1_t4449 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m31792_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(T)
#define Action_1_Invoke_m68624(__this, ___obj, method) (( void (*) (Action_1_t4449 *, IUserProfileU5BU5D_t4614*, const MethodInfo*))Action_1_Invoke_m31794_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m68625(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t4449 *, IUserProfileU5BU5D_t4614*, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m31796_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m68626(__this, ___result, method) (( void (*) (Action_1_t4449 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m31798_gshared)(__this, ___result, method)
