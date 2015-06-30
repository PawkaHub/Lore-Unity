#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t259;
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.UnityUIScrollbarEnabler
struct  UnityUIScrollbarEnabler_t257  : public MonoBehaviour_t47
{
	// UnityEngine.RectTransform PixelCrushers.DialogueSystem.UnityUIScrollbarEnabler::container
	RectTransform_t259 * ___container_2;
	// UnityEngine.RectTransform PixelCrushers.DialogueSystem.UnityUIScrollbarEnabler::content
	RectTransform_t259 * ___content_3;
	// UnityEngine.GameObject PixelCrushers.DialogueSystem.UnityUIScrollbarEnabler::scrollbar
	GameObject_t49 * ___scrollbar_4;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIScrollbarEnabler::started
	bool ___started_5;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIScrollbarEnabler::isChecking
	bool ___isChecking_6;
};
