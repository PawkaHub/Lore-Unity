#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.NumberLiteral
struct NumberLiteral_t3537;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.NumberLiteral::.ctor()
extern "C" void NumberLiteral__ctor_m10583 (NumberLiteral_t3537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.NumberLiteral::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * NumberLiteral_Evaluate_m10584 (NumberLiteral_t3537 * __this, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
