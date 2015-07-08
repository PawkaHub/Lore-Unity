#pragma once
#include <stdint.h>
// System.String
struct String_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t24;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>
struct Dictionary_2_t446;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t447;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t448;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t449;
// System.Collections.Generic.Dictionary`2<System.String,RoomInfo>
struct Dictionary_2_t450;
// RoomInfo[]
struct RoomInfoU5BU5D_t451;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t452;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView>
struct Dictionary_2_t453;
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>
struct Dictionary_2_t454;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t455;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t13;
// System.String[]
struct StringU5BU5D_t20;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>
struct Dictionary_2_t456;
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
// ExitGames.Client.Photon.LoadbalancingPeer
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_LoadbalancingPeer.h"
// JoinType
#include "AssemblyU2DCSharp_JoinType.h"
// PeerState
#include "AssemblyU2DCSharp_PeerState.h"
// ServerConnection
#include "AssemblyU2DCSharp_ServerConnection.h"
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// NetworkingPeer
struct  NetworkingPeer_t462  : public LoadbalancingPeer_t433
{
	// System.String NetworkingPeer::mAppVersion
	String_t* ___mAppVersion_9;
	// System.String NetworkingPeer::mAppId
	String_t* ___mAppId_10;
	// ExitGames.Client.Photon.IPhotonPeerListener NetworkingPeer::externalListener
	Object_t * ___externalListener_11;
	// JoinType NetworkingPeer::mLastJoinType
	int32_t ___mLastJoinType_12;
	// System.Boolean NetworkingPeer::mPlayernameHasToBeUpdated
	bool ___mPlayernameHasToBeUpdated_13;
	// System.String NetworkingPeer::playername
	String_t* ___playername_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer> NetworkingPeer::mActors
	Dictionary_2_t446 * ___mActors_15;
	// PhotonPlayer[] NetworkingPeer::mOtherPlayerListCopy
	PhotonPlayerU5BU5D_t447* ___mOtherPlayerListCopy_16;
	// PhotonPlayer[] NetworkingPeer::mPlayerListCopy
	PhotonPlayerU5BU5D_t447* ___mPlayerListCopy_17;
	// System.Boolean NetworkingPeer::hasSwitchedMC
	bool ___hasSwitchedMC_18;
	// System.Boolean NetworkingPeer::requestSecurity
	bool ___requestSecurity_19;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> NetworkingPeer::monoRPCMethodsCache
	Dictionary_2_t448 * ___monoRPCMethodsCache_20;
	// System.Collections.Generic.Dictionary`2<System.String,RoomInfo> NetworkingPeer::mGameList
	Dictionary_2_t450 * ___mGameList_23;
	// RoomInfo[] NetworkingPeer::mGameListCopy
	RoomInfoU5BU5D_t451* ___mGameListCopy_24;
	// System.Boolean NetworkingPeer::insideLobby
	bool ___insideLobby_25;
	// System.Collections.Generic.HashSet`1<System.Int32> NetworkingPeer::allowedReceivingGroups
	HashSet_1_t452 * ___allowedReceivingGroups_26;
	// System.Collections.Generic.HashSet`1<System.Int32> NetworkingPeer::blockSendingGroups
	HashSet_1_t452 * ___blockSendingGroups_27;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView> NetworkingPeer::photonViewList
	Dictionary_2_t453 * ___photonViewList_28;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupReliable
	Dictionary_2_t454 * ___dataPerGroupReliable_29;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupUnreliable
	Dictionary_2_t454 * ___dataPerGroupUnreliable_30;
	// System.Int16 NetworkingPeer::currentLevelPrefix
	int16_t ___currentLevelPrefix_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NetworkingPeer::rpcShortcuts
	Dictionary_2_t455 * ___rpcShortcuts_32;
	// System.Boolean NetworkingPeer::IsInitialConnect
	bool ___IsInitialConnect_33;
	// System.Boolean NetworkingPeer::didAuthenticate
	bool ___didAuthenticate_35;
	// System.String[] NetworkingPeer::friendListRequested
	StringU5BU5D_t20* ___friendListRequested_36;
	// System.Int32 NetworkingPeer::friendListTimestamp
	int32_t ___friendListTimestamp_37;
	// System.Boolean NetworkingPeer::isFetchingFriends
	bool ___isFetchingFriends_38;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]> NetworkingPeer::tempInstantiationData
	Dictionary_2_t456 * ___tempInstantiationData_39;
	// System.Boolean NetworkingPeer::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork_40;
	// AuthenticationValues NetworkingPeer::<CustomAuthenticationValues>k__BackingField
	AuthenticationValues_t445 * ___U3CCustomAuthenticationValuesU3Ek__BackingField_41;
	// System.String NetworkingPeer::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_42;
	// PeerState NetworkingPeer::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_43;
	// Room NetworkingPeer::<mRoomToGetInto>k__BackingField
	Room_t457 * ___U3CmRoomToGetIntoU3Ek__BackingField_44;
	// RoomOptions NetworkingPeer::<mRoomOptionsForCreate>k__BackingField
	RoomOptions_t458 * ___U3CmRoomOptionsForCreateU3Ek__BackingField_45;
	// TypedLobby NetworkingPeer::<mRoomToEnterLobby>k__BackingField
	TypedLobby_t459 * ___U3CmRoomToEnterLobbyU3Ek__BackingField_46;
	// PhotonPlayer NetworkingPeer::<mLocalActor>k__BackingField
	PhotonPlayer_t460 * ___U3CmLocalActorU3Ek__BackingField_47;
	// System.String NetworkingPeer::<mGameserver>k__BackingField
	String_t* ___U3CmGameserverU3Ek__BackingField_48;
	// TypedLobby NetworkingPeer::<lobby>k__BackingField
	TypedLobby_t459 * ___U3ClobbyU3Ek__BackingField_49;
	// System.Int32 NetworkingPeer::<mPlayersOnMasterCount>k__BackingField
	int32_t ___U3CmPlayersOnMasterCountU3Ek__BackingField_50;
	// System.Int32 NetworkingPeer::<mGameCount>k__BackingField
	int32_t ___U3CmGameCountU3Ek__BackingField_51;
	// System.Int32 NetworkingPeer::<mPlayersInRoomsCount>k__BackingField
	int32_t ___U3CmPlayersInRoomsCountU3Ek__BackingField_52;
	// ServerConnection NetworkingPeer::<server>k__BackingField
	int32_t ___U3CserverU3Ek__BackingField_53;
	// System.Boolean NetworkingPeer::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_54;
	// System.Collections.Generic.List`1<Region> NetworkingPeer::<AvailableRegions>k__BackingField
	List_1_t461 * ___U3CAvailableRegionsU3Ek__BackingField_55;
	// CloudRegionCode NetworkingPeer::<CloudRegion>k__BackingField
	int32_t ___U3CCloudRegionU3Ek__BackingField_56;
};
struct NetworkingPeer_t462_StaticFields{
	// System.Boolean NetworkingPeer::UsePrefabCache
	bool ___UsePrefabCache_21;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> NetworkingPeer::PrefabCache
	Dictionary_2_t449 * ___PrefabCache_22;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> NetworkingPeer::ProtocolToNameServerPort
	Dictionary_2_t13 * ___ProtocolToNameServerPort_34;
};
