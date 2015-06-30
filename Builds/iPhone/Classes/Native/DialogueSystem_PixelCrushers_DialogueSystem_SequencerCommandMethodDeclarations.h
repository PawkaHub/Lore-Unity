#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
struct SequencerCommand_t209;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t597;
// System.String[]
struct StringU5BU5D_t20;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;

// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::.ctor()
extern "C" void SequencerCommand__ctor_m2677 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::get_IsPlaying()
extern "C" bool SequencerCommand_get_IsPlaying_m4282 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::set_IsPlaying(System.Boolean)
extern "C" void SequencerCommand_set_IsPlaying_m4283 (SequencerCommand_t209 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::get_Sequencer()
extern "C" Sequencer_t597 * SequencerCommand_get_Sequencer_m4284 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::set_Sequencer(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void SequencerCommand_set_Sequencer_m4285 (SequencerCommand_t209 * __this, Sequencer_t597 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::get_Parameters()
extern "C" StringU5BU5D_t20* SequencerCommand_get_Parameters_m4286 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::set_Parameters(System.String[])
extern "C" void SequencerCommand_set_Parameters_m4287 (SequencerCommand_t209 * __this, StringU5BU5D_t20* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::get_endMessage()
extern "C" String_t* SequencerCommand_get_endMessage_m4288 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::set_endMessage(System.String)
extern "C" void SequencerCommand_set_endMessage_m4289 (SequencerCommand_t209 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::Initialize(PixelCrushers.DialogueSystem.Sequencer,System.String,System.String[])
extern "C" void SequencerCommand_Initialize_m4290 (SequencerCommand_t209 * __this, Sequencer_t597 * ___sequencer, String_t* ___endMessage, StringU5BU5D_t20* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::Initialize(PixelCrushers.DialogueSystem.Sequencer,System.String[])
extern "C" void SequencerCommand_Initialize_m4291 (SequencerCommand_t209 * __this, Sequencer_t597 * ___sequencer, StringU5BU5D_t20* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::Stop()
extern "C" void SequencerCommand_Stop_m2687 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::GetSubject(System.String,UnityEngine.Transform)
extern "C" Transform_t54 * SequencerCommand_GetSubject_m4292 (SequencerCommand_t209 * __this, String_t* ___specifier, Transform_t54 * ___defaultSubject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::GetSubject(System.Int32,UnityEngine.Transform)
extern "C" Transform_t54 * SequencerCommand_GetSubject_m4293 (SequencerCommand_t209 * __this, int32_t ___i, Transform_t54 * ___defaultSubject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::GetParameter(System.Int32,System.String)
extern "C" String_t* SequencerCommand_GetParameter_m2678 (SequencerCommand_t209 * __this, int32_t ___i, String_t* ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::GetParameterAsFloat(System.Int32,System.Single)
extern "C" float SequencerCommand_GetParameterAsFloat_m4294 (SequencerCommand_t209 * __this, int32_t ___i, float ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::GetParameterAsInt(System.Int32,System.Int32)
extern "C" int32_t SequencerCommand_GetParameterAsInt_m4295 (SequencerCommand_t209 * __this, int32_t ___i, int32_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::GetParameterAsBool(System.Int32,System.Boolean)
extern "C" bool SequencerCommand_GetParameterAsBool_m4296 (SequencerCommand_t209 * __this, int32_t ___i, bool ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::GetParameters()
extern "C" String_t* SequencerCommand_GetParameters_m4297 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::IsAudioMuted()
extern "C" bool SequencerCommand_IsAudioMuted_m4298 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
