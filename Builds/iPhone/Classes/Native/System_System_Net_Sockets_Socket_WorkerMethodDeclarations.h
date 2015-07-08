#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.Socket/Worker
struct Worker_t4245;
// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t4244;

// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult)
extern "C" void Worker__ctor_m13739 (Worker_t4245 * __this, SocketAsyncResult_t4244 * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult,System.Boolean)
extern "C" void Worker__ctor_m13740 (Worker_t4245 * __this, SocketAsyncResult_t4244 * ___ares, bool ___requireSocketSecurity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Receive()
extern "C" void Worker_Receive_m13741 (Worker_t4245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::ReceiveFrom()
extern "C" void Worker_ReceiveFrom_m13742 (Worker_t4245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::UpdateSendValues(System.Int32)
extern "C" void Worker_UpdateSendValues_m13743 (Worker_t4245 * __this, int32_t ___last_sent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Send()
extern "C" void Worker_Send_m13744 (Worker_t4245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::SendTo()
extern "C" void Worker_SendTo_m13745 (Worker_t4245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
