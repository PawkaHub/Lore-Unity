#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Assignment
struct Assignment_t2575;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.Assignment::.ctor()
extern "C" void Assignment__ctor_m11736 (Assignment_t2575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Assignment::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t748 * Assignment_Execute_m11737 (Assignment_t2575 * __this, LuaTable_t750 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Assignment::SetKeyValue(Language.Lua.LuaValue,Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" void Assignment_SetKeyValue_m11738 (Object_t * __this /* static, unused */, LuaValue_t748 * ___baseValue, LuaValue_t748 * ___key, LuaValue_t748 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
