#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConversationController
struct ConversationController_t1093;
// PixelCrushers.DialogueSystem.CharacterInfo
struct CharacterInfo_t628;
// PixelCrushers.DialogueSystem.ConversationModel
struct ConversationModel_t1101;
// PixelCrushers.DialogueSystem.ConversationView
struct ConversationView_t1107;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate
struct IsDialogueEntryValidDelegate_t1094;
// System.Action
struct Action_t250;
// PixelCrushers.DialogueSystem.ConversationState
struct ConversationState_t1096;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1202;
// PixelCrushers.DialogueSystem.SelectedResponseEventArgs
struct SelectedResponseEventArgs_t1201;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t90;

// System.Void PixelCrushers.DialogueSystem.ConversationController::.ctor(PixelCrushers.DialogueSystem.ConversationModel,PixelCrushers.DialogueSystem.ConversationView,System.Boolean,System.Action)
extern "C" void ConversationController__ctor_m5492 (ConversationController_t1093 * __this, ConversationModel_t1101 * ___model, ConversationView_t1107 * ___view, bool ___alwaysForceResponseMenu, Action_t250 * ___endConversationHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationController::get_IsActive()
extern "C" bool ConversationController_get_IsActive_m5493 (ConversationController_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::set_IsActive(System.Boolean)
extern "C" void ConversationController_set_IsActive_m5494 (ConversationController_t1093 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationController::get_ActorInfo()
extern "C" CharacterInfo_t628 * ConversationController_get_ActorInfo_m5495 (ConversationController_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationModel PixelCrushers.DialogueSystem.ConversationController::get_ConversationModel()
extern "C" ConversationModel_t1101 * ConversationController_get_ConversationModel_m5496 (ConversationController_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationView PixelCrushers.DialogueSystem.ConversationController::get_ConversationView()
extern "C" ConversationView_t1107 * ConversationController_get_ConversationView_m5497 (ConversationController_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate PixelCrushers.DialogueSystem.ConversationController::get_IsDialogueEntryValid()
extern "C" IsDialogueEntryValidDelegate_t1094 * ConversationController_get_IsDialogueEntryValid_m5498 (ConversationController_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::set_IsDialogueEntryValid(PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate)
extern "C" void ConversationController_set_IsDialogueEntryValid_m5499 (ConversationController_t1093 * __this, IsDialogueEntryValidDelegate_t1094 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationController::get_ConversantInfo()
extern "C" CharacterInfo_t628 * ConversationController_get_ConversantInfo_m5500 (ConversationController_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::Close()
extern "C" void ConversationController_Close_m5501 (ConversationController_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::GotoState(PixelCrushers.DialogueSystem.ConversationState)
extern "C" void ConversationController_GotoState_m5502 (ConversationController_t1093 * __this, ConversationState_t1096 * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::OnFinishedSubtitle(System.Object,System.EventArgs)
extern "C" void ConversationController_OnFinishedSubtitle_m5503 (ConversationController_t1093 * __this, Object_t * ___sender, EventArgs_t1202 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::OnSelectedResponse(System.Object,PixelCrushers.DialogueSystem.SelectedResponseEventArgs)
extern "C" void ConversationController_OnSelectedResponse_m5504 (ConversationController_t1093 * __this, Object_t * ___sender, SelectedResponseEventArgs_t1201 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::GotoFirstResponse()
extern "C" void ConversationController_GotoFirstResponse_m5505 (ConversationController_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::UpdateResponses()
extern "C" void ConversationController_UpdateResponses_m5506 (ConversationController_t1093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void ConversationController_SetActorPortraitTexture_m5507 (ConversationController_t1093 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
