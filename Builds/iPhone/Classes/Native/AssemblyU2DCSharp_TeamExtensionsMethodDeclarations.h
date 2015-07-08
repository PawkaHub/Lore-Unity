#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TeamExtensions
struct TeamExtensions_t552;
// PhotonPlayer
struct PhotonPlayer_t460;
// PunTeams/Team
#include "AssemblyU2DCSharp_PunTeams_Team.h"

// PunTeams/Team TeamExtensions::GetTeam(PhotonPlayer)
extern "C" uint8_t TeamExtensions_GetTeam_m2292 (Object_t * __this /* static, unused */, PhotonPlayer_t460 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamExtensions::SetTeam(PhotonPlayer,PunTeams/Team)
extern "C" void TeamExtensions_SetTeam_m2293 (Object_t * __this /* static, unused */, PhotonPlayer_t460 * ___player, uint8_t ___team, const MethodInfo* method) IL2CPP_METHOD_ATTR;
