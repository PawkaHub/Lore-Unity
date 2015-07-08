#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t4246;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncCall::.ctor(System.Object,System.IntPtr)
extern "C" void SocketAsyncCall__ctor_m13746 (SocketAsyncCall_t4246 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncCall::Invoke()
extern "C" void SocketAsyncCall_Invoke_m13747 (SocketAsyncCall_t4246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SocketAsyncCall_t4246(Il2CppObject* delegate);
// System.IAsyncResult System.Net.Sockets.Socket/SocketAsyncCall::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SocketAsyncCall_BeginInvoke_m13748 (SocketAsyncCall_t4246 * __this, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncCall::EndInvoke(System.IAsyncResult)
extern "C" void SocketAsyncCall_EndInvoke_m13749 (SocketAsyncCall_t4246 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
