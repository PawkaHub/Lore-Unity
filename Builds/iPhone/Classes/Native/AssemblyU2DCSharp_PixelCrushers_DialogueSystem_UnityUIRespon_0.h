#pragma once
#include <stdint.h>
// UnityEngine.UI.Graphic
struct Graphic_t219;
// UnityEngine.UI.Image
struct Image_t237;
// UnityEngine.UI.Text
struct Text_t212;
// PixelCrushers.DialogueSystem.UnityUISubtitleControls
struct UnityUISubtitleControls_t227;
// UnityEngine.UI.Slider
struct Slider_t238;
// PixelCrushers.DialogueSystem.UnityUIResponseButton[]
struct UnityUIResponseButtonU5BU5D_t239;
// PixelCrushers.DialogueSystem.UnityUIResponseButton
struct UnityUIResponseButton_t236;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t240;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t241;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t242;
// PixelCrushers.DialogueSystem.UnityUITimer
struct UnityUITimer_t243;
// UnityEngine.Texture2D
struct Texture2D_t90;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.AbstractUIResponseMenuControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUIRespon.h"
// PixelCrushers.DialogueSystem.UnityUIResponseMenuControls
struct  UnityUIResponseMenuControls_t228  : public AbstractUIResponseMenuControls_t244
{
	// UnityEngine.UI.Graphic PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::panel
	Graphic_t219 * ___panel_2;
	// UnityEngine.UI.Image PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::pcImage
	Image_t237 * ___pcImage_3;
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::pcName
	Text_t212 * ___pcName_4;
	// PixelCrushers.DialogueSystem.UnityUISubtitleControls PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::subtitleReminder
	UnityUISubtitleControls_t227 * ___subtitleReminder_5;
	// UnityEngine.UI.Slider PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::timer
	Slider_t238 * ___timer_6;
	// PixelCrushers.DialogueSystem.UnityUIResponseButton[] PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::buttons
	UnityUIResponseButtonU5BU5D_t239* ___buttons_7;
	// PixelCrushers.DialogueSystem.UnityUIResponseButton PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::buttonTemplate
	UnityUIResponseButton_t236 * ___buttonTemplate_8;
	// UnityEngine.UI.Graphic PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::buttonTemplateHolder
	Graphic_t219 * ___buttonTemplateHolder_9;
	// UnityEngine.UI.Scrollbar PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::buttonTemplateScrollbar
	Scrollbar_t240 * ___buttonTemplateScrollbar_10;
	// System.Single PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::buttonTemplateScrollbarResetValue
	float ___buttonTemplateScrollbarResetValue_11;
	// UnityEngine.Events.UnityEvent PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::onContentChanged
	UnityEvent_t241 * ___onContentChanged_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::instantiatedButtons
	List_1_t242 * ___instantiatedButtons_13;
	// PixelCrushers.DialogueSystem.UnityUITimer PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::unityUITimer
	UnityUITimer_t243 * ___unityUITimer_14;
	// UnityEngine.Texture2D PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::pcPortraitTexture
	Texture2D_t90 * ___pcPortraitTexture_15;
	// System.String PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::pcPortraitName
	String_t* ___pcPortraitName_16;
};
