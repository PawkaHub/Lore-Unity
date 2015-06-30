#pragma once
#include <stdint.h>
// UnityEngine.UI.Button
struct Button_t220;
// UnityEngine.UI.Text
struct Text_t212;
// PixelCrushers.DialogueSystem.Response
struct Response_t235;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// PixelCrushers.DialogueSystem.UnityUIResponseButton
struct  UnityUIResponseButton_t236  : public MonoBehaviour_t47
{
	// UnityEngine.UI.Button PixelCrushers.DialogueSystem.UnityUIResponseButton::button
	Button_t220 * ___button_2;
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.UnityUIResponseButton::label
	Text_t212 * ___label_3;
	// UnityEngine.Color PixelCrushers.DialogueSystem.UnityUIResponseButton::defaultColor
	Color_t121  ___defaultColor_4;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIResponseButton::setButtonColor
	bool ___setButtonColor_5;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIResponseButton::setLabelColor
	bool ___setLabelColor_6;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIResponseButton::<visible>k__BackingField
	bool ___U3CvisibleU3Ek__BackingField_7;
	// PixelCrushers.DialogueSystem.Response PixelCrushers.DialogueSystem.UnityUIResponseButton::<response>k__BackingField
	Response_t235 * ___U3CresponseU3Ek__BackingField_8;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.UnityUIResponseButton::<target>k__BackingField
	Transform_t54 * ___U3CtargetU3Ek__BackingField_9;
};
