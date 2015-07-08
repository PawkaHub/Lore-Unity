#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SupportLogging
struct SupportLogging_t561;
// DisconnectCause
#include "AssemblyU2DCSharp_DisconnectCause.h"

// System.Void SupportLogging::.ctor()
extern "C" void SupportLogging__ctor_m2310 (SupportLogging_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::Start()
extern "C" void SupportLogging_Start_m2311 (SupportLogging_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnApplicationQuit()
extern "C" void SupportLogging_OnApplicationQuit_m2312 (SupportLogging_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::LogStats()
extern "C" void SupportLogging_LogStats_m2313 (SupportLogging_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::LogBasics()
extern "C" void SupportLogging_LogBasics_m2314 (SupportLogging_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnConnectedToPhoton()
extern "C" void SupportLogging_OnConnectedToPhoton_m2315 (SupportLogging_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnFailedToConnectToPhoton(DisconnectCause)
extern "C" void SupportLogging_OnFailedToConnectToPhoton_m2316 (SupportLogging_t561 * __this, int32_t ___cause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnJoinedLobby()
extern "C" void SupportLogging_OnJoinedLobby_m2317 (SupportLogging_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnJoinedRoom()
extern "C" void SupportLogging_OnJoinedRoom_m2318 (SupportLogging_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnCreatedRoom()
extern "C" void SupportLogging_OnCreatedRoom_m2319 (SupportLogging_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SupportLogging::OnLeftRoom()
extern "C" void SupportLogging_OnLeftRoom_m2320 (SupportLogging_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
