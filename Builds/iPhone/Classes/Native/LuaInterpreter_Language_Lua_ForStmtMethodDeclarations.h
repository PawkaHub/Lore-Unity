#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.ForStmt
struct ForStmt_t2584;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.ForStmt::.ctor()
extern "C" void ForStmt__ctor_m11751 (ForStmt_t2584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.ForStmt::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t748 * ForStmt_Execute_m11752 (ForStmt_t2584 * __this, LuaTable_t750 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
