#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.VariableArg
struct VariableArg_t3549;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.VariableArg::.ctor()
extern "C" void VariableArg__ctor_m10613 (VariableArg_t3549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.VariableArg::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * VariableArg_Evaluate_m10614 (VariableArg_t3549 * __this, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
