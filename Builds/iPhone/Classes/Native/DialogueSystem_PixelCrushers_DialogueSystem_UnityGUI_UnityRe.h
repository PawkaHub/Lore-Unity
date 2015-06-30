#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
struct GUIControl_t937;
// PixelCrushers.DialogueSystem.UnityGUI.GUILabel
struct GUILabel_t938;
// PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls
struct UnitySubtitleControls_t1064;
// PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar
struct GUIProgressBar_t1032;
// PixelCrushers.DialogueSystem.UnityGUI.GUIButton[]
struct GUIButtonU5BU5D_t1067;
// PixelCrushers.DialogueSystem.UnityGUI.TimerEffect
struct TimerEffect_t1049;
// UnityEngine.Texture2D
struct Texture2D_t90;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.AbstractUIResponseMenuControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUIRespon.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls
struct  UnityResponseMenuControls_t1065  : public AbstractUIResponseMenuControls_t244
{
	// PixelCrushers.DialogueSystem.UnityGUI.GUIControl PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::panel
	GUIControl_t937 * ___panel_2;
	// PixelCrushers.DialogueSystem.UnityGUI.GUILabel PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::pcImage
	GUILabel_t938 * ___pcImage_3;
	// PixelCrushers.DialogueSystem.UnityGUI.GUILabel PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::pcName
	GUILabel_t938 * ___pcName_4;
	// PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::subtitleReminder
	UnitySubtitleControls_t1064 * ___subtitleReminder_5;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::timer
	GUIProgressBar_t1032 * ___timer_6;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIButton[] PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::buttons
	GUIButtonU5BU5D_t1067* ___buttons_7;
	// PixelCrushers.DialogueSystem.UnityGUI.TimerEffect PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::timerEffect
	TimerEffect_t1049 * ___timerEffect_8;
	// UnityEngine.Texture2D PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::pcPortraitTexture
	Texture2D_t90 * ___pcPortraitTexture_9;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::pcPortraitName
	String_t* ___pcPortraitName_10;
};
