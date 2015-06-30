#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t655;
// System.Object
struct Object_t;
// System.IO.MemoryStream
struct MemoryStream_t558;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ExitGames.Client.Photon.SerializeStreamMethod::.ctor(System.Object,System.IntPtr)
extern "C" void SerializeStreamMethod__ctor_m3083 (SerializeStreamMethod_t655 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::Invoke(System.IO.MemoryStream,System.Object)
extern "C" int16_t SerializeStreamMethod_Invoke_m14191 (SerializeStreamMethod_t655 * __this, MemoryStream_t558 * ___outStream, Object_t * ___customObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int16_t pinvoke_delegate_wrapper_SerializeStreamMethod_t655(Il2CppObject* delegate, MemoryStream_t558 * ___outStream, Object_t * ___customObject);
// System.IAsyncResult ExitGames.Client.Photon.SerializeStreamMethod::BeginInvoke(System.IO.MemoryStream,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SerializeStreamMethod_BeginInvoke_m14192 (SerializeStreamMethod_t655 * __this, MemoryStream_t558 * ___outStream, Object_t * ___customObject, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::EndInvoke(System.IAsyncResult)
extern "C" int16_t SerializeStreamMethod_EndInvoke_m14193 (SerializeStreamMethod_t655 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
