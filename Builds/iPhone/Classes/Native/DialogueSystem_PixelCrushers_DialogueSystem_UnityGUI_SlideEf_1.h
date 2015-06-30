#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
struct GUIControl_t937;
// PixelCrushers.DialogueSystem.UnityGUI.GUIEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIEffe.h"
// PixelCrushers.DialogueSystem.UnityGUI.SlideEffect/SlideDirection
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_SlideEf.h"
// PixelCrushers.DialogueSystem.UnityGUI.SlideEffect
struct  SlideEffect_t1047  : public GUIEffect_t1037
{
	// PixelCrushers.DialogueSystem.UnityGUI.SlideEffect/SlideDirection PixelCrushers.DialogueSystem.UnityGUI.SlideEffect::direction
	int32_t ___direction_3;
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.SlideEffect::duration
	float ___duration_4;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIControl PixelCrushers.DialogueSystem.UnityGUI.SlideEffect::control
	GUIControl_t937 * ___control_5;
};
