#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.QuestLog
struct QuestLog_t626;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t20;
// PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate
struct QuestChangedDelegate_t931;
// PixelCrushers.DialogueSystem.QuestState
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestState.h"
// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"

// System.Void PixelCrushers.DialogueSystem.QuestLog::.cctor()
extern "C" void QuestLog__cctor_m4456 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuest(System.String,System.String,System.String,System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestLog_AddQuest_m4457 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___description, String_t* ___successDescription, String_t* ___failureDescription, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuest(System.String,System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestLog_AddQuest_m4458 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___description, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuest(System.String,System.String)
extern "C" void QuestLog_AddQuest_m4459 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::DeleteQuest(System.String)
extern "C" void QuestLog_DeleteQuest_m4460 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.QuestLog::GetQuestState(System.String)
extern "C" int32_t QuestLog_GetQuestState_m2906 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestState(System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestLog_SetQuestState_m4461 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SendUpdateTracker()
extern "C" void QuestLog_SendUpdateTracker_m4462 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestUnassigned(System.String)
extern "C" bool QuestLog_IsQuestUnassigned_m4463 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestActive(System.String)
extern "C" bool QuestLog_IsQuestActive_m4464 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestSuccessful(System.String)
extern "C" bool QuestLog_IsQuestSuccessful_m4465 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestFailed(System.String)
extern "C" bool QuestLog_IsQuestFailed_m4466 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestAbandoned(System.String)
extern "C" bool QuestLog_IsQuestAbandoned_m4467 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestDone(System.String)
extern "C" bool QuestLog_IsQuestDone_m4468 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestInStateMask(System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" bool QuestLog_IsQuestInStateMask_m4469 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___stateMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::StartQuest(System.String)
extern "C" void QuestLog_StartQuest_m4470 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::CompleteQuest(System.String)
extern "C" void QuestLog_CompleteQuest_m4471 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::FailQuest(System.String)
extern "C" void QuestLog_FailQuest_m4472 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AbandonQuest(System.String)
extern "C" void QuestLog_AbandonQuest_m4473 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.QuestLog::StringToState(System.String)
extern "C" int32_t QuestLog_StringToState_m4474 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::StateToString(PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* QuestLog_StateToString_m4475 (Object_t * __this /* static, unused */, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestTitle(System.String)
extern "C" String_t* QuestLog_GetQuestTitle_m2828 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestDescription(System.String)
extern "C" String_t* QuestLog_GetQuestDescription_m2829 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestDescription(System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* QuestLog_GetQuestDescription_m4476 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetDefaultDescriptionFieldForState(PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* QuestLog_GetDefaultDescriptionFieldForState_m4477 (Object_t * __this /* static, unused */, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestDescription(System.String,PixelCrushers.DialogueSystem.QuestState,System.String)
extern "C" void QuestLog_SetQuestDescription_m4478 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___state, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestAbandonSequence(System.String)
extern "C" String_t* QuestLog_GetQuestAbandonSequence_m4479 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestAbandonSequence(System.String,System.String)
extern "C" void QuestLog_SetQuestAbandonSequence_m4480 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.QuestLog::GetQuestEntryCount(System.String)
extern "C" int32_t QuestLog_GetQuestEntryCount_m2830 (Object_t * __this /* static, unused */, String_t* ___questTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuestEntry(System.String,System.String)
extern "C" void QuestLog_AddQuestEntry_m4481 (Object_t * __this /* static, unused */, String_t* ___questTitle, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestEntry(System.String,System.Int32)
extern "C" String_t* QuestLog_GetQuestEntry_m2835 (Object_t * __this /* static, unused */, String_t* ___questTitle, int32_t ___entryNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestEntry(System.String,System.Int32,System.String)
extern "C" void QuestLog_SetQuestEntry_m4482 (Object_t * __this /* static, unused */, String_t* ___questTitle, int32_t ___entryNumber, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.QuestLog::GetQuestEntryState(System.String,System.Int32)
extern "C" int32_t QuestLog_GetQuestEntryState_m2831 (Object_t * __this /* static, unused */, String_t* ___questTitle, int32_t ___entryNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestEntryState(System.String,System.Int32,PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestLog_SetQuestEntryState_m4483 (Object_t * __this /* static, unused */, String_t* ___questTitle, int32_t ___entryNumber, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetEntryFieldName(System.Int32)
extern "C" String_t* QuestLog_GetEntryFieldName_m4484 (Object_t * __this /* static, unused */, int32_t ___entryNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetEntryStateFieldName(System.Int32)
extern "C" String_t* QuestLog_GetEntryStateFieldName_m4485 (Object_t * __this /* static, unused */, int32_t ___entryNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestTrackingAvailable(System.String)
extern "C" bool QuestLog_IsQuestTrackingAvailable_m4486 (Object_t * __this /* static, unused */, String_t* ___questTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestTrackingEnabled(System.String)
extern "C" bool QuestLog_IsQuestTrackingEnabled_m2827 (Object_t * __this /* static, unused */, String_t* ___questTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestTracking(System.String,System.Boolean)
extern "C" void QuestLog_SetQuestTracking_m4487 (Object_t * __this /* static, unused */, String_t* ___questTitle, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestAbandonable(System.String)
extern "C" bool QuestLog_IsQuestAbandonable_m4488 (Object_t * __this /* static, unused */, String_t* ___questTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] PixelCrushers.DialogueSystem.QuestLog::GetAllQuests(PixelCrushers.DialogueSystem.QuestState)
extern "C" StringU5BU5D_t20* QuestLog_GetAllQuests_m2826 (Object_t * __this /* static, unused */, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] PixelCrushers.DialogueSystem.QuestLog::GetAllQuests(PixelCrushers.DialogueSystem.QuestState,System.Boolean)
extern "C" StringU5BU5D_t20* QuestLog_GetAllQuests_m4489 (Object_t * __this /* static, unused */, int32_t ___flags, bool ___sortByName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] PixelCrushers.DialogueSystem.QuestLog::GetAllQuests()
extern "C" StringU5BU5D_t20* QuestLog_GetAllQuests_m4490 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuestStateObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestLog_AddQuestStateObserver_m4491 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___frequency, QuestChangedDelegate_t931 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuestStateObserver(System.String,System.Int32,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestLog_AddQuestStateObserver_m4492 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___entryNumber, int32_t ___frequency, QuestChangedDelegate_t931 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::RemoveQuestStateObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestLog_RemoveQuestStateObserver_m4493 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___frequency, QuestChangedDelegate_t931 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::RemoveQuestStateObserver(System.String,System.Int32,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestLog_RemoveQuestStateObserver_m4494 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___entryNumber, int32_t ___frequency, QuestChangedDelegate_t931 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::RemoveAllQuestStateObservers()
extern "C" void QuestLog_RemoveAllQuestStateObservers_m4495 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
