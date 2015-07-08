#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WorkerInGame
struct WorkerInGame_t403;
// PhotonPlayer
struct PhotonPlayer_t460;
// PhotonMessageInfo
struct PhotonMessageInfo_t463;

// System.Void WorkerInGame::.ctor()
extern "C" void WorkerInGame__ctor_m1500 (WorkerInGame_t403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::Awake()
extern "C" void WorkerInGame_Awake_m1501 (WorkerInGame_t403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnGUI()
extern "C" void WorkerInGame_OnGUI_m1502 (WorkerInGame_t403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnMasterClientSwitched(PhotonPlayer)
extern "C" void WorkerInGame_OnMasterClientSwitched_m1503 (WorkerInGame_t403 * __this, PhotonPlayer_t460 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnLeftRoom()
extern "C" void WorkerInGame_OnLeftRoom_m1504 (WorkerInGame_t403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnDisconnectedFromPhoton()
extern "C" void WorkerInGame_OnDisconnectedFromPhoton_m1505 (WorkerInGame_t403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonInstantiate(PhotonMessageInfo)
extern "C" void WorkerInGame_OnPhotonInstantiate_m1506 (WorkerInGame_t403 * __this, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonPlayerConnected(PhotonPlayer)
extern "C" void WorkerInGame_OnPhotonPlayerConnected_m1507 (WorkerInGame_t403 * __this, PhotonPlayer_t460 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C" void WorkerInGame_OnPhotonPlayerDisconnected_m1508 (WorkerInGame_t403 * __this, PhotonPlayer_t460 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnFailedToConnectToPhoton()
extern "C" void WorkerInGame_OnFailedToConnectToPhoton_m1509 (WorkerInGame_t403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
