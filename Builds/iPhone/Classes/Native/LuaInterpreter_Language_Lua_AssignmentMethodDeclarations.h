#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Assignment
struct Assignment_t3741;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.Assignment::.ctor()
extern "C" void Assignment__ctor_m10946 (Assignment_t3741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Assignment::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1334 * Assignment_Execute_m10947 (Assignment_t3741 * __this, LuaTable_t1336 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Assignment::SetKeyValue(Language.Lua.LuaValue,Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" void Assignment_SetKeyValue_m10948 (Object_t * __this /* static, unused */, LuaValue_t1334 * ___baseValue, LuaValue_t1334 * ___key, LuaValue_t1334 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
