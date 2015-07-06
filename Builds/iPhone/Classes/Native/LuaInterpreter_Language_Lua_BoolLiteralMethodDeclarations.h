#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.BoolLiteral
struct BoolLiteral_t3526;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.BoolLiteral::.ctor()
extern "C" void BoolLiteral__ctor_m10561 (BoolLiteral_t3526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.BoolLiteral::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * BoolLiteral_Evaluate_m10562 (BoolLiteral_t3526 * __this, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
