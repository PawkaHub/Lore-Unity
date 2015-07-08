#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.FunctionCall
struct FunctionCall_t3768;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.FunctionCall::.ctor()
extern "C" void FunctionCall__ctor_m10987 (FunctionCall_t3768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.FunctionCall::Evaluate(Language.Lua.LuaValue,Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * FunctionCall_Evaluate_m10988 (FunctionCall_t3768 * __this, LuaValue_t1334 * ___baseValue, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
