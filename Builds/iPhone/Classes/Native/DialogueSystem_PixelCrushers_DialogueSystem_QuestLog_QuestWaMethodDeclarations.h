#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem
struct QuestWatchItem_t1515;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate
struct QuestChangedDelegate_t1514;
// PixelCrushers.DialogueSystem.LuaWatchItem
struct LuaWatchItem_t640;
// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"
// PixelCrushers.DialogueSystem.Lua/Result
#include "DialogueSystem_PixelCrushers_DialogueSystem_Lua_Result.h"

// System.Void PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::.ctor(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestWatchItem__ctor_m6736 (QuestWatchItem_t1515 * __this, String_t* ___title, int32_t ___frequency, QuestChangedDelegate_t1514 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::.ctor(System.String,System.Int32,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestWatchItem__ctor_m6737 (QuestWatchItem_t1515 * __this, String_t* ___title, int32_t ___entryNumber, int32_t ___frequency, QuestChangedDelegate_t1514 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::Matches(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" bool QuestWatchItem_Matches_m6738 (QuestWatchItem_t1515 * __this, String_t* ___title, int32_t ___frequency, QuestChangedDelegate_t1514 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::Matches(System.String,System.Int32,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" bool QuestWatchItem_Matches_m6739 (QuestWatchItem_t1515 * __this, String_t* ___title, int32_t ___entryNumber, int32_t ___frequency, QuestChangedDelegate_t1514 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::StopObserving()
extern "C" void QuestWatchItem_StopObserving_m6740 (QuestWatchItem_t1515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::OnLuaChanged(PixelCrushers.DialogueSystem.LuaWatchItem,PixelCrushers.DialogueSystem.Lua/Result)
extern "C" void QuestWatchItem_OnLuaChanged_m6741 (QuestWatchItem_t1515 * __this, LuaWatchItem_t640 * ___luaWatchItem, Result_t641  ___newResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
