#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InRoomRoundTimer
struct InRoomRoundTimer_t503;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t436;
// PhotonPlayer
struct PhotonPlayer_t432;

// System.Void InRoomRoundTimer::.ctor()
extern "C" void InRoomRoundTimer__ctor_m2166 (InRoomRoundTimer_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::StartRoundNow()
extern "C" void InRoomRoundTimer_StartRoundNow_m2167 (InRoomRoundTimer_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnJoinedRoom()
extern "C" void InRoomRoundTimer_OnJoinedRoom_m2168 (InRoomRoundTimer_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C" void InRoomRoundTimer_OnPhotonCustomRoomPropertiesChanged_m2169 (InRoomRoundTimer_t503 * __this, Hashtable_t436 * ___propertiesThatChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnMasterClientSwitched(PhotonPlayer)
extern "C" void InRoomRoundTimer_OnMasterClientSwitched_m2170 (InRoomRoundTimer_t503 * __this, PhotonPlayer_t432 * ___newMasterClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::Update()
extern "C" void InRoomRoundTimer_Update_m2171 (InRoomRoundTimer_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomRoundTimer::OnGUI()
extern "C" void InRoomRoundTimer_OnGUI_m2172 (InRoomRoundTimer_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
