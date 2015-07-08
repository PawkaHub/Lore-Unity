#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.GUISkin
struct GUISkin_t197;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI
struct UnityBarkUIOnGUI_t1639;
// UnityEngine.Collider
struct Collider_t194;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.UnityGUI.TextStyle
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_TextSty.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// PixelCrushers.DialogueSystem.BarkSubtitleSetting
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkSubtitleSett.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI
struct  UnityBarkUI_t1640  : public MonoBehaviour_t47
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::textPosition
	Transform_t54 * ___textPosition_2;
	// UnityEngine.GUISkin PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::guiSkin
	GUISkin_t197 * ___guiSkin_3;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::guiStyleName
	String_t* ___guiStyleName_4;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::includeName
	bool ___includeName_5;
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::duration
	float ___duration_6;
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::fadeDuration
	float ___fadeDuration_7;
	// PixelCrushers.DialogueSystem.UnityGUI.TextStyle PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::textStyle
	int32_t ___textStyle_8;
	// UnityEngine.Color PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::textStyleColor
	Color_t121  ___textStyleColor_9;
	// PixelCrushers.DialogueSystem.BarkSubtitleSetting PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::textDisplaySetting
	int32_t ___textDisplaySetting_10;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::waitUntilSequenceEnds
	bool ___waitUntilSequenceEnds_11;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::checkIfPlayerVisible
	bool ___checkIfPlayerVisible_12;
	// UnityEngine.LayerMask PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::visibilityLayerMask
	LayerMask_t87  ___visibilityLayerMask_13;
	// PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::unityBarkUIOnGUI
	UnityBarkUIOnGUI_t1639 * ___unityBarkUIOnGUI_14;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::playerCameraTransform
	Transform_t54 * ___playerCameraTransform_15;
	// UnityEngine.Collider PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::playerCameraCollider
	Collider_t194 * ___playerCameraCollider_16;
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::secondsLeft
	float ___secondsLeft_17;
};
