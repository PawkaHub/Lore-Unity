#pragma once
#include <stdint.h>
// UnityEngine.Texture2D
struct Texture2D_t90;
// PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIVisi.h"
// PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar/Origin
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIProg.h"
// PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar
struct  GUIProgressBar_t1032  : public GUIVisibleControl_t1023
{
	// PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar/Origin PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar::origin
	int32_t ___origin_28;
	// UnityEngine.Texture2D PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar::emptyImage
	Texture2D_t90 * ___emptyImage_29;
	// UnityEngine.Texture2D PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar::fullImage
	Texture2D_t90 * ___fullImage_30;
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar::progress
	float ___progress_31;
};
