#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar
struct GUIProgressBar_t1615;
// System.Action
struct Action_t250;
// PixelCrushers.DialogueSystem.UnityGUI.GUIEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIEffe.h"
// PixelCrushers.DialogueSystem.UnityGUI.TimerEffect
struct  TimerEffect_t1632  : public GUIEffect_t1620
{
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.TimerEffect::duration
	float ___duration_3;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar PixelCrushers.DialogueSystem.UnityGUI.TimerEffect::progressBar
	GUIProgressBar_t1615 * ___progressBar_4;
	// System.Action PixelCrushers.DialogueSystem.UnityGUI.TimerEffect::TimeoutHandler
	Action_t250 * ___TimeoutHandler_5;
};
