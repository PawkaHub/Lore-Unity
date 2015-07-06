#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t675;
// System.Object
struct Object_t;
// System.IO.MemoryStream
struct MemoryStream_t576;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ExitGames.Client.Photon.DeserializeStreamMethod::.ctor(System.Object,System.IntPtr)
extern "C" void DeserializeStreamMethod__ctor_m3171 (DeserializeStreamMethod_t675 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeStreamMethod::Invoke(System.IO.MemoryStream,System.Int16)
extern "C" Object_t * DeserializeStreamMethod_Invoke_m18065 (DeserializeStreamMethod_t675 * __this, MemoryStream_t576 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_DeserializeStreamMethod_t675(Il2CppObject* delegate, MemoryStream_t576 * ___inStream, int16_t ___length);
// System.IAsyncResult ExitGames.Client.Photon.DeserializeStreamMethod::BeginInvoke(System.IO.MemoryStream,System.Int16,System.AsyncCallback,System.Object)
extern "C" Object_t * DeserializeStreamMethod_BeginInvoke_m18066 (DeserializeStreamMethod_t675 * __this, MemoryStream_t576 * ___inStream, int16_t ___length, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeStreamMethod::EndInvoke(System.IAsyncResult)
extern "C" Object_t * DeserializeStreamMethod_EndInvoke_m18067 (DeserializeStreamMethod_t675 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
