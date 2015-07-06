#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t49;
// PixelCrushers.DialogueSystem.DisplaySettings/LocalizationSettings
struct LocalizationSettings_t638;
// PixelCrushers.DialogueSystem.DisplaySettings/SubtitleSettings
struct SubtitleSettings_t627;
// PixelCrushers.DialogueSystem.DisplaySettings/CameraSettings
struct CameraSettings_t1240;
// PixelCrushers.DialogueSystem.DisplaySettings/InputSettings
struct InputSettings_t1242;
// PixelCrushers.DialogueSystem.DisplaySettings/AlertSettings
struct AlertSettings_t1243;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.DisplaySettings
struct  DisplaySettings_t626  : public Object_t
{
	// UnityEngine.GameObject PixelCrushers.DialogueSystem.DisplaySettings::dialogueUI
	GameObject_t49 * ___dialogueUI_0;
	// PixelCrushers.DialogueSystem.DisplaySettings/LocalizationSettings PixelCrushers.DialogueSystem.DisplaySettings::localizationSettings
	LocalizationSettings_t638 * ___localizationSettings_1;
	// PixelCrushers.DialogueSystem.DisplaySettings/SubtitleSettings PixelCrushers.DialogueSystem.DisplaySettings::subtitleSettings
	SubtitleSettings_t627 * ___subtitleSettings_2;
	// PixelCrushers.DialogueSystem.DisplaySettings/CameraSettings PixelCrushers.DialogueSystem.DisplaySettings::cameraSettings
	CameraSettings_t1240 * ___cameraSettings_3;
	// PixelCrushers.DialogueSystem.DisplaySettings/InputSettings PixelCrushers.DialogueSystem.DisplaySettings::inputSettings
	InputSettings_t1242 * ___inputSettings_4;
	// PixelCrushers.DialogueSystem.DisplaySettings/AlertSettings PixelCrushers.DialogueSystem.DisplaySettings::alertSettings
	AlertSettings_t1243 * ___alertSettings_5;
};
