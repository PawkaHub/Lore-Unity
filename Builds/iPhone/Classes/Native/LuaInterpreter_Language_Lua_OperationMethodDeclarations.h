#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Operation
struct Operation_t2610;
// System.String
struct String_t;
// Language.Lua.Term
struct Term_t2597;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;
// Language.Lua.LuaFunction
struct LuaFunction_t2638;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_1.h"

// System.Void Language.Lua.Operation::.ctor(System.String)
extern "C" void Operation__ctor_m11794 (Operation_t2610 * __this, String_t* ___oper, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Operation::.ctor(System.String,Language.Lua.Term,Language.Lua.Term)
extern "C" void Operation__ctor_m11795 (Operation_t2610 * __this, String_t* ___oper, Term_t2597 * ___left, Term_t2597 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Operation::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t748 * Operation_Evaluate_m11796 (Operation_t2610 * __this, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Operation::PrefixUnaryOperation(System.String,Language.Lua.Term,Language.Lua.LuaTable)
extern "C" LuaValue_t748 * Operation_PrefixUnaryOperation_m11797 (Operation_t2610 * __this, String_t* ___Operator, Term_t2597 * ___RightOperand, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Operation::InfixBinaryOperation(Language.Lua.Term,System.String,Language.Lua.Term,Language.Lua.LuaTable)
extern "C" LuaValue_t748 * Operation_InfixBinaryOperation_m11798 (Operation_t2610 * __this, Term_t2597 * ___LeftOperand, String_t* ___Operator, Term_t2597 * ___RightOperand, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Language.Lua.Operation::Compare(Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" Nullable_1_t2660  Operation_Compare_m11799 (Object_t * __this /* static, unused */, LuaValue_t748 * ___leftValue, LuaValue_t748 * ___rightValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaFunction Language.Lua.Operation::GetMetaFunction(System.String,Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" LuaFunction_t2638 * Operation_GetMetaFunction_m11800 (Object_t * __this /* static, unused */, String_t* ___name, LuaValue_t748 * ___leftValue, LuaValue_t748 * ___rightValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
