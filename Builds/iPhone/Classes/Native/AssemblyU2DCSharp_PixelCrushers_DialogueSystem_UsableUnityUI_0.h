#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t212;
// UnityEngine.UI.Graphic
struct Graphic_t219;
// PixelCrushers.DialogueSystem.UsableUnityUI/AnimationTransitions
struct AnimationTransitions_t282;
// UnityEngine.Canvas
struct Canvas_t213;
// UnityEngine.Animator
struct Animator_t214;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// PixelCrushers.DialogueSystem.UsableUnityUI
struct  UsableUnityUI_t280  : public MonoBehaviour_t47
{
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.UsableUnityUI::nameText
	Text_t212 * ___nameText_2;
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.UsableUnityUI::useMessageText
	Text_t212 * ___useMessageText_3;
	// UnityEngine.Color PixelCrushers.DialogueSystem.UsableUnityUI::inRangeColor
	Color_t121  ___inRangeColor_4;
	// UnityEngine.Color PixelCrushers.DialogueSystem.UsableUnityUI::outOfRangeColor
	Color_t121  ___outOfRangeColor_5;
	// UnityEngine.UI.Graphic PixelCrushers.DialogueSystem.UsableUnityUI::reticleInRange
	Graphic_t219 * ___reticleInRange_6;
	// UnityEngine.UI.Graphic PixelCrushers.DialogueSystem.UsableUnityUI::reticleOutOfRange
	Graphic_t219 * ___reticleOutOfRange_7;
	// PixelCrushers.DialogueSystem.UsableUnityUI/AnimationTransitions PixelCrushers.DialogueSystem.UsableUnityUI::animationTransitions
	AnimationTransitions_t282 * ___animationTransitions_8;
	// UnityEngine.Canvas PixelCrushers.DialogueSystem.UsableUnityUI::canvas
	Canvas_t213 * ___canvas_9;
	// UnityEngine.Animator PixelCrushers.DialogueSystem.UsableUnityUI::animator
	Animator_t214 * ___animator_10;
};
