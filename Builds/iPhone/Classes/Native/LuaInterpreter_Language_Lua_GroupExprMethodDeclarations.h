#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.GroupExpr
struct GroupExpr_t2604;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;
// Language.Lua.Term
struct Term_t2597;

// System.Void Language.Lua.GroupExpr::.ctor()
extern "C" void GroupExpr__ctor_m11781 (GroupExpr_t2604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.GroupExpr::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t748 * GroupExpr_Evaluate_m11782 (GroupExpr_t2604 * __this, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.GroupExpr::Simplify()
extern "C" Term_t2597 * GroupExpr_Simplify_m11783 (GroupExpr_t2604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
