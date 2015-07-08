#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
struct SequencerCommand_t209;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t675;
// System.String[]
struct StringU5BU5D_t20;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;

// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::.ctor()
extern "C" void SequencerCommand__ctor_m2936 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::get_IsPlaying()
extern "C" bool SequencerCommand_get_IsPlaying_m6578 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::set_IsPlaying(System.Boolean)
extern "C" void SequencerCommand_set_IsPlaying_m6579 (SequencerCommand_t209 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::get_Sequencer()
extern "C" Sequencer_t675 * SequencerCommand_get_Sequencer_m6580 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::set_Sequencer(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void SequencerCommand_set_Sequencer_m6581 (SequencerCommand_t209 * __this, Sequencer_t675 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::get_Parameters()
extern "C" StringU5BU5D_t20* SequencerCommand_get_Parameters_m6582 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::set_Parameters(System.String[])
extern "C" void SequencerCommand_set_Parameters_m6583 (SequencerCommand_t209 * __this, StringU5BU5D_t20* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::get_endMessage()
extern "C" String_t* SequencerCommand_get_endMessage_m6584 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::set_endMessage(System.String)
extern "C" void SequencerCommand_set_endMessage_m6585 (SequencerCommand_t209 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::Initialize(PixelCrushers.DialogueSystem.Sequencer,System.String,System.String[])
extern "C" void SequencerCommand_Initialize_m6586 (SequencerCommand_t209 * __this, Sequencer_t675 * ___sequencer, String_t* ___endMessage, StringU5BU5D_t20* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::Initialize(PixelCrushers.DialogueSystem.Sequencer,System.String[])
extern "C" void SequencerCommand_Initialize_m6587 (SequencerCommand_t209 * __this, Sequencer_t675 * ___sequencer, StringU5BU5D_t20* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::Stop()
extern "C" void SequencerCommand_Stop_m2946 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::GetSubject(System.String,UnityEngine.Transform)
extern "C" Transform_t54 * SequencerCommand_GetSubject_m6588 (SequencerCommand_t209 * __this, String_t* ___specifier, Transform_t54 * ___defaultSubject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::GetSubject(System.Int32,UnityEngine.Transform)
extern "C" Transform_t54 * SequencerCommand_GetSubject_m3758 (SequencerCommand_t209 * __this, int32_t ___i, Transform_t54 * ___defaultSubject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::GetParameter(System.Int32,System.String)
extern "C" String_t* SequencerCommand_GetParameter_m2937 (SequencerCommand_t209 * __this, int32_t ___i, String_t* ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::GetParameterAsFloat(System.Int32,System.Single)
extern "C" float SequencerCommand_GetParameterAsFloat_m6589 (SequencerCommand_t209 * __this, int32_t ___i, float ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::GetParameterAsInt(System.Int32,System.Int32)
extern "C" int32_t SequencerCommand_GetParameterAsInt_m3760 (SequencerCommand_t209 * __this, int32_t ___i, int32_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::GetParameterAsBool(System.Int32,System.Boolean)
extern "C" bool SequencerCommand_GetParameterAsBool_m6590 (SequencerCommand_t209 * __this, int32_t ___i, bool ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::GetParameters()
extern "C" String_t* SequencerCommand_GetParameters_m6591 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand::IsAudioMuted()
extern "C" bool SequencerCommand_IsAudioMuted_m6592 (SequencerCommand_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
