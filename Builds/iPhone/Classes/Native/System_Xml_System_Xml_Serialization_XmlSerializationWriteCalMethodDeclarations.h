#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationWriteCallback
struct XmlSerializationWriteCallback_t3767;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::.ctor(System.Object,System.IntPtr)
extern "C" void XmlSerializationWriteCallback__ctor_m12761 (XmlSerializationWriteCallback_t3767 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::Invoke(System.Object)
extern "C" void XmlSerializationWriteCallback_Invoke_m12762 (XmlSerializationWriteCallback_t3767 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlSerializationWriteCallback_t3767(Il2CppObject* delegate, Object_t * ___o);
// System.IAsyncResult System.Xml.Serialization.XmlSerializationWriteCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlSerializationWriteCallback_BeginInvoke_m12763 (XmlSerializationWriteCallback_t3767 * __this, Object_t * ___o, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::EndInvoke(System.IAsyncResult)
extern "C" void XmlSerializationWriteCallback_EndInvoke_m12764 (XmlSerializationWriteCallback_t3767 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
