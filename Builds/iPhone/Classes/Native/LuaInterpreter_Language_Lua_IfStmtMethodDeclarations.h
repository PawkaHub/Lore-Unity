#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.IfStmt
struct IfStmt_t2589;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.IfStmt::.ctor()
extern "C" void IfStmt__ctor_m11755 (IfStmt_t2589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.IfStmt::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t748 * IfStmt_Execute_m11756 (IfStmt_t2589 * __this, LuaTable_t750 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
