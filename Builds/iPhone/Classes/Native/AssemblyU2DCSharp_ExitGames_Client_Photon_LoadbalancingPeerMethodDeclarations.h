#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.LoadbalancingPeer
struct LoadbalancingPeer_t433;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t24;
// System.String
struct String_t;
// TypedLobby
struct TypedLobby_t459;
// RoomOptions
struct RoomOptions_t458;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t464;
// System.String[]
struct StringU5BU5D_t20;
// System.Object
struct Object_t;
// AuthenticationValues
struct AuthenticationValues_t445;
// System.Byte[]
struct ByteU5BU5D_t25;
// RaiseEventOptions
struct RaiseEventOptions_t465;
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// MatchmakingMode
#include "AssemblyU2DCSharp_MatchmakingMode.h"

// System.Void ExitGames.Client.Photon.LoadbalancingPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void LoadbalancingPeer__ctor_m1600 (LoadbalancingPeer_t433 * __this, Object_t * ___listener, uint8_t ___protocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::get_IsProtocolSecure()
extern "C" bool LoadbalancingPeer_get_IsProtocolSecure_m1601 (LoadbalancingPeer_t433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpGetRegions(System.String)
extern "C" bool LoadbalancingPeer_OpGetRegions_m1602 (LoadbalancingPeer_t433 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinLobby(TypedLobby)
extern "C" bool LoadbalancingPeer_OpJoinLobby_m1603 (LoadbalancingPeer_t433 * __this, TypedLobby_t459 * ___lobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpLeaveLobby()
extern "C" bool LoadbalancingPeer_OpLeaveLobby_m1604 (LoadbalancingPeer_t433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpCreateRoom(System.String,RoomOptions,TypedLobby,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C" bool LoadbalancingPeer_OpCreateRoom_m1605 (LoadbalancingPeer_t433 * __this, String_t* ___roomName, RoomOptions_t458 * ___roomOptions, TypedLobby_t459 * ___lobby, Hashtable_t464 * ___playerProperties, bool ___onGameServer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinRoom(System.String,RoomOptions,TypedLobby,System.Boolean,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C" bool LoadbalancingPeer_OpJoinRoom_m1606 (LoadbalancingPeer_t433 * __this, String_t* ___roomName, RoomOptions_t458 * ___roomOptions, TypedLobby_t459 * ___lobby, bool ___createIfNotExists, Hashtable_t464 * ___playerProperties, bool ___onGameServer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte,ExitGames.Client.Photon.Hashtable,MatchmakingMode,TypedLobby,System.String)
extern "C" bool LoadbalancingPeer_OpJoinRandomRoom_m1607 (LoadbalancingPeer_t433 * __this, Hashtable_t464 * ___expectedCustomRoomProperties, uint8_t ___expectedMaxPlayers, Hashtable_t464 * ___playerProperties, uint8_t ___matchingType, TypedLobby_t459 * ___typedLobby, String_t* ___sqlLobbyFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpFindFriends(System.String[])
extern "C" bool LoadbalancingPeer_OpFindFriends_m1608 (LoadbalancingPeer_t433 * __this, StringU5BU5D_t20* ___friendsToFind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetCustomPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte)
extern "C" bool LoadbalancingPeer_OpSetCustomPropertiesOfActor_m1609 (LoadbalancingPeer_t433 * __this, int32_t ___actorNr, Hashtable_t464 * ___actorProperties, bool ___broadcast, uint8_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte,ExitGames.Client.Photon.Hashtable)
extern "C" bool LoadbalancingPeer_OpSetPropertiesOfActor_m1610 (LoadbalancingPeer_t433 * __this, int32_t ___actorNr, Hashtable_t464 * ___actorProperties, bool ___broadcast, uint8_t ___channelId, Hashtable_t464 * ___expectedValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertyOfRoom(System.Byte,System.Object)
extern "C" void LoadbalancingPeer_OpSetPropertyOfRoom_m1611 (LoadbalancingPeer_t433 * __this, uint8_t ___propCode, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetCustomPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte)
extern "C" bool LoadbalancingPeer_OpSetCustomPropertiesOfRoom_m1612 (LoadbalancingPeer_t433 * __this, Hashtable_t464 * ___gameProperties, bool ___broadcast, uint8_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte,ExitGames.Client.Photon.Hashtable)
extern "C" bool LoadbalancingPeer_OpSetPropertiesOfRoom_m1613 (LoadbalancingPeer_t433 * __this, Hashtable_t464 * ___gameProperties, bool ___broadcast, uint8_t ___channelId, Hashtable_t464 * ___expectedValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpAuthenticate(System.String,System.String,AuthenticationValues,System.String)
extern "C" bool LoadbalancingPeer_OpAuthenticate_m1614 (LoadbalancingPeer_t433 * __this, String_t* ___appId, String_t* ___appVersion, AuthenticationValues_t445 * ___authValues, String_t* ___regionCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpChangeGroups(System.Byte[],System.Byte[])
extern "C" bool LoadbalancingPeer_OpChangeGroups_m1615 (LoadbalancingPeer_t433 * __this, ByteU5BU5D_t25* ___groupsToRemove, ByteU5BU5D_t25* ___groupsToAdd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C" bool LoadbalancingPeer_OpRaiseEvent_m1616 (LoadbalancingPeer_t433 * __this, uint8_t ___eventCode, Object_t * ___customEventContent, bool ___sendReliable, RaiseEventOptions_t465 * ___raiseEventOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
