#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t6515;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m32482(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t6515 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m27338_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.String>::Invoke(T0)
#define UnityAction_1_Invoke_m32483(__this, ___arg0, method) (( void (*) (UnityAction_1_t6515 *, String_t*, const MethodInfo*))UnityAction_1_Invoke_m27339_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.String>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m32484(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t6515 *, String_t*, AsyncCallback_t449 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m27340_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.String>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m32485(__this, ___result, method) (( void (*) (UnityAction_1_t6515 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m27341_gshared)(__this, ___result, method)
