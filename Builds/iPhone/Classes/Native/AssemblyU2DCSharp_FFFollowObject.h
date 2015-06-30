#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// FFFollowObject
struct  FFFollowObject_t55  : public MonoBehaviour_t47
{
	// UnityEngine.Transform FFFollowObject::m_Target
	Transform_t54 * ___m_Target_2;
	// System.Boolean FFFollowObject::m_TranslateXPosition
	bool ___m_TranslateXPosition_3;
	// System.Boolean FFFollowObject::m_TranslateYPosition
	bool ___m_TranslateYPosition_4;
	// System.Boolean FFFollowObject::m_TranslateZPosition
	bool ___m_TranslateZPosition_5;
	// UnityEngine.Bounds FFFollowObject::m_Bounds
	Bounds_t56  ___m_Bounds_6;
	// UnityEngine.Vector3 FFFollowObject::m_DifCenter
	Vector3_t53  ___m_DifCenter_7;
};
