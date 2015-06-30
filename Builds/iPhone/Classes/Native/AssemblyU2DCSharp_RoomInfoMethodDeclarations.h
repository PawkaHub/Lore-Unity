#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RoomInfo
struct RoomInfo_t472;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t436;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
extern "C" void RoomInfo__ctor_m2056 (RoomInfo_t472 * __this, String_t* ___roomName, Hashtable_t436 * ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_removedFromList()
extern "C" bool RoomInfo_get_removedFromList_m2057 (RoomInfo_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_removedFromList(System.Boolean)
extern "C" void RoomInfo_set_removedFromList_m2058 (RoomInfo_t472 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_serverSideMasterClient()
extern "C" bool RoomInfo_get_serverSideMasterClient_m2059 (RoomInfo_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_serverSideMasterClient(System.Boolean)
extern "C" void RoomInfo_set_serverSideMasterClient_m2060 (RoomInfo_t472 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable RoomInfo::get_customProperties()
extern "C" Hashtable_t436 * RoomInfo_get_customProperties_m2061 (RoomInfo_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::get_name()
extern "C" String_t* RoomInfo_get_name_m2062 (RoomInfo_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::get_playerCount()
extern "C" int32_t RoomInfo_get_playerCount_m2063 (RoomInfo_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_playerCount(System.Int32)
extern "C" void RoomInfo_set_playerCount_m2064 (RoomInfo_t472 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_isLocalClientInside()
extern "C" bool RoomInfo_get_isLocalClientInside_m2065 (RoomInfo_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_isLocalClientInside(System.Boolean)
extern "C" void RoomInfo_set_isLocalClientInside_m2066 (RoomInfo_t472 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte RoomInfo::get_maxPlayers()
extern "C" uint8_t RoomInfo_get_maxPlayers_m2067 (RoomInfo_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_open()
extern "C" bool RoomInfo_get_open_m2068 (RoomInfo_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_visible()
extern "C" bool RoomInfo_get_visible_m2069 (RoomInfo_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::Equals(System.Object)
extern "C" bool RoomInfo_Equals_m2070 (RoomInfo_t472 * __this, Object_t * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::GetHashCode()
extern "C" int32_t RoomInfo_GetHashCode_m2071 (RoomInfo_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::ToString()
extern "C" String_t* RoomInfo_ToString_m2072 (RoomInfo_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::ToStringFull()
extern "C" String_t* RoomInfo_ToStringFull_m2073 (RoomInfo_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::CacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C" void RoomInfo_CacheProperties_m2074 (RoomInfo_t472 * __this, Hashtable_t436 * ___propertiesToCache, const MethodInfo* method) IL2CPP_METHOD_ATTR;
