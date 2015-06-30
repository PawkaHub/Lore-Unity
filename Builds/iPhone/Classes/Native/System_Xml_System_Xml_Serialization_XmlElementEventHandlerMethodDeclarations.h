#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlElementEventHandler
struct XmlElementEventHandler_t2392;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlElementEventArgs
struct XmlElementEventArgs_t2351;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlElementEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void XmlElementEventHandler__ctor_m11455 (XmlElementEventHandler_t2392 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlElementEventArgs)
extern "C" void XmlElementEventHandler_Invoke_m11456 (XmlElementEventHandler_t2392 * __this, Object_t * ___sender, XmlElementEventArgs_t2351 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlElementEventHandler_t2392(Il2CppObject* delegate, Object_t * ___sender, XmlElementEventArgs_t2351 * ___e);
// System.IAsyncResult System.Xml.Serialization.XmlElementEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlElementEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlElementEventHandler_BeginInvoke_m11457 (XmlElementEventHandler_t2392 * __this, Object_t * ___sender, XmlElementEventArgs_t2351 * ___e, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void XmlElementEventHandler_EndInvoke_m11458 (XmlElementEventHandler_t2392 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
