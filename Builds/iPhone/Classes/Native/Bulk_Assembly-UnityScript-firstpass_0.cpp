#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DUnityScriptU2Dfirstpass_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// <Module>
#include "AssemblyU2DUnityScriptU2Dfirstpass_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// SmoothFollow
#include "AssemblyU2DUnityScriptU2Dfirstpass_SmoothFollow.h"
#ifndef _MSC_VER
#else
#endif
// SmoothFollow
#include "AssemblyU2DUnityScriptU2Dfirstpass_SmoothFollowMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"


// System.Void SmoothFollow::.ctor()
extern "C" void SmoothFollow__ctor_m3378 (SmoothFollow_t705 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2326(__this, /*hidden argument*/NULL);
		__this->___distance_3 = (10.0f);
		__this->___height_4 = (5.0f);
		__this->___heightDamping_5 = (2.0f);
		__this->___rotationDamping_6 = (3.0f);
		return;
	}
}
// System.Void SmoothFollow::LateUpdate()
extern TypeInfo* Mathf_t568_il2cpp_TypeInfo_var;
extern "C" void SmoothFollow_LateUpdate_m3379 (SmoothFollow_t705 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Quaternion_t69  V_4 = {0};
	float V_5 = 0.0f;
	Vector3_t53  V_6 = {0};
	Vector3_t53  V_7 = {0};
	Vector3_t53  V_8 = {0};
	Vector3_t53  V_9 = {0};
	Vector3_t53  V_10 = {0};
	float V_11 = 0.0f;
	Vector3_t53  V_12 = {0};
	{
		Transform_t54 * L_0 = (__this->___target_2);
		bool L_1 = Object_op_Implicit_m2328(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0133;
	}

IL_0015:
	{
		Transform_t54 * L_2 = (__this->___target_2);
		NullCheck(L_2);
		Vector3_t53  L_3 = Transform_get_eulerAngles_m3032(L_2, /*hidden argument*/NULL);
		V_7 = L_3;
		float L_4 = ((&V_7)->___y_2);
		V_0 = L_4;
		Transform_t54 * L_5 = (__this->___target_2);
		NullCheck(L_5);
		Vector3_t53  L_6 = Transform_get_position_m2372(L_5, /*hidden argument*/NULL);
		V_8 = L_6;
		float L_7 = ((&V_8)->___y_2);
		float L_8 = (__this->___height_4);
		V_1 = ((float)((float)L_7+(float)L_8));
		Transform_t54 * L_9 = Component_get_transform_m2334(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t53  L_10 = Transform_get_eulerAngles_m3032(L_9, /*hidden argument*/NULL);
		V_9 = L_10;
		float L_11 = ((&V_9)->___y_2);
		V_2 = L_11;
		Transform_t54 * L_12 = Component_get_transform_m2334(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t53  L_13 = Transform_get_position_m2372(L_12, /*hidden argument*/NULL);
		V_10 = L_13;
		float L_14 = ((&V_10)->___y_2);
		V_3 = L_14;
		float L_15 = V_2;
		float L_16 = V_0;
		float L_17 = (__this->___rotationDamping_6);
		float L_18 = Time_get_deltaTime_m2359(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t568_il2cpp_TypeInfo_var);
		float L_19 = Mathf_LerpAngle_m3381(NULL /*static, unused*/, L_15, L_16, ((float)((float)L_17*(float)L_18)), /*hidden argument*/NULL);
		V_2 = L_19;
		float L_20 = V_3;
		float L_21 = V_1;
		float L_22 = (__this->___heightDamping_5);
		float L_23 = Time_get_deltaTime_m2359(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_24 = Mathf_Lerp_m2542(NULL /*static, unused*/, L_20, L_21, ((float)((float)L_22*(float)L_23)), /*hidden argument*/NULL);
		V_3 = L_24;
		float L_25 = V_2;
		Quaternion_t69  L_26 = Quaternion_Euler_m2382(NULL /*static, unused*/, (((float)0)), L_25, (((float)0)), /*hidden argument*/NULL);
		V_4 = L_26;
		Transform_t54 * L_27 = Component_get_transform_m2334(__this, /*hidden argument*/NULL);
		Transform_t54 * L_28 = (__this->___target_2);
		NullCheck(L_28);
		Vector3_t53  L_29 = Transform_get_position_m2372(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_position_m2374(L_27, L_29, /*hidden argument*/NULL);
		Transform_t54 * L_30 = Component_get_transform_m2334(__this, /*hidden argument*/NULL);
		Transform_t54 * L_31 = Component_get_transform_m2334(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t53  L_32 = Transform_get_position_m2372(L_31, /*hidden argument*/NULL);
		Quaternion_t69  L_33 = V_4;
		Vector3_t53  L_34 = Vector3_get_forward_m2493(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_35 = Quaternion_op_Multiply_m2383(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		float L_36 = (__this->___distance_3);
		Vector3_t53  L_37 = Vector3_op_Multiply_m2405(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		Vector3_t53  L_38 = Vector3_op_Subtraction_m2373(NULL /*static, unused*/, L_32, L_37, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_position_m2374(L_30, L_38, /*hidden argument*/NULL);
		float L_39 = V_3;
		float L_40 = L_39;
		V_5 = L_40;
		Transform_t54 * L_41 = Component_get_transform_m2334(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t53  L_42 = Transform_get_position_m2372(L_41, /*hidden argument*/NULL);
		Vector3_t53  L_43 = L_42;
		V_6 = L_43;
		float L_44 = V_5;
		float L_45 = L_44;
		V_11 = L_45;
		(&V_6)->___y_2 = L_45;
		float L_46 = V_11;
		Transform_t54 * L_47 = Component_get_transform_m2334(__this, /*hidden argument*/NULL);
		Vector3_t53  L_48 = V_6;
		Vector3_t53  L_49 = L_48;
		V_12 = L_49;
		NullCheck(L_47);
		Transform_set_position_m2374(L_47, L_49, /*hidden argument*/NULL);
		Vector3_t53  L_50 = V_12;
		Transform_t54 * L_51 = Component_get_transform_m2334(__this, /*hidden argument*/NULL);
		Transform_t54 * L_52 = (__this->___target_2);
		NullCheck(L_51);
		Transform_LookAt_m2384(L_51, L_52, /*hidden argument*/NULL);
	}

IL_0133:
	{
		return;
	}
}
// System.Void SmoothFollow::Main()
extern "C" void SmoothFollow_Main_m3380 (SmoothFollow_t705 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
