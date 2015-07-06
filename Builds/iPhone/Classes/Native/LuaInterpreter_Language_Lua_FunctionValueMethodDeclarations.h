#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.FunctionValue
struct FunctionValue_t3531;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.FunctionValue::.ctor()
extern "C" void FunctionValue__ctor_m10570 (FunctionValue_t3531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.FunctionValue::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * FunctionValue_Evaluate_m10571 (FunctionValue_t3531 * __this, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
