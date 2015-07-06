#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationFixupCallback
struct XmlSerializationFixupCallback_t3756;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::.ctor(System.Object,System.IntPtr)
extern "C" void XmlSerializationFixupCallback__ctor_m12753 (XmlSerializationFixupCallback_t3756 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::Invoke(System.Object)
extern "C" void XmlSerializationFixupCallback_Invoke_m12754 (XmlSerializationFixupCallback_t3756 * __this, Object_t * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlSerializationFixupCallback_t3756(Il2CppObject* delegate, Object_t * ___fixup);
// System.IAsyncResult System.Xml.Serialization.XmlSerializationFixupCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlSerializationFixupCallback_BeginInvoke_m12755 (XmlSerializationFixupCallback_t3756 * __this, Object_t * ___fixup, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::EndInvoke(System.IAsyncResult)
extern "C" void XmlSerializationFixupCallback_EndInvoke_m12756 (XmlSerializationFixupCallback_t3756 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
