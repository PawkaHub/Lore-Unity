#pragma once
#include <stdint.h>
// System.Linq.Expressions.Expression
struct Expression_t630;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3251;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.LambdaExpression
struct  LambdaExpression_t1659  : public Expression_t630
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::body
	Expression_t630 * ___body_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::parameters
	ReadOnlyCollection_1_t3251 * ___parameters_3;
};
