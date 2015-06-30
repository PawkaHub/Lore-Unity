#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Room
struct Room_t429;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t20;
// RoomOptions
struct RoomOptions_t430;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t436;

// System.Void Room::.ctor(System.String,RoomOptions)
extern "C" void Room__ctor_m2036 (Room_t429 * __this, String_t* ___roomName, RoomOptions_t430 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_playerCount()
extern "C" int32_t Room_get_playerCount_m2037 (Room_t429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::get_name()
extern "C" String_t* Room_get_name_m2038 (Room_t429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_name(System.String)
extern "C" void Room_set_name_m2039 (Room_t429 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_maxPlayers()
extern "C" int32_t Room_get_maxPlayers_m2040 (Room_t429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_maxPlayers(System.Int32)
extern "C" void Room_set_maxPlayers_m2041 (Room_t429 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_open()
extern "C" bool Room_get_open_m2042 (Room_t429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_open(System.Boolean)
extern "C" void Room_set_open_m2043 (Room_t429 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_visible()
extern "C" bool Room_get_visible_m2044 (Room_t429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_visible(System.Boolean)
extern "C" void Room_set_visible_m2045 (Room_t429 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Room::get_propertiesListedInLobby()
extern "C" StringU5BU5D_t20* Room_get_propertiesListedInLobby_m2046 (Room_t429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_propertiesListedInLobby(System.String[])
extern "C" void Room_set_propertiesListedInLobby_m2047 (Room_t429 * __this, StringU5BU5D_t20* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_autoCleanUp()
extern "C" bool Room_get_autoCleanUp_m2048 (Room_t429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_masterClientId()
extern "C" int32_t Room_get_masterClientId_m2049 (Room_t429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_masterClientId(System.Int32)
extern "C" void Room_set_masterClientId_m2050 (Room_t429 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable)
extern "C" void Room_SetCustomProperties_m2051 (Room_t429 * __this, Hashtable_t436 * ___propertiesToSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable)
extern "C" void Room_SetCustomProperties_m2052 (Room_t429 * __this, Hashtable_t436 * ___propertiesToSet, Hashtable_t436 * ___expectedValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetPropertiesListedInLobby(System.String[])
extern "C" void Room_SetPropertiesListedInLobby_m2053 (Room_t429 * __this, StringU5BU5D_t20* ___propsListedInLobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::ToString()
extern "C" String_t* Room_ToString_m2054 (Room_t429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::ToStringFull()
extern "C" String_t* Room_ToStringFull_m2055 (Room_t429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
