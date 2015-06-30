#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_t3192;
// System.Linq.Expressions.Expression
struct Expression_t588;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3200;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3190;
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
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3189;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3199;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3205;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3204;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t3202;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3197;
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

// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
extern "C" void ExpressionVisitor__ctor_m14524 (ExpressionVisitor_t3192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression)
extern "C" void ExpressionVisitor_Visit_m14525 (ExpressionVisitor_t3192 * __this, Expression_t588 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinding(System.Linq.Expressions.MemberBinding)
extern "C" void ExpressionVisitor_VisitBinding_m14526 (ExpressionVisitor_t3192 * __this, MemberBinding_t3200 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionVisitor_VisitElementInitializer_m14527 (ExpressionVisitor_t3192 * __this, ElementInit_t3190 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionVisitor_VisitUnary_m14528 (ExpressionVisitor_t3192 * __this, UnaryExpression_t3210 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionVisitor_VisitBinary_m14529 (ExpressionVisitor_t3192 * __this, BinaryExpression_t3187 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionVisitor_VisitTypeIs_m14530 (ExpressionVisitor_t3192 * __this, TypeBinaryExpression_t3209 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionVisitor_VisitConstant_m14531 (ExpressionVisitor_t3192 * __this, ConstantExpression_t594 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionVisitor_VisitConditional_m14532 (ExpressionVisitor_t3192 * __this, ConditionalExpression_t3188 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionVisitor_VisitParameter_m14533 (ExpressionVisitor_t3192 * __this, ParameterExpression_t3208 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionVisitor_VisitMemberAccess_m14534 (ExpressionVisitor_t3192 * __this, MemberExpression_t1113 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionVisitor_VisitMethodCall_m14535 (ExpressionVisitor_t3192 * __this, MethodCallExpression_t595 * ___methodCall, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C" void ExpressionVisitor_VisitExpressionList_m14536 (ExpressionVisitor_t3192 * __this, ReadOnlyCollection_1_t3189 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionVisitor_VisitMemberAssignment_m14537 (ExpressionVisitor_t3192 * __this, MemberAssignment_t3199 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionVisitor_VisitMemberMemberBinding_m14538 (ExpressionVisitor_t3192 * __this, MemberMemberBinding_t3205 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionVisitor_VisitMemberListBinding_m14539 (ExpressionVisitor_t3192 * __this, MemberListBinding_t3204 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBindingList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>)
extern "C" void ExpressionVisitor_VisitBindingList_m14540 (ExpressionVisitor_t3192 * __this, ReadOnlyCollection_1_t3202 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializerList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>)
extern "C" void ExpressionVisitor_VisitElementInitializerList_m14541 (ExpressionVisitor_t3192 * __this, ReadOnlyCollection_1_t3197 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionVisitor_VisitLambda_m14542 (ExpressionVisitor_t3192 * __this, LambdaExpression_t1077 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionVisitor_VisitNew_m14543 (ExpressionVisitor_t3192 * __this, NewExpression_t3196 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionVisitor_VisitMemberInit_m14544 (ExpressionVisitor_t3192 * __this, MemberInitExpression_t3203 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionVisitor_VisitListInit_m14545 (ExpressionVisitor_t3192 * __this, ListInitExpression_t3198 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionVisitor_VisitNewArray_m14546 (ExpressionVisitor_t3192 * __this, NewArrayExpression_t3206 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionVisitor_VisitInvocation_m14547 (ExpressionVisitor_t3192 * __this, InvocationExpression_t3195 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
