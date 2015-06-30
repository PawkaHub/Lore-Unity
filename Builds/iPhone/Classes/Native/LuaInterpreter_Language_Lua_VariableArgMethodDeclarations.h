#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.VariableArg
struct VariableArg_t2621;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.VariableArg::.ctor()
extern "C" void VariableArg__ctor_m11822 (VariableArg_t2621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.VariableArg::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t748 * VariableArg_Evaluate_m11823 (VariableArg_t2621 * __this, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
