#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_t3752;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlSerializationReadCallback::.ctor(System.Object,System.IntPtr)
extern "C" void XmlSerializationReadCallback__ctor_m12757 (XmlSerializationReadCallback_t3752 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReadCallback::Invoke()
extern "C" Object_t * XmlSerializationReadCallback_Invoke_m12758 (XmlSerializationReadCallback_t3752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_XmlSerializationReadCallback_t3752(Il2CppObject* delegate);
// System.IAsyncResult System.Xml.Serialization.XmlSerializationReadCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * XmlSerializationReadCallback_BeginInvoke_m12759 (XmlSerializationReadCallback_t3752 * __this, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReadCallback::EndInvoke(System.IAsyncResult)
extern "C" Object_t * XmlSerializationReadCallback_EndInvoke_m12760 (XmlSerializationReadCallback_t3752 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
