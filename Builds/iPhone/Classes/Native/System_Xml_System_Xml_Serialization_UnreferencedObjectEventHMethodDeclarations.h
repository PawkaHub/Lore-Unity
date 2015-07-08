#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t4018;
// System.Object
struct Object_t;
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct UnreferencedObjectEventArgs_t3957;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UnreferencedObjectEventHandler__ctor_m13152 (UnreferencedObjectEventHandler_t4018 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::Invoke(System.Object,System.Xml.Serialization.UnreferencedObjectEventArgs)
extern "C" void UnreferencedObjectEventHandler_Invoke_m13153 (UnreferencedObjectEventHandler_t4018 * __this, Object_t * ___sender, UnreferencedObjectEventArgs_t3957 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnreferencedObjectEventHandler_t4018(Il2CppObject* delegate, Object_t * ___sender, UnreferencedObjectEventArgs_t3957 * ___e);
// System.IAsyncResult System.Xml.Serialization.UnreferencedObjectEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.UnreferencedObjectEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UnreferencedObjectEventHandler_BeginInvoke_m13154 (UnreferencedObjectEventHandler_t4018 * __this, Object_t * ___sender, UnreferencedObjectEventArgs_t3957 * ___e, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UnreferencedObjectEventHandler_EndInvoke_m13155 (UnreferencedObjectEventHandler_t4018 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
