#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationWriteCallback
struct XmlSerializationWriteCallback_t4005;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::.ctor(System.Object,System.IntPtr)
extern "C" void XmlSerializationWriteCallback__ctor_m13180 (XmlSerializationWriteCallback_t4005 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::Invoke(System.Object)
extern "C" void XmlSerializationWriteCallback_Invoke_m13181 (XmlSerializationWriteCallback_t4005 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlSerializationWriteCallback_t4005(Il2CppObject* delegate, Object_t * ___o);
// System.IAsyncResult System.Xml.Serialization.XmlSerializationWriteCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlSerializationWriteCallback_BeginInvoke_m13182 (XmlSerializationWriteCallback_t4005 * __this, Object_t * ___o, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::EndInvoke(System.IAsyncResult)
extern "C" void XmlSerializationWriteCallback_EndInvoke_m13183 (XmlSerializationWriteCallback_t4005 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
