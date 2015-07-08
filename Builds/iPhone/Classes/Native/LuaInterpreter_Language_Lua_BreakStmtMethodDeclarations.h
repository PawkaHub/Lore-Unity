#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.BreakStmt
struct BreakStmt_t3743;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.BreakStmt::.ctor()
extern "C" void BreakStmt__ctor_m10949 (BreakStmt_t3743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.BreakStmt::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1334 * BreakStmt_Execute_m10950 (BreakStmt_t3743 * __this, LuaTable_t1336 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
