#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonMessageInfo
struct PhotonMessageInfo_t463;
// PhotonPlayer
struct PhotonPlayer_t460;
// PhotonView
struct PhotonView_t353;
// System.String
struct String_t;

// System.Void PhotonMessageInfo::.ctor()
extern "C" void PhotonMessageInfo__ctor_m1793 (PhotonMessageInfo_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonMessageInfo::.ctor(PhotonPlayer,System.Int32,PhotonView)
extern "C" void PhotonMessageInfo__ctor_m1794 (PhotonMessageInfo_t463 * __this, PhotonPlayer_t460 * ___player, int32_t ___timestamp, PhotonView_t353 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double PhotonMessageInfo::get_timestamp()
extern "C" double PhotonMessageInfo_get_timestamp_m1795 (PhotonMessageInfo_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonMessageInfo::ToString()
extern "C" String_t* PhotonMessageInfo_ToString_m1796 (PhotonMessageInfo_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
