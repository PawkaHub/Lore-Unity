#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequencerCommand.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandMoveTo
struct  SequencerCommandMoveTo_t1491  : public SequencerCommand_t209
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandMoveTo::target
	Transform_t54 * ___target_7;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandMoveTo::subject
	Transform_t54 * ___subject_8;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandMoveTo::duration
	float ___duration_9;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandMoveTo::startTime
	float ___startTime_10;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandMoveTo::endTime
	float ___endTime_11;
	// UnityEngine.Vector3 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandMoveTo::originalPosition
	Vector3_t53  ___originalPosition_12;
	// UnityEngine.Quaternion PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandMoveTo::originalRotation
	Quaternion_t69  ___originalRotation_13;
};
