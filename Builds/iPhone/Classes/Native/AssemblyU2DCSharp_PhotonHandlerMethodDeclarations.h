#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonHandler
struct PhotonHandler_t474;
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
extern "C" void PhotonHandler__ctor_m1847 (PhotonHandler_t474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::.cctor()
extern "C" void PhotonHandler__cctor_m1848 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Awake()
extern "C" void PhotonHandler_Awake_m1849 (PhotonHandler_t474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnApplicationQuit()
extern "C" void PhotonHandler_OnApplicationQuit_m1850 (PhotonHandler_t474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Update()
extern "C" void PhotonHandler_Update_m1851 (PhotonHandler_t474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnLevelWasLoaded(System.Int32)
extern "C" void PhotonHandler_OnLevelWasLoaded_m1852 (PhotonHandler_t474 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnJoinedRoom()
extern "C" void PhotonHandler_OnJoinedRoom_m1853 (PhotonHandler_t474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnCreatedRoom()
extern "C" void PhotonHandler_OnCreatedRoom_m1854 (PhotonHandler_t474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::StartFallbackSendAckThread()
extern "C" void PhotonHandler_StartFallbackSendAckThread_m1855 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::StopFallbackSendAckThread()
extern "C" void PhotonHandler_StopFallbackSendAckThread_m1856 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonHandler::FallbackSendAckThread()
extern "C" bool PhotonHandler_FallbackSendAckThread_m1857 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C" void PhotonHandler_DebugReturn_m1858 (PhotonHandler_t474 * __this, uint8_t ___level, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" void PhotonHandler_OnOperationResponse_m1859 (PhotonHandler_t474 * __this, OperationResponse_t23 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C" void PhotonHandler_OnStatusChanged_m1860 (PhotonHandler_t474 * __this, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnEvent(ExitGames.Client.Photon.EventData)
extern "C" void PhotonHandler_OnEvent_m1861 (PhotonHandler_t474 * __this, EventData_t22 * ___photonEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode PhotonHandler::get_BestRegionCodeInPreferences()
extern "C" int32_t PhotonHandler_get_BestRegionCodeInPreferences_m1862 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::set_BestRegionCodeInPreferences(CloudRegionCode)
extern "C" void PhotonHandler_set_BestRegionCodeInPreferences_m1863 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::PingAvailableRegionsAndConnectToBest()
extern "C" void PhotonHandler_PingAvailableRegionsAndConnectToBest_m1864 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhotonHandler::PingAvailableRegionsCoroutine(System.Boolean)
extern "C" Object_t * PhotonHandler_PingAvailableRegionsCoroutine_m1865 (PhotonHandler_t474 * __this, bool ___connectToBest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
