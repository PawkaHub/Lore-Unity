#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.EventHandler`1<Parse.ParsePushNotificationEventArgs>
struct EventHandler_1_t1734;
// System.Object
struct Object_t;
// Parse.ParsePushNotificationEventArgs
struct ParsePushNotificationEventArgs_t1628;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.EventHandler`1<Parse.ParsePushNotificationEventArgs>::.ctor(System.Object,System.IntPtr)
// System.EventHandler`1<System.Object>
#include "mscorlib_System_EventHandler_1_gen_1MethodDeclarations.h"
#define EventHandler_1__ctor_m41045(__this, ___object, ___method, method) (( void (*) (EventHandler_1_t1734 *, Object_t *, IntPtr_t, const MethodInfo*))EventHandler_1__ctor_m33459_gshared)(__this, ___object, ___method, method)
// System.Void System.EventHandler`1<Parse.ParsePushNotificationEventArgs>::Invoke(System.Object,TEventArgs)
#define EventHandler_1_Invoke_m41046(__this, ___sender, ___e, method) (( void (*) (EventHandler_1_t1734 *, Object_t *, ParsePushNotificationEventArgs_t1628 *, const MethodInfo*))EventHandler_1_Invoke_m33461_gshared)(__this, ___sender, ___e, method)
// System.IAsyncResult System.EventHandler`1<Parse.ParsePushNotificationEventArgs>::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
#define EventHandler_1_BeginInvoke_m41047(__this, ___sender, ___e, ___callback, ___object, method) (( Object_t * (*) (EventHandler_1_t1734 *, Object_t *, ParsePushNotificationEventArgs_t1628 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))EventHandler_1_BeginInvoke_m33463_gshared)(__this, ___sender, ___e, ___callback, ___object, method)
// System.Void System.EventHandler`1<Parse.ParsePushNotificationEventArgs>::EndInvoke(System.IAsyncResult)
#define EventHandler_1_EndInvoke_m41048(__this, ___result, method) (( void (*) (EventHandler_1_t1734 *, Object_t *, const MethodInfo*))EventHandler_1_EndInvoke_m33465_gshared)(__this, ___result, method)
