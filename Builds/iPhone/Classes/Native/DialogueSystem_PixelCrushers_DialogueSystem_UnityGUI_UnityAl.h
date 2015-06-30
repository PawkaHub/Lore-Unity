#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
struct GUIControl_t937;
// PixelCrushers.DialogueSystem.UnityGUI.GUILabel
struct GUILabel_t938;
// PixelCrushers.DialogueSystem.UnityGUI.GUIButton
struct GUIButton_t939;
// PixelCrushers.DialogueSystem.AbstractUIAlertControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUIAlertC.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityAlertControls
struct  UnityAlertControls_t1060  : public AbstractUIAlertControls_t221
{
	// PixelCrushers.DialogueSystem.UnityGUI.GUIControl PixelCrushers.DialogueSystem.UnityGUI.UnityAlertControls::panel
	GUIControl_t937 * ___panel_1;
	// PixelCrushers.DialogueSystem.UnityGUI.GUILabel PixelCrushers.DialogueSystem.UnityGUI.UnityAlertControls::line
	GUILabel_t938 * ___line_2;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIButton PixelCrushers.DialogueSystem.UnityGUI.UnityAlertControls::continueButton
	GUIButton_t939 * ___continueButton_3;
};
