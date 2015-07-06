#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.DeserializeMethod
struct DeserializeMethod_t4876;
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

// System.Void ExitGames.Client.Photon.DeserializeMethod::.ctor(System.Object,System.IntPtr)
extern "C" void DeserializeMethod__ctor_m18061 (DeserializeMethod_t4876 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeMethod::Invoke(System.Byte[])
extern "C" Object_t * DeserializeMethod_Invoke_m18062 (DeserializeMethod_t4876 * __this, ByteU5BU5D_t25* ___serializedCustomObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" Object_t * pinvoke_delegate_wrapper_DeserializeMethod_t4876(Il2CppObject* delegate, ByteU5BU5D_t25* ___serializedCustomObject);
// System.IAsyncResult ExitGames.Client.Photon.DeserializeMethod::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
extern "C" Object_t * DeserializeMethod_BeginInvoke_m18063 (DeserializeMethod_t4876 * __this, ByteU5BU5D_t25* ___serializedCustomObject, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeMethod::EndInvoke(System.IAsyncResult)
extern "C" Object_t * DeserializeMethod_EndInvoke_m18064 (DeserializeMethod_t4876 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
