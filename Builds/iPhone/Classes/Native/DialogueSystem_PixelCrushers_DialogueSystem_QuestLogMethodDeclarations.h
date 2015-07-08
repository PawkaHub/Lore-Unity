#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.QuestLog
struct QuestLog_t703;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t20;
// PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate
struct QuestChangedDelegate_t1514;
// PixelCrushers.DialogueSystem.QuestState
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestState.h"
// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"

// System.Void PixelCrushers.DialogueSystem.QuestLog::.cctor()
extern "C" void QuestLog__cctor_m6750 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuest(System.String,System.String,System.String,System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestLog_AddQuest_m6751 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___description, String_t* ___successDescription, String_t* ___failureDescription, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuest(System.String,System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestLog_AddQuest_m6752 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___description, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuest(System.String,System.String)
extern "C" void QuestLog_AddQuest_m6753 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::DeleteQuest(System.String)
extern "C" void QuestLog_DeleteQuest_m6754 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.QuestLog::GetQuestState(System.String)
extern "C" int32_t QuestLog_GetQuestState_m3165 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestState(System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestLog_SetQuestState_m6755 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SendUpdateTracker()
extern "C" void QuestLog_SendUpdateTracker_m6756 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestUnassigned(System.String)
extern "C" bool QuestLog_IsQuestUnassigned_m6757 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestActive(System.String)
extern "C" bool QuestLog_IsQuestActive_m6758 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestSuccessful(System.String)
extern "C" bool QuestLog_IsQuestSuccessful_m6759 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestFailed(System.String)
extern "C" bool QuestLog_IsQuestFailed_m6760 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestAbandoned(System.String)
extern "C" bool QuestLog_IsQuestAbandoned_m6761 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestDone(System.String)
extern "C" bool QuestLog_IsQuestDone_m6762 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestInStateMask(System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" bool QuestLog_IsQuestInStateMask_m6763 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___stateMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::StartQuest(System.String)
extern "C" void QuestLog_StartQuest_m6764 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::CompleteQuest(System.String)
extern "C" void QuestLog_CompleteQuest_m6765 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::FailQuest(System.String)
extern "C" void QuestLog_FailQuest_m6766 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AbandonQuest(System.String)
extern "C" void QuestLog_AbandonQuest_m6767 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.QuestLog::StringToState(System.String)
extern "C" int32_t QuestLog_StringToState_m6768 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::StateToString(PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* QuestLog_StateToString_m6769 (Object_t * __this /* static, unused */, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestTitle(System.String)
extern "C" String_t* QuestLog_GetQuestTitle_m3087 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestDescription(System.String)
extern "C" String_t* QuestLog_GetQuestDescription_m3088 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestDescription(System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* QuestLog_GetQuestDescription_m6770 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetDefaultDescriptionFieldForState(PixelCrushers.DialogueSystem.QuestState)
extern "C" String_t* QuestLog_GetDefaultDescriptionFieldForState_m6771 (Object_t * __this /* static, unused */, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestDescription(System.String,PixelCrushers.DialogueSystem.QuestState,System.String)
extern "C" void QuestLog_SetQuestDescription_m6772 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___state, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestAbandonSequence(System.String)
extern "C" String_t* QuestLog_GetQuestAbandonSequence_m6773 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestAbandonSequence(System.String,System.String)
extern "C" void QuestLog_SetQuestAbandonSequence_m6774 (Object_t * __this /* static, unused */, String_t* ___title, String_t* ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.QuestLog::GetQuestEntryCount(System.String)
extern "C" int32_t QuestLog_GetQuestEntryCount_m3089 (Object_t * __this /* static, unused */, String_t* ___questTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuestEntry(System.String,System.String)
extern "C" void QuestLog_AddQuestEntry_m6775 (Object_t * __this /* static, unused */, String_t* ___questTitle, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetQuestEntry(System.String,System.Int32)
extern "C" String_t* QuestLog_GetQuestEntry_m3094 (Object_t * __this /* static, unused */, String_t* ___questTitle, int32_t ___entryNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestEntry(System.String,System.Int32,System.String)
extern "C" void QuestLog_SetQuestEntry_m6776 (Object_t * __this /* static, unused */, String_t* ___questTitle, int32_t ___entryNumber, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.QuestState PixelCrushers.DialogueSystem.QuestLog::GetQuestEntryState(System.String,System.Int32)
extern "C" int32_t QuestLog_GetQuestEntryState_m3090 (Object_t * __this /* static, unused */, String_t* ___questTitle, int32_t ___entryNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestEntryState(System.String,System.Int32,PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestLog_SetQuestEntryState_m6777 (Object_t * __this /* static, unused */, String_t* ___questTitle, int32_t ___entryNumber, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetEntryFieldName(System.Int32)
extern "C" String_t* QuestLog_GetEntryFieldName_m6778 (Object_t * __this /* static, unused */, int32_t ___entryNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.QuestLog::GetEntryStateFieldName(System.Int32)
extern "C" String_t* QuestLog_GetEntryStateFieldName_m6779 (Object_t * __this /* static, unused */, int32_t ___entryNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestTrackingAvailable(System.String)
extern "C" bool QuestLog_IsQuestTrackingAvailable_m6780 (Object_t * __this /* static, unused */, String_t* ___questTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestTrackingEnabled(System.String)
extern "C" bool QuestLog_IsQuestTrackingEnabled_m3086 (Object_t * __this /* static, unused */, String_t* ___questTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::SetQuestTracking(System.String,System.Boolean)
extern "C" void QuestLog_SetQuestTracking_m6781 (Object_t * __this /* static, unused */, String_t* ___questTitle, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog::IsQuestAbandonable(System.String)
extern "C" bool QuestLog_IsQuestAbandonable_m6782 (Object_t * __this /* static, unused */, String_t* ___questTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] PixelCrushers.DialogueSystem.QuestLog::GetAllQuests(PixelCrushers.DialogueSystem.QuestState)
extern "C" StringU5BU5D_t20* QuestLog_GetAllQuests_m3085 (Object_t * __this /* static, unused */, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] PixelCrushers.DialogueSystem.QuestLog::GetAllQuests(PixelCrushers.DialogueSystem.QuestState,System.Boolean)
extern "C" StringU5BU5D_t20* QuestLog_GetAllQuests_m6783 (Object_t * __this /* static, unused */, int32_t ___flags, bool ___sortByName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] PixelCrushers.DialogueSystem.QuestLog::GetAllQuests()
extern "C" StringU5BU5D_t20* QuestLog_GetAllQuests_m6784 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuestStateObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestLog_AddQuestStateObserver_m6785 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___frequency, QuestChangedDelegate_t1514 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::AddQuestStateObserver(System.String,System.Int32,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestLog_AddQuestStateObserver_m6786 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___entryNumber, int32_t ___frequency, QuestChangedDelegate_t1514 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::RemoveQuestStateObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestLog_RemoveQuestStateObserver_m6787 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___frequency, QuestChangedDelegate_t1514 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::RemoveQuestStateObserver(System.String,System.Int32,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestLog_RemoveQuestStateObserver_m6788 (Object_t * __this /* static, unused */, String_t* ___title, int32_t ___entryNumber, int32_t ___frequency, QuestChangedDelegate_t1514 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog::RemoveAllQuestStateObservers()
extern "C" void QuestLog_RemoveAllQuestStateObservers_m6789 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
