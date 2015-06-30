#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.DoStmt
struct DoStmt_t2580;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.DoStmt::.ctor()
extern "C" void DoStmt__ctor_m11745 (DoStmt_t2580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.DoStmt::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t748 * DoStmt_Execute_m11746 (DoStmt_t2580 * __this, LuaTable_t750 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
