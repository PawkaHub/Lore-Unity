#pragma once
#include <stdint.h>
// UnityEngine.Terrain
struct Terrain_t58;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// FFRandomMoveOnTerrain
struct  FFRandomMoveOnTerrain_t59  : public MonoBehaviour_t47
{
	// UnityEngine.Terrain FFRandomMoveOnTerrain::m_Terrain
	Terrain_t58 * ___m_Terrain_2;
	// System.Single FFRandomMoveOnTerrain::m_Speed
	float ___m_Speed_3;
	// System.Single FFRandomMoveOnTerrain::m_SpeedSpread
	float ___m_SpeedSpread_4;
	// System.Single FFRandomMoveOnTerrain::m_MoveDistance
	float ___m_MoveDistance_5;
	// System.Single FFRandomMoveOnTerrain::m_currentSpeed
	float ___m_currentSpeed_6;
	// System.Single FFRandomMoveOnTerrain::m_TimeRound
	float ___m_TimeRound_7;
	// System.Single FFRandomMoveOnTerrain::m_TimeCount
	float ___m_TimeCount_8;
	// UnityEngine.Vector3 FFRandomMoveOnTerrain::m_StartPosition
	Vector3_t53  ___m_StartPosition_9;
	// UnityEngine.Vector3 FFRandomMoveOnTerrain::m_EndPosition
	Vector3_t53  ___m_EndPosition_10;
	// UnityEngine.Bounds FFRandomMoveOnTerrain::m_LimitArea
	Bounds_t56  ___m_LimitArea_11;
};
