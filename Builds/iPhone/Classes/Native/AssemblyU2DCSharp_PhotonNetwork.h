#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PhotonHandler
struct PhotonHandler_t446;
// NetworkingPeer
struct NetworkingPeer_t434;
// ServerSettings
struct ServerSettings_t452;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t421;
// Room
struct Room_t429;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t453;
// System.Type
struct Type_t;
// PhotonNetwork/EventCallback
struct EventCallback_t450;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t82;
// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t454;
// System.Object
#include "mscorlib_System_Object.h"
// PhotonLogLevel
#include "AssemblyU2DCSharp_PhotonLogLevel.h"
// PhotonNetwork
struct  PhotonNetwork_t455  : public Object_t
{
};
struct PhotonNetwork_t455_StaticFields{
	// PhotonHandler PhotonNetwork::photonMono
	PhotonHandler_t446 * ___photonMono_3;
	// NetworkingPeer PhotonNetwork::networkingPeer
	NetworkingPeer_t434 * ___networkingPeer_4;
	// System.Int32 PhotonNetwork::MAX_VIEW_IDS
	int32_t ___MAX_VIEW_IDS_5;
	// ServerSettings PhotonNetwork::PhotonServerSettings
	ServerSettings_t452 * ___PhotonServerSettings_6;
	// System.Single PhotonNetwork::precisionForVectorSynchronization
	float ___precisionForVectorSynchronization_7;
	// System.Single PhotonNetwork::precisionForQuaternionSynchronization
	float ___precisionForQuaternionSynchronization_8;
	// System.Single PhotonNetwork::precisionForFloatSynchronization
	float ___precisionForFloatSynchronization_9;
	// System.Boolean PhotonNetwork::InstantiateInRoomOnly
	bool ___InstantiateInRoomOnly_10;
	// PhotonLogLevel PhotonNetwork::logLevel
	int32_t ___logLevel_11;
	// System.Boolean PhotonNetwork::UseRpcMonoBehaviourCache
	bool ___UseRpcMonoBehaviourCache_12;
	// System.Boolean PhotonNetwork::UsePrefabCache
	bool ___UsePrefabCache_13;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> PhotonNetwork::PrefabCache
	Dictionary_2_t421 * ___PrefabCache_14;
	// System.Boolean PhotonNetwork::isOfflineMode
	bool ___isOfflineMode_15;
	// Room PhotonNetwork::offlineModeRoom
	Room_t429 * ___offlineModeRoom_16;
	// System.Boolean PhotonNetwork::UseNameServer
	bool ___UseNameServer_17;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> PhotonNetwork::SendMonoMessageTargets
	HashSet_1_t453 * ___SendMonoMessageTargets_18;
	// System.Type PhotonNetwork::SendMonoMessageTargetType
	Type_t * ___SendMonoMessageTargetType_19;
	// System.Boolean PhotonNetwork::_mAutomaticallySyncScene
	bool ____mAutomaticallySyncScene_20;
	// System.Boolean PhotonNetwork::m_autoCleanUpPlayerObjects
	bool ___m_autoCleanUpPlayerObjects_21;
	// System.Boolean PhotonNetwork::autoJoinLobbyField
	bool ___autoJoinLobbyField_22;
	// System.Int32 PhotonNetwork::sendInterval
	int32_t ___sendInterval_23;
	// System.Int32 PhotonNetwork::sendIntervalOnSerialize
	int32_t ___sendIntervalOnSerialize_24;
	// System.Boolean PhotonNetwork::m_isMessageQueueRunning
	bool ___m_isMessageQueueRunning_25;
	// PhotonNetwork/EventCallback PhotonNetwork::OnEventCall
	EventCallback_t450 * ___OnEventCall_26;
	// System.Int32 PhotonNetwork::lastUsedViewSubId
	int32_t ___lastUsedViewSubId_27;
	// System.Int32 PhotonNetwork::lastUsedViewSubIdStatic
	int32_t ___lastUsedViewSubIdStatic_28;
	// System.Collections.Generic.List`1<System.Int32> PhotonNetwork::manuallyAllocatedViewIds
	List_1_t82 * ___manuallyAllocatedViewIds_29;
	// System.Collections.Generic.List`1<FriendInfo> PhotonNetwork::<Friends>k__BackingField
	List_1_t454 * ___U3CFriendsU3Ek__BackingField_30;
};
