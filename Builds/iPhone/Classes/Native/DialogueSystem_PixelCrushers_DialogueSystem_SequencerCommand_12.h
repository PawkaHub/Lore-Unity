#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequencerCommand.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLiveCamera
struct  SequencerCommandLiveCamera_t1230  : public SequencerCommand_t209
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLiveCamera::subject
	Transform_t54 * ___subject_7;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLiveCamera::angleTransform
	Transform_t54 * ___angleTransform_8;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLiveCamera::cameraTransform
	Transform_t54 * ___cameraTransform_9;
	// System.Boolean PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLiveCamera::isLocalTransform
	bool ___isLocalTransform_10;
	// UnityEngine.Quaternion PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLiveCamera::targetRotation
	Quaternion_t69  ___targetRotation_11;
	// UnityEngine.Vector3 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLiveCamera::targetPosition
	Vector3_t53  ___targetPosition_12;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLiveCamera::duration
	float ___duration_13;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLiveCamera::startTime
	float ___startTime_14;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLiveCamera::endTime
	float ___endTime_15;
	// UnityEngine.Quaternion PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLiveCamera::originalRotation
	Quaternion_t69  ___originalRotation_16;
	// UnityEngine.Vector3 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLiveCamera::originalPosition
	Vector3_t53  ___originalPosition_17;
	// System.Boolean PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLiveCamera::isOriginal
	bool ___isOriginal_18;
};
