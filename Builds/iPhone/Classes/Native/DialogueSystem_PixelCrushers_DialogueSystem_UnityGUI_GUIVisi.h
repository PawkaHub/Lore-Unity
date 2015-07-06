#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.LocalizedTextTable
struct LocalizedTextTable_t252;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.FormattedText
struct FormattedText_t572;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUICont.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl
struct  GUIVisibleControl_t1347  : public GUIControl_t1261
{
	// PixelCrushers.DialogueSystem.LocalizedTextTable PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::localizedText
	LocalizedTextTable_t252 * ___localizedText_19;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::text
	String_t* ___text_20;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::guiStyleName
	String_t* ___guiStyleName_21;
	// PixelCrushers.DialogueSystem.FormattedText PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::formattingToApply
	FormattedText_t572 * ___formattingToApply_22;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::isFormattingApplied
	bool ___isFormattingApplied_23;
	// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::guiStyle
	GUIStyle_t303 * ___guiStyle_24;
	// UnityEngine.Color PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::originalGUIColor
	Color_t121  ___originalGUIColor_25;
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::alpha
	float ___alpha_26;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::originalTextValue
	String_t* ___originalTextValue_27;
};
