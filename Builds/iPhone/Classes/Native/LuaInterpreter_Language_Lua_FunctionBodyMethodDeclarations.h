#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.FunctionBody
struct FunctionBody_t2586;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.FunctionBody::.ctor()
extern "C" void FunctionBody__ctor_m11775 (FunctionBody_t2586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.FunctionBody::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t748 * FunctionBody_Evaluate_m11776 (FunctionBody_t2586 * __this, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
