#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.StringLiteral
struct StringLiteral_t3546;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.StringLiteral::.ctor()
extern "C" void StringLiteral__ctor_m10606 (StringLiteral_t3546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.StringLiteral::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * StringLiteral_Evaluate_m10607 (StringLiteral_t3546 * __this, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
