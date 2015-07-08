#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InRoomRoundTimer
struct InRoomRoundTimer_t530;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t464;
// PhotonPlayer
struct PhotonPlayer_t460;

// System.Void InRoomRoundTimer::.ctor()
extern "C" void InRoomRoundTimer__ctor_m2212 (InRoomRoundTimer_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::StartRoundNow()
extern "C" void InRoomRoundTimer_StartRoundNow_m2213 (InRoomRoundTimer_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnJoinedRoom()
extern "C" void InRoomRoundTimer_OnJoinedRoom_m2214 (InRoomRoundTimer_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C" void InRoomRoundTimer_OnPhotonCustomRoomPropertiesChanged_m2215 (InRoomRoundTimer_t530 * __this, Hashtable_t464 * ___propertiesThatChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnMasterClientSwitched(PhotonPlayer)
extern "C" void InRoomRoundTimer_OnMasterClientSwitched_m2216 (InRoomRoundTimer_t530 * __this, PhotonPlayer_t460 * ___newMasterClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::Update()
extern "C" void InRoomRoundTimer_Update_m2217 (InRoomRoundTimer_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnGUI()
extern "C" void InRoomRoundTimer_OnGUI_m2218 (InRoomRoundTimer_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
