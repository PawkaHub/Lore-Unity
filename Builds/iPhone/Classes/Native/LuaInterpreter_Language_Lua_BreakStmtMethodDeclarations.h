#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.BreakStmt
struct BreakStmt_t3505;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.BreakStmt::.ctor()
extern "C" void BreakStmt__ctor_m10530 (BreakStmt_t3505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.BreakStmt::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1075 * BreakStmt_Execute_m10531 (BreakStmt_t3505 * __this, LuaTable_t1077 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
