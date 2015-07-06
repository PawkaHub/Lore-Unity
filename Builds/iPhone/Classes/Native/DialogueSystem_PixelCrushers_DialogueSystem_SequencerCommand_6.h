#pragma once
#include <stdint.h>
// UnityEngine.AudioSource
struct AudioSource_t262;
// UnityEngine.AudioClip
struct AudioClip_t261;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequencerCommand.h"
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAudioWait
struct  SequencerCommandAudioWait_t1221  : public SequencerCommand_t209
{
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAudioWait::stopTime
	float ___stopTime_6;
	// UnityEngine.AudioSource PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAudioWait::audioSource
	AudioSource_t262 * ___audioSource_7;
	// System.Int32 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAudioWait::nextClipIndex
	int32_t ___nextClipIndex_8;
	// UnityEngine.AudioClip PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAudioWait::lastClip
	AudioClip_t261 * ___lastClip_9;
};
