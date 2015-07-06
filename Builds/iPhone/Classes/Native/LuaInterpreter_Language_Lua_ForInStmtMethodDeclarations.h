#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.ForInStmt
struct ForInStmt_t3511;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.ForInStmt::.ctor()
extern "C" void ForInStmt__ctor_m10540 (ForInStmt_t3511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.ForInStmt::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1075 * ForInStmt_Execute_m10541 (ForInStmt_t3511 * __this, LuaTable_t1077 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
