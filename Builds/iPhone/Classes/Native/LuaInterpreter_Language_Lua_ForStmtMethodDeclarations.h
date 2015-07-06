#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.ForStmt
struct ForStmt_t3512;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.ForStmt::.ctor()
extern "C" void ForStmt__ctor_m10542 (ForStmt_t3512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.ForStmt::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1075 * ForStmt_Execute_m10543 (ForStmt_t3512 * __this, LuaTable_t1077 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
