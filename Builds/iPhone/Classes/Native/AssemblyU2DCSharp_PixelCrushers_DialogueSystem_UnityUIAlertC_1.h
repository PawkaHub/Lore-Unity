#pragma once
#include <stdint.h>
// UnityEngine.UI.Graphic
struct Graphic_t219;
// UnityEngine.UI.Text
struct Text_t212;
// UnityEngine.UI.Button
struct Button_t220;
// PixelCrushers.DialogueSystem.UnityUIAlertControls/AnimationTransitions
struct AnimationTransitions_t216;
// UnityEngine.Animator
struct Animator_t214;
// PixelCrushers.DialogueSystem.AbstractUIAlertControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUIAlertC.h"
// PixelCrushers.DialogueSystem.UnityUIAlertControls
struct  UnityUIAlertControls_t217  : public AbstractUIAlertControls_t221
{
	// UnityEngine.UI.Graphic PixelCrushers.DialogueSystem.UnityUIAlertControls::panel
	Graphic_t219 * ___panel_1;
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.UnityUIAlertControls::line
	Text_t212 * ___line_2;
	// UnityEngine.UI.Button PixelCrushers.DialogueSystem.UnityUIAlertControls::continueButton
	Button_t220 * ___continueButton_3;
	// PixelCrushers.DialogueSystem.UnityUIAlertControls/AnimationTransitions PixelCrushers.DialogueSystem.UnityUIAlertControls::animationTransitions
	AnimationTransitions_t216 * ___animationTransitions_4;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIAlertControls::isVisible
	bool ___isVisible_5;
	// UnityEngine.Animator PixelCrushers.DialogueSystem.UnityUIAlertControls::animator
	Animator_t214 * ___animator_6;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIAlertControls::lookedForAnimator
	bool ___lookedForAnimator_7;
};
