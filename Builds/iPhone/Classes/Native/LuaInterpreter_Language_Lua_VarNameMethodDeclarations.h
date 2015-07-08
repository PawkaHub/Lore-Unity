﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.VarName
struct VarName_t3788;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// Language.Lua.Term
struct Term_t3763;

// System.Void Language.Lua.VarName::.ctor()
extern "C" void VarName__ctor_m11034 (VarName_t3788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.VarName::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * VarName_Evaluate_m11035 (VarName_t3788 * __this, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.VarName::Simplify()
extern "C" Term_t3763 * VarName_Simplify_m11036 (VarName_t3788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
