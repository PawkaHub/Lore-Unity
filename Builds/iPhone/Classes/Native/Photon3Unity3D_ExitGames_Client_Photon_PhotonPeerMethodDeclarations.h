#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t14;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t24;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t709;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t707;
// System.String
struct String_t;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t703;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t674;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t675;
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.PeerStateValue
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerStateValue.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"

// System.Void ExitGames.Client.Photon.PhotonPeer::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
extern "C" void PhotonPeer_set_DebugOut_m99 (PhotonPeer_t14 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::get_DebugOut()
extern "C" uint8_t PhotonPeer_get_DebugOut_m100 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::get_Listener()
extern "C" Object_t * PhotonPeer_get_Listener_m110 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_Listener(ExitGames.Client.Photon.IPhotonPeerListener)
extern "C" void PhotonPeer_set_Listener_m3198 (PhotonPeer_t14 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsEnabled()
extern "C" bool PhotonPeer_get_TrafficStatsEnabled_m3281 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
extern "C" void PhotonPeer_set_TrafficStatsEnabled_m3282 (PhotonPeer_t14 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsElapsedMs()
extern "C" int64_t PhotonPeer_get_TrafficStatsElapsedMs_m3295 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::TrafficStatsReset()
extern "C" void PhotonPeer_TrafficStatsReset_m3289 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsIncoming()
extern "C" TrafficStats_t709 * PhotonPeer_get_TrafficStatsIncoming_m3299 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsOutgoing()
extern "C" TrafficStats_t709 * PhotonPeer_get_TrafficStatsOutgoing_m3300 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsGameLevel()
extern "C" TrafficStatsGameLevel_t707 * PhotonPeer_get_TrafficStatsGameLevel_m3294 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PhotonPeer::get_QuickResendAttempts()
extern "C" uint8_t PhotonPeer_get_QuickResendAttempts_m3291 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_QuickResendAttempts(System.Byte)
extern "C" void PhotonPeer_set_QuickResendAttempts_m3292 (PhotonPeer_t14 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PeerStateValue ExitGames.Client.Photon.PhotonPeer::get_PeerState()
extern "C" uint8_t PhotonPeer_get_PeerState_m95 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_LimitOfUnreliableCommands()
extern "C" int32_t PhotonPeer_get_LimitOfUnreliableCommands_m3280 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_LimitOfUnreliableCommands(System.Int32)
extern "C" void PhotonPeer_set_LimitOfUnreliableCommands_m3199 (PhotonPeer_t14 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_CrcEnabled()
extern "C" bool PhotonPeer_get_CrcEnabled_m3284 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_CrcEnabled(System.Boolean)
extern "C" void PhotonPeer_set_CrcEnabled_m3285 (PhotonPeer_t14 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_PacketLossByCrc()
extern "C" int32_t PhotonPeer_get_PacketLossByCrc_m3286 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ResentReliableCommands()
extern "C" int32_t PhotonPeer_get_ResentReliableCommands_m3283 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_SentCountAllowance()
extern "C" int32_t PhotonPeer_get_SentCountAllowance_m3287 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_SentCountAllowance(System.Int32)
extern "C" void PhotonPeer_set_SentCountAllowance_m3288 (PhotonPeer_t14 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TimePingInterval(System.Int32)
extern "C" void PhotonPeer_set_TimePingInterval_m93 (PhotonPeer_t14 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ServerTimeInMilliSeconds()
extern "C" int32_t PhotonPeer_get_ServerTimeInMilliSeconds_m3233 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
extern "C" int32_t PhotonPeer_get_RoundTripTime_m3261 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTimeVariance()
extern "C" int32_t PhotonPeer_get_RoundTripTimeVariance_m3262 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_TimestampOfLastSocketReceive()
extern "C" int32_t PhotonPeer_get_TimestampOfLastSocketReceive_m18039 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerAddress()
extern "C" String_t* PhotonPeer_get_ServerAddress_m3155 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_UsedProtocol()
extern "C" uint8_t PhotonPeer_get_UsedProtocol_m109 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsSimulationEnabled()
extern "C" bool PhotonPeer_get_IsSimulationEnabled_m152 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSimulationEnabled(System.Boolean)
extern "C" void PhotonPeer_set_IsSimulationEnabled_m153 (PhotonPeer_t14 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PhotonPeer::get_NetworkSimulationSettings()
extern "C" NetworkSimulationSet_t703 * PhotonPeer_get_NetworkSimulationSettings_m3264 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsEncryptionAvailable()
extern "C" bool PhotonPeer_get_IsEncryptionAvailable_m111 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSendingOnlyAcks(System.Boolean)
extern "C" void PhotonPeer_set_IsSendingOnlyAcks_m3279 (PhotonPeer_t14 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void PhotonPeer__ctor_m18040 (PhotonPeer_t14 * __this, uint8_t ___protocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void PhotonPeer__ctor_m107 (PhotonPeer_t14 * __this, Object_t * ___listener, uint8_t ___protocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String)
extern "C" bool PhotonPeer_Connect_m154 (PhotonPeer_t14 * __this, String_t* ___serverAddress, String_t* ___applicationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect()
extern "C" void PhotonPeer_Disconnect_m155 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::StopThread()
extern "C" void PhotonPeer_StopThread_m156 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::FetchServerTimestamp()
extern "C" void PhotonPeer_FetchServerTimestamp_m157 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::EstablishEncryption()
extern "C" bool PhotonPeer_EstablishEncryption_m91 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Service()
extern "C" void PhotonPeer_Service_m158 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands()
extern "C" bool PhotonPeer_SendOutgoingCommands_m159 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly()
extern "C" bool PhotonPeer_SendAcksOnly_m160 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::DispatchIncomingCommands()
extern "C" bool PhotonPeer_DispatchIncomingCommands_m161 (PhotonPeer_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::VitalStatsToString(System.Boolean)
extern "C" String_t* PhotonPeer_VitalStatsToString_m3290 (PhotonPeer_t14 * __this, bool ___all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
extern "C" bool PhotonPeer_OpCustom_m162 (PhotonPeer_t14 * __this, uint8_t ___customOpCode, Dictionary_2_t28 * ___customOpParameters, bool ___sendReliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte)
extern "C" bool PhotonPeer_OpCustom_m163 (PhotonPeer_t14 * __this, uint8_t ___customOpCode, Dictionary_2_t28 * ___customOpParameters, bool ___sendReliable, uint8_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte,System.Boolean)
extern "C" bool PhotonPeer_OpCustom_m164 (PhotonPeer_t14 * __this, uint8_t ___customOpCode, Dictionary_2_t28 * ___customOpParameters, bool ___sendReliable, uint8_t ___channelId, bool ___encrypt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::RegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C" bool PhotonPeer_RegisterType_m3172 (Object_t * __this /* static, unused */, Type_t * ___customType, uint8_t ___code, SerializeStreamMethod_t674 * ___serializeMethod, DeserializeStreamMethod_t675 * ___constructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
