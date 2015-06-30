#pragma once
#include <stdint.h>
// UnityEngine.UI.Graphic
struct Graphic_t219;
// UnityEngine.UI.Text
struct Text_t212;
// PixelCrushers.DialogueSystem.UnityUISelectorDisplay/AnimationTransitions
struct AnimationTransitions_t276;
// PixelCrushers.DialogueSystem.Selector
struct Selector_t277;
// PixelCrushers.DialogueSystem.ProximitySelector
struct ProximitySelector_t278;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.Usable
struct Usable_t279;
// PixelCrushers.DialogueSystem.UsableUnityUI
struct UsableUnityUI_t280;
// UnityEngine.Animator
struct Animator_t214;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// PixelCrushers.DialogueSystem.UnityUISelectorDisplay
struct  UnityUISelectorDisplay_t281  : public MonoBehaviour_t47
{
	// UnityEngine.UI.Graphic PixelCrushers.DialogueSystem.UnityUISelectorDisplay::mainGraphic
	Graphic_t219 * ___mainGraphic_2;
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.UnityUISelectorDisplay::nameText
	Text_t212 * ___nameText_3;
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.UnityUISelectorDisplay::useMessageText
	Text_t212 * ___useMessageText_4;
	// UnityEngine.Color PixelCrushers.DialogueSystem.UnityUISelectorDisplay::inRangeColor
	Color_t121  ___inRangeColor_5;
	// UnityEngine.Color PixelCrushers.DialogueSystem.UnityUISelectorDisplay::outOfRangeColor
	Color_t121  ___outOfRangeColor_6;
	// UnityEngine.UI.Graphic PixelCrushers.DialogueSystem.UnityUISelectorDisplay::reticleInRange
	Graphic_t219 * ___reticleInRange_7;
	// UnityEngine.UI.Graphic PixelCrushers.DialogueSystem.UnityUISelectorDisplay::reticleOutOfRange
	Graphic_t219 * ___reticleOutOfRange_8;
	// PixelCrushers.DialogueSystem.UnityUISelectorDisplay/AnimationTransitions PixelCrushers.DialogueSystem.UnityUISelectorDisplay::animationTransitions
	AnimationTransitions_t276 * ___animationTransitions_9;
	// PixelCrushers.DialogueSystem.Selector PixelCrushers.DialogueSystem.UnityUISelectorDisplay::selector
	Selector_t277 * ___selector_10;
	// PixelCrushers.DialogueSystem.ProximitySelector PixelCrushers.DialogueSystem.UnityUISelectorDisplay::proximitySelector
	ProximitySelector_t278 * ___proximitySelector_11;
	// System.String PixelCrushers.DialogueSystem.UnityUISelectorDisplay::defaultUseMessage
	String_t* ___defaultUseMessage_12;
	// PixelCrushers.DialogueSystem.Usable PixelCrushers.DialogueSystem.UnityUISelectorDisplay::usable
	Usable_t279 * ___usable_13;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUISelectorDisplay::lastInRange
	bool ___lastInRange_14;
	// PixelCrushers.DialogueSystem.UsableUnityUI PixelCrushers.DialogueSystem.UnityUISelectorDisplay::usableUnityUI
	UsableUnityUI_t280 * ___usableUnityUI_15;
	// UnityEngine.Animator PixelCrushers.DialogueSystem.UnityUISelectorDisplay::animator
	Animator_t214 * ___animator_16;
};
