#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.FunctionCall
struct FunctionCall_t3530;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.FunctionCall::.ctor()
extern "C" void FunctionCall__ctor_m10568 (FunctionCall_t3530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.FunctionCall::Evaluate(Language.Lua.LuaValue,Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * FunctionCall_Evaluate_m10569 (FunctionCall_t3530 * __this, LuaValue_t1075 * ___baseValue, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
