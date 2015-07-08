#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.ReturnStmt
struct ReturnStmt_t3759;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.ReturnStmt::.ctor()
extern "C" void ReturnStmt__ctor_m10973 (ReturnStmt_t3759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.ReturnStmt::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1334 * ReturnStmt_Execute_m10974 (ReturnStmt_t3759 * __this, LuaTable_t1336 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
