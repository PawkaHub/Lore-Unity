#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.Expression
struct Expression_t630;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t762;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t673;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t671;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>
struct IEnumerable_1_t3293;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t672;
// System.Object
struct Object_t;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t724;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3251;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_t3294;
// System.Reflection.MethodBase
struct MethodBase_t670;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3255;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3276;
// System.Linq.Expressions.ExpressionType
#include "System_Core_System_Linq_Expressions_ExpressionType.h"

// System.Void System.Linq.Expressions.Expression::.ctor(System.Linq.Expressions.ExpressionType,System.Type)
extern "C" void Expression__ctor_m10258 (Expression_t630 * __this, int32_t ___node_type, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern "C" int32_t Expression_get_NodeType_m3232 (Expression_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Expression::get_Type()
extern "C" Type_t * Expression_get_Type_m3239 (Expression_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.Expression::ToString()
extern "C" String_t* Expression_ToString_m10259 (Expression_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsAssignableToParameterType(System.Type,System.Reflection.ParameterInfo)
extern "C" bool Expression_IsAssignableToParameterType_m10260 (Object_t * __this /* static, unused */, Type_t * ___type, ParameterInfo_t762 * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Linq.Expressions.Expression[])
extern "C" MethodCallExpression_t673 * Expression_Call_m2922 (Object_t * __this /* static, unused */, Expression_t630 * ___instance, MethodInfo_t * ___method, ExpressionU5BU5D_t671* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
extern "C" MethodCallExpression_t673 * Expression_Call_m10261 (Object_t * __this /* static, unused */, Expression_t630 * ___instance, MethodInfo_t * ___method, Object_t* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object)
extern "C" ConstantExpression_t672 * Expression_Constant_m9263 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object,System.Type)
extern "C" ConstantExpression_t672 * Expression_Constant_m2921 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MemberExpression System.Linq.Expressions.Expression::Field(System.Linq.Expressions.Expression,System.Reflection.FieldInfo)
extern "C" MemberExpression_t724 * Expression_Field_m7705 (Object_t * __this /* static, unused */, Expression_t630 * ___expression, FieldInfo_t * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::CanAssign(System.Type,System.Type)
extern "C" bool Expression_CanAssign_m10262 (Object_t * __this /* static, unused */, Type_t * ___target, Type_t * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression::CheckLambda(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern "C" Expression_t630 * Expression_CheckLambda_m10263 (Object_t * __this /* static, unused */, Type_t * ___delegateType, Expression_t630 * ___body, ReadOnlyCollection_1_t3251 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.Expression::CreateArgumentList(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
extern "C" Object_t* Expression_CreateArgumentList_m10264 (Object_t * __this /* static, unused */, Object_t* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.Expression::CheckNonGenericMethod(System.Reflection.MethodBase)
extern "C" void Expression_CheckNonGenericMethod_m10265 (Object_t * __this /* static, unused */, MethodBase_t670 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.Expression::CheckMethodArguments(System.Reflection.MethodBase,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
extern "C" ReadOnlyCollection_1_t3255 * Expression_CheckMethodArguments_m10266 (Object_t * __this /* static, unused */, MethodBase_t670 * ___method, Object_t* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Quote(System.Linq.Expressions.Expression)
extern "C" UnaryExpression_t3276 * Expression_Quote_m10267 (Object_t * __this /* static, unused */, Expression_t630 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
