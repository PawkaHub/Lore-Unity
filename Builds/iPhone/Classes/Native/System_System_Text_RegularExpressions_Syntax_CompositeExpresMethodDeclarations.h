#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CompositeExpression
struct CompositeExpression_t4410;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t4408;

// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::.ctor()
extern "C" void CompositeExpression__ctor_m15064 (CompositeExpression_t4410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::get_Expressions()
extern "C" ExpressionCollection_t4408 * CompositeExpression_get_Expressions_m15065 (CompositeExpression_t4410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::GetWidth(System.Int32&,System.Int32&,System.Int32)
extern "C" void CompositeExpression_GetWidth_m15066 (CompositeExpression_t4410 * __this, int32_t* ___min, int32_t* ___max, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CompositeExpression::IsComplex()
extern "C" bool CompositeExpression_IsComplex_m15067 (CompositeExpression_t4410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
