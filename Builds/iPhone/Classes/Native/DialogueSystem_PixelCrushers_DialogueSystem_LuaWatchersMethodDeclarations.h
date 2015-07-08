#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LuaWatchers
struct LuaWatchers_t1354;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.LuaChangedDelegate
struct LuaChangedDelegate_t807;
// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"

// System.Void PixelCrushers.DialogueSystem.LuaWatchers::.ctor()
extern "C" void LuaWatchers__ctor_m5911 (LuaWatchers_t1354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchers::AddObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void LuaWatchers_AddObserver_m5912 (LuaWatchers_t1354 * __this, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t807 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchers::RemoveObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void LuaWatchers_RemoveObserver_m5913 (LuaWatchers_t1354 * __this, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t807 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchers::RemoveAllObservers(PixelCrushers.DialogueSystem.LuaWatchFrequency)
extern "C" void LuaWatchers_RemoveAllObservers_m5914 (LuaWatchers_t1354 * __this, int32_t ___frequency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchers::RemoveAllObservers()
extern "C" void LuaWatchers_RemoveAllObservers_m5915 (LuaWatchers_t1354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchers::NotifyObservers(PixelCrushers.DialogueSystem.LuaWatchFrequency)
extern "C" void LuaWatchers_NotifyObservers_m5916 (LuaWatchers_t1354 * __this, int32_t ___frequency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
