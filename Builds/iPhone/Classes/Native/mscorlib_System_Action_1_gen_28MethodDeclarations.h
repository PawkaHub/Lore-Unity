#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Byte>
struct Action_1_t6064;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m40459_gshared (Action_1_t6064 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m40459(__this, ___object, ___method, method) (( void (*) (Action_1_t6064 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m40459_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Byte>::Invoke(T)
extern "C" void Action_1_Invoke_m40461_gshared (Action_1_t6064 * __this, uint8_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m40461(__this, ___obj, method) (( void (*) (Action_1_t6064 *, uint8_t, const MethodInfo*))Action_1_Invoke_m40461_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m40463_gshared (Action_1_t6064 * __this, uint8_t ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m40463(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t6064 *, uint8_t, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m40463_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m40465_gshared (Action_1_t6064 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m40465(__this, ___result, method) (( void (*) (Action_1_t6064 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m40465_gshared)(__this, ___result, method)
