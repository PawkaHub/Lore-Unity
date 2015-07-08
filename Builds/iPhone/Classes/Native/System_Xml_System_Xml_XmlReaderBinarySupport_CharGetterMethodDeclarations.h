#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlReaderBinarySupport/CharGetter
struct CharGetter_t4127;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t583;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Xml.XmlReaderBinarySupport/CharGetter::.ctor(System.Object,System.IntPtr)
extern "C" void CharGetter__ctor_m12855 (CharGetter_t4127 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::Invoke(System.Char[],System.Int32,System.Int32)
extern "C" int32_t CharGetter_Invoke_m12856 (CharGetter_t4127 * __this, CharU5BU5D_t583* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#include "mscorlib_ArrayTypes.h"
// System.Char
#include "mscorlib_System_Char.h"
extern "C" int32_t pinvoke_delegate_wrapper_CharGetter_t4127(Il2CppObject* delegate, CharU5BU5D_t583* ___buffer, int32_t ___offset, int32_t ___length);
// System.IAsyncResult System.Xml.XmlReaderBinarySupport/CharGetter::BeginInvoke(System.Char[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * CharGetter_BeginInvoke_m12857 (CharGetter_t4127 * __this, CharU5BU5D_t583* ___buffer, int32_t ___offset, int32_t ___length, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::EndInvoke(System.IAsyncResult)
extern "C" int32_t CharGetter_EndInvoke_m12858 (CharGetter_t4127 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
