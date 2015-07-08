#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t5121;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void IntegerMillisecondsDelegate__ctor_m18555 (IntegerMillisecondsDelegate_t5121 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::Invoke()
extern "C" int32_t IntegerMillisecondsDelegate_Invoke_m18556 (IntegerMillisecondsDelegate_t5121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_IntegerMillisecondsDelegate_t5121(Il2CppObject* delegate);
// System.IAsyncResult ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * IntegerMillisecondsDelegate_BeginInvoke_m18557 (IntegerMillisecondsDelegate_t5121 * __this, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::EndInvoke(System.IAsyncResult)
extern "C" int32_t IntegerMillisecondsDelegate_EndInvoke_m18558 (IntegerMillisecondsDelegate_t5121 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
