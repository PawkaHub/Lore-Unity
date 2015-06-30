#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem
struct QuestWatchItem_t932;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate
struct QuestChangedDelegate_t931;
// PixelCrushers.DialogueSystem.LuaWatchItem
struct LuaWatchItem_t758;
// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"
// PixelCrushers.DialogueSystem.Lua/Result
#include "DialogueSystem_PixelCrushers_DialogueSystem_Lua_Result.h"

// System.Void PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::.ctor(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestWatchItem__ctor_m4442 (QuestWatchItem_t932 * __this, String_t* ___title, int32_t ___frequency, QuestChangedDelegate_t931 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::.ctor(System.String,System.Int32,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" void QuestWatchItem__ctor_m4443 (QuestWatchItem_t932 * __this, String_t* ___title, int32_t ___entryNumber, int32_t ___frequency, QuestChangedDelegate_t931 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::Matches(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" bool QuestWatchItem_Matches_m4444 (QuestWatchItem_t932 * __this, String_t* ___title, int32_t ___frequency, QuestChangedDelegate_t931 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::Matches(System.String,System.Int32,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate)
extern "C" bool QuestWatchItem_Matches_m4445 (QuestWatchItem_t932 * __this, String_t* ___title, int32_t ___entryNumber, int32_t ___frequency, QuestChangedDelegate_t931 * ___questChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::StopObserving()
extern "C" void QuestWatchItem_StopObserving_m4446 (QuestWatchItem_t932 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem::OnLuaChanged(PixelCrushers.DialogueSystem.LuaWatchItem,PixelCrushers.DialogueSystem.Lua/Result)
extern "C" void QuestWatchItem_OnLuaChanged_m4447 (QuestWatchItem_t932 * __this, LuaWatchItem_t758 * ___luaWatchItem, Result_t627  ___newResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
