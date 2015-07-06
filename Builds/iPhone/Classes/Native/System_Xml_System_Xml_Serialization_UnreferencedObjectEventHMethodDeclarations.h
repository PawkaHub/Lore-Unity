#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t3780;
// System.Object
struct Object_t;
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct UnreferencedObjectEventArgs_t3719;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UnreferencedObjectEventHandler__ctor_m12733 (UnreferencedObjectEventHandler_t3780 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::Invoke(System.Object,System.Xml.Serialization.UnreferencedObjectEventArgs)
extern "C" void UnreferencedObjectEventHandler_Invoke_m12734 (UnreferencedObjectEventHandler_t3780 * __this, Object_t * ___sender, UnreferencedObjectEventArgs_t3719 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnreferencedObjectEventHandler_t3780(Il2CppObject* delegate, Object_t * ___sender, UnreferencedObjectEventArgs_t3719 * ___e);
// System.IAsyncResult System.Xml.Serialization.UnreferencedObjectEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.UnreferencedObjectEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UnreferencedObjectEventHandler_BeginInvoke_m12735 (UnreferencedObjectEventHandler_t3780 * __this, Object_t * ___sender, UnreferencedObjectEventArgs_t3719 * ___e, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UnreferencedObjectEventHandler_EndInvoke_m12736 (UnreferencedObjectEventHandler_t3780 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
