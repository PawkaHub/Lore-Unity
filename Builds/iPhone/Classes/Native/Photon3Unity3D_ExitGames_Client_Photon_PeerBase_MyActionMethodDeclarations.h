#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t5087;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ExitGames.Client.Photon.PeerBase/MyAction::.ctor(System.Object,System.IntPtr)
extern "C" void MyAction__ctor_m18343 (MyAction_t5087 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::Invoke()
extern "C" void MyAction_Invoke_m18344 (MyAction_t5087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MyAction_t5087(Il2CppObject* delegate);
// System.IAsyncResult ExitGames.Client.Photon.PeerBase/MyAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MyAction_BeginInvoke_m18345 (MyAction_t5087 * __this, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::EndInvoke(System.IAsyncResult)
extern "C" void MyAction_EndInvoke_m18346 (MyAction_t5087 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
