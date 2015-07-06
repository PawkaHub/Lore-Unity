#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t4883;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void IntegerMillisecondsDelegate__ctor_m18137 (IntegerMillisecondsDelegate_t4883 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::Invoke()
extern "C" int32_t IntegerMillisecondsDelegate_Invoke_m18138 (IntegerMillisecondsDelegate_t4883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_IntegerMillisecondsDelegate_t4883(Il2CppObject* delegate);
// System.IAsyncResult ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * IntegerMillisecondsDelegate_BeginInvoke_m18139 (IntegerMillisecondsDelegate_t4883 * __this, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::EndInvoke(System.IAsyncResult)
extern "C" int32_t IntegerMillisecondsDelegate_EndInvoke_m18140 (IntegerMillisecondsDelegate_t4883 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
