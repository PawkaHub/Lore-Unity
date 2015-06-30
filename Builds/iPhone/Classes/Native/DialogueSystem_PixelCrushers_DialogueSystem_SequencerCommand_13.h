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
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLookAt
struct  SequencerCommandLookAt_t907  : public SequencerCommand_t209
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLookAt::target
	Transform_t54 * ___target_7;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLookAt::subject
	Transform_t54 * ___subject_8;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLookAt::duration
	float ___duration_9;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLookAt::startTime
	float ___startTime_10;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLookAt::endTime
	float ___endTime_11;
	// UnityEngine.Quaternion PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLookAt::originalRotation
	Quaternion_t69  ___originalRotation_12;
	// UnityEngine.Quaternion PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLookAt::targetRotation
	Quaternion_t69  ___targetRotation_13;
	// UnityEngine.Vector3 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandLookAt::targetPosition
	Vector3_t53  ___targetPosition_14;
};
