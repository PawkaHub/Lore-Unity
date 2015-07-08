#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.Condition
struct Condition_t203;
// PixelCrushers.DialogueSystem.DialogueEventStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueEventSta.h"
// PixelCrushers.DialogueSystem.SequenceStarter
struct  SequenceStarter_t1600  : public DialogueEventStarter_t1580
{
	// System.String PixelCrushers.DialogueSystem.SequenceStarter::sequence
	String_t* ___sequence_3;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequenceStarter::speaker
	Transform_t54 * ___speaker_4;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequenceStarter::listener
	Transform_t54 * ___listener_5;
	// PixelCrushers.DialogueSystem.Condition PixelCrushers.DialogueSystem.SequenceStarter::condition
	Condition_t203 * ___condition_6;
	// System.Boolean PixelCrushers.DialogueSystem.SequenceStarter::tryingToStart
	bool ___tryingToStart_7;
};
