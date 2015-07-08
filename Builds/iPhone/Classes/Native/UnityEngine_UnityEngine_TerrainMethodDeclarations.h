#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Terrain
struct Terrain_t58;
// UnityEngine.TerrainData
struct TerrainData_t648;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
extern "C" TerrainData_t648 * Terrain_get_terrainData_m2646 (Terrain_t58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::SampleHeight(UnityEngine.Vector3)
extern "C" float Terrain_SampleHeight_m2652 (Terrain_t58 * __this, Vector3_t53  ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::INTERNAL_CALL_SampleHeight(UnityEngine.Terrain,UnityEngine.Vector3&)
extern "C" float Terrain_INTERNAL_CALL_SampleHeight_m17476 (Object_t * __this /* static, unused */, Terrain_t58 * ___self, Vector3_t53 * ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Terrain UnityEngine.Terrain::get_activeTerrain()
extern "C" Terrain_t58 * Terrain_get_activeTerrain_m2651 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
