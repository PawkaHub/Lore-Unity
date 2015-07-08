#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.Camera
struct Camera_t384;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// InputToEvent
struct  InputToEvent_t531  : public MonoBehaviour_t47
{
	// UnityEngine.GameObject InputToEvent::lastGo
	GameObject_t49 * ___lastGo_2;
	// System.Boolean InputToEvent::DetectPointedAtGameObject
	bool ___DetectPointedAtGameObject_4;
	// UnityEngine.Vector2 InputToEvent::pressedPosition
	Vector2_t97  ___pressedPosition_5;
	// UnityEngine.Vector2 InputToEvent::currentPos
	Vector2_t97  ___currentPos_6;
	// System.Boolean InputToEvent::Dragging
	bool ___Dragging_7;
	// UnityEngine.Camera InputToEvent::m_Camera
	Camera_t384 * ___m_Camera_8;
};
struct InputToEvent_t531_StaticFields{
	// UnityEngine.Vector3 InputToEvent::inputHitPos
	Vector3_t53  ___inputHitPos_3;
	// UnityEngine.GameObject InputToEvent::<goPointedAt>k__BackingField
	GameObject_t49 * ___U3CgoPointedAtU3Ek__BackingField_9;
};
