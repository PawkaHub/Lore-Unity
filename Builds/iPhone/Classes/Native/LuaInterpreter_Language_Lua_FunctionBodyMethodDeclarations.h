#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.FunctionBody
struct FunctionBody_t3752;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.FunctionBody::.ctor()
extern "C" void FunctionBody__ctor_m10985 (FunctionBody_t3752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.FunctionBody::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * FunctionBody_Evaluate_m10986 (FunctionBody_t3752 * __this, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
