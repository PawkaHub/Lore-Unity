#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.FunctionBody
struct FunctionBody_t3514;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.FunctionBody::.ctor()
extern "C" void FunctionBody__ctor_m10566 (FunctionBody_t3514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.FunctionBody::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * FunctionBody_Evaluate_m10567 (FunctionBody_t3514 * __this, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
