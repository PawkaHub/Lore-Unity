#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.VariableArg
struct VariableArg_t3787;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.VariableArg::.ctor()
extern "C" void VariableArg__ctor_m11032 (VariableArg_t3787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.VariableArg::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * VariableArg_Evaluate_m11033 (VariableArg_t3787 * __this, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
