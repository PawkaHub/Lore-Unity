#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.StringLiteral
struct StringLiteral_t3784;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.StringLiteral::.ctor()
extern "C" void StringLiteral__ctor_m11025 (StringLiteral_t3784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.StringLiteral::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * StringLiteral_Evaluate_m11026 (StringLiteral_t3784 * __this, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
