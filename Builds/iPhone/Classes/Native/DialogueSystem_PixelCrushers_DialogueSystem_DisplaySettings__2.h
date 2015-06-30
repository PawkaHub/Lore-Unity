#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t356;
// UnityEngine.GameObject
struct GameObject_t49;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.EntrytagFormat
#include "DialogueSystem_PixelCrushers_DialogueSystem_EntrytagFormat.h"
// PixelCrushers.DialogueSystem.DisplaySettings/CameraSettings
struct  CameraSettings_t916  : public Object_t
{
	// UnityEngine.Camera PixelCrushers.DialogueSystem.DisplaySettings/CameraSettings::sequencerCamera
	Camera_t356 * ___sequencerCamera_0;
	// UnityEngine.GameObject PixelCrushers.DialogueSystem.DisplaySettings/CameraSettings::alternateCameraObject
	GameObject_t49 * ___alternateCameraObject_1;
	// UnityEngine.GameObject PixelCrushers.DialogueSystem.DisplaySettings/CameraSettings::cameraAngles
	GameObject_t49 * ___cameraAngles_2;
	// System.String PixelCrushers.DialogueSystem.DisplaySettings/CameraSettings::defaultSequence
	String_t* ___defaultSequence_3;
	// PixelCrushers.DialogueSystem.EntrytagFormat PixelCrushers.DialogueSystem.DisplaySettings/CameraSettings::entrytagFormat
	int32_t ___entrytagFormat_4;
	// System.Boolean PixelCrushers.DialogueSystem.DisplaySettings/CameraSettings::disableInternalSequencerCommands
	bool ___disableInternalSequencerCommands_5;
};
