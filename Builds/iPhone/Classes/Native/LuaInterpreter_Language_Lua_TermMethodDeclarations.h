#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Term
struct Term_t2597;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.Term::.ctor()
extern "C" void Term__ctor_m11819 (Term_t2597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Term::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t748 * Term_Evaluate_m11820 (Term_t2597 * __this, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.Term::Simplify()
extern "C" Term_t2597 * Term_Simplify_m11821 (Term_t2597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
