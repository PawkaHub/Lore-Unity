#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.NumberLiteral
struct NumberLiteral_t3775;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.NumberLiteral::.ctor()
extern "C" void NumberLiteral__ctor_m11002 (NumberLiteral_t3775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.NumberLiteral::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * NumberLiteral_Evaluate_m11003 (NumberLiteral_t3775 * __this, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
