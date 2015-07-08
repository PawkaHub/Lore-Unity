#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.OperatorExpr
struct OperatorExpr_t3778;
// System.String
struct String_t;
// Language.Lua.Term
struct Term_t3763;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3828;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.OperatorExpr::.ctor()
extern "C" void OperatorExpr__ctor_m11011 (OperatorExpr_t3778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.OperatorExpr::Add(System.String)
extern "C" void OperatorExpr_Add_m11012 (OperatorExpr_t3778 * __this, String_t* ___oper, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.OperatorExpr::Add(Language.Lua.Term)
extern "C" void OperatorExpr_Add_m11013 (OperatorExpr_t3778 * __this, Term_t3763 * ___term, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.OperatorExpr::BuildExpressionTree()
extern "C" Term_t3763 * OperatorExpr_BuildExpressionTree_m11014 (OperatorExpr_t3778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.OperatorExpr::BuildExpressionTree(Language.Lua.Term,System.Collections.Generic.LinkedListNode`1<System.Object>)
extern "C" Term_t3763 * OperatorExpr_BuildExpressionTree_m11015 (Object_t * __this /* static, unused */, Term_t3763 * ___leftTerm, LinkedListNode_1_t3828 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.OperatorExpr::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * OperatorExpr_Evaluate_m11016 (OperatorExpr_t3778 * __this, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.OperatorExpr::Simplify()
extern "C" Term_t3763 * OperatorExpr_Simplify_m11017 (OperatorExpr_t3778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
