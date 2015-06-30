#pragma once
#include <stdint.h>
// UnityEngine.CanvasGroup
struct CanvasGroup_t211;
// UnityEngine.UI.Text
struct Text_t212;
// PixelCrushers.DialogueSystem.UnityUIBarkUI/AnimationTransitions
struct AnimationTransitions_t210;
// UnityEngine.Canvas
struct Canvas_t213;
// UnityEngine.Animator
struct Animator_t214;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.BarkSubtitleSetting
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkSubtitleSett.h"
// PixelCrushers.DialogueSystem.UnityUIBarkUI
struct  UnityUIBarkUI_t215  : public MonoBehaviour_t47
{
	// UnityEngine.CanvasGroup PixelCrushers.DialogueSystem.UnityUIBarkUI::canvasGroup
	CanvasGroup_t211 * ___canvasGroup_2;
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.UnityUIBarkUI::barkText
	Text_t212 * ___barkText_3;
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.UnityUIBarkUI::nameText
	Text_t212 * ___nameText_4;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIBarkUI::includeName
	bool ___includeName_5;
	// System.Single PixelCrushers.DialogueSystem.UnityUIBarkUI::doneTime
	float ___doneTime_6;
	// PixelCrushers.DialogueSystem.UnityUIBarkUI/AnimationTransitions PixelCrushers.DialogueSystem.UnityUIBarkUI::animationTransitions
	AnimationTransitions_t210 * ___animationTransitions_7;
	// System.Single PixelCrushers.DialogueSystem.UnityUIBarkUI::duration
	float ___duration_8;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIBarkUI::waitUntilSequenceEnds
	bool ___waitUntilSequenceEnds_9;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIBarkUI::waitForContinueButton
	bool ___waitForContinueButton_10;
	// PixelCrushers.DialogueSystem.BarkSubtitleSetting PixelCrushers.DialogueSystem.UnityUIBarkUI::textDisplaySetting
	int32_t ___textDisplaySetting_11;
	// UnityEngine.Canvas PixelCrushers.DialogueSystem.UnityUIBarkUI::canvas
	Canvas_t213 * ___canvas_12;
	// UnityEngine.Animator PixelCrushers.DialogueSystem.UnityUIBarkUI::animator
	Animator_t214 * ___animator_13;
};
