#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LuaWatchList
struct LuaWatchList_t1086;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.LuaChangedDelegate
struct LuaChangedDelegate_t724;

// System.Void PixelCrushers.DialogueSystem.LuaWatchList::.ctor()
extern "C" void LuaWatchList__ctor_m5292 (LuaWatchList_t1086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchList::AddObserver(System.String,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void LuaWatchList_AddObserver_m5293 (LuaWatchList_t1086 * __this, String_t* ___luaExpression, LuaChangedDelegate_t724 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchList::RemoveObserver(System.String,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void LuaWatchList_RemoveObserver_m5294 (LuaWatchList_t1086 * __this, String_t* ___luaExpression, LuaChangedDelegate_t724 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchList::RemoveAllObservers()
extern "C" void LuaWatchList_RemoveAllObservers_m5295 (LuaWatchList_t1086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchList::NotifyObservers()
extern "C" void LuaWatchList_NotifyObservers_m5296 (LuaWatchList_t1086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
