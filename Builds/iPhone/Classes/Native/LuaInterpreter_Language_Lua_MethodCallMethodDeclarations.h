#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.MethodCall
struct MethodCall_t3772;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.MethodCall::.ctor()
extern "C" void MethodCall__ctor_m10996 (MethodCall_t3772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.MethodCall::Evaluate(Language.Lua.LuaValue,Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * MethodCall_Evaluate_m10997 (MethodCall_t3772 * __this, LuaValue_t1334 * ___baseValue, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
