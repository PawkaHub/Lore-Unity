#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.FunctionCall
struct FunctionCall_t2602;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.FunctionCall::.ctor()
extern "C" void FunctionCall__ctor_m11777 (FunctionCall_t2602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.FunctionCall::Evaluate(Language.Lua.LuaValue,Language.Lua.LuaTable)
extern "C" LuaValue_t748 * FunctionCall_Evaluate_m11778 (FunctionCall_t2602 * __this, LuaValue_t748 * ___baseValue, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
