#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequencerCommand.h"
// PixelCrushers.DialogueSystem.FieldType
#include "DialogueSystem_PixelCrushers_DialogueSystem_FieldType.h"
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandQTE
struct  SequencerCommandQTE_t909  : public SequencerCommand_t209
{
	// System.Int32 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandQTE::index
	int32_t ___index_6;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandQTE::stopTime
	float ___stopTime_7;
	// System.String PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandQTE::button
	String_t* ___button_8;
	// System.String PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandQTE::variableName
	String_t* ___variableName_9;
	// System.String PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandQTE::variableQTEValue
	String_t* ___variableQTEValue_10;
	// PixelCrushers.DialogueSystem.FieldType PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandQTE::variableType
	int32_t ___variableType_11;
};
