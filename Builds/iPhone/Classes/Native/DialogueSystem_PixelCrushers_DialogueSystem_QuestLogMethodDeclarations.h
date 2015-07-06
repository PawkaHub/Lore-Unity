#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.QuestLog
struct QuestLog_t647;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t20;
// PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate
struct QuestChangedDelegate_t1255;
// PixelCrushers.DialogueSystem.QuestState
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestState.h"
// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"

// System.Void PixelCrushers.DialogueSystem.QuestLog::.cctor()
extern "C" void QuestLog__cctor_m6302 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuest(System.String,System.String,System.String,System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestLog_AddQuest_m6303 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___description, String_t* ___successDescription, String_t* ___failureDescription, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuest(System.String,System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestLog_AddQuest_m6304 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___description, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuest(System.String,System.String)
extern "C" void QuestLog_AddQuest_m6305 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::DeleteQuest(System.String)
extern "C" void QuestLog_DeleteQuest_m6306 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.QuestLog::GetQuestState(System.String)
extern "C" int32_t QuestLog_GetQuestState_m2993 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestState(System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestLog_SetQuestState_m6307 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SendUpdateTracker()
extern "C" void QuestLog_SendUpdateTracker_m6308 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestUnassigned(System.String)
extern "C" bool QuestLog_IsQuestUnassigned_m6309 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestActive(System.String)
extern "C" bool QuestLog_IsQuestActive_m6310 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestSuccessful(System.String)
extern "C" bool QuestLog_IsQuestSuccessful_m6311 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestFailed(System.String)
extern "C" bool QuestLog_IsQuestFailed_m6312 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestAbandoned(System.String)
extern "C" bool QuestLog_IsQuestAbandoned_m6313 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestDone(System.String)
extern "C" bool QuestLog_IsQuestDone_m6314 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestInStateMask(System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" bool QuestLog_IsQuestInStateMask_m6315 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___stateMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::StartQuest(System.String)
extern "C" void QuestLog_StartQuest_m6316 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::CompleteQuest(System.String)
extern "C" void QuestLog_CompleteQuest_m6317 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::FailQuest(System.String)
extern "C" void QuestLog_FailQuest_m6318 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AbandonQuest(System.String)
extern "C" void QuestLog_AbandonQuest_m6319 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.QuestLog::StringToState(System.String)
extern "C" int32_t QuestLog_StringToState_m6320 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::StateToString(PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* QuestLog_StateToString_m6321 (Object_t * __this /* static, unused */, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestTitle(System.String)
extern "C" String_t* QuestLog_GetQuestTitle_m2915 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestDescription(System.String)
extern "C" String_t* QuestLog_GetQuestDescription_m2916 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestDescription(System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* QuestLog_GetQuestDescription_m6322 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetDefaultDescriptionFieldForState(PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* QuestLog_GetDefaultDescriptionFieldForState_m6323 (Object_t * __this /* static, unused */, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestDescription(System.String,PixelCrushers.DialogueSystem.QuestState,System.String)
extern "C" void QuestLog_SetQuestDescription_m6324 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___state, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestAbandonSequence(System.String)
extern "C" String_t* QuestLog_GetQuestAbandonSequence_m6325 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestAbandonSequence(System.String,System.String)
extern "C" void QuestLog_SetQuestAbandonSequence_m6326 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.QuestLog::GetQuestEntryCount(System.String)
extern "C" int32_t QuestLog_GetQuestEntryCount_m2917 (Object_t * __this /* static, unused */, String_t* ___questTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuestEntry(System.String,System.String)
extern "C" void QuestLog_AddQuestEntry_m6327 (Object_t * __this /* static, unused */, String_t* ___questTitle, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestEntry(System.String,System.Int32)
extern "C" String_t* QuestLog_GetQuestEntry_m2922 (Object_t * __this /* static, unused */, String_t* ___questTitle, int32_t ___entryNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestEntry(System.String,System.Int32,System.String)
extern "C" void QuestLog_SetQuestEntry_m6328 (Object_t * __this /* static, unused */, String_t* ___questTitle, int32_t ___entryNumber, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.QuestLog::GetQuestEntryState(System.String,System.Int32)
extern "C" int32_t QuestLog_GetQuestEntryState_m2918 (Object_t * __this /* static, unused */, String_t* ___questTitle, int32_t ___entryNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestEntryState(System.String,System.Int32,PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestLog_SetQuestEntryState_m6329 (Object_t * __this /* static, unused */, String_t* ___questTitle, int32_t ___entryNumber, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetEntryFieldName(System.Int32)
extern "C" String_t* QuestLog_GetEntryFieldName_m6330 (Object_t * __this /* static, unused */, int32_t ___entryNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetEntryStateFieldName(System.Int32)
extern "C" String_t* QuestLog_GetEntryStateFieldName_m6331 (Object_t * __this /* static, unused */, int32_t ___entryNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestTrackingAvailable(System.String)
extern "C" bool QuestLog_IsQuestTrackingAvailable_m6332 (Object_t * __this /* static, unused */, String_t* ___questTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestTrackingEnabled(System.String)
extern "C" bool QuestLog_IsQuestTrackingEnabled_m2914 (Object_t * __this /* static, unused */, String_t* ___questTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestTracking(System.String,System.Boolean)
extern "C" void QuestLog_SetQuestTracking_m6333 (Object_t * __this /* static, unused */, String_t* ___questTitle, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestAbandonable(System.String)
extern "C" bool QuestLog_IsQuestAbandonable_m6334 (Object_t * __this /* static, unused */, String_t* ___questTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] PixelCrushers.DialogueSystem.QuestLog::GetAllQuests(PixelCrushers.DialogueSystem.QuestState)
extern "C" StringU5BU5D_t20* QuestLog_GetAllQuests_m2913 (Object_t * __this /* static, unused */, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] PixelCrushers.DialogueSystem.QuestLog::GetAllQuests(PixelCrushers.DialogueSystem.QuestState,System.Boolean)
extern "C" StringU5BU5D_t20* QuestLog_GetAllQuests_m6335 (Object_t * __this /* static, unused */, int32_t ___flags, bool ___sortByName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] PixelCrushers.DialogueSystem.QuestLog::GetAllQuests()
extern "C" StringU5BU5D_t20* QuestLog_GetAllQuests_m6336 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuestStateObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestLog_AddQuestStateObserver_m6337 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___frequency, QuestChangedDelegate_t1255 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuestStateObserver(System.String,System.Int32,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestLog_AddQuestStateObserver_m6338 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___entryNumber, int32_t ___frequency, QuestChangedDelegate_t1255 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::RemoveQuestStateObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestLog_RemoveQuestStateObserver_m6339 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___frequency, QuestChangedDelegate_t1255 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::RemoveQuestStateObserver(System.String,System.Int32,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestLog_RemoveQuestStateObserver_m6340 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___entryNumber, int32_t ___frequency, QuestChangedDelegate_t1255 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::RemoveAllQuestStateObservers()
extern "C" void QuestLog_RemoveAllQuestStateObservers_m6341 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
