#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t6871;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_10MethodDeclarations.h"
#define UnityAction_1__ctor_m34297(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t6871 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m34289_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
#define UnityAction_1_Invoke_m34298(__this, ___arg0, method) (( void (*) (UnityAction_1_t6871 *, bool, const MethodInfo*))UnityAction_1_Invoke_m34290_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m34299(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t6871 *, bool, AsyncCallback_t477 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m34291_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m34300(__this, ___result, method) (( void (*) (UnityAction_1_t6871 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m34292_gshared)(__this, ___result, method)
