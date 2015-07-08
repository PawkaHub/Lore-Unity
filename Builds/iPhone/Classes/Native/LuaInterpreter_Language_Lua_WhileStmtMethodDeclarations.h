#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.WhileStmt
struct WhileStmt_t3760;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.WhileStmt::.ctor()
extern "C" void WhileStmt__ctor_m10976 (WhileStmt_t3760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.WhileStmt::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1334 * WhileStmt_Execute_m10977 (WhileStmt_t3760 * __this, LuaTable_t1336 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
