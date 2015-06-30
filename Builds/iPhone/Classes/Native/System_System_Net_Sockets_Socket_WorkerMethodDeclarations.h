#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.Socket/Worker
struct Worker_t3574;
// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t3573;

// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult)
extern "C" void Worker__ctor_m15277 (Worker_t3574 * __this, SocketAsyncResult_t3573 * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult,System.Boolean)
extern "C" void Worker__ctor_m15278 (Worker_t3574 * __this, SocketAsyncResult_t3573 * ___ares, bool ___requireSocketSecurity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Receive()
extern "C" void Worker_Receive_m15279 (Worker_t3574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::ReceiveFrom()
extern "C" void Worker_ReceiveFrom_m15280 (Worker_t3574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::UpdateSendValues(System.Int32)
extern "C" void Worker_UpdateSendValues_m15281 (Worker_t3574 * __this, int32_t ___last_sent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Send()
extern "C" void Worker_Send_m15282 (Worker_t3574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::SendTo()
extern "C" void Worker_SendTo_m15283 (Worker_t3574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
