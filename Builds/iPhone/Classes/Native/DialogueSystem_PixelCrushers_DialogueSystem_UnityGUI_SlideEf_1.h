#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
struct GUIControl_t1520;
// PixelCrushers.DialogueSystem.UnityGUI.GUIEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIEffe.h"
// PixelCrushers.DialogueSystem.UnityGUI.SlideEffect/SlideDirection
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_SlideEf.h"
// PixelCrushers.DialogueSystem.UnityGUI.SlideEffect
struct  SlideEffect_t1630  : public GUIEffect_t1620
{
	// PixelCrushers.DialogueSystem.UnityGUI.SlideEffect/SlideDirection PixelCrushers.DialogueSystem.UnityGUI.SlideEffect::direction
	int32_t ___direction_3;
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.SlideEffect::duration
	float ___duration_4;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIControl PixelCrushers.DialogueSystem.UnityGUI.SlideEffect::control
	GUIControl_t1520 * ___control_5;
};
