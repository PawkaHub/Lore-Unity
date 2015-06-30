#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.OperatorExpr
struct OperatorExpr_t2612;
// System.String
struct String_t;
// Language.Lua.Term
struct Term_t2597;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t2661;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.OperatorExpr::.ctor()
extern "C" void OperatorExpr__ctor_m11801 (OperatorExpr_t2612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.OperatorExpr::Add(System.String)
extern "C" void OperatorExpr_Add_m11802 (OperatorExpr_t2612 * __this, String_t* ___oper, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.OperatorExpr::Add(Language.Lua.Term)
extern "C" void OperatorExpr_Add_m11803 (OperatorExpr_t2612 * __this, Term_t2597 * ___term, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.OperatorExpr::BuildExpressionTree()
extern "C" Term_t2597 * OperatorExpr_BuildExpressionTree_m11804 (OperatorExpr_t2612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.OperatorExpr::BuildExpressionTree(Language.Lua.Term,System.Collections.Generic.LinkedListNode`1<System.Object>)
extern "C" Term_t2597 * OperatorExpr_BuildExpressionTree_m11805 (Object_t * __this /* static, unused */, Term_t2597 * ___leftTerm, LinkedListNode_1_t2661 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.OperatorExpr::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t748 * OperatorExpr_Evaluate_m11806 (OperatorExpr_t2612 * __this, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.OperatorExpr::Simplify()
extern "C" Term_t2597 * OperatorExpr_Simplify_m11807 (OperatorExpr_t2612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
