#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.Selector
struct Selector_t277;
// PixelCrushers.DialogueSystem.ProximitySelector
struct ProximitySelector_t278;
// PixelCrushers.DialogueSystem.Usable
struct Usable_t279;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// PixelCrushers.DialogueSystem.SelectorFollowTarget
struct  SelectorFollowTarget_t320  : public MonoBehaviour_t47
{
	// UnityEngine.Vector3 PixelCrushers.DialogueSystem.SelectorFollowTarget::offset
	Vector3_t53  ___offset_2;
	// PixelCrushers.DialogueSystem.Selector PixelCrushers.DialogueSystem.SelectorFollowTarget::selector
	Selector_t277 * ___selector_3;
	// PixelCrushers.DialogueSystem.ProximitySelector PixelCrushers.DialogueSystem.SelectorFollowTarget::proximitySelector
	ProximitySelector_t278 * ___proximitySelector_4;
	// System.Boolean PixelCrushers.DialogueSystem.SelectorFollowTarget::previousUseDefaultGUI
	bool ___previousUseDefaultGUI_5;
	// PixelCrushers.DialogueSystem.Usable PixelCrushers.DialogueSystem.SelectorFollowTarget::lastUsable
	Usable_t279 * ___lastUsable_6;
	// System.String PixelCrushers.DialogueSystem.SelectorFollowTarget::heading
	String_t* ___heading_7;
	// System.String PixelCrushers.DialogueSystem.SelectorFollowTarget::useMessage
	String_t* ___useMessage_8;
	// UnityEngine.GameObject PixelCrushers.DialogueSystem.SelectorFollowTarget::lastSelectionDrawn
	GameObject_t49 * ___lastSelectionDrawn_9;
	// System.Single PixelCrushers.DialogueSystem.SelectorFollowTarget::selectionHeight
	float ___selectionHeight_10;
	// UnityEngine.Vector2 PixelCrushers.DialogueSystem.SelectorFollowTarget::selectionHeadingSize
	Vector2_t97  ___selectionHeadingSize_11;
	// UnityEngine.Vector2 PixelCrushers.DialogueSystem.SelectorFollowTarget::selectionUseMessageSize
	Vector2_t97  ___selectionUseMessageSize_12;
};
