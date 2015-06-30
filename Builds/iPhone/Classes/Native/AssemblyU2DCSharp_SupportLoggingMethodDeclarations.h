#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SupportLogging
struct SupportLogging_t534;
// DisconnectCause
#include "AssemblyU2DCSharp_DisconnectCause.h"

// System.Void SupportLogging::.ctor()
extern "C" void SupportLogging__ctor_m2264 (SupportLogging_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::Start()
extern "C" void SupportLogging_Start_m2265 (SupportLogging_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnApplicationQuit()
extern "C" void SupportLogging_OnApplicationQuit_m2266 (SupportLogging_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::LogStats()
extern "C" void SupportLogging_LogStats_m2267 (SupportLogging_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::LogBasics()
extern "C" void SupportLogging_LogBasics_m2268 (SupportLogging_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnConnectedToPhoton()
extern "C" void SupportLogging_OnConnectedToPhoton_m2269 (SupportLogging_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnFailedToConnectToPhoton(DisconnectCause)
extern "C" void SupportLogging_OnFailedToConnectToPhoton_m2270 (SupportLogging_t534 * __this, int32_t ___cause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnJoinedLobby()
extern "C" void SupportLogging_OnJoinedLobby_m2271 (SupportLogging_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnJoinedRoom()
extern "C" void SupportLogging_OnJoinedRoom_m2272 (SupportLogging_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnCreatedRoom()
extern "C" void SupportLogging_OnCreatedRoom_m2273 (SupportLogging_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnLeftRoom()
extern "C" void SupportLogging_OnLeftRoom_m2274 (SupportLogging_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
