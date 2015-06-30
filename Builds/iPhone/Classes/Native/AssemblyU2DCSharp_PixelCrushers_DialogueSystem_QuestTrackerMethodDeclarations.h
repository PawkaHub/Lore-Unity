#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.QuestTracker
struct QuestTracker_t308;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.QuestState
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestState.h"

// System.Void PixelCrushers.DialogueSystem.QuestTracker::.ctor()
extern "C" void QuestTracker__ctor_m1186 (QuestTracker_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestTracker::Start()
extern "C" void QuestTracker_Start_m1187 (QuestTracker_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.QuestTracker::UpdateTrackerAfterOneFrame()
extern "C" Object_t * QuestTracker_UpdateTrackerAfterOneFrame_m1188 (QuestTracker_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestTracker::OnQuestTrackingEnabled(System.String)
extern "C" void QuestTracker_OnQuestTrackingEnabled_m1189 (QuestTracker_t308 * __this, String_t* ___quest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestTracker::OnQuestTrackingDisabled(System.String)
extern "C" void QuestTracker_OnQuestTrackingDisabled_m1190 (QuestTracker_t308 * __this, String_t* ___quest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestTracker::OnConversationEnd(UnityEngine.Transform)
extern "C" void QuestTracker_OnConversationEnd_m1191 (QuestTracker_t308 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestTracker::UpdateTracker()
extern "C" void QuestTracker_UpdateTracker_m1192 (QuestTracker_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestTracker::AddQuestTitle(System.String)
extern "C" void QuestTracker_AddQuestTitle_m1193 (QuestTracker_t308 * __this, String_t* ___quest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestTracker::AddQuestEntries(System.String)
extern "C" void QuestTracker_AddQuestEntries_m1194 (QuestTracker_t308 * __this, String_t* ___quest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestTracker::GetQuestEntryText(System.String,System.Int32,PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* QuestTracker_GetQuestEntryText_m1195 (QuestTracker_t308 * __this, String_t* ___quest, int32_t ___entryNum, int32_t ___entryState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestTracker::GetTitleStyleName(PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* QuestTracker_GetTitleStyleName_m1196 (QuestTracker_t308 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestTracker::GetEntryStyleName(PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* QuestTracker_GetEntryStyleName_m1197 (QuestTracker_t308 * __this, int32_t ___entryState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestTracker::OnGUI()
extern "C" void QuestTracker_OnGUI_m1198 (QuestTracker_t308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
