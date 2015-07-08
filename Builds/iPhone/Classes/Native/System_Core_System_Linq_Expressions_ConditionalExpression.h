#pragma once
#include <stdint.h>
// System.Linq.Expressions.Expression
struct Expression_t630;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.ConditionalExpression
struct  ConditionalExpression_t3254  : public Expression_t630
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::test
	Expression_t630 * ___test_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::if_true
	Expression_t630 * ___if_true_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::if_false
	Expression_t630 * ___if_false_4;
};
