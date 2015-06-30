#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Animator
struct Animator_t214;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequencerCommand.h"
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorLayer
struct  SequencerCommandAnimatorLayer_t893  : public SequencerCommand_t209
{
	// System.Int32 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorLayer::layerIndex
	int32_t ___layerIndex_7;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorLayer::weight
	float ___weight_8;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorLayer::subject
	Transform_t54 * ___subject_9;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorLayer::duration
	float ___duration_10;
	// UnityEngine.Animator PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorLayer::animator
	Animator_t214 * ___animator_11;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorLayer::startTime
	float ___startTime_12;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorLayer::endTime
	float ___endTime_13;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimatorLayer::originalWeight
	float ___originalWeight_14;
};
