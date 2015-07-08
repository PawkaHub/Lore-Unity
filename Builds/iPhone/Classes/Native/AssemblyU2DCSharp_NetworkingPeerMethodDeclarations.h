#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NetworkingPeer
struct NetworkingPeer_t462;
// System.String
struct String_t;
// AuthenticationValues
struct AuthenticationValues_t445;
// Room
struct Room_t457;
// RoomOptions
struct RoomOptions_t458;
// TypedLobby
struct TypedLobby_t459;
// PhotonPlayer
struct PhotonPlayer_t460;
// System.Collections.Generic.List`1<Region>
struct List_1_t461;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t24;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t464;
// ExitGames.Client.Photon.EventData
struct EventData_t22;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t447;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t23;
// System.Object
struct Object_t;
// RaiseEventOptions
struct RaiseEventOptions_t465;
// System.String[]
struct StringU5BU5D_t20;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t635;
// System.Type[]
struct TypeU5BU5D_t636;
// UnityEngine.GameObject
struct GameObject_t49;
// PhotonView
struct PhotonView_t353;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t47;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// PeerState
#include "AssemblyU2DCSharp_PeerState.h"
// ServerConnection
#include "AssemblyU2DCSharp_ServerConnection.h"
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// MatchmakingMode
#include "AssemblyU2DCSharp_MatchmakingMode.h"
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.StatusCode
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode.h"
// PhotonNetworkingMessage
#include "AssemblyU2DCSharp_PhotonNetworkingMessage.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PhotonTargets
#include "AssemblyU2DCSharp_PhotonTargets.h"

// System.Void NetworkingPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,System.String,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void NetworkingPeer__ctor_m1633 (NetworkingPeer_t462 * __this, Object_t * ___listener, String_t* ___playername, uint8_t ___connectionProtocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::.cctor()
extern "C" void NetworkingPeer__cctor_m1634 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_mAppVersionPun()
extern "C" String_t* NetworkingPeer_get_mAppVersionPun_m1635 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AuthenticationValues NetworkingPeer::get_CustomAuthenticationValues()
extern "C" AuthenticationValues_t445 * NetworkingPeer_get_CustomAuthenticationValues_m1636 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CustomAuthenticationValues(AuthenticationValues)
extern "C" void NetworkingPeer_set_CustomAuthenticationValues_m1637 (NetworkingPeer_t462 * __this, AuthenticationValues_t445 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_MasterServerAddress()
extern "C" String_t* NetworkingPeer_get_MasterServerAddress_m1638 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_MasterServerAddress(System.String)
extern "C" void NetworkingPeer_set_MasterServerAddress_m1639 (NetworkingPeer_t462 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_PlayerName()
extern "C" String_t* NetworkingPeer_get_PlayerName_m1640 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_PlayerName(System.String)
extern "C" void NetworkingPeer_set_PlayerName_m1641 (NetworkingPeer_t462 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PeerState NetworkingPeer::get_State()
extern "C" int32_t NetworkingPeer_get_State_m1642 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_State(PeerState)
extern "C" void NetworkingPeer_set_State_m1643 (NetworkingPeer_t462 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room NetworkingPeer::get_mCurrentGame()
extern "C" Room_t457 * NetworkingPeer_get_mCurrentGame_m1644 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room NetworkingPeer::get_mRoomToGetInto()
extern "C" Room_t457 * NetworkingPeer_get_mRoomToGetInto_m1645 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mRoomToGetInto(Room)
extern "C" void NetworkingPeer_set_mRoomToGetInto_m1646 (NetworkingPeer_t462 * __this, Room_t457 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RoomOptions NetworkingPeer::get_mRoomOptionsForCreate()
extern "C" RoomOptions_t458 * NetworkingPeer_get_mRoomOptionsForCreate_m1647 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mRoomOptionsForCreate(RoomOptions)
extern "C" void NetworkingPeer_set_mRoomOptionsForCreate_m1648 (NetworkingPeer_t462 * __this, RoomOptions_t458 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby NetworkingPeer::get_mRoomToEnterLobby()
extern "C" TypedLobby_t459 * NetworkingPeer_get_mRoomToEnterLobby_m1649 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mRoomToEnterLobby(TypedLobby)
extern "C" void NetworkingPeer_set_mRoomToEnterLobby_m1650 (NetworkingPeer_t462 * __this, TypedLobby_t459 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer NetworkingPeer::get_mLocalActor()
extern "C" PhotonPlayer_t460 * NetworkingPeer_get_mLocalActor_m1651 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mLocalActor(PhotonPlayer)
extern "C" void NetworkingPeer_set_mLocalActor_m1652 (NetworkingPeer_t462 * __this, PhotonPlayer_t460 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mMasterClientId()
extern "C" int32_t NetworkingPeer_get_mMasterClientId_m1653 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mMasterClientId(System.Int32)
extern "C" void NetworkingPeer_set_mMasterClientId_m1654 (NetworkingPeer_t462 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_mGameserver()
extern "C" String_t* NetworkingPeer_get_mGameserver_m1655 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mGameserver(System.String)
extern "C" void NetworkingPeer_set_mGameserver_m1656 (NetworkingPeer_t462 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby NetworkingPeer::get_lobby()
extern "C" TypedLobby_t459 * NetworkingPeer_get_lobby_m1657 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_lobby(TypedLobby)
extern "C" void NetworkingPeer_set_lobby_m1658 (NetworkingPeer_t462 * __this, TypedLobby_t459 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mPlayersOnMasterCount()
extern "C" int32_t NetworkingPeer_get_mPlayersOnMasterCount_m1659 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mPlayersOnMasterCount(System.Int32)
extern "C" void NetworkingPeer_set_mPlayersOnMasterCount_m1660 (NetworkingPeer_t462 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mGameCount()
extern "C" int32_t NetworkingPeer_get_mGameCount_m1661 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mGameCount(System.Int32)
extern "C" void NetworkingPeer_set_mGameCount_m1662 (NetworkingPeer_t462 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mPlayersInRoomsCount()
extern "C" int32_t NetworkingPeer_get_mPlayersInRoomsCount_m1663 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mPlayersInRoomsCount(System.Int32)
extern "C" void NetworkingPeer_set_mPlayersInRoomsCount_m1664 (NetworkingPeer_t462 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ServerConnection NetworkingPeer::get_server()
extern "C" int32_t NetworkingPeer_get_server_m1665 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_server(ServerConnection)
extern "C" void NetworkingPeer_set_server_m1666 (NetworkingPeer_t462 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_IsUsingNameServer()
extern "C" bool NetworkingPeer_get_IsUsingNameServer_m1667 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_IsUsingNameServer(System.Boolean)
extern "C" void NetworkingPeer_set_IsUsingNameServer_m1668 (NetworkingPeer_t462 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_NameServerAddress()
extern "C" String_t* NetworkingPeer_get_NameServerAddress_m1669 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Region> NetworkingPeer::get_AvailableRegions()
extern "C" List_1_t461 * NetworkingPeer_get_AvailableRegions_m1670 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_AvailableRegions(System.Collections.Generic.List`1<Region>)
extern "C" void NetworkingPeer_set_AvailableRegions_m1671 (NetworkingPeer_t462 * __this, List_1_t461 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode NetworkingPeer::get_CloudRegion()
extern "C" int32_t NetworkingPeer_get_CloudRegion_m1672 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CloudRegion(CloudRegionCode)
extern "C" void NetworkingPeer_set_CloudRegion_m1673 (NetworkingPeer_t462 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_IsAuthorizeSecretAvailable()
extern "C" bool NetworkingPeer_get_IsAuthorizeSecretAvailable_m1674 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::GetNameServerAddress()
extern "C" String_t* NetworkingPeer_GetNameServerAddress_m1675 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::Connect(System.String,System.String)
extern "C" bool NetworkingPeer_Connect_m1676 (NetworkingPeer_t462 * __this, String_t* ___serverAddress, String_t* ___applicationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::Connect(System.String,ServerConnection)
extern "C" bool NetworkingPeer_Connect_m1677 (NetworkingPeer_t462 * __this, String_t* ___serverAddress, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ConnectToNameServer()
extern "C" bool NetworkingPeer_ConnectToNameServer_m1678 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ConnectToRegionMaster(CloudRegionCode)
extern "C" bool NetworkingPeer_ConnectToRegionMaster_m1679 (NetworkingPeer_t462 * __this, int32_t ___region, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::GetRegions()
extern "C" bool NetworkingPeer_GetRegions_m1680 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::Disconnect()
extern "C" void NetworkingPeer_Disconnect_m1681 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DisconnectToReconnect()
extern "C" void NetworkingPeer_DisconnectToReconnect_m1682 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LeftLobbyCleanup()
extern "C" void NetworkingPeer_LeftLobbyCleanup_m1683 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LeftRoomCleanup()
extern "C" void NetworkingPeer_LeftRoomCleanup_m1684 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LocalCleanupAnythingInstantiated(System.Boolean)
extern "C" void NetworkingPeer_LocalCleanupAnythingInstantiated_m1685 (NetworkingPeer_t462 * __this, bool ___destroyInstantiatedGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ReadoutProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Int32)
extern "C" void NetworkingPeer_ReadoutProperties_m1686 (NetworkingPeer_t462 * __this, Hashtable_t464 * ___gameProperties, Hashtable_t464 * ___pActorProperties, int32_t ___targetActorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::AddNewPlayer(System.Int32,PhotonPlayer)
extern "C" void NetworkingPeer_AddNewPlayer_m1687 (NetworkingPeer_t462 * __this, int32_t ___ID, PhotonPlayer_t460 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemovePlayer(System.Int32,PhotonPlayer)
extern "C" void NetworkingPeer_RemovePlayer_m1688 (NetworkingPeer_t462 * __this, int32_t ___ID, PhotonPlayer_t460 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RebuildPlayerListCopies()
extern "C" void NetworkingPeer_RebuildPlayerListCopies_m1689 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ResetPhotonViewsOnSerialize()
extern "C" void NetworkingPeer_ResetPhotonViewsOnSerialize_m1690 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::HandleEventLeave(System.Int32,ExitGames.Client.Photon.EventData)
extern "C" void NetworkingPeer_HandleEventLeave_m1691 (NetworkingPeer_t462 * __this, int32_t ___actorID, EventData_t22 * ___evLeave, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::CheckMasterClient(System.Int32)
extern "C" void NetworkingPeer_CheckMasterClient_m1692 (NetworkingPeer_t462 * __this, int32_t ___leavingPlayerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::UpdateMasterClient()
extern "C" void NetworkingPeer_UpdateMasterClient_m1693 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::ReturnLowestPlayerId(PhotonPlayer[],System.Int32)
extern "C" int32_t NetworkingPeer_ReturnLowestPlayerId_m1694 (Object_t * __this /* static, unused */, PhotonPlayerU5BU5D_t447* ___players, int32_t ___playerIdToIgnore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::SetMasterClient(System.Int32,System.Boolean)
extern "C" bool NetworkingPeer_SetMasterClient_m1695 (NetworkingPeer_t462 * __this, int32_t ___playerId, bool ___sync, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::SetMasterClient(System.Int32)
extern "C" bool NetworkingPeer_SetMasterClient_m1696 (NetworkingPeer_t462 * __this, int32_t ___nextMasterId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::GetActorPropertiesForActorNr(ExitGames.Client.Photon.Hashtable,System.Int32)
extern "C" Hashtable_t464 * NetworkingPeer_GetActorPropertiesForActorNr_m1697 (NetworkingPeer_t462 * __this, Hashtable_t464 * ___actorProperties, int32_t ___actorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer NetworkingPeer::GetPlayerWithId(System.Int32)
extern "C" PhotonPlayer_t460 * NetworkingPeer_GetPlayerWithId_m1698 (NetworkingPeer_t462 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendPlayerName()
extern "C" void NetworkingPeer_SendPlayerName_m1699 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::GameEnteredOnGameServer(ExitGames.Client.Photon.OperationResponse)
extern "C" void NetworkingPeer_GameEnteredOnGameServer_m1700 (NetworkingPeer_t462 * __this, OperationResponse_t23 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::GetLocalActorProperties()
extern "C" Hashtable_t464 * NetworkingPeer_GetLocalActorProperties_m1701 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ChangeLocalID(System.Int32)
extern "C" void NetworkingPeer_ChangeLocalID_m1702 (NetworkingPeer_t462 * __this, int32_t ___newID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpCreateGame(System.String,RoomOptions,TypedLobby)
extern "C" bool NetworkingPeer_OpCreateGame_m1703 (NetworkingPeer_t462 * __this, String_t* ___roomName, RoomOptions_t458 * ___roomOptions, TypedLobby_t459 * ___typedLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpJoinRoom(System.String,RoomOptions,TypedLobby,System.Boolean)
extern "C" bool NetworkingPeer_OpJoinRoom_m1704 (NetworkingPeer_t462 * __this, String_t* ___roomName, RoomOptions_t458 * ___roomOptions, TypedLobby_t459 * ___typedLobby, bool ___createIfNotExists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpJoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte,ExitGames.Client.Photon.Hashtable,MatchmakingMode,TypedLobby,System.String)
extern "C" bool NetworkingPeer_OpJoinRandomRoom_m1705 (NetworkingPeer_t462 * __this, Hashtable_t464 * ___expectedCustomRoomProperties, uint8_t ___expectedMaxPlayers, Hashtable_t464 * ___playerProperties, uint8_t ___matchingType, TypedLobby_t459 * ___typedLobby, String_t* ___sqlLobbyFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpLeave()
extern "C" bool NetworkingPeer_OpLeave_m1706 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C" bool NetworkingPeer_OpRaiseEvent_m1707 (NetworkingPeer_t462 * __this, uint8_t ___eventCode, Object_t * ___customEventContent, bool ___sendReliable, RaiseEventOptions_t465 * ___raiseEventOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C" void NetworkingPeer_DebugReturn_m1708 (NetworkingPeer_t462 * __this, uint8_t ___level, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" void NetworkingPeer_OnOperationResponse_m1709 (NetworkingPeer_t462 * __this, OperationResponse_t23 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_FriendsListAge()
extern "C" int32_t NetworkingPeer_get_FriendsListAge_m1710 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpFindFriends(System.String[])
extern "C" bool NetworkingPeer_OpFindFriends_m1711 (NetworkingPeer_t462 * __this, StringU5BU5D_t20* ___friendsToFind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C" void NetworkingPeer_OnStatusChanged_m1712 (NetworkingPeer_t462 * __this, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnEvent(ExitGames.Client.Photon.EventData)
extern "C" void NetworkingPeer_OnEvent_m1713 (NetworkingPeer_t462 * __this, EventData_t22 * ___photonEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::UpdatedActorList(System.Int32[])
extern "C" void NetworkingPeer_UpdatedActorList_m1714 (NetworkingPeer_t462 * __this, Int32U5BU5D_t119* ___actorsInRoom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendVacantViewIds()
extern "C" void NetworkingPeer_SendVacantViewIds_m1715 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendMonoMessage(PhotonNetworkingMessage,System.Object[])
extern "C" void NetworkingPeer_SendMonoMessage_m1716 (Object_t * __this /* static, unused */, int32_t ___methodString, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ExecuteRpc(ExitGames.Client.Photon.Hashtable,PhotonPlayer)
extern "C" void NetworkingPeer_ExecuteRpc_m1717 (NetworkingPeer_t462 * __this, Hashtable_t464 * ___rpcData, PhotonPlayer_t460 * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::CheckTypeMatch(System.Reflection.ParameterInfo[],System.Type[])
extern "C" bool NetworkingPeer_CheckTypeMatch_m1718 (NetworkingPeer_t462 * __this, ParameterInfoU5BU5D_t635* ___methodParameters, TypeU5BU5D_t636* ___callParameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::SendInstantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Int32[],System.Object[],System.Boolean)
extern "C" Hashtable_t464 * NetworkingPeer_SendInstantiate_m1719 (NetworkingPeer_t462 * __this, String_t* ___prefabName, Vector3_t53  ___position, Quaternion_t69  ___rotation, int32_t ___group, Int32U5BU5D_t119* ___viewIDs, ObjectU5BU5D_t21* ___data, bool ___isGlobalObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NetworkingPeer::DoInstantiate(ExitGames.Client.Photon.Hashtable,PhotonPlayer,UnityEngine.GameObject)
extern "C" GameObject_t49 * NetworkingPeer_DoInstantiate_m1720 (NetworkingPeer_t462 * __this, Hashtable_t464 * ___evData, PhotonPlayer_t460 * ___photonPlayer, GameObject_t49 * ___resourceGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::StoreInstantiationData(System.Int32,System.Object[])
extern "C" void NetworkingPeer_StoreInstantiationData_m1721 (NetworkingPeer_t462 * __this, int32_t ___instantiationId, ObjectU5BU5D_t21* ___instantiationData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::FetchInstantiationData(System.Int32)
extern "C" ObjectU5BU5D_t21* NetworkingPeer_FetchInstantiationData_m1722 (NetworkingPeer_t462 * __this, int32_t ___instantiationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveInstantiationData(System.Int32)
extern "C" void NetworkingPeer_RemoveInstantiationData_m1723 (NetworkingPeer_t462 * __this, int32_t ___instantiationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DestroyPlayerObjects(System.Int32,System.Boolean)
extern "C" void NetworkingPeer_DestroyPlayerObjects_m1724 (NetworkingPeer_t462 * __this, int32_t ___playerId, bool ___localOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DestroyAll(System.Boolean)
extern "C" void NetworkingPeer_DestroyAll_m1725 (NetworkingPeer_t462 * __this, bool ___localOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveInstantiatedGO(UnityEngine.GameObject,System.Boolean)
extern "C" void NetworkingPeer_RemoveInstantiatedGO_m1726 (NetworkingPeer_t462 * __this, GameObject_t49 * ___go, bool ___localOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::GetInstantiatedObjectsId(UnityEngine.GameObject)
extern "C" int32_t NetworkingPeer_GetInstantiatedObjectsId_m1727 (NetworkingPeer_t462 * __this, GameObject_t49 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ServerCleanInstantiateAndDestroy(System.Int32,System.Int32,System.Boolean)
extern "C" void NetworkingPeer_ServerCleanInstantiateAndDestroy_m1728 (NetworkingPeer_t462 * __this, int32_t ___instantiateId, int32_t ___creatorId, bool ___isRuntimeInstantiated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendDestroyOfPlayer(System.Int32)
extern "C" void NetworkingPeer_SendDestroyOfPlayer_m1729 (NetworkingPeer_t462 * __this, int32_t ___actorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendDestroyOfAll()
extern "C" void NetworkingPeer_SendDestroyOfAll_m1730 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveFromServerInstantiationsOfPlayer(System.Int32)
extern "C" void NetworkingPeer_OpRemoveFromServerInstantiationsOfPlayer_m1731 (NetworkingPeer_t462 * __this, int32_t ___actorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RequestOwnership(System.Int32,System.Int32)
extern "C" void NetworkingPeer_RequestOwnership_m1732 (NetworkingPeer_t462 * __this, int32_t ___viewID, int32_t ___fromOwner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::TransferOwnership(System.Int32,System.Int32)
extern "C" void NetworkingPeer_TransferOwnership_m1733 (NetworkingPeer_t462 * __this, int32_t ___viewID, int32_t ___playerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LocalCleanPhotonView(PhotonView)
extern "C" void NetworkingPeer_LocalCleanPhotonView_m1734 (NetworkingPeer_t462 * __this, PhotonView_t353 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView NetworkingPeer::GetPhotonView(System.Int32)
extern "C" PhotonView_t353 * NetworkingPeer_GetPhotonView_m1735 (NetworkingPeer_t462 * __this, int32_t ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RegisterPhotonView(PhotonView)
extern "C" void NetworkingPeer_RegisterPhotonView_m1736 (NetworkingPeer_t462 * __this, PhotonView_t353 * ___netView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpCleanRpcBuffer(System.Int32)
extern "C" void NetworkingPeer_OpCleanRpcBuffer_m1737 (NetworkingPeer_t462 * __this, int32_t ___actorNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveCompleteCacheOfPlayer(System.Int32)
extern "C" void NetworkingPeer_OpRemoveCompleteCacheOfPlayer_m1738 (NetworkingPeer_t462 * __this, int32_t ___actorNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveCompleteCache()
extern "C" void NetworkingPeer_OpRemoveCompleteCache_m1739 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveCacheOfLeftPlayers()
extern "C" void NetworkingPeer_RemoveCacheOfLeftPlayers_m1740 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::CleanRpcBufferIfMine(PhotonView)
extern "C" void NetworkingPeer_CleanRpcBufferIfMine_m1741 (NetworkingPeer_t462 * __this, PhotonView_t353 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpCleanRpcBuffer(PhotonView)
extern "C" void NetworkingPeer_OpCleanRpcBuffer_m1742 (NetworkingPeer_t462 * __this, PhotonView_t353 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveRPCsInGroup(System.Int32)
extern "C" void NetworkingPeer_RemoveRPCsInGroup_m1743 (NetworkingPeer_t462 * __this, int32_t ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetLevelPrefix(System.Int16)
extern "C" void NetworkingPeer_SetLevelPrefix_m1744 (NetworkingPeer_t462 * __this, int16_t ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RPC(PhotonView,System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C" void NetworkingPeer_RPC_m1745 (NetworkingPeer_t462 * __this, PhotonView_t353 * ___view, String_t* ___methodName, PhotonPlayer_t460 * ___player, bool ___encrypt, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RPC(PhotonView,System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C" void NetworkingPeer_RPC_m1746 (NetworkingPeer_t462 * __this, PhotonView_t353 * ___view, String_t* ___methodName, int32_t ___target, bool ___encrypt, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetReceivingEnabled(System.Int32,System.Boolean)
extern "C" void NetworkingPeer_SetReceivingEnabled_m1747 (NetworkingPeer_t462 * __this, int32_t ___group, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetReceivingEnabled(System.Int32[],System.Int32[])
extern "C" void NetworkingPeer_SetReceivingEnabled_m1748 (NetworkingPeer_t462 * __this, Int32U5BU5D_t119* ___enableGroups, Int32U5BU5D_t119* ___disableGroups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetSendingEnabled(System.Int32,System.Boolean)
extern "C" void NetworkingPeer_SetSendingEnabled_m1749 (NetworkingPeer_t462 * __this, int32_t ___group, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetSendingEnabled(System.Int32[],System.Int32[])
extern "C" void NetworkingPeer_SetSendingEnabled_m1750 (NetworkingPeer_t462 * __this, Int32U5BU5D_t119* ___enableGroups, Int32U5BU5D_t119* ___disableGroups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::NewSceneLoaded()
extern "C" void NetworkingPeer_NewSceneLoaded_m1751 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RunViewUpdate()
extern "C" void NetworkingPeer_RunViewUpdate_m1752 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::OnSerializeWrite(PhotonView)
extern "C" Hashtable_t464 * NetworkingPeer_OnSerializeWrite_m1753 (NetworkingPeer_t462 * __this, PhotonView_t353 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnSerializeRead(ExitGames.Client.Photon.Hashtable,PhotonPlayer,System.Int32,System.Int16)
extern "C" void NetworkingPeer_OnSerializeRead_m1754 (NetworkingPeer_t462 * __this, Hashtable_t464 * ___data, PhotonPlayer_t460 * ___sender, int32_t ___networkTime, int16_t ___correctPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::AlmostEquals(System.Object[],System.Object[])
extern "C" bool NetworkingPeer_AlmostEquals_m1755 (NetworkingPeer_t462 * __this, ObjectU5BU5D_t21* ___lastData, ObjectU5BU5D_t21* ___currentContent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::DeltaCompressionWrite(PhotonView,ExitGames.Client.Photon.Hashtable)
extern "C" bool NetworkingPeer_DeltaCompressionWrite_m1756 (NetworkingPeer_t462 * __this, PhotonView_t353 * ___view, Hashtable_t464 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::DeltaCompressionRead(PhotonView,ExitGames.Client.Photon.Hashtable)
extern "C" bool NetworkingPeer_DeltaCompressionRead_m1757 (NetworkingPeer_t462 * __this, PhotonView_t353 * ___view, Hashtable_t464 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ObjectIsSameWithInprecision(System.Object,System.Object)
extern "C" bool NetworkingPeer_ObjectIsSameWithInprecision_m1758 (NetworkingPeer_t462 * __this, Object_t * ___one, Object_t * ___two, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::GetMethod(UnityEngine.MonoBehaviour,System.String,System.Reflection.MethodInfo&)
extern "C" bool NetworkingPeer_GetMethod_m1759 (Object_t * __this /* static, unused */, MonoBehaviour_t47 * ___monob, String_t* ___methodType, MethodInfo_t ** ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LoadLevelIfSynced()
extern "C" void NetworkingPeer_LoadLevelIfSynced_m1760 (NetworkingPeer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetLevelInPropsIfSynced(System.Object)
extern "C" void NetworkingPeer_SetLevelInPropsIfSynced_m1761 (NetworkingPeer_t462 * __this, Object_t * ___levelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetApp(System.String,System.String)
extern "C" void NetworkingPeer_SetApp_m1762 (NetworkingPeer_t462 * __this, String_t* ___appId, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::WebRpc(System.String,System.Object)
extern "C" bool NetworkingPeer_WebRpc_m1763 (NetworkingPeer_t462 * __this, String_t* ___uriPath, Object_t * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
