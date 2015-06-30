#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.NilLiteral
struct NilLiteral_t2608;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.NilLiteral::.ctor()
extern "C" void NilLiteral__ctor_m11790 (NilLiteral_t2608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.NilLiteral::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t748 * NilLiteral_Evaluate_m11791 (NilLiteral_t2608 * __this, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
