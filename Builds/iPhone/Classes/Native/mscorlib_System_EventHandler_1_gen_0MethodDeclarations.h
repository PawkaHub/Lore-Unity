#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.EventHandler`1<System.Object>
struct EventHandler_1_t5341;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventHandler_1__ctor_m29495_gshared (EventHandler_1_t5341 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventHandler_1__ctor_m29495(__this, ___object, ___method, method) (( void (*) (EventHandler_1_t5341 *, Object_t *, IntPtr_t, const MethodInfo*))EventHandler_1__ctor_m29495_gshared)(__this, ___object, ___method, method)
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
extern "C" void EventHandler_1_Invoke_m29497_gshared (EventHandler_1_t5341 * __this, Object_t * ___sender, Object_t * ___e, const MethodInfo* method);
#define EventHandler_1_Invoke_m29497(__this, ___sender, ___e, method) (( void (*) (EventHandler_1_t5341 *, Object_t *, Object_t *, const MethodInfo*))EventHandler_1_Invoke_m29497_gshared)(__this, ___sender, ___e, method)
// System.IAsyncResult System.EventHandler`1<System.Object>::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandler_1_BeginInvoke_m29499_gshared (EventHandler_1_t5341 * __this, Object_t * ___sender, Object_t * ___e, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventHandler_1_BeginInvoke_m29499(__this, ___sender, ___e, ___callback, ___object, method) (( Object_t * (*) (EventHandler_1_t5341 *, Object_t *, Object_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))EventHandler_1_BeginInvoke_m29499_gshared)(__this, ___sender, ___e, ___callback, ___object, method)
// System.Void System.EventHandler`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventHandler_1_EndInvoke_m29501_gshared (EventHandler_1_t5341 * __this, Object_t * ___result, const MethodInfo* method);
#define EventHandler_1_EndInvoke_m29501(__this, ___result, method) (( void (*) (EventHandler_1_t5341 *, Object_t *, const MethodInfo*))EventHandler_1_EndInvoke_m29501_gshared)(__this, ___result, method)
