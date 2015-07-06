#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_t3021;
// System.Linq.Expressions.Expression
struct Expression_t609;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3029;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3019;
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
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3018;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3028;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3034;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3033;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t3031;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3026;
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

// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
extern "C" void ExpressionVisitor__ctor_m9887 (ExpressionVisitor_t3021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression)
extern "C" void ExpressionVisitor_Visit_m9888 (ExpressionVisitor_t3021 * __this, Expression_t609 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinding(System.Linq.Expressions.MemberBinding)
extern "C" void ExpressionVisitor_VisitBinding_m9889 (ExpressionVisitor_t3021 * __this, MemberBinding_t3029 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionVisitor_VisitElementInitializer_m9890 (ExpressionVisitor_t3021 * __this, ElementInit_t3019 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionVisitor_VisitUnary_m9891 (ExpressionVisitor_t3021 * __this, UnaryExpression_t3039 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionVisitor_VisitBinary_m9892 (ExpressionVisitor_t3021 * __this, BinaryExpression_t3016 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionVisitor_VisitTypeIs_m9893 (ExpressionVisitor_t3021 * __this, TypeBinaryExpression_t3038 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionVisitor_VisitConstant_m9894 (ExpressionVisitor_t3021 * __this, ConstantExpression_t615 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionVisitor_VisitConditional_m9895 (ExpressionVisitor_t3021 * __this, ConditionalExpression_t3017 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionVisitor_VisitParameter_m9896 (ExpressionVisitor_t3021 * __this, ParameterExpression_t3037 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionVisitor_VisitMemberAccess_m9897 (ExpressionVisitor_t3021 * __this, MemberExpression_t1436 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionVisitor_VisitMethodCall_m9898 (ExpressionVisitor_t3021 * __this, MethodCallExpression_t616 * ___methodCall, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C" void ExpressionVisitor_VisitExpressionList_m9899 (ExpressionVisitor_t3021 * __this, ReadOnlyCollection_1_t3018 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionVisitor_VisitMemberAssignment_m9900 (ExpressionVisitor_t3021 * __this, MemberAssignment_t3028 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionVisitor_VisitMemberMemberBinding_m9901 (ExpressionVisitor_t3021 * __this, MemberMemberBinding_t3034 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionVisitor_VisitMemberListBinding_m9902 (ExpressionVisitor_t3021 * __this, MemberListBinding_t3033 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBindingList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>)
extern "C" void ExpressionVisitor_VisitBindingList_m9903 (ExpressionVisitor_t3021 * __this, ReadOnlyCollection_1_t3031 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializerList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>)
extern "C" void ExpressionVisitor_VisitElementInitializerList_m9904 (ExpressionVisitor_t3021 * __this, ReadOnlyCollection_1_t3026 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionVisitor_VisitLambda_m9905 (ExpressionVisitor_t3021 * __this, LambdaExpression_t1400 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionVisitor_VisitNew_m9906 (ExpressionVisitor_t3021 * __this, NewExpression_t3025 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionVisitor_VisitMemberInit_m9907 (ExpressionVisitor_t3021 * __this, MemberInitExpression_t3032 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionVisitor_VisitListInit_m9908 (ExpressionVisitor_t3021 * __this, ListInitExpression_t3027 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionVisitor_VisitNewArray_m9909 (ExpressionVisitor_t3021 * __this, NewArrayExpression_t3035 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionVisitor_VisitInvocation_m9910 (ExpressionVisitor_t3021 * __this, InvocationExpression_t3024 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
