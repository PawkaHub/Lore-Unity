#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityGUI.GUIImageParams
struct GUIImageParams_t1605;
// UnityEngine.AudioClip
struct AudioClip_t261;
// PixelCrushers.DialogueSystem.InputTrigger
struct InputTrigger_t1500;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIVisi.h"
// PixelCrushers.DialogueSystem.UnityGUI.GUIButton
struct  GUIButton_t1522  : public GUIVisibleControl_t1606
{
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIButton::clickable
	bool ___clickable_28;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIImageParams PixelCrushers.DialogueSystem.UnityGUI.GUIButton::disabled
	GUIImageParams_t1605 * ___disabled_29;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIImageParams PixelCrushers.DialogueSystem.UnityGUI.GUIButton::normal
	GUIImageParams_t1605 * ___normal_30;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIImageParams PixelCrushers.DialogueSystem.UnityGUI.GUIButton::hover
	GUIImageParams_t1605 * ___hover_31;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIImageParams PixelCrushers.DialogueSystem.UnityGUI.GUIButton::pressed
	GUIImageParams_t1605 * ___pressed_32;
	// UnityEngine.AudioClip PixelCrushers.DialogueSystem.UnityGUI.GUIButton::hoverSound
	AudioClip_t261 * ___hoverSound_33;
	// UnityEngine.AudioClip PixelCrushers.DialogueSystem.UnityGUI.GUIButton::clickSound
	AudioClip_t261 * ___clickSound_34;
	// PixelCrushers.DialogueSystem.InputTrigger PixelCrushers.DialogueSystem.UnityGUI.GUIButton::trigger
	InputTrigger_t1500 * ___trigger_35;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.GUIButton::message
	String_t* ___message_36;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.GUIButton::parameter
	String_t* ___parameter_37;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.UnityGUI.GUIButton::target
	Transform_t54 * ___target_38;
	// System.Object PixelCrushers.DialogueSystem.UnityGUI.GUIButton::data
	Object_t * ___data_39;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIButton::isHovered
	bool ___isHovered_40;
};
