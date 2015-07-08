#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t5093;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t24;
// System.String
struct String_t;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t5090;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Net.IPAddress
struct IPAddress_t780;
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// ExitGames.Client.Photon.PhotonSocketState
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocketState.h"
// ExitGames.Client.Photon.PhotonSocketError
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocketError.h"
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.StatusCode
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode.h"

// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
extern "C" Object_t * IPhotonSocket_get_Listener_m18415 (IPhotonSocket_t5093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::get_Protocol()
extern "C" uint8_t IPhotonSocket_get_Protocol_m18416 (IPhotonSocket_t5093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_Protocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void IPhotonSocket_set_Protocol_m18417 (IPhotonSocket_t5093 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
extern "C" int32_t IPhotonSocket_get_State_m18418 (IPhotonSocket_t5093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
extern "C" void IPhotonSocket_set_State_m18419 (IPhotonSocket_t5093 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
extern "C" String_t* IPhotonSocket_get_ServerAddress_m18420 (IPhotonSocket_t5093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerAddress(System.String)
extern "C" void IPhotonSocket_set_ServerAddress_m18421 (IPhotonSocket_t5093 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_ServerPort()
extern "C" int32_t IPhotonSocket_get_ServerPort_m18422 (IPhotonSocket_t5093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerPort(System.Int32)
extern "C" void IPhotonSocket_set_ServerPort_m18423 (IPhotonSocket_t5093 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_Connected()
extern "C" bool IPhotonSocket_get_Connected_m18424 (IPhotonSocket_t5093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_MTU()
extern "C" int32_t IPhotonSocket_get_MTU_m18425 (IPhotonSocket_t5093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C" void IPhotonSocket__ctor_m18426 (IPhotonSocket_t5093 * __this, PeerBase_t5090 * ___peerBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::Connect()
extern "C" bool IPhotonSocket_Connect_m18427 (IPhotonSocket_t5093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect()
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.IPhotonSocket::Send(System.Byte[],System.Int32)
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
extern "C" void IPhotonSocket_HandleReceivedDatagram_m18428 (IPhotonSocket_t5093 * __this, ByteU5BU5D_t25* ___inBuffer, int32_t ___length, bool ___willBeReused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
extern "C" bool IPhotonSocket_ReportDebugOfLevel_m18429 (IPhotonSocket_t5093 * __this, uint8_t ___levelOfMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C" void IPhotonSocket_EnqueueDebugReturn_m18430 (IPhotonSocket_t5093 * __this, uint8_t ___debugLevel, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
extern "C" void IPhotonSocket_HandleException_m18431 (IPhotonSocket_t5093 * __this, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::TryParseAddress(System.String,System.String&,System.UInt16&)
extern "C" bool IPhotonSocket_TryParseAddress_m18432 (IPhotonSocket_t5093 * __this, String_t* ___addressAndPort, String_t** ___address, uint16_t* ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress ExitGames.Client.Photon.IPhotonSocket::GetIpAddress(System.String)
extern "C" IPAddress_t780 * IPhotonSocket_GetIpAddress_m18433 (Object_t * __this /* static, unused */, String_t* ___serverIp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.IPhotonSocket::<HandleException>b__7()
extern "C" void IPhotonSocket_U3CHandleExceptionU3Eb__7_m18434 (IPhotonSocket_t5093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
