#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionPrinter
struct ExpressionPrinter_t3020;
// System.Text.StringBuilder
struct StringBuilder_t640;
// System.String
struct String_t;
// System.Linq.Expressions.Expression
struct Expression_t609;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3019;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3029;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3039;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3016;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t3038;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t615;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t3017;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3037;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1436;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t616;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3028;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3034;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3033;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t1400;
// System.Linq.Expressions.NewExpression
struct NewExpression_t3025;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t3032;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t3027;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t3035;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3024;

// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor(System.Text.StringBuilder)
extern "C" void ExpressionPrinter__ctor_m9857 (ExpressionPrinter_t3020 * __this, StringBuilder_t640 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor()
extern "C" void ExpressionPrinter__ctor_m9858 (ExpressionPrinter_t3020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.Expression)
extern "C" String_t* ExpressionPrinter_ToString_m9859 (Object_t * __this /* static, unused */, Expression_t609 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.ElementInit)
extern "C" String_t* ExpressionPrinter_ToString_m9860 (Object_t * __this /* static, unused */, ElementInit_t3019 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.MemberBinding)
extern "C" String_t* ExpressionPrinter_ToString_m9861 (Object_t * __this /* static, unused */, MemberBinding_t3029 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String)
extern "C" void ExpressionPrinter_Print_m9862 (ExpressionPrinter_t3020 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.Object)
extern "C" void ExpressionPrinter_Print_m9863 (ExpressionPrinter_t3020 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String,System.Object[])
extern "C" void ExpressionPrinter_Print_m9864 (ExpressionPrinter_t3020 * __this, String_t* ___str, ObjectU5BU5D_t21* ___objs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionPrinter_VisitElementInitializer_m9865 (ExpressionPrinter_t3020 * __this, ElementInit_t3019 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionPrinter_VisitUnary_m9866 (ExpressionPrinter_t3020 * __this, UnaryExpression_t3039 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::OperatorToString(System.Linq.Expressions.BinaryExpression)
extern "C" String_t* ExpressionPrinter_OperatorToString_m9867 (Object_t * __this /* static, unused */, BinaryExpression_t3016 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::IsBoolean(System.Linq.Expressions.Expression)
extern "C" bool ExpressionPrinter_IsBoolean_m9868 (Object_t * __this /* static, unused */, Expression_t609 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::PrintArrayIndex(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionPrinter_PrintArrayIndex_m9869 (ExpressionPrinter_t3020 * __this, BinaryExpression_t3016 * ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionPrinter_VisitBinary_m9870 (ExpressionPrinter_t3020 * __this, BinaryExpression_t3016 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionPrinter_VisitTypeIs_m9871 (ExpressionPrinter_t3020 * __this, TypeBinaryExpression_t3038 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionPrinter_VisitConstant_m9872 (ExpressionPrinter_t3020 * __this, ConstantExpression_t615 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::HasStringRepresentation(System.Object)
extern "C" bool ExpressionPrinter_HasStringRepresentation_m9873 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionPrinter_VisitConditional_m9874 (ExpressionPrinter_t3020 * __this, ConditionalExpression_t3017 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionPrinter_VisitParameter_m9875 (ExpressionPrinter_t3020 * __this, ParameterExpression_t3037 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionPrinter_VisitMemberAccess_m9876 (ExpressionPrinter_t3020 * __this, MemberExpression_t1436 * ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionPrinter_VisitMethodCall_m9877 (ExpressionPrinter_t3020 * __this, MethodCallExpression_t616 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionPrinter_VisitMemberAssignment_m9878 (ExpressionPrinter_t3020 * __this, MemberAssignment_t3028 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionPrinter_VisitMemberMemberBinding_m9879 (ExpressionPrinter_t3020 * __this, MemberMemberBinding_t3034 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionPrinter_VisitMemberListBinding_m9880 (ExpressionPrinter_t3020 * __this, MemberListBinding_t3033 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionPrinter_VisitLambda_m9881 (ExpressionPrinter_t3020 * __this, LambdaExpression_t1400 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionPrinter_VisitNew_m9882 (ExpressionPrinter_t3020 * __this, NewExpression_t3025 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionPrinter_VisitMemberInit_m9883 (ExpressionPrinter_t3020 * __this, MemberInitExpression_t3032 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionPrinter_VisitListInit_m9884 (ExpressionPrinter_t3020 * __this, ListInitExpression_t3027 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionPrinter_VisitNewArray_m9885 (ExpressionPrinter_t3020 * __this, NewArrayExpression_t3035 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionPrinter_VisitInvocation_m9886 (ExpressionPrinter_t3020 * __this, InvocationExpression_t3024 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
