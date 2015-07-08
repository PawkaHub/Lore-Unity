#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.NilLiteral
struct NilLiteral_t3774;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.NilLiteral::.ctor()
extern "C" void NilLiteral__ctor_m11000 (NilLiteral_t3774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.NilLiteral::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * NilLiteral_Evaluate_m11001 (NilLiteral_t3774 * __this, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
