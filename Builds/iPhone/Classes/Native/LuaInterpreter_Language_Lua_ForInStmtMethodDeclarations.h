﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.ForInStmt
struct ForInStmt_t2583;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.ForInStmt::.ctor()
extern "C" void ForInStmt__ctor_m11749 (ForInStmt_t2583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.ForInStmt::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t748 * ForInStmt_Execute_m11750 (ForInStmt_t2583 * __this, LuaTable_t750 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;