#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Lua/Result
struct Result_t583;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.LuaTableWrapper
struct LuaTableWrapper_t1076;
// Language.Lua.LuaValue
struct LuaValue_t1075;

// System.Void PixelCrushers.DialogueSystem.Lua/Result::.ctor(Language.Lua.LuaValue)
extern "C" void Result__ctor_m5230 (Result_t583 * __this, LuaValue_t1075 * ___luaValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Lua/Result::get_HasReturnValue()
extern "C" bool Result_get_HasReturnValue_m5231 (Result_t583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Lua/Result::get_AsString()
extern "C" String_t* Result_get_AsString_m2921 (Result_t583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Lua/Result::get_AsBool()
extern "C" bool Result_get_AsBool_m2968 (Result_t583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.Lua/Result::get_AsFloat()
extern "C" float Result_get_AsFloat_m5232 (Result_t583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Lua/Result::get_AsInt()
extern "C" int32_t Result_get_AsInt_m2953 (Result_t583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Lua/Result::get_IsTable()
extern "C" bool Result_get_IsTable_m5233 (Result_t583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.LuaTableWrapper PixelCrushers.DialogueSystem.Lua/Result::get_AsTable()
extern "C" LuaTableWrapper_t1076 * Result_get_AsTable_m5234 (Result_t583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
