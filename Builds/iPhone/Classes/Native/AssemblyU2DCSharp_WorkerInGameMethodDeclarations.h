#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WorkerInGame
struct WorkerInGame_t375;
// PhotonPlayer
struct PhotonPlayer_t432;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;

// System.Void WorkerInGame::.ctor()
extern "C" void WorkerInGame__ctor_m1454 (WorkerInGame_t375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::Awake()
extern "C" void WorkerInGame_Awake_m1455 (WorkerInGame_t375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnGUI()
extern "C" void WorkerInGame_OnGUI_m1456 (WorkerInGame_t375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnMasterClientSwitched(PhotonPlayer)
extern "C" void WorkerInGame_OnMasterClientSwitched_m1457 (WorkerInGame_t375 * __this, PhotonPlayer_t432 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnLeftRoom()
extern "C" void WorkerInGame_OnLeftRoom_m1458 (WorkerInGame_t375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnDisconnectedFromPhoton()
extern "C" void WorkerInGame_OnDisconnectedFromPhoton_m1459 (WorkerInGame_t375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonInstantiate(PhotonMessageInfo)
extern "C" void WorkerInGame_OnPhotonInstantiate_m1460 (WorkerInGame_t375 * __this, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonPlayerConnected(PhotonPlayer)
extern "C" void WorkerInGame_OnPhotonPlayerConnected_m1461 (WorkerInGame_t375 * __this, PhotonPlayer_t432 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C" void WorkerInGame_OnPhotonPlayerDisconnected_m1462 (WorkerInGame_t375 * __this, PhotonPlayer_t432 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnFailedToConnectToPhoton()
extern "C" void WorkerInGame_OnFailedToConnectToPhoton_m1463 (WorkerInGame_t375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
