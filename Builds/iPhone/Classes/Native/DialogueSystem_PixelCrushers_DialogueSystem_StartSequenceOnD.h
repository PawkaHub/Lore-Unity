#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ActOnDialogueEvent/Action
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve.h"
// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction
struct  SequenceAction_t990  : public Action_t955
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction::actor
	Transform_t54 * ___actor_1;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction::otherParticipant
	Transform_t54 * ___otherParticipant_2;
	// System.String PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction::sequence
	String_t* ___sequence_3;
};
