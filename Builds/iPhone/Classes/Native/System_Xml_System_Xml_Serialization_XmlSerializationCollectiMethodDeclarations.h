#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationCollectionFixupCallback
struct XmlSerializationCollectionFixupCallback_t3992;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::.ctor(System.Object,System.IntPtr)
extern "C" void XmlSerializationCollectionFixupCallback__ctor_m13168 (XmlSerializationCollectionFixupCallback_t3992 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::Invoke(System.Object,System.Object)
extern "C" void XmlSerializationCollectionFixupCallback_Invoke_m13169 (XmlSerializationCollectionFixupCallback_t3992 * __this, Object_t * ___collection, Object_t * ___collectionItems, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlSerializationCollectionFixupCallback_t3992(Il2CppObject* delegate, Object_t * ___collection, Object_t * ___collectionItems);
// System.IAsyncResult System.Xml.Serialization.XmlSerializationCollectionFixupCallback::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlSerializationCollectionFixupCallback_BeginInvoke_m13170 (XmlSerializationCollectionFixupCallback_t3992 * __this, Object_t * ___collection, Object_t * ___collectionItems, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::EndInvoke(System.IAsyncResult)
extern "C" void XmlSerializationCollectionFixupCallback_EndInvoke_m13171 (XmlSerializationCollectionFixupCallback_t3992 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
