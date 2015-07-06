#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LuaWatchItem
struct LuaWatchItem_t582;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.LuaChangedDelegate
struct LuaChangedDelegate_t724;

// System.Void PixelCrushers.DialogueSystem.LuaWatchItem::.ctor(System.String,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void LuaWatchItem__ctor_m5283 (LuaWatchItem_t582 * __this, String_t* ___luaExpression, LuaChangedDelegate_t724 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchItem::add_LuaChanged(PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void LuaWatchItem_add_LuaChanged_m5284 (LuaWatchItem_t582 * __this, LuaChangedDelegate_t724 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchItem::remove_LuaChanged(PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void LuaWatchItem_remove_LuaChanged_m5285 (LuaWatchItem_t582 * __this, LuaChangedDelegate_t724 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.LuaWatchItem::get_LuaExpression()
extern "C" String_t* LuaWatchItem_get_LuaExpression_m5286 (LuaWatchItem_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchItem::set_LuaExpression(System.String)
extern "C" void LuaWatchItem_set_LuaExpression_m5287 (LuaWatchItem_t582 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.LuaWatchItem::Matches(System.String,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" bool LuaWatchItem_Matches_m5288 (LuaWatchItem_t582 * __this, String_t* ___luaExpression, LuaChangedDelegate_t724 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaWatchItem::Check()
extern "C" void LuaWatchItem_Check_m5289 (LuaWatchItem_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
