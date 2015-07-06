#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.IfStmt
struct IfStmt_t3517;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.IfStmt::.ctor()
extern "C" void IfStmt__ctor_m10546 (IfStmt_t3517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.IfStmt::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1075 * IfStmt_Execute_m10547 (IfStmt_t3517 * __this, LuaTable_t1077 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
