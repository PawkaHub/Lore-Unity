#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.ITextFieldUI
struct ITextFieldUI_t605;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequencerCommand.h"
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandTextInput
struct  SequencerCommandTextInput_t1494  : public SequencerCommand_t209
{
	// PixelCrushers.DialogueSystem.ITextFieldUI PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandTextInput::textFieldUI
	Object_t * ___textFieldUI_6;
	// System.String PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandTextInput::variableName
	String_t* ___variableName_7;
	// System.Boolean PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandTextInput::acceptedText
	bool ___acceptedText_8;
};
