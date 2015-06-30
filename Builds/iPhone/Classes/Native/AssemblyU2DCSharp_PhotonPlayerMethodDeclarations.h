#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonPlayer
struct PhotonPlayer_t432;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t436;
// System.Object
struct Object_t;

// System.Void PhotonPlayer::.ctor(System.Boolean,System.Int32,System.String)
extern "C" void PhotonPlayer__ctor_m1955 (PhotonPlayer_t432 * __this, bool ___isLocal, int32_t ___actorID, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::.ctor(System.Boolean,System.Int32,ExitGames.Client.Photon.Hashtable)
extern "C" void PhotonPlayer__ctor_m1956 (PhotonPlayer_t432 * __this, bool ___isLocal, int32_t ___actorID, Hashtable_t436 * ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::get_ID()
extern "C" int32_t PhotonPlayer_get_ID_m1957 (PhotonPlayer_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::get_name()
extern "C" String_t* PhotonPlayer_get_name_m1958 (PhotonPlayer_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_name(System.String)
extern "C" void PhotonPlayer_set_name_m1959 (PhotonPlayer_t432 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::get_isMasterClient()
extern "C" bool PhotonPlayer_get_isMasterClient_m1960 (PhotonPlayer_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_customProperties()
extern "C" Hashtable_t436 * PhotonPlayer_get_customProperties_m1961 (PhotonPlayer_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_customProperties(ExitGames.Client.Photon.Hashtable)
extern "C" void PhotonPlayer_set_customProperties_m1962 (PhotonPlayer_t432 * __this, Hashtable_t436 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_allProperties()
extern "C" Hashtable_t436 * PhotonPlayer_get_allProperties_m1963 (PhotonPlayer_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::Equals(System.Object)
extern "C" bool PhotonPlayer_Equals_m1964 (PhotonPlayer_t432 * __this, Object_t * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::GetHashCode()
extern "C" int32_t PhotonPlayer_GetHashCode_m1965 (PhotonPlayer_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::InternalChangeLocalID(System.Int32)
extern "C" void PhotonPlayer_InternalChangeLocalID_m1966 (PhotonPlayer_t432 * __this, int32_t ___newID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C" void PhotonPlayer_InternalCacheProperties_m1967 (PhotonPlayer_t432 * __this, Hashtable_t436 * ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::SetCustomProperties(ExitGames.Client.Photon.Hashtable)
extern "C" void PhotonPlayer_SetCustomProperties_m1968 (PhotonPlayer_t432 * __this, Hashtable_t436 * ___propertiesToSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable)
extern "C" void PhotonPlayer_SetCustomProperties_m1969 (PhotonPlayer_t432 * __this, Hashtable_t436 * ___propertiesToSet, Hashtable_t436 * ___expectedValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::Find(System.Int32)
extern "C" PhotonPlayer_t432 * PhotonPlayer_Find_m1970 (Object_t * __this /* static, unused */, int32_t ___ID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::Get(System.Int32)
extern "C" PhotonPlayer_t432 * PhotonPlayer_Get_m1971 (PhotonPlayer_t432 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNext()
extern "C" PhotonPlayer_t432 * PhotonPlayer_GetNext_m1972 (PhotonPlayer_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNextFor(PhotonPlayer)
extern "C" PhotonPlayer_t432 * PhotonPlayer_GetNextFor_m1973 (PhotonPlayer_t432 * __this, PhotonPlayer_t432 * ___currentPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNextFor(System.Int32)
extern "C" PhotonPlayer_t432 * PhotonPlayer_GetNextFor_m1974 (PhotonPlayer_t432 * __this, int32_t ___currentPlayerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::ToString()
extern "C" String_t* PhotonPlayer_ToString_m1975 (PhotonPlayer_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::ToStringFull()
extern "C" String_t* PhotonPlayer_ToStringFull_m1976 (PhotonPlayer_t432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
