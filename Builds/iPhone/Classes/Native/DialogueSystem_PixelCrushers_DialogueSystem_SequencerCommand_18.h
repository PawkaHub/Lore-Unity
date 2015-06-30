#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t298;
// UnityEngine.AudioSource
struct AudioSource_t262;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequencerCommand.h"
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandVoice
struct  SequencerCommandVoice_t912  : public SequencerCommand_t209
{
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandVoice::stopTime
	float ___stopTime_6;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandVoice::subject
	Transform_t54 * ___subject_7;
	// System.String PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandVoice::finalClipName
	String_t* ___finalClipName_8;
	// UnityEngine.Animation PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandVoice::anim
	Animation_t298 * ___anim_9;
	// UnityEngine.AudioSource PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandVoice::audioSource
	AudioSource_t262 * ___audioSource_10;
};
