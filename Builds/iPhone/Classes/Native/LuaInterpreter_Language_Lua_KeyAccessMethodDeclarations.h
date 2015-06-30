#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.KeyAccess
struct KeyAccess_t2605;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.KeyAccess::.ctor()
extern "C" void KeyAccess__ctor_m11784 (KeyAccess_t2605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.KeyAccess::Evaluate(Language.Lua.LuaValue,Language.Lua.LuaTable)
extern "C" LuaValue_t748 * KeyAccess_Evaluate_m11785 (KeyAccess_t2605 * __this, LuaValue_t748 * ___baseValue, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
