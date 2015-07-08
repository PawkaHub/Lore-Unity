#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.BoolLiteral
struct BoolLiteral_t3764;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.BoolLiteral::.ctor()
extern "C" void BoolLiteral__ctor_m10980 (BoolLiteral_t3764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.BoolLiteral::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * BoolLiteral_Evaluate_m10981 (BoolLiteral_t3764 * __this, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
