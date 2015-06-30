#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.BoolLiteral
struct BoolLiteral_t2598;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.BoolLiteral::.ctor()
extern "C" void BoolLiteral__ctor_m11770 (BoolLiteral_t2598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.BoolLiteral::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t748 * BoolLiteral_Evaluate_m11771 (BoolLiteral_t2598 * __this, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
