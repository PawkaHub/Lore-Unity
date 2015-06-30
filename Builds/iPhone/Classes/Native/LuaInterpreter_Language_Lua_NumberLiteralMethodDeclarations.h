#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.NumberLiteral
struct NumberLiteral_t2609;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.NumberLiteral::.ctor()
extern "C" void NumberLiteral__ctor_m11792 (NumberLiteral_t2609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.NumberLiteral::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t748 * NumberLiteral_Evaluate_m11793 (NumberLiteral_t2609 * __this, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
