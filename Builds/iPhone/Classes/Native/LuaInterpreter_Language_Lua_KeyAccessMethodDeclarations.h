#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.KeyAccess
struct KeyAccess_t3771;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.KeyAccess::.ctor()
extern "C" void KeyAccess__ctor_m10994 (KeyAccess_t3771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.KeyAccess::Evaluate(Language.Lua.LuaValue,Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * KeyAccess_Evaluate_m10995 (KeyAccess_t3771 * __this, LuaValue_t1334 * ___baseValue, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
