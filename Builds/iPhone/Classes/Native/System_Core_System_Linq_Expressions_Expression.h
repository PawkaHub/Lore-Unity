#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Linq.Expressions.ExpressionType
#include "System_Core_System_Linq_Expressions_ExpressionType.h"
// System.Linq.Expressions.Expression
struct  Expression_t630  : public Object_t
{
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::node_type
	int32_t ___node_type_0;
	// System.Type System.Linq.Expressions.Expression::type
	Type_t * ___type_1;
};
