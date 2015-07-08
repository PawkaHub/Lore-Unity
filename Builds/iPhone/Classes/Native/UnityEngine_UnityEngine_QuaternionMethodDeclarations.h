#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Quaternion
struct Quaternion_t69;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m7838 (Quaternion_t69 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t69  Quaternion_get_identity_m2701 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m17006 (Object_t * __this /* static, unused */, Quaternion_t69  ___a, Quaternion_t69  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" Quaternion_t69  Quaternion_AngleAxis_m3198 (Object_t * __this /* static, unused */, float ___angle, Vector3_t53  ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)
extern "C" Quaternion_t69  Quaternion_INTERNAL_CALL_AngleAxis_m17007 (Object_t * __this /* static, unused */, float ___angle, Vector3_t53 * ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Quaternion_t69  Quaternion_LookRotation_m3122 (Object_t * __this /* static, unused */, Vector3_t53  ___forward, Vector3_t53  ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" Quaternion_t69  Quaternion_LookRotation_m3352 (Object_t * __this /* static, unused */, Vector3_t53  ___forward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t69  Quaternion_INTERNAL_CALL_LookRotation_m17008 (Object_t * __this /* static, unused */, Vector3_t53 * ___forward, Vector3_t53 * ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t69  Quaternion_Slerp_m3123 (Object_t * __this /* static, unused */, Quaternion_t69  ___from, Quaternion_t69  ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t69  Quaternion_INTERNAL_CALL_Slerp_m17009 (Object_t * __this /* static, unused */, Quaternion_t69 * ___from, Quaternion_t69 * ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t69  Quaternion_Lerp_m3380 (Object_t * __this /* static, unused */, Quaternion_t69  ___from, Quaternion_t69  ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Lerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t69  Quaternion_INTERNAL_CALL_Lerp_m17010 (Object_t * __this /* static, unused */, Quaternion_t69 * ___from, Quaternion_t69 * ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t69  Quaternion_RotateTowards_m3572 (Object_t * __this /* static, unused */, Quaternion_t69  ___from, Quaternion_t69  ___to, float ___maxDegreesDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::UnclampedSlerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t69  Quaternion_UnclampedSlerp_m17011 (Object_t * __this /* static, unused */, Quaternion_t69  ___from, Quaternion_t69  ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_UnclampedSlerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t69  Quaternion_INTERNAL_CALL_UnclampedSlerp_m17012 (Object_t * __this /* static, unused */, Quaternion_t69 * ___from, Quaternion_t69 * ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t69  Quaternion_Inverse_m5442 (Object_t * __this /* static, unused */, Quaternion_t69  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t69  Quaternion_INTERNAL_CALL_Inverse_m17013 (Object_t * __this /* static, unused */, Quaternion_t69 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m17014 (Quaternion_t69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Angle_m3410 (Object_t * __this /* static, unused */, Quaternion_t69  ___a, Quaternion_t69  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" Vector3_t53  Quaternion_get_eulerAngles_m3374 (Quaternion_t69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" Quaternion_t69  Quaternion_Euler_m2641 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" Quaternion_t69  Quaternion_Euler_m2860 (Object_t * __this /* static, unused */, Vector3_t53  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t53  Quaternion_Internal_ToEulerRad_m17015 (Object_t * __this /* static, unused */, Quaternion_t69  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t53  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m17016 (Object_t * __this /* static, unused */, Quaternion_t69 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t69  Quaternion_Internal_FromEulerRad_m17017 (Object_t * __this /* static, unused */, Vector3_t53  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t69  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m17018 (Object_t * __this /* static, unused */, Vector3_t53 * ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m17019 (Quaternion_t69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m17020 (Quaternion_t69 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t69  Quaternion_op_Multiply_m2867 (Object_t * __this /* static, unused */, Quaternion_t69  ___lhs, Quaternion_t69  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t53  Quaternion_op_Multiply_m2642 (Object_t * __this /* static, unused */, Quaternion_t69  ___rotation, Vector3_t53  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m2685 (Object_t * __this /* static, unused */, Quaternion_t69  ___lhs, Quaternion_t69  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
