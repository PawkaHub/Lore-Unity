#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.NilLiteral
struct NilLiteral_t3536;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.NilLiteral::.ctor()
extern "C" void NilLiteral__ctor_m10581 (NilLiteral_t3536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.NilLiteral::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * NilLiteral_Evaluate_m10582 (NilLiteral_t3536 * __this, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
