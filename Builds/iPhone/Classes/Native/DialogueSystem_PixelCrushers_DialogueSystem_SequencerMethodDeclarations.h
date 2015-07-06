#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t618;
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.Camera
struct Camera_t356;
// UnityEngine.Transform
struct Transform_t54;
// System.String
struct String_t;
// System.Action
struct Action_t250;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.String[]
struct StringU5BU5D_t20;
// System.Type
struct Type_t;
// PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand
struct QueuedSequencerCommand_t1205;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
struct SequencerCommand_t209;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void PixelCrushers.DialogueSystem.Sequencer::.ctor()
extern "C" void Sequencer__ctor_m6051 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::.cctor()
extern "C" void Sequencer__cctor_m6052 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::add_FinishedSequenceHandler(System.Action)
extern "C" void Sequencer_add_FinishedSequenceHandler_m6053 (Sequencer_t618 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::remove_FinishedSequenceHandler(System.Action)
extern "C" void Sequencer_remove_FinishedSequenceHandler_m6054 (Sequencer_t618 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::get_IsPlaying()
extern "C" bool Sequencer_get_IsPlaying_m6055 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PixelCrushers.DialogueSystem.Sequencer::get_CameraAngles()
extern "C" GameObject_t49 * Sequencer_get_CameraAngles_m6056 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera PixelCrushers.DialogueSystem.Sequencer::get_SequencerCamera()
extern "C" Camera_t356 * Sequencer_get_SequencerCamera_m6057 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.Sequencer::get_SequencerCameraTransform()
extern "C" Transform_t54 * Sequencer_get_SequencerCameraTransform_m6058 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.Sequencer::get_Speaker()
extern "C" Transform_t54 * Sequencer_get_Speaker_m6059 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.Sequencer::get_Listener()
extern "C" Transform_t54 * Sequencer_get_Listener_m6060 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PixelCrushers.DialogueSystem.Sequencer::get_OriginalCameraPosition()
extern "C" Vector3_t53  Sequencer_get_OriginalCameraPosition_m6061 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion PixelCrushers.DialogueSystem.Sequencer::get_OriginalCameraRotation()
extern "C" Quaternion_t69  Sequencer_get_OriginalCameraRotation_m6062 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Sequencer::get_entrytag()
extern "C" String_t* Sequencer_get_entrytag_m6063 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::set_entrytag(System.String)
extern "C" void Sequencer_set_entrytag_m6064 (Sequencer_t618 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::Message(System.String)
extern "C" void Sequencer_Message_m2753 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::UseCamera(UnityEngine.Camera,UnityEngine.GameObject)
extern "C" void Sequencer_UseCamera_m6065 (Sequencer_t618 * __this, Camera_t356 * ___sequencerCamera, GameObject_t49 * ___cameraAngles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::UseCamera(UnityEngine.Camera,UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" void Sequencer_UseCamera_m6066 (Sequencer_t618 * __this, Camera_t356 * ___sequencerCamera, GameObject_t49 * ___alternateSequencerCameraObject, GameObject_t49 * ___cameraAngles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::GetCameraAngles()
extern "C" void Sequencer_GetCameraAngles_m6067 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::GetCamera()
extern "C" void Sequencer_GetCamera_m6068 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::DestroyCamera()
extern "C" void Sequencer_DestroyCamera_m6069 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.Sequencer::RestoreCamera()
extern "C" Object_t * Sequencer_RestoreCamera_m6070 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::SwitchCamera(UnityEngine.Camera)
extern "C" void Sequencer_SwitchCamera_m6071 (Sequencer_t618 * __this, Camera_t356 * ___newCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::TakeCameraControl()
extern "C" void Sequencer_TakeCameraControl_m6072 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::ReleaseCameraControl()
extern "C" void Sequencer_ReleaseCameraControl_m6073 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::Open()
extern "C" void Sequencer_Open_m6074 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::Close()
extern "C" void Sequencer_Close_m6075 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::OnDestroy()
extern "C" void Sequencer_OnDestroy_m6076 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::Update()
extern "C" void Sequencer_Update_m6077 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::FinishSequence()
extern "C" void Sequencer_FinishSequence_m6078 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::SetParticipants(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void Sequencer_SetParticipants_m6079 (Sequencer_t618 * __this, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::InformParticipants(System.String)
extern "C" void Sequencer_InformParticipants_m6080 (Sequencer_t618 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::PlaySequence(System.String)
extern "C" void Sequencer_PlaySequence_m6081 (Sequencer_t618 * __this, String_t* ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::PlaySequence(System.String,System.Boolean,System.Boolean)
extern "C" void Sequencer_PlaySequence_m6082 (Sequencer_t618 * __this, String_t* ___sequence, bool ___informParticipants, bool ___destroyWhenDone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean,System.Boolean)
extern "C" void Sequencer_PlaySequence_m6083 (Sequencer_t618 * __this, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, bool ___informParticipants, bool ___destroyWhenDone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::PlayCommand(System.String,System.Boolean,System.Single,System.String,System.String,System.String[])
extern "C" void Sequencer_PlayCommand_m6084 (Sequencer_t618 * __this, String_t* ___commandName, bool ___required, float ___time, String_t* ___message, String_t* ___endMessage, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::IsTimePaused()
extern "C" bool Sequencer_IsTimePaused_m6085 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::ActivateCommand(System.String,System.String,System.String[])
extern "C" void Sequencer_ActivateCommand_m6086 (Sequencer_t618 * __this, String_t* ___commandName, String_t* ___endMessage, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type PixelCrushers.DialogueSystem.Sequencer::FindSequencerCommandType(System.String)
extern "C" Type_t * Sequencer_FindSequencerCommandType_m6087 (Sequencer_t618 * __this, String_t* ___commandName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type PixelCrushers.DialogueSystem.Sequencer::FindSequencerCommandType(System.String,System.String)
extern "C" Type_t * Sequencer_FindSequencerCommandType_m6088 (Sequencer_t618 * __this, String_t* ___commandName, String_t* ___assemblyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type PixelCrushers.DialogueSystem.Sequencer::FindSequencerCommandType(System.String,System.String,System.String)
extern "C" Type_t * Sequencer_FindSequencerCommandType_m6089 (Sequencer_t618 * __this, String_t* ___namespacePrefix, String_t* ___commandName, String_t* ___assemblyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.Sequencer::SendTimedSequencerMessage(System.String,System.Single)
extern "C" Object_t * Sequencer_SendTimedSequencerMessage_m6090 (Sequencer_t618 * __this, String_t* ___endMessage, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::ActivateCommand(PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand)
extern "C" void Sequencer_ActivateCommand_m6091 (Sequencer_t618 * __this, QueuedSequencerCommand_t1205 * ___queuedCommand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::CheckQueuedCommands()
extern "C" void Sequencer_CheckQueuedCommands_m6092 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::OnSequencerMessage(System.String)
extern "C" void Sequencer_OnSequencerMessage_m6093 (Sequencer_t618 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::CheckActiveCommands()
extern "C" void Sequencer_CheckActiveCommands_m6094 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::Stop()
extern "C" void Sequencer_Stop_m6095 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::StopQueued()
extern "C" void Sequencer_StopQueued_m6096 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::StopActive()
extern "C" void Sequencer_StopActive_m6097 (Sequencer_t618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleCommandInternally(System.String,System.String[],System.Single&)
extern "C" bool Sequencer_HandleCommandInternally_m6098 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, float* ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::TryHandleCameraInternally(System.String,System.String[])
extern "C" bool Sequencer_TryHandleCameraInternally_m6099 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleAnimationInternally(System.String,System.String[],System.Single&)
extern "C" bool Sequencer_HandleAnimationInternally_m6100 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, float* ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleAnimatorControllerInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleAnimatorControllerInternally_m6101 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::TryHandleAnimatorLayerInternally(System.String,System.String[])
extern "C" bool Sequencer_TryHandleAnimatorLayerInternally_m6102 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleAnimatorBoolInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleAnimatorBoolInternally_m6103 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleAnimatorIntInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleAnimatorIntInternally_m6104 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::TryHandleAnimatorFloatInternally(System.String,System.String[])
extern "C" bool Sequencer_TryHandleAnimatorFloatInternally_m6105 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleAnimatorTriggerInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleAnimatorTriggerInternally_m6106 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleAnimatorPlayInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleAnimatorPlayInternally_m6107 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleAudioInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleAudioInternally_m6108 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::TryHandleMoveToInternally(System.String,System.String[])
extern "C" bool Sequencer_TryHandleMoveToInternally_m6109 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::TryHandleLookAtInternally(System.String,System.String[])
extern "C" bool Sequencer_TryHandleLookAtInternally_m6110 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::DoLookAt(UnityEngine.Transform,UnityEngine.Vector3,System.Boolean)
extern "C" void Sequencer_DoLookAt_m6111 (Sequencer_t618 * __this, Transform_t54 * ___subject, Vector3_t53  ___position, bool ___yAxisOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleSendMessageInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleSendMessageInternally_m6112 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleSetActiveInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleSetActiveInternally_m6113 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleSetEnabledInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleSetEnabledInternally_m6114 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleSetPortraitInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleSetPortraitInternally_m6115 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleShowAlertInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleShowAlertInternally_m6116 (Sequencer_t618 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::<CheckActiveCommands>m__30(PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand)
extern "C" bool Sequencer_U3CCheckActiveCommandsU3Em__30_m6117 (Object_t * __this /* static, unused */, SequencerCommand_t209 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
