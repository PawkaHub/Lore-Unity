#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t20;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand
struct  QueuedSequencerCommand_t1464  : public Object_t
{
	// System.String PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand::command
	String_t* ___command_0;
	// System.String[] PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand::parameters
	StringU5BU5D_t20* ___parameters_1;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand::startTime
	float ___startTime_2;
	// System.String PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand::messageToWaitFor
	String_t* ___messageToWaitFor_3;
	// System.String PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand::endMessage
	String_t* ___endMessage_4;
	// System.Boolean PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand::required
	bool ___required_5;
};
