﻿#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t356;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t829;
// UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycaster.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.EventSystems.PhysicsRaycaster
struct  PhysicsRaycaster_t828  : public BaseRaycaster_t813
{
	// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::m_EventCamera
	Camera_t356 * ___m_EventCamera_3;
	// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::m_EventMask
	LayerMask_t87  ___m_EventMask_4;
};
struct PhysicsRaycaster_t828_StaticFields{
	// System.Comparison`1<UnityEngine.RaycastHit> UnityEngine.EventSystems.PhysicsRaycaster::<>f__am$cache2
	Comparison_1_t829 * ___U3CU3Ef__amU24cache2_5;
};
