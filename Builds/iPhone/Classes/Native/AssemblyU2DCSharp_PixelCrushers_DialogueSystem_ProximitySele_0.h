#pragma once
#include <stdint.h>
// UnityEngine.GUISkin
struct GUISkin_t197;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.UnityGUI.ScaledRect
struct ScaledRect_t199;
// UnityEngine.Transform
struct Transform_t54;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Usable>
struct List_1_t302;
// PixelCrushers.DialogueSystem.Usable
struct Usable_t279;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate
struct SelectedUsableObjectDelegate_t304;
// PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate
struct DeselectedUsableObjectDelegate_t305;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// PixelCrushers.DialogueSystem.UnityGUI.TextStyle
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_TextSty.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// PixelCrushers.DialogueSystem.ProximitySelector
struct  ProximitySelector_t278  : public MonoBehaviour_t47
{
	// System.Boolean PixelCrushers.DialogueSystem.ProximitySelector::useDefaultGUI
	bool ___useDefaultGUI_3;
	// UnityEngine.GUISkin PixelCrushers.DialogueSystem.ProximitySelector::guiSkin
	GUISkin_t197 * ___guiSkin_4;
	// System.String PixelCrushers.DialogueSystem.ProximitySelector::guiStyleName
	String_t* ___guiStyleName_5;
	// UnityEngine.TextAnchor PixelCrushers.DialogueSystem.ProximitySelector::alignment
	int32_t ___alignment_6;
	// UnityEngine.Color PixelCrushers.DialogueSystem.ProximitySelector::color
	Color_t121  ___color_7;
	// PixelCrushers.DialogueSystem.UnityGUI.TextStyle PixelCrushers.DialogueSystem.ProximitySelector::textStyle
	int32_t ___textStyle_8;
	// UnityEngine.Color PixelCrushers.DialogueSystem.ProximitySelector::textStyleColor
	Color_t121  ___textStyleColor_9;
	// System.String PixelCrushers.DialogueSystem.ProximitySelector::defaultUseMessage
	String_t* ___defaultUseMessage_10;
	// UnityEngine.KeyCode PixelCrushers.DialogueSystem.ProximitySelector::useKey
	int32_t ___useKey_11;
	// System.String PixelCrushers.DialogueSystem.ProximitySelector::useButton
	String_t* ___useButton_12;
	// System.Boolean PixelCrushers.DialogueSystem.ProximitySelector::enableTouch
	bool ___enableTouch_13;
	// PixelCrushers.DialogueSystem.UnityGUI.ScaledRect PixelCrushers.DialogueSystem.ProximitySelector::touchArea
	ScaledRect_t199 * ___touchArea_14;
	// System.Boolean PixelCrushers.DialogueSystem.ProximitySelector::broadcastToChildren
	bool ___broadcastToChildren_15;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.ProximitySelector::actorTransform
	Transform_t54 * ___actorTransform_16;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Usable> PixelCrushers.DialogueSystem.ProximitySelector::usablesInRange
	List_1_t302 * ___usablesInRange_17;
	// PixelCrushers.DialogueSystem.Usable PixelCrushers.DialogueSystem.ProximitySelector::currentUsable
	Usable_t279 * ___currentUsable_18;
	// System.String PixelCrushers.DialogueSystem.ProximitySelector::currentHeading
	String_t* ___currentHeading_19;
	// System.String PixelCrushers.DialogueSystem.ProximitySelector::currentUseMessage
	String_t* ___currentUseMessage_20;
	// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.ProximitySelector::guiStyle
	GUIStyle_t303 * ___guiStyle_21;
	// System.Single PixelCrushers.DialogueSystem.ProximitySelector::timeToEnableUseButton
	float ___timeToEnableUseButton_22;
	// PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate PixelCrushers.DialogueSystem.ProximitySelector::SelectedUsableObject
	SelectedUsableObjectDelegate_t304 * ___SelectedUsableObject_23;
	// PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate PixelCrushers.DialogueSystem.ProximitySelector::DeselectedUsableObject
	DeselectedUsableObjectDelegate_t305 * ___DeselectedUsableObject_24;
};
