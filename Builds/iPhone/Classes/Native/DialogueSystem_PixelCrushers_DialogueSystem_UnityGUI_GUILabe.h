#pragma once
#include <stdint.h>
// UnityEngine.Texture2D
struct Texture2D_t90;
// PixelCrushers.DialogueSystem.UnityGUI.ImageAnimation
struct ImageAnimation_t1353;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIVisi.h"
// PixelCrushers.DialogueSystem.UnityGUI.TextStyle
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_TextSty.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// PixelCrushers.DialogueSystem.UnityGUI.GUILabel
struct  GUILabel_t1262  : public GUIVisibleControl_t1347
{
	// PixelCrushers.DialogueSystem.UnityGUI.TextStyle PixelCrushers.DialogueSystem.UnityGUI.GUILabel::textStyle
	int32_t ___textStyle_28;
	// UnityEngine.Color PixelCrushers.DialogueSystem.UnityGUI.GUILabel::textStyleColor
	Color_t121  ___textStyleColor_29;
	// UnityEngine.Color PixelCrushers.DialogueSystem.UnityGUI.GUILabel::imageColor
	Color_t121  ___imageColor_30;
	// UnityEngine.Texture2D PixelCrushers.DialogueSystem.UnityGUI.GUILabel::image
	Texture2D_t90 * ___image_31;
	// PixelCrushers.DialogueSystem.UnityGUI.ImageAnimation PixelCrushers.DialogueSystem.UnityGUI.GUILabel::imageAnimation
	ImageAnimation_t1353 * ___imageAnimation_32;
	// System.Collections.Generic.List`1<System.String> PixelCrushers.DialogueSystem.UnityGUI.GUILabel::closureTags
	List_1_t1 * ___closureTags_33;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUILabel::useSubstring
	bool ___useSubstring_34;
	// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.GUILabel::substringLength
	int32_t ___substringLength_35;
	// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.GUILabel::substringLengthLastGetRichTextClosedString
	int32_t ___substringLengthLastGetRichTextClosedString_36;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.GUILabel::richTextClosedString
	String_t* ___richTextClosedString_37;
};
