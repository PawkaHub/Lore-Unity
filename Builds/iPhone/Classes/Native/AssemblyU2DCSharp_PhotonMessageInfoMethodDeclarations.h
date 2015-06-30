#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonMessageInfo
struct PhotonMessageInfo_t435;
// PhotonPlayer
struct PhotonPlayer_t432;
// PhotonView
struct PhotonView_t325;
// System.String
struct String_t;

// System.Void PhotonMessageInfo::.ctor()
extern "C" void PhotonMessageInfo__ctor_m1747 (PhotonMessageInfo_t435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonMessageInfo::.ctor(PhotonPlayer,System.Int32,PhotonView)
extern "C" void PhotonMessageInfo__ctor_m1748 (PhotonMessageInfo_t435 * __this, PhotonPlayer_t432 * ___player, int32_t ___timestamp, PhotonView_t325 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double PhotonMessageInfo::get_timestamp()
extern "C" double PhotonMessageInfo_get_timestamp_m1749 (PhotonMessageInfo_t435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonMessageInfo::ToString()
extern "C" String_t* PhotonMessageInfo_ToString_m1750 (PhotonMessageInfo_t435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
