#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t3122;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ExitGames.Client.Photon.PeerBase/MyAction::.ctor(System.Object,System.IntPtr)
extern "C" void MyAction__ctor_m14057 (MyAction_t3122 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::Invoke()
extern "C" void MyAction_Invoke_m14058 (MyAction_t3122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MyAction_t3122(Il2CppObject* delegate);
// System.IAsyncResult ExitGames.Client.Photon.PeerBase/MyAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MyAction_BeginInvoke_m14059 (MyAction_t3122 * __this, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::EndInvoke(System.IAsyncResult)
extern "C" void MyAction_EndInvoke_m14060 (MyAction_t3122 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
