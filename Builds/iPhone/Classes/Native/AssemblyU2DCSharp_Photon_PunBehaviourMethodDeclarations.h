#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Photon.PunBehaviour
struct PunBehaviour_t379;
// PhotonPlayer
struct PhotonPlayer_t460;
// System.Object[]
struct ObjectU5BU5D_t21;
// PhotonMessageInfo
struct PhotonMessageInfo_t463;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t464;
// System.String
struct String_t;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t23;
// DisconnectCause
#include "AssemblyU2DCSharp_DisconnectCause.h"

// System.Void Photon.PunBehaviour::.ctor()
extern "C" void PunBehaviour__ctor_m1767 (PunBehaviour_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectedToPhoton()
extern "C" void PunBehaviour_OnConnectedToPhoton_m1768 (PunBehaviour_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLeftRoom()
extern "C" void PunBehaviour_OnLeftRoom_m1769 (PunBehaviour_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnMasterClientSwitched(PhotonPlayer)
extern "C" void PunBehaviour_OnMasterClientSwitched_m1770 (PunBehaviour_t379 * __this, PhotonPlayer_t460 * ___newMasterClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonCreateRoomFailed(System.Object[])
extern "C" void PunBehaviour_OnPhotonCreateRoomFailed_m1771 (PunBehaviour_t379 * __this, ObjectU5BU5D_t21* ___codeAndMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonJoinRoomFailed(System.Object[])
extern "C" void PunBehaviour_OnPhotonJoinRoomFailed_m1772 (PunBehaviour_t379 * __this, ObjectU5BU5D_t21* ___codeAndMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCreatedRoom()
extern "C" void PunBehaviour_OnCreatedRoom_m1773 (PunBehaviour_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnJoinedLobby()
extern "C" void PunBehaviour_OnJoinedLobby_m1774 (PunBehaviour_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLeftLobby()
extern "C" void PunBehaviour_OnLeftLobby_m1775 (PunBehaviour_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnFailedToConnectToPhoton(DisconnectCause)
extern "C" void PunBehaviour_OnFailedToConnectToPhoton_m1776 (PunBehaviour_t379 * __this, int32_t ___cause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnDisconnectedFromPhoton()
extern "C" void PunBehaviour_OnDisconnectedFromPhoton_m1777 (PunBehaviour_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectionFail(DisconnectCause)
extern "C" void PunBehaviour_OnConnectionFail_m1778 (PunBehaviour_t379 * __this, int32_t ___cause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonInstantiate(PhotonMessageInfo)
extern "C" void PunBehaviour_OnPhotonInstantiate_m1779 (PunBehaviour_t379 * __this, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnReceivedRoomListUpdate()
extern "C" void PunBehaviour_OnReceivedRoomListUpdate_m1780 (PunBehaviour_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnJoinedRoom()
extern "C" void PunBehaviour_OnJoinedRoom_m1781 (PunBehaviour_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerConnected(PhotonPlayer)
extern "C" void PunBehaviour_OnPhotonPlayerConnected_m1782 (PunBehaviour_t379 * __this, PhotonPlayer_t460 * ___newPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C" void PunBehaviour_OnPhotonPlayerDisconnected_m1783 (PunBehaviour_t379 * __this, PhotonPlayer_t460 * ___otherPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonRandomJoinFailed(System.Object[])
extern "C" void PunBehaviour_OnPhotonRandomJoinFailed_m1784 (PunBehaviour_t379 * __this, ObjectU5BU5D_t21* ___codeAndMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectedToMaster()
extern "C" void PunBehaviour_OnConnectedToMaster_m1785 (PunBehaviour_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonMaxCccuReached()
extern "C" void PunBehaviour_OnPhotonMaxCccuReached_m1786 (PunBehaviour_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C" void PunBehaviour_OnPhotonCustomRoomPropertiesChanged_m1787 (PunBehaviour_t379 * __this, Hashtable_t464 * ___propertiesThatChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerPropertiesChanged(System.Object[])
extern "C" void PunBehaviour_OnPhotonPlayerPropertiesChanged_m1788 (PunBehaviour_t379 * __this, ObjectU5BU5D_t21* ___playerAndUpdatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnUpdatedFriendList()
extern "C" void PunBehaviour_OnUpdatedFriendList_m1789 (PunBehaviour_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCustomAuthenticationFailed(System.String)
extern "C" void PunBehaviour_OnCustomAuthenticationFailed_m1790 (PunBehaviour_t379 * __this, String_t* ___debugMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" void PunBehaviour_OnWebRpcResponse_m1791 (PunBehaviour_t379 * __this, OperationResponse_t23 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnOwnershipRequest(System.Object[])
extern "C" void PunBehaviour_OnOwnershipRequest_m1792 (PunBehaviour_t379 * __this, ObjectU5BU5D_t21* ___viewAndPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
