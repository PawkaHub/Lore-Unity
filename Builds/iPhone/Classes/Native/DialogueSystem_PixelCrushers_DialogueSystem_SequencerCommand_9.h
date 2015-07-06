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
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCamera
struct  SequencerCommandCamera_t1226  : public SequencerCommand_t209
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCamera::subject
	Transform_t54 * ___subject_7;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCamera::angleTransform
	Transform_t54 * ___angleTransform_8;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCamera::cameraTransform
	Transform_t54 * ___cameraTransform_9;
	// System.Boolean PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCamera::isLocalTransform
	bool ___isLocalTransform_10;
	// UnityEngine.Quaternion PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCamera::targetRotation
	Quaternion_t69  ___targetRotation_11;
	// UnityEngine.Vector3 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCamera::targetPosition
	Vector3_t53  ___targetPosition_12;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCamera::duration
	float ___duration_13;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCamera::startTime
	float ___startTime_14;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCamera::endTime
	float ___endTime_15;
	// UnityEngine.Quaternion PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCamera::originalRotation
	Quaternion_t69  ___originalRotation_16;
	// UnityEngine.Vector3 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCamera::originalPosition
	Vector3_t53  ___originalPosition_17;
};
