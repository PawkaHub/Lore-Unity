#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.VarName
struct VarName_t2622;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;
// Language.Lua.Term
struct Term_t2597;

// System.Void Language.Lua.VarName::.ctor()
extern "C" void VarName__ctor_m11824 (VarName_t2622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.VarName::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t748 * VarName_Evaluate_m11825 (VarName_t2622 * __this, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.VarName::Simplify()
extern "C" Term_t2597 * VarName_Simplify_m11826 (VarName_t2622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
