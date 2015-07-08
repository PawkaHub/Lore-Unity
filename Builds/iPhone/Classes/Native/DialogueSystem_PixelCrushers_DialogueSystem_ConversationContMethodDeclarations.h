#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConversationController
struct ConversationController_t1352;
// PixelCrushers.DialogueSystem.CharacterInfo
struct CharacterInfo_t685;
// PixelCrushers.DialogueSystem.ConversationModel
struct ConversationModel_t1360;
// PixelCrushers.DialogueSystem.ConversationView
struct ConversationView_t1366;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate
struct IsDialogueEntryValidDelegate_t1353;
// System.Action
struct Action_t250;
// PixelCrushers.DialogueSystem.ConversationState
struct ConversationState_t1355;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1461;
// PixelCrushers.DialogueSystem.SelectedResponseEventArgs
struct SelectedResponseEventArgs_t1460;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t90;

// System.Void PixelCrushers.DialogueSystem.ConversationController::.ctor(PixelCrushers.DialogueSystem.ConversationModel,PixelCrushers.DialogueSystem.ConversationView,System.Boolean,System.Action)
extern "C" void ConversationController__ctor_m5944 (ConversationController_t1352 * __this, ConversationModel_t1360 * ___model, ConversationView_t1366 * ___view, bool ___alwaysForceResponseMenu, Action_t250 * ___endConversationHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationController::get_IsActive()
extern "C" bool ConversationController_get_IsActive_m5945 (ConversationController_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::set_IsActive(System.Boolean)
extern "C" void ConversationController_set_IsActive_m5946 (ConversationController_t1352 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationController::get_ActorInfo()
extern "C" CharacterInfo_t685 * ConversationController_get_ActorInfo_m5947 (ConversationController_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationModel PixelCrushers.DialogueSystem.ConversationController::get_ConversationModel()
extern "C" ConversationModel_t1360 * ConversationController_get_ConversationModel_m5948 (ConversationController_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationView PixelCrushers.DialogueSystem.ConversationController::get_ConversationView()
extern "C" ConversationView_t1366 * ConversationController_get_ConversationView_m5949 (ConversationController_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate PixelCrushers.DialogueSystem.ConversationController::get_IsDialogueEntryValid()
extern "C" IsDialogueEntryValidDelegate_t1353 * ConversationController_get_IsDialogueEntryValid_m5950 (ConversationController_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::set_IsDialogueEntryValid(PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate)
extern "C" void ConversationController_set_IsDialogueEntryValid_m5951 (ConversationController_t1352 * __this, IsDialogueEntryValidDelegate_t1353 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationController::get_ConversantInfo()
extern "C" CharacterInfo_t685 * ConversationController_get_ConversantInfo_m5952 (ConversationController_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::Close()
extern "C" void ConversationController_Close_m5953 (ConversationController_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::GotoState(PixelCrushers.DialogueSystem.ConversationState)
extern "C" void ConversationController_GotoState_m5954 (ConversationController_t1352 * __this, ConversationState_t1355 * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::OnFinishedSubtitle(System.Object,System.EventArgs)
extern "C" void ConversationController_OnFinishedSubtitle_m5955 (ConversationController_t1352 * __this, Object_t * ___sender, EventArgs_t1461 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::OnSelectedResponse(System.Object,PixelCrushers.DialogueSystem.SelectedResponseEventArgs)
extern "C" void ConversationController_OnSelectedResponse_m5956 (ConversationController_t1352 * __this, Object_t * ___sender, SelectedResponseEventArgs_t1460 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::GotoFirstResponse()
extern "C" void ConversationController_GotoFirstResponse_m5957 (ConversationController_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::UpdateResponses()
extern "C" void ConversationController_UpdateResponses_m5958 (ConversationController_t1352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void ConversationController_SetActorPortraitTexture_m5959 (ConversationController_t1352 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
