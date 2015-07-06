#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Animator
struct Animator_t214;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequencerCommand.h"
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorFloat
struct  SequencerCommandAnimatorFloat_t1217  : public SequencerCommand_t209
{
	// System.Int32 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorFloat::animatorParameterHash
	int32_t ___animatorParameterHash_7;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorFloat::targetValue
	float ___targetValue_8;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorFloat::subject
	Transform_t54 * ___subject_9;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorFloat::duration
	float ___duration_10;
	// UnityEngine.Animator PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorFloat::animator
	Animator_t214 * ___animator_11;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorFloat::startTime
	float ___startTime_12;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorFloat::endTime
	float ___endTime_13;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorFloat::originalValue
	float ___originalValue_14;
};
