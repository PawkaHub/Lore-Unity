#pragma once
#include <stdint.h>
// UnityEngine.UI.Graphic
struct Graphic_t219;
// UnityEngine.UI.Text
struct Text_t212;
// UnityEngine.UI.InputField
struct InputField_t247;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t241;
// PixelCrushers.DialogueSystem.AcceptedTextDelegate
struct AcceptedTextDelegate_t248;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// PixelCrushers.DialogueSystem.UnityUITextFieldUI
struct  UnityUITextFieldUI_t249  : public MonoBehaviour_t47
{
	// UnityEngine.UI.Graphic PixelCrushers.DialogueSystem.UnityUITextFieldUI::panel
	Graphic_t219 * ___panel_2;
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.UnityUITextFieldUI::label
	Text_t212 * ___label_3;
	// UnityEngine.UI.InputField PixelCrushers.DialogueSystem.UnityUITextFieldUI::textField
	InputField_t247 * ___textField_4;
	// UnityEngine.KeyCode PixelCrushers.DialogueSystem.UnityUITextFieldUI::acceptKey
	int32_t ___acceptKey_5;
	// UnityEngine.KeyCode PixelCrushers.DialogueSystem.UnityUITextFieldUI::cancelKey
	int32_t ___cancelKey_6;
	// UnityEngine.Events.UnityEvent PixelCrushers.DialogueSystem.UnityUITextFieldUI::onAccept
	UnityEvent_t241 * ___onAccept_7;
	// UnityEngine.Events.UnityEvent PixelCrushers.DialogueSystem.UnityUITextFieldUI::onCancel
	UnityEvent_t241 * ___onCancel_8;
	// PixelCrushers.DialogueSystem.AcceptedTextDelegate PixelCrushers.DialogueSystem.UnityUITextFieldUI::acceptedText
	AcceptedTextDelegate_t248 * ___acceptedText_9;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUITextFieldUI::isAwaitingInput
	bool ___isAwaitingInput_10;
};
