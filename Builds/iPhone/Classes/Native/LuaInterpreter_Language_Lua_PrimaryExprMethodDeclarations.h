#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.PrimaryExpr
struct PrimaryExpr_t2617;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;
// Language.Lua.Term
struct Term_t2597;

// System.Void Language.Lua.PrimaryExpr::.ctor()
extern "C" void PrimaryExpr__ctor_m11812 (PrimaryExpr_t2617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.PrimaryExpr::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t748 * PrimaryExpr_Evaluate_m11813 (PrimaryExpr_t2617 * __this, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.PrimaryExpr::Simplify()
extern "C" Term_t2597 * PrimaryExpr_Simplify_m11814 (PrimaryExpr_t2617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
