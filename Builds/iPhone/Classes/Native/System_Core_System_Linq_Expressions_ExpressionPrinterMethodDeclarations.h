#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionPrinter
struct ExpressionPrinter_t3191;
// System.Text.StringBuilder
struct StringBuilder_t619;
// System.String
struct String_t;
// System.Linq.Expressions.Expression
struct Expression_t588;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3190;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3200;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3210;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3187;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t3209;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t594;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t3188;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3208;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1113;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t595;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3199;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3205;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3204;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t1077;
// System.Linq.Expressions.NewExpression
struct NewExpression_t3196;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t3203;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t3198;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t3206;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3195;

// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor(System.Text.StringBuilder)
extern "C" void ExpressionPrinter__ctor_m14494 (ExpressionPrinter_t3191 * __this, StringBuilder_t619 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor()
extern "C" void ExpressionPrinter__ctor_m14495 (ExpressionPrinter_t3191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.Expression)
extern "C" String_t* ExpressionPrinter_ToString_m14496 (Object_t * __this /* static, unused */, Expression_t588 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.ElementInit)
extern "C" String_t* ExpressionPrinter_ToString_m14497 (Object_t * __this /* static, unused */, ElementInit_t3190 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.MemberBinding)
extern "C" String_t* ExpressionPrinter_ToString_m14498 (Object_t * __this /* static, unused */, MemberBinding_t3200 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String)
extern "C" void ExpressionPrinter_Print_m14499 (ExpressionPrinter_t3191 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.Object)
extern "C" void ExpressionPrinter_Print_m14500 (ExpressionPrinter_t3191 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String,System.Object[])
extern "C" void ExpressionPrinter_Print_m14501 (ExpressionPrinter_t3191 * __this, String_t* ___str, ObjectU5BU5D_t21* ___objs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionPrinter_VisitElementInitializer_m14502 (ExpressionPrinter_t3191 * __this, ElementInit_t3190 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionPrinter_VisitUnary_m14503 (ExpressionPrinter_t3191 * __this, UnaryExpression_t3210 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::OperatorToString(System.Linq.Expressions.BinaryExpression)
extern "C" String_t* ExpressionPrinter_OperatorToString_m14504 (Object_t * __this /* static, unused */, BinaryExpression_t3187 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::IsBoolean(System.Linq.Expressions.Expression)
extern "C" bool ExpressionPrinter_IsBoolean_m14505 (Object_t * __this /* static, unused */, Expression_t588 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::PrintArrayIndex(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionPrinter_PrintArrayIndex_m14506 (ExpressionPrinter_t3191 * __this, BinaryExpression_t3187 * ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionPrinter_VisitBinary_m14507 (ExpressionPrinter_t3191 * __this, BinaryExpression_t3187 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionPrinter_VisitTypeIs_m14508 (ExpressionPrinter_t3191 * __this, TypeBinaryExpression_t3209 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionPrinter_VisitConstant_m14509 (ExpressionPrinter_t3191 * __this, ConstantExpression_t594 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::HasStringRepresentation(System.Object)
extern "C" bool ExpressionPrinter_HasStringRepresentation_m14510 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionPrinter_VisitConditional_m14511 (ExpressionPrinter_t3191 * __this, ConditionalExpression_t3188 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionPrinter_VisitParameter_m14512 (ExpressionPrinter_t3191 * __this, ParameterExpression_t3208 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionPrinter_VisitMemberAccess_m14513 (ExpressionPrinter_t3191 * __this, MemberExpression_t1113 * ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionPrinter_VisitMethodCall_m14514 (ExpressionPrinter_t3191 * __this, MethodCallExpression_t595 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionPrinter_VisitMemberAssignment_m14515 (ExpressionPrinter_t3191 * __this, MemberAssignment_t3199 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionPrinter_VisitMemberMemberBinding_m14516 (ExpressionPrinter_t3191 * __this, MemberMemberBinding_t3205 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionPrinter_VisitMemberListBinding_m14517 (ExpressionPrinter_t3191 * __this, MemberListBinding_t3204 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionPrinter_VisitLambda_m14518 (ExpressionPrinter_t3191 * __this, LambdaExpression_t1077 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionPrinter_VisitNew_m14519 (ExpressionPrinter_t3191 * __this, NewExpression_t3196 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionPrinter_VisitMemberInit_m14520 (ExpressionPrinter_t3191 * __this, MemberInitExpression_t3203 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionPrinter_VisitListInit_m14521 (ExpressionPrinter_t3191 * __this, ListInitExpression_t3198 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionPrinter_VisitNewArray_m14522 (ExpressionPrinter_t3191 * __this, NewArrayExpression_t3206 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionPrinter_VisitInvocation_m14523 (ExpressionPrinter_t3191 * __this, InvocationExpression_t3195 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
