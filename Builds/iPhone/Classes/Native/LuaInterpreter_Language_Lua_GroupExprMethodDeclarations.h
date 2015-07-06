#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.GroupExpr
struct GroupExpr_t3532;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;
// Language.Lua.Term
struct Term_t3525;

// System.Void Language.Lua.GroupExpr::.ctor()
extern "C" void GroupExpr__ctor_m10572 (GroupExpr_t3532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.GroupExpr::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * GroupExpr_Evaluate_m10573 (GroupExpr_t3532 * __this, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.GroupExpr::Simplify()
extern "C" Term_t3525 * GroupExpr_Simplify_m10574 (GroupExpr_t3532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
