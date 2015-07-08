#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Animation
struct Animation_t298;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequencerCommand.h"
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimation
struct  SequencerCommandAnimation_t1475  : public SequencerCommand_t209
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimation::subject
	Transform_t54 * ___subject_6;
	// System.Int32 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimation::nextAnimationIndex
	int32_t ___nextAnimationIndex_7;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimation::stopTime
	float ___stopTime_8;
	// UnityEngine.Animation PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAnimation::anim
	Animation_t298 * ___anim_9;
};
