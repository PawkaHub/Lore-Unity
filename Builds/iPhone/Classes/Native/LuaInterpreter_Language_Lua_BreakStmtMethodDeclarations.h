#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.BreakStmt
struct BreakStmt_t2577;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.BreakStmt::.ctor()
extern "C" void BreakStmt__ctor_m11739 (BreakStmt_t2577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.BreakStmt::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t748 * BreakStmt_Execute_m11740 (BreakStmt_t2577 * __this, LuaTable_t750 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
