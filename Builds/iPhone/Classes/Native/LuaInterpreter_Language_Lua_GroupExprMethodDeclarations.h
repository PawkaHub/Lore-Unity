#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.GroupExpr
struct GroupExpr_t3770;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// Language.Lua.Term
struct Term_t3763;

// System.Void Language.Lua.GroupExpr::.ctor()
extern "C" void GroupExpr__ctor_m10991 (GroupExpr_t3770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.GroupExpr::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * GroupExpr_Evaluate_m10992 (GroupExpr_t3770 * __this, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.GroupExpr::Simplify()
extern "C" Term_t3763 * GroupExpr_Simplify_m10993 (GroupExpr_t3770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
