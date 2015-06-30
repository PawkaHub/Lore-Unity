#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonHandler
struct PhotonHandler_t446;
// System.String
struct String_t;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t23;
// ExitGames.Client.Photon.EventData
struct EventData_t22;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.StatusCode
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode.h"

// System.Void PhotonHandler::.ctor()
extern "C" void PhotonHandler__ctor_m1801 (PhotonHandler_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::.cctor()
extern "C" void PhotonHandler__cctor_m1802 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Awake()
extern "C" void PhotonHandler_Awake_m1803 (PhotonHandler_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnApplicationQuit()
extern "C" void PhotonHandler_OnApplicationQuit_m1804 (PhotonHandler_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Update()
extern "C" void PhotonHandler_Update_m1805 (PhotonHandler_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnLevelWasLoaded(System.Int32)
extern "C" void PhotonHandler_OnLevelWasLoaded_m1806 (PhotonHandler_t446 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnJoinedRoom()
extern "C" void PhotonHandler_OnJoinedRoom_m1807 (PhotonHandler_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnCreatedRoom()
extern "C" void PhotonHandler_OnCreatedRoom_m1808 (PhotonHandler_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::StartFallbackSendAckThread()
extern "C" void PhotonHandler_StartFallbackSendAckThread_m1809 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::StopFallbackSendAckThread()
extern "C" void PhotonHandler_StopFallbackSendAckThread_m1810 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonHandler::FallbackSendAckThread()
extern "C" bool PhotonHandler_FallbackSendAckThread_m1811 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C" void PhotonHandler_DebugReturn_m1812 (PhotonHandler_t446 * __this, uint8_t ___level, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" void PhotonHandler_OnOperationResponse_m1813 (PhotonHandler_t446 * __this, OperationResponse_t23 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C" void PhotonHandler_OnStatusChanged_m1814 (PhotonHandler_t446 * __this, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnEvent(ExitGames.Client.Photon.EventData)
extern "C" void PhotonHandler_OnEvent_m1815 (PhotonHandler_t446 * __this, EventData_t22 * ___photonEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode PhotonHandler::get_BestRegionCodeInPreferences()
extern "C" int32_t PhotonHandler_get_BestRegionCodeInPreferences_m1816 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::set_BestRegionCodeInPreferences(CloudRegionCode)
extern "C" void PhotonHandler_set_BestRegionCodeInPreferences_m1817 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::PingAvailableRegionsAndConnectToBest()
extern "C" void PhotonHandler_PingAvailableRegionsAndConnectToBest_m1818 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhotonHandler::PingAvailableRegionsCoroutine(System.Boolean)
extern "C" Object_t * PhotonHandler_PingAvailableRegionsCoroutine_m1819 (PhotonHandler_t446 * __this, bool ___connectToBest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
