#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PickupItemSyncer
struct PickupItemSyncer_t518;
// PhotonPlayer
struct PhotonPlayer_t432;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;
// System.Single[]
struct SingleU5BU5D_t168;

// System.Void PickupItemSyncer::.ctor()
extern "C" void PickupItemSyncer__ctor_m2228 (PickupItemSyncer_t518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::OnPhotonPlayerConnected(PhotonPlayer)
extern "C" void PickupItemSyncer_OnPhotonPlayerConnected_m2229 (PickupItemSyncer_t518 * __this, PhotonPlayer_t432 * ___newPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::OnJoinedRoom()
extern "C" void PickupItemSyncer_OnJoinedRoom_m2230 (PickupItemSyncer_t518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::AskForPickupItemSpawnTimes()
extern "C" void PickupItemSyncer_AskForPickupItemSpawnTimes_m2231 (PickupItemSyncer_t518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::RequestForPickupTimes(PhotonMessageInfo)
extern "C" void PickupItemSyncer_RequestForPickupTimes_m2232 (PickupItemSyncer_t518 * __this, PhotonMessageInfo_t435 * ___msgInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::SendPickedUpItems(PhotonPlayer)
extern "C" void PickupItemSyncer_SendPickedUpItems_m2233 (PickupItemSyncer_t518 * __this, PhotonPlayer_t432 * ___targtePlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::PickupItemInit(System.Double,System.Single[])
extern "C" void PickupItemSyncer_PickupItemInit_m2234 (PickupItemSyncer_t518 * __this, double ___timeBase, SingleU5BU5D_t168* ___inactivePickupsAndTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
