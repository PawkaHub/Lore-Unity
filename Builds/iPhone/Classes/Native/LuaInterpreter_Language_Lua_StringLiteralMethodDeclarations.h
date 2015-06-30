#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.StringLiteral
struct StringLiteral_t2618;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.StringLiteral::.ctor()
extern "C" void StringLiteral__ctor_m11815 (StringLiteral_t2618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.StringLiteral::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t748 * StringLiteral_Evaluate_m11816 (StringLiteral_t2618 * __this, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
