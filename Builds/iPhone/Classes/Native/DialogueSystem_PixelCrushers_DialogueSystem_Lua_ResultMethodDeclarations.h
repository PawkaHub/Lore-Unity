#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Lua/Result
struct Result_t627;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.LuaTableWrapper
struct LuaTableWrapper_t749;
// Language.Lua.LuaValue
struct LuaValue_t748;

// System.Void PixelCrushers.DialogueSystem.Lua/Result::.ctor(Language.Lua.LuaValue)
extern "C" void Result__ctor_m3391 (Result_t627 * __this, LuaValue_t748 * ___luaValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Lua/Result::get_HasReturnValue()
extern "C" bool Result_get_HasReturnValue_m3392 (Result_t627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Lua/Result::get_AsString()
extern "C" String_t* Result_get_AsString_m2834 (Result_t627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Lua/Result::get_AsBool()
extern "C" bool Result_get_AsBool_m2881 (Result_t627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.Lua/Result::get_AsFloat()
extern "C" float Result_get_AsFloat_m3393 (Result_t627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Lua/Result::get_AsInt()
extern "C" int32_t Result_get_AsInt_m2866 (Result_t627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Lua/Result::get_IsTable()
extern "C" bool Result_get_IsTable_m3394 (Result_t627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.LuaTableWrapper PixelCrushers.DialogueSystem.Lua/Result::get_AsTable()
extern "C" LuaTableWrapper_t749 * Result_get_AsTable_m3395 (Result_t627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
