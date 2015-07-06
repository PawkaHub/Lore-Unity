#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Assignment
struct Assignment_t3503;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.Assignment::.ctor()
extern "C" void Assignment__ctor_m10527 (Assignment_t3503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Assignment::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1075 * Assignment_Execute_m10528 (Assignment_t3503 * __this, LuaTable_t1077 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Assignment::SetKeyValue(Language.Lua.LuaValue,Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" void Assignment_SetKeyValue_m10529 (Object_t * __this /* static, unused */, LuaValue_t1075 * ___baseValue, LuaValue_t1075 * ___key, LuaValue_t1075 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
