#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionPrinter
struct ExpressionPrinter_t3257;
// System.Text.StringBuilder
struct StringBuilder_t696;
// System.String
struct String_t;
// System.Linq.Expressions.Expression
struct Expression_t630;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3256;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3266;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3276;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3253;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t3275;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t672;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t3254;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3274;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t724;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t673;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3265;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3271;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3270;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t1659;
// System.Linq.Expressions.NewExpression
struct NewExpression_t3262;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t3269;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t3264;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t3272;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3261;

// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor(System.Text.StringBuilder)
extern "C" void ExpressionPrinter__ctor_m10280 (ExpressionPrinter_t3257 * __this, StringBuilder_t696 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor()
extern "C" void ExpressionPrinter__ctor_m10281 (ExpressionPrinter_t3257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.Expression)
extern "C" String_t* ExpressionPrinter_ToString_m10282 (Object_t * __this /* static, unused */, Expression_t630 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.ElementInit)
extern "C" String_t* ExpressionPrinter_ToString_m10283 (Object_t * __this /* static, unused */, ElementInit_t3256 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.MemberBinding)
extern "C" String_t* ExpressionPrinter_ToString_m10284 (Object_t * __this /* static, unused */, MemberBinding_t3266 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String)
extern "C" void ExpressionPrinter_Print_m10285 (ExpressionPrinter_t3257 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.Object)
extern "C" void ExpressionPrinter_Print_m10286 (ExpressionPrinter_t3257 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String,System.Object[])
extern "C" void ExpressionPrinter_Print_m10287 (ExpressionPrinter_t3257 * __this, String_t* ___str, ObjectU5BU5D_t21* ___objs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionPrinter_VisitElementInitializer_m10288 (ExpressionPrinter_t3257 * __this, ElementInit_t3256 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionPrinter_VisitUnary_m10289 (ExpressionPrinter_t3257 * __this, UnaryExpression_t3276 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::OperatorToString(System.Linq.Expressions.BinaryExpression)
extern "C" String_t* ExpressionPrinter_OperatorToString_m10290 (Object_t * __this /* static, unused */, BinaryExpression_t3253 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::IsBoolean(System.Linq.Expressions.Expression)
extern "C" bool ExpressionPrinter_IsBoolean_m10291 (Object_t * __this /* static, unused */, Expression_t630 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::PrintArrayIndex(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionPrinter_PrintArrayIndex_m10292 (ExpressionPrinter_t3257 * __this, BinaryExpression_t3253 * ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionPrinter_VisitBinary_m10293 (ExpressionPrinter_t3257 * __this, BinaryExpression_t3253 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionPrinter_VisitTypeIs_m10294 (ExpressionPrinter_t3257 * __this, TypeBinaryExpression_t3275 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionPrinter_VisitConstant_m10295 (ExpressionPrinter_t3257 * __this, ConstantExpression_t672 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::HasStringRepresentation(System.Object)
extern "C" bool ExpressionPrinter_HasStringRepresentation_m10296 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionPrinter_VisitConditional_m10297 (ExpressionPrinter_t3257 * __this, ConditionalExpression_t3254 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionPrinter_VisitParameter_m10298 (ExpressionPrinter_t3257 * __this, ParameterExpression_t3274 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionPrinter_VisitMemberAccess_m10299 (ExpressionPrinter_t3257 * __this, MemberExpression_t724 * ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionPrinter_VisitMethodCall_m10300 (ExpressionPrinter_t3257 * __this, MethodCallExpression_t673 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionPrinter_VisitMemberAssignment_m10301 (ExpressionPrinter_t3257 * __this, MemberAssignment_t3265 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionPrinter_VisitMemberMemberBinding_m10302 (ExpressionPrinter_t3257 * __this, MemberMemberBinding_t3271 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionPrinter_VisitMemberListBinding_m10303 (ExpressionPrinter_t3257 * __this, MemberListBinding_t3270 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionPrinter_VisitLambda_m10304 (ExpressionPrinter_t3257 * __this, LambdaExpression_t1659 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionPrinter_VisitNew_m10305 (ExpressionPrinter_t3257 * __this, NewExpression_t3262 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionPrinter_VisitMemberInit_m10306 (ExpressionPrinter_t3257 * __this, MemberInitExpression_t3269 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionPrinter_VisitListInit_m10307 (ExpressionPrinter_t3257 * __this, ListInitExpression_t3264 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionPrinter_VisitNewArray_m10308 (ExpressionPrinter_t3257 * __this, NewArrayExpression_t3272 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionPrinter_VisitInvocation_m10309 (ExpressionPrinter_t3257 * __this, InvocationExpression_t3261 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
