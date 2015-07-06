#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3039;
// System.Linq.Expressions.Expression
struct Expression_t609;
// System.Type
struct Type_t;
// System.Linq.Expressions.ExpressionType
#include "System_Core_System_Linq_Expressions_ExpressionType.h"

// System.Void System.Linq.Expressions.UnaryExpression::.ctor(System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Type)
extern "C" void UnaryExpression__ctor_m9943 (UnaryExpression_t3039 * __this, int32_t ___node_type, Expression_t609 * ___operand, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
extern "C" Expression_t609 * UnaryExpression_get_Operand_m9944 (UnaryExpression_t3039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
