#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t4875;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ExitGames.Client.Photon.SerializeMethod::.ctor(System.Object,System.IntPtr)
extern "C" void SerializeMethod__ctor_m18054 (SerializeMethod_t4875 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::Invoke(System.Object)
extern "C" ByteU5BU5D_t25* SerializeMethod_Invoke_m18055 (SerializeMethod_t4875 * __this, Object_t * ___customObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" ByteU5BU5D_t25* pinvoke_delegate_wrapper_SerializeMethod_t4875(Il2CppObject* delegate, Object_t * ___customObject);
// System.IAsyncResult ExitGames.Client.Photon.SerializeMethod::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SerializeMethod_BeginInvoke_m18056 (SerializeMethod_t4875 * __this, Object_t * ___customObject, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::EndInvoke(System.IAsyncResult)
extern "C" ByteU5BU5D_t25* SerializeMethod_EndInvoke_m18057 (SerializeMethod_t4875 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
