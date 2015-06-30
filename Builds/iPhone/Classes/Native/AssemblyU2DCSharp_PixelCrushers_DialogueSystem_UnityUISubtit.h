#pragma once
#include <stdint.h>
// UnityEngine.UI.Graphic
struct Graphic_t219;
// UnityEngine.UI.Text
struct Text_t212;
// UnityEngine.UI.Image
struct Image_t237;
// UnityEngine.UI.Button
struct Button_t220;
// PixelCrushers.DialogueSystem.AbstractUISubtitleControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUISubtit.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// PixelCrushers.DialogueSystem.UnityUISubtitleControls
struct  UnityUISubtitleControls_t227  : public AbstractUISubtitleControls_t246
{
	// UnityEngine.UI.Graphic PixelCrushers.DialogueSystem.UnityUISubtitleControls::panel
	Graphic_t219 * ___panel_1;
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.UnityUISubtitleControls::line
	Text_t212 * ___line_2;
	// UnityEngine.UI.Image PixelCrushers.DialogueSystem.UnityUISubtitleControls::portraitImage
	Image_t237 * ___portraitImage_3;
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.UnityUISubtitleControls::portraitName
	Text_t212 * ___portraitName_4;
	// UnityEngine.UI.Button PixelCrushers.DialogueSystem.UnityUISubtitleControls::continueButton
	Button_t220 * ___continueButton_5;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUISubtitleControls::haveSavedOriginalColor
	bool ___haveSavedOriginalColor_6;
	// UnityEngine.Color PixelCrushers.DialogueSystem.UnityUISubtitleControls::originalColor
	Color_t121  ___originalColor_7;
};
