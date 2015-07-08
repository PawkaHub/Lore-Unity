﻿#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t259;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t1166;
// UnityEngine.Coroutine
struct Coroutine_t589;
struct Coroutine_t589_marshaled;
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
// UnityEngine.UI.Scrollbar/Direction
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.UI.Scrollbar
struct  Scrollbar_t240  : public Selectable_t591
{
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t259 * ___m_HandleRect_16;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_17;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_18;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_19;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_20;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_t1166 * ___m_OnValueChanged_21;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t259 * ___m_ContainerRect_22;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_t97  ___m_Offset_23;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_t1170  ___m_Tracker_24;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t589 * ___m_PointerDownRepeat_25;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_26;
};
