#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.FunctionValue
struct FunctionValue_t2603;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.FunctionValue::.ctor()
extern "C" void FunctionValue__ctor_m11779 (FunctionValue_t2603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.FunctionValue::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t748 * FunctionValue_Evaluate_m11780 (FunctionValue_t2603 * __this, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
