#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
struct GUIControl_t937;
// PixelCrushers.DialogueSystem.UnityGUI.GUILabel
struct GUILabel_t938;
// PixelCrushers.DialogueSystem.UnityGUI.GUITextField
struct GUITextField_t1033;
// PixelCrushers.DialogueSystem.AcceptedTextDelegate
struct AcceptedTextDelegate_t248;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI
struct  UnityTextFieldUI_t1063  : public MonoBehaviour_t47
{
	// PixelCrushers.DialogueSystem.UnityGUI.GUIControl PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::panel
	GUIControl_t937 * ___panel_2;
	// PixelCrushers.DialogueSystem.UnityGUI.GUILabel PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::label
	GUILabel_t938 * ___label_3;
	// PixelCrushers.DialogueSystem.UnityGUI.GUITextField PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::textField
	GUITextField_t1033 * ___textField_4;
	// UnityEngine.KeyCode PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::acceptKey
	int32_t ___acceptKey_5;
	// UnityEngine.KeyCode PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::cancelKey
	int32_t ___cancelKey_6;
	// PixelCrushers.DialogueSystem.AcceptedTextDelegate PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::acceptedText
	AcceptedTextDelegate_t248 * ___acceptedText_7;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIControl PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::control
	GUIControl_t937 * ___control_8;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::ignoreFirstAccept
	bool ___ignoreFirstAccept_9;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::ignoreFirstCancel
	bool ___ignoreFirstCancel_10;
};
