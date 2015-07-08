#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RoomInfo
struct RoomInfo_t499;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t464;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
extern "C" void RoomInfo__ctor_m2102 (RoomInfo_t499 * __this, String_t* ___roomName, Hashtable_t464 * ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_removedFromList()
extern "C" bool RoomInfo_get_removedFromList_m2103 (RoomInfo_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_removedFromList(System.Boolean)
extern "C" void RoomInfo_set_removedFromList_m2104 (RoomInfo_t499 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_serverSideMasterClient()
extern "C" bool RoomInfo_get_serverSideMasterClient_m2105 (RoomInfo_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_serverSideMasterClient(System.Boolean)
extern "C" void RoomInfo_set_serverSideMasterClient_m2106 (RoomInfo_t499 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable RoomInfo::get_customProperties()
extern "C" Hashtable_t464 * RoomInfo_get_customProperties_m2107 (RoomInfo_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::get_name()
extern "C" String_t* RoomInfo_get_name_m2108 (RoomInfo_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::get_playerCount()
extern "C" int32_t RoomInfo_get_playerCount_m2109 (RoomInfo_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_playerCount(System.Int32)
extern "C" void RoomInfo_set_playerCount_m2110 (RoomInfo_t499 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_isLocalClientInside()
extern "C" bool RoomInfo_get_isLocalClientInside_m2111 (RoomInfo_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_isLocalClientInside(System.Boolean)
extern "C" void RoomInfo_set_isLocalClientInside_m2112 (RoomInfo_t499 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte RoomInfo::get_maxPlayers()
extern "C" uint8_t RoomInfo_get_maxPlayers_m2113 (RoomInfo_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_open()
extern "C" bool RoomInfo_get_open_m2114 (RoomInfo_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_visible()
extern "C" bool RoomInfo_get_visible_m2115 (RoomInfo_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::Equals(System.Object)
extern "C" bool RoomInfo_Equals_m2116 (RoomInfo_t499 * __this, Object_t * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::GetHashCode()
extern "C" int32_t RoomInfo_GetHashCode_m2117 (RoomInfo_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::ToString()
extern "C" String_t* RoomInfo_ToString_m2118 (RoomInfo_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::ToStringFull()
extern "C" String_t* RoomInfo_ToStringFull_m2119 (RoomInfo_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::CacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C" void RoomInfo_CacheProperties_m2120 (RoomInfo_t499 * __this, Hashtable_t464 * ___propertiesToCache, const MethodInfo* method) IL2CPP_METHOD_ATTR;
