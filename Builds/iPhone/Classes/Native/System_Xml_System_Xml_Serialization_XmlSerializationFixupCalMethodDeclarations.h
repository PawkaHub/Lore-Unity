﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationFixupCallback
struct XmlSerializationFixupCallback_t3994;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::.ctor(System.Object,System.IntPtr)
extern "C" void XmlSerializationFixupCallback__ctor_m13172 (XmlSerializationFixupCallback_t3994 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::Invoke(System.Object)
extern "C" void XmlSerializationFixupCallback_Invoke_m13173 (XmlSerializationFixupCallback_t3994 * __this, Object_t * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlSerializationFixupCallback_t3994(Il2CppObject* delegate, Object_t * ___fixup);
// System.IAsyncResult System.Xml.Serialization.XmlSerializationFixupCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlSerializationFixupCallback_BeginInvoke_m13174 (XmlSerializationFixupCallback_t3994 * __this, Object_t * ___fixup, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::EndInvoke(System.IAsyncResult)
extern "C" void XmlSerializationFixupCallback_EndInvoke_m13175 (XmlSerializationFixupCallback_t3994 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
