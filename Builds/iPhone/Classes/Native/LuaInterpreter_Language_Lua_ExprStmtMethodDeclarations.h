#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.ExprStmt
struct ExprStmt_t3748;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.ExprStmt::.ctor()
extern "C" void ExprStmt__ctor_m10957 (ExprStmt_t3748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.ExprStmt::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1334 * ExprStmt_Execute_m10958 (ExprStmt_t3748 * __this, LuaTable_t1336 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
