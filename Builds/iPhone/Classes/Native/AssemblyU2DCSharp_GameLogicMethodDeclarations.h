﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameLogic
struct GameLogic_t379;
// PhotonPlayer
struct PhotonPlayer_t432;

// System.Void GameLogic::.ctor()
extern "C" void GameLogic__ctor_m1485 (GameLogic_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::.cctor()
extern "C" void GameLogic__cctor_m1486 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::Start()
extern "C" void GameLogic_Start_m1487 (GameLogic_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnJoinedRoom()
extern "C" void GameLogic_OnJoinedRoom_m1488 (GameLogic_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnPhotonPlayerConnected(PhotonPlayer)
extern "C" void GameLogic_OnPhotonPlayerConnected_m1489 (GameLogic_t379 * __this, PhotonPlayer_t432 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::TagPlayer(System.Int32)
extern "C" void GameLogic_TagPlayer_m1490 (Object_t * __this /* static, unused */, int32_t ___playerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::TaggedPlayer(System.Int32)
extern "C" void GameLogic_TaggedPlayer_m1491 (GameLogic_t379 * __this, int32_t ___playerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C" void GameLogic_OnPhotonPlayerDisconnected_m1492 (GameLogic_t379 * __this, PhotonPlayer_t432 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnMasterClientSwitched()
extern "C" void GameLogic_OnMasterClientSwitched_m1493 (GameLogic_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;