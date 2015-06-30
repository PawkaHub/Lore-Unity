#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t2111;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t462;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m9596(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2111 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m25913_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
#define UnityAction_1_Invoke_m38770(__this, ___arg0, method) (( void (*) (UnityAction_1_t2111 *, Component_t462 *, const MethodInfo*))UnityAction_1_Invoke_m25914_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m38771(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2111 *, Component_t462 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m25915_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m38772(__this, ___result, method) (( void (*) (UnityAction_1_t2111 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m25916_gshared)(__this, ___result, method)
