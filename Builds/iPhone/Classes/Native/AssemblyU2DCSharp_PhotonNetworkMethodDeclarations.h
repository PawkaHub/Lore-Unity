#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonNetwork
struct PhotonNetwork_t483;
// System.String
struct String_t;
// AuthenticationValues
struct AuthenticationValues_t445;
// Room
struct Room_t457;
// PhotonPlayer
struct PhotonPlayer_t460;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t447;
// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t482;
// TypedLobby
struct TypedLobby_t459;
// System.Type
struct Type_t;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t481;
// System.String[]
struct StringU5BU5D_t20;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t464;
// RoomOptions
struct RoomOptions_t458;
// RoomInfo[]
struct RoomInfoU5BU5D_t451;
// System.Object
struct Object_t;
// RaiseEventOptions
struct RaiseEventOptions_t465;
// System.Int32[]
struct Int32U5BU5D_t119;
// UnityEngine.GameObject
struct GameObject_t49;
// System.Object[]
struct ObjectU5BU5D_t21;
// PhotonView
struct PhotonView_t353;
// ConnectionState
#include "AssemblyU2DCSharp_ConnectionState.h"
// PeerState
#include "AssemblyU2DCSharp_PeerState.h"
// ServerConnection
#include "AssemblyU2DCSharp_ServerConnection.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// MatchmakingMode
#include "AssemblyU2DCSharp_MatchmakingMode.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PhotonTargets
#include "AssemblyU2DCSharp_PhotonTargets.h"

// System.Void PhotonNetwork::.cctor()
extern "C" void PhotonNetwork__cctor_m1877 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_gameVersion()
extern "C" String_t* PhotonNetwork_get_gameVersion_m1878 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_gameVersion(System.String)
extern "C" void PhotonNetwork_set_gameVersion_m1879 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_ServerAddress()
extern "C" String_t* PhotonNetwork_get_ServerAddress_m1880 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connected()
extern "C" bool PhotonNetwork_get_connected_m1881 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connecting()
extern "C" bool PhotonNetwork_get_connecting_m1882 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connectedAndReady()
extern "C" bool PhotonNetwork_get_connectedAndReady_m1883 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ConnectionState PhotonNetwork::get_connectionState()
extern "C" int32_t PhotonNetwork_get_connectionState_m1884 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PeerState PhotonNetwork::get_connectionStateDetailed()
extern "C" int32_t PhotonNetwork_get_connectionStateDetailed_m1885 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AuthenticationValues PhotonNetwork::get_AuthValues()
extern "C" AuthenticationValues_t445 * PhotonNetwork_get_AuthValues_m1886 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_AuthValues(AuthenticationValues)
extern "C" void PhotonNetwork_set_AuthValues_m1887 (Object_t * __this /* static, unused */, AuthenticationValues_t445 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room PhotonNetwork::get_room()
extern "C" Room_t457 * PhotonNetwork_get_room_m1888 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonNetwork::get_player()
extern "C" PhotonPlayer_t460 * PhotonNetwork_get_player_m1889 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonNetwork::get_masterClient()
extern "C" PhotonPlayer_t460 * PhotonNetwork_get_masterClient_m1890 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::SetMasterClient(PhotonPlayer)
extern "C" bool PhotonNetwork_SetMasterClient_m1891 (Object_t * __this /* static, unused */, PhotonPlayer_t460 * ___masterClientPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_playerName()
extern "C" String_t* PhotonNetwork_get_playerName_m1892 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_playerName(System.String)
extern "C" void PhotonNetwork_set_playerName_m1893 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer[] PhotonNetwork::get_playerList()
extern "C" PhotonPlayerU5BU5D_t447* PhotonNetwork_get_playerList_m1894 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer[] PhotonNetwork::get_otherPlayers()
extern "C" PhotonPlayerU5BU5D_t447* PhotonNetwork_get_otherPlayers_m1895 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FriendInfo> PhotonNetwork::get_Friends()
extern "C" List_1_t482 * PhotonNetwork_get_Friends_m1896 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_Friends(System.Collections.Generic.List`1<FriendInfo>)
extern "C" void PhotonNetwork_set_Friends_m1897 (Object_t * __this /* static, unused */, List_1_t482 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_FriendsListAge()
extern "C" int32_t PhotonNetwork_get_FriendsListAge_m1898 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_offlineMode()
extern "C" bool PhotonNetwork_get_offlineMode_m1899 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_offlineMode(System.Boolean)
extern "C" void PhotonNetwork_set_offlineMode_m1900 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::CacheSendMonoMessageTargets(System.Type)
extern "C" void PhotonNetwork_CacheSendMonoMessageTargets_m1901 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> PhotonNetwork::FindGameObjectsWithComponent(System.Type)
extern "C" HashSet_1_t481 * PhotonNetwork_FindGameObjectsWithComponent_m1902 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_maxConnections()
extern "C" int32_t PhotonNetwork_get_maxConnections_m1903 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_maxConnections(System.Int32)
extern "C" void PhotonNetwork_set_maxConnections_m1904 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_automaticallySyncScene()
extern "C" bool PhotonNetwork_get_automaticallySyncScene_m1905 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_automaticallySyncScene(System.Boolean)
extern "C" void PhotonNetwork_set_automaticallySyncScene_m1906 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_autoCleanUpPlayerObjects()
extern "C" bool PhotonNetwork_get_autoCleanUpPlayerObjects_m1907 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_autoCleanUpPlayerObjects(System.Boolean)
extern "C" void PhotonNetwork_set_autoCleanUpPlayerObjects_m1908 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_autoJoinLobby()
extern "C" bool PhotonNetwork_get_autoJoinLobby_m1909 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_autoJoinLobby(System.Boolean)
extern "C" void PhotonNetwork_set_autoJoinLobby_m1910 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_insideLobby()
extern "C" bool PhotonNetwork_get_insideLobby_m1911 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby PhotonNetwork::get_lobby()
extern "C" TypedLobby_t459 * PhotonNetwork_get_lobby_m1912 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_lobby(TypedLobby)
extern "C" void PhotonNetwork_set_lobby_m1913 (Object_t * __this /* static, unused */, TypedLobby_t459 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_sendRate()
extern "C" int32_t PhotonNetwork_get_sendRate_m1914 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_sendRate(System.Int32)
extern "C" void PhotonNetwork_set_sendRate_m1915 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_sendRateOnSerialize()
extern "C" int32_t PhotonNetwork_get_sendRateOnSerialize_m1916 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_sendRateOnSerialize(System.Int32)
extern "C" void PhotonNetwork_set_sendRateOnSerialize_m1917 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isMessageQueueRunning()
extern "C" bool PhotonNetwork_get_isMessageQueueRunning_m1918 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_isMessageQueueRunning(System.Boolean)
extern "C" void PhotonNetwork_set_isMessageQueueRunning_m1919 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_unreliableCommandsLimit()
extern "C" int32_t PhotonNetwork_get_unreliableCommandsLimit_m1920 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_unreliableCommandsLimit(System.Int32)
extern "C" void PhotonNetwork_set_unreliableCommandsLimit_m1921 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double PhotonNetwork::get_time()
extern "C" double PhotonNetwork_get_time_m1922 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isMasterClient()
extern "C" bool PhotonNetwork_get_isMasterClient_m1923 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_inRoom()
extern "C" bool PhotonNetwork_get_inRoom_m1924 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isNonMasterClientInRoom()
extern "C" bool PhotonNetwork_get_isNonMasterClientInRoom_m1925 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayersOnMaster()
extern "C" int32_t PhotonNetwork_get_countOfPlayersOnMaster_m1926 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayersInRooms()
extern "C" int32_t PhotonNetwork_get_countOfPlayersInRooms_m1927 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayers()
extern "C" int32_t PhotonNetwork_get_countOfPlayers_m1928 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfRooms()
extern "C" int32_t PhotonNetwork_get_countOfRooms_m1929 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_NetworkStatisticsEnabled()
extern "C" bool PhotonNetwork_get_NetworkStatisticsEnabled_m1930 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_NetworkStatisticsEnabled(System.Boolean)
extern "C" void PhotonNetwork_set_NetworkStatisticsEnabled_m1931 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_ResentReliableCommands()
extern "C" int32_t PhotonNetwork_get_ResentReliableCommands_m1932 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_CrcCheckEnabled()
extern "C" bool PhotonNetwork_get_CrcCheckEnabled_m1933 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_CrcCheckEnabled(System.Boolean)
extern "C" void PhotonNetwork_set_CrcCheckEnabled_m1934 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_PacketLossByCrcCheck()
extern "C" int32_t PhotonNetwork_get_PacketLossByCrcCheck_m1935 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_MaxResendsBeforeDisconnect()
extern "C" int32_t PhotonNetwork_get_MaxResendsBeforeDisconnect_m1936 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_MaxResendsBeforeDisconnect(System.Int32)
extern "C" void PhotonNetwork_set_MaxResendsBeforeDisconnect_m1937 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ServerConnection PhotonNetwork::get_Server()
extern "C" int32_t PhotonNetwork_get_Server_m1938 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::NetworkStatisticsReset()
extern "C" void PhotonNetwork_NetworkStatisticsReset_m1939 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::NetworkStatisticsToString()
extern "C" String_t* PhotonNetwork_NetworkStatisticsToString_m1940 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SwitchToProtocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void PhotonNetwork_SwitchToProtocol_m1941 (Object_t * __this /* static, unused */, uint8_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::InternalCleanPhotonMonoFromSceneIfStuck()
extern "C" void PhotonNetwork_InternalCleanPhotonMonoFromSceneIfStuck_m1942 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectUsingSettings(System.String)
extern "C" bool PhotonNetwork_ConnectUsingSettings_m1943 (Object_t * __this /* static, unused */, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToMaster(System.String,System.Int32,System.String,System.String)
extern "C" bool PhotonNetwork_ConnectToMaster_m1944 (Object_t * __this /* static, unused */, String_t* ___masterServerAddress, int32_t ___port, String_t* ___appID, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToBestCloudServer(System.String)
extern "C" bool PhotonNetwork_ConnectToBestCloudServer_m1945 (Object_t * __this /* static, unused */, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToRegion(CloudRegionCode,System.String)
extern "C" bool PhotonNetwork_ConnectToRegion_m1946 (Object_t * __this /* static, unused */, int32_t ___region, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::OverrideBestCloudServer(CloudRegionCode)
extern "C" void PhotonNetwork_OverrideBestCloudServer_m1947 (Object_t * __this /* static, unused */, int32_t ___region, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RefreshCloudServerRating()
extern "C" void PhotonNetwork_RefreshCloudServerRating_m1948 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Disconnect()
extern "C" void PhotonNetwork_Disconnect_m1949 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::InitializeSecurity()
extern "C" void PhotonNetwork_InitializeSecurity_m1950 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::FindFriends(System.String[])
extern "C" bool PhotonNetwork_FindFriends_m1951 (Object_t * __this /* static, unused */, StringU5BU5D_t20* ___friendsToFind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String,System.Boolean,System.Boolean,System.Int32)
extern "C" bool PhotonNetwork_CreateRoom_m1952 (Object_t * __this /* static, unused */, String_t* ___roomName, bool ___isVisible, bool ___isOpen, int32_t ___maxPlayers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String,System.Boolean,System.Boolean,System.Int32,ExitGames.Client.Photon.Hashtable,System.String[])
extern "C" bool PhotonNetwork_CreateRoom_m1953 (Object_t * __this /* static, unused */, String_t* ___roomName, bool ___isVisible, bool ___isOpen, int32_t ___maxPlayers, Hashtable_t464 * ___customRoomProperties, StringU5BU5D_t20* ___propsToListInLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String)
extern "C" bool PhotonNetwork_CreateRoom_m1954 (Object_t * __this /* static, unused */, String_t* ___roomName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String,RoomOptions,TypedLobby)
extern "C" bool PhotonNetwork_CreateRoom_m1955 (Object_t * __this /* static, unused */, String_t* ___roomName, RoomOptions_t458 * ___roomOptions, TypedLobby_t459 * ___typedLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRoom(System.String,System.Boolean)
extern "C" bool PhotonNetwork_JoinRoom_m1956 (Object_t * __this /* static, unused */, String_t* ___roomName, bool ___createIfNotExists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRoom(System.String)
extern "C" bool PhotonNetwork_JoinRoom_m1957 (Object_t * __this /* static, unused */, String_t* ___roomName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinOrCreateRoom(System.String,RoomOptions,TypedLobby)
extern "C" bool PhotonNetwork_JoinOrCreateRoom_m1958 (Object_t * __this /* static, unused */, String_t* ___roomName, RoomOptions_t458 * ___roomOptions, TypedLobby_t459 * ___typedLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom()
extern "C" bool PhotonNetwork_JoinRandomRoom_m1959 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte)
extern "C" bool PhotonNetwork_JoinRandomRoom_m1960 (Object_t * __this /* static, unused */, Hashtable_t464 * ___expectedCustomRoomProperties, uint8_t ___expectedMaxPlayers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte,MatchmakingMode,TypedLobby,System.String)
extern "C" bool PhotonNetwork_JoinRandomRoom_m1961 (Object_t * __this /* static, unused */, Hashtable_t464 * ___expectedCustomRoomProperties, uint8_t ___expectedMaxPlayers, uint8_t ___matchingType, TypedLobby_t459 * ___typedLobby, String_t* ___sqlLobbyFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinLobby()
extern "C" bool PhotonNetwork_JoinLobby_m1962 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinLobby(TypedLobby)
extern "C" bool PhotonNetwork_JoinLobby_m1963 (Object_t * __this /* static, unused */, TypedLobby_t459 * ___typedLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::LeaveLobby()
extern "C" bool PhotonNetwork_LeaveLobby_m1964 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::LeaveRoom()
extern "C" bool PhotonNetwork_LeaveRoom_m1965 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RoomInfo[] PhotonNetwork::GetRoomList()
extern "C" RoomInfoU5BU5D_t451* PhotonNetwork_GetRoomList_m1966 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetPlayerCustomProperties(ExitGames.Client.Photon.Hashtable)
extern "C" void PhotonNetwork_SetPlayerCustomProperties_m1967 (Object_t * __this /* static, unused */, Hashtable_t464 * ___customProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemovePlayerCustomProperties(System.String[])
extern "C" void PhotonNetwork_RemovePlayerCustomProperties_m1968 (Object_t * __this /* static, unused */, StringU5BU5D_t20* ___customPropertiesToDelete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::RaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C" bool PhotonNetwork_RaiseEvent_m1969 (Object_t * __this /* static, unused */, uint8_t ___eventCode, Object_t * ___eventContent, bool ___sendReliable, RaiseEventOptions_t465 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateViewID()
extern "C" int32_t PhotonNetwork_AllocateViewID_m1970 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateSceneViewID()
extern "C" int32_t PhotonNetwork_AllocateSceneViewID_m1971 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::UnAllocateViewID(System.Int32)
extern "C" void PhotonNetwork_UnAllocateViewID_m1972 (Object_t * __this /* static, unused */, int32_t ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateViewID(System.Int32)
extern "C" int32_t PhotonNetwork_AllocateViewID_m1973 (Object_t * __this /* static, unused */, int32_t ___ownerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] PhotonNetwork::AllocateSceneViewIDs(System.Int32)
extern "C" Int32U5BU5D_t119* PhotonNetwork_AllocateSceneViewIDs_m1974 (Object_t * __this /* static, unused */, int32_t ___countOfNewViews, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C" GameObject_t49 * PhotonNetwork_Instantiate_m1975 (Object_t * __this /* static, unused */, String_t* ___prefabName, Vector3_t53  ___position, Quaternion_t69  ___rotation, int32_t ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Object[])
extern "C" GameObject_t49 * PhotonNetwork_Instantiate_m1976 (Object_t * __this /* static, unused */, String_t* ___prefabName, Vector3_t53  ___position, Quaternion_t69  ___rotation, int32_t ___group, ObjectU5BU5D_t21* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::InstantiateSceneObject(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Object[])
extern "C" GameObject_t49 * PhotonNetwork_InstantiateSceneObject_m1977 (Object_t * __this /* static, unused */, String_t* ___prefabName, Vector3_t53  ___position, Quaternion_t69  ___rotation, int32_t ___group, ObjectU5BU5D_t21* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::GetPing()
extern "C" int32_t PhotonNetwork_GetPing_m1978 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::FetchServerTimestamp()
extern "C" void PhotonNetwork_FetchServerTimestamp_m1979 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SendOutgoingCommands()
extern "C" void PhotonNetwork_SendOutgoingCommands_m1980 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CloseConnection(PhotonPlayer)
extern "C" bool PhotonNetwork_CloseConnection_m1981 (Object_t * __this /* static, unused */, PhotonPlayer_t460 * ___kickPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Destroy(PhotonView)
extern "C" void PhotonNetwork_Destroy_m1982 (Object_t * __this /* static, unused */, PhotonView_t353 * ___targetView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Destroy(UnityEngine.GameObject)
extern "C" void PhotonNetwork_Destroy_m1983 (Object_t * __this /* static, unused */, GameObject_t49 * ___targetGo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyPlayerObjects(PhotonPlayer)
extern "C" void PhotonNetwork_DestroyPlayerObjects_m1984 (Object_t * __this /* static, unused */, PhotonPlayer_t460 * ___targetPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyPlayerObjects(System.Int32)
extern "C" void PhotonNetwork_DestroyPlayerObjects_m1985 (Object_t * __this /* static, unused */, int32_t ___targetPlayerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyAll()
extern "C" void PhotonNetwork_DestroyAll_m1986 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCs(PhotonPlayer)
extern "C" void PhotonNetwork_RemoveRPCs_m1987 (Object_t * __this /* static, unused */, PhotonPlayer_t460 * ___targetPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCs(PhotonView)
extern "C" void PhotonNetwork_RemoveRPCs_m1988 (Object_t * __this /* static, unused */, PhotonView_t353 * ___targetPhotonView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCsInGroup(System.Int32)
extern "C" void PhotonNetwork_RemoveRPCsInGroup_m1989 (Object_t * __this /* static, unused */, int32_t ___targetGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RPC(PhotonView,System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C" void PhotonNetwork_RPC_m1990 (Object_t * __this /* static, unused */, PhotonView_t353 * ___view, String_t* ___methodName, int32_t ___target, bool ___encrypt, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RPC(PhotonView,System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C" void PhotonNetwork_RPC_m1991 (Object_t * __this /* static, unused */, PhotonView_t353 * ___view, String_t* ___methodName, PhotonPlayer_t460 * ___targetPlayer, bool ___encrpyt, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetReceivingEnabled(System.Int32,System.Boolean)
extern "C" void PhotonNetwork_SetReceivingEnabled_m1992 (Object_t * __this /* static, unused */, int32_t ___group, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetReceivingEnabled(System.Int32[],System.Int32[])
extern "C" void PhotonNetwork_SetReceivingEnabled_m1993 (Object_t * __this /* static, unused */, Int32U5BU5D_t119* ___enableGroups, Int32U5BU5D_t119* ___disableGroups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetSendingEnabled(System.Int32,System.Boolean)
extern "C" void PhotonNetwork_SetSendingEnabled_m1994 (Object_t * __this /* static, unused */, int32_t ___group, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetSendingEnabled(System.Int32[],System.Int32[])
extern "C" void PhotonNetwork_SetSendingEnabled_m1995 (Object_t * __this /* static, unused */, Int32U5BU5D_t119* ___enableGroups, Int32U5BU5D_t119* ___disableGroups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetLevelPrefix(System.Int16)
extern "C" void PhotonNetwork_SetLevelPrefix_m1996 (Object_t * __this /* static, unused */, int16_t ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::VerifyCanUseNetwork()
extern "C" bool PhotonNetwork_VerifyCanUseNetwork_m1997 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::LoadLevel(System.Int32)
extern "C" void PhotonNetwork_LoadLevel_m1998 (Object_t * __this /* static, unused */, int32_t ___levelNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::LoadLevel(System.String)
extern "C" void PhotonNetwork_LoadLevel_m1999 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::WebRpc(System.String,System.Object)
extern "C" bool PhotonNetwork_WebRpc_m2000 (Object_t * __this /* static, unused */, String_t* ___name, Object_t * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
