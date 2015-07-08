#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_t3258;
// System.Linq.Expressions.Expression
struct Expression_t630;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3266;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3256;
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
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3255;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3265;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3271;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3270;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t3268;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3263;
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

// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
extern "C" void ExpressionVisitor__ctor_m10310 (ExpressionVisitor_t3258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression)
extern "C" void ExpressionVisitor_Visit_m10311 (ExpressionVisitor_t3258 * __this, Expression_t630 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinding(System.Linq.Expressions.MemberBinding)
extern "C" void ExpressionVisitor_VisitBinding_m10312 (ExpressionVisitor_t3258 * __this, MemberBinding_t3266 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionVisitor_VisitElementInitializer_m10313 (ExpressionVisitor_t3258 * __this, ElementInit_t3256 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionVisitor_VisitUnary_m10314 (ExpressionVisitor_t3258 * __this, UnaryExpression_t3276 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionVisitor_VisitBinary_m10315 (ExpressionVisitor_t3258 * __this, BinaryExpression_t3253 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionVisitor_VisitTypeIs_m10316 (ExpressionVisitor_t3258 * __this, TypeBinaryExpression_t3275 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionVisitor_VisitConstant_m10317 (ExpressionVisitor_t3258 * __this, ConstantExpression_t672 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionVisitor_VisitConditional_m10318 (ExpressionVisitor_t3258 * __this, ConditionalExpression_t3254 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionVisitor_VisitParameter_m10319 (ExpressionVisitor_t3258 * __this, ParameterExpression_t3274 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionVisitor_VisitMemberAccess_m10320 (ExpressionVisitor_t3258 * __this, MemberExpression_t724 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionVisitor_VisitMethodCall_m10321 (ExpressionVisitor_t3258 * __this, MethodCallExpression_t673 * ___methodCall, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C" void ExpressionVisitor_VisitExpressionList_m10322 (ExpressionVisitor_t3258 * __this, ReadOnlyCollection_1_t3255 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionVisitor_VisitMemberAssignment_m10323 (ExpressionVisitor_t3258 * __this, MemberAssignment_t3265 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionVisitor_VisitMemberMemberBinding_m10324 (ExpressionVisitor_t3258 * __this, MemberMemberBinding_t3271 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionVisitor_VisitMemberListBinding_m10325 (ExpressionVisitor_t3258 * __this, MemberListBinding_t3270 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBindingList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>)
extern "C" void ExpressionVisitor_VisitBindingList_m10326 (ExpressionVisitor_t3258 * __this, ReadOnlyCollection_1_t3268 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializerList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>)
extern "C" void ExpressionVisitor_VisitElementInitializerList_m10327 (ExpressionVisitor_t3258 * __this, ReadOnlyCollection_1_t3263 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionVisitor_VisitLambda_m10328 (ExpressionVisitor_t3258 * __this, LambdaExpression_t1659 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionVisitor_VisitNew_m10329 (ExpressionVisitor_t3258 * __this, NewExpression_t3262 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionVisitor_VisitMemberInit_m10330 (ExpressionVisitor_t3258 * __this, MemberInitExpression_t3269 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionVisitor_VisitListInit_m10331 (ExpressionVisitor_t3258 * __this, ListInitExpression_t3264 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionVisitor_VisitNewArray_m10332 (ExpressionVisitor_t3258 * __this, NewArrayExpression_t3272 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionVisitor_VisitInvocation_m10333 (ExpressionVisitor_t3258 * __this, InvocationExpression_t3261 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
