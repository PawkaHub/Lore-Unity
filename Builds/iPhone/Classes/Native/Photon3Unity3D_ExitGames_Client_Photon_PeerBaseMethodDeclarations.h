#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t5090;
// System.String
struct String_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t24;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t771;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// System.Byte[]
struct ByteU5BU5D_t25;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t23;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t5087;
// ExitGames.Client.Photon.PeerBase/EgMessageType
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_EgMessageTyp.h"
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.StatusCode
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode.h"

// System.Int64 ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabledTime()
extern "C" int64_t PeerBase_get_TrafficStatsEnabledTime_m18351 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabled()
extern "C" bool PeerBase_get_TrafficStatsEnabled_m18352 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_TrafficStatsEnabled(System.Boolean)
extern "C" void PeerBase_set_TrafficStatsEnabled_m18353 (PeerBase_t5090 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
extern "C" String_t* PeerBase_get_ServerAddress_m18354 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_ServerAddress(System.String)
extern "C" void PeerBase_set_ServerAddress_m18355 (PeerBase_t5090 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
extern "C" Object_t * PeerBase_get_Listener_m18356 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_Listener(ExitGames.Client.Photon.IPhotonPeerListener)
extern "C" void PeerBase_set_Listener_m18357 (PeerBase_t5090 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PeerBase::get_QuickResendAttempts()
extern "C" uint8_t PeerBase_get_QuickResendAttempts_m18358 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_QuickResendAttempts(System.Byte)
extern "C" void PeerBase_set_QuickResendAttempts_m18359 (PeerBase_t5090 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::get_NetworkSimulationSettings()
extern "C" NetworkSimulationSet_t771 * PeerBase_get_NetworkSimulationSettings_m18360 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitOnce()
extern "C" void PeerBase_InitOnce_m18361 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::Connect(System.String,System.String)
// System.Void ExitGames.Client.Photon.PeerBase::Disconnect()
// System.Void ExitGames.Client.Photon.PeerBase::StopConnection()
// System.Void ExitGames.Client.Photon.PeerBase::FetchServerTimestamp()
// System.Boolean ExitGames.Client.Photon.PeerBase::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean)
extern "C" bool PeerBase_EnqueueOperation_m18362 (PeerBase_t5090 * __this, Dictionary_2_t28 * ___parameters, uint8_t ___opCode, bool ___sendReliable, uint8_t ___channelId, bool ___encrypted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean,ExitGames.Client.Photon.PeerBase/EgMessageType)
// System.Boolean ExitGames.Client.Photon.PeerBase::DispatchIncomingCommands()
// System.Boolean ExitGames.Client.Photon.PeerBase::SendOutgoingCommands()
// System.Boolean ExitGames.Client.Photon.PeerBase::SendAcksOnly()
extern "C" bool PeerBase_SendAcksOnly_m18363 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.PeerBase::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.PeerBase/EgMessageType,System.Boolean)
// System.Void ExitGames.Client.Photon.PeerBase::ReceiveIncomingCommands(System.Byte[],System.Int32)
// System.Void ExitGames.Client.Photon.PeerBase::InitCallback()
extern "C" void PeerBase_InitCallback_m18364 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_IsSendingOnlyAcks()
extern "C" bool PeerBase_get_IsSendingOnlyAcks_m18365 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_IsSendingOnlyAcks(System.Boolean)
extern "C" void PeerBase_set_IsSendingOnlyAcks_m18366 (PeerBase_t5090 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::ExchangeKeysForEncryption()
extern "C" bool PeerBase_ExchangeKeysForEncryption_m18367 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::DeriveSharedKey(ExitGames.Client.Photon.OperationResponse)
extern "C" void PeerBase_DeriveSharedKey_m18368 (PeerBase_t5090 * __this, OperationResponse_t23 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueActionForDispatch(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C" void PeerBase_EnqueueActionForDispatch_m18369 (PeerBase_t5090 * __this, MyAction_t5087 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C" void PeerBase_EnqueueDebugReturn_m18370 (PeerBase_t5090 * __this, uint8_t ___level, String_t* ___debugReturn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueStatusCallback(ExitGames.Client.Photon.StatusCode)
extern "C" void PeerBase_EnqueueStatusCallback_m18371 (PeerBase_t5090 * __this, int32_t ___statusValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase()
extern "C" void PeerBase_InitPeerBase_m18372 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(System.Byte[])
extern "C" bool PeerBase_DeserializeMessageAndCallback_m18373 (PeerBase_t5090 * __this, ByteU5BU5D_t25* ___inBuff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::SendNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C" void PeerBase_SendNetworkSimulated_m18374 (PeerBase_t5090 * __this, MyAction_t5087 * ___sendAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::ReceiveNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C" void PeerBase_ReceiveNetworkSimulated_m18375 (PeerBase_t5090 * __this, MyAction_t5087 * ___receiveAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::NetworkSimRun()
extern "C" void PeerBase_NetworkSimRun_m18376 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::UpdateRoundTripTimeAndVariance(System.Int32)
extern "C" void PeerBase_UpdateRoundTripTimeAndVariance_m18377 (PeerBase_t5090 * __this, int32_t ___lastRoundtripTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitializeTrafficStats()
extern "C" void PeerBase_InitializeTrafficStats_m18378 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::.ctor()
extern "C" void PeerBase__ctor_m18379 (PeerBase_t5090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::.cctor()
extern "C" void PeerBase__cctor_m18380 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
