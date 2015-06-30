#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LuaWatchers
struct LuaWatchers_t770;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.LuaChangedDelegate
struct LuaChangedDelegate_t757;
// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"

// System.Void PixelCrushers.DialogueSystem.LuaWatchers::.ctor()
extern "C" void LuaWatchers__ctor_m3623 (LuaWatchers_t770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchers::AddObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void LuaWatchers_AddObserver_m3624 (LuaWatchers_t770 * __this, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t757 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchers::RemoveObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void LuaWatchers_RemoveObserver_m3625 (LuaWatchers_t770 * __this, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t757 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchers::RemoveAllObservers(PixelCrushers.DialogueSystem.LuaWatchFrequency)
extern "C" void LuaWatchers_RemoveAllObservers_m3626 (LuaWatchers_t770 * __this, int32_t ___frequency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchers::RemoveAllObservers()
extern "C" void LuaWatchers_RemoveAllObservers_m3627 (LuaWatchers_t770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchers::NotifyObservers(PixelCrushers.DialogueSystem.LuaWatchFrequency)
extern "C" void LuaWatchers_NotifyObservers_m3628 (LuaWatchers_t770 * __this, int32_t ___frequency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
