#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Lua/Result
struct Result_t641;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.LuaTableWrapper
struct LuaTableWrapper_t1335;
// Language.Lua.LuaValue
struct LuaValue_t1334;

// System.Void PixelCrushers.DialogueSystem.Lua/Result::.ctor(Language.Lua.LuaValue)
extern "C" void Result__ctor_m5682 (Result_t641 * __this, LuaValue_t1334 * ___luaValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Lua/Result::get_HasReturnValue()
extern "C" bool Result_get_HasReturnValue_m5683 (Result_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Lua/Result::get_AsString()
extern "C" String_t* Result_get_AsString_m3093 (Result_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Lua/Result::get_AsBool()
extern "C" bool Result_get_AsBool_m3140 (Result_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.Lua/Result::get_AsFloat()
extern "C" float Result_get_AsFloat_m5684 (Result_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Lua/Result::get_AsInt()
extern "C" int32_t Result_get_AsInt_m3125 (Result_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Lua/Result::get_IsTable()
extern "C" bool Result_get_IsTable_m5685 (Result_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.LuaTableWrapper PixelCrushers.DialogueSystem.Lua/Result::get_AsTable()
extern "C" LuaTableWrapper_t1335 * Result_get_AsTable_m5686 (Result_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
