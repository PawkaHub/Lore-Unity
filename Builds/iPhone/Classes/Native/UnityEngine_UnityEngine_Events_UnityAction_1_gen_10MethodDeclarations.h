#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t6869;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m34289_gshared (UnityAction_1_t6869 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m34289(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t6869 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m34289_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m34290_gshared (UnityAction_1_t6869 * __this, uint8_t ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m34290(__this, ___arg0, method) (( void (*) (UnityAction_1_t6869 *, uint8_t, const MethodInfo*))UnityAction_1_Invoke_m34290_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Byte>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m34291_gshared (UnityAction_1_t6869 * __this, uint8_t ___arg0, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m34291(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t6869 *, uint8_t, AsyncCallback_t477 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m34291_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m34292_gshared (UnityAction_1_t6869 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m34292(__this, ___result, method) (( void (*) (UnityAction_1_t6869 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m34292_gshared)(__this, ___result, method)
