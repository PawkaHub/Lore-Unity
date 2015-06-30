#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LuaWatchList
struct LuaWatchList_t761;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.LuaChangedDelegate
struct LuaChangedDelegate_t757;

// System.Void PixelCrushers.DialogueSystem.LuaWatchList::.ctor()
extern "C" void LuaWatchList__ctor_m3454 (LuaWatchList_t761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchList::AddObserver(System.String,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void LuaWatchList_AddObserver_m3455 (LuaWatchList_t761 * __this, String_t* ___luaExpression, LuaChangedDelegate_t757 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchList::RemoveObserver(System.String,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void LuaWatchList_RemoveObserver_m3456 (LuaWatchList_t761 * __this, String_t* ___luaExpression, LuaChangedDelegate_t757 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchList::RemoveAllObservers()
extern "C" void LuaWatchList_RemoveAllObservers_m3457 (LuaWatchList_t761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchList::NotifyObservers()
extern "C" void LuaWatchList_NotifyObservers_m3458 (LuaWatchList_t761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
