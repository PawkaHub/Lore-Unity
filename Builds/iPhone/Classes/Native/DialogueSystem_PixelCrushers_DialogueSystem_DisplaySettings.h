#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t49;
// PixelCrushers.DialogueSystem.DisplaySettings/LocalizationSettings
struct LocalizationSettings_t617;
// PixelCrushers.DialogueSystem.DisplaySettings/SubtitleSettings
struct SubtitleSettings_t606;
// PixelCrushers.DialogueSystem.DisplaySettings/CameraSettings
struct CameraSettings_t916;
// PixelCrushers.DialogueSystem.DisplaySettings/InputSettings
struct InputSettings_t918;
// PixelCrushers.DialogueSystem.DisplaySettings/AlertSettings
struct AlertSettings_t919;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.DisplaySettings
struct  DisplaySettings_t605  : public Object_t
{
	// UnityEngine.GameObject PixelCrushers.DialogueSystem.DisplaySettings::dialogueUI
	GameObject_t49 * ___dialogueUI_0;
	// PixelCrushers.DialogueSystem.DisplaySettings/LocalizationSettings PixelCrushers.DialogueSystem.DisplaySettings::localizationSettings
	LocalizationSettings_t617 * ___localizationSettings_1;
	// PixelCrushers.DialogueSystem.DisplaySettings/SubtitleSettings PixelCrushers.DialogueSystem.DisplaySettings::subtitleSettings
	SubtitleSettings_t606 * ___subtitleSettings_2;
	// PixelCrushers.DialogueSystem.DisplaySettings/CameraSettings PixelCrushers.DialogueSystem.DisplaySettings::cameraSettings
	CameraSettings_t916 * ___cameraSettings_3;
	// PixelCrushers.DialogueSystem.DisplaySettings/InputSettings PixelCrushers.DialogueSystem.DisplaySettings::inputSettings
	InputSettings_t918 * ___inputSettings_4;
	// PixelCrushers.DialogueSystem.DisplaySettings/AlertSettings PixelCrushers.DialogueSystem.DisplaySettings::alertSettings
	AlertSettings_t919 * ___alertSettings_5;
};
