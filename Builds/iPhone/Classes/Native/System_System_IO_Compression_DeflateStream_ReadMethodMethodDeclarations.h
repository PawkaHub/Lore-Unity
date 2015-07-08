#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Compression.DeflateStream/ReadMethod
struct ReadMethod_t4219;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
extern "C" void ReadMethod__ctor_m13610 (ReadMethod_t4219 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ReadMethod_Invoke_m13611 (ReadMethod_t4219 * __this, ByteU5BU5D_t25* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" int32_t pinvoke_delegate_wrapper_ReadMethod_t4219(Il2CppObject* delegate, ByteU5BU5D_t25* ___array, int32_t ___offset, int32_t ___count);
// System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * ReadMethod_BeginInvoke_m13612 (ReadMethod_t4219 * __this, ByteU5BU5D_t25* ___array, int32_t ___offset, int32_t ___count, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
extern "C" int32_t ReadMethod_EndInvoke_m13613 (ReadMethod_t4219 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
