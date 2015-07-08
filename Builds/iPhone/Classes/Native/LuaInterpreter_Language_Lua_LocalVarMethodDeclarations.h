#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LocalVar
struct LocalVar_t3757;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.LocalVar::.ctor()
extern "C" void LocalVar__ctor_m10969 (LocalVar_t3757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LocalVar::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1334 * LocalVar_Execute_m10970 (LocalVar_t3757 * __this, LuaTable_t1336 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
