#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand
struct QueuedSequencerCommand_t1205;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t20;

// System.Void PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand::.ctor(System.String,System.String[],System.Single,System.String,System.String,System.Boolean)
extern "C" void QueuedSequencerCommand__ctor_m6032 (QueuedSequencerCommand_t1205 * __this, String_t* ___command, StringU5BU5D_t20* ___parameters, float ___startTime, String_t* ___messageToWaitFor, String_t* ___endMessage, bool ___required, const MethodInfo* method) IL2CPP_METHOD_ATTR;
