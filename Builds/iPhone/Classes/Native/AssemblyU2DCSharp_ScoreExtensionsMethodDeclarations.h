#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ScoreExtensions
struct ScoreExtensions_t548;
// PhotonPlayer
struct PhotonPlayer_t460;

// System.Void ScoreExtensions::SetScore(PhotonPlayer,System.Int32)
extern "C" void ScoreExtensions_SetScore_m2284 (Object_t * __this /* static, unused */, PhotonPlayer_t460 * ___player, int32_t ___newScore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreExtensions::AddScore(PhotonPlayer,System.Int32)
extern "C" void ScoreExtensions_AddScore_m2285 (Object_t * __this /* static, unused */, PhotonPlayer_t460 * ___player, int32_t ___scoreToAddToCurrent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ScoreExtensions::GetScore(PhotonPlayer)
extern "C" int32_t ScoreExtensions_GetScore_m2286 (Object_t * __this /* static, unused */, PhotonPlayer_t460 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
