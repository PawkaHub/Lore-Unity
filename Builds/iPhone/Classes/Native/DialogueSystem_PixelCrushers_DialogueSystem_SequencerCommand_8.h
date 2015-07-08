#pragma once
#include <stdint.h>
// UnityEngine.AudioSource
struct AudioSource_t262;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t1482;
// UnityEngine.WWW
struct WWW_t1483;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequencerCommand.h"
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAudioWWW/State
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequencerCommand_7.h"
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAudioWWW
struct  SequencerCommandAudioWWW_t1484  : public SequencerCommand_t209
{
	// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAudioWWW/State PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAudioWWW::state
	int32_t ___state_6;
	// UnityEngine.AudioSource PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAudioWWW::audioSource
	AudioSource_t262 * ___audioSource_7;
	// System.Collections.Generic.Queue`1<System.String> PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAudioWWW::audioURLs
	Queue_1_t1482 * ___audioURLs_8;
	// UnityEngine.WWW PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAudioWWW::www
	WWW_t1483 * ___www_9;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandAudioWWW::stopTime
	float ___stopTime_10;
};
