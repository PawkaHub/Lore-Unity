#pragma once
#include <stdint.h>
// System.Linq.Expressions.Expression
struct Expression_t609;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t1400;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.BinaryExpression
struct  BinaryExpression_t3016  : public Expression_t609
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::left
	Expression_t609 * ___left_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::right
	Expression_t609 * ___right_3;
	// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::conversion
	LambdaExpression_t1400 * ___conversion_4;
};
