#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_t2391;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t2340;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlAttributeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void XmlAttributeEventHandler__ctor_m11451 (XmlAttributeEventHandler_t2391 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlAttributeEventArgs)
extern "C" void XmlAttributeEventHandler_Invoke_m11452 (XmlAttributeEventHandler_t2391 * __this, Object_t * ___sender, XmlAttributeEventArgs_t2340 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlAttributeEventHandler_t2391(Il2CppObject* delegate, Object_t * ___sender, XmlAttributeEventArgs_t2340 * ___e);
// System.IAsyncResult System.Xml.Serialization.XmlAttributeEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlAttributeEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlAttributeEventHandler_BeginInvoke_m11453 (XmlAttributeEventHandler_t2391 * __this, Object_t * ___sender, XmlAttributeEventArgs_t2340 * ___e, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void XmlAttributeEventHandler_EndInvoke_m11454 (XmlAttributeEventHandler_t2391 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
