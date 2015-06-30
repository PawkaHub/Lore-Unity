#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Photon.PunBehaviour
struct PunBehaviour_t351;
// PhotonPlayer
struct PhotonPlayer_t432;
// System.Object[]
struct ObjectU5BU5D_t21;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t436;
// System.String
struct String_t;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t23;
// DisconnectCause
#include "AssemblyU2DCSharp_DisconnectCause.h"

// System.Void Photon.PunBehaviour::.ctor()
extern "C" void PunBehaviour__ctor_m1721 (PunBehaviour_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectedToPhoton()
extern "C" void PunBehaviour_OnConnectedToPhoton_m1722 (PunBehaviour_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLeftRoom()
extern "C" void PunBehaviour_OnLeftRoom_m1723 (PunBehaviour_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnMasterClientSwitched(PhotonPlayer)
extern "C" void PunBehaviour_OnMasterClientSwitched_m1724 (PunBehaviour_t351 * __this, PhotonPlayer_t432 * ___newMasterClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonCreateRoomFailed(System.Object[])
extern "C" void PunBehaviour_OnPhotonCreateRoomFailed_m1725 (PunBehaviour_t351 * __this, ObjectU5BU5D_t21* ___codeAndMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonJoinRoomFailed(System.Object[])
extern "C" void PunBehaviour_OnPhotonJoinRoomFailed_m1726 (PunBehaviour_t351 * __this, ObjectU5BU5D_t21* ___codeAndMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCreatedRoom()
extern "C" void PunBehaviour_OnCreatedRoom_m1727 (PunBehaviour_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnJoinedLobby()
extern "C" void PunBehaviour_OnJoinedLobby_m1728 (PunBehaviour_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLeftLobby()
extern "C" void PunBehaviour_OnLeftLobby_m1729 (PunBehaviour_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnFailedToConnectToPhoton(DisconnectCause)
extern "C" void PunBehaviour_OnFailedToConnectToPhoton_m1730 (PunBehaviour_t351 * __this, int32_t ___cause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnDisconnectedFromPhoton()
extern "C" void PunBehaviour_OnDisconnectedFromPhoton_m1731 (PunBehaviour_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectionFail(DisconnectCause)
extern "C" void PunBehaviour_OnConnectionFail_m1732 (PunBehaviour_t351 * __this, int32_t ___cause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonInstantiate(PhotonMessageInfo)
extern "C" void PunBehaviour_OnPhotonInstantiate_m1733 (PunBehaviour_t351 * __this, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnReceivedRoomListUpdate()
extern "C" void PunBehaviour_OnReceivedRoomListUpdate_m1734 (PunBehaviour_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnJoinedRoom()
extern "C" void PunBehaviour_OnJoinedRoom_m1735 (PunBehaviour_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerConnected(PhotonPlayer)
extern "C" void PunBehaviour_OnPhotonPlayerConnected_m1736 (PunBehaviour_t351 * __this, PhotonPlayer_t432 * ___newPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C" void PunBehaviour_OnPhotonPlayerDisconnected_m1737 (PunBehaviour_t351 * __this, PhotonPlayer_t432 * ___otherPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonRandomJoinFailed(System.Object[])
extern "C" void PunBehaviour_OnPhotonRandomJoinFailed_m1738 (PunBehaviour_t351 * __this, ObjectU5BU5D_t21* ___codeAndMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectedToMaster()
extern "C" void PunBehaviour_OnConnectedToMaster_m1739 (PunBehaviour_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonMaxCccuReached()
extern "C" void PunBehaviour_OnPhotonMaxCccuReached_m1740 (PunBehaviour_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C" void PunBehaviour_OnPhotonCustomRoomPropertiesChanged_m1741 (PunBehaviour_t351 * __this, Hashtable_t436 * ___propertiesThatChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerPropertiesChanged(System.Object[])
extern "C" void PunBehaviour_OnPhotonPlayerPropertiesChanged_m1742 (PunBehaviour_t351 * __this, ObjectU5BU5D_t21* ___playerAndUpdatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnUpdatedFriendList()
extern "C" void PunBehaviour_OnUpdatedFriendList_m1743 (PunBehaviour_t351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCustomAuthenticationFailed(System.String)
extern "C" void PunBehaviour_OnCustomAuthenticationFailed_m1744 (PunBehaviour_t351 * __this, String_t* ___debugMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" void PunBehaviour_OnWebRpcResponse_m1745 (PunBehaviour_t351 * __this, OperationResponse_t23 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnOwnershipRequest(System.Object[])
extern "C" void PunBehaviour_OnOwnershipRequest_m1746 (PunBehaviour_t351 * __this, ObjectU5BU5D_t21* ___viewAndPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
