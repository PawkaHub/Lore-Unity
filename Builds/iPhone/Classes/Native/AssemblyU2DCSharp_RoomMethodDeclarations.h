#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Room
struct Room_t457;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t20;
// RoomOptions
struct RoomOptions_t458;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t464;

// System.Void Room::.ctor(System.String,RoomOptions)
extern "C" void Room__ctor_m2082 (Room_t457 * __this, String_t* ___roomName, RoomOptions_t458 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_playerCount()
extern "C" int32_t Room_get_playerCount_m2083 (Room_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::get_name()
extern "C" String_t* Room_get_name_m2084 (Room_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_name(System.String)
extern "C" void Room_set_name_m2085 (Room_t457 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_maxPlayers()
extern "C" int32_t Room_get_maxPlayers_m2086 (Room_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_maxPlayers(System.Int32)
extern "C" void Room_set_maxPlayers_m2087 (Room_t457 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_open()
extern "C" bool Room_get_open_m2088 (Room_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_open(System.Boolean)
extern "C" void Room_set_open_m2089 (Room_t457 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_visible()
extern "C" bool Room_get_visible_m2090 (Room_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_visible(System.Boolean)
extern "C" void Room_set_visible_m2091 (Room_t457 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Room::get_propertiesListedInLobby()
extern "C" StringU5BU5D_t20* Room_get_propertiesListedInLobby_m2092 (Room_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_propertiesListedInLobby(System.String[])
extern "C" void Room_set_propertiesListedInLobby_m2093 (Room_t457 * __this, StringU5BU5D_t20* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_autoCleanUp()
extern "C" bool Room_get_autoCleanUp_m2094 (Room_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_masterClientId()
extern "C" int32_t Room_get_masterClientId_m2095 (Room_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_masterClientId(System.Int32)
extern "C" void Room_set_masterClientId_m2096 (Room_t457 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable)
extern "C" void Room_SetCustomProperties_m2097 (Room_t457 * __this, Hashtable_t464 * ___propertiesToSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable)
extern "C" void Room_SetCustomProperties_m2098 (Room_t457 * __this, Hashtable_t464 * ___propertiesToSet, Hashtable_t464 * ___expectedValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetPropertiesListedInLobby(System.String[])
extern "C" void Room_SetPropertiesListedInLobby_m2099 (Room_t457 * __this, StringU5BU5D_t20* ___propsListedInLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::ToString()
extern "C" String_t* Room_ToString_m2100 (Room_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::ToStringFull()
extern "C" String_t* Room_ToStringFull_m2101 (Room_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
