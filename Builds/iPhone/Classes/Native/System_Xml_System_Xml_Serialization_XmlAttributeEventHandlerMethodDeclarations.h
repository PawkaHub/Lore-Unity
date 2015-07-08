#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_t4015;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t3964;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlAttributeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void XmlAttributeEventHandler__ctor_m13156 (XmlAttributeEventHandler_t4015 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlAttributeEventArgs)
extern "C" void XmlAttributeEventHandler_Invoke_m13157 (XmlAttributeEventHandler_t4015 * __this, Object_t * ___sender, XmlAttributeEventArgs_t3964 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlAttributeEventHandler_t4015(Il2CppObject* delegate, Object_t * ___sender, XmlAttributeEventArgs_t3964 * ___e);
// System.IAsyncResult System.Xml.Serialization.XmlAttributeEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlAttributeEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlAttributeEventHandler_BeginInvoke_m13158 (XmlAttributeEventHandler_t4015 * __this, Object_t * ___sender, XmlAttributeEventArgs_t3964 * ___e, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void XmlAttributeEventHandler_EndInvoke_m13159 (XmlAttributeEventHandler_t4015 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
