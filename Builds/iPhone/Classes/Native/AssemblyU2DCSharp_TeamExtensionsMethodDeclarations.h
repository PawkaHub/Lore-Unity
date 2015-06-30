#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TeamExtensions
struct TeamExtensions_t525;
// PhotonPlayer
struct PhotonPlayer_t432;
// PunTeams/Team
#include "AssemblyU2DCSharp_PunTeams_Team.h"

// PunTeams/Team TeamExtensions::GetTeam(PhotonPlayer)
extern "C" uint8_t TeamExtensions_GetTeam_m2246 (Object_t * __this /* static, unused */, PhotonPlayer_t432 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamExtensions::SetTeam(PhotonPlayer,PunTeams/Team)
extern "C" void TeamExtensions_SetTeam_m2247 (Object_t * __this /* static, unused */, PhotonPlayer_t432 * ___player, uint8_t ___team, const MethodInfo* method) IL2CPP_METHOD_ATTR;
