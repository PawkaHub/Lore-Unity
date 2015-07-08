#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlNodeEventHandler
struct XmlNodeEventHandler_t4017;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlNodeEventArgs
struct XmlNodeEventArgs_t3985;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlNodeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void XmlNodeEventHandler__ctor_m13164 (XmlNodeEventHandler_t4017 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlNodeEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlNodeEventArgs)
extern "C" void XmlNodeEventHandler_Invoke_m13165 (XmlNodeEventHandler_t4017 * __this, Object_t * ___sender, XmlNodeEventArgs_t3985 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlNodeEventHandler_t4017(Il2CppObject* delegate, Object_t * ___sender, XmlNodeEventArgs_t3985 * ___e);
// System.IAsyncResult System.Xml.Serialization.XmlNodeEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlNodeEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlNodeEventHandler_BeginInvoke_m13166 (XmlNodeEventHandler_t4017 * __this, Object_t * ___sender, XmlNodeEventArgs_t3985 * ___e, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlNodeEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void XmlNodeEventHandler_EndInvoke_m13167 (XmlNodeEventHandler_t4017 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
