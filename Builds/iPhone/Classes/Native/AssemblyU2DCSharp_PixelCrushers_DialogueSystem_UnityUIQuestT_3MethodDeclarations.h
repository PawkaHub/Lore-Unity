#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityUIQuestTracker
struct UnityUIQuestTracker_t275;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.QuestState
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestState.h"

// System.Void PixelCrushers.DialogueSystem.UnityUIQuestTracker::.ctor()
extern "C" void UnityUIQuestTracker__ctor_m1042 (UnityUIQuestTracker_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestTracker::Start()
extern "C" void UnityUIQuestTracker_Start_m1043 (UnityUIQuestTracker_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestTracker::OnQuestTrackingEnabled(System.String)
extern "C" void UnityUIQuestTracker_OnQuestTrackingEnabled_m1044 (UnityUIQuestTracker_t275 * __this, String_t* ___quest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestTracker::OnQuestTrackingDisabled(System.String)
extern "C" void UnityUIQuestTracker_OnQuestTrackingDisabled_m1045 (UnityUIQuestTracker_t275 * __this, String_t* ___quest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestTracker::OnConversationEnd(UnityEngine.Transform)
extern "C" void UnityUIQuestTracker_OnConversationEnd_m1046 (UnityUIQuestTracker_t275 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestTracker::UpdateTracker()
extern "C" void UnityUIQuestTracker_UpdateTracker_m1047 (UnityUIQuestTracker_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestTracker::DestroyInstantiatedItems()
extern "C" void UnityUIQuestTracker_DestroyInstantiatedItems_m1048 (UnityUIQuestTracker_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIQuestTracker::InstantiateQuestTrack(System.String)
extern "C" void UnityUIQuestTracker_InstantiateQuestTrack_m1049 (UnityUIQuestTracker_t275 * __this, String_t* ___quest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.UnityUIQuestTracker::GetQuestEntryDescription(System.String)
extern "C" String_t* UnityUIQuestTracker_GetQuestEntryDescription_m1050 (UnityUIQuestTracker_t275 * __this, String_t* ___quest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.UnityUIQuestTracker::GetQuestEntryText(System.String,System.Int32,PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* UnityUIQuestTracker_GetQuestEntryText_m1051 (UnityUIQuestTracker_t275 * __this, String_t* ___quest, int32_t ___entryNum, int32_t ___entryState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
