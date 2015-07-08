#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Vector3
struct Vector3_t53;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" void Vector3__ctor_m2594 (Vector3_t53 * __this, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C" void Vector3__ctor_m3181 (Vector3_t53 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t53  Vector3_Lerp_m2617 (Object_t * __this /* static, unused */, Vector3_t53  ___from, Vector3_t53  ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t53  Vector3_Slerp_m2871 (Object_t * __this /* static, unused */, Vector3_t53  ___from, Vector3_t53  ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::INTERNAL_CALL_Slerp(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)
extern "C" Vector3_t53  Vector3_INTERNAL_CALL_Slerp_m16994 (Object_t * __this /* static, unused */, Vector3_t53 * ___from, Vector3_t53 * ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t53  Vector3_MoveTowards_m2887 (Object_t * __this /* static, unused */, Vector3_t53  ___current, Vector3_t53  ___target, float ___maxDistanceDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C" Vector3_t53  Vector3_RotateTowards_m3357 (Object_t * __this /* static, unused */, Vector3_t53  ___current, Vector3_t53  ___target, float ___maxRadiansDelta, float ___maxMagnitudeDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::INTERNAL_CALL_RotateTowards(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Single)
extern "C" Vector3_t53  Vector3_INTERNAL_CALL_RotateTowards_m16995 (Object_t * __this /* static, unused */, Vector3_t53 * ___current, Vector3_t53 * ___target, float ___maxRadiansDelta, float ___maxMagnitudeDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern "C" float Vector3_get_Item_m5423 (Vector3_t53 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern "C" void Vector3_set_Item_m5424 (Vector3_t53 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t53  Vector3_Scale_m2802 (Object_t * __this /* static, unused */, Vector3_t53  ___a, Vector3_t53  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t53  Vector3_Cross_m2855 (Object_t * __this /* static, unused */, Vector3_t53  ___lhs, Vector3_t53  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C" int32_t Vector3_GetHashCode_m16996 (Vector3_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C" bool Vector3_Equals_m16997 (Vector3_t53 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Reflect(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t53  Vector3_Reflect_m2868 (Object_t * __this /* static, unused */, Vector3_t53  ___inDirection, Vector3_t53  ___inNormal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" Vector3_t53  Vector3_Normalize_m16998 (Object_t * __this /* static, unused */, Vector3_t53  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" Vector3_t53  Vector3_get_normalized_m2663 (Vector3_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
extern "C" String_t* Vector3_ToString_m16999 (Vector3_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString(System.String)
extern "C" String_t* Vector3_ToString_m17000 (Vector3_t53 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Dot_m2856 (Object_t * __this /* static, unused */, Vector3_t53  ___lhs, Vector3_t53  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Angle_m2854 (Object_t * __this /* static, unused */, Vector3_t53  ___from, Vector3_t53  ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Distance_m2635 (Object_t * __this /* static, unused */, Vector3_t53  ___a, Vector3_t53  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t53  Vector3_ClampMagnitude_m2869 (Object_t * __this /* static, unused */, Vector3_t53  ___vector, float ___maxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C" float Vector3_Magnitude_m17001 (Object_t * __this /* static, unused */, Vector3_t53  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" float Vector3_get_magnitude_m2879 (Vector3_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" float Vector3_SqrMagnitude_m2832 (Object_t * __this /* static, unused */, Vector3_t53  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" float Vector3_get_sqrMagnitude_m2667 (Vector3_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t53  Vector3_Min_m5428 (Object_t * __this /* static, unused */, Vector3_t53  ___lhs, Vector3_t53  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t53  Vector3_Max_m5429 (Object_t * __this /* static, unused */, Vector3_t53  ___lhs, Vector3_t53  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" Vector3_t53  Vector3_get_zero_m2626 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" Vector3_t53  Vector3_get_one_m3416 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" Vector3_t53  Vector3_get_forward_m2752 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" Vector3_t53  Vector3_get_back_m3351 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" Vector3_t53  Vector3_get_up_m2800 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C" Vector3_t53  Vector3_get_down_m3201 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C" Vector3_t53  Vector3_get_left_m3579 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" Vector3_t53  Vector3_get_right_m3197 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t53  Vector3_op_Addition_m2620 (Object_t * __this /* static, unused */, Vector3_t53  ___a, Vector3_t53  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t53  Vector3_op_Subtraction_m2632 (Object_t * __this /* static, unused */, Vector3_t53  ___a, Vector3_t53  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" Vector3_t53  Vector3_op_UnaryNegation_m2837 (Object_t * __this /* static, unused */, Vector3_t53  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t53  Vector3_op_Multiply_m2664 (Object_t * __this /* static, unused */, Vector3_t53  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" Vector3_t53  Vector3_op_Multiply_m2688 (Object_t * __this /* static, unused */, float ___d, Vector3_t53  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t53  Vector3_op_Division_m2629 (Object_t * __this /* static, unused */, Vector3_t53  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Equality_m2888 (Object_t * __this /* static, unused */, Vector3_t53  ___lhs, Vector3_t53  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Inequality_m2683 (Object_t * __this /* static, unused */, Vector3_t53  ___lhs, Vector3_t53  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
