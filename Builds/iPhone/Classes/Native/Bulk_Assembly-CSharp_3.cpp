#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// PhotonTransformViewPositionModel/ExtrapolateOptions
#include "AssemblyU2DCSharp_PhotonTransformViewPositionModel_Extrapola.h"
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
// PhotonTransformViewPositionModel/ExtrapolateOptions
#include "AssemblyU2DCSharp_PhotonTransformViewPositionModel_ExtrapolaMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// PhotonTransformViewPositionModel
#include "AssemblyU2DCSharp_PhotonTransformViewPositionModel.h"
#ifndef _MSC_VER
#else
#endif
// PhotonTransformViewPositionModel
#include "AssemblyU2DCSharp_PhotonTransformViewPositionModelMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Single
#include "mscorlib_System_Single.h"
// PhotonTransformViewPositionModel/InterpolateOptions
#include "AssemblyU2DCSharp_PhotonTransformViewPositionModel_Interpola.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void PhotonTransformViewPositionModel::.ctor()
extern TypeInfo* KeyframeU5BU5D_t600_il2cpp_TypeInfo_var;
extern TypeInfo* AnimationCurve_t98_il2cpp_TypeInfo_var;
extern "C" void PhotonTransformViewPositionModel__ctor_m2141 (PhotonTransformViewPositionModel_t489 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyframeU5BU5D_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		AnimationCurve_t98_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___TeleportEnabled_1 = 1;
		__this->___TeleportIfDistanceGreaterThan_2 = (3.0f);
		__this->___InterpolateOption_3 = 2;
		__this->___InterpolateMoveTowardsSpeed_4 = (1.0f);
		__this->___InterpolateLerpSpeed_5 = (1.0f);
		__this->___InterpolateMoveTowardsAcceleration_6 = (2.0f);
		__this->___InterpolateMoveTowardsDeceleration_7 = (2.0f);
		KeyframeU5BU5D_t600* L_0 = ((KeyframeU5BU5D_t600*)SZArrayNew(KeyframeU5BU5D_t600_il2cpp_TypeInfo_var, 4));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Keyframe_t601  L_1 = {0};
		Keyframe__ctor_m3343(&L_1, (-1.0f), (0.0f), (0.0f), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		*((Keyframe_t601 *)(Keyframe_t601 *)SZArrayLdElema(L_0, 0)) = L_1;
		KeyframeU5BU5D_t600* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Keyframe_t601  L_3 = {0};
		Keyframe__ctor_m3343(&L_3, (0.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t601 *)(Keyframe_t601 *)SZArrayLdElema(L_2, 1)) = L_3;
		KeyframeU5BU5D_t600* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Keyframe_t601  L_5 = {0};
		Keyframe__ctor_m3343(&L_5, (1.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		*((Keyframe_t601 *)(Keyframe_t601 *)SZArrayLdElema(L_4, 2)) = L_5;
		KeyframeU5BU5D_t600* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		Keyframe_t601  L_7 = {0};
		Keyframe__ctor_m3343(&L_7, (4.0f), (4.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		*((Keyframe_t601 *)(Keyframe_t601 *)SZArrayLdElema(L_6, 3)) = L_7;
		AnimationCurve_t98 * L_8 = (AnimationCurve_t98 *)il2cpp_codegen_object_new (AnimationCurve_t98_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m2596(L_8, L_6, /*hidden argument*/NULL);
		__this->___InterpolateSpeedCurve_8 = L_8;
		__this->___ExtrapolateSpeed_10 = (1.0f);
		__this->___ExtrapolateIncludingRoundTripTime_11 = 1;
		__this->___ExtrapolateNumberOfStoredPositions_12 = 1;
		__this->___DrawErrorGizmo_13 = 1;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// PhotonTransformViewRotationControl
#include "AssemblyU2DCSharp_PhotonTransformViewRotationControl.h"
#ifndef _MSC_VER
#else
#endif
// PhotonTransformViewRotationControl
#include "AssemblyU2DCSharp_PhotonTransformViewRotationControlMethodDeclarations.h"

// PhotonTransformViewRotationModel
#include "AssemblyU2DCSharp_PhotonTransformViewRotationModel.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PhotonTransformViewRotationModel/InterpolateOptions
#include "AssemblyU2DCSharp_PhotonTransformViewRotationModel_Interpola.h"
// PhotonStream
#include "AssemblyU2DCSharp_PhotonStream.h"
// PhotonMessageInfo
#include "AssemblyU2DCSharp_PhotonMessageInfo.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// PhotonStream
#include "AssemblyU2DCSharp_PhotonStreamMethodDeclarations.h"


// System.Void PhotonTransformViewRotationControl::.ctor(PhotonTransformViewRotationModel)
extern "C" void PhotonTransformViewRotationControl__ctor_m2142 (PhotonTransformViewRotationControl_t493 * __this, PhotonTransformViewRotationModel_t490 * ___model, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		PhotonTransformViewRotationModel_t490 * L_0 = ___model;
		__this->___m_Model_0 = L_0;
		return;
	}
}
// UnityEngine.Quaternion PhotonTransformViewRotationControl::GetRotation(UnityEngine.Quaternion)
extern "C" Quaternion_t69  PhotonTransformViewRotationControl_GetRotation_m2143 (PhotonTransformViewRotationControl_t493 * __this, Quaternion_t69  ___currentRotation, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		PhotonTransformViewRotationModel_t490 * L_0 = (__this->___m_Model_0);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___InterpolateOption_1);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2 == 0)
		{
			goto IL_0023;
		}
		if (L_2 == 1)
		{
			goto IL_002a;
		}
		if (L_2 == 2)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_0023;
	}

IL_0023:
	{
		Quaternion_t69  L_3 = (__this->___m_NetworkRotation_1);
		return L_3;
	}

IL_002a:
	{
		Quaternion_t69  L_4 = ___currentRotation;
		Quaternion_t69  L_5 = (__this->___m_NetworkRotation_1);
		PhotonTransformViewRotationModel_t490 * L_6 = (__this->___m_Model_0);
		NullCheck(L_6);
		float L_7 = (L_6->___InterpolateRotateTowardsSpeed_2);
		float L_8 = Time_get_deltaTime_m2446(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t69  L_9 = Quaternion_RotateTowards_m3344(NULL /*static, unused*/, L_4, L_5, ((float)((float)L_7*(float)L_8)), /*hidden argument*/NULL);
		return L_9;
	}

IL_0048:
	{
		Quaternion_t69  L_10 = ___currentRotation;
		Quaternion_t69  L_11 = (__this->___m_NetworkRotation_1);
		PhotonTransformViewRotationModel_t490 * L_12 = (__this->___m_Model_0);
		NullCheck(L_12);
		float L_13 = (L_12->___InterpolateLerpSpeed_3);
		float L_14 = Time_get_deltaTime_m2446(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t69  L_15 = Quaternion_Lerp_m3151(NULL /*static, unused*/, L_10, L_11, ((float)((float)L_13*(float)L_14)), /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void PhotonTransformViewRotationControl::OnPhotonSerializeView(UnityEngine.Quaternion,PhotonStream,PhotonMessageInfo)
extern TypeInfo* Quaternion_t69_il2cpp_TypeInfo_var;
extern "C" void PhotonTransformViewRotationControl_OnPhotonSerializeView_m2144 (PhotonTransformViewRotationControl_t493 * __this, Quaternion_t69  ___currentRotation, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Quaternion_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		s_Il2CppMethodIntialized = true;
	}
	{
		PhotonTransformViewRotationModel_t490 * L_0 = (__this->___m_Model_0);
		NullCheck(L_0);
		bool L_1 = (L_0->___SynchronizeEnabled_0);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		PhotonStream_t439 * L_2 = ___stream;
		NullCheck(L_2);
		bool L_3 = PhotonStream_get_isWriting_m1768(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		PhotonStream_t439 * L_4 = ___stream;
		Quaternion_t69  L_5 = ___currentRotation;
		Quaternion_t69  L_6 = L_5;
		Object_t * L_7 = Box(Quaternion_t69_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		PhotonStream_SendNext_m1773(L_4, L_7, /*hidden argument*/NULL);
		goto IL_003e;
	}

IL_002d:
	{
		PhotonStream_t439 * L_8 = ___stream;
		NullCheck(L_8);
		Object_t * L_9 = PhotonStream_ReceiveNext_m1771(L_8, /*hidden argument*/NULL);
		__this->___m_NetworkRotation_1 = ((*(Quaternion_t69 *)((Quaternion_t69 *)UnBox (L_9, Quaternion_t69_il2cpp_TypeInfo_var))));
	}

IL_003e:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// PhotonTransformViewRotationModel/InterpolateOptions
#include "AssemblyU2DCSharp_PhotonTransformViewRotationModel_InterpolaMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// PhotonTransformViewRotationModel
#include "AssemblyU2DCSharp_PhotonTransformViewRotationModelMethodDeclarations.h"



// System.Void PhotonTransformViewRotationModel::.ctor()
extern "C" void PhotonTransformViewRotationModel__ctor_m2145 (PhotonTransformViewRotationModel_t490 * __this, const MethodInfo* method)
{
	{
		__this->___InterpolateOption_1 = 1;
		__this->___InterpolateRotateTowardsSpeed_2 = (180.0f);
		__this->___InterpolateLerpSpeed_3 = (5.0f);
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// PhotonTransformViewScaleControl
#include "AssemblyU2DCSharp_PhotonTransformViewScaleControl.h"
#ifndef _MSC_VER
#else
#endif
// PhotonTransformViewScaleControl
#include "AssemblyU2DCSharp_PhotonTransformViewScaleControlMethodDeclarations.h"

// PhotonTransformViewScaleModel
#include "AssemblyU2DCSharp_PhotonTransformViewScaleModel.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PhotonTransformViewScaleModel/InterpolateOptions
#include "AssemblyU2DCSharp_PhotonTransformViewScaleModel_InterpolateO.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"


// System.Void PhotonTransformViewScaleControl::.ctor(PhotonTransformViewScaleModel)
extern "C" void PhotonTransformViewScaleControl__ctor_m2146 (PhotonTransformViewScaleControl_t494 * __this, PhotonTransformViewScaleModel_t491 * ___model, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Vector3_get_one_m3187(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_NetworkScale_1 = L_0;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		PhotonTransformViewScaleModel_t491 * L_1 = ___model;
		__this->___m_Model_0 = L_1;
		return;
	}
}
// UnityEngine.Vector3 PhotonTransformViewScaleControl::GetScale(UnityEngine.Vector3)
extern "C" Vector3_t53  PhotonTransformViewScaleControl_GetScale_m2147 (PhotonTransformViewScaleControl_t494 * __this, Vector3_t53  ___currentScale, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		PhotonTransformViewScaleModel_t491 * L_0 = (__this->___m_Model_0);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___InterpolateOption_1);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2 == 0)
		{
			goto IL_0023;
		}
		if (L_2 == 1)
		{
			goto IL_002a;
		}
		if (L_2 == 2)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_0023;
	}

IL_0023:
	{
		Vector3_t53  L_3 = (__this->___m_NetworkScale_1);
		return L_3;
	}

IL_002a:
	{
		Vector3_t53  L_4 = ___currentScale;
		Vector3_t53  L_5 = (__this->___m_NetworkScale_1);
		PhotonTransformViewScaleModel_t491 * L_6 = (__this->___m_Model_0);
		NullCheck(L_6);
		float L_7 = (L_6->___InterpolateMoveTowardsSpeed_2);
		float L_8 = Time_get_deltaTime_m2446(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_9 = Vector3_MoveTowards_m2715(NULL /*static, unused*/, L_4, L_5, ((float)((float)L_7*(float)L_8)), /*hidden argument*/NULL);
		return L_9;
	}

IL_0048:
	{
		Vector3_t53  L_10 = ___currentScale;
		Vector3_t53  L_11 = (__this->___m_NetworkScale_1);
		PhotonTransformViewScaleModel_t491 * L_12 = (__this->___m_Model_0);
		NullCheck(L_12);
		float L_13 = (L_12->___InterpolateLerpSpeed_3);
		float L_14 = Time_get_deltaTime_m2446(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_15 = Vector3_Lerp_m2445(NULL /*static, unused*/, L_10, L_11, ((float)((float)L_13*(float)L_14)), /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void PhotonTransformViewScaleControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern TypeInfo* Vector3_t53_il2cpp_TypeInfo_var;
extern "C" void PhotonTransformViewScaleControl_OnPhotonSerializeView_m2148 (PhotonTransformViewScaleControl_t494 * __this, Vector3_t53  ___currentScale, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	{
		PhotonTransformViewScaleModel_t491 * L_0 = (__this->___m_Model_0);
		NullCheck(L_0);
		bool L_1 = (L_0->___SynchronizeEnabled_0);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		PhotonStream_t439 * L_2 = ___stream;
		NullCheck(L_2);
		bool L_3 = PhotonStream_get_isWriting_m1768(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		PhotonStream_t439 * L_4 = ___stream;
		Vector3_t53  L_5 = ___currentScale;
		Vector3_t53  L_6 = L_5;
		Object_t * L_7 = Box(Vector3_t53_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		PhotonStream_SendNext_m1773(L_4, L_7, /*hidden argument*/NULL);
		goto IL_003e;
	}

IL_002d:
	{
		PhotonStream_t439 * L_8 = ___stream;
		NullCheck(L_8);
		Object_t * L_9 = PhotonStream_ReceiveNext_m1771(L_8, /*hidden argument*/NULL);
		__this->___m_NetworkScale_1 = ((*(Vector3_t53 *)((Vector3_t53 *)UnBox (L_9, Vector3_t53_il2cpp_TypeInfo_var))));
	}

IL_003e:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// PhotonTransformViewScaleModel/InterpolateOptions
#include "AssemblyU2DCSharp_PhotonTransformViewScaleModel_InterpolateOMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// PhotonTransformViewScaleModel
#include "AssemblyU2DCSharp_PhotonTransformViewScaleModelMethodDeclarations.h"



// System.Void PhotonTransformViewScaleModel::.ctor()
extern "C" void PhotonTransformViewScaleModel__ctor_m2149 (PhotonTransformViewScaleModel_t491 * __this, const MethodInfo* method)
{
	{
		__this->___InterpolateMoveTowardsSpeed_2 = (1.0f);
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// ConnectAndJoinRandom
#include "AssemblyU2DCSharp_ConnectAndJoinRandom.h"
#ifndef _MSC_VER
#else
#endif
// ConnectAndJoinRandom
#include "AssemblyU2DCSharp_ConnectAndJoinRandomMethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"
// System.String
#include "mscorlib_System_String.h"
// PhotonNetwork
#include "AssemblyU2DCSharp_PhotonNetwork.h"
// NetworkingPeer
#include "AssemblyU2DCSharp_NetworkingPeer.h"
// System.Collections.Generic.List`1<Region>
#include "mscorlib_System_Collections_Generic_List_1_gen_26.h"
#include "mscorlib_ArrayTypes.h"
// Region
#include "AssemblyU2DCSharp_Region.h"
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// RoomOptions
#include "AssemblyU2DCSharp_RoomOptions.h"
// TypedLobby
#include "AssemblyU2DCSharp_TypedLobby.h"
// DisconnectCause
#include "AssemblyU2DCSharp_DisconnectCause.h"
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviourMethodDeclarations.h"
// PhotonNetwork
#include "AssemblyU2DCSharp_PhotonNetworkMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// NetworkingPeer
#include "AssemblyU2DCSharp_NetworkingPeerMethodDeclarations.h"
// System.Collections.Generic.List`1<Region>
#include "mscorlib_System_Collections_Generic_List_1_gen_26MethodDeclarations.h"
// RoomOptions
#include "AssemblyU2DCSharp_RoomOptionsMethodDeclarations.h"


// System.Void ConnectAndJoinRandom::.ctor()
extern "C" void ConnectAndJoinRandom__ctor_m2150 (ConnectAndJoinRandom_t500 * __this, const MethodInfo* method)
{
	{
		__this->___AutoConnect_2 = 1;
		__this->___Version_3 = 1;
		__this->___ConnectInUpdate_4 = 1;
		MonoBehaviour__ctor_m1718(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConnectAndJoinRandom::Start()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern "C" void ConnectAndJoinRandom_Start_m2151 (ConnectAndJoinRandom_t500 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonNetwork_set_autoJoinLobby_m1864(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConnectAndJoinRandom::Update()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConnectAndJoinRandom_Update_m2152 (ConnectAndJoinRandom_t500 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___ConnectInUpdate_4);
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		bool L_1 = (__this->___AutoConnect_2);
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		bool L_2 = PhotonNetwork_get_connected_m1835(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0056;
		}
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral719, /*hidden argument*/NULL);
		__this->___ConnectInUpdate_4 = 0;
		uint8_t L_3 = (__this->___Version_3);
		uint8_t L_4 = L_3;
		Object_t * L_5 = Box(Byte_t26_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = Application_get_loadedLevel_m3095(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m2919(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral78, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonNetwork_ConnectUsingSettings_m1897(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void ConnectAndJoinRandom::OnConnectedToMaster()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* CloudRegionCode_t393_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConnectAndJoinRandom_OnConnectedToMaster_m2153 (ConnectAndJoinRandom_t500 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		CloudRegionCode_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(368);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		NetworkingPeer_t434 * L_0 = ((PhotonNetwork_t455_StaticFields*)PhotonNetwork_t455_il2cpp_TypeInfo_var->static_fields)->___networkingPeer_4;
		NullCheck(L_0);
		List_1_t433 * L_1 = NetworkingPeer_get_AvailableRegions_m1624(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t21* L_2 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 6));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral720);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)(String_t*) &_stringLiteral720;
		ObjectU5BU5D_t21* L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		NetworkingPeer_t434 * L_4 = ((PhotonNetwork_t455_StaticFields*)PhotonNetwork_t455_il2cpp_TypeInfo_var->static_fields)->___networkingPeer_4;
		NullCheck(L_4);
		List_1_t433 * L_5 = NetworkingPeer_get_AvailableRegions_m1624(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Region>::get_Count() */, L_5);
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 1)) = (Object_t *)L_8;
		ObjectU5BU5D_t21* L_9 = L_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 2);
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral721);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 2)) = (Object_t *)(String_t*) &_stringLiteral721;
		ObjectU5BU5D_t21* L_10 = L_9;
		NetworkingPeer_t434 * L_11 = ((PhotonNetwork_t455_StaticFields*)PhotonNetwork_t455_il2cpp_TypeInfo_var->static_fields)->___networkingPeer_4;
		NullCheck(L_11);
		List_1_t433 * L_12 = NetworkingPeer_get_AvailableRegions_m1624(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Region_t443 * L_13 = (Region_t443 *)VirtFuncInvoker1< Region_t443 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Region>::get_Item(System.Int32) */, L_12, 0);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_13;
		ObjectU5BU5D_t21* L_14 = L_10;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 4);
		ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral722);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 4)) = (Object_t *)(String_t*) &_stringLiteral722;
		ObjectU5BU5D_t21* L_15 = L_14;
		NetworkingPeer_t434 * L_16 = ((PhotonNetwork_t455_StaticFields*)PhotonNetwork_t455_il2cpp_TypeInfo_var->static_fields)->___networkingPeer_4;
		NullCheck(L_16);
		int32_t L_17 = NetworkingPeer_get_CloudRegion_m1626(L_16, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(CloudRegionCode_t393_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 5);
		ArrayElementTypeCheck (L_15, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 5)) = (Object_t *)L_19;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m2490(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		Debug_LogWarning_m2768(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
	}

IL_0073:
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral723, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonNetwork_JoinRandomRoom_m1913(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConnectAndJoinRandom::OnPhotonRandomJoinFailed()
extern TypeInfo* RoomOptions_t430_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern "C" void ConnectAndJoinRandom_OnPhotonRandomJoinFailed_m2154 (ConnectAndJoinRandom_t500 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RoomOptions_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	RoomOptions_t430 * V_0 = {0};
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral724, /*hidden argument*/NULL);
		RoomOptions_t430 * L_0 = (RoomOptions_t430 *)il2cpp_codegen_object_new (RoomOptions_t430_il2cpp_TypeInfo_var);
		RoomOptions__ctor_m1751(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RoomOptions_t430 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___maxPlayers_2 = 4;
		RoomOptions_t430 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonNetwork_CreateRoom_m1909(NULL /*static, unused*/, (String_t*)NULL, L_2, (TypedLobby_t431 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConnectAndJoinRandom::OnFailedToConnectToPhoton(DisconnectCause)
extern TypeInfo* DisconnectCause_t398_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConnectAndJoinRandom_OnFailedToConnectToPhoton_m2155 (ConnectAndJoinRandom_t500 * __this, int32_t ___cause, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisconnectCause_t398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___cause;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(DisconnectCause_t398_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral725, L_2, /*hidden argument*/NULL);
		Debug_LogError_m2815(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConnectAndJoinRandom::OnJoinedRoom()
extern "C" void ConnectAndJoinRandom_OnJoinedRoom_m2156 (ConnectAndJoinRandom_t500 * __this, const MethodInfo* method)
{
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral726, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConnectAndJoinRandom::OnJoinedLobby()
extern "C" void ConnectAndJoinRandom_OnJoinedLobby_m2157 (ConnectAndJoinRandom_t500 * __this, const MethodInfo* method)
{
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral727, /*hidden argument*/NULL);
		return;
	}
}
// HighlightOwnedGameObj
#include "AssemblyU2DCSharp_HighlightOwnedGameObj.h"
#ifndef _MSC_VER
#else
#endif
// HighlightOwnedGameObj
#include "AssemblyU2DCSharp_HighlightOwnedGameObjMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// PhotonView
#include "AssemblyU2DCSharp_PhotonView.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// PhotonView
#include "AssemblyU2DCSharp_PhotonViewMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
struct Object_t584;
struct GameObject_t49;
struct Object_t584;
struct Object_t;
// Declaration !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" Object_t * Object_Instantiate_TisObject_t_m2483_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define Object_Instantiate_TisObject_t_m2483(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Object_Instantiate_TisObject_t_m2483_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t49_m2482(__this /* static, unused */, p0, method) (( GameObject_t49 * (*) (Object_t * /* static, unused */, GameObject_t49 *, const MethodInfo*))Object_Instantiate_TisObject_t_m2483_gshared)(__this /* static, unused */, p0, method)


// System.Void HighlightOwnedGameObj::.ctor()
extern "C" void HighlightOwnedGameObj__ctor_m2158 (HighlightOwnedGameObj_t501 * __this, const MethodInfo* method)
{
	{
		__this->___Offset_3 = (0.5f);
		MonoBehaviour__ctor_m1718(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HighlightOwnedGameObj::Update()
extern const MethodInfo* Object_Instantiate_TisGameObject_t49_m2482_MethodInfo_var;
extern "C" void HighlightOwnedGameObj_Update_m2159 (HighlightOwnedGameObj_t501 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_Instantiate_TisGameObject_t49_m2482_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483662);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t49 * V_0 = {0};
	Vector3_t53  V_1 = {0};
	{
		PhotonView_t325 * L_0 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = PhotonView_get_isMine_m2002(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00a1;
		}
	}
	{
		Transform_t54 * L_2 = (__this->___markerTransform_4);
		bool L_3 = Object_op_Equality_m2464(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		GameObject_t49 * L_4 = (__this->___PointerPrefab_2);
		GameObject_t49 * L_5 = Object_Instantiate_TisGameObject_t49_m2482(NULL /*static, unused*/, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_t49_m2482_MethodInfo_var);
		V_0 = L_5;
		GameObject_t49 * L_6 = V_0;
		NullCheck(L_6);
		Transform_t54 * L_7 = GameObject_get_transform_m2462(L_6, /*hidden argument*/NULL);
		GameObject_t49 * L_8 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t54 * L_9 = GameObject_get_transform_m2462(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_parent_m2509(L_7, L_9, /*hidden argument*/NULL);
		GameObject_t49 * L_10 = V_0;
		NullCheck(L_10);
		Transform_t54 * L_11 = GameObject_get_transform_m2462(L_10, /*hidden argument*/NULL);
		__this->___markerTransform_4 = L_11;
	}

IL_004f:
	{
		GameObject_t49 * L_12 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_t54 * L_13 = GameObject_get_transform_m2462(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t53  L_14 = Transform_get_position_m2459(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		Transform_t54 * L_15 = (__this->___markerTransform_4);
		float L_16 = ((&V_1)->___x_1);
		float L_17 = ((&V_1)->___y_2);
		float L_18 = (__this->___Offset_3);
		float L_19 = ((&V_1)->___z_3);
		Vector3_t53  L_20 = {0};
		Vector3__ctor_m2422(&L_20, L_16, ((float)((float)L_17+(float)L_18)), L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_position_m2461(L_15, L_20, /*hidden argument*/NULL);
		Transform_t54 * L_21 = (__this->___markerTransform_4);
		Quaternion_t69  L_22 = Quaternion_get_identity_m2529(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_rotation_m2633(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00c9;
	}

IL_00a1:
	{
		Transform_t54 * L_23 = (__this->___markerTransform_4);
		bool L_24 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_23, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00c9;
		}
	}
	{
		Transform_t54 * L_25 = (__this->___markerTransform_4);
		NullCheck(L_25);
		GameObject_t49 * L_26 = Component_get_gameObject_m2452(L_25, /*hidden argument*/NULL);
		Object_Destroy_m2754(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		__this->___markerTransform_4 = (Transform_t54 *)NULL;
	}

IL_00c9:
	{
		return;
	}
}
// InRoomChat
#include "AssemblyU2DCSharp_InRoomChat.h"
#ifndef _MSC_VER
#else
#endif
// InRoomChat
#include "AssemblyU2DCSharp_InRoomChatMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// PeerState
#include "AssemblyU2DCSharp_PeerState.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// PhotonTargets
#include "AssemblyU2DCSharp_PhotonTargets.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
// PhotonPlayer
#include "AssemblyU2DCSharp_PhotonPlayer.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
// PhotonPlayer
#include "AssemblyU2DCSharp_PhotonPlayerMethodDeclarations.h"


// System.Void InRoomChat::.ctor()
extern TypeInfo* List_1_t1_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m83_MethodInfo_var;
extern "C" void InRoomChat__ctor_m2160 (InRoomChat_t502 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		List_1__ctor_m83_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t201  L_0 = {0};
		Rect__ctor_m2425(&L_0, (0.0f), (0.0f), (250.0f), (300.0f), /*hidden argument*/NULL);
		__this->___GuiRect_2 = L_0;
		__this->___IsVisible_3 = 1;
		List_1_t1 * L_1 = (List_1_t1 *)il2cpp_codegen_object_new (List_1_t1_il2cpp_TypeInfo_var);
		List_1__ctor_m83(L_1, /*hidden argument*/List_1__ctor_m83_MethodInfo_var);
		__this->___messages_5 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___inputLine_6 = L_2;
		Vector2_t97  L_3 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollPos_7 = L_3;
		MonoBehaviour__ctor_m1718(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InRoomChat::.cctor()
extern TypeInfo* InRoomChat_t502_il2cpp_TypeInfo_var;
extern "C" void InRoomChat__cctor_m2161 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InRoomChat_t502_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		s_Il2CppMethodIntialized = true;
	}
	{
		((InRoomChat_t502_StaticFields*)InRoomChat_t502_il2cpp_TypeInfo_var->static_fields)->___ChatRPC_8 = (String_t*) &_stringLiteral281;
		return;
	}
}
// System.Void InRoomChat::Start()
extern "C" void InRoomChat_Start_m2162 (InRoomChat_t502 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___AlignBottom_4);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		Rect_t201 * L_1 = &(__this->___GuiRect_2);
		int32_t L_2 = Screen_get_height_m2428(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t201 * L_3 = &(__this->___GuiRect_2);
		float L_4 = Rect_get_height_m2868(L_3, /*hidden argument*/NULL);
		Rect_set_y_m3054(L_1, ((float)((float)(((float)L_2))-(float)L_4)), /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void InRoomChat::OnGUI()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var;
extern "C" void InRoomChat_OnGUI_m2163 (InRoomChat_t502 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___IsVisible_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		int32_t L_1 = PhotonNetwork_get_connectionStateDetailed_m1839(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)9))))
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		return;
	}

IL_0018:
	{
		Event_t662 * L_2 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m3060(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_009d;
		}
	}
	{
		Event_t662 * L_4 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Event_get_keyCode_m3061(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)271))))
		{
			goto IL_004d;
		}
	}
	{
		Event_t662 * L_6 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = Event_get_keyCode_m3061(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_009d;
		}
	}

IL_004d:
	{
		String_t* L_8 = (__this->___inputLine_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0093;
		}
	}
	{
		PhotonView_t325 * L_10 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_11 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		String_t* L_12 = (__this->___inputLine_6);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 0)) = (Object_t *)L_12;
		NullCheck(L_10);
		PhotonView_RPC_m2015(L_10, (String_t*) &_stringLiteral281, 0, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___inputLine_6 = L_13;
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_FocusControl_m3063(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		return;
	}

IL_0093:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_FocusControl_m3063(NULL /*static, unused*/, (String_t*) &_stringLiteral203, /*hidden argument*/NULL);
	}

IL_009d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_SetNextControlName_m3064(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		Rect_t201  L_16 = (__this->___GuiRect_2);
		GUILayout_BeginArea_m2994(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		Vector2_t97  L_17 = (__this->___scrollPos_7);
		Vector2_t97  L_18 = GUILayout_BeginScrollView_m3071(NULL /*static, unused*/, L_17, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		__this->___scrollPos_7 = L_18;
		GUILayout_FlexibleSpace_m3065(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t1 * L_19 = (__this->___messages_5);
		NullCheck(L_19);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_19);
		V_0 = ((int32_t)((int32_t)L_20-(int32_t)1));
		goto IL_00fc;
	}

IL_00e1:
	{
		List_1_t1 * L_21 = (__this->___messages_5);
		int32_t L_22 = V_0;
		NullCheck(L_21);
		String_t* L_23 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_21, L_22);
		GUILayout_Label_m3043(NULL /*static, unused*/, L_23, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)((int32_t)L_24-(int32_t)1));
	}

IL_00fc:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		GUILayout_EndScrollView_m3073(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_BeginHorizontal_m3074(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_SetNextControlName_m3064(NULL /*static, unused*/, (String_t*) &_stringLiteral203, /*hidden argument*/NULL);
		String_t* L_26 = (__this->___inputLine_6);
		String_t* L_27 = GUILayout_TextField_m3076(NULL /*static, unused*/, L_26, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		__this->___inputLine_6 = L_27;
		GUILayoutOptionU5BU5D_t658* L_28 = ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 1));
		GUILayoutOption_t664 * L_29 = GUILayout_ExpandWidth_m3069(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 0);
		ArrayElementTypeCheck (L_28, L_29);
		*((GUILayoutOption_t664 **)(GUILayoutOption_t664 **)SZArrayLdElema(L_28, 0)) = (GUILayoutOption_t664 *)L_29;
		bool L_30 = GUILayout_Button_m3044(NULL /*static, unused*/, (String_t*) &_stringLiteral208, L_28, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0187;
		}
	}
	{
		PhotonView_t325 * L_31 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_32 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		String_t* L_33 = (__this->___inputLine_6);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 0);
		ArrayElementTypeCheck (L_32, L_33);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 0)) = (Object_t *)L_33;
		NullCheck(L_31);
		PhotonView_RPC_m2015(L_31, (String_t*) &_stringLiteral281, 0, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___inputLine_6 = L_34;
		String_t* L_35 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_FocusControl_m3063(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
	}

IL_0187:
	{
		GUILayout_EndHorizontal_m3077(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_EndArea_m3000(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InRoomChat::Chat(System.String,PhotonMessageInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" void InRoomChat_Chat_m2164 (InRoomChat_t502 * __this, String_t* ___newLine, PhotonMessageInfo_t435 * ___mi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		V_0 = (String_t*) &_stringLiteral728;
		PhotonMessageInfo_t435 * L_0 = ___mi;
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		PhotonMessageInfo_t435 * L_1 = ___mi;
		NullCheck(L_1);
		PhotonPlayer_t432 * L_2 = (L_1->___sender_1);
		if (!L_2)
		{
			goto IL_0058;
		}
	}
	{
		PhotonMessageInfo_t435 * L_3 = ___mi;
		NullCheck(L_3);
		PhotonPlayer_t432 * L_4 = (L_3->___sender_1);
		NullCheck(L_4);
		String_t* L_5 = PhotonPlayer_get_name_m1958(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_003d;
		}
	}
	{
		PhotonMessageInfo_t435 * L_7 = ___mi;
		NullCheck(L_7);
		PhotonPlayer_t432 * L_8 = (L_7->___sender_1);
		NullCheck(L_8);
		String_t* L_9 = PhotonPlayer_get_name_m1958(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0058;
	}

IL_003d:
	{
		PhotonMessageInfo_t435 * L_10 = ___mi;
		NullCheck(L_10);
		PhotonPlayer_t432 * L_11 = (L_10->___sender_1);
		NullCheck(L_11);
		int32_t L_12 = PhotonPlayer_get_ID_m1957(L_11, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral729, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_0058:
	{
		List_1_t1 * L_16 = (__this->___messages_5);
		String_t* L_17 = V_0;
		String_t* L_18 = ___newLine;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m103(NULL /*static, unused*/, L_17, (String_t*) &_stringLiteral459, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_16, L_19);
		return;
	}
}
// System.Void InRoomChat::AddLine(System.String)
extern "C" void InRoomChat_AddLine_m2165 (InRoomChat_t502 * __this, String_t* ___newLine, const MethodInfo* method)
{
	{
		List_1_t1 * L_0 = (__this->___messages_5);
		String_t* L_1 = ___newLine;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_0, L_1);
		return;
	}
}
// InRoomRoundTimer
#include "AssemblyU2DCSharp_InRoomRoundTimer.h"
#ifndef _MSC_VER
#else
#endif
// InRoomRoundTimer
#include "AssemblyU2DCSharp_InRoomRoundTimerMethodDeclarations.h"

// ExitGames.Client.Photon.Hashtable
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable.h"
// System.Double
#include "mscorlib_System_Double.h"
// Room
#include "AssemblyU2DCSharp_Room.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// ExitGames.Client.Photon.Hashtable
#include "Photon3Unity3D_ExitGames_Client_Photon_HashtableMethodDeclarations.h"
// Room
#include "AssemblyU2DCSharp_RoomMethodDeclarations.h"
// RoomInfo
#include "AssemblyU2DCSharp_RoomInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"


// System.Void InRoomRoundTimer::.ctor()
extern "C" void InRoomRoundTimer__ctor_m2166 (InRoomRoundTimer_t503 * __this, const MethodInfo* method)
{
	{
		__this->___SecondsPerTurn_3 = 5;
		Rect_t201  L_0 = {0};
		Rect__ctor_m2425(&L_0, (0.0f), (80.0f), (150.0f), (300.0f), /*hidden argument*/NULL);
		__this->___TextPos_5 = L_0;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InRoomRoundTimer::StartRoundNow()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t436_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t700_il2cpp_TypeInfo_var;
extern "C" void InRoomRoundTimer_StartRoundNow_m2167 (InRoomRoundTimer_t503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		Hashtable_t436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(347);
		Double_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t436 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		double L_0 = PhotonNetwork_get_time_m1876(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((double)L_0) < ((double)(9.9999997473787516E-05)))))
		{
			goto IL_001b;
		}
	}
	{
		__this->___startRoundWhenTimeIsSynced_6 = 1;
		return;
	}

IL_001b:
	{
		__this->___startRoundWhenTimeIsSynced_6 = 0;
		Hashtable_t436 * L_1 = (Hashtable_t436 *)il2cpp_codegen_object_new (Hashtable_t436_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3183(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t436 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		double L_3 = PhotonNetwork_get_time_m1876(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_4 = L_3;
		Object_t * L_5 = Box(Double_t700_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		Hashtable_set_Item_m3186(L_2, (String_t*) &_stringLiteral730, L_5, /*hidden argument*/NULL);
		Room_t429 * L_6 = PhotonNetwork_get_room_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		Hashtable_t436 * L_7 = V_0;
		NullCheck(L_6);
		Room_SetCustomProperties_m2051(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InRoomRoundTimer::OnJoinedRoom()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void InRoomRoundTimer_OnJoinedRoom_m2168 (InRoomRoundTimer_t503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		bool L_0 = PhotonNetwork_get_isMasterClient_m1877(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		InRoomRoundTimer_StartRoundNow_m2167(__this, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		Room_t429 * L_1 = PhotonNetwork_get_room_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Hashtable_t436 * L_2 = RoomInfo_get_customProperties_m2061(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral730);
		bool L_4 = L_3;
		Object_t * L_5 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral731, L_5, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void InRoomRoundTimer::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern TypeInfo* Double_t700_il2cpp_TypeInfo_var;
extern "C" void InRoomRoundTimer_OnPhotonCustomRoomPropertiesChanged_m2169 (InRoomRoundTimer_t503 * __this, Hashtable_t436 * ___propertiesThatChanged, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Double_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t436 * L_0 = ___propertiesThatChanged;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0) */, L_0, (String_t*) &_stringLiteral730);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Hashtable_t436 * L_2 = ___propertiesThatChanged;
		NullCheck(L_2);
		Object_t * L_3 = Hashtable_get_Item_m3214(L_2, (String_t*) &_stringLiteral730, /*hidden argument*/NULL);
		__this->___StartTime_4 = ((*(double*)((double*)UnBox (L_3, Double_t700_il2cpp_TypeInfo_var))));
	}

IL_0026:
	{
		return;
	}
}
// System.Void InRoomRoundTimer::OnMasterClientSwitched(PhotonPlayer)
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern "C" void InRoomRoundTimer_OnMasterClientSwitched_m2170 (InRoomRoundTimer_t503 * __this, PhotonPlayer_t432 * ___newMasterClient, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		Room_t429 * L_0 = PhotonNetwork_get_room_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Hashtable_t436 * L_1 = RoomInfo_get_customProperties_m2061(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0) */, L_1, (String_t*) &_stringLiteral730);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral732, /*hidden argument*/NULL);
		InRoomRoundTimer_StartRoundNow_m2167(__this, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void InRoomRoundTimer::Update()
extern "C" void InRoomRoundTimer_Update_m2171 (InRoomRoundTimer_t503 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___startRoundWhenTimeIsSynced_6);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		InRoomRoundTimer_StartRoundNow_m2167(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void InRoomRoundTimer::OnGUI()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t700_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" void InRoomRoundTimer_OnGUI_m2172 (InRoomRoundTimer_t503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		Double_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		double L_0 = PhotonNetwork_get_time_m1876(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_1 = (__this->___StartTime_4);
		V_0 = ((double)((double)L_0-(double)L_1));
		int32_t L_2 = (__this->___SecondsPerTurn_3);
		double L_3 = V_0;
		int32_t L_4 = (__this->___SecondsPerTurn_3);
		V_1 = ((double)((double)(((double)L_2))-(double)(fmod(L_3, (((double)L_4))))));
		double L_5 = V_0;
		int32_t L_6 = (__this->___SecondsPerTurn_3);
		V_2 = (((int32_t)((double)((double)L_5/(double)(((double)L_6))))));
		Rect_t201  L_7 = (__this->___TextPos_5);
		GUILayout_BeginArea_m2994(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		double L_8 = V_0;
		double L_9 = L_8;
		Object_t * L_10 = Box(Double_t700_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2767(NULL /*static, unused*/, (String_t*) &_stringLiteral733, L_10, /*hidden argument*/NULL);
		GUILayout_Label_m3043(NULL /*static, unused*/, L_11, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		double L_12 = V_1;
		double L_13 = L_12;
		Object_t * L_14 = Box(Double_t700_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Format_m2767(NULL /*static, unused*/, (String_t*) &_stringLiteral734, L_14, /*hidden argument*/NULL);
		GUILayout_Label_m3043(NULL /*static, unused*/, L_15, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19 = String_Format_m2767(NULL /*static, unused*/, (String_t*) &_stringLiteral735, L_18, /*hidden argument*/NULL);
		GUILayout_Label_m3043(NULL /*static, unused*/, L_19, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		bool L_20 = GUILayout_Button_m3044(NULL /*static, unused*/, (String_t*) &_stringLiteral736, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00a1;
		}
	}
	{
		InRoomRoundTimer_StartRoundNow_m2167(__this, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		GUILayout_EndArea_m3000(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// InputToEvent
#include "AssemblyU2DCSharp_InputToEvent.h"
#ifndef _MSC_VER
#else
#endif
// InputToEvent
#include "AssemblyU2DCSharp_InputToEventMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
struct Component_t462;
struct Camera_t356;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t462;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m2412_gshared (Component_t462 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m2412(__this, method) (( Object_t * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t356_m2946(__this, method) (( Camera_t356 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void InputToEvent::.ctor()
extern "C" void InputToEvent__ctor_m2173 (InputToEvent_t504 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___pressedPosition_5 = L_0;
		Vector2_t97  L_1 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___currentPos_6 = L_1;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject InputToEvent::get_goPointedAt()
extern TypeInfo* InputToEvent_t504_il2cpp_TypeInfo_var;
extern "C" GameObject_t49 * InputToEvent_get_goPointedAt_m2174 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputToEvent_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t49 * L_0 = ((InputToEvent_t504_StaticFields*)InputToEvent_t504_il2cpp_TypeInfo_var->static_fields)->___U3CgoPointedAtU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void InputToEvent::set_goPointedAt(UnityEngine.GameObject)
extern TypeInfo* InputToEvent_t504_il2cpp_TypeInfo_var;
extern "C" void InputToEvent_set_goPointedAt_m2175 (Object_t * __this /* static, unused */, GameObject_t49 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputToEvent_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t49 * L_0 = ___value;
		((InputToEvent_t504_StaticFields*)InputToEvent_t504_il2cpp_TypeInfo_var->static_fields)->___U3CgoPointedAtU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.Vector2 InputToEvent::get_DragVector()
extern "C" Vector2_t97  InputToEvent_get_DragVector_m2176 (InputToEvent_t504 * __this, const MethodInfo* method)
{
	Vector2_t97  G_B3_0 = {0};
	{
		bool L_0 = (__this->___Dragging_7);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Vector2_t97  L_1 = (__this->___currentPos_6);
		Vector2_t97  L_2 = (__this->___pressedPosition_5);
		Vector2_t97  L_3 = Vector2_op_Subtraction_m3179(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0026;
	}

IL_0021:
	{
		Vector2_t97  L_4 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Void InputToEvent::Start()
extern const MethodInfo* Component_GetComponent_TisCamera_t356_m2946_MethodInfo_var;
extern "C" void InputToEvent_Start_m2177 (InputToEvent_t504 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t356_m2946_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483775);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t356 * L_0 = Component_GetComponent_TisCamera_t356_m2946(__this, /*hidden argument*/Component_GetComponent_TisCamera_t356_m2946_MethodInfo_var);
		__this->___m_Camera_8 = L_0;
		return;
	}
}
// System.Void InputToEvent::Update()
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern "C" void InputToEvent_Update_m2178 (InputToEvent_t504 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	Touch_t654  V_0 = {0};
	{
		bool L_0 = (__this->___DetectPointedAtGameObject_4);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		Vector3_t53  L_1 = Input_get_mousePosition_m2964(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t97  L_2 = Vector2_op_Implicit_m2567(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		GameObject_t49 * L_3 = InputToEvent_RaycastObject_m2181(__this, L_2, /*hidden argument*/NULL);
		InputToEvent_set_goPointedAt_m2175(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		int32_t L_4 = Input_get_touchCount_m2977(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		Touch_t654  L_5 = Input_GetTouch_m3345(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_5;
		Vector2_t97  L_6 = Touch_get_position_m2979((&V_0), /*hidden argument*/NULL);
		__this->___currentPos_6 = L_6;
		int32_t L_7 = Touch_get_phase_m3346((&V_0), /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		Vector2_t97  L_8 = Touch_get_position_m2979((&V_0), /*hidden argument*/NULL);
		InputToEvent_Press_m2179(__this, L_8, /*hidden argument*/NULL);
		goto IL_0077;
	}

IL_005d:
	{
		int32_t L_9 = Touch_get_phase_m3346((&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_0077;
		}
	}
	{
		Vector2_t97  L_10 = Touch_get_position_m2979((&V_0), /*hidden argument*/NULL);
		InputToEvent_Release_m2180(__this, L_10, /*hidden argument*/NULL);
	}

IL_0077:
	{
		return;
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		Vector3_t53  L_11 = Input_get_mousePosition_m2964(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t97  L_12 = Vector2_op_Implicit_m2567(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		__this->___currentPos_6 = L_12;
		bool L_13 = Input_GetMouseButtonDown_m2961(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00a3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		Vector3_t53  L_14 = Input_get_mousePosition_m2964(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t97  L_15 = Vector2_op_Implicit_m2567(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		InputToEvent_Press_m2179(__this, L_15, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_16 = Input_GetMouseButtonUp_m3347(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00be;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		Vector3_t53  L_17 = Input_get_mousePosition_m2964(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t97  L_18 = Vector2_op_Implicit_m2567(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		InputToEvent_Release_m2180(__this, L_18, /*hidden argument*/NULL);
	}

IL_00be:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_19 = Input_GetMouseButtonDown_m2961(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_010d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		Vector3_t53  L_20 = Input_get_mousePosition_m2964(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t97  L_21 = Vector2_op_Implicit_m2567(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		__this->___pressedPosition_5 = L_21;
		Vector2_t97  L_22 = (__this->___pressedPosition_5);
		GameObject_t49 * L_23 = InputToEvent_RaycastObject_m2181(__this, L_22, /*hidden argument*/NULL);
		__this->___lastGo_2 = L_23;
		GameObject_t49 * L_24 = (__this->___lastGo_2);
		bool L_25 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_24, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_010d;
		}
	}
	{
		GameObject_t49 * L_26 = (__this->___lastGo_2);
		NullCheck(L_26);
		GameObject_SendMessage_m3348(L_26, (String_t*) &_stringLiteral737, 1, /*hidden argument*/NULL);
	}

IL_010d:
	{
		return;
	}
}
// System.Void InputToEvent::Press(UnityEngine.Vector2)
extern "C" void InputToEvent_Press_m2179 (InputToEvent_t504 * __this, Vector2_t97  ___screenPos, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = ___screenPos;
		__this->___pressedPosition_5 = L_0;
		__this->___Dragging_7 = 1;
		Vector2_t97  L_1 = ___screenPos;
		GameObject_t49 * L_2 = InputToEvent_RaycastObject_m2181(__this, L_1, /*hidden argument*/NULL);
		__this->___lastGo_2 = L_2;
		GameObject_t49 * L_3 = (__this->___lastGo_2);
		bool L_4 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_3, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		GameObject_t49 * L_5 = (__this->___lastGo_2);
		NullCheck(L_5);
		GameObject_SendMessage_m3348(L_5, (String_t*) &_stringLiteral738, 1, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void InputToEvent::Release(UnityEngine.Vector2)
extern "C" void InputToEvent_Release_m2180 (InputToEvent_t504 * __this, Vector2_t97  ___screenPos, const MethodInfo* method)
{
	GameObject_t49 * V_0 = {0};
	{
		GameObject_t49 * L_0 = (__this->___lastGo_2);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		Vector2_t97  L_2 = ___screenPos;
		GameObject_t49 * L_3 = InputToEvent_RaycastObject_m2181(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t49 * L_4 = V_0;
		GameObject_t49 * L_5 = (__this->___lastGo_2);
		bool L_6 = Object_op_Equality_m2464(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		GameObject_t49 * L_7 = (__this->___lastGo_2);
		NullCheck(L_7);
		GameObject_SendMessage_m3348(L_7, (String_t*) &_stringLiteral122, 1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		GameObject_t49 * L_8 = (__this->___lastGo_2);
		NullCheck(L_8);
		GameObject_SendMessage_m3348(L_8, (String_t*) &_stringLiteral739, 1, /*hidden argument*/NULL);
		__this->___lastGo_2 = (GameObject_t49 *)NULL;
	}

IL_0053:
	{
		Vector2_t97  L_9 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___pressedPosition_5 = L_9;
		__this->___Dragging_7 = 0;
		return;
	}
}
// UnityEngine.GameObject InputToEvent::RaycastObject(UnityEngine.Vector2)
extern TypeInfo* InputToEvent_t504_il2cpp_TypeInfo_var;
extern "C" GameObject_t49 * InputToEvent_RaycastObject_m2181 (InputToEvent_t504 * __this, Vector2_t97  ___screenPos, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputToEvent_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHit_t318  V_0 = {0};
	{
		Camera_t356 * L_0 = (__this->___m_Camera_8);
		Vector2_t97  L_1 = ___screenPos;
		Vector3_t53  L_2 = Vector2_op_Implicit_m2572(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_t319  L_3 = Camera_ScreenPointToRay_m2965(L_0, L_2, /*hidden argument*/NULL);
		bool L_4 = Physics_Raycast_m3160(NULL /*static, unused*/, L_3, (&V_0), (200.0f), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		Vector3_t53  L_5 = RaycastHit_get_point_m2563((&V_0), /*hidden argument*/NULL);
		((InputToEvent_t504_StaticFields*)InputToEvent_t504_il2cpp_TypeInfo_var->static_fields)->___inputHitPos_3 = L_5;
		Collider_t194 * L_6 = RaycastHit_get_collider_m2710((&V_0), /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_t49 * L_7 = Component_get_gameObject_m2452(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_003b:
	{
		return (GameObject_t49 *)NULL;
	}
}
// ManualPhotonViewAllocator
#include "AssemblyU2DCSharp_ManualPhotonViewAllocator.h"
#ifndef _MSC_VER
#else
#endif
// ManualPhotonViewAllocator
#include "AssemblyU2DCSharp_ManualPhotonViewAllocatorMethodDeclarations.h"

// OnClickDestroy
#include "AssemblyU2DCSharp_OnClickDestroy.h"
// Extensions
#include "AssemblyU2DCSharp_ExtensionsMethodDeclarations.h"
struct GameObject_t49;
struct OnClickDestroy_t508;
struct GameObject_t49;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m2450_gshared (GameObject_t49 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m2450(__this, method) (( Object_t * (*) (GameObject_t49 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2450_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<OnClickDestroy>()
// !!0 UnityEngine.GameObject::GetComponent<OnClickDestroy>()
#define GameObject_GetComponent_TisOnClickDestroy_t508_m3349(__this, method) (( OnClickDestroy_t508 * (*) (GameObject_t49 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2450_gshared)(__this, method)


// System.Void ManualPhotonViewAllocator::.ctor()
extern "C" void ManualPhotonViewAllocator__ctor_m2182 (ManualPhotonViewAllocator_t505 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManualPhotonViewAllocator::AllocateManualPhotonView()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" void ManualPhotonViewAllocator_AllocateManualPhotonView_m2183 (ManualPhotonViewAllocator_t505 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	PhotonView_t325 * V_0 = {0};
	int32_t V_1 = 0;
	{
		GameObject_t49 * L_0 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		PhotonView_t325 * L_1 = Extensions_GetPhotonView_m1531(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		PhotonView_t325 * L_2 = V_0;
		bool L_3 = Object_op_Equality_m2464(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		Debug_LogError_m2815(NULL /*static, unused*/, (String_t*) &_stringLiteral740, /*hidden argument*/NULL);
		return;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		int32_t L_4 = PhotonNetwork_AllocateViewID_m1924(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		PhotonView_t325 * L_5 = V_0;
		ObjectU5BU5D_t21* L_6 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 0)) = (Object_t *)L_9;
		NullCheck(L_5);
		PhotonView_RPC_m2015(L_5, (String_t*) &_stringLiteral741, 3, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManualPhotonViewAllocator::InstantiateRpc(System.Int32)
extern TypeInfo* InputToEvent_t504_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t49_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisOnClickDestroy_t508_m3349_MethodInfo_var;
extern "C" void ManualPhotonViewAllocator_InstantiateRpc_m2184 (ManualPhotonViewAllocator_t505 * __this, int32_t ___viewID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InputToEvent_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		GameObject_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		GameObject_GetComponent_TisOnClickDestroy_t508_m3349_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483906);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t49 * V_0 = {0};
	OnClickDestroy_t508 * V_1 = {0};
	{
		GameObject_t49 * L_0 = (__this->___Prefab_2);
		Vector3_t53  L_1 = ((InputToEvent_t504_StaticFields*)InputToEvent_t504_il2cpp_TypeInfo_var->static_fields)->___inputHitPos_3;
		Vector3_t53  L_2 = {0};
		Vector3__ctor_m2422(&L_2, (0.0f), (5.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t53  L_3 = Vector3_op_Addition_m2448(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Quaternion_t69  L_4 = Quaternion_get_identity_m2529(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t584 * L_5 = Object_Instantiate_m2944(NULL /*static, unused*/, L_0, L_3, L_4, /*hidden argument*/NULL);
		V_0 = ((GameObject_t49 *)IsInst(L_5, GameObject_t49_il2cpp_TypeInfo_var));
		GameObject_t49 * L_6 = V_0;
		PhotonView_t325 * L_7 = Extensions_GetPhotonView_m1531(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		int32_t L_8 = ___viewID;
		NullCheck(L_7);
		PhotonView_set_viewID_m1996(L_7, L_8, /*hidden argument*/NULL);
		GameObject_t49 * L_9 = V_0;
		NullCheck(L_9);
		OnClickDestroy_t508 * L_10 = GameObject_GetComponent_TisOnClickDestroy_t508_m3349(L_9, /*hidden argument*/GameObject_GetComponent_TisOnClickDestroy_t508_m3349_MethodInfo_var);
		V_1 = L_10;
		OnClickDestroy_t508 * L_11 = V_1;
		NullCheck(L_11);
		L_11->___DestroyByRpc_2 = 1;
		return;
	}
}
// MoveByKeys
#include "AssemblyU2DCSharp_MoveByKeys.h"
#ifndef _MSC_VER
#else
#endif
// MoveByKeys
#include "AssemblyU2DCSharp_MoveByKeysMethodDeclarations.h"

// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
struct Component_t462;
struct SpriteRenderer_t716;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t716_m3350(__this, method) (( SpriteRenderer_t716 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)
struct Component_t462;
struct Rigidbody2D_t324;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t324_m3032(__this, method) (( Rigidbody2D_t324 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)
struct Component_t462;
struct Rigidbody_t100;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t100_m3045(__this, method) (( Rigidbody_t100 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void MoveByKeys::.ctor()
extern "C" void MoveByKeys__ctor_m2185 (MoveByKeys_t506 * __this, const MethodInfo* method)
{
	{
		__this->___Speed_2 = (10.0f);
		__this->___JumpForce_3 = (200.0f);
		__this->___JumpTimeout_4 = (0.5f);
		MonoBehaviour__ctor_m1718(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveByKeys::Start()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t716_m3350_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t324_m3032_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t100_m3045_MethodInfo_var;
extern "C" void MoveByKeys_Start_m2186 (MoveByKeys_t506 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t716_m3350_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483907);
		Component_GetComponent_TisRigidbody2D_t324_m3032_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483789);
		Component_GetComponent_TisRigidbody_t100_m3045_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483791);
		s_Il2CppMethodIntialized = true;
	}
	{
		SpriteRenderer_t716 * L_0 = Component_GetComponent_TisSpriteRenderer_t716_m3350(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t716_m3350_MethodInfo_var);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		__this->___isSprite_5 = L_1;
		Rigidbody2D_t324 * L_2 = Component_GetComponent_TisRigidbody2D_t324_m3032(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t324_m3032_MethodInfo_var);
		__this->___body2d_8 = L_2;
		Rigidbody_t100 * L_3 = Component_GetComponent_TisRigidbody_t100_m3045(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t100_m3045_MethodInfo_var);
		__this->___body_7 = L_3;
		return;
	}
}
// System.Void MoveByKeys::FixedUpdate()
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern "C" void MoveByKeys_FixedUpdate_m2187 (MoveByKeys_t506 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t97  V_0 = {0};
	{
		PhotonView_t325 * L_0 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = PhotonView_get_isMine_m2002(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKey_m3035(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		Transform_t54 * L_3 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		Transform_t54 * L_4 = L_3;
		NullCheck(L_4);
		Vector3_t53  L_5 = Transform_get_position_m2459(L_4, /*hidden argument*/NULL);
		Vector3_t53  L_6 = Vector3_get_left_m3351(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = (__this->___Speed_2);
		float L_8 = Time_get_deltaTime_m2446(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_9 = Vector3_op_Multiply_m2492(NULL /*static, unused*/, L_6, ((float)((float)L_7*(float)L_8)), /*hidden argument*/NULL);
		Vector3_t53  L_10 = Vector3_op_Addition_m2448(NULL /*static, unused*/, L_5, L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m2461(L_4, L_10, /*hidden argument*/NULL);
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetKey_m3035(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0081;
		}
	}
	{
		Transform_t54 * L_12 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		Transform_t54 * L_13 = L_12;
		NullCheck(L_13);
		Vector3_t53  L_14 = Transform_get_position_m2459(L_13, /*hidden argument*/NULL);
		Vector3_t53  L_15 = Vector3_get_right_m3025(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_16 = (__this->___Speed_2);
		float L_17 = Time_get_deltaTime_m2446(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_18 = Vector3_op_Multiply_m2492(NULL /*static, unused*/, L_15, ((float)((float)L_16*(float)L_17)), /*hidden argument*/NULL);
		Vector3_t53  L_19 = Vector3_op_Addition_m2448(NULL /*static, unused*/, L_14, L_18, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_m2461(L_13, L_19, /*hidden argument*/NULL);
	}

IL_0081:
	{
		float L_20 = (__this->___jumpingTime_6);
		if ((!(((float)L_20) <= ((float)(0.0f)))))
		{
			goto IL_0125;
		}
	}
	{
		Rigidbody_t100 * L_21 = (__this->___body_7);
		bool L_22 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_21, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00b3;
		}
	}
	{
		Rigidbody2D_t324 * L_23 = (__this->___body2d_8);
		bool L_24 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_23, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0120;
		}
	}

IL_00b3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_25 = Input_GetKey_m3035(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0120;
		}
	}
	{
		float L_26 = (__this->___JumpTimeout_4);
		__this->___jumpingTime_6 = L_26;
		Vector2_t97  L_27 = Vector2_get_up_m3036(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_28 = (__this->___JumpForce_3);
		Vector2_t97  L_29 = Vector2_op_Multiply_m2586(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		Rigidbody2D_t324 * L_30 = (__this->___body2d_8);
		bool L_31 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_30, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00fe;
		}
	}
	{
		Rigidbody2D_t324 * L_32 = (__this->___body2d_8);
		Vector2_t97  L_33 = V_0;
		NullCheck(L_32);
		Rigidbody2D_AddForce_m3037(L_32, L_33, /*hidden argument*/NULL);
		goto IL_0120;
	}

IL_00fe:
	{
		Rigidbody_t100 * L_34 = (__this->___body_7);
		bool L_35 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_34, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0120;
		}
	}
	{
		Rigidbody_t100 * L_36 = (__this->___body_7);
		Vector2_t97  L_37 = V_0;
		Vector3_t53  L_38 = Vector2_op_Implicit_m2572(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		Rigidbody_AddForce_m3352(L_36, L_38, /*hidden argument*/NULL);
	}

IL_0120:
	{
		goto IL_0137;
	}

IL_0125:
	{
		float L_39 = (__this->___jumpingTime_6);
		float L_40 = Time_get_deltaTime_m2446(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___jumpingTime_6 = ((float)((float)L_39-(float)L_40));
	}

IL_0137:
	{
		bool L_41 = (__this->___isSprite_5);
		if (L_41)
		{
			goto IL_01b2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_42 = Input_GetKey_m3035(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_017a;
		}
	}
	{
		Transform_t54 * L_43 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		Transform_t54 * L_44 = L_43;
		NullCheck(L_44);
		Vector3_t53  L_45 = Transform_get_position_m2459(L_44, /*hidden argument*/NULL);
		Vector3_t53  L_46 = Vector3_get_forward_m2580(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_47 = (__this->___Speed_2);
		float L_48 = Time_get_deltaTime_m2446(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_49 = Vector3_op_Multiply_m2492(NULL /*static, unused*/, L_46, ((float)((float)L_47*(float)L_48)), /*hidden argument*/NULL);
		Vector3_t53  L_50 = Vector3_op_Addition_m2448(NULL /*static, unused*/, L_45, L_49, /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_position_m2461(L_44, L_50, /*hidden argument*/NULL);
	}

IL_017a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_51 = Input_GetKey_m3035(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_01b2;
		}
	}
	{
		Transform_t54 * L_52 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		Transform_t54 * L_53 = L_52;
		NullCheck(L_53);
		Vector3_t53  L_54 = Transform_get_position_m2459(L_53, /*hidden argument*/NULL);
		Vector3_t53  L_55 = Vector3_get_forward_m2580(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_56 = (__this->___Speed_2);
		float L_57 = Time_get_deltaTime_m2446(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_58 = Vector3_op_Multiply_m2492(NULL /*static, unused*/, L_55, ((float)((float)L_56*(float)L_57)), /*hidden argument*/NULL);
		Vector3_t53  L_59 = Vector3_op_Subtraction_m2460(NULL /*static, unused*/, L_54, L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		Transform_set_position_m2461(L_53, L_59, /*hidden argument*/NULL);
	}

IL_01b2:
	{
		return;
	}
}
// OnAwakeUsePhotonView
#include "AssemblyU2DCSharp_OnAwakeUsePhotonView.h"
#ifndef _MSC_VER
#else
#endif
// OnAwakeUsePhotonView
#include "AssemblyU2DCSharp_OnAwakeUsePhotonViewMethodDeclarations.h"



// System.Void OnAwakeUsePhotonView::.ctor()
extern "C" void OnAwakeUsePhotonView__ctor_m2188 (OnAwakeUsePhotonView_t507 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1718(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OnAwakeUsePhotonView::Awake()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void OnAwakeUsePhotonView_Awake_m2189 (OnAwakeUsePhotonView_t507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		PhotonView_t325 * L_0 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = PhotonView_get_isMine_m2002(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		PhotonView_t325 * L_2 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		PhotonView_RPC_m2015(L_2, (String_t*) &_stringLiteral742, 0, ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void OnAwakeUsePhotonView::Start()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" void OnAwakeUsePhotonView_Start_m2190 (OnAwakeUsePhotonView_t507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		PhotonView_t325 * L_0 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = PhotonView_get_isMine_m2002(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		PhotonView_t325 * L_2 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_3 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		uint8_t L_4 = 1;
		Object_t * L_5 = Box(Byte_t26_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 0)) = (Object_t *)L_5;
		NullCheck(L_2);
		PhotonView_RPC_m2015(L_2, (String_t*) &_stringLiteral742, 0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OnAwakeUsePhotonView::OnAwakeRPC()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void OnAwakeUsePhotonView_OnAwakeRPC_m2191 (OnAwakeUsePhotonView_t507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		PhotonView_t325 * L_0 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral743, L_0, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OnAwakeUsePhotonView::OnAwakeRPC(System.Byte)
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void OnAwakeUsePhotonView_OnAwakeRPC_m2192 (OnAwakeUsePhotonView_t507 * __this, uint8_t ___myParameter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral744);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral744;
		ObjectU5BU5D_t21* L_1 = L_0;
		uint8_t L_2 = ___myParameter;
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(Byte_t26_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t21* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral745);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral745;
		ObjectU5BU5D_t21* L_6 = L_5;
		PhotonView_t325 * L_7 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_7;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m2490(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// OnClickDestroy/<DestroyRpc>c__Iterator15
#include "AssemblyU2DCSharp_OnClickDestroy_U3CDestroyRpcU3Ec__Iterator.h"
#ifndef _MSC_VER
#else
#endif
// OnClickDestroy/<DestroyRpc>c__Iterator15
#include "AssemblyU2DCSharp_OnClickDestroy_U3CDestroyRpcU3Ec__IteratorMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void OnClickDestroy/<DestroyRpc>c__Iterator15::.ctor()
extern "C" void U3CDestroyRpcU3Ec__Iterator15__ctor_m2193 (U3CDestroyRpcU3Ec__Iterator15_t509 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object OnClickDestroy/<DestroyRpc>c__Iterator15::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDestroyRpcU3Ec__Iterator15_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2194 (U3CDestroyRpcU3Ec__Iterator15_t509 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object OnClickDestroy/<DestroyRpc>c__Iterator15::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDestroyRpcU3Ec__Iterator15_System_Collections_IEnumerator_get_Current_m2195 (U3CDestroyRpcU3Ec__Iterator15_t509 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean OnClickDestroy/<DestroyRpc>c__Iterator15::MoveNext()
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern "C" bool U3CDestroyRpcU3Ec__Iterator15_MoveNext_m2196 (U3CDestroyRpcU3Ec__Iterator15_t509 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0065;
	}

IL_0021:
	{
		OnClickDestroy_t508 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		GameObject_t49 * L_3 = Component_get_gameObject_m2452(L_2, /*hidden argument*/NULL);
		Object_Destroy_m2754(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_4 = 0;
		Object_t * L_5 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_4);
		__this->___U24current_1 = L_5;
		__this->___U24PC_0 = 1;
		goto IL_0067;
	}

IL_0049:
	{
		OnClickDestroy_t508 * L_6 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_6);
		PhotonView_t325 * L_7 = MonoBehaviour_get_photonView_m1719(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = PhotonView_get_viewID_m1995(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonNetwork_UnAllocateViewID_m1926(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_0065:
	{
		return 0;
	}

IL_0067:
	{
		return 1;
	}
	// Dead block : IL_0069: ldloc.1
}
// System.Void OnClickDestroy/<DestroyRpc>c__Iterator15::Dispose()
extern "C" void U3CDestroyRpcU3Ec__Iterator15_Dispose_m2197 (U3CDestroyRpcU3Ec__Iterator15_t509 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void OnClickDestroy/<DestroyRpc>c__Iterator15::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CDestroyRpcU3Ec__Iterator15_Reset_m2198 (U3CDestroyRpcU3Ec__Iterator15_t509 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t592 * L_0 = (NotSupportedException_t592 *)il2cpp_codegen_object_new (NotSupportedException_t592_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2521(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// OnClickDestroy
#include "AssemblyU2DCSharp_OnClickDestroyMethodDeclarations.h"



// System.Void OnClickDestroy::.ctor()
extern "C" void OnClickDestroy__ctor_m2199 (OnClickDestroy_t508 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1718(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OnClickDestroy::OnClick()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void OnClickDestroy_OnClick_m2200 (OnClickDestroy_t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___DestroyByRpc_2);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		GameObject_t49 * L_1 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonNetwork_Destroy_m1937(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		goto IL_0032;
	}

IL_001b:
	{
		PhotonView_t325 * L_2 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		PhotonView_RPC_m2015(L_2, (String_t*) &_stringLiteral746, 3, ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Collections.IEnumerator OnClickDestroy::DestroyRpc()
extern TypeInfo* U3CDestroyRpcU3Ec__Iterator15_t509_il2cpp_TypeInfo_var;
extern "C" Object_t * OnClickDestroy_DestroyRpc_m2201 (OnClickDestroy_t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDestroyRpcU3Ec__Iterator15_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		s_Il2CppMethodIntialized = true;
	}
	U3CDestroyRpcU3Ec__Iterator15_t509 * V_0 = {0};
	{
		U3CDestroyRpcU3Ec__Iterator15_t509 * L_0 = (U3CDestroyRpcU3Ec__Iterator15_t509 *)il2cpp_codegen_object_new (U3CDestroyRpcU3Ec__Iterator15_t509_il2cpp_TypeInfo_var);
		U3CDestroyRpcU3Ec__Iterator15__ctor_m2193(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDestroyRpcU3Ec__Iterator15_t509 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CDestroyRpcU3Ec__Iterator15_t509 * L_2 = V_0;
		return L_2;
	}
}
// OnClickInstantiate
#include "AssemblyU2DCSharp_OnClickInstantiate.h"
#ifndef _MSC_VER
#else
#endif
// OnClickInstantiate
#include "AssemblyU2DCSharp_OnClickInstantiateMethodDeclarations.h"



// System.Void OnClickInstantiate::.ctor()
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern "C" void OnClickInstantiate__ctor_m2202 (OnClickInstantiate_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t20* L_0 = ((StringU5BU5D_t20*)SZArrayNew(StringU5BU5D_t20_il2cpp_TypeInfo_var, 2));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral747);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral747;
		StringU5BU5D_t20* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral748);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral748;
		__this->___InstantiateTypeNames_4 = L_1;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OnClickInstantiate::OnClick()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* InputToEvent_t504_il2cpp_TypeInfo_var;
extern "C" void OnClickInstantiate_OnClick_m2203 (OnClickInstantiate_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		InputToEvent_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		int32_t L_0 = PhotonNetwork_get_connectionStateDetailed_m1839(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)9))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		int32_t L_1 = (__this->___InstantiateType_3);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		goto IL_009b;
	}

IL_0026:
	{
		GameObject_t49 * L_4 = (__this->___Prefab_2);
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_m2484(L_4, /*hidden argument*/NULL);
		Vector3_t53  L_6 = ((InputToEvent_t504_StaticFields*)InputToEvent_t504_il2cpp_TypeInfo_var->static_fields)->___inputHitPos_3;
		Vector3_t53  L_7 = {0};
		Vector3__ctor_m2422(&L_7, (0.0f), (5.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t53  L_8 = Vector3_op_Addition_m2448(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Quaternion_t69  L_9 = Quaternion_get_identity_m2529(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonNetwork_Instantiate_m1929(NULL /*static, unused*/, L_5, L_8, L_9, 0, /*hidden argument*/NULL);
		goto IL_009b;
	}

IL_0060:
	{
		GameObject_t49 * L_10 = (__this->___Prefab_2);
		NullCheck(L_10);
		String_t* L_11 = Object_get_name_m2484(L_10, /*hidden argument*/NULL);
		Vector3_t53  L_12 = ((InputToEvent_t504_StaticFields*)InputToEvent_t504_il2cpp_TypeInfo_var->static_fields)->___inputHitPos_3;
		Vector3_t53  L_13 = {0};
		Vector3__ctor_m2422(&L_13, (0.0f), (5.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t53  L_14 = Vector3_op_Addition_m2448(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Quaternion_t69  L_15 = Quaternion_get_identity_m2529(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonNetwork_InstantiateSceneObject_m1931(NULL /*static, unused*/, L_11, L_14, L_15, 0, (ObjectU5BU5D_t21*)(ObjectU5BU5D_t21*)NULL, /*hidden argument*/NULL);
		goto IL_009b;
	}

IL_009b:
	{
		return;
	}
}
// System.Void OnClickInstantiate::OnGUI()
extern TypeInfo* GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var;
extern "C" void OnClickInstantiate_OnGUI_m2204 (OnClickInstantiate_t510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___showGui_5);
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m2424(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t201  L_2 = {0};
		Rect__ctor_m2425(&L_2, (((float)((int32_t)((int32_t)L_1-(int32_t)((int32_t)180))))), (0.0f), (180.0f), (50.0f), /*hidden argument*/NULL);
		GUILayout_BeginArea_m2994(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_3 = (__this->___InstantiateType_3);
		StringU5BU5D_t20* L_4 = (__this->___InstantiateTypeNames_4);
		int32_t L_5 = GUILayout_Toolbar_m3070(NULL /*static, unused*/, L_3, L_4, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		__this->___InstantiateType_3 = L_5;
		GUILayout_EndArea_m3000(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// OnClickLoadSomething/ResourceTypeOption
#include "AssemblyU2DCSharp_OnClickLoadSomething_ResourceTypeOption.h"
#ifndef _MSC_VER
#else
#endif
// OnClickLoadSomething/ResourceTypeOption
#include "AssemblyU2DCSharp_OnClickLoadSomething_ResourceTypeOptionMethodDeclarations.h"



// OnClickLoadSomething
#include "AssemblyU2DCSharp_OnClickLoadSomething.h"
#ifndef _MSC_VER
#else
#endif
// OnClickLoadSomething
#include "AssemblyU2DCSharp_OnClickLoadSomethingMethodDeclarations.h"



// System.Void OnClickLoadSomething::.ctor()
extern "C" void OnClickLoadSomething__ctor_m2205 (OnClickLoadSomething_t512 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OnClickLoadSomething::OnClick()
extern "C" void OnClickLoadSomething_OnClick_m2206 (OnClickLoadSomething_t512 * __this, const MethodInfo* method)
{
	uint8_t V_0 = {0};
	{
		uint8_t L_0 = (__this->___ResourceTypeToLoad_2);
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_003a;
	}

IL_001a:
	{
		String_t* L_3 = (__this->___ResourceToLoad_3);
		Application_LoadLevel_m2442(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_002a:
	{
		String_t* L_4 = (__this->___ResourceToLoad_3);
		Application_OpenURL_m3082(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_003a:
	{
		return;
	}
}
// OnJoinedInstantiate
#include "AssemblyU2DCSharp_OnJoinedInstantiate.h"
#ifndef _MSC_VER
#else
#endif
// OnJoinedInstantiate
#include "AssemblyU2DCSharp_OnJoinedInstantiateMethodDeclarations.h"

// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"


// System.Void OnJoinedInstantiate::.ctor()
extern "C" void OnJoinedInstantiate__ctor_m2207 (OnJoinedInstantiate_t513 * __this, const MethodInfo* method)
{
	{
		__this->___PositionOffset_3 = (2.0f);
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OnJoinedInstantiate::OnJoinedRoom()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern "C" void OnJoinedInstantiate_OnJoinedRoom_m2208 (OnJoinedInstantiate_t513 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t49 * V_0 = {0};
	GameObjectU5BU5D_t60* V_1 = {0};
	int32_t V_2 = 0;
	Vector3_t53  V_3 = {0};
	Vector3_t53  V_4 = {0};
	Vector3_t53  V_5 = {0};
	{
		GameObjectU5BU5D_t60* L_0 = (__this->___PrefabsToInstantiate_4);
		if (!L_0)
		{
			goto IL_00a7;
		}
	}
	{
		GameObjectU5BU5D_t60* L_1 = (__this->___PrefabsToInstantiate_4);
		V_1 = L_1;
		V_2 = 0;
		goto IL_009e;
	}

IL_0019:
	{
		GameObjectU5BU5D_t60* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(GameObject_t49 **)(GameObject_t49 **)SZArrayLdElema(L_2, L_4));
		GameObject_t49 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m2484(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral749, L_6, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Vector3_t53  L_8 = Vector3_get_up_m2628(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_8;
		Transform_t54 * L_9 = (__this->___SpawnPosition_2);
		bool L_10 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_9, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		Transform_t54 * L_11 = (__this->___SpawnPosition_2);
		NullCheck(L_11);
		Vector3_t53  L_12 = Transform_get_position_m2459(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
	}

IL_0055:
	{
		Vector3_t53  L_13 = Random_get_insideUnitSphere_m3134(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_13;
		(&V_4)->___y_2 = (0.0f);
		Vector3_t53  L_14 = Vector3_get_normalized_m2491((&V_4), /*hidden argument*/NULL);
		V_4 = L_14;
		Vector3_t53  L_15 = V_3;
		float L_16 = (__this->___PositionOffset_3);
		Vector3_t53  L_17 = V_4;
		Vector3_t53  L_18 = Vector3_op_Multiply_m2516(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		Vector3_t53  L_19 = Vector3_op_Addition_m2448(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		GameObject_t49 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = Object_get_name_m2484(L_20, /*hidden argument*/NULL);
		Vector3_t53  L_22 = V_5;
		Quaternion_t69  L_23 = Quaternion_get_identity_m2529(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonNetwork_Instantiate_m1929(NULL /*static, unused*/, L_21, L_22, L_23, 0, /*hidden argument*/NULL);
		int32_t L_24 = V_2;
		V_2 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_009e:
	{
		int32_t L_25 = V_2;
		GameObjectU5BU5D_t60* L_26 = V_1;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_0019;
		}
	}

IL_00a7:
	{
		return;
	}
}
// OnStartDelete
#include "AssemblyU2DCSharp_OnStartDelete.h"
#ifndef _MSC_VER
#else
#endif
// OnStartDelete
#include "AssemblyU2DCSharp_OnStartDeleteMethodDeclarations.h"



// System.Void OnStartDelete::.ctor()
extern "C" void OnStartDelete__ctor_m2209 (OnStartDelete_t514 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OnStartDelete::Start()
extern "C" void OnStartDelete_Start_m2210 (OnStartDelete_t514 * __this, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		Object_DestroyObject_m2485(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// PickupItem
#include "AssemblyU2DCSharp_PickupItem.h"
#ifndef _MSC_VER
#else
#endif
// PickupItem
#include "AssemblyU2DCSharp_PickupItemMethodDeclarations.h"

// System.Collections.Generic.HashSet`1<PickupItem>
#include "System_Core_System_Collections_Generic_HashSet_1_gen.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// System.Collections.Generic.HashSet`1<PickupItem>
#include "System_Core_System_Collections_Generic_HashSet_1_genMethodDeclarations.h"
// GameObjectExtensions
#include "AssemblyU2DCSharp_GameObjectExtensionsMethodDeclarations.h"
// PhotonMessageInfo
#include "AssemblyU2DCSharp_PhotonMessageInfoMethodDeclarations.h"
struct Component_t462;
struct PhotonView_t325;
// Declaration !!0 UnityEngine.Component::GetComponent<PhotonView>()
// !!0 UnityEngine.Component::GetComponent<PhotonView>()
#define Component_GetComponent_TisPhotonView_t325_m3033(__this, method) (( PhotonView_t325 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void PickupItem::.ctor()
extern "C" void PickupItem__ctor_m2211 (PickupItem_t516 * __this, const MethodInfo* method)
{
	{
		__this->___SecondsBeforeRespawn_2 = (2.0f);
		MonoBehaviour__ctor_m1718(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PickupItem::.cctor()
extern TypeInfo* HashSet_1_t515_il2cpp_TypeInfo_var;
extern TypeInfo* PickupItem_t516_il2cpp_TypeInfo_var;
extern const MethodInfo* HashSet_1__ctor_m3353_MethodInfo_var;
extern "C" void PickupItem__cctor_m2212 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HashSet_1_t515_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		PickupItem_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		HashSet_1__ctor_m3353_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483908);
		s_Il2CppMethodIntialized = true;
	}
	{
		HashSet_1_t515 * L_0 = (HashSet_1_t515 *)il2cpp_codegen_object_new (HashSet_1_t515_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m3353(L_0, /*hidden argument*/HashSet_1__ctor_m3353_MethodInfo_var);
		((PickupItem_t516_StaticFields*)PickupItem_t516_il2cpp_TypeInfo_var->static_fields)->___DisabledPickupItems_8 = L_0;
		return;
	}
}
// System.Int32 PickupItem::get_ViewID()
extern "C" int32_t PickupItem_get_ViewID_m2213 (PickupItem_t516 * __this, const MethodInfo* method)
{
	{
		PhotonView_t325 * L_0 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = PhotonView_get_viewID_m1995(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PickupItem::OnTriggerEnter(UnityEngine.Collider)
extern const MethodInfo* Component_GetComponent_TisPhotonView_t325_m3033_MethodInfo_var;
extern "C" void PickupItem_OnTriggerEnter_m2214 (PickupItem_t516 * __this, Collider_t194 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisPhotonView_t325_m3033_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483790);
		s_Il2CppMethodIntialized = true;
	}
	PhotonView_t325 * V_0 = {0};
	{
		Collider_t194 * L_0 = ___other;
		NullCheck(L_0);
		PhotonView_t325 * L_1 = Component_GetComponent_TisPhotonView_t325_m3033(L_0, /*hidden argument*/Component_GetComponent_TisPhotonView_t325_m3033_MethodInfo_var);
		V_0 = L_1;
		bool L_2 = (__this->___PickupOnTrigger_3);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		PhotonView_t325 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_3, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		PhotonView_t325 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = PhotonView_get_isMine_m2002(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		PickupItem_Pickup_m2216(__this, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void PickupItem::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern TypeInfo* Vector3_t53_il2cpp_TypeInfo_var;
extern "C" void PickupItem_OnPhotonSerializeView_m2215 (PickupItem_t516 * __this, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t53  V_0 = {0};
	{
		PhotonStream_t439 * L_0 = ___stream;
		NullCheck(L_0);
		bool L_1 = PhotonStream_get_isWriting_m1768(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		float L_2 = (__this->___SecondsBeforeRespawn_2);
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		PhotonStream_t439 * L_3 = ___stream;
		GameObject_t49 * L_4 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t54 * L_5 = GameObject_get_transform_m2462(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t53  L_6 = Transform_get_position_m2459(L_5, /*hidden argument*/NULL);
		Vector3_t53  L_7 = L_6;
		Object_t * L_8 = Box(Vector3_t53_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_3);
		PhotonStream_SendNext_m1773(L_3, L_8, /*hidden argument*/NULL);
		goto IL_0058;
	}

IL_003b:
	{
		PhotonStream_t439 * L_9 = ___stream;
		NullCheck(L_9);
		Object_t * L_10 = PhotonStream_ReceiveNext_m1771(L_9, /*hidden argument*/NULL);
		V_0 = ((*(Vector3_t53 *)((Vector3_t53 *)UnBox (L_10, Vector3_t53_il2cpp_TypeInfo_var))));
		GameObject_t49 * L_11 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_t54 * L_12 = GameObject_get_transform_m2462(L_11, /*hidden argument*/NULL);
		Vector3_t53  L_13 = V_0;
		NullCheck(L_12);
		Transform_set_position_m2461(L_12, L_13, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void PickupItem::Pickup()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void PickupItem_Pickup_m2216 (PickupItem_t516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___SentPickup_6);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___SentPickup_6 = 1;
		PhotonView_t325 * L_1 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PhotonView_RPC_m2015(L_1, (String_t*) &_stringLiteral750, 5, ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void PickupItem::Drop()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void PickupItem_Drop_m2217 (PickupItem_t516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___PickupIsMine_4);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		PhotonView_t325 * L_1 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PhotonView_RPC_m2015(L_1, (String_t*) &_stringLiteral751, 5, ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void PickupItem::Drop(UnityEngine.Vector3)
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t53_il2cpp_TypeInfo_var;
extern "C" void PickupItem_Drop_m2218 (PickupItem_t516 * __this, Vector3_t53  ___newPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Vector3_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___PickupIsMine_4);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		PhotonView_t325 * L_1 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_2 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		Vector3_t53  L_3 = ___newPosition;
		Vector3_t53  L_4 = L_3;
		Object_t * L_5 = Box(Vector3_t53_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		NullCheck(L_1);
		PhotonView_RPC_m2015(L_1, (String_t*) &_stringLiteral751, 5, L_2, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PickupItem::PunPickup(PhotonMessageInfo)
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t604_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t700_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void PickupItem_PunPickup_m2219 (PickupItem_t516 * __this, PhotonMessageInfo_t435 * ___msgInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Single_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		Double_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		PhotonMessageInfo_t435 * L_0 = ___msgInfo;
		NullCheck(L_0);
		PhotonPlayer_t432 * L_1 = (L_0->___sender_1);
		NullCheck(L_1);
		bool L_2 = (L_1->___isLocal_2);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		__this->___SentPickup_6 = 0;
	}

IL_0017:
	{
		GameObject_t49 * L_3 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		bool L_4 = GameObjectExtensions_GetActive_m1542(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0092;
		}
	}
	{
		ObjectU5BU5D_t21* L_5 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 8));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral752);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 0)) = (Object_t *)(String_t*) &_stringLiteral752;
		ObjectU5BU5D_t21* L_6 = L_5;
		GameObject_t49 * L_7 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t21* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral753);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)(String_t*) &_stringLiteral753;
		ObjectU5BU5D_t21* L_9 = L_8;
		float L_10 = (__this->___SecondsBeforeRespawn_2);
		float L_11 = L_10;
		Object_t * L_12 = Box(Single_t604_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t21* L_13 = L_9;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral754);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)(String_t*) &_stringLiteral754;
		ObjectU5BU5D_t21* L_14 = L_13;
		double L_15 = (__this->___TimeOfRespawn_7);
		double L_16 = L_15;
		Object_t * L_17 = Box(Double_t700_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 5);
		ArrayElementTypeCheck (L_14, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 5)) = (Object_t *)L_17;
		ObjectU5BU5D_t21* L_18 = L_14;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 6);
		ArrayElementTypeCheck (L_18, (String_t*) &_stringLiteral755);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 6)) = (Object_t *)(String_t*) &_stringLiteral755;
		ObjectU5BU5D_t21* L_19 = L_18;
		double L_20 = (__this->___TimeOfRespawn_7);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		double L_21 = PhotonNetwork_get_time_m1876(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_22 = ((((double)L_20) > ((double)L_21))? 1 : 0);
		Object_t * L_23 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 7);
		ArrayElementTypeCheck (L_19, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 7)) = (Object_t *)L_23;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m2490(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		return;
	}

IL_0092:
	{
		PhotonMessageInfo_t435 * L_25 = ___msgInfo;
		NullCheck(L_25);
		PhotonPlayer_t432 * L_26 = (L_25->___sender_1);
		NullCheck(L_26);
		bool L_27 = (L_26->___isLocal_2);
		__this->___PickupIsMine_4 = L_27;
		MonoBehaviour_t47 * L_28 = (__this->___OnPickedUpCall_5);
		bool L_29 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_28, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00c5;
		}
	}
	{
		MonoBehaviour_t47 * L_30 = (__this->___OnPickedUpCall_5);
		NullCheck(L_30);
		Component_SendMessage_m3354(L_30, (String_t*) &_stringLiteral756, __this, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		float L_31 = (__this->___SecondsBeforeRespawn_2);
		if ((!(((float)L_31) <= ((float)(0.0f)))))
		{
			goto IL_00e5;
		}
	}
	{
		PickupItem_PickedUp_m2220(__this, (0.0f), /*hidden argument*/NULL);
		goto IL_0113;
	}

IL_00e5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		double L_32 = PhotonNetwork_get_time_m1876(NULL /*static, unused*/, /*hidden argument*/NULL);
		PhotonMessageInfo_t435 * L_33 = ___msgInfo;
		NullCheck(L_33);
		double L_34 = PhotonMessageInfo_get_timestamp_m1749(L_33, /*hidden argument*/NULL);
		V_0 = ((double)((double)L_32-(double)L_34));
		float L_35 = (__this->___SecondsBeforeRespawn_2);
		double L_36 = V_0;
		V_1 = ((double)((double)(((double)L_35))-(double)L_36));
		double L_37 = V_1;
		if ((!(((double)L_37) > ((double)(0.0)))))
		{
			goto IL_0113;
		}
	}
	{
		double L_38 = V_1;
		PickupItem_PickedUp_m2220(__this, (((float)L_38)), /*hidden argument*/NULL);
	}

IL_0113:
	{
		return;
	}
}
// System.Void PickupItem::PickedUp(System.Single)
extern TypeInfo* PickupItem_t516_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern const MethodInfo* HashSet_1_Add_m3355_MethodInfo_var;
extern "C" void PickupItem_PickedUp_m2220 (PickupItem_t516 * __this, float ___timeUntilRespawn, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PickupItem_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		HashSet_1_Add_m3355_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483909);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t49 * L_0 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m2429(L_0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PickupItem_t516_il2cpp_TypeInfo_var);
		HashSet_1_t515 * L_1 = ((PickupItem_t516_StaticFields*)PickupItem_t516_il2cpp_TypeInfo_var->static_fields)->___DisabledPickupItems_8;
		NullCheck(L_1);
		HashSet_1_Add_m3355(L_1, __this, /*hidden argument*/HashSet_1_Add_m3355_MethodInfo_var);
		__this->___TimeOfRespawn_7 = (0.0);
		float L_2 = ___timeUntilRespawn;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		double L_3 = PhotonNetwork_get_time_m1876(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = ___timeUntilRespawn;
		__this->___TimeOfRespawn_7 = ((double)((double)L_3+(double)(((double)L_4))));
		float L_5 = ___timeUntilRespawn;
		MonoBehaviour_Invoke_m2786(__this, (String_t*) &_stringLiteral751, L_5, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Void PickupItem::PunRespawn(UnityEngine.Vector3)
extern "C" void PickupItem_PunRespawn_m2221 (PickupItem_t516 * __this, Vector3_t53  ___pos, const MethodInfo* method)
{
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral757, /*hidden argument*/NULL);
		PickupItem_PunRespawn_m2222(__this, /*hidden argument*/NULL);
		GameObject_t49 * L_0 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t54 * L_1 = GameObject_get_transform_m2462(L_0, /*hidden argument*/NULL);
		Vector3_t53  L_2 = ___pos;
		NullCheck(L_1);
		Transform_set_position_m2461(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PickupItem::PunRespawn()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t700_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* PickupItem_t516_il2cpp_TypeInfo_var;
extern "C" void PickupItem_PunRespawn_m2222 (PickupItem_t516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		Double_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		PickupItem_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		double L_0 = PhotonNetwork_get_time_m1876(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_1 = (__this->___TimeOfRespawn_7);
		V_0 = ((double)((double)L_0-(double)L_1));
		double L_2 = V_0;
		if ((!(((double)L_2) > ((double)(0.10000000149011612)))))
		{
			goto IL_0036;
		}
	}
	{
		double L_3 = V_0;
		double L_4 = L_3;
		Object_t * L_5 = Box(Double_t700_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m2919(NULL /*static, unused*/, (String_t*) &_stringLiteral758, L_5, (String_t*) &_stringLiteral759, /*hidden argument*/NULL);
		Debug_LogWarning_m2768(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PickupItem_t516_il2cpp_TypeInfo_var);
		HashSet_1_t515 * L_7 = ((PickupItem_t516_StaticFields*)PickupItem_t516_il2cpp_TypeInfo_var->static_fields)->___DisabledPickupItems_8;
		NullCheck(L_7);
		VirtFuncInvoker1< bool, PickupItem_t516 * >::Invoke(10 /* System.Boolean System.Collections.Generic.HashSet`1<PickupItem>::Remove(!0) */, L_7, __this);
		__this->___TimeOfRespawn_7 = (0.0);
		__this->___PickupIsMine_4 = 0;
		GameObject_t49 * L_8 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		bool L_9 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_8, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		GameObject_t49 * L_10 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m2429(L_10, 1, /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
// PickupItemSimple
#include "AssemblyU2DCSharp_PickupItemSimple.h"
#ifndef _MSC_VER
#else
#endif
// PickupItemSimple
#include "AssemblyU2DCSharp_PickupItemSimpleMethodDeclarations.h"



// System.Void PickupItemSimple::.ctor()
extern "C" void PickupItemSimple__ctor_m2223 (PickupItemSimple_t517 * __this, const MethodInfo* method)
{
	{
		__this->___SecondsBeforeRespawn_2 = (2.0f);
		MonoBehaviour__ctor_m1718(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PickupItemSimple::OnTriggerEnter(UnityEngine.Collider)
extern const MethodInfo* Component_GetComponent_TisPhotonView_t325_m3033_MethodInfo_var;
extern "C" void PickupItemSimple_OnTriggerEnter_m2224 (PickupItemSimple_t517 * __this, Collider_t194 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisPhotonView_t325_m3033_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483790);
		s_Il2CppMethodIntialized = true;
	}
	PhotonView_t325 * V_0 = {0};
	{
		Collider_t194 * L_0 = ___other;
		NullCheck(L_0);
		PhotonView_t325 * L_1 = Component_GetComponent_TisPhotonView_t325_m3033(L_0, /*hidden argument*/Component_GetComponent_TisPhotonView_t325_m3033_MethodInfo_var);
		V_0 = L_1;
		bool L_2 = (__this->___PickupOnCollide_3);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		PhotonView_t325 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_3, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		PhotonView_t325 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = PhotonView_get_isMine_m2002(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		PickupItemSimple_Pickup_m2225(__this, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void PickupItemSimple::Pickup()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void PickupItemSimple_Pickup_m2225 (PickupItemSimple_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___SentPickup_4);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___SentPickup_4 = 1;
		PhotonView_t325 * L_1 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PhotonView_RPC_m2015(L_1, (String_t*) &_stringLiteral760, 5, ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void PickupItemSimple::PunPickupSimple(PhotonMessageInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern "C" void PickupItemSimple_PunPickupSimple_m2226 (PickupItemSimple_t517 * __this, PhotonMessageInfo_t435 * ___msgInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	float V_1 = 0.0f;
	{
		bool L_0 = (__this->___SentPickup_4);
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		PhotonMessageInfo_t435 * L_1 = ___msgInfo;
		NullCheck(L_1);
		PhotonPlayer_t432 * L_2 = (L_1->___sender_1);
		NullCheck(L_2);
		bool L_3 = (L_2->___isLocal_2);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		GameObject_t49 * L_4 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		bool L_5 = GameObjectExtensions_GetActive_m1542(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_0030;
	}

IL_0030:
	{
		__this->___SentPickup_4 = 0;
		GameObject_t49 * L_6 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		bool L_7 = GameObjectExtensions_GetActive_m1542(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		GameObject_t49 * L_8 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral752, L_8, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return;
	}

IL_005d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		double L_10 = PhotonNetwork_get_time_m1876(NULL /*static, unused*/, /*hidden argument*/NULL);
		PhotonMessageInfo_t435 * L_11 = ___msgInfo;
		NullCheck(L_11);
		double L_12 = PhotonMessageInfo_get_timestamp_m1749(L_11, /*hidden argument*/NULL);
		V_0 = ((double)((double)L_10-(double)L_12));
		float L_13 = (__this->___SecondsBeforeRespawn_2);
		double L_14 = V_0;
		V_1 = ((float)((float)L_13-(float)(((float)L_14))));
		float L_15 = V_1;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_0097;
		}
	}
	{
		GameObject_t49 * L_16 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_SetActive_m2429(L_16, 0, /*hidden argument*/NULL);
		float L_17 = V_1;
		MonoBehaviour_Invoke_m2786(__this, (String_t*) &_stringLiteral761, L_17, /*hidden argument*/NULL);
	}

IL_0097:
	{
		return;
	}
}
// System.Void PickupItemSimple::RespawnAfter()
extern "C" void PickupItemSimple_RespawnAfter_m2227 (PickupItemSimple_t517 * __this, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GameObject_t49 * L_2 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m2429(L_2, 1, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// PickupItemSyncer
#include "AssemblyU2DCSharp_PickupItemSyncer.h"
#ifndef _MSC_VER
#else
#endif
// PickupItemSyncer
#include "AssemblyU2DCSharp_PickupItemSyncerMethodDeclarations.h"

#include "Assembly-CSharp_ArrayTypes.h"
// System.Collections.Generic.List`1<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
// System.Collections.Generic.List`1<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
struct Component_t462;
struct PickupItem_t516;
// Declaration !!0 UnityEngine.Component::GetComponent<PickupItem>()
// !!0 UnityEngine.Component::GetComponent<PickupItem>()
#define Component_GetComponent_TisPickupItem_t516_m3143(__this, method) (( PickupItem_t516 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void PickupItemSyncer::.ctor()
extern "C" void PickupItemSyncer__ctor_m2228 (PickupItemSyncer_t518 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1718(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PickupItemSyncer::OnPhotonPlayerConnected(PhotonPlayer)
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern "C" void PickupItemSyncer_OnPhotonPlayerConnected_m2229 (PickupItemSyncer_t518 * __this, PhotonPlayer_t432 * ___newPlayer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		bool L_0 = PhotonNetwork_get_isMasterClient_m1877(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		PhotonPlayer_t432 * L_1 = ___newPlayer;
		PickupItemSyncer_SendPickedUpItems_m2233(__this, L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void PickupItemSyncer::OnJoinedRoom()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void PickupItemSyncer_OnJoinedRoom_m2230 (PickupItemSyncer_t518 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral762);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral762;
		ObjectU5BU5D_t21* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		bool L_2 = PhotonNetwork_get_isMasterClient_m1877(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_3 = L_2;
		Object_t * L_4 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t21* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral763);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral763;
		ObjectU5BU5D_t21* L_6 = L_5;
		PhotonPlayer_t432 * L_7 = PhotonNetwork_get_player_m1843(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = PhotonPlayer_get_ID_m1957(L_7, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m2490(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		bool L_12 = PhotonNetwork_get_isMasterClient_m1877(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___IsWaitingForPickupInit_3 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		PhotonPlayerU5BU5D_t419* L_13 = PhotonNetwork_get_playerList_m1848(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		if ((((int32_t)(((int32_t)(((Array_t *)L_13)->max_length)))) < ((int32_t)2)))
		{
			goto IL_006a;
		}
	}
	{
		MonoBehaviour_Invoke_m2786(__this, (String_t*) &_stringLiteral764, (2.0f), /*hidden argument*/NULL);
	}

IL_006a:
	{
		return;
	}
}
// System.Void PickupItemSyncer::AskForPickupItemSpawnTimes()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void PickupItemSyncer_AskForPickupItemSpawnTimes_m2231 (PickupItemSyncer_t518 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	PhotonPlayer_t432 * V_0 = {0};
	{
		bool L_0 = (__this->___IsWaitingForPickupInit_3);
		if (!L_0)
		{
			goto IL_0099;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonPlayerU5BU5D_t419* L_1 = PhotonNetwork_get_playerList_m1848(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) >= ((int32_t)2)))
		{
			goto IL_002a;
		}
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral765, /*hidden argument*/NULL);
		__this->___IsWaitingForPickupInit_3 = 0;
		return;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonPlayer_t432 * L_2 = PhotonNetwork_get_masterClient_m1844(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		PhotonPlayer_t432 * L_3 = PhotonPlayer_GetNext_m1972(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PhotonPlayer_t432 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		PhotonPlayer_t432 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonPlayer_t432 * L_6 = PhotonNetwork_get_player_m1843(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean PhotonPlayer::Equals(System.Object) */, L_5, L_6);
		if (!L_7)
		{
			goto IL_0056;
		}
	}

IL_004b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonPlayer_t432 * L_8 = PhotonNetwork_get_player_m1843(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		PhotonPlayer_t432 * L_9 = PhotonPlayer_GetNext_m1972(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0056:
	{
		PhotonPlayer_t432 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_0088;
		}
	}
	{
		PhotonPlayer_t432 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonPlayer_t432 * L_12 = PhotonNetwork_get_player_m1843(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_13 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean PhotonPlayer::Equals(System.Object) */, L_11, L_12);
		if (L_13)
		{
			goto IL_0088;
		}
	}
	{
		PhotonView_t325 * L_14 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		PhotonPlayer_t432 * L_15 = V_0;
		NullCheck(L_14);
		PhotonView_RPC_m2017(L_14, (String_t*) &_stringLiteral766, L_15, ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		goto IL_0099;
	}

IL_0088:
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral767, /*hidden argument*/NULL);
		__this->___IsWaitingForPickupInit_3 = 0;
	}

IL_0099:
	{
		return;
	}
}
// System.Void PickupItemSyncer::RequestForPickupTimes(PhotonMessageInfo)
extern "C" void PickupItemSyncer_RequestForPickupTimes_m2232 (PickupItemSyncer_t518 * __this, PhotonMessageInfo_t435 * ___msgInfo, const MethodInfo* method)
{
	{
		PhotonMessageInfo_t435 * L_0 = ___msgInfo;
		NullCheck(L_0);
		PhotonPlayer_t432 * L_1 = (L_0->___sender_1);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogError_m2815(NULL /*static, unused*/, (String_t*) &_stringLiteral768, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		PhotonMessageInfo_t435 * L_2 = ___msgInfo;
		NullCheck(L_2);
		PhotonPlayer_t432 * L_3 = (L_2->___sender_1);
		PickupItemSyncer_SendPickedUpItems_m2233(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PickupItemSyncer::SendPickedUpItems(PhotonPlayer)
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* PickupItem_t516_il2cpp_TypeInfo_var;
extern TypeInfo* PickupItemU5BU5D_t717_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t718_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t700_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* HashSet_1_CopyTo_m3356_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3357_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m3358_MethodInfo_var;
extern "C" void PickupItemSyncer_SendPickedUpItems_m2233 (PickupItemSyncer_t518 * __this, PhotonPlayer_t432 * ___targtePlayer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		PickupItem_t516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		PickupItemU5BU5D_t717_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		List_1_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Double_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		HashSet_1_CopyTo_m3356_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483910);
		List_1__ctor_m3357_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483911);
		List_1_ToArray_m3358_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483912);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	PickupItemU5BU5D_t717* V_2 = {0};
	List_1_t718 * V_3 = {0};
	int32_t V_4 = 0;
	PickupItem_t516 * V_5 = {0};
	double V_6 = 0.0;
	{
		PhotonPlayer_t432 * L_0 = ___targtePlayer;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Debug_LogWarning_m2768(NULL /*static, unused*/, (String_t*) &_stringLiteral769, /*hidden argument*/NULL);
		return;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		double L_1 = PhotonNetwork_get_time_m1876(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		double L_2 = V_0;
		V_1 = ((double)((double)L_2+(double)(0.20000000298023224)));
		IL2CPP_RUNTIME_CLASS_INIT(PickupItem_t516_il2cpp_TypeInfo_var);
		HashSet_1_t515 * L_3 = ((PickupItem_t516_StaticFields*)PickupItem_t516_il2cpp_TypeInfo_var->static_fields)->___DisabledPickupItems_8;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.HashSet`1<PickupItem>::get_Count() */, L_3);
		V_2 = ((PickupItemU5BU5D_t717*)SZArrayNew(PickupItemU5BU5D_t717_il2cpp_TypeInfo_var, L_4));
		HashSet_1_t515 * L_5 = ((PickupItem_t516_StaticFields*)PickupItem_t516_il2cpp_TypeInfo_var->static_fields)->___DisabledPickupItems_8;
		PickupItemU5BU5D_t717* L_6 = V_2;
		NullCheck(L_5);
		HashSet_1_CopyTo_m3356(L_5, L_6, /*hidden argument*/HashSet_1_CopyTo_m3356_MethodInfo_var);
		PickupItemU5BU5D_t717* L_7 = V_2;
		NullCheck(L_7);
		List_1_t718 * L_8 = (List_1_t718 *)il2cpp_codegen_object_new (List_1_t718_il2cpp_TypeInfo_var);
		List_1__ctor_m3357(L_8, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))*(int32_t)2)), /*hidden argument*/List_1__ctor_m3357_MethodInfo_var);
		V_3 = L_8;
		V_4 = 0;
		goto IL_0124;
	}

IL_0051:
	{
		PickupItemU5BU5D_t717* L_9 = V_2;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_5 = (*(PickupItem_t516 **)(PickupItem_t516 **)SZArrayLdElema(L_9, L_11));
		PickupItem_t516 * L_12 = V_5;
		NullCheck(L_12);
		float L_13 = (L_12->___SecondsBeforeRespawn_2);
		if ((!(((float)L_13) <= ((float)(0.0f)))))
		{
			goto IL_0086;
		}
	}
	{
		List_1_t718 * L_14 = V_3;
		PickupItem_t516 * L_15 = V_5;
		NullCheck(L_15);
		int32_t L_16 = PickupItem_get_ViewID_m2213(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Single>::Add(!0) */, L_14, (((float)L_16)));
		List_1_t718 * L_17 = V_3;
		NullCheck(L_17);
		VirtActionInvoker1< float >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Single>::Add(!0) */, L_17, (0.0f));
		goto IL_011e;
	}

IL_0086:
	{
		PickupItem_t516 * L_18 = V_5;
		NullCheck(L_18);
		double L_19 = (L_18->___TimeOfRespawn_7);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		double L_20 = PhotonNetwork_get_time_m1876(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = ((double)((double)L_19-(double)L_20));
		PickupItem_t516 * L_21 = V_5;
		NullCheck(L_21);
		double L_22 = (L_21->___TimeOfRespawn_7);
		double L_23 = V_1;
		if ((!(((double)L_22) > ((double)L_23))))
		{
			goto IL_011e;
		}
	}
	{
		ObjectU5BU5D_t21* L_24 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 8));
		PickupItem_t516 * L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26 = PickupItem_get_ViewID_m2213(L_25, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		Object_t * L_28 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		ArrayElementTypeCheck (L_24, L_28);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 0)) = (Object_t *)L_28;
		ObjectU5BU5D_t21* L_29 = L_24;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 1);
		ArrayElementTypeCheck (L_29, (String_t*) &_stringLiteral770);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, 1)) = (Object_t *)(String_t*) &_stringLiteral770;
		ObjectU5BU5D_t21* L_30 = L_29;
		PickupItem_t516 * L_31 = V_5;
		NullCheck(L_31);
		double L_32 = (L_31->___TimeOfRespawn_7);
		double L_33 = L_32;
		Object_t * L_34 = Box(Double_t700_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 2);
		ArrayElementTypeCheck (L_30, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 2)) = (Object_t *)L_34;
		ObjectU5BU5D_t21* L_35 = L_30;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 3);
		ArrayElementTypeCheck (L_35, (String_t*) &_stringLiteral771);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 3)) = (Object_t *)(String_t*) &_stringLiteral771;
		ObjectU5BU5D_t21* L_36 = L_35;
		double L_37 = V_6;
		double L_38 = L_37;
		Object_t * L_39 = Box(Double_t700_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 4);
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, 4)) = (Object_t *)L_39;
		ObjectU5BU5D_t21* L_40 = L_36;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 5);
		ArrayElementTypeCheck (L_40, (String_t*) &_stringLiteral772);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, 5)) = (Object_t *)(String_t*) &_stringLiteral772;
		ObjectU5BU5D_t21* L_41 = L_40;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		double L_42 = PhotonNetwork_get_time_m1876(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_43 = L_42;
		Object_t * L_44 = Box(Double_t700_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 6);
		ArrayElementTypeCheck (L_41, L_44);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 6)) = (Object_t *)L_44;
		ObjectU5BU5D_t21* L_45 = L_41;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 7);
		ArrayElementTypeCheck (L_45, (String_t*) &_stringLiteral773);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, 7)) = (Object_t *)(String_t*) &_stringLiteral773;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_46 = String_Concat_m2490(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		List_1_t718 * L_47 = V_3;
		PickupItem_t516 * L_48 = V_5;
		NullCheck(L_48);
		int32_t L_49 = PickupItem_get_ViewID_m2213(L_48, /*hidden argument*/NULL);
		NullCheck(L_47);
		VirtActionInvoker1< float >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Single>::Add(!0) */, L_47, (((float)L_49)));
		List_1_t718 * L_50 = V_3;
		double L_51 = V_6;
		NullCheck(L_50);
		VirtActionInvoker1< float >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Single>::Add(!0) */, L_50, (((float)L_51)));
	}

IL_011e:
	{
		int32_t L_52 = V_4;
		V_4 = ((int32_t)((int32_t)L_52+(int32_t)1));
	}

IL_0124:
	{
		int32_t L_53 = V_4;
		PickupItemU5BU5D_t717* L_54 = V_2;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)(((Array_t *)L_54)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		ObjectU5BU5D_t21* L_55 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 0);
		ArrayElementTypeCheck (L_55, (String_t*) &_stringLiteral774);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, 0)) = (Object_t *)(String_t*) &_stringLiteral774;
		ObjectU5BU5D_t21* L_56 = L_55;
		List_1_t718 * L_57 = V_3;
		NullCheck(L_57);
		int32_t L_58 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count() */, L_57);
		int32_t L_59 = L_58;
		Object_t * L_60 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 1);
		ArrayElementTypeCheck (L_56, L_60);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, 1)) = (Object_t *)L_60;
		ObjectU5BU5D_t21* L_61 = L_56;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, 2);
		ArrayElementTypeCheck (L_61, (String_t*) &_stringLiteral775);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_61, 2)) = (Object_t *)(String_t*) &_stringLiteral775;
		ObjectU5BU5D_t21* L_62 = L_61;
		double L_63 = V_0;
		double L_64 = L_63;
		Object_t * L_65 = Box(Double_t700_il2cpp_TypeInfo_var, &L_64);
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, 3);
		ArrayElementTypeCheck (L_62, L_65);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_62, 3)) = (Object_t *)L_65;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_66 = String_Concat_m2490(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		PhotonView_t325 * L_67 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		PhotonPlayer_t432 * L_68 = ___targtePlayer;
		ObjectU5BU5D_t21* L_69 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		double L_70 = PhotonNetwork_get_time_m1876(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_71 = L_70;
		Object_t * L_72 = Box(Double_t700_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 0);
		ArrayElementTypeCheck (L_69, L_72);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_69, 0)) = (Object_t *)L_72;
		ObjectU5BU5D_t21* L_73 = L_69;
		List_1_t718 * L_74 = V_3;
		NullCheck(L_74);
		SingleU5BU5D_t168* L_75 = List_1_ToArray_m3358(L_74, /*hidden argument*/List_1_ToArray_m3358_MethodInfo_var);
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, 1);
		ArrayElementTypeCheck (L_73, L_75);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_73, 1)) = (Object_t *)L_75;
		NullCheck(L_67);
		PhotonView_RPC_m2017(L_67, (String_t*) &_stringLiteral776, L_68, L_73, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PickupItemSyncer::PickupItemInit(System.Double,System.Single[])
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t700_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t604_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisPickupItem_t516_m3143_MethodInfo_var;
extern "C" void PickupItemSyncer_PickupItemInit_m2234 (PickupItemSyncer_t518 * __this, double ___timeBase, SingleU5BU5D_t168* ___inactivePickupsAndTimes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Double_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		Single_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		Component_GetComponent_TisPickupItem_t516_m3143_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483815);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	PhotonView_t325 * V_4 = {0};
	PickupItem_t516 * V_5 = {0};
	double V_6 = 0.0;
	double V_7 = 0.0;
	{
		__this->___IsWaitingForPickupInit_3 = 0;
		V_0 = 0;
		goto IL_00d7;
	}

IL_000e:
	{
		int32_t L_0 = V_0;
		V_1 = ((int32_t)((int32_t)L_0*(int32_t)2));
		SingleU5BU5D_t168* L_1 = ___inactivePickupsAndTimes;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (((int32_t)(*(float*)(float*)SZArrayLdElema(L_1, L_3))));
		SingleU5BU5D_t168* L_4 = ___inactivePickupsAndTimes;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)((int32_t)L_5+(int32_t)1)));
		int32_t L_6 = ((int32_t)((int32_t)L_5+(int32_t)1));
		V_3 = (*(float*)(float*)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = V_2;
		PhotonView_t325 * L_8 = PhotonView_Find_m2021(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		PhotonView_t325 * L_9 = V_4;
		NullCheck(L_9);
		PickupItem_t516 * L_10 = Component_GetComponent_TisPickupItem_t516_m3143(L_9, /*hidden argument*/Component_GetComponent_TisPickupItem_t516_m3143_MethodInfo_var);
		V_5 = L_10;
		float L_11 = V_3;
		if ((!(((float)L_11) <= ((float)(0.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		PickupItem_t516 * L_12 = V_5;
		NullCheck(L_12);
		PickupItem_PickedUp_m2220(L_12, (0.0f), /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_004a:
	{
		float L_13 = V_3;
		double L_14 = ___timeBase;
		V_6 = ((double)((double)(((double)L_13))+(double)L_14));
		ObjectU5BU5D_t21* L_15 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 7));
		PhotonView_t325 * L_16 = V_4;
		NullCheck(L_16);
		int32_t L_17 = PhotonView_get_viewID_m1995(L_16, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 0)) = (Object_t *)L_19;
		ObjectU5BU5D_t21* L_20 = L_15;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		ArrayElementTypeCheck (L_20, (String_t*) &_stringLiteral770);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 1)) = (Object_t *)(String_t*) &_stringLiteral770;
		ObjectU5BU5D_t21* L_21 = L_20;
		double L_22 = V_6;
		double L_23 = L_22;
		Object_t * L_24 = Box(Double_t700_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 2);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 2)) = (Object_t *)L_24;
		ObjectU5BU5D_t21* L_25 = L_21;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 3);
		ArrayElementTypeCheck (L_25, (String_t*) &_stringLiteral777);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 3)) = (Object_t *)(String_t*) &_stringLiteral777;
		ObjectU5BU5D_t21* L_26 = L_25;
		float L_27 = V_3;
		float L_28 = L_27;
		Object_t * L_29 = Box(Single_t604_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 4);
		ArrayElementTypeCheck (L_26, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 4)) = (Object_t *)L_29;
		ObjectU5BU5D_t21* L_30 = L_26;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 5);
		ArrayElementTypeCheck (L_30, (String_t*) &_stringLiteral753);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 5)) = (Object_t *)(String_t*) &_stringLiteral753;
		ObjectU5BU5D_t21* L_31 = L_30;
		PickupItem_t516 * L_32 = V_5;
		NullCheck(L_32);
		float L_33 = (L_32->___SecondsBeforeRespawn_2);
		float L_34 = L_33;
		Object_t * L_35 = Box(Single_t604_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 6);
		ArrayElementTypeCheck (L_31, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 6)) = (Object_t *)L_35;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m2490(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		double L_37 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		double L_38 = PhotonNetwork_get_time_m1876(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_7 = ((double)((double)L_37-(double)L_38));
		float L_39 = V_3;
		if ((!(((float)L_39) <= ((float)(0.0f)))))
		{
			goto IL_00c9;
		}
	}
	{
		V_7 = (0.0);
	}

IL_00c9:
	{
		PickupItem_t516 * L_40 = V_5;
		double L_41 = V_7;
		NullCheck(L_40);
		PickupItem_PickedUp_m2220(L_40, (((float)L_41)), /*hidden argument*/NULL);
	}

IL_00d3:
	{
		int32_t L_42 = V_0;
		V_0 = ((int32_t)((int32_t)L_42+(int32_t)1));
	}

IL_00d7:
	{
		int32_t L_43 = V_0;
		SingleU5BU5D_t168* L_44 = ___inactivePickupsAndTimes;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_44)->max_length)))/(int32_t)2)))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// PointedAtGameObjectInfo
#include "AssemblyU2DCSharp_PointedAtGameObjectInfo.h"
#ifndef _MSC_VER
#else
#endif
// PointedAtGameObjectInfo
#include "AssemblyU2DCSharp_PointedAtGameObjectInfoMethodDeclarations.h"



// System.Void PointedAtGameObjectInfo::.ctor()
extern "C" void PointedAtGameObjectInfo__ctor_m2235 (PointedAtGameObjectInfo_t519 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PointedAtGameObjectInfo::OnGUI()
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" void PointedAtGameObjectInfo_OnGUI_m2236 (PointedAtGameObjectInfo_t519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	PhotonView_t325 * V_0 = {0};
	Vector3_t53  V_1 = {0};
	Vector3_t53  V_2 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t21* G_B4_1 = {0};
	ObjectU5BU5D_t21* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	Rect_t201  G_B4_4 = {0};
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_t21* G_B3_1 = {0};
	ObjectU5BU5D_t21* G_B3_2 = {0};
	String_t* G_B3_3 = {0};
	Rect_t201  G_B3_4 = {0};
	String_t* G_B7_0 = {0};
	int32_t G_B7_1 = 0;
	ObjectU5BU5D_t21* G_B7_2 = {0};
	ObjectU5BU5D_t21* G_B7_3 = {0};
	String_t* G_B7_4 = {0};
	Rect_t201  G_B7_5 = {0};
	int32_t G_B6_0 = 0;
	ObjectU5BU5D_t21* G_B6_1 = {0};
	ObjectU5BU5D_t21* G_B6_2 = {0};
	String_t* G_B6_3 = {0};
	Rect_t201  G_B6_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t21* G_B5_1 = {0};
	ObjectU5BU5D_t21* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	Rect_t201  G_B5_4 = {0};
	{
		GameObject_t49 * L_0 = InputToEvent_get_goPointedAt_m2174(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t49 * L_2 = InputToEvent_get_goPointedAt_m2174(NULL /*static, unused*/, /*hidden argument*/NULL);
		PhotonView_t325 * L_3 = Extensions_GetPhotonView_m1531(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PhotonView_t325 * L_4 = V_0;
		bool L_5 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_4, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00e4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		Vector3_t53  L_6 = Input_get_mousePosition_m2964(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = ((&V_1)->___x_1);
		int32_t L_8 = Screen_get_height_m2428(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_9 = Input_get_mousePosition_m2964(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = ((&V_2)->___y_2);
		Rect_t201  L_11 = {0};
		Rect__ctor_m2425(&L_11, ((float)((float)L_7+(float)(5.0f))), ((float)((float)((float)((float)(((float)L_8))-(float)L_10))-(float)(15.0f))), (300.0f), (30.0f), /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_12 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		PhotonView_t325 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = PhotonView_get_viewID_m1995(L_13, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 0)) = (Object_t *)L_16;
		ObjectU5BU5D_t21* L_17 = L_12;
		PhotonView_t325 * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = (L_18->___instantiationId_18);
		int32_t L_20 = L_19;
		Object_t * L_21 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 1)) = (Object_t *)L_21;
		ObjectU5BU5D_t21* L_22 = L_17;
		PhotonView_t325 * L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = PhotonView_get_prefix_m1991(L_23, /*hidden argument*/NULL);
		int32_t L_25 = L_24;
		Object_t * L_26 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 2);
		ArrayElementTypeCheck (L_22, L_26);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_22, 2)) = (Object_t *)L_26;
		ObjectU5BU5D_t21* L_27 = L_22;
		PhotonView_t325 * L_28 = V_0;
		NullCheck(L_28);
		bool L_29 = PhotonView_get_isSceneView_m1997(L_28, /*hidden argument*/NULL);
		G_B3_0 = 3;
		G_B3_1 = L_27;
		G_B3_2 = L_27;
		G_B3_3 = (String_t*) &_stringLiteral778;
		G_B3_4 = L_11;
		if (!L_29)
		{
			G_B4_0 = 3;
			G_B4_1 = L_27;
			G_B4_2 = L_27;
			G_B4_3 = (String_t*) &_stringLiteral778;
			G_B4_4 = L_11;
			goto IL_00af;
		}
	}
	{
		G_B7_0 = (String_t*) &_stringLiteral779;
		G_B7_1 = G_B3_0;
		G_B7_2 = G_B3_1;
		G_B7_3 = G_B3_2;
		G_B7_4 = G_B3_3;
		G_B7_5 = G_B3_4;
		goto IL_00d9;
	}

IL_00af:
	{
		PhotonView_t325 * L_30 = V_0;
		NullCheck(L_30);
		bool L_31 = PhotonView_get_isMine_m2002(L_30, /*hidden argument*/NULL);
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
		G_B5_4 = G_B4_4;
		if (!L_31)
		{
			G_B6_0 = G_B4_0;
			G_B6_1 = G_B4_1;
			G_B6_2 = G_B4_2;
			G_B6_3 = G_B4_3;
			G_B6_4 = G_B4_4;
			goto IL_00c4;
		}
	}
	{
		G_B7_0 = (String_t*) &_stringLiteral780;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		G_B7_5 = G_B5_4;
		goto IL_00d9;
	}

IL_00c4:
	{
		PhotonView_t325 * L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = (L_32->___ownerId_2);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_34);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral781, L_35, /*hidden argument*/NULL);
		G_B7_0 = L_36;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
		G_B7_5 = G_B6_4;
	}

IL_00d9:
	{
		NullCheck(G_B7_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B7_2, G_B7_1);
		ArrayElementTypeCheck (G_B7_2, G_B7_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B7_2, G_B7_1)) = (Object_t *)G_B7_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Format_m113(NULL /*static, unused*/, G_B7_4, G_B7_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_Label_m2436(NULL /*static, unused*/, G_B7_5, L_37, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		return;
	}
}
// PunPlayerScores
#include "AssemblyU2DCSharp_PunPlayerScores.h"
#ifndef _MSC_VER
#else
#endif
// PunPlayerScores
#include "AssemblyU2DCSharp_PunPlayerScoresMethodDeclarations.h"



// System.Void PunPlayerScores::.ctor()
extern "C" void PunPlayerScores__ctor_m2237 (PunPlayerScores_t520 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// ScoreExtensions
#include "AssemblyU2DCSharp_ScoreExtensions.h"
#ifndef _MSC_VER
#else
#endif
// ScoreExtensions
#include "AssemblyU2DCSharp_ScoreExtensionsMethodDeclarations.h"



// System.Void ScoreExtensions::SetScore(PhotonPlayer,System.Int32)
extern TypeInfo* Hashtable_t436_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" void ScoreExtensions_SetScore_m2238 (Object_t * __this /* static, unused */, PhotonPlayer_t432 * ___player, int32_t ___newScore, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(347);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t436 * V_0 = {0};
	{
		Hashtable_t436 * L_0 = (Hashtable_t436 *)il2cpp_codegen_object_new (Hashtable_t436_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3183(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Hashtable_t436 * L_1 = V_0;
		int32_t L_2 = ___newScore;
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		Hashtable_set_Item_m3186(L_1, (String_t*) &_stringLiteral782, L_4, /*hidden argument*/NULL);
		PhotonPlayer_t432 * L_5 = ___player;
		Hashtable_t436 * L_6 = V_0;
		NullCheck(L_5);
		PhotonPlayer_SetCustomProperties_m1968(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreExtensions::AddScore(PhotonPlayer,System.Int32)
extern TypeInfo* Hashtable_t436_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" void ScoreExtensions_AddScore_m2239 (Object_t * __this /* static, unused */, PhotonPlayer_t432 * ___player, int32_t ___scoreToAddToCurrent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(347);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Hashtable_t436 * V_1 = {0};
	{
		PhotonPlayer_t432 * L_0 = ___player;
		int32_t L_1 = ScoreExtensions_GetScore_m2240(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___scoreToAddToCurrent;
		V_0 = ((int32_t)((int32_t)L_2+(int32_t)L_3));
		Hashtable_t436 * L_4 = (Hashtable_t436 *)il2cpp_codegen_object_new (Hashtable_t436_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3183(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		Hashtable_t436 * L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		Hashtable_set_Item_m3186(L_5, (String_t*) &_stringLiteral782, L_8, /*hidden argument*/NULL);
		PhotonPlayer_t432 * L_9 = ___player;
		Hashtable_t436 * L_10 = V_1;
		NullCheck(L_9);
		PhotonPlayer_SetCustomProperties_m1968(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ScoreExtensions::GetScore(PhotonPlayer)
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" int32_t ScoreExtensions_GetScore_m2240 (Object_t * __this /* static, unused */, PhotonPlayer_t432 * ___player, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		PhotonPlayer_t432 * L_0 = ___player;
		NullCheck(L_0);
		Hashtable_t436 * L_1 = PhotonPlayer_get_customProperties_m1961(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, L_1, (String_t*) &_stringLiteral782, (&V_0));
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_3 = V_0;
		return ((*(int32_t*)((int32_t*)UnBox (L_3, Int32_t29_il2cpp_TypeInfo_var))));
	}

IL_001e:
	{
		return 0;
	}
}
// PunTeams/Team
#include "AssemblyU2DCSharp_PunTeams_Team.h"
#ifndef _MSC_VER
#else
#endif
// PunTeams/Team
#include "AssemblyU2DCSharp_PunTeams_TeamMethodDeclarations.h"



// PunTeams
#include "AssemblyU2DCSharp_PunTeams.h"
#ifndef _MSC_VER
#else
#endif
// PunTeams
#include "AssemblyU2DCSharp_PunTeamsMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.List`1<PhotonPlayer>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
// System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Collections.Generic.List`1<PhotonPlayer>
#include "mscorlib_System_Collections_Generic_List_1_gen_25MethodDeclarations.h"
// TeamExtensions
#include "AssemblyU2DCSharp_TeamExtensionsMethodDeclarations.h"


// System.Void PunTeams::.ctor()
extern "C" void PunTeams__ctor_m2241 (PunTeams_t524 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PunTeams::Start()
extern const Il2CppType* Team_t522_0_0_0_var;
extern TypeInfo* Dictionary_2_t523_il2cpp_TypeInfo_var;
extern TypeInfo* PunTeams_t524_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t44_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t671_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t588_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3359_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3217_MethodInfo_var;
extern "C" void PunTeams_Start_m2242 (PunTeams_t524 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Team_t522_0_0_0_var = il2cpp_codegen_type_from_index(321);
		Dictionary_2_t523_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		PunTeams_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(324);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Enum_t44_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_t671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(322);
		IDisposable_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		Dictionary_2__ctor_m3359_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483913);
		List_1__ctor_m3217_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483854);
		s_Il2CppMethodIntialized = true;
	}
	Array_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t523 * L_0 = (Dictionary_2_t523 *)il2cpp_codegen_object_new (Dictionary_2_t523_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3359(L_0, /*hidden argument*/Dictionary_2__ctor_m3359_MethodInfo_var);
		((PunTeams_t524_StaticFields*)PunTeams_t524_il2cpp_TypeInfo_var->static_fields)->___PlayersPerTeam_3 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2434(NULL /*static, unused*/, LoadTypeToken(Team_t522_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t44_il2cpp_TypeInfo_var);
		Array_t * L_2 = Enum_GetValues_m3360(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Array_t * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator System.Array::GetEnumerator() */, L_3);
		V_2 = L_4;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_0026:
		{
			Object_t * L_5 = V_2;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_5);
			V_1 = L_6;
			Dictionary_2_t523 * L_7 = ((PunTeams_t524_StaticFields*)PunTeams_t524_il2cpp_TypeInfo_var->static_fields)->___PlayersPerTeam_3;
			Object_t * L_8 = V_1;
			List_1_t671 * L_9 = (List_1_t671 *)il2cpp_codegen_object_new (List_1_t671_il2cpp_TypeInfo_var);
			List_1__ctor_m3217(L_9, /*hidden argument*/List_1__ctor_m3217_MethodInfo_var);
			NullCheck(L_7);
			VirtActionInvoker2< uint8_t, List_1_t671 * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::set_Item(!0,!1) */, L_7, ((*(uint8_t*)((uint8_t*)UnBox (L_8, Byte_t26_il2cpp_TypeInfo_var)))), L_9);
		}

IL_0042:
		{
			Object_t * L_10 = V_2;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0026;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_2;
			V_3 = ((Object_t *)IsInst(L_12, IDisposable_t588_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_3;
			if (L_13)
			{
				goto IL_005d;
			}
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(82)
		}

IL_005d:
		{
			Object_t * L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t588_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0064:
	{
		return;
	}
}
// System.Void PunTeams::OnJoinedRoom()
extern "C" void PunTeams_OnJoinedRoom_m2243 (PunTeams_t524 * __this, const MethodInfo* method)
{
	{
		PunTeams_UpdateTeams_m2245(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PunTeams::OnPhotonPlayerPropertiesChanged(System.Object[])
extern "C" void PunTeams_OnPhotonPlayerPropertiesChanged_m2244 (PunTeams_t524 * __this, ObjectU5BU5D_t21* ___playerAndUpdatedProps, const MethodInfo* method)
{
	{
		PunTeams_UpdateTeams_m2245(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PunTeams::UpdateTeams()
extern const Il2CppType* Team_t522_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t44_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* PunTeams_t524_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t588_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern "C" void PunTeams_UpdateTeams_m2245 (PunTeams_t524 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Team_t522_0_0_0_var = il2cpp_codegen_type_from_index(321);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Enum_t44_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		PunTeams_t524_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(324);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		IDisposable_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	Array_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	int32_t V_3 = 0;
	PhotonPlayer_t432 * V_4 = {0};
	uint8_t V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2434(NULL /*static, unused*/, LoadTypeToken(Team_t522_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t44_il2cpp_TypeInfo_var);
		Array_t * L_1 = Enum_GetValues_m3360(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Array_t * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator System.Array::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_001c:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			Dictionary_2_t523 * L_6 = ((PunTeams_t524_StaticFields*)PunTeams_t524_il2cpp_TypeInfo_var->static_fields)->___PlayersPerTeam_3;
			Object_t * L_7 = V_1;
			NullCheck(L_6);
			List_1_t671 * L_8 = (List_1_t671 *)VirtFuncInvoker1< List_1_t671 *, uint8_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::get_Item(!0) */, L_6, ((*(uint8_t*)((uint8_t*)UnBox (L_7, Byte_t26_il2cpp_TypeInfo_var)))));
			NullCheck(L_8);
			VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<PhotonPlayer>::Clear() */, L_8);
		}

IL_0038:
		{
			Object_t * L_9 = V_2;
			NullCheck(L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_001c;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		{
			Object_t * L_11 = V_2;
			V_6 = ((Object_t *)IsInst(L_11, IDisposable_t588_il2cpp_TypeInfo_var));
			Object_t * L_12 = V_6;
			if (L_12)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(72)
		}

IL_0055:
		{
			Object_t * L_13 = V_6;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t588_il2cpp_TypeInfo_var, L_13);
			IL2CPP_END_FINALLY(72)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_005d:
	{
		V_3 = 0;
		goto IL_008d;
	}

IL_0064:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonPlayerU5BU5D_t419* L_14 = PhotonNetwork_get_playerList_m1848(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		V_4 = (*(PhotonPlayer_t432 **)(PhotonPlayer_t432 **)SZArrayLdElema(L_14, L_16));
		PhotonPlayer_t432 * L_17 = V_4;
		uint8_t L_18 = TeamExtensions_GetTeam_m2246(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		Dictionary_2_t523 * L_19 = ((PunTeams_t524_StaticFields*)PunTeams_t524_il2cpp_TypeInfo_var->static_fields)->___PlayersPerTeam_3;
		uint8_t L_20 = V_5;
		NullCheck(L_19);
		List_1_t671 * L_21 = (List_1_t671 *)VirtFuncInvoker1< List_1_t671 *, uint8_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>::get_Item(!0) */, L_19, L_20);
		PhotonPlayer_t432 * L_22 = V_4;
		NullCheck(L_21);
		VirtActionInvoker1< PhotonPlayer_t432 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<PhotonPlayer>::Add(!0) */, L_21, L_22);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_008d:
	{
		int32_t L_24 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonPlayerU5BU5D_t419* L_25 = PhotonNetwork_get_playerList_m1848(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0064;
		}
	}
	{
		return;
	}
}
// TeamExtensions
#include "AssemblyU2DCSharp_TeamExtensions.h"
#ifndef _MSC_VER
#else
#endif



// PunTeams/Team TeamExtensions::GetTeam(PhotonPlayer)
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" uint8_t TeamExtensions_GetTeam_m2246 (Object_t * __this /* static, unused */, PhotonPlayer_t432 * ___player, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		PhotonPlayer_t432 * L_0 = ___player;
		NullCheck(L_0);
		Hashtable_t436 * L_1 = PhotonPlayer_get_customProperties_m1961(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&) */, L_1, (String_t*) &_stringLiteral783, (&V_0));
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_3 = V_0;
		return (uint8_t)(((*(uint8_t*)((uint8_t*)UnBox (L_3, Byte_t26_il2cpp_TypeInfo_var)))));
	}

IL_001e:
	{
		return (uint8_t)(0);
	}
}
// System.Void TeamExtensions::SetTeam(PhotonPlayer,PunTeams/Team)
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* PeerState_t397_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t436_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" void TeamExtensions_SetTeam_m2247 (Object_t * __this /* static, unused */, PhotonPlayer_t432 * ___player, uint8_t ___team, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		PeerState_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Hashtable_t436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(347);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = {0};
	Hashtable_t436 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		bool L_0 = PhotonNetwork_get_connectedAndReady_m1837(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		int32_t L_1 = PhotonNetwork_get_connectionStateDetailed_m1839(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(PeerState_t397_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m2919(NULL /*static, unused*/, (String_t*) &_stringLiteral784, L_3, (String_t*) &_stringLiteral785, /*hidden argument*/NULL);
		Debug_LogWarning_m2768(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonPlayer_t432 * L_5 = PhotonNetwork_get_player_m1843(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint8_t L_6 = TeamExtensions_GetTeam_m2246(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		uint8_t L_7 = V_0;
		uint8_t L_8 = ___team;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_005c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonPlayer_t432 * L_9 = PhotonNetwork_get_player_m1843(NULL /*static, unused*/, /*hidden argument*/NULL);
		Hashtable_t436 * L_10 = (Hashtable_t436 *)il2cpp_codegen_object_new (Hashtable_t436_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3183(L_10, /*hidden argument*/NULL);
		V_1 = L_10;
		Hashtable_t436 * L_11 = V_1;
		uint8_t L_12 = ___team;
		uint8_t L_13 = L_12;
		Object_t * L_14 = Box(Byte_t26_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1) */, L_11, (String_t*) &_stringLiteral783, L_14);
		Hashtable_t436 * L_15 = V_1;
		NullCheck(L_9);
		PhotonPlayer_SetCustomProperties_m1968(L_9, L_15, /*hidden argument*/NULL);
	}

IL_005c:
	{
		return;
	}
}
// QuitOnEscapeOrBack
#include "AssemblyU2DCSharp_QuitOnEscapeOrBack.h"
#ifndef _MSC_VER
#else
#endif
// QuitOnEscapeOrBack
#include "AssemblyU2DCSharp_QuitOnEscapeOrBackMethodDeclarations.h"



// System.Void QuitOnEscapeOrBack::.ctor()
extern "C" void QuitOnEscapeOrBack__ctor_m2248 (QuitOnEscapeOrBack_t526 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void QuitOnEscapeOrBack::Update()
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern "C" void QuitOnEscapeOrBack_Update_m2249 (QuitOnEscapeOrBack_t526 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m2725(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Application_Quit_m3361(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// ServerTime
#include "AssemblyU2DCSharp_ServerTime.h"
#ifndef _MSC_VER
#else
#endif
// ServerTime
#include "AssemblyU2DCSharp_ServerTimeMethodDeclarations.h"

// ExitGames.Client.Photon.PhotonPeer
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonPeerMethodDeclarations.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"


// System.Void ServerTime::.ctor()
extern "C" void ServerTime__ctor_m2250 (ServerTime_t527 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ServerTime::OnGUI()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var;
extern "C" void ServerTime_OnGUI_m2251 (ServerTime_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Screen_get_width_m2424(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t201  L_1 = {0};
		Rect__ctor_m2425(&L_1, (((float)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)2))-(int32_t)((int32_t)100))))), (0.0f), (200.0f), (30.0f), /*hidden argument*/NULL);
		GUILayout_BeginArea_m2994(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		NetworkingPeer_t434 * L_2 = ((PhotonNetwork_t455_StaticFields*)PhotonNetwork_t455_il2cpp_TypeInfo_var->static_fields)->___networkingPeer_4;
		NullCheck(L_2);
		int32_t L_3 = PhotonPeer_get_ServerTimeInMilliSeconds_m3233(L_2, /*hidden argument*/NULL);
		int32_t L_4 = Environment_get_TickCount_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = ((int32_t)((int32_t)L_3-(int32_t)L_4));
		Object_t * L_6 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m2767(NULL /*static, unused*/, (String_t*) &_stringLiteral786, L_6, /*hidden argument*/NULL);
		GUILayout_Label_m3043(NULL /*static, unused*/, L_7, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		bool L_8 = GUILayout_Button_m3044(NULL /*static, unused*/, (String_t*) &_stringLiteral787, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonNetwork_FetchServerTimestamp_m1933(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0068:
	{
		GUILayout_EndArea_m3000(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// ShowInfoOfPlayer
#include "AssemblyU2DCSharp_ShowInfoOfPlayer.h"
#ifndef _MSC_VER
#else
#endif
// ShowInfoOfPlayer
#include "AssemblyU2DCSharp_ShowInfoOfPlayerMethodDeclarations.h"

// UnityEngine.MeshRenderer
#include "UnityEngine_UnityEngine_MeshRenderer.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMesh.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMeshMethodDeclarations.h"
struct GameObject_t49;
struct MeshRenderer_t719;
struct GameObject_t49;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m2825_gshared (GameObject_t49 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m2825(__this, method) (( Object_t * (*) (GameObject_t49 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m2825_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
#define GameObject_AddComponent_TisMeshRenderer_t719_m3362(__this, method) (( MeshRenderer_t719 * (*) (GameObject_t49 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m2825_gshared)(__this, method)
struct GameObject_t49;
struct TextMesh_t528;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.TextMesh>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.TextMesh>()
#define GameObject_AddComponent_TisTextMesh_t528_m3363(__this, method) (( TextMesh_t528 * (*) (GameObject_t49 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m2825_gshared)(__this, method)


// System.Void ShowInfoOfPlayer::.ctor()
extern "C" void ShowInfoOfPlayer__ctor_m2252 (ShowInfoOfPlayer_t530 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1718(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShowInfoOfPlayer::Start()
extern const Il2CppType* Font_t529_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Font_t529_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t49_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMeshRenderer_t719_m3362_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisTextMesh_t528_m3363_MethodInfo_var;
extern "C" void ShowInfoOfPlayer_Start_m2253 (ShowInfoOfPlayer_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t529_0_0_0_var = il2cpp_codegen_type_from_index(441);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Font_t529_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		GameObject_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		GameObject_AddComponent_TisMeshRenderer_t719_m3362_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483914);
		GameObject_AddComponent_TisTextMesh_t528_m3363_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483915);
		s_Il2CppMethodIntialized = true;
	}
	MeshRenderer_t719 * V_0 = {0};
	{
		Font_t529 * L_0 = (__this->___font_5);
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m2434(NULL /*static, unused*/, LoadTypeToken(Font_t529_0_0_0_var), /*hidden argument*/NULL);
		ObjectU5BU5D_t694* L_3 = Resources_FindObjectsOfTypeAll_m3364(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		__this->___font_5 = ((Font_t529 *)Castclass((*(Object_t584 **)(Object_t584 **)SZArrayLdElema(L_3, L_4)), Font_t529_il2cpp_TypeInfo_var));
		Font_t529 * L_5 = (__this->___font_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral788, L_5, /*hidden argument*/NULL);
		Debug_LogWarning_m2768(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0042:
	{
		TextMesh_t528 * L_7 = (__this->___tm_3);
		bool L_8 = Object_op_Equality_m2464(NULL /*static, unused*/, L_7, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00ff;
		}
	}
	{
		GameObject_t49 * L_9 = (GameObject_t49 *)il2cpp_codegen_object_new (GameObject_t49_il2cpp_TypeInfo_var);
		GameObject__ctor_m2508(L_9, (String_t*) &_stringLiteral789, /*hidden argument*/NULL);
		__this->___textGo_2 = L_9;
		GameObject_t49 * L_10 = (__this->___textGo_2);
		NullCheck(L_10);
		Transform_t54 * L_11 = GameObject_get_transform_m2462(L_10, /*hidden argument*/NULL);
		GameObject_t49 * L_12 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_t54 * L_13 = GameObject_get_transform_m2462(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_parent_m2509(L_11, L_13, /*hidden argument*/NULL);
		GameObject_t49 * L_14 = (__this->___textGo_2);
		NullCheck(L_14);
		Transform_t54 * L_15 = GameObject_get_transform_m2462(L_14, /*hidden argument*/NULL);
		Vector3_t53  L_16 = Vector3_get_zero_m2454(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localPosition_m2423(L_15, L_16, /*hidden argument*/NULL);
		GameObject_t49 * L_17 = (__this->___textGo_2);
		NullCheck(L_17);
		MeshRenderer_t719 * L_18 = GameObject_AddComponent_TisMeshRenderer_t719_m3362(L_17, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_t719_m3362_MethodInfo_var);
		V_0 = L_18;
		MeshRenderer_t719 * L_19 = V_0;
		Font_t529 * L_20 = (__this->___font_5);
		NullCheck(L_20);
		Material_t48 * L_21 = Font_get_material_m3365(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Renderer_set_material_m3049(L_19, L_21, /*hidden argument*/NULL);
		GameObject_t49 * L_22 = (__this->___textGo_2);
		NullCheck(L_22);
		TextMesh_t528 * L_23 = GameObject_AddComponent_TisTextMesh_t528_m3363(L_22, /*hidden argument*/GameObject_AddComponent_TisTextMesh_t528_m3363_MethodInfo_var);
		__this->___tm_3 = L_23;
		TextMesh_t528 * L_24 = (__this->___tm_3);
		Font_t529 * L_25 = (__this->___font_5);
		NullCheck(L_24);
		TextMesh_set_font_m3366(L_24, L_25, /*hidden argument*/NULL);
		TextMesh_t528 * L_26 = (__this->___tm_3);
		NullCheck(L_26);
		TextMesh_set_anchor_m3367(L_26, 4, /*hidden argument*/NULL);
		float L_27 = (__this->___CharacterSize_4);
		if ((!(((float)L_27) > ((float)(0.0f)))))
		{
			goto IL_00ff;
		}
	}
	{
		TextMesh_t528 * L_28 = (__this->___tm_3);
		float L_29 = (__this->___CharacterSize_4);
		NullCheck(L_28);
		TextMesh_set_characterSize_m3368(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00ff:
	{
		return;
	}
}
// System.Void ShowInfoOfPlayer::Update()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" void ShowInfoOfPlayer_Update_m2254 (ShowInfoOfPlayer_t530 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	PhotonPlayer_t432 * V_1 = {0};
	int32_t G_B3_0 = 0;
	TextMesh_t528 * G_B10_0 = {0};
	TextMesh_t528 * G_B9_0 = {0};
	String_t* G_B11_0 = {0};
	TextMesh_t528 * G_B11_1 = {0};
	{
		bool L_0 = (__this->___DisableOnOwnObjects_6);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		PhotonView_t325 * L_1 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = PhotonView_get_isMine_m2002(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_0 = G_B3_0;
		GameObject_t49 * L_3 = (__this->___textGo_2);
		bool L_4 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_3, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		GameObject_t49 * L_5 = (__this->___textGo_2);
		bool L_6 = V_0;
		NullCheck(L_5);
		GameObject_SetActive_m2429(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		PhotonView_t325 * L_8 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		PhotonPlayer_t432 * L_9 = PhotonView_get_owner_m1998(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		PhotonPlayer_t432 * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0090;
		}
	}
	{
		TextMesh_t528 * L_11 = (__this->___tm_3);
		PhotonPlayer_t432 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = PhotonPlayer_get_name_m1958(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		G_B9_0 = L_11;
		if (!L_14)
		{
			G_B10_0 = L_11;
			goto IL_0080;
		}
	}
	{
		PhotonPlayer_t432 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = PhotonPlayer_get_ID_m1957(L_15, /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral790, L_18, /*hidden argument*/NULL);
		G_B11_0 = L_19;
		G_B11_1 = G_B9_0;
		goto IL_0086;
	}

IL_0080:
	{
		PhotonPlayer_t432 * L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21 = PhotonPlayer_get_name_m1958(L_20, /*hidden argument*/NULL);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_0;
	}

IL_0086:
	{
		NullCheck(G_B11_1);
		TextMesh_set_text_m3369(G_B11_1, G_B11_0, /*hidden argument*/NULL);
		goto IL_00c5;
	}

IL_0090:
	{
		PhotonView_t325 * L_22 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_23 = PhotonView_get_isSceneView_m1997(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00b5;
		}
	}
	{
		TextMesh_t528 * L_24 = (__this->___tm_3);
		NullCheck(L_24);
		TextMesh_set_text_m3369(L_24, (String_t*) &_stringLiteral791, /*hidden argument*/NULL);
		goto IL_00c5;
	}

IL_00b5:
	{
		TextMesh_t528 * L_25 = (__this->___tm_3);
		NullCheck(L_25);
		TextMesh_set_text_m3369(L_25, (String_t*) &_stringLiteral792, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		return;
	}
}
// ShowStatusWhenConnecting
#include "AssemblyU2DCSharp_ShowStatusWhenConnecting.h"
#ifndef _MSC_VER
#else
#endif
// ShowStatusWhenConnecting
#include "AssemblyU2DCSharp_ShowStatusWhenConnectingMethodDeclarations.h"

// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"


// System.Void ShowStatusWhenConnecting::.ctor()
extern "C" void ShowStatusWhenConnecting__ctor_m2255 (ShowStatusWhenConnecting_t531 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShowStatusWhenConnecting::OnGUI()
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* PeerState_t397_il2cpp_TypeInfo_var;
extern "C" void ShowStatusWhenConnecting_OnGUI_m2256 (ShowStatusWhenConnecting_t531 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		PeerState_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Rect_t201  V_2 = {0};
	{
		GUISkin_t197 * L_0 = (__this->___Skin_2);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		GUISkin_t197 * L_2 = (__this->___Skin_2);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_set_skin_m2727(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		V_0 = (400.0f);
		V_1 = (100.0f);
		int32_t L_3 = Screen_get_width_m2424(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = V_0;
		int32_t L_5 = Screen_get_height_m2428(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = V_1;
		float L_7 = V_0;
		float L_8 = V_1;
		Rect__ctor_m2425((&V_2), ((float)((float)((float)((float)(((float)L_3))-(float)L_4))/(float)(2.0f))), ((float)((float)((float)((float)(((float)L_5))-(float)L_6))/(float)(2.0f))), L_7, L_8, /*hidden argument*/NULL);
		Rect_t201  L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUISkin_t197 * L_10 = GUI_get_skin_m2437(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		GUIStyle_t303 * L_11 = GUISkin_get_box_m3103(L_10, /*hidden argument*/NULL);
		GUILayout_BeginArea_m3104(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		String_t* L_12 = ShowStatusWhenConnecting_GetConnectingDots_m2257(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral793, L_12, /*hidden argument*/NULL);
		GUISkin_t197 * L_14 = GUI_get_skin_m2437(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		GUIStyleU5BU5D_t668* L_15 = GUISkin_get_customStyles_m3105(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		int32_t L_16 = 0;
		GUILayout_Label_m2998(NULL /*static, unused*/, L_13, (*(GUIStyle_t303 **)(GUIStyle_t303 **)SZArrayLdElema(L_15, L_16)), ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		int32_t L_17 = PhotonNetwork_get_connectionStateDetailed_m1839(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(PeerState_t397_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral794, L_19, /*hidden argument*/NULL);
		GUILayout_Label_m3043(NULL /*static, unused*/, L_20, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_EndArea_m3000(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_21 = PhotonNetwork_get_connectionStateDetailed_m1839(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00bb;
		}
	}
	{
		Behaviour_set_enabled_m2780(__this, 0, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		return;
	}
}
// System.String ShowStatusWhenConnecting::GetConnectingDots()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern "C" String_t* ShowStatusWhenConnecting_GetConnectingDots_m2257 (ShowStatusWhenConnecting_t531 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		float L_1 = Time_get_timeSinceLevelLoad_m2546(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_FloorToInt_m2578(NULL /*static, unused*/, (fmodf(((float)((float)L_1*(float)(3.0f))), (4.0f))), /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0034;
	}

IL_0024:
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m105(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral795, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_2;
		V_2 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_6 = V_2;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
// SmoothSyncMovement
#include "AssemblyU2DCSharp_SmoothSyncMovement.h"
#ifndef _MSC_VER
#else
#endif
// SmoothSyncMovement
#include "AssemblyU2DCSharp_SmoothSyncMovementMethodDeclarations.h"



// System.Void SmoothSyncMovement::.ctor()
extern "C" void SmoothSyncMovement__ctor_m2258 (SmoothSyncMovement_t532 * __this, const MethodInfo* method)
{
	{
		__this->___SmoothingDelay_2 = (5.0f);
		Vector3_t53  L_0 = Vector3_get_zero_m2454(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___correctPlayerPos_3 = L_0;
		Quaternion_t69  L_1 = Quaternion_get_identity_m2529(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___correctPlayerRot_4 = L_1;
		MonoBehaviour__ctor_m1718(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SmoothSyncMovement::Awake()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SmoothSyncMovement_Awake_m2259 (SmoothSyncMovement_t532 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		PhotonView_t325 * L_0 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		PhotonView_t325 * L_2 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Component_t462 * L_3 = (L_2->___observed_9);
		bool L_4 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_3, __this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m92(NULL /*static, unused*/, __this, (String_t*) &_stringLiteral796, /*hidden argument*/NULL);
		Debug_LogWarning_m2768(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void SmoothSyncMovement::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern TypeInfo* Vector3_t53_il2cpp_TypeInfo_var;
extern TypeInfo* Quaternion_t69_il2cpp_TypeInfo_var;
extern "C" void SmoothSyncMovement_OnPhotonSerializeView_m2260 (SmoothSyncMovement_t532 * __this, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Quaternion_t69_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		s_Il2CppMethodIntialized = true;
	}
	{
		PhotonStream_t439 * L_0 = ___stream;
		NullCheck(L_0);
		bool L_1 = PhotonStream_get_isWriting_m1768(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		PhotonStream_t439 * L_2 = ___stream;
		Transform_t54 * L_3 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t53  L_4 = Transform_get_position_m2459(L_3, /*hidden argument*/NULL);
		Vector3_t53  L_5 = L_4;
		Object_t * L_6 = Box(Vector3_t53_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		PhotonStream_SendNext_m1773(L_2, L_6, /*hidden argument*/NULL);
		PhotonStream_t439 * L_7 = ___stream;
		Transform_t54 * L_8 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t69  L_9 = Transform_get_rotation_m2512(L_8, /*hidden argument*/NULL);
		Quaternion_t69  L_10 = L_9;
		Object_t * L_11 = Box(Quaternion_t69_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		PhotonStream_SendNext_m1773(L_7, L_11, /*hidden argument*/NULL);
		goto IL_005e;
	}

IL_003c:
	{
		PhotonStream_t439 * L_12 = ___stream;
		NullCheck(L_12);
		Object_t * L_13 = PhotonStream_ReceiveNext_m1771(L_12, /*hidden argument*/NULL);
		__this->___correctPlayerPos_3 = ((*(Vector3_t53 *)((Vector3_t53 *)UnBox (L_13, Vector3_t53_il2cpp_TypeInfo_var))));
		PhotonStream_t439 * L_14 = ___stream;
		NullCheck(L_14);
		Object_t * L_15 = PhotonStream_ReceiveNext_m1771(L_14, /*hidden argument*/NULL);
		__this->___correctPlayerRot_4 = ((*(Quaternion_t69 *)((Quaternion_t69 *)UnBox (L_15, Quaternion_t69_il2cpp_TypeInfo_var))));
	}

IL_005e:
	{
		return;
	}
}
// System.Void SmoothSyncMovement::Update()
extern "C" void SmoothSyncMovement_Update_m2261 (SmoothSyncMovement_t532 * __this, const MethodInfo* method)
{
	{
		PhotonView_t325 * L_0 = MonoBehaviour_get_photonView_m1719(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = PhotonView_get_isMine_m2002(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_006a;
		}
	}
	{
		Transform_t54 * L_2 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		Transform_t54 * L_3 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t53  L_4 = Transform_get_position_m2459(L_3, /*hidden argument*/NULL);
		Vector3_t53  L_5 = (__this->___correctPlayerPos_3);
		float L_6 = Time_get_deltaTime_m2446(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = (__this->___SmoothingDelay_2);
		Vector3_t53  L_8 = Vector3_Lerp_m2445(NULL /*static, unused*/, L_4, L_5, ((float)((float)L_6*(float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_m2461(L_2, L_8, /*hidden argument*/NULL);
		Transform_t54 * L_9 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		Transform_t54 * L_10 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Quaternion_t69  L_11 = Transform_get_rotation_m2512(L_10, /*hidden argument*/NULL);
		Quaternion_t69  L_12 = (__this->___correctPlayerRot_4);
		float L_13 = Time_get_deltaTime_m2446(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = (__this->___SmoothingDelay_2);
		Quaternion_t69  L_15 = Quaternion_Lerp_m3151(NULL /*static, unused*/, L_11, L_12, ((float)((float)L_13*(float)L_14)), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_rotation_m2633(L_9, L_15, /*hidden argument*/NULL);
	}

IL_006a:
	{
		return;
	}
}
// SupportLogger
#include "AssemblyU2DCSharp_SupportLogger.h"
#ifndef _MSC_VER
#else
#endif
// SupportLogger
#include "AssemblyU2DCSharp_SupportLoggerMethodDeclarations.h"

// SupportLogging
#include "AssemblyU2DCSharp_SupportLogging.h"
struct GameObject_t49;
struct SupportLogging_t534;
// Declaration !!0 UnityEngine.GameObject::AddComponent<SupportLogging>()
// !!0 UnityEngine.GameObject::AddComponent<SupportLogging>()
#define GameObject_AddComponent_TisSupportLogging_t534_m3370(__this, method) (( SupportLogging_t534 * (*) (GameObject_t49 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m2825_gshared)(__this, method)


// System.Void SupportLogger::.ctor()
extern "C" void SupportLogger__ctor_m2262 (SupportLogger_t533 * __this, const MethodInfo* method)
{
	{
		__this->___LogTrafficStats_2 = 1;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogger::Start()
extern TypeInfo* GameObject_t49_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisSupportLogging_t534_m3370_MethodInfo_var;
extern "C" void SupportLogger_Start_m2263 (SupportLogger_t533 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		GameObject_AddComponent_TisSupportLogging_t534_m3370_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483916);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t49 * V_0 = {0};
	SupportLogging_t534 * V_1 = {0};
	{
		GameObject_t49 * L_0 = GameObject_Find_m3371(NULL /*static, unused*/, (String_t*) &_stringLiteral797, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t49 * L_1 = V_0;
		bool L_2 = Object_op_Equality_m2464(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		GameObject_t49 * L_3 = (GameObject_t49 *)il2cpp_codegen_object_new (GameObject_t49_il2cpp_TypeInfo_var);
		GameObject__ctor_m2508(L_3, (String_t*) &_stringLiteral797, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t49 * L_4 = V_0;
		Object_DontDestroyOnLoad_m3052(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		GameObject_t49 * L_5 = V_0;
		NullCheck(L_5);
		SupportLogging_t534 * L_6 = GameObject_AddComponent_TisSupportLogging_t534_m3370(L_5, /*hidden argument*/GameObject_AddComponent_TisSupportLogging_t534_m3370_MethodInfo_var);
		V_1 = L_6;
		SupportLogging_t534 * L_7 = V_1;
		bool L_8 = (__this->___LogTrafficStats_2);
		NullCheck(L_7);
		L_7->___LogTrafficStats_2 = L_8;
	}

IL_003b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// SupportLogging
#include "AssemblyU2DCSharp_SupportLoggingMethodDeclarations.h"

// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// ServerSettings
#include "AssemblyU2DCSharp_ServerSettings.h"
// ServerSettings/HostingOption
#include "AssemblyU2DCSharp_ServerSettings_HostingOption.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"


// System.Void SupportLogging::.ctor()
extern "C" void SupportLogging__ctor_m2264 (SupportLogging_t534 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::Start()
extern "C" void SupportLogging_Start_m2265 (SupportLogging_t534 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___LogTrafficStats_2);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		MonoBehaviour_InvokeRepeating_m3372(__this, (String_t*) &_stringLiteral798, (10.0f), (10.0f), /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void SupportLogging::OnApplicationQuit()
extern "C" void SupportLogging_OnApplicationQuit_m2266 (SupportLogging_t534 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour_CancelInvoke_m3373(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::LogStats()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SupportLogging_LogStats_m2267 (SupportLogging_t534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___LogTrafficStats_2);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		String_t* L_1 = PhotonNetwork_NetworkStatisticsToString_m1894(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral799, L_1, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void SupportLogging::LogBasics()
extern TypeInfo* StringBuilder_t640_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* CloudRegionCode_t393_il2cpp_TypeInfo_var;
extern TypeInfo* HostingOption_t473_il2cpp_TypeInfo_var;
extern "C" void SupportLogging_LogBasics_m2268 (SupportLogging_t534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		CloudRegionCode_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(368);
		HostingOption_t473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t640 * V_0 = {0};
	{
		StringBuilder_t640 * L_0 = (StringBuilder_t640 *)il2cpp_codegen_object_new (StringBuilder_t640_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2876(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t640 * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_AppendFormat_m3374(L_1, (String_t*) &_stringLiteral800, (String_t*) &_stringLiteral430, /*hidden argument*/NULL);
		StringBuilder_t640 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		NetworkingPeer_t434 * L_3 = ((PhotonNetwork_t455_StaticFields*)PhotonNetwork_t455_il2cpp_TypeInfo_var->static_fields)->___networkingPeer_4;
		NullCheck(L_3);
		String_t* L_4 = (L_3->___mAppId_10);
		NullCheck(L_4);
		String_t* L_5 = String_Substring_m2872(L_4, 0, 8, /*hidden argument*/NULL);
		NetworkingPeer_t434 * L_6 = ((PhotonNetwork_t455_StaticFields*)PhotonNetwork_t455_il2cpp_TypeInfo_var->static_fields)->___networkingPeer_4;
		NullCheck(L_6);
		String_t* L_7 = NetworkingPeer_get_mAppVersionPun_m1589(L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringBuilder_AppendFormat_m3375(L_2, (String_t*) &_stringLiteral801, L_5, L_7, /*hidden argument*/NULL);
		StringBuilder_t640 * L_8 = V_0;
		String_t* L_9 = PhotonNetwork_get_ServerAddress_m1834(NULL /*static, unused*/, /*hidden argument*/NULL);
		NetworkingPeer_t434 * L_10 = ((PhotonNetwork_t455_StaticFields*)PhotonNetwork_t455_il2cpp_TypeInfo_var->static_fields)->___networkingPeer_4;
		NullCheck(L_10);
		int32_t L_11 = NetworkingPeer_get_CloudRegion_m1626(L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(CloudRegionCode_t393_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_8);
		StringBuilder_AppendFormat_m3375(L_8, (String_t*) &_stringLiteral802, L_9, L_13, /*hidden argument*/NULL);
		StringBuilder_t640 * L_14 = V_0;
		ServerSettings_t452 * L_15 = ((PhotonNetwork_t455_StaticFields*)PhotonNetwork_t455_il2cpp_TypeInfo_var->static_fields)->___PhotonServerSettings_6;
		NullCheck(L_15);
		int32_t L_16 = (L_15->___HostType_2);
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(HostingOption_t473_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		StringBuilder_AppendFormat_m3374(L_14, (String_t*) &_stringLiteral803, L_18, /*hidden argument*/NULL);
		StringBuilder_t640 * L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_19);
		Debug_Log_m90(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::OnConnectedToPhoton()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern "C" void SupportLogging_OnConnectedToPhoton_m2269 (SupportLogging_t534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral804, /*hidden argument*/NULL);
		SupportLogging_LogBasics_m2268(__this, /*hidden argument*/NULL);
		bool L_0 = (__this->___LogTrafficStats_2);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		PhotonNetwork_set_NetworkStatisticsEnabled_m1885(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void SupportLogging::OnFailedToConnectToPhoton(DisconnectCause)
extern TypeInfo* DisconnectCause_t398_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SupportLogging_OnFailedToConnectToPhoton_m2270 (SupportLogging_t534 * __this, int32_t ___cause, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisconnectCause_t398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___cause;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(DisconnectCause_t398_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m2919(NULL /*static, unused*/, (String_t*) &_stringLiteral805, L_2, (String_t*) &_stringLiteral806, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		SupportLogging_LogBasics_m2268(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::OnJoinedLobby()
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SupportLogging_OnJoinedLobby_m2271 (SupportLogging_t534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		TypedLobby_t431 * L_0 = PhotonNetwork_get_lobby_m1866(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m2919(NULL /*static, unused*/, (String_t*) &_stringLiteral807, L_0, (String_t*) &_stringLiteral806, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::OnJoinedRoom()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SupportLogging_OnJoinedRoom_m2272 (SupportLogging_t534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 6));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral808);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral808;
		ObjectU5BU5D_t21* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		Room_t429 * L_2 = PhotonNetwork_get_room_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t21* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral809);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)(String_t*) &_stringLiteral809;
		ObjectU5BU5D_t21* L_4 = L_3;
		TypedLobby_t431 * L_5 = PhotonNetwork_get_lobby_m1866(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t21* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral810);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)(String_t*) &_stringLiteral810;
		ObjectU5BU5D_t21* L_7 = L_6;
		String_t* L_8 = PhotonNetwork_get_ServerAddress_m1834(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m2490(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::OnCreatedRoom()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t455_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SupportLogging_OnCreatedRoom_m2273 (SupportLogging_t534 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		PhotonNetwork_t455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 6));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral811);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral811;
		ObjectU5BU5D_t21* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t455_il2cpp_TypeInfo_var);
		Room_t429 * L_2 = PhotonNetwork_get_room_m1842(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t21* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral809);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)(String_t*) &_stringLiteral809;
		ObjectU5BU5D_t21* L_4 = L_3;
		TypedLobby_t431 * L_5 = PhotonNetwork_get_lobby_m1866(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t21* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral810);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)(String_t*) &_stringLiteral810;
		ObjectU5BU5D_t21* L_7 = L_6;
		String_t* L_8 = PhotonNetwork_get_ServerAddress_m1834(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m2490(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SupportLogging::OnLeftRoom()
extern "C" void SupportLogging_OnLeftRoom_m2274 (SupportLogging_t534 * __this, const MethodInfo* method)
{
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral812, /*hidden argument*/NULL);
		return;
	}
}
// ExitGames.Client.DemoParticle.TimeKeeper
#include "AssemblyU2DCSharp_ExitGames_Client_DemoParticle_TimeKeeper.h"
#ifndef _MSC_VER
#else
#endif
// ExitGames.Client.DemoParticle.TimeKeeper
#include "AssemblyU2DCSharp_ExitGames_Client_DemoParticle_TimeKeeperMethodDeclarations.h"



// System.Void ExitGames.Client.DemoParticle.TimeKeeper::.ctor(System.Int32)
extern "C" void TimeKeeper__ctor_m2275 (TimeKeeper_t535 * __this, int32_t ___interval, const MethodInfo* method)
{
	{
		int32_t L_0 = Environment_get_TickCount_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lastExecutionTime_0 = L_0;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		TimeKeeper_set_IsEnabled_m2279(__this, 1, /*hidden argument*/NULL);
		int32_t L_1 = ___interval;
		TimeKeeper_set_Interval_m2277(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.DemoParticle.TimeKeeper::get_Interval()
extern "C" int32_t TimeKeeper_get_Interval_m2276 (TimeKeeper_t535 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CIntervalU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void ExitGames.Client.DemoParticle.TimeKeeper::set_Interval(System.Int32)
extern "C" void TimeKeeper_set_Interval_m2277 (TimeKeeper_t535 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CIntervalU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean ExitGames.Client.DemoParticle.TimeKeeper::get_IsEnabled()
extern "C" bool TimeKeeper_get_IsEnabled_m2278 (TimeKeeper_t535 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CIsEnabledU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void ExitGames.Client.DemoParticle.TimeKeeper::set_IsEnabled(System.Boolean)
extern "C" void TimeKeeper_set_IsEnabled_m2279 (TimeKeeper_t535 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CIsEnabledU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean ExitGames.Client.DemoParticle.TimeKeeper::get_ShouldExecute()
extern "C" bool TimeKeeper_get_ShouldExecute_m2280 (TimeKeeper_t535 * __this, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		bool L_0 = TimeKeeper_get_IsEnabled_m2278(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		bool L_1 = (__this->___shouldExecute_1);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = Environment_get_TickCount_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = (__this->___lastExecutionTime_0);
		int32_t L_4 = TimeKeeper_get_Interval_m2276(__this, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)((int32_t)((int32_t)L_2-(int32_t)L_3))) > ((int32_t)L_4))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 1;
	}

IL_002d:
	{
		G_B6_0 = G_B4_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 0;
	}

IL_0030:
	{
		return G_B6_0;
	}
}
// System.Void ExitGames.Client.DemoParticle.TimeKeeper::set_ShouldExecute(System.Boolean)
extern "C" void TimeKeeper_set_ShouldExecute_m2281 (TimeKeeper_t535 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___shouldExecute_1 = L_0;
		return;
	}
}
// System.Void ExitGames.Client.DemoParticle.TimeKeeper::Reset()
extern "C" void TimeKeeper_Reset_m2282 (TimeKeeper_t535 * __this, const MethodInfo* method)
{
	{
		__this->___shouldExecute_1 = 0;
		int32_t L_0 = Environment_get_TickCount_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lastExecutionTime_0 = L_0;
		return;
	}
}
// ActiveStateToggler
#include "AssemblyU2DCSharp_ActiveStateToggler.h"
#ifndef _MSC_VER
#else
#endif
// ActiveStateToggler
#include "AssemblyU2DCSharp_ActiveStateTogglerMethodDeclarations.h"



// System.Void ActiveStateToggler::.ctor()
extern "C" void ActiveStateToggler__ctor_m2283 (ActiveStateToggler_t536 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ActiveStateToggler::ToggleActive()
extern "C" void ActiveStateToggler_ToggleActive_m2284 (ActiveStateToggler_t536 * __this, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		GameObject_t49 * L_1 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_get_activeSelf_m2433(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m2429(L_0, ((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// ApplicationManager
#include "AssemblyU2DCSharp_ApplicationManager.h"
#ifndef _MSC_VER
#else
#endif
// ApplicationManager
#include "AssemblyU2DCSharp_ApplicationManagerMethodDeclarations.h"



// System.Void ApplicationManager::.ctor()
extern "C" void ApplicationManager__ctor_m2285 (ApplicationManager_t537 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ApplicationManager::Quit()
extern "C" void ApplicationManager_Quit_m2286 (ApplicationManager_t537 * __this, const MethodInfo* method)
{
	{
		Application_Quit_m3361(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// ChangeColor
#include "AssemblyU2DCSharp_ChangeColor.h"
#ifndef _MSC_VER
#else
#endif
// ChangeColor
#include "AssemblyU2DCSharp_ChangeColorMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Light
#include "UnityEngine_UnityEngine_Light.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Light
#include "UnityEngine_UnityEngine_LightMethodDeclarations.h"
struct Component_t462;
struct Renderer_t103;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t103_m2411(__this, method) (( Renderer_t103 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)
struct Component_t462;
struct Light_t720;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
#define Component_GetComponent_TisLight_t720_m3376(__this, method) (( Light_t720 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void ChangeColor::.ctor()
extern "C" void ChangeColor__ctor_m2287 (ChangeColor_t538 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChangeColor::OnEnable()
extern "C" void ChangeColor_OnEnable_m2288 (ChangeColor_t538 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ChangeColor::SetRed(System.Single)
extern "C" void ChangeColor_SetRed_m2289 (ChangeColor_t538 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		ChangeColor_OnValueChanged_m2292(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChangeColor::SetGreen(System.Single)
extern "C" void ChangeColor_SetGreen_m2290 (ChangeColor_t538 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		ChangeColor_OnValueChanged_m2292(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChangeColor::SetBlue(System.Single)
extern "C" void ChangeColor_SetBlue_m2291 (ChangeColor_t538 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		ChangeColor_OnValueChanged_m2292(__this, L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChangeColor::OnValueChanged(System.Single,System.Int32)
extern const MethodInfo* Component_GetComponent_TisRenderer_t103_m2411_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisLight_t720_m3376_MethodInfo_var;
extern "C" void ChangeColor_OnValueChanged_m2292 (ChangeColor_t538 * __this, float ___value, int32_t ___channel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t103_m2411_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		Component_GetComponent_TisLight_t720_m3376_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483917);
		s_Il2CppMethodIntialized = true;
	}
	Color_t121  V_0 = {0};
	{
		Color_t121  L_0 = Color_get_white_m2643(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Renderer_t103 * L_1 = Component_GetComponent_TisRenderer_t103_m2411(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t103_m2411_MethodInfo_var);
		bool L_2 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Renderer_t103 * L_3 = Component_GetComponent_TisRenderer_t103_m2411(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t103_m2411_MethodInfo_var);
		NullCheck(L_3);
		Material_t48 * L_4 = Renderer_get_material_m2416(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Color_t121  L_5 = Material_get_color_m3377(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_004a;
	}

IL_002d:
	{
		Light_t720 * L_6 = Component_GetComponent_TisLight_t720_m3376(__this, /*hidden argument*/Component_GetComponent_TisLight_t720_m3376_MethodInfo_var);
		bool L_7 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_6, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		Light_t720 * L_8 = Component_GetComponent_TisLight_t720_m3376(__this, /*hidden argument*/Component_GetComponent_TisLight_t720_m3376_MethodInfo_var);
		NullCheck(L_8);
		Color_t121  L_9 = Light_get_color_m3378(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_004a:
	{
		int32_t L_10 = ___channel;
		float L_11 = ___value;
		Color_set_Item_m3379((&V_0), L_10, L_11, /*hidden argument*/NULL);
		Renderer_t103 * L_12 = Component_GetComponent_TisRenderer_t103_m2411(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t103_m2411_MethodInfo_var);
		bool L_13 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_12, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		Renderer_t103 * L_14 = Component_GetComponent_TisRenderer_t103_m2411(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t103_m2411_MethodInfo_var);
		NullCheck(L_14);
		Material_t48 * L_15 = Renderer_get_material_m2416(L_14, /*hidden argument*/NULL);
		Color_t121  L_16 = V_0;
		NullCheck(L_15);
		Material_set_color_m3051(L_15, L_16, /*hidden argument*/NULL);
		goto IL_0097;
	}

IL_007a:
	{
		Light_t720 * L_17 = Component_GetComponent_TisLight_t720_m3376(__this, /*hidden argument*/Component_GetComponent_TisLight_t720_m3376_MethodInfo_var);
		bool L_18 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_17, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0097;
		}
	}
	{
		Light_t720 * L_19 = Component_GetComponent_TisLight_t720_m3376(__this, /*hidden argument*/Component_GetComponent_TisLight_t720_m3376_MethodInfo_var);
		Color_t121  L_20 = V_0;
		NullCheck(L_19);
		Light_set_color_m3380(L_19, L_20, /*hidden argument*/NULL);
	}

IL_0097:
	{
		return;
	}
}
// System.Void ChangeColor::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern const MethodInfo* Component_GetComponent_TisRenderer_t103_m2411_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisLight_t720_m3376_MethodInfo_var;
extern "C" void ChangeColor_OnPointerClick_m2293 (ChangeColor_t538 * __this, PointerEventData_t581 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t103_m2411_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		Component_GetComponent_TisLight_t720_m3376_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483917);
		s_Il2CppMethodIntialized = true;
	}
	{
		Renderer_t103 * L_0 = Component_GetComponent_TisRenderer_t103_m2411(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t103_m2411_MethodInfo_var);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		Renderer_t103 * L_2 = Component_GetComponent_TisRenderer_t103_m2411(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t103_m2411_MethodInfo_var);
		NullCheck(L_2);
		Material_t48 * L_3 = Renderer_get_material_m2416(L_2, /*hidden argument*/NULL);
		float L_4 = Random_get_value_m3381(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = Random_get_value_m3381(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = Random_get_value_m3381(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t121  L_7 = {0};
		Color__ctor_m2626(&L_7, L_4, L_5, L_6, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Material_set_color_m3051(L_3, L_7, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_003f:
	{
		Light_t720 * L_8 = Component_GetComponent_TisLight_t720_m3376(__this, /*hidden argument*/Component_GetComponent_TisLight_t720_m3376_MethodInfo_var);
		bool L_9 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_8, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		Light_t720 * L_10 = Component_GetComponent_TisLight_t720_m3376(__this, /*hidden argument*/Component_GetComponent_TisLight_t720_m3376_MethodInfo_var);
		float L_11 = Random_get_value_m3381(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = Random_get_value_m3381(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = Random_get_value_m3381(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t121  L_14 = {0};
		Color__ctor_m2626(&L_14, L_11, L_12, L_13, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Light_set_color_m3380(L_10, L_14, /*hidden argument*/NULL);
	}

IL_0074:
	{
		return;
	}
}
// Consolation.Console/Log
#include "AssemblyU2DCSharp_Consolation_Console_Log.h"
#ifndef _MSC_VER
#else
#endif
// Consolation.Console/Log
#include "AssemblyU2DCSharp_Consolation_Console_LogMethodDeclarations.h"



// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// Conversion methods for marshalling of: Consolation.Console/Log
void Log_t539_marshal(const Log_t539& unmarshaled, Log_t539_marshaled& marshaled)
{
	marshaled.___message_0 = il2cpp_codegen_marshal_string(unmarshaled.___message_0);
	marshaled.___stackTrace_1 = il2cpp_codegen_marshal_string(unmarshaled.___stackTrace_1);
	marshaled.___type_2 = unmarshaled.___type_2;
}
void Log_t539_marshal_back(const Log_t539_marshaled& marshaled, Log_t539& unmarshaled)
{
	unmarshaled.___message_0 = il2cpp_codegen_marshal_string_result(marshaled.___message_0);
	unmarshaled.___stackTrace_1 = il2cpp_codegen_marshal_string_result(marshaled.___stackTrace_1);
	unmarshaled.___type_2 = marshaled.___type_2;
}
// Conversion method for clean up from marshalling of: Consolation.Console/Log
void Log_t539_marshal_cleanup(Log_t539_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___message_0);
	marshaled.___message_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___stackTrace_1);
	marshaled.___stackTrace_1 = NULL;
}
// Consolation.Console
#include "AssemblyU2DCSharp_Consolation_Console.h"
#ifndef _MSC_VER
#else
#endif
// Consolation.Console
#include "AssemblyU2DCSharp_Consolation_ConsoleMethodDeclarations.h"

// System.Collections.Generic.List`1<Consolation.Console/Log>
#include "mscorlib_System_Collections_Generic_List_1_gen_32.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.LogType,UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunction.h"
// System.Collections.Generic.List`1<Consolation.Console/Log>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.LogType,UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14MethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunctionMethodDeclarations.h"


// System.Void Consolation.Console::.ctor()
extern TypeInfo* List_1_t540_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3382_MethodInfo_var;
extern "C" void Console__ctor_m2294 (Console_t543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t540_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		List_1__ctor_m3382_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483918);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___toggleKey_4 = ((int32_t)96);
		__this->___shakeToOpen_5 = 1;
		__this->___shakeAcceleration_6 = (3.0f);
		List_1_t540 * L_0 = (List_1_t540 *)il2cpp_codegen_object_new (List_1_t540_il2cpp_TypeInfo_var);
		List_1__ctor_m3382(L_0, /*hidden argument*/List_1__ctor_m3382_MethodInfo_var);
		__this->___logs_7 = L_0;
		Rect_t201  L_1 = {0};
		Rect__ctor_m2425(&L_1, (0.0f), (0.0f), (10000.0f), (20.0f), /*hidden argument*/NULL);
		__this->___titleBarRect_14 = L_1;
		int32_t L_2 = Screen_get_width_m2424(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_height_m2428(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t201  L_4 = {0};
		Rect__ctor_m2425(&L_4, (20.0f), (20.0f), (((float)((int32_t)((int32_t)L_2-(int32_t)((int32_t)40))))), (((float)((int32_t)((int32_t)L_3-(int32_t)((int32_t)40))))), /*hidden argument*/NULL);
		__this->___windowRect_15 = L_4;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Consolation.Console::.cctor()
extern TypeInfo* Dictionary_2_t541_il2cpp_TypeInfo_var;
extern TypeInfo* Console_t543_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t542_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3383_MethodInfo_var;
extern "C" void Console__cctor_m2295 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t541_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		Console_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		GUIContent_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		Dictionary_2__ctor_m3383_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483919);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t541 * V_0 = {0};
	{
		Dictionary_2_t541 * L_0 = (Dictionary_2_t541 *)il2cpp_codegen_object_new (Dictionary_2_t541_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3383(L_0, /*hidden argument*/Dictionary_2__ctor_m3383_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t541 * L_1 = V_0;
		Color_t121  L_2 = Color_get_white_m2643(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker2< int32_t, Color_t121  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<UnityEngine.LogType,UnityEngine.Color>::Add(!0,!1) */, L_1, 1, L_2);
		Dictionary_2_t541 * L_3 = V_0;
		Color_t121  L_4 = Color_get_red_m2942(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< int32_t, Color_t121  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<UnityEngine.LogType,UnityEngine.Color>::Add(!0,!1) */, L_3, 0, L_4);
		Dictionary_2_t541 * L_5 = V_0;
		Color_t121  L_6 = Color_get_red_m2942(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, Color_t121  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<UnityEngine.LogType,UnityEngine.Color>::Add(!0,!1) */, L_5, 4, L_6);
		Dictionary_2_t541 * L_7 = V_0;
		Color_t121  L_8 = Color_get_white_m2643(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, Color_t121  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<UnityEngine.LogType,UnityEngine.Color>::Add(!0,!1) */, L_7, 3, L_8);
		Dictionary_2_t541 * L_9 = V_0;
		Color_t121  L_10 = Color_get_yellow_m2926(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker2< int32_t, Color_t121  >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<UnityEngine.LogType,UnityEngine.Color>::Add(!0,!1) */, L_9, 2, L_10);
		Dictionary_2_t541 * L_11 = V_0;
		((Console_t543_StaticFields*)Console_t543_il2cpp_TypeInfo_var->static_fields)->___logTypeColors_11 = L_11;
		GUIContent_t542 * L_12 = (GUIContent_t542 *)il2cpp_codegen_object_new (GUIContent_t542_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3384(L_12, (String_t*) &_stringLiteral813, (String_t*) &_stringLiteral814, /*hidden argument*/NULL);
		((Console_t543_StaticFields*)Console_t543_il2cpp_TypeInfo_var->static_fields)->___clearLabel_12 = L_12;
		GUIContent_t542 * L_13 = (GUIContent_t542 *)il2cpp_codegen_object_new (GUIContent_t542_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3384(L_13, (String_t*) &_stringLiteral815, (String_t*) &_stringLiteral816, /*hidden argument*/NULL);
		((Console_t543_StaticFields*)Console_t543_il2cpp_TypeInfo_var->static_fields)->___collapseLabel_13 = L_13;
		return;
	}
}
// System.Void Consolation.Console::OnEnable()
extern TypeInfo* LogCallback_t721_il2cpp_TypeInfo_var;
extern const MethodInfo* Console_HandleLog_m2301_MethodInfo_var;
extern "C" void Console_OnEnable_m2296 (Console_t543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogCallback_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(451);
		Console_HandleLog_m2301_MethodInfo_var = il2cpp_codegen_method_info_from_index(272);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)Console_HandleLog_m2301_MethodInfo_var };
		LogCallback_t721 * L_1 = (LogCallback_t721 *)il2cpp_codegen_object_new (LogCallback_t721_il2cpp_TypeInfo_var);
		LogCallback__ctor_m3385(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_RegisterLogCallback_m3386(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Consolation.Console::OnDisable()
extern "C" void Console_OnDisable_m2297 (Console_t543 * __this, const MethodInfo* method)
{
	{
		Application_RegisterLogCallback_m3386(NULL /*static, unused*/, (LogCallback_t721 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Consolation.Console::Update()
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern "C" void Console_Update_m2298 (Console_t543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t53  V_0 = {0};
	{
		int32_t L_0 = (__this->___toggleKey_4);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m2725(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		bool L_2 = (__this->___visible_9);
		__this->___visible_9 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_001f:
	{
		bool L_3 = (__this->___shakeToOpen_5);
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		Vector3_t53  L_4 = Input_get_acceleration_m3387(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = Vector3_get_sqrMagnitude_m2495((&V_0), /*hidden argument*/NULL);
		float L_6 = (__this->___shakeAcceleration_6);
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0049;
		}
	}
	{
		__this->___visible_9 = 1;
	}

IL_0049:
	{
		return;
	}
}
// System.Void Consolation.Console::OnGUI()
extern TypeInfo* WindowFunction_t586_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var;
extern const MethodInfo* Console_ConsoleWindow_m2300_MethodInfo_var;
extern "C" void Console_OnGUI_m2299 (Console_t543 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WindowFunction_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		Console_ConsoleWindow_m2300_MethodInfo_var = il2cpp_codegen_method_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___visible_9);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Rect_t201  L_1 = (__this->___windowRect_15);
		IntPtr_t L_2 = { (void*)Console_ConsoleWindow_m2300_MethodInfo_var };
		WindowFunction_t586 * L_3 = (WindowFunction_t586 *)il2cpp_codegen_object_new (WindowFunction_t586_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m2426(L_3, __this, L_2, /*hidden argument*/NULL);
		Rect_t201  L_4 = GUILayout_Window_m3260(NULL /*static, unused*/, ((int32_t)123456), L_1, L_3, (String_t*) &_stringLiteral817, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		__this->___windowRect_15 = L_4;
		return;
	}
}
// System.Void Consolation.Console::ConsoleWindow(System.Int32)
extern TypeInfo* GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Console_t543_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" void Console_ConsoleWindow_m2300 (Console_t543 * __this, int32_t ___windowID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Console_t543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Log_t539  V_1 = {0};
	bool V_2 = false;
	Log_t539  V_3 = {0};
	int32_t G_B5_0 = 0;
	{
		Vector2_t97  L_0 = (__this->___scrollPosition_8);
		Vector2_t97  L_1 = GUILayout_BeginScrollView_m3071(NULL /*static, unused*/, L_0, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		__this->___scrollPosition_8 = L_1;
		V_0 = 0;
		goto IL_009a;
	}

IL_001e:
	{
		List_1_t540 * L_2 = (__this->___logs_7);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Log_t539  L_4 = (Log_t539 )VirtFuncInvoker1< Log_t539 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Consolation.Console/Log>::get_Item(System.Int32) */, L_2, L_3);
		V_1 = L_4;
		bool L_5 = (__this->___collapse_10);
		if (!L_5)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_7 = ((&V_1)->___message_0);
		List_1_t540 * L_8 = (__this->___logs_7);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		Log_t539  L_10 = (Log_t539 )VirtFuncInvoker1< Log_t539 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<Consolation.Console/Log>::get_Item(System.Int32) */, L_8, ((int32_t)((int32_t)L_9-(int32_t)1)));
		V_3 = L_10;
		String_t* L_11 = ((&V_3)->___message_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m2431(NULL /*static, unused*/, L_7, L_11, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_12));
		goto IL_0062;
	}

IL_0061:
	{
		G_B5_0 = 0;
	}

IL_0062:
	{
		V_2 = G_B5_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_006e;
		}
	}
	{
		goto IL_0096;
	}

IL_006e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t543_il2cpp_TypeInfo_var);
		Dictionary_2_t541 * L_14 = ((Console_t543_StaticFields*)Console_t543_il2cpp_TypeInfo_var->static_fields)->___logTypeColors_11;
		int32_t L_15 = ((&V_1)->___type_2);
		NullCheck(L_14);
		Color_t121  L_16 = (Color_t121 )VirtFuncInvoker1< Color_t121 , int32_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<UnityEngine.LogType,UnityEngine.Color>::get_Item(!0) */, L_14, L_15);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_set_contentColor_m3388(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		String_t* L_17 = ((&V_1)->___message_0);
		GUILayout_Label_m3043(NULL /*static, unused*/, L_17, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
	}

IL_0096:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_009a:
	{
		int32_t L_19 = V_0;
		List_1_t540 * L_20 = (__this->___logs_7);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<Consolation.Console/Log>::get_Count() */, L_20);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_001e;
		}
	}
	{
		GUILayout_EndScrollView_m3073(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t121  L_22 = Color_get_white_m2643(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_set_contentColor_m3388(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		GUILayout_BeginHorizontal_m3074(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t543_il2cpp_TypeInfo_var);
		GUIContent_t542 * L_23 = ((Console_t543_StaticFields*)Console_t543_il2cpp_TypeInfo_var->static_fields)->___clearLabel_12;
		bool L_24 = GUILayout_Button_m3389(NULL /*static, unused*/, L_23, ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00e5;
		}
	}
	{
		List_1_t540 * L_25 = (__this->___logs_7);
		NullCheck(L_25);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Clear() */, L_25);
	}

IL_00e5:
	{
		bool L_26 = (__this->___collapse_10);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t543_il2cpp_TypeInfo_var);
		GUIContent_t542 * L_27 = ((Console_t543_StaticFields*)Console_t543_il2cpp_TypeInfo_var->static_fields)->___collapseLabel_13;
		GUILayoutOptionU5BU5D_t658* L_28 = ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 1));
		GUILayoutOption_t664 * L_29 = GUILayout_ExpandWidth_m3069(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 0);
		ArrayElementTypeCheck (L_28, L_29);
		*((GUILayoutOption_t664 **)(GUILayoutOption_t664 **)SZArrayLdElema(L_28, 0)) = (GUILayoutOption_t664 *)L_29;
		bool L_30 = GUILayout_Toggle_m3390(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		__this->___collapse_10 = L_30;
		GUILayout_EndHorizontal_m3077(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t201  L_31 = (__this->___titleBarRect_14);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_DragWindow_m3391(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Consolation.Console::HandleLog(System.String,System.String,UnityEngine.LogType)
extern TypeInfo* Log_t539_il2cpp_TypeInfo_var;
extern "C" void Console_HandleLog_m2301 (Console_t543 * __this, String_t* ___message, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Log_t539_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	Log_t539  V_0 = {0};
	{
		List_1_t540 * L_0 = (__this->___logs_7);
		Initobj (Log_t539_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_1 = ___message;
		(&V_0)->___message_0 = L_1;
		String_t* L_2 = ___stackTrace;
		(&V_0)->___stackTrace_1 = L_2;
		int32_t L_3 = ___type;
		(&V_0)->___type_2 = L_3;
		Log_t539  L_4 = V_0;
		NullCheck(L_0);
		VirtActionInvoker1< Log_t539  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<Consolation.Console/Log>::Add(!0) */, L_0, L_4);
		return;
	}
}
// MyLuaFunctions
#include "AssemblyU2DCSharp_MyLuaFunctions.h"
#ifndef _MSC_VER
#else
#endif
// MyLuaFunctions
#include "AssemblyU2DCSharp_MyLuaFunctionsMethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// PixelCrushers.DialogueSystem.Lua/Result
#include "DialogueSystem_PixelCrushers_DialogueSystem_Lua_Result.h"
// PixelCrushers.DialogueSystem.Lua
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaMethodDeclarations.h"
// PixelCrushers.DialogueSystem.DialogueLua
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueLuaMethodDeclarations.h"
// PixelCrushers.DialogueSystem.Lua/Result
#include "DialogueSystem_PixelCrushers_DialogueSystem_Lua_ResultMethodDeclarations.h"


// System.Void MyLuaFunctions::.ctor()
extern "C" void MyLuaFunctions__ctor_m2302 (MyLuaFunctions_t544 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MyLuaFunctions::OnEnable()
extern const Il2CppType* MyLuaFunctions_t544_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Lua_t617_il2cpp_TypeInfo_var;
extern "C" void MyLuaFunctions_OnEnable_m2303 (MyLuaFunctions_t544 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MyLuaFunctions_t544_0_0_0_var = il2cpp_codegen_type_from_index(452);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Lua_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral818, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2434(NULL /*static, unused*/, LoadTypeToken(MyLuaFunctions_t544_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(54 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_0, (String_t*) &_stringLiteral819);
		IL2CPP_RUNTIME_CLASS_INIT(Lua_t617_il2cpp_TypeInfo_var);
		Lua_RegisterFunction_m2752(NULL /*static, unused*/, (String_t*) &_stringLiteral819, __this, L_1, /*hidden argument*/NULL);
		Type_t * L_2 = Type_GetTypeFromHandle_m2434(NULL /*static, unused*/, LoadTypeToken(MyLuaFunctions_t544_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		MethodInfo_t * L_3 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(54 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_2, (String_t*) &_stringLiteral820);
		Lua_RegisterFunction_m2752(NULL /*static, unused*/, (String_t*) &_stringLiteral820, __this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MyLuaFunctions::OnDisable()
extern TypeInfo* Lua_t617_il2cpp_TypeInfo_var;
extern "C" void MyLuaFunctions_OnDisable_m2304 (MyLuaFunctions_t544 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Lua_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lua_t617_il2cpp_TypeInfo_var);
		Lua_UnregisterFunction_m3392(NULL /*static, unused*/, (String_t*) &_stringLiteral819, /*hidden argument*/NULL);
		Lua_UnregisterFunction_m3392(NULL /*static, unused*/, (String_t*) &_stringLiteral820, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MyLuaFunctions::GameObjectExists(System.String)
extern "C" bool MyLuaFunctions_GameObjectExists_m2305 (MyLuaFunctions_t544 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		GameObject_t49 * L_1 = GameObject_Find_m3371(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean MyLuaFunctions::InputIsValid(System.String)
extern TypeInfo* DialogueLua_t648_il2cpp_TypeInfo_var;
extern "C" bool MyLuaFunctions_InputIsValid_m2306 (MyLuaFunctions_t544 * __this, String_t* ___variableName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueLua_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Result_t583  V_1 = {0};
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral821, /*hidden argument*/NULL);
		String_t* L_0 = ___variableName;
		Debug_Log_m90(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___variableName;
		IL2CPP_RUNTIME_CLASS_INIT(DialogueLua_t648_il2cpp_TypeInfo_var);
		Result_t583  L_2 = DialogueLua_GetVariable_m2952(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		String_t* L_3 = Result_get_AsString_m2921((&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral822, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		Debug_Log_m90(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m2869(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral823, /*hidden argument*/NULL);
		return 1;
	}

IL_0047:
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral824, /*hidden argument*/NULL);
		return 0;
	}
}
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCreateUser
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SequencerComm_0.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCreateUser
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SequencerComm_0MethodDeclarations.h"

// Parse.ParseUser
#include "Parse_Unity_Parse_ParseUser.h"
// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_Task.h"
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequencerCommandMethodDeclarations.h"
// Parse.ParseUser
#include "Parse_Unity_Parse_ParseUserMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCreateUser::.ctor()
extern "C" void SequencerCommandCreateUser__ctor_m2307 (SequencerCommandCreateUser_t545 * __this, const MethodInfo* method)
{
	{
		SequencerCommand__ctor_m2764(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCreateUser::Start()
extern TypeInfo* ParseUser_t722_il2cpp_TypeInfo_var;
extern "C" void SequencerCommandCreateUser_Start_m2308 (SequencerCommandCreateUser_t545 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseUser_t722_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(453);
		s_Il2CppMethodIntialized = true;
	}
	ParseUser_t722 * V_0 = {0};
	Task_t723 * V_1 = {0};
	ParseUser_t722 * V_2 = {0};
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral825, /*hidden argument*/NULL);
		ParseUser_t722 * L_0 = (ParseUser_t722 *)il2cpp_codegen_object_new (ParseUser_t722_il2cpp_TypeInfo_var);
		ParseUser__ctor_m3393(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		ParseUser_t722 * L_1 = V_2;
		NullCheck(L_1);
		ParseUser_set_Username_m3394(L_1, (String_t*) &_stringLiteral826, /*hidden argument*/NULL);
		ParseUser_t722 * L_2 = V_2;
		NullCheck(L_2);
		ParseUser_set_Password_m3395(L_2, (String_t*) &_stringLiteral827, /*hidden argument*/NULL);
		ParseUser_t722 * L_3 = V_2;
		NullCheck(L_3);
		ParseUser_set_Email_m3396(L_3, (String_t*) &_stringLiteral828, /*hidden argument*/NULL);
		ParseUser_t722 * L_4 = V_2;
		V_0 = L_4;
		ParseUser_t722 * L_5 = V_0;
		NullCheck(L_5);
		Task_t723 * L_6 = ParseUser_SignUpAsync_m3397(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCreateUser::Update()
extern "C" void SequencerCommandCreateUser_Update_m2309 (SequencerCommandCreateUser_t545 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandCreateUser::OnDestroy()
extern "C" void SequencerCommandCreateUser_OnDestroy_m2310 (SequencerCommandCreateUser_t545 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandForceContinue
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SequencerComm_1.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandForceContinue
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SequencerComm_1MethodDeclarations.h"

// PixelCrushers.DialogueSystem.UnityUIDialogueUI
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_UnityUIDialog.h"
// PixelCrushers.DialogueSystem.Tools
#include "DialogueSystem_PixelCrushers_DialogueSystem_ToolsMethodDeclarations.h"
// PixelCrushers.DialogueSystem.UnityUIDialogueUI
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_UnityUIDialogMethodDeclarations.h"
struct Tools_t630;
struct UnityUIDialogueUI_t223;
struct GameObject_t49;
// PixelCrushers.DialogueSystem.Tools
#include "DialogueSystem_PixelCrushers_DialogueSystem_Tools.h"
struct Tools_t630;
struct Object_t;
struct GameObject_t49;
// Declaration !!0 PixelCrushers.DialogueSystem.Tools::GetComponentAnywhere<System.Object>(UnityEngine.GameObject)
// !!0 PixelCrushers.DialogueSystem.Tools::GetComponentAnywhere<System.Object>(UnityEngine.GameObject)
extern "C" Object_t * Tools_GetComponentAnywhere_TisObject_t_m2865_gshared (Object_t * __this /* static, unused */, GameObject_t49 * p0, const MethodInfo* method);
#define Tools_GetComponentAnywhere_TisObject_t_m2865(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, GameObject_t49 *, const MethodInfo*))Tools_GetComponentAnywhere_TisObject_t_m2865_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 PixelCrushers.DialogueSystem.Tools::GetComponentAnywhere<PixelCrushers.DialogueSystem.UnityUIDialogueUI>(UnityEngine.GameObject)
// !!0 PixelCrushers.DialogueSystem.Tools::GetComponentAnywhere<PixelCrushers.DialogueSystem.UnityUIDialogueUI>(UnityEngine.GameObject)
#define Tools_GetComponentAnywhere_TisUnityUIDialogueUI_t223_m2864(__this /* static, unused */, p0, method) (( UnityUIDialogueUI_t223 * (*) (Object_t * /* static, unused */, GameObject_t49 *, const MethodInfo*))Tools_GetComponentAnywhere_TisObject_t_m2865_gshared)(__this /* static, unused */, p0, method)


// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandForceContinue::.ctor()
extern "C" void SequencerCommandForceContinue__ctor_m2311 (SequencerCommandForceContinue_t546 * __this, const MethodInfo* method)
{
	{
		SequencerCommand__ctor_m2764(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandForceContinue::Start()
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern const MethodInfo* Tools_GetComponentAnywhere_TisUnityUIDialogueUI_t223_m2864_MethodInfo_var;
extern "C" void SequencerCommandForceContinue_Start_m2312 (SequencerCommandForceContinue_t546 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		Tools_GetComponentAnywhere_TisUnityUIDialogueUI_t223_m2864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483749);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityUIDialogueUI_t223 * L_0 = (__this->___dialogueUI_6);
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral829, /*hidden argument*/NULL);
		GameObject_t49 * L_2 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		UnityUIDialogueUI_t223 * L_3 = Tools_GetComponentAnywhere_TisUnityUIDialogueUI_t223_m2864(NULL /*static, unused*/, L_2, /*hidden argument*/Tools_GetComponentAnywhere_TisUnityUIDialogueUI_t223_m2864_MethodInfo_var);
		__this->___dialogueUI_6 = L_3;
		UnityUIDialogueUI_t223 * L_4 = (__this->___dialogueUI_6);
		bool L_5 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_4, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		UnityUIDialogueUI_t223 * L_6 = (__this->___dialogueUI_6);
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(37 /* System.Void PixelCrushers.DialogueSystem.UnityUIDialogueUI::OnContinue() */, L_6);
	}

IL_0048:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandForceContinue::Update()
extern "C" void SequencerCommandForceContinue_Update_m2313 (SequencerCommandForceContinue_t546 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandForceContinue::OnDestroy()
extern "C" void SequencerCommandForceContinue_OnDestroy_m2314 (SequencerCommandForceContinue_t546 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandShowTextField
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SequencerComm_2.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandShowTextField
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SequencerComm_2MethodDeclarations.h"

// PixelCrushers.DialogueSystem.Sequencer
#include "DialogueSystem_PixelCrushers_DialogueSystem_Sequencer.h"
// PixelCrushers.DialogueSystem.DialogueManager
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueManagerMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandShowTextField::.ctor()
extern "C" void SequencerCommandShowTextField__ctor_m2315 (SequencerCommandShowTextField_t547 * __this, const MethodInfo* method)
{
	{
		SequencerCommand__ctor_m2764(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandShowTextField::Start()
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueLua_t648_il2cpp_TypeInfo_var;
extern "C" void SequencerCommandShowTextField_Start_m2316 (SequencerCommandShowTextField_t547 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		DialogueLua_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = SequencerCommand_GetParameter_m2765(__this, 0, (String_t*)NULL, /*hidden argument*/NULL);
		__this->___textField_6 = L_0;
		String_t* L_1 = SequencerCommand_GetParameter_m2765(__this, 1, (String_t*)NULL, /*hidden argument*/NULL);
		__this->___name_7 = L_1;
		String_t* L_2 = SequencerCommand_GetParameter_m2765(__this, 2, (String_t*)NULL, /*hidden argument*/NULL);
		__this->___value_8 = L_2;
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral830, /*hidden argument*/NULL);
		bool L_3 = 1;
		Object_t * L_4 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueLua_t648_il2cpp_TypeInfo_var);
		DialogueLua_SetVariable_m2954(NULL /*static, unused*/, (String_t*) &_stringLiteral831, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandShowTextField::Update()
extern "C" void SequencerCommandShowTextField_Update_m2317 (SequencerCommandShowTextField_t547 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandShowTextField::OnDestroy()
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueLua_t648_il2cpp_TypeInfo_var;
extern "C" void SequencerCommandShowTextField_OnDestroy_m2318 (SequencerCommandShowTextField_t547 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		DialogueLua_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = 0;
		Object_t * L_1 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_0);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueLua_t648_il2cpp_TypeInfo_var);
		DialogueLua_SetVariable_m2954(NULL /*static, unused*/, (String_t*) &_stringLiteral831, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandShowTextField::OnShowInput()
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" void SequencerCommandShowTextField_OnShowInput_m2319 (SequencerCommandShowTextField_t547 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral832, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___textField_6);
		Debug_Log_m90(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = (__this->___name_7);
		Debug_Log_m90(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = (__this->___value_8);
		Debug_Log_m90(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		StringU5BU5D_t20* L_3 = ((StringU5BU5D_t20*)SZArrayNew(StringU5BU5D_t20_il2cpp_TypeInfo_var, 7));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral833);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 0)) = (String_t*)(String_t*) &_stringLiteral833;
		StringU5BU5D_t20* L_4 = L_3;
		String_t* L_5 = (__this->___textField_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 1)) = (String_t*)L_5;
		StringU5BU5D_t20* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral834);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2)) = (String_t*)(String_t*) &_stringLiteral834;
		StringU5BU5D_t20* L_7 = L_6;
		String_t* L_8 = (__this->___name_7);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, L_8);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 3)) = (String_t*)L_8;
		StringU5BU5D_t20* L_9 = L_7;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral834);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, 4)) = (String_t*)(String_t*) &_stringLiteral834;
		StringU5BU5D_t20* L_10 = L_9;
		String_t* L_11 = (__this->___value_8);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_11);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, 5)) = (String_t*)L_11;
		StringU5BU5D_t20* L_12 = L_10;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 6);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral773);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 6)) = (String_t*)(String_t*) &_stringLiteral773;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3108(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueManager_PlaySequence_m3398(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.SmartContinueButton
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SmartContinue.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SmartContinueButton
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SmartContinueMethodDeclarations.h"

// PixelCrushers.DialogueSystem.SmartTypeWriter
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SmartTypeWrit_0.h"
// PixelCrushers.DialogueSystem.SmartTextField
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SmartTextFiel.h"
// PixelCrushers.DialogueSystem.SmartTypeWriter
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SmartTypeWrit_0MethodDeclarations.h"
// PixelCrushers.DialogueSystem.SmartTextField
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SmartTextFielMethodDeclarations.h"
struct Component_t462;
struct SmartTypeWriter_t548;
struct Component_t462;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" Object_t * Component_GetComponentInChildren_TisObject_t_m2599_gshared (Component_t462 * __this, const MethodInfo* method);
#define Component_GetComponentInChildren_TisObject_t_m2599(__this, method) (( Object_t * (*) (Component_t462 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m2599_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<PixelCrushers.DialogueSystem.SmartTypeWriter>()
// !!0 UnityEngine.Component::GetComponentInChildren<PixelCrushers.DialogueSystem.SmartTypeWriter>()
#define Component_GetComponentInChildren_TisSmartTypeWriter_t548_m3399(__this, method) (( SmartTypeWriter_t548 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m2599_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.SmartContinueButton::.ctor()
extern "C" void SmartContinueButton__ctor_m2320 (SmartContinueButton_t550 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartContinueButton::Awake()
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern const MethodInfo* Tools_GetComponentAnywhere_TisUnityUIDialogueUI_t223_m2864_MethodInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisSmartTypeWriter_t548_m3399_MethodInfo_var;
extern "C" void SmartContinueButton_Awake_m2321 (SmartContinueButton_t550 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		Tools_GetComponentAnywhere_TisUnityUIDialogueUI_t223_m2864_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483749);
		Component_GetComponentInChildren_TisSmartTypeWriter_t548_m3399_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483922);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityUIDialogueUI_t223 * L_0 = (__this->___dialogueUI_2);
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t49 * L_2 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		UnityUIDialogueUI_t223 * L_3 = Tools_GetComponentAnywhere_TisUnityUIDialogueUI_t223_m2864(NULL /*static, unused*/, L_2, /*hidden argument*/Tools_GetComponentAnywhere_TisUnityUIDialogueUI_t223_m2864_MethodInfo_var);
		__this->___dialogueUI_2 = L_3;
	}

IL_0022:
	{
		SmartTypeWriter_t548 * L_4 = (__this->___typewriterEffect_3);
		bool L_5 = Object_op_Equality_m2464(NULL /*static, unused*/, L_4, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		SmartTypeWriter_t548 * L_6 = Component_GetComponentInChildren_TisSmartTypeWriter_t548_m3399(__this, /*hidden argument*/Component_GetComponentInChildren_TisSmartTypeWriter_t548_m3399_MethodInfo_var);
		__this->___typewriterEffect_3 = L_6;
	}

IL_003f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartContinueButton::OnFastForward()
extern TypeInfo* DialogueLua_t648_il2cpp_TypeInfo_var;
extern "C" void SmartContinueButton_OnFastForward_m2322 (SmartContinueButton_t550 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueLua_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Result_t583  V_1 = {0};
	{
		SmartTypeWriter_t548 * L_0 = (__this->___typewriterEffect_3);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		SmartTypeWriter_t548 * L_2 = (__this->___typewriterEffect_3);
		NullCheck(L_2);
		bool L_3 = SmartTypeWriter_get_IsPlaying_m2341(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		SmartTypeWriter_t548 * L_4 = (__this->___typewriterEffect_3);
		NullCheck(L_4);
		SmartTypeWriter_Stop_m2349(L_4, /*hidden argument*/NULL);
		goto IL_0096;
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueLua_t648_il2cpp_TypeInfo_var);
		Result_t583  L_5 = DialogueLua_GetVariable_m2952(NULL /*static, unused*/, (String_t*) &_stringLiteral831, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = Result_get_AsBool_m2968((&V_1), /*hidden argument*/NULL);
		V_0 = L_6;
		SmartTextField_t549 * L_7 = (__this->___textField_4);
		bool L_8 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_7, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0096;
		}
	}
	{
		SmartTextField_t549 * L_9 = (__this->___textField_4);
		NullCheck(L_9);
		bool L_10 = SmartTextField_get_IsVisible_m2324(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0096;
		}
	}
	{
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_0070;
		}
	}
	{
		goto IL_0096;
	}

IL_0070:
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral835, /*hidden argument*/NULL);
		UnityUIDialogueUI_t223 * L_12 = (__this->___dialogueUI_2);
		bool L_13 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_12, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0096;
		}
	}
	{
		UnityUIDialogueUI_t223 * L_14 = (__this->___dialogueUI_2);
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(37 /* System.Void PixelCrushers.DialogueSystem.UnityUIDialogueUI::OnContinue() */, L_14);
	}

IL_0096:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputField.h"
// PixelCrushers.DialogueSystem.AcceptedTextDelegate
#include "DialogueSystem_PixelCrushers_DialogueSystem_AcceptedTextDele.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.EventSystems.EventSystem
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystem.h"
// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_Graphic.h"
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
// PixelCrushers.DialogueSystem.DialogueDebug
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueDebugMethodDeclarations.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
// UnityEngine.UI.InputField
#include "UnityEngine_UI_UnityEngine_UI_InputFieldMethodDeclarations.h"
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboardMethodDeclarations.h"
// PixelCrushers.DialogueSystem.AcceptedTextDelegate
#include "DialogueSystem_PixelCrushers_DialogueSystem_AcceptedTextDeleMethodDeclarations.h"
// UnityEngine.EventSystems.EventSystem
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystemMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.SmartTextField::.ctor()
extern TypeInfo* UnityEvent_t241_il2cpp_TypeInfo_var;
extern "C" void SmartTextField__ctor_m2323 (SmartTextField_t549 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityEvent_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___acceptKey_5 = ((int32_t)13);
		__this->___cancelKey_6 = ((int32_t)27);
		UnityEvent_t241 * L_0 = (UnityEvent_t241 *)il2cpp_codegen_object_new (UnityEvent_t241_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2826(L_0, /*hidden argument*/NULL);
		__this->___onAccept_7 = L_0;
		UnityEvent_t241 * L_1 = (UnityEvent_t241 *)il2cpp_codegen_object_new (UnityEvent_t241_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2826(L_1, /*hidden argument*/NULL);
		__this->___onCancel_8 = L_1;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.SmartTextField::get_IsVisible()
extern "C" bool SmartTextField_get_IsVisible_m2324 (SmartTextField_t549 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CIsVisibleU3Ek__BackingField_13);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTextField::set_IsVisible(System.Boolean)
extern "C" void SmartTextField_set_IsVisible_m2325 (SmartTextField_t549 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CIsVisibleU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTextField::Start()
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SmartTextField_Start_m2326 (SmartTextField_t549 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral836, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_0 = DialogueDebug_get_LogWarnings_m2766(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		InputField_t247 * L_1 = (__this->___textField_4);
		bool L_2 = Object_op_Equality_m2464(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		ObjectU5BU5D_t21* L_3 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_4 = L_3;
		String_t* L_5 = Object_get_name_m2484(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral126, L_4, /*hidden argument*/NULL);
		Debug_LogWarning_m2768(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_004b:
	{
		SmartTextField_Hide_m2332(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTextField::StartTextInput(System.String,System.String,System.Int32,PixelCrushers.DialogueSystem.AcceptedTextDelegate)
extern "C" void SmartTextField_StartTextInput_m2327 (SmartTextField_t549 * __this, String_t* ___labelText, String_t* ___text, int32_t ___maxLength, AcceptedTextDelegate_t248 * ___acceptedText, const MethodInfo* method)
{
	{
		Text_t212 * L_0 = (__this->___label_3);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Text_t212 * L_2 = (__this->___label_3);
		String_t* L_3 = ___labelText;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
	}

IL_001d:
	{
		InputField_t247 * L_4 = (__this->___textField_4);
		bool L_5 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_4, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		InputField_t247 * L_6 = (__this->___textField_4);
		String_t* L_7 = ___text;
		NullCheck(L_6);
		InputField_set_text_m2847(L_6, L_7, /*hidden argument*/NULL);
		InputField_t247 * L_8 = (__this->___textField_4);
		int32_t L_9 = ___maxLength;
		NullCheck(L_8);
		InputField_set_characterLimit_m2848(L_8, L_9, /*hidden argument*/NULL);
		InputField_t247 * L_10 = (__this->___textField_4);
		NullCheck(L_10);
		InputField_set_keyboardType_m3400(L_10, 7, /*hidden argument*/NULL);
		TouchScreenKeyboard_set_hideInput_m3401(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0058:
	{
		AcceptedTextDelegate_t248 * L_11 = ___acceptedText;
		__this->___acceptedText_10 = L_11;
		SmartTextField_Show_m2331(__this, /*hidden argument*/NULL);
		__this->___isAwaitingInput_11 = 1;
		String_t* L_12 = ___labelText;
		__this->___textFieldLabel_12 = L_12;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTextField::Update()
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern "C" void SmartTextField_Update_m2328 (SmartTextField_t549 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___isAwaitingInput_11);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral837, /*hidden argument*/NULL);
		int32_t L_1 = (__this->___acceptKey_5);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m2725(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SmartTextField_AcceptTextInput_m2330(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTextField::CancelTextInput()
extern "C" void SmartTextField_CancelTextInput_m2329 (SmartTextField_t549 * __this, const MethodInfo* method)
{
	{
		__this->___isAwaitingInput_11 = 0;
		SmartTextField_Hide_m2332(__this, /*hidden argument*/NULL);
		UnityEvent_t241 * L_0 = (__this->___onCancel_8);
		NullCheck(L_0);
		UnityEvent_Invoke_m2840(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTextField::AcceptTextInput()
extern "C" void SmartTextField_AcceptTextInput_m2330 (SmartTextField_t549 * __this, const MethodInfo* method)
{
	{
		__this->___isAwaitingInput_11 = 0;
		AcceptedTextDelegate_t248 * L_0 = (__this->___acceptedText_10);
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral838, /*hidden argument*/NULL);
		String_t* L_1 = (__this->___textFieldLabel_12);
		Debug_Log_m90(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		InputField_t247 * L_2 = (__this->___textField_4);
		NullCheck(L_2);
		String_t* L_3 = InputField_get_text_m2849(L_2, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		InputField_t247 * L_4 = (__this->___textField_4);
		bool L_5 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_4, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral839, /*hidden argument*/NULL);
		AcceptedTextDelegate_t248 * L_6 = (__this->___acceptedText_10);
		InputField_t247 * L_7 = (__this->___textField_4);
		NullCheck(L_7);
		String_t* L_8 = InputField_get_text_m2849(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void PixelCrushers.DialogueSystem.AcceptedTextDelegate::Invoke(System.String) */, L_6, L_8);
	}

IL_0068:
	{
		__this->___acceptedText_10 = (AcceptedTextDelegate_t248 *)NULL;
	}

IL_006f:
	{
		SmartTextField_Hide_m2332(__this, /*hidden argument*/NULL);
		UnityEvent_t241 * L_9 = (__this->___onAccept_7);
		NullCheck(L_9);
		UnityEvent_Invoke_m2840(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTextField::Show()
extern TypeInfo* EventSystem_t633_il2cpp_TypeInfo_var;
extern "C" void SmartTextField_Show_m2331 (SmartTextField_t549 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventSystem_t633_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	{
		SmartTextField_set_IsVisible_m2325(__this, 1, /*hidden argument*/NULL);
		SmartTextField_SetActive_m2333(__this, 1, /*hidden argument*/NULL);
		InputField_t247 * L_0 = (__this->___textField_4);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		InputField_t247 * L_2 = (__this->___textField_4);
		NullCheck(L_2);
		InputField_ActivateInputField_m2850(L_2, /*hidden argument*/NULL);
		TouchScreenKeyboard_set_hideInput_m3401(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t633_il2cpp_TypeInfo_var);
		EventSystem_t633 * L_3 = EventSystem_get_current_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_3, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t633_il2cpp_TypeInfo_var);
		EventSystem_t633 * L_5 = EventSystem_get_current_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		InputField_t247 * L_6 = (__this->___textField_4);
		NullCheck(L_6);
		GameObject_t49 * L_7 = Component_get_gameObject_m2452(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		EventSystem_SetSelectedGameObject_m2801(L_5, L_7, (BaseEventData_t634 *)NULL, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTextField::Hide()
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueLua_t648_il2cpp_TypeInfo_var;
extern "C" void SmartTextField_Hide_m2332 (SmartTextField_t549 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		DialogueLua_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	{
		SmartTextField_set_IsVisible_m2325(__this, 0, /*hidden argument*/NULL);
		SmartTextField_SetActive_m2333(__this, 0, /*hidden argument*/NULL);
		bool L_0 = 0;
		Object_t * L_1 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_0);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueLua_t648_il2cpp_TypeInfo_var);
		DialogueLua_SetVariable_m2954(NULL /*static, unused*/, (String_t*) &_stringLiteral831, L_1, /*hidden argument*/NULL);
		SmartContinueButton_t550 * L_2 = (__this->___continueButton_9);
		NullCheck(L_2);
		SmartContinueButton_OnFastForward_m2322(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTextField::SetActive(System.Boolean)
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void SmartTextField_SetActive_m2333 (SmartTextField_t549 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		InputField_t247 * L_0 = (__this->___textField_4);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		InputField_t247 * L_2 = (__this->___textField_4);
		bool L_3 = ___value;
		NullCheck(L_2);
		Behaviour_set_enabled_m2780(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		Graphic_t219 * L_4 = (__this->___panel_2);
		bool L_5 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_4, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Graphic_t219 * L_6 = (__this->___panel_2);
		bool L_7 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Tools_SetGameObjectActive_m2792(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_003f:
	{
		Text_t212 * L_8 = (__this->___label_3);
		bool L_9 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Tools_SetGameObjectActive_m2792(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		InputField_t247 * L_10 = (__this->___textField_4);
		bool L_11 = ___value;
		Tools_SetGameObjectActive_m2792(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.SmartTypeWriter/<Play>c__Iterator16
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SmartTypeWrit.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SmartTypeWriter/<Play>c__Iterator16
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SmartTypeWritMethodDeclarations.h"

// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// PixelCrushers.DialogueSystem.DialogueTime
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueTimeMethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.SmartTypeWriter/<Play>c__Iterator16::.ctor()
extern "C" void U3CPlayU3Ec__Iterator16__ctor_m2334 (U3CPlayU3Ec__Iterator16_t551 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.SmartTypeWriter/<Play>c__Iterator16::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayU3Ec__Iterator16_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2335 (U3CPlayU3Ec__Iterator16_t551 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.SmartTypeWriter/<Play>c__Iterator16::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayU3Ec__Iterator16_System_Collections_IEnumerator_get_Current_m2336 (U3CPlayU3Ec__Iterator16_t551 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.SmartTypeWriter/<Play>c__Iterator16::MoveNext()
extern TypeInfo* DialogueTime_t625_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForSeconds_t629_il2cpp_TypeInfo_var;
extern "C" bool U3CPlayU3Ec__Iterator16_MoveNext_m2337 (U3CPlayU3Ec__Iterator16_t551 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueTime_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		WaitForSeconds_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_3);
		V_0 = L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_014d;
		}
	}
	{
		goto IL_0197;
	}

IL_0021:
	{
		SmartTypeWriter_t548 * L_2 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_2);
		SmartTypeWriter_set_IsPlaying_m2342(L_2, 1, /*hidden argument*/NULL);
		SmartTypeWriter_t548 * L_3 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_3);
		List_1_t1 * L_4 = (L_3->___closureTags_14);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.String>::Clear() */, L_4);
		SmartTypeWriter_t548 * L_5 = (__this->___U3CU3Ef__this_5);
		SmartTypeWriter_t548 * L_6 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_6);
		Text_t212 * L_7 = (L_6->___control_11);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(47 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		NullCheck(L_5);
		L_5->___original_13 = L_8;
		SmartTypeWriter_t548 * L_9 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_9);
		String_t* L_10 = (L_9->___original_13);
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m2869(L_10, /*hidden argument*/NULL);
		__this->___U3CoriginalLengthU3E__0_0 = L_11;
		__this->___U3ClengthU3E__1_1 = 0;
		SmartTypeWriter_t548 * L_12 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_12);
		float L_13 = (L_12->___charactersPerSecond_8);
		__this->___U3CdelayU3E__2_2 = ((float)((float)(1.0f)/(float)L_13));
		goto IL_014d;
	}

IL_0091:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		bool L_14 = DialogueTime_get_IsPaused_m2870(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0130;
		}
	}
	{
		SmartTypeWriter_t548 * L_15 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_15);
		AudioClip_t261 * L_16 = (L_15->___audioClip_9);
		bool L_17 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_16, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00e2;
		}
	}
	{
		SmartTypeWriter_t548 * L_18 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_18);
		AudioSource_t262 * L_19 = (L_18->___audioSource_12);
		bool L_20 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_19, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00e2;
		}
	}
	{
		SmartTypeWriter_t548 * L_21 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_21);
		AudioSource_t262 * L_22 = (L_21->___audioSource_12);
		SmartTypeWriter_t548 * L_23 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_23);
		AudioClip_t261 * L_24 = (L_23->___audioClip_9);
		NullCheck(L_22);
		AudioSource_PlayOneShot_m2871(L_22, L_24, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		SmartTypeWriter_t548 * L_25 = (__this->___U3CU3Ef__this_5);
		int32_t L_26 = (__this->___U3ClengthU3E__1_1);
		NullCheck(L_25);
		int32_t L_27 = SmartTypeWriter_AdvanceOneCharacter_m2347(L_25, L_26, /*hidden argument*/NULL);
		__this->___U3ClengthU3E__1_1 = L_27;
		SmartTypeWriter_t548 * L_28 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_28);
		Text_t212 * L_29 = (L_28->___control_11);
		SmartTypeWriter_t548 * L_30 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_30);
		String_t* L_31 = (L_30->___original_13);
		int32_t L_32 = (__this->___U3ClengthU3E__1_1);
		NullCheck(L_31);
		String_t* L_33 = String_Substring_m2872(L_31, 0, L_32, /*hidden argument*/NULL);
		SmartTypeWriter_t548 * L_34 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_34);
		String_t* L_35 = SmartTypeWriter_GetRichTextClosures_m2348(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m105(NULL /*static, unused*/, L_33, L_35, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_36);
	}

IL_0130:
	{
		float L_37 = (__this->___U3CdelayU3E__2_2);
		WaitForSeconds_t629 * L_38 = (WaitForSeconds_t629 *)il2cpp_codegen_object_new (WaitForSeconds_t629_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2791(L_38, L_37, /*hidden argument*/NULL);
		__this->___U24current_4 = L_38;
		__this->___U24PC_3 = 1;
		goto IL_0199;
	}

IL_014d:
	{
		int32_t L_39 = (__this->___U3ClengthU3E__1_1);
		int32_t L_40 = (__this->___U3CoriginalLengthU3E__0_0);
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0091;
		}
	}
	{
		SmartTypeWriter_t548 * L_41 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_41);
		Text_t212 * L_42 = (L_41->___control_11);
		SmartTypeWriter_t548 * L_43 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_43);
		String_t* L_44 = (L_43->___original_13);
		NullCheck(L_42);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_42, L_44);
		SmartTypeWriter_t548 * L_45 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_45);
		SmartTypeWriter_set_IsPlaying_m2342(L_45, 0, /*hidden argument*/NULL);
		SmartTypeWriter_t548 * L_46 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_46);
		SmartTypeWriter_CheckInput_m2350(L_46, /*hidden argument*/NULL);
		__this->___U24PC_3 = (-1);
	}

IL_0197:
	{
		return 0;
	}

IL_0199:
	{
		return 1;
	}
	// Dead block : IL_019b: ldloc.1
}
// System.Void PixelCrushers.DialogueSystem.SmartTypeWriter/<Play>c__Iterator16::Dispose()
extern "C" void U3CPlayU3Ec__Iterator16_Dispose_m2338 (U3CPlayU3Ec__Iterator16_t551 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTypeWriter/<Play>c__Iterator16::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CPlayU3Ec__Iterator16_Reset_m2339 (U3CPlayU3Ec__Iterator16_t551 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t592 * L_0 = (NotSupportedException_t592 *)il2cpp_codegen_object_new (NotSupportedException_t592_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2521(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// System.Char
#include "mscorlib_System_Char.h"
// PixelCrushers.DialogueSystem.DialogueSystemController
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueSystemCo.h"
struct Component_t462;
struct Text_t212;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t212_m2854(__this, method) (( Text_t212 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)
struct Component_t462;
struct AudioSource_t262;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t262_m2873(__this, method) (( AudioSource_t262 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.SmartTypeWriter::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t1_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m83_MethodInfo_var;
extern "C" void SmartTypeWriter__ctor_m2340 (SmartTypeWriter_t548 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		List_1_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		List_1__ctor_m83_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___charactersPerSecond_8 = (50.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___original_13 = L_0;
		List_1_t1 * L_1 = (List_1_t1 *)il2cpp_codegen_object_new (List_1_t1_il2cpp_TypeInfo_var);
		List_1__ctor_m83(L_1, /*hidden argument*/List_1__ctor_m83_MethodInfo_var);
		__this->___closureTags_14 = L_1;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.SmartTypeWriter::get_IsPlaying()
extern "C" bool SmartTypeWriter_get_IsPlaying_m2341 (SmartTypeWriter_t548 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CIsPlayingU3Ek__BackingField_15);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTypeWriter::set_IsPlaying(System.Boolean)
extern "C" void SmartTypeWriter_set_IsPlaying_m2342 (SmartTypeWriter_t548 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CIsPlayingU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTypeWriter::Awake()
extern const MethodInfo* Component_GetComponent_TisText_t212_m2854_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t262_m2873_MethodInfo_var;
extern "C" void SmartTypeWriter_Awake_m2343 (SmartTypeWriter_t548 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisText_t212_m2854_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483744);
		Component_GetComponent_TisAudioSource_t262_m2873_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483751);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t212 * L_0 = Component_GetComponent_TisText_t212_m2854(__this, /*hidden argument*/Component_GetComponent_TisText_t212_m2854_MethodInfo_var);
		__this->___control_11 = L_0;
		AudioSource_t262 * L_1 = Component_GetComponent_TisAudioSource_t262_m2873(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t262_m2873_MethodInfo_var);
		__this->___audioSource_12 = L_1;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTypeWriter::OnEnable()
extern "C" void SmartTypeWriter_OnEnable_m2344 (SmartTypeWriter_t548 * __this, const MethodInfo* method)
{
	{
		Text_t212 * L_0 = (__this->___control_11);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_2 = SmartTypeWriter_Play_m2346(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTypeWriter::OnDisable()
extern "C" void SmartTypeWriter_OnDisable_m2345 (SmartTypeWriter_t548 * __this, const MethodInfo* method)
{
	{
		SmartTypeWriter_Stop_m2349(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.SmartTypeWriter::Play()
extern TypeInfo* U3CPlayU3Ec__Iterator16_t551_il2cpp_TypeInfo_var;
extern "C" Object_t * SmartTypeWriter_Play_m2346 (SmartTypeWriter_t548 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayU3Ec__Iterator16_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayU3Ec__Iterator16_t551 * V_0 = {0};
	{
		U3CPlayU3Ec__Iterator16_t551 * L_0 = (U3CPlayU3Ec__Iterator16_t551 *)il2cpp_codegen_object_new (U3CPlayU3Ec__Iterator16_t551_il2cpp_TypeInfo_var);
		U3CPlayU3Ec__Iterator16__ctor_m2334(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayU3Ec__Iterator16_t551 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_5 = __this;
		U3CPlayU3Ec__Iterator16_t551 * L_2 = V_0;
		return L_2;
	}
}
// System.Int32 PixelCrushers.DialogueSystem.SmartTypeWriter::AdvanceOneCharacter(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t SmartTypeWriter_AdvanceOneCharacter_m2347 (SmartTypeWriter_t548 * __this, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___original_13);
		int32_t L_1 = ___length;
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m2874(L_0, L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0181;
		}
	}
	{
		String_t* L_3 = (__this->___original_13);
		int32_t L_4 = ___length;
		NullCheck((String_t*) &_stringLiteral135);
		int32_t L_5 = String_get_Length_m2869((String_t*) &_stringLiteral135, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_6 = String_Compare_m2875(NULL /*static, unused*/, L_3, L_4, (String_t*) &_stringLiteral135, 0, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0052;
		}
	}
	{
		List_1_t1 * L_7 = (__this->___closureTags_14);
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,!0) */, L_7, 0, (String_t*) &_stringLiteral136);
		int32_t L_8 = ___length;
		NullCheck((String_t*) &_stringLiteral135);
		int32_t L_9 = String_get_Length_m2869((String_t*) &_stringLiteral135, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_8+(int32_t)L_9));
	}

IL_0052:
	{
		String_t* L_10 = (__this->___original_13);
		int32_t L_11 = ___length;
		NullCheck((String_t*) &_stringLiteral136);
		int32_t L_12 = String_get_Length_m2869((String_t*) &_stringLiteral136, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_13 = String_Compare_m2875(NULL /*static, unused*/, L_10, L_11, (String_t*) &_stringLiteral136, 0, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_008c;
		}
	}
	{
		List_1_t1 * L_14 = (__this->___closureTags_14);
		NullCheck(L_14);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32) */, L_14, 0);
		int32_t L_15 = ___length;
		NullCheck((String_t*) &_stringLiteral136);
		int32_t L_16 = String_get_Length_m2869((String_t*) &_stringLiteral136, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_15+(int32_t)L_16));
	}

IL_008c:
	{
		String_t* L_17 = (__this->___original_13);
		int32_t L_18 = ___length;
		NullCheck((String_t*) &_stringLiteral137);
		int32_t L_19 = String_get_Length_m2869((String_t*) &_stringLiteral137, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_20 = String_Compare_m2875(NULL /*static, unused*/, L_17, L_18, (String_t*) &_stringLiteral137, 0, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00cb;
		}
	}
	{
		List_1_t1 * L_21 = (__this->___closureTags_14);
		NullCheck(L_21);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,!0) */, L_21, 0, (String_t*) &_stringLiteral138);
		int32_t L_22 = ___length;
		NullCheck((String_t*) &_stringLiteral137);
		int32_t L_23 = String_get_Length_m2869((String_t*) &_stringLiteral137, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_22+(int32_t)L_23));
	}

IL_00cb:
	{
		String_t* L_24 = (__this->___original_13);
		int32_t L_25 = ___length;
		NullCheck((String_t*) &_stringLiteral138);
		int32_t L_26 = String_get_Length_m2869((String_t*) &_stringLiteral138, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_27 = String_Compare_m2875(NULL /*static, unused*/, L_24, L_25, (String_t*) &_stringLiteral138, 0, L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0105;
		}
	}
	{
		List_1_t1 * L_28 = (__this->___closureTags_14);
		NullCheck(L_28);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32) */, L_28, 0);
		int32_t L_29 = ___length;
		NullCheck((String_t*) &_stringLiteral138);
		int32_t L_30 = String_get_Length_m2869((String_t*) &_stringLiteral138, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_29+(int32_t)L_30));
	}

IL_0105:
	{
		String_t* L_31 = (__this->___original_13);
		int32_t L_32 = ___length;
		NullCheck((String_t*) &_stringLiteral139);
		int32_t L_33 = String_get_Length_m2869((String_t*) &_stringLiteral139, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_34 = String_Compare_m2875(NULL /*static, unused*/, L_31, L_32, (String_t*) &_stringLiteral139, 0, L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0147;
		}
	}
	{
		List_1_t1 * L_35 = (__this->___closureTags_14);
		NullCheck(L_35);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,!0) */, L_35, 0, (String_t*) &_stringLiteral140);
		int32_t L_36 = ___length;
		NullCheck((String_t*) &_stringLiteral139);
		int32_t L_37 = String_get_Length_m2869((String_t*) &_stringLiteral139, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_36+(int32_t)L_37))+(int32_t)((int32_t)10)));
	}

IL_0147:
	{
		String_t* L_38 = (__this->___original_13);
		int32_t L_39 = ___length;
		NullCheck((String_t*) &_stringLiteral140);
		int32_t L_40 = String_get_Length_m2869((String_t*) &_stringLiteral140, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_41 = String_Compare_m2875(NULL /*static, unused*/, L_38, L_39, (String_t*) &_stringLiteral140, 0, L_40, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_0181;
		}
	}
	{
		List_1_t1 * L_42 = (__this->___closureTags_14);
		NullCheck(L_42);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32) */, L_42, 0);
		int32_t L_43 = ___length;
		NullCheck((String_t*) &_stringLiteral140);
		int32_t L_44 = String_get_Length_m2869((String_t*) &_stringLiteral140, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_43+(int32_t)L_44));
	}

IL_0181:
	{
		int32_t L_45 = ___length;
		return ((int32_t)((int32_t)L_45+(int32_t)1));
	}
}
// System.String PixelCrushers.DialogueSystem.SmartTypeWriter::GetRichTextClosures()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t640_il2cpp_TypeInfo_var;
extern "C" String_t* SmartTypeWriter_GetRichTextClosures_m2348 (SmartTypeWriter_t548 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StringBuilder_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t640 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t1 * L_0 = (__this->___closureTags_14);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_2;
	}

IL_0016:
	{
		StringBuilder_t640 * L_3 = (StringBuilder_t640 *)il2cpp_codegen_object_new (StringBuilder_t640_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2876(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_003a;
	}

IL_0023:
	{
		StringBuilder_t640 * L_4 = V_0;
		List_1_t1 * L_5 = (__this->___closureTags_14);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_5, L_6);
		NullCheck(L_4);
		StringBuilder_Append_m2877(L_4, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003a:
	{
		int32_t L_9 = V_1;
		List_1_t1 * L_10 = (__this->___closureTags_14);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0023;
		}
	}
	{
		StringBuilder_t640 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_12);
		return L_13;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTypeWriter::Stop()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SmartTypeWriter_Stop_m2349 (SmartTypeWriter_t548 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_StopAllCoroutines_m2853(__this, /*hidden argument*/NULL);
		SmartTypeWriter_set_IsPlaying_m2342(__this, 0, /*hidden argument*/NULL);
		Text_t212 * L_0 = (__this->___control_11);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Text_t212 * L_2 = (__this->___control_11);
		String_t* L_3 = (__this->___original_13);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___original_13 = L_4;
		SmartTypeWriter_CheckInput_m2350(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SmartTypeWriter::CheckInput()
extern TypeInfo* DialogueLua_t648_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" void SmartTypeWriter_CheckInput_m2350 (SmartTypeWriter_t548 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueLua_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Result_t583  V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueLua_t648_il2cpp_TypeInfo_var);
		Result_t583  L_0 = DialogueLua_GetVariable_m2952(NULL /*static, unused*/, (String_t*) &_stringLiteral831, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = Result_get_AsBool_m2968((&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral840, /*hidden argument*/NULL);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral841, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueSystemController_t631 * L_3 = DialogueManager_get_Instance_m2795(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Component_SendMessage_m2841(L_3, (String_t*) &_stringLiteral842, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// Watchers
#include "AssemblyU2DCSharp_Watchers.h"
#ifndef _MSC_VER
#else
#endif
// Watchers
#include "AssemblyU2DCSharp_WatchersMethodDeclarations.h"

// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"
// PixelCrushers.DialogueSystem.LuaWatchItem
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchItem.h"
// PixelCrushers.DialogueSystem.LuaChangedDelegate
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaChangedDelega.h"
// PixelCrushers.DialogueSystem.LuaChangedDelegate
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaChangedDelegaMethodDeclarations.h"


// System.Void Watchers::.ctor()
extern "C" void Watchers__ctor_m2351 (Watchers_t552 * __this, const MethodInfo* method)
{
	{
		__this->___luaExpression_2 = (String_t*) &_stringLiteral843;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Watchers::Start()
extern TypeInfo* LuaChangedDelegate_t724_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern const MethodInfo* Watchers_OnLuaValueChanged_m2353_MethodInfo_var;
extern "C" void Watchers_Start_m2352 (Watchers_t552 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LuaChangedDelegate_t724_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		Watchers_OnLuaValueChanged_m2353_MethodInfo_var = il2cpp_codegen_method_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___luaExpression_2);
		int32_t L_1 = (__this->___watchFrequency_3);
		IntPtr_t L_2 = { (void*)Watchers_OnLuaValueChanged_m2353_MethodInfo_var };
		LuaChangedDelegate_t724 * L_3 = (LuaChangedDelegate_t724 *)il2cpp_codegen_object_new (LuaChangedDelegate_t724_il2cpp_TypeInfo_var);
		LuaChangedDelegate__ctor_m3402(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueManager_AddLuaObserver_m3403(NULL /*static, unused*/, L_0, L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Watchers::OnLuaValueChanged(PixelCrushers.DialogueSystem.LuaWatchItem,PixelCrushers.DialogueSystem.Lua/Result)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Watchers_OnLuaValueChanged_m2353 (Watchers_t552 * __this, LuaWatchItem_t582 * ___luaWatchItem, Result_t583  ___newValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___luaExpression_2);
		String_t* L_1 = Result_get_AsString_m2921((&___newValue), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral844, L_0, L_1, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// DragMe
#include "AssemblyU2DCSharp_DragMe.h"
#ifndef _MSC_VER
#else
#endif
// DragMe
#include "AssemblyU2DCSharp_DragMeMethodDeclarations.h"

// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_ImageMethodDeclarations.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventDataMethodDeclarations.h"
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"
struct DragMe_t553;
struct Canvas_t213;
struct GameObject_t49;
struct DragMe_t553;
struct Object_t;
struct GameObject_t49;
// Declaration !!0 DragMe::FindInParents<System.Object>(UnityEngine.GameObject)
// !!0 DragMe::FindInParents<System.Object>(UnityEngine.GameObject)
extern "C" Object_t * DragMe_FindInParents_TisObject_t_m3405_gshared (Object_t * __this /* static, unused */, GameObject_t49 * p0, const MethodInfo* method);
#define DragMe_FindInParents_TisObject_t_m3405(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, GameObject_t49 *, const MethodInfo*))DragMe_FindInParents_TisObject_t_m3405_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 DragMe::FindInParents<UnityEngine.Canvas>(UnityEngine.GameObject)
// !!0 DragMe::FindInParents<UnityEngine.Canvas>(UnityEngine.GameObject)
#define DragMe_FindInParents_TisCanvas_t213_m3404(__this /* static, unused */, p0, method) (( Canvas_t213 * (*) (Object_t * /* static, unused */, GameObject_t49 *, const MethodInfo*))DragMe_FindInParents_TisObject_t_m3405_gshared)(__this /* static, unused */, p0, method)
struct GameObject_t49;
struct Image_t237;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
#define GameObject_AddComponent_TisImage_t237_m3406(__this, method) (( Image_t237 * (*) (GameObject_t49 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m2825_gshared)(__this, method)
struct GameObject_t49;
struct CanvasGroup_t211;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.CanvasGroup>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.CanvasGroup>()
#define GameObject_AddComponent_TisCanvasGroup_t211_m3407(__this, method) (( CanvasGroup_t211 * (*) (GameObject_t49 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m2825_gshared)(__this, method)
struct Component_t462;
struct Image_t237;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t237_m3408(__this, method) (( Image_t237 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)
struct GameObject_t49;
struct RectTransform_t259;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t259_m3409(__this, method) (( RectTransform_t259 * (*) (GameObject_t49 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2450_gshared)(__this, method)


// System.Void DragMe::.ctor()
extern "C" void DragMe__ctor_m2354 (DragMe_t553 * __this, const MethodInfo* method)
{
	{
		__this->___dragOnSurfaces_2 = 1;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragMe::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern TypeInfo* GameObject_t49_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransform_t259_il2cpp_TypeInfo_var;
extern const MethodInfo* DragMe_FindInParents_TisCanvas_t213_m3404_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisImage_t237_m3406_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisCanvasGroup_t211_m3407_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisImage_t237_m3408_MethodInfo_var;
extern "C" void DragMe_OnBeginDrag_m2355 (DragMe_t553 * __this, PointerEventData_t581 * ___eventData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		RectTransform_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		DragMe_FindInParents_TisCanvas_t213_m3404_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483924);
		GameObject_AddComponent_TisImage_t237_m3406_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483925);
		GameObject_AddComponent_TisCanvasGroup_t211_m3407_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483926);
		Component_GetComponent_TisImage_t237_m3408_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483927);
		s_Il2CppMethodIntialized = true;
	}
	Canvas_t213 * V_0 = {0};
	Image_t237 * V_1 = {0};
	CanvasGroup_t211 * V_2 = {0};
	{
		GameObject_t49 * L_0 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		Canvas_t213 * L_1 = DragMe_FindInParents_TisCanvas_t213_m3404(NULL /*static, unused*/, L_0, /*hidden argument*/DragMe_FindInParents_TisCanvas_t213_m3404_MethodInfo_var);
		V_0 = L_1;
		Canvas_t213 * L_2 = V_0;
		bool L_3 = Object_op_Equality_m2464(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		GameObject_t49 * L_4 = (GameObject_t49 *)il2cpp_codegen_object_new (GameObject_t49_il2cpp_TypeInfo_var);
		GameObject__ctor_m2508(L_4, (String_t*) &_stringLiteral845, /*hidden argument*/NULL);
		__this->___m_DraggingIcon_3 = L_4;
		GameObject_t49 * L_5 = (__this->___m_DraggingIcon_3);
		NullCheck(L_5);
		Transform_t54 * L_6 = GameObject_get_transform_m2462(L_5, /*hidden argument*/NULL);
		Canvas_t213 * L_7 = V_0;
		NullCheck(L_7);
		Transform_t54 * L_8 = Component_get_transform_m2421(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_SetParent_m2835(L_6, L_8, 0, /*hidden argument*/NULL);
		GameObject_t49 * L_9 = (__this->___m_DraggingIcon_3);
		NullCheck(L_9);
		Transform_t54 * L_10 = GameObject_get_transform_m2462(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_SetAsLastSibling_m3410(L_10, /*hidden argument*/NULL);
		GameObject_t49 * L_11 = (__this->___m_DraggingIcon_3);
		NullCheck(L_11);
		Image_t237 * L_12 = GameObject_AddComponent_TisImage_t237_m3406(L_11, /*hidden argument*/GameObject_AddComponent_TisImage_t237_m3406_MethodInfo_var);
		V_1 = L_12;
		GameObject_t49 * L_13 = (__this->___m_DraggingIcon_3);
		NullCheck(L_13);
		CanvasGroup_t211 * L_14 = GameObject_AddComponent_TisCanvasGroup_t211_m3407(L_13, /*hidden argument*/GameObject_AddComponent_TisCanvasGroup_t211_m3407_MethodInfo_var);
		V_2 = L_14;
		CanvasGroup_t211 * L_15 = V_2;
		NullCheck(L_15);
		CanvasGroup_set_blocksRaycasts_m3411(L_15, 0, /*hidden argument*/NULL);
		Image_t237 * L_16 = V_1;
		Image_t237 * L_17 = Component_GetComponent_TisImage_t237_m3408(__this, /*hidden argument*/Component_GetComponent_TisImage_t237_m3408_MethodInfo_var);
		NullCheck(L_17);
		Sprite_t573 * L_18 = Image_get_sprite_m3412(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Image_set_sprite_m2832(L_16, L_18, /*hidden argument*/NULL);
		Image_t237 * L_19 = V_1;
		NullCheck(L_19);
		VirtActionInvoker0::Invoke(32 /* System.Void UnityEngine.UI.Image::SetNativeSize() */, L_19);
		bool L_20 = (__this->___dragOnSurfaces_2);
		if (!L_20)
		{
			goto IL_00a7;
		}
	}
	{
		Transform_t54 * L_21 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		__this->___m_DraggingPlane_4 = ((RectTransform_t259 *)IsInst(L_21, RectTransform_t259_il2cpp_TypeInfo_var));
		goto IL_00b8;
	}

IL_00a7:
	{
		Canvas_t213 * L_22 = V_0;
		NullCheck(L_22);
		Transform_t54 * L_23 = Component_get_transform_m2421(L_22, /*hidden argument*/NULL);
		__this->___m_DraggingPlane_4 = ((RectTransform_t259 *)IsInst(L_23, RectTransform_t259_il2cpp_TypeInfo_var));
	}

IL_00b8:
	{
		PointerEventData_t581 * L_24 = ___eventData;
		DragMe_SetDraggedPosition_m2357(__this, L_24, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragMe::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void DragMe_OnDrag_m2356 (DragMe_t553 * __this, PointerEventData_t581 * ___data, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = (__this->___m_DraggingIcon_3);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		PointerEventData_t581 * L_2 = ___data;
		DragMe_SetDraggedPosition_m2357(__this, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void DragMe::SetDraggedPosition(UnityEngine.EventSystems.PointerEventData)
extern TypeInfo* RectTransform_t259_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t725_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t259_m3409_MethodInfo_var;
extern "C" void DragMe_SetDraggedPosition_m2357 (DragMe_t553 * __this, PointerEventData_t581 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		RectTransformUtility_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(460);
		GameObject_GetComponent_TisRectTransform_t259_m3409_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483928);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t259 * V_0 = {0};
	Vector3_t53  V_1 = {0};
	{
		bool L_0 = (__this->___dragOnSurfaces_2);
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		PointerEventData_t581 * L_1 = ___data;
		NullCheck(L_1);
		GameObject_t49 * L_2 = PointerEventData_get_pointerEnter_m3413(L_1, /*hidden argument*/NULL);
		bool L_3 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		PointerEventData_t581 * L_4 = ___data;
		NullCheck(L_4);
		GameObject_t49 * L_5 = PointerEventData_get_pointerEnter_m3413(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t54 * L_6 = GameObject_get_transform_m2462(L_5, /*hidden argument*/NULL);
		bool L_7 = Object_op_Inequality_m2419(NULL /*static, unused*/, ((RectTransform_t259 *)IsInst(L_6, RectTransform_t259_il2cpp_TypeInfo_var)), (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		PointerEventData_t581 * L_8 = ___data;
		NullCheck(L_8);
		GameObject_t49 * L_9 = PointerEventData_get_pointerEnter_m3413(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_t54 * L_10 = GameObject_get_transform_m2462(L_9, /*hidden argument*/NULL);
		__this->___m_DraggingPlane_4 = ((RectTransform_t259 *)IsInst(L_10, RectTransform_t259_il2cpp_TypeInfo_var));
	}

IL_004d:
	{
		GameObject_t49 * L_11 = (__this->___m_DraggingIcon_3);
		NullCheck(L_11);
		RectTransform_t259 * L_12 = GameObject_GetComponent_TisRectTransform_t259_m3409(L_11, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t259_m3409_MethodInfo_var);
		V_0 = L_12;
		RectTransform_t259 * L_13 = (__this->___m_DraggingPlane_4);
		PointerEventData_t581 * L_14 = ___data;
		NullCheck(L_14);
		Vector2_t97  L_15 = PointerEventData_get_position_m3414(L_14, /*hidden argument*/NULL);
		PointerEventData_t581 * L_16 = ___data;
		NullCheck(L_16);
		Camera_t356 * L_17 = PointerEventData_get_pressEventCamera_m3415(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t725_il2cpp_TypeInfo_var);
		bool L_18 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m3416(NULL /*static, unused*/, L_13, L_15, L_17, (&V_1), /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_008f;
		}
	}
	{
		RectTransform_t259 * L_19 = V_0;
		Vector3_t53  L_20 = V_1;
		NullCheck(L_19);
		Transform_set_position_m2461(L_19, L_20, /*hidden argument*/NULL);
		RectTransform_t259 * L_21 = V_0;
		RectTransform_t259 * L_22 = (__this->___m_DraggingPlane_4);
		NullCheck(L_22);
		Quaternion_t69  L_23 = Transform_get_rotation_m2512(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_rotation_m2633(L_21, L_23, /*hidden argument*/NULL);
	}

IL_008f:
	{
		return;
	}
}
// System.Void DragMe::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void DragMe_OnEndDrag_m2358 (DragMe_t553 * __this, PointerEventData_t581 * ___eventData, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = (__this->___m_DraggingIcon_3);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_t49 * L_2 = (__this->___m_DraggingIcon_3);
		Object_Destroy_m2754(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// DragPanel
#include "AssemblyU2DCSharp_DragPanel.h"
#ifndef _MSC_VER
#else
#endif
// DragPanel
#include "AssemblyU2DCSharp_DragPanelMethodDeclarations.h"

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"


// System.Void DragPanel::.ctor()
extern "C" void DragPanel__ctor_m2359 (DragPanel_t554 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragPanel::Awake()
extern TypeInfo* RectTransform_t259_il2cpp_TypeInfo_var;
extern "C" void DragPanel_Awake_m2360 (DragPanel_t554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t54 * L_0 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t54 * L_1 = Transform_get_parent_m2540(L_0, /*hidden argument*/NULL);
		__this->___panelRectTransform_4 = ((RectTransform_t259 *)IsInst(L_1, RectTransform_t259_il2cpp_TypeInfo_var));
		RectTransform_t259 * L_2 = (__this->___panelRectTransform_4);
		NullCheck(L_2);
		Transform_t54 * L_3 = Transform_get_parent_m2540(L_2, /*hidden argument*/NULL);
		__this->___parentRectTransform_5 = ((RectTransform_t259 *)IsInst(L_3, RectTransform_t259_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void DragPanel::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern TypeInfo* RectTransformUtility_t725_il2cpp_TypeInfo_var;
extern "C" void DragPanel_OnPointerDown_m2361 (DragPanel_t554 * __this, PointerEventData_t581 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(460);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t259 * L_0 = (__this->___panelRectTransform_4);
		NullCheck(L_0);
		Vector3_t53  L_1 = Transform_get_localPosition_m2444(L_0, /*hidden argument*/NULL);
		__this->___originalPanelLocalPosition_3 = L_1;
		RectTransform_t259 * L_2 = (__this->___parentRectTransform_5);
		PointerEventData_t581 * L_3 = ___data;
		NullCheck(L_3);
		Vector2_t97  L_4 = PointerEventData_get_position_m3414(L_3, /*hidden argument*/NULL);
		PointerEventData_t581 * L_5 = ___data;
		NullCheck(L_5);
		Camera_t356 * L_6 = PointerEventData_get_pressEventCamera_m3415(L_5, /*hidden argument*/NULL);
		Vector2_t97 * L_7 = &(__this->___originalLocalPointerPosition_2);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t725_il2cpp_TypeInfo_var);
		RectTransformUtility_ScreenPointToLocalPointInRectangle_m3417(NULL /*static, unused*/, L_2, L_4, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragPanel::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern TypeInfo* RectTransformUtility_t725_il2cpp_TypeInfo_var;
extern "C" void DragPanel_OnDrag_m2362 (DragPanel_t554 * __this, PointerEventData_t581 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(460);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t97  V_0 = {0};
	Vector3_t53  V_1 = {0};
	{
		RectTransform_t259 * L_0 = (__this->___panelRectTransform_4);
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		RectTransform_t259 * L_2 = (__this->___parentRectTransform_5);
		bool L_3 = Object_op_Equality_m2464(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		return;
	}

IL_0023:
	{
		RectTransform_t259 * L_4 = (__this->___parentRectTransform_5);
		PointerEventData_t581 * L_5 = ___data;
		NullCheck(L_5);
		Vector2_t97  L_6 = PointerEventData_get_position_m3414(L_5, /*hidden argument*/NULL);
		PointerEventData_t581 * L_7 = ___data;
		NullCheck(L_7);
		Camera_t356 * L_8 = PointerEventData_get_pressEventCamera_m3415(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t725_il2cpp_TypeInfo_var);
		bool L_9 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m3417(NULL /*static, unused*/, L_4, L_6, L_8, (&V_0), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		Vector2_t97  L_10 = V_0;
		Vector2_t97  L_11 = (__this->___originalLocalPointerPosition_2);
		Vector2_t97  L_12 = Vector2_op_Subtraction_m3179(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		Vector3_t53  L_13 = Vector2_op_Implicit_m2572(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		RectTransform_t259 * L_14 = (__this->___panelRectTransform_4);
		Vector3_t53  L_15 = (__this->___originalPanelLocalPosition_3);
		Vector3_t53  L_16 = V_1;
		Vector3_t53  L_17 = Vector3_op_Addition_m2448(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localPosition_m2423(L_14, L_17, /*hidden argument*/NULL);
	}

IL_006a:
	{
		DragPanel_ClampToWindow_m2363(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragPanel::ClampToWindow()
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern "C" void DragPanel_ClampToWindow_m2363 (DragPanel_t554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t53  V_0 = {0};
	Vector3_t53  V_1 = {0};
	Vector3_t53  V_2 = {0};
	Rect_t201  V_3 = {0};
	Rect_t201  V_4 = {0};
	Rect_t201  V_5 = {0};
	Rect_t201  V_6 = {0};
	Vector3_t53  V_7 = {0};
	Vector3_t53  V_8 = {0};
	{
		RectTransform_t259 * L_0 = (__this->___panelRectTransform_4);
		NullCheck(L_0);
		Vector3_t53  L_1 = Transform_get_localPosition_m2444(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RectTransform_t259 * L_2 = (__this->___parentRectTransform_5);
		NullCheck(L_2);
		Rect_t201  L_3 = RectTransform_get_rect_m2867(L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		Vector2_t97  L_4 = Rect_get_min_m3418((&V_3), /*hidden argument*/NULL);
		RectTransform_t259 * L_5 = (__this->___panelRectTransform_4);
		NullCheck(L_5);
		Rect_t201  L_6 = RectTransform_get_rect_m2867(L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		Vector2_t97  L_7 = Rect_get_min_m3418((&V_4), /*hidden argument*/NULL);
		Vector2_t97  L_8 = Vector2_op_Subtraction_m3179(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/NULL);
		Vector3_t53  L_9 = Vector2_op_Implicit_m2572(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		RectTransform_t259 * L_10 = (__this->___parentRectTransform_5);
		NullCheck(L_10);
		Rect_t201  L_11 = RectTransform_get_rect_m2867(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		Vector2_t97  L_12 = Rect_get_max_m3419((&V_5), /*hidden argument*/NULL);
		RectTransform_t259 * L_13 = (__this->___panelRectTransform_4);
		NullCheck(L_13);
		Rect_t201  L_14 = RectTransform_get_rect_m2867(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		Vector2_t97  L_15 = Rect_get_max_m3419((&V_6), /*hidden argument*/NULL);
		Vector2_t97  L_16 = Vector2_op_Subtraction_m3179(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/NULL);
		Vector3_t53  L_17 = Vector2_op_Implicit_m2572(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		RectTransform_t259 * L_18 = (__this->___panelRectTransform_4);
		NullCheck(L_18);
		Vector3_t53  L_19 = Transform_get_localPosition_m2444(L_18, /*hidden argument*/NULL);
		V_7 = L_19;
		float L_20 = ((&V_7)->___x_1);
		float L_21 = ((&V_1)->___x_1);
		float L_22 = ((&V_2)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		float L_23 = Mathf_Clamp_m2467(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		(&V_0)->___x_1 = L_23;
		RectTransform_t259 * L_24 = (__this->___panelRectTransform_4);
		NullCheck(L_24);
		Vector3_t53  L_25 = Transform_get_localPosition_m2444(L_24, /*hidden argument*/NULL);
		V_8 = L_25;
		float L_26 = ((&V_8)->___y_2);
		float L_27 = ((&V_1)->___y_2);
		float L_28 = ((&V_2)->___y_2);
		float L_29 = Mathf_Clamp_m2467(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		(&V_0)->___y_2 = L_29;
		RectTransform_t259 * L_30 = (__this->___panelRectTransform_4);
		Vector3_t53  L_31 = V_0;
		NullCheck(L_30);
		Transform_set_localPosition_m2423(L_30, L_31, /*hidden argument*/NULL);
		return;
	}
}
// DropMe
#include "AssemblyU2DCSharp_DropMe.h"
#ifndef _MSC_VER
#else
#endif
// DropMe
#include "AssemblyU2DCSharp_DropMeMethodDeclarations.h"

// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_GraphicMethodDeclarations.h"
struct GameObject_t49;
struct Image_t237;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
#define GameObject_GetComponent_TisImage_t237_m3420(__this, method) (( Image_t237 * (*) (GameObject_t49 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2450_gshared)(__this, method)


// System.Void DropMe::.ctor()
extern "C" void DropMe__ctor_m2364 (DropMe_t555 * __this, const MethodInfo* method)
{
	{
		Color_t121  L_0 = Color_get_yellow_m2926(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___highlightColor_5 = L_0;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DropMe::OnEnable()
extern "C" void DropMe_OnEnable_m2365 (DropMe_t555 * __this, const MethodInfo* method)
{
	{
		Image_t237 * L_0 = (__this->___containerImage_2);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Image_t237 * L_2 = (__this->___containerImage_2);
		NullCheck(L_2);
		Color_t121  L_3 = Graphic_get_color_m2846(L_2, /*hidden argument*/NULL);
		__this->___normalColor_4 = L_3;
	}

IL_0022:
	{
		return;
	}
}
// System.Void DropMe::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C" void DropMe_OnDrop_m2366 (DropMe_t555 * __this, PointerEventData_t581 * ___data, const MethodInfo* method)
{
	Sprite_t573 * V_0 = {0};
	{
		Image_t237 * L_0 = (__this->___containerImage_2);
		Color_t121  L_1 = (__this->___normalColor_4);
		NullCheck(L_0);
		Graphic_set_color_m2820(L_0, L_1, /*hidden argument*/NULL);
		Image_t237 * L_2 = (__this->___receivingImage_3);
		bool L_3 = Object_op_Equality_m2464(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		PointerEventData_t581 * L_4 = ___data;
		Sprite_t573 * L_5 = DropMe_GetDropSprite_m2369(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Sprite_t573 * L_6 = V_0;
		bool L_7 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_6, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		Image_t237 * L_8 = (__this->___receivingImage_3);
		Sprite_t573 * L_9 = V_0;
		NullCheck(L_8);
		Image_set_overrideSprite_m3421(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void DropMe::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" void DropMe_OnPointerEnter_m2367 (DropMe_t555 * __this, PointerEventData_t581 * ___data, const MethodInfo* method)
{
	Sprite_t573 * V_0 = {0};
	{
		Image_t237 * L_0 = (__this->___containerImage_2);
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		PointerEventData_t581 * L_2 = ___data;
		Sprite_t573 * L_3 = DropMe_GetDropSprite_m2369(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Sprite_t573 * L_4 = V_0;
		bool L_5 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_4, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		Image_t237 * L_6 = (__this->___containerImage_2);
		Color_t121  L_7 = (__this->___highlightColor_5);
		NullCheck(L_6);
		Graphic_set_color_m2820(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void DropMe::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" void DropMe_OnPointerExit_m2368 (DropMe_t555 * __this, PointerEventData_t581 * ___data, const MethodInfo* method)
{
	{
		Image_t237 * L_0 = (__this->___containerImage_2);
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Image_t237 * L_2 = (__this->___containerImage_2);
		Color_t121  L_3 = (__this->___normalColor_4);
		NullCheck(L_2);
		Graphic_set_color_m2820(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Sprite DropMe::GetDropSprite(UnityEngine.EventSystems.PointerEventData)
extern const MethodInfo* GameObject_GetComponent_TisImage_t237_m3420_MethodInfo_var;
extern "C" Sprite_t573 * DropMe_GetDropSprite_m2369 (DropMe_t555 * __this, PointerEventData_t581 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisImage_t237_m3420_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483929);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t49 * V_0 = {0};
	Image_t237 * V_1 = {0};
	{
		PointerEventData_t581 * L_0 = ___data;
		NullCheck(L_0);
		GameObject_t49 * L_1 = PointerEventData_get_pointerDrag_m3422(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t49 * L_2 = V_0;
		bool L_3 = Object_op_Equality_m2464(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (Sprite_t573 *)NULL;
	}

IL_0015:
	{
		GameObject_t49 * L_4 = V_0;
		NullCheck(L_4);
		Image_t237 * L_5 = GameObject_GetComponent_TisImage_t237_m3420(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t237_m3420_MethodInfo_var);
		V_1 = L_5;
		Image_t237 * L_6 = V_1;
		bool L_7 = Object_op_Equality_m2464(NULL /*static, unused*/, L_6, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		return (Sprite_t573 *)NULL;
	}

IL_002a:
	{
		Image_t237 * L_8 = V_1;
		NullCheck(L_8);
		Sprite_t573 * L_9 = Image_get_sprite_m3412(L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// PanelManager/<DisablePanelDeleyed>c__Iterator17
#include "AssemblyU2DCSharp_PanelManager_U3CDisablePanelDeleyedU3Ec__I.h"
#ifndef _MSC_VER
#else
#endif
// PanelManager/<DisablePanelDeleyed>c__Iterator17
#include "AssemblyU2DCSharp_PanelManager_U3CDisablePanelDeleyedU3Ec__IMethodDeclarations.h"

// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// PanelManager
#include "AssemblyU2DCSharp_PanelManager.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"


// System.Void PanelManager/<DisablePanelDeleyed>c__Iterator17::.ctor()
extern "C" void U3CDisablePanelDeleyedU3Ec__Iterator17__ctor_m2370 (U3CDisablePanelDeleyedU3Ec__Iterator17_t557 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PanelManager/<DisablePanelDeleyed>c__Iterator17::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDisablePanelDeleyedU3Ec__Iterator17_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2371 (U3CDisablePanelDeleyedU3Ec__Iterator17_t557 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Object PanelManager/<DisablePanelDeleyed>c__Iterator17::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDisablePanelDeleyedU3Ec__Iterator17_System_Collections_IEnumerator_get_Current_m2372 (U3CDisablePanelDeleyedU3Ec__Iterator17_t557 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean PanelManager/<DisablePanelDeleyed>c__Iterator17::MoveNext()
extern TypeInfo* WaitForEndOfFrame_t726_il2cpp_TypeInfo_var;
extern "C" bool U3CDisablePanelDeleyedU3Ec__Iterator17_MoveNext_m2373 (U3CDisablePanelDeleyedU3Ec__Iterator17_t557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForEndOfFrame_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	AnimatorStateInfo_t574  V_1 = {0};
	bool V_2 = false;
	{
		int32_t L_0 = (__this->___U24PC_3);
		V_0 = L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_009a;
		}
	}
	{
		goto IL_00d3;
	}

IL_0021:
	{
		__this->___U3CclosedStateReachedU3E__0_0 = 0;
		__this->___U3CwantToCloseU3E__1_1 = 1;
		goto IL_009a;
	}

IL_0034:
	{
		Animator_t214 * L_2 = (__this->___anim_2);
		NullCheck(L_2);
		bool L_3 = Animator_IsInTransition_m3423(L_2, 0, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0064;
		}
	}
	{
		Animator_t214 * L_4 = (__this->___anim_2);
		NullCheck(L_4);
		AnimatorStateInfo_t574  L_5 = Animator_GetCurrentAnimatorStateInfo_m2789(L_4, 0, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = AnimatorStateInfo_IsName_m3165((&V_1), (String_t*) &_stringLiteral847, /*hidden argument*/NULL);
		__this->___U3CclosedStateReachedU3E__0_0 = L_6;
	}

IL_0064:
	{
		Animator_t214 * L_7 = (__this->___anim_2);
		PanelManager_t556 * L_8 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_8);
		int32_t L_9 = (L_8->___m_OpenParameterId_5);
		NullCheck(L_7);
		bool L_10 = Animator_GetBool_m3424(L_7, L_9, /*hidden argument*/NULL);
		__this->___U3CwantToCloseU3E__1_1 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		WaitForEndOfFrame_t726 * L_11 = (WaitForEndOfFrame_t726 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t726_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m3425(L_11, /*hidden argument*/NULL);
		__this->___U24current_4 = L_11;
		__this->___U24PC_3 = 1;
		goto IL_00d5;
	}

IL_009a:
	{
		bool L_12 = (__this->___U3CclosedStateReachedU3E__0_0);
		if (L_12)
		{
			goto IL_00b0;
		}
	}
	{
		bool L_13 = (__this->___U3CwantToCloseU3E__1_1);
		if (L_13)
		{
			goto IL_0034;
		}
	}

IL_00b0:
	{
		bool L_14 = (__this->___U3CwantToCloseU3E__1_1);
		if (!L_14)
		{
			goto IL_00cc;
		}
	}
	{
		Animator_t214 * L_15 = (__this->___anim_2);
		NullCheck(L_15);
		GameObject_t49 * L_16 = Component_get_gameObject_m2452(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_SetActive_m2429(L_16, 0, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		__this->___U24PC_3 = (-1);
	}

IL_00d3:
	{
		return 0;
	}

IL_00d5:
	{
		return 1;
	}
	// Dead block : IL_00d7: ldloc.2
}
// System.Void PanelManager/<DisablePanelDeleyed>c__Iterator17::Dispose()
extern "C" void U3CDisablePanelDeleyedU3Ec__Iterator17_Dispose_m2374 (U3CDisablePanelDeleyedU3Ec__Iterator17_t557 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void PanelManager/<DisablePanelDeleyed>c__Iterator17::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CDisablePanelDeleyedU3Ec__Iterator17_Reset_m2375 (U3CDisablePanelDeleyedU3Ec__Iterator17_t557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t592 * L_0 = (NotSupportedException_t592 *)il2cpp_codegen_object_new (NotSupportedException_t592_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2521(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// PanelManager
#include "AssemblyU2DCSharp_PanelManagerMethodDeclarations.h"

#include "UnityEngine.UI_ArrayTypes.h"
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.EventSystems.StandaloneInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModul.h"
// UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModule.h"
// UnityEngine.EventSystems.StandaloneInputModule/InputMode
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModul_0.h"
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviourMethodDeclarations.h"
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_SelectableMethodDeclarations.h"
// UnityEngine.EventSystems.StandaloneInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModulMethodDeclarations.h"
struct GameObject_t49;
struct SelectableU5BU5D_t728;
struct GameObject_t49;
struct ObjectU5BU5D_t21;
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C" ObjectU5BU5D_t21* GameObject_GetComponentsInChildren_TisObject_t_m3178_gshared (GameObject_t49 * __this, bool p0, const MethodInfo* method);
#define GameObject_GetComponentsInChildren_TisObject_t_m3178(__this, p0, method) (( ObjectU5BU5D_t21* (*) (GameObject_t49 *, bool, const MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m3178_gshared)(__this, p0, method)
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Selectable>(System.Boolean)
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Selectable>(System.Boolean)
#define GameObject_GetComponentsInChildren_TisSelectable_t727_m3426(__this, p0, method) (( SelectableU5BU5D_t728* (*) (GameObject_t49 *, bool, const MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m3178_gshared)(__this, p0, method)


// System.Void PanelManager::.ctor()
extern "C" void PanelManager__ctor_m2376 (PanelManager_t556 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PanelManager::OnEnable()
extern "C" void PanelManager_OnEnable_m2377 (PanelManager_t556 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Animator_StringToHash_m3427(NULL /*static, unused*/, (String_t*) &_stringLiteral846, /*hidden argument*/NULL);
		__this->___m_OpenParameterId_5 = L_0;
		Animator_t214 * L_1 = (__this->___initiallyOpen_4);
		bool L_2 = Object_op_Equality_m2464(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		Animator_t214 * L_3 = (__this->___initiallyOpen_4);
		PanelManager_OpenPanel_m2378(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PanelManager::OpenPanel(UnityEngine.Animator)
extern TypeInfo* EventSystem_t633_il2cpp_TypeInfo_var;
extern "C" void PanelManager_OpenPanel_m2378 (PanelManager_t556 * __this, Animator_t214 * ___anim, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventSystem_t633_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t49 * V_0 = {0};
	GameObject_t49 * V_1 = {0};
	{
		Animator_t214 * L_0 = (__this->___m_Open_6);
		Animator_t214 * L_1 = ___anim;
		bool L_2 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Animator_t214 * L_3 = ___anim;
		NullCheck(L_3);
		GameObject_t49 * L_4 = Component_get_gameObject_m2452(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m2429(L_4, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t633_il2cpp_TypeInfo_var);
		EventSystem_t633 * L_5 = EventSystem_get_current_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_t49 * L_6 = EventSystem_get_currentSelectedGameObject_m2888(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Animator_t214 * L_7 = ___anim;
		NullCheck(L_7);
		Transform_t54 * L_8 = Component_get_transform_m2421(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_SetAsLastSibling_m3410(L_8, /*hidden argument*/NULL);
		PanelManager_CloseCurrent_m2380(__this, /*hidden argument*/NULL);
		GameObject_t49 * L_9 = V_0;
		__this->___m_PreviouslySelected_7 = L_9;
		Animator_t214 * L_10 = ___anim;
		__this->___m_Open_6 = L_10;
		Animator_t214 * L_11 = (__this->___m_Open_6);
		int32_t L_12 = (__this->___m_OpenParameterId_5);
		NullCheck(L_11);
		Animator_SetBool_m3428(L_11, L_12, 1, /*hidden argument*/NULL);
		Animator_t214 * L_13 = ___anim;
		NullCheck(L_13);
		GameObject_t49 * L_14 = Component_get_gameObject_m2452(L_13, /*hidden argument*/NULL);
		GameObject_t49 * L_15 = PanelManager_FindFirstEnabledSelectable_m2379(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		GameObject_t49 * L_16 = V_1;
		PanelManager_SetSelected_m2382(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject PanelManager::FindFirstEnabledSelectable(UnityEngine.GameObject)
extern const MethodInfo* GameObject_GetComponentsInChildren_TisSelectable_t727_m3426_MethodInfo_var;
extern "C" GameObject_t49 * PanelManager_FindFirstEnabledSelectable_m2379 (Object_t * __this /* static, unused */, GameObject_t49 * ___gameObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponentsInChildren_TisSelectable_t727_m3426_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483930);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t49 * V_0 = {0};
	SelectableU5BU5D_t728* V_1 = {0};
	Selectable_t727 * V_2 = {0};
	SelectableU5BU5D_t728* V_3 = {0};
	int32_t V_4 = 0;
	{
		V_0 = (GameObject_t49 *)NULL;
		GameObject_t49 * L_0 = ___gameObject;
		NullCheck(L_0);
		SelectableU5BU5D_t728* L_1 = GameObject_GetComponentsInChildren_TisSelectable_t727_m3426(L_0, 1, /*hidden argument*/GameObject_GetComponentsInChildren_TisSelectable_t727_m3426_MethodInfo_var);
		V_1 = L_1;
		SelectableU5BU5D_t728* L_2 = V_1;
		V_3 = L_2;
		V_4 = 0;
		goto IL_0041;
	}

IL_0014:
	{
		SelectableU5BU5D_t728* L_3 = V_3;
		int32_t L_4 = V_4;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = (*(Selectable_t727 **)(Selectable_t727 **)SZArrayLdElema(L_3, L_5));
		Selectable_t727 * L_6 = V_2;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, L_6);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		Selectable_t727 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_8);
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		Selectable_t727 * L_10 = V_2;
		NullCheck(L_10);
		GameObject_t49 * L_11 = Component_get_gameObject_m2452(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_004b;
	}

IL_003b:
	{
		int32_t L_12 = V_4;
		V_4 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_13 = V_4;
		SelectableU5BU5D_t728* L_14 = V_3;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0014;
		}
	}

IL_004b:
	{
		GameObject_t49 * L_15 = V_0;
		return L_15;
	}
}
// System.Void PanelManager::CloseCurrent()
extern "C" void PanelManager_CloseCurrent_m2380 (PanelManager_t556 * __this, const MethodInfo* method)
{
	{
		Animator_t214 * L_0 = (__this->___m_Open_6);
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Animator_t214 * L_2 = (__this->___m_Open_6);
		int32_t L_3 = (__this->___m_OpenParameterId_5);
		NullCheck(L_2);
		Animator_SetBool_m3428(L_2, L_3, 0, /*hidden argument*/NULL);
		GameObject_t49 * L_4 = (__this->___m_PreviouslySelected_7);
		PanelManager_SetSelected_m2382(__this, L_4, /*hidden argument*/NULL);
		Animator_t214 * L_5 = (__this->___m_Open_6);
		Object_t * L_6 = PanelManager_DisablePanelDeleyed_m2381(__this, L_5, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_6, /*hidden argument*/NULL);
		__this->___m_Open_6 = (Animator_t214 *)NULL;
		return;
	}
}
// System.Collections.IEnumerator PanelManager::DisablePanelDeleyed(UnityEngine.Animator)
extern TypeInfo* U3CDisablePanelDeleyedU3Ec__Iterator17_t557_il2cpp_TypeInfo_var;
extern "C" Object_t * PanelManager_DisablePanelDeleyed_m2381 (PanelManager_t556 * __this, Animator_t214 * ___anim, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDisablePanelDeleyedU3Ec__Iterator17_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	U3CDisablePanelDeleyedU3Ec__Iterator17_t557 * V_0 = {0};
	{
		U3CDisablePanelDeleyedU3Ec__Iterator17_t557 * L_0 = (U3CDisablePanelDeleyedU3Ec__Iterator17_t557 *)il2cpp_codegen_object_new (U3CDisablePanelDeleyedU3Ec__Iterator17_t557_il2cpp_TypeInfo_var);
		U3CDisablePanelDeleyedU3Ec__Iterator17__ctor_m2370(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDisablePanelDeleyedU3Ec__Iterator17_t557 * L_1 = V_0;
		Animator_t214 * L_2 = ___anim;
		NullCheck(L_1);
		L_1->___anim_2 = L_2;
		U3CDisablePanelDeleyedU3Ec__Iterator17_t557 * L_3 = V_0;
		Animator_t214 * L_4 = ___anim;
		NullCheck(L_3);
		L_3->___U3CU24U3Eanim_5 = L_4;
		U3CDisablePanelDeleyedU3Ec__Iterator17_t557 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_6 = __this;
		U3CDisablePanelDeleyedU3Ec__Iterator17_t557 * L_6 = V_0;
		return L_6;
	}
}
// System.Void PanelManager::SetSelected(UnityEngine.GameObject)
extern TypeInfo* EventSystem_t633_il2cpp_TypeInfo_var;
extern TypeInfo* StandaloneInputModule_t729_il2cpp_TypeInfo_var;
extern "C" void PanelManager_SetSelected_m2382 (PanelManager_t556 * __this, GameObject_t49 * ___go, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventSystem_t633_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		StandaloneInputModule_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	StandaloneInputModule_t729 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t633_il2cpp_TypeInfo_var);
		EventSystem_t633 * L_0 = EventSystem_get_current_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t49 * L_1 = ___go;
		NullCheck(L_0);
		EventSystem_SetSelectedGameObject_m3429(L_0, L_1, /*hidden argument*/NULL);
		EventSystem_t633 * L_2 = EventSystem_get_current_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		BaseInputModule_t730 * L_3 = EventSystem_get_currentInputModule_m3430(L_2, /*hidden argument*/NULL);
		V_0 = ((StandaloneInputModule_t729 *)IsInst(L_3, StandaloneInputModule_t729_il2cpp_TypeInfo_var));
		StandaloneInputModule_t729 * L_4 = V_0;
		bool L_5 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_4, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		StandaloneInputModule_t729 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = StandaloneInputModule_get_inputMode_m3431(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t633_il2cpp_TypeInfo_var);
		EventSystem_t633 * L_8 = EventSystem_get_current_m2800(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		EventSystem_SetSelectedGameObject_m3429(L_8, (GameObject_t49 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// ResizePanel
#include "AssemblyU2DCSharp_ResizePanel.h"
#ifndef _MSC_VER
#else
#endif
// ResizePanel
#include "AssemblyU2DCSharp_ResizePanelMethodDeclarations.h"

struct Component_t462;
struct RectTransform_t259;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t259_m3432(__this, method) (( RectTransform_t259 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void ResizePanel::.ctor()
extern "C" void ResizePanel__ctor_m2383 (ResizePanel_t558 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = {0};
		Vector2__ctor_m2417(&L_0, (100.0f), (100.0f), /*hidden argument*/NULL);
		__this->___minSize_2 = L_0;
		Vector2_t97  L_1 = {0};
		Vector2__ctor_m2417(&L_1, (400.0f), (400.0f), /*hidden argument*/NULL);
		__this->___maxSize_3 = L_1;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ResizePanel::Awake()
extern const MethodInfo* Component_GetComponent_TisRectTransform_t259_m3432_MethodInfo_var;
extern "C" void ResizePanel_Awake_m2384 (ResizePanel_t558 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t259_m3432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483931);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t54 * L_0 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t54 * L_1 = Transform_get_parent_m2540(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_t259 * L_2 = Component_GetComponent_TisRectTransform_t259_m3432(L_1, /*hidden argument*/Component_GetComponent_TisRectTransform_t259_m3432_MethodInfo_var);
		__this->___panelRectTransform_4 = L_2;
		return;
	}
}
// System.Void ResizePanel::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern TypeInfo* RectTransformUtility_t725_il2cpp_TypeInfo_var;
extern "C" void ResizePanel_OnPointerDown_m2385 (ResizePanel_t558 * __this, PointerEventData_t581 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(460);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t259 * L_0 = (__this->___panelRectTransform_4);
		NullCheck(L_0);
		Vector2_t97  L_1 = RectTransform_get_sizeDelta_m3433(L_0, /*hidden argument*/NULL);
		__this->___originalSizeDelta_6 = L_1;
		RectTransform_t259 * L_2 = (__this->___panelRectTransform_4);
		PointerEventData_t581 * L_3 = ___data;
		NullCheck(L_3);
		Vector2_t97  L_4 = PointerEventData_get_position_m3414(L_3, /*hidden argument*/NULL);
		PointerEventData_t581 * L_5 = ___data;
		NullCheck(L_5);
		Camera_t356 * L_6 = PointerEventData_get_pressEventCamera_m3415(L_5, /*hidden argument*/NULL);
		Vector2_t97 * L_7 = &(__this->___originalLocalPointerPosition_5);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t725_il2cpp_TypeInfo_var);
		RectTransformUtility_ScreenPointToLocalPointInRectangle_m3417(NULL /*static, unused*/, L_2, L_4, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ResizePanel::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern TypeInfo* RectTransformUtility_t725_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern "C" void ResizePanel_OnDrag_m2386 (ResizePanel_t558 * __this, PointerEventData_t581 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(460);
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t97  V_0 = {0};
	Vector3_t53  V_1 = {0};
	Vector2_t97  V_2 = {0};
	{
		RectTransform_t259 * L_0 = (__this->___panelRectTransform_4);
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		RectTransform_t259 * L_2 = (__this->___panelRectTransform_4);
		PointerEventData_t581 * L_3 = ___data;
		NullCheck(L_3);
		Vector2_t97  L_4 = PointerEventData_get_position_m3414(L_3, /*hidden argument*/NULL);
		PointerEventData_t581 * L_5 = ___data;
		NullCheck(L_5);
		Camera_t356 * L_6 = PointerEventData_get_pressEventCamera_m3415(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t725_il2cpp_TypeInfo_var);
		RectTransformUtility_ScreenPointToLocalPointInRectangle_m3417(NULL /*static, unused*/, L_2, L_4, L_6, (&V_0), /*hidden argument*/NULL);
		Vector2_t97  L_7 = V_0;
		Vector2_t97  L_8 = (__this->___originalLocalPointerPosition_5);
		Vector2_t97  L_9 = Vector2_op_Subtraction_m3179(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Vector3_t53  L_10 = Vector2_op_Implicit_m2572(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Vector2_t97  L_11 = (__this->___originalSizeDelta_6);
		float L_12 = ((&V_1)->___x_1);
		float L_13 = ((&V_1)->___y_2);
		Vector2_t97  L_14 = {0};
		Vector2__ctor_m2417(&L_14, L_12, ((-L_13)), /*hidden argument*/NULL);
		Vector2_t97  L_15 = Vector2_op_Addition_m2587(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = ((&V_2)->___x_1);
		Vector2_t97 * L_17 = &(__this->___minSize_2);
		float L_18 = (L_17->___x_1);
		Vector2_t97 * L_19 = &(__this->___maxSize_3);
		float L_20 = (L_19->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Clamp_m2467(NULL /*static, unused*/, L_16, L_18, L_20, /*hidden argument*/NULL);
		float L_22 = ((&V_2)->___y_2);
		Vector2_t97 * L_23 = &(__this->___minSize_2);
		float L_24 = (L_23->___y_2);
		Vector2_t97 * L_25 = &(__this->___maxSize_3);
		float L_26 = (L_25->___y_2);
		float L_27 = Mathf_Clamp_m2467(NULL /*static, unused*/, L_22, L_24, L_26, /*hidden argument*/NULL);
		Vector2__ctor_m2417((&V_2), L_21, L_27, /*hidden argument*/NULL);
		RectTransform_t259 * L_28 = (__this->___panelRectTransform_4);
		Vector2_t97  L_29 = V_2;
		NullCheck(L_28);
		RectTransform_set_sizeDelta_m3434(L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// ScrollDetailTexture
#include "AssemblyU2DCSharp_ScrollDetailTexture.h"
#ifndef _MSC_VER
#else
#endif
// ScrollDetailTexture
#include "AssemblyU2DCSharp_ScrollDetailTextureMethodDeclarations.h"

// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphicMethodDeclarations.h"


// System.Void ScrollDetailTexture::.ctor()
extern "C" void ScrollDetailTexture__ctor_m2387 (ScrollDetailTexture_t559 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollPerSecond_3 = L_0;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScrollDetailTexture::OnEnable()
extern TypeInfo* Material_t48_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisImage_t237_m3408_MethodInfo_var;
extern "C" void ScrollDetailTexture_OnEnable_m2388 (ScrollDetailTexture_t559 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Component_GetComponent_TisImage_t237_m3408_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483927);
		s_Il2CppMethodIntialized = true;
	}
	{
		Image_t237 * L_0 = Component_GetComponent_TisImage_t237_m3408(__this, /*hidden argument*/Component_GetComponent_TisImage_t237_m3408_MethodInfo_var);
		__this->___mSprite_7 = L_0;
		Image_t237 * L_1 = (__this->___mSprite_7);
		NullCheck(L_1);
		Material_t48 * L_2 = (Material_t48 *)VirtFuncInvoker0< Material_t48 * >::Invoke(24 /* UnityEngine.Material UnityEngine.UI.MaskableGraphic::get_material() */, L_1);
		__this->___mOriginal_6 = L_2;
		bool L_3 = (__this->___uniqueMaterial_2);
		if (!L_3)
		{
			goto IL_008d;
		}
	}
	{
		Image_t237 * L_4 = (__this->___mSprite_7);
		NullCheck(L_4);
		Material_t48 * L_5 = (Material_t48 *)VirtFuncInvoker0< Material_t48 * >::Invoke(24 /* UnityEngine.Material UnityEngine.UI.MaskableGraphic::get_material() */, L_4);
		bool L_6 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_5, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_008d;
		}
	}
	{
		Material_t48 * L_7 = (__this->___mOriginal_6);
		Material_t48 * L_8 = (Material_t48 *)il2cpp_codegen_object_new (Material_t48_il2cpp_TypeInfo_var);
		Material__ctor_m3169(L_8, L_7, /*hidden argument*/NULL);
		__this->___mCopy_5 = L_8;
		Material_t48 * L_9 = (__this->___mCopy_5);
		Material_t48 * L_10 = (__this->___mOriginal_6);
		NullCheck(L_10);
		String_t* L_11 = Object_get_name_m2484(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral848, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Object_set_name_m2536(L_9, L_12, /*hidden argument*/NULL);
		Material_t48 * L_13 = (__this->___mCopy_5);
		NullCheck(L_13);
		Object_set_hideFlags_m3278(L_13, ((int32_t)52), /*hidden argument*/NULL);
		Image_t237 * L_14 = (__this->___mSprite_7);
		Material_t48 * L_15 = (__this->___mCopy_5);
		NullCheck(L_14);
		VirtActionInvoker1< Material_t48 * >::Invoke(25 /* System.Void UnityEngine.UI.MaskableGraphic::set_material(UnityEngine.Material) */, L_14, L_15);
	}

IL_008d:
	{
		return;
	}
}
// System.Void ScrollDetailTexture::OnDisable()
extern "C" void ScrollDetailTexture_OnDisable_m2389 (ScrollDetailTexture_t559 * __this, const MethodInfo* method)
{
	{
		Material_t48 * L_0 = (__this->___mCopy_5);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		Image_t237 * L_2 = (__this->___mSprite_7);
		Material_t48 * L_3 = (__this->___mOriginal_6);
		NullCheck(L_2);
		VirtActionInvoker1< Material_t48 * >::Invoke(25 /* System.Void UnityEngine.UI.MaskableGraphic::set_material(UnityEngine.Material) */, L_2, L_3);
		bool L_4 = Application_get_isEditor_m3435(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		Material_t48 * L_5 = (__this->___mCopy_5);
		Object_DestroyImmediate_m2518(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_003c:
	{
		Material_t48 * L_6 = (__this->___mCopy_5);
		Object_Destroy_m2754(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0047:
	{
		__this->___mCopy_5 = (Material_t48 *)NULL;
	}

IL_004e:
	{
		__this->___mOriginal_6 = (Material_t48 *)NULL;
		return;
	}
}
// System.Void ScrollDetailTexture::Update()
extern "C" void ScrollDetailTexture_Update_m2390 (ScrollDetailTexture_t559 * __this, const MethodInfo* method)
{
	Material_t48 * V_0 = {0};
	Texture_t731 * V_1 = {0};
	Material_t48 * G_B3_0 = {0};
	{
		Material_t48 * L_0 = (__this->___mCopy_5);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Material_t48 * L_2 = (__this->___mCopy_5);
		G_B3_0 = L_2;
		goto IL_0022;
	}

IL_001c:
	{
		Material_t48 * L_3 = (__this->___mOriginal_6);
		G_B3_0 = L_3;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		Material_t48 * L_4 = V_0;
		bool L_5 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_4, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		Material_t48 * L_6 = V_0;
		NullCheck(L_6);
		Texture_t731 * L_7 = Material_GetTexture_m3436(L_6, (String_t*) &_stringLiteral849, /*hidden argument*/NULL);
		V_1 = L_7;
		Texture_t731 * L_8 = V_1;
		bool L_9 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_8, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		Material_t48 * L_10 = V_0;
		Vector2_t97  L_11 = (__this->___scrollPerSecond_3);
		float L_12 = Time_get_time_m2414(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t97  L_13 = Vector2_op_Multiply_m2586(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		Material_SetTextureOffset_m3437(L_10, (String_t*) &_stringLiteral849, L_13, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// ShowSliderValue
#include "AssemblyU2DCSharp_ShowSliderValue.h"
#ifndef _MSC_VER
#else
#endif
// ShowSliderValue
#include "AssemblyU2DCSharp_ShowSliderValueMethodDeclarations.h"



// System.Void ShowSliderValue::.ctor()
extern "C" void ShowSliderValue__ctor_m2391 (ShowSliderValue_t560 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShowSliderValue::UpdateLabel(System.Single)
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisText_t212_m2854_MethodInfo_var;
extern "C" void ShowSliderValue_UpdateLabel_m2392 (ShowSliderValue_t560 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Component_GetComponent_TisText_t212_m2854_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483744);
		s_Il2CppMethodIntialized = true;
	}
	Text_t212 * V_0 = {0};
	{
		Text_t212 * L_0 = Component_GetComponent_TisText_t212_m2854(__this, /*hidden argument*/Component_GetComponent_TisText_t212_m2854_MethodInfo_var);
		V_0 = L_0;
		Text_t212 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Text_t212 * L_3 = V_0;
		float L_4 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_RoundToInt_m2555(NULL /*static, unused*/, ((float)((float)L_4*(float)(100.0f))), /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m92(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral850, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_8);
	}

IL_0034:
	{
		return;
	}
}
// TiltWindow
#include "AssemblyU2DCSharp_TiltWindow.h"
#ifndef _MSC_VER
#else
#endif
// TiltWindow
#include "AssemblyU2DCSharp_TiltWindowMethodDeclarations.h"



// System.Void TiltWindow::.ctor()
extern "C" void TiltWindow__ctor_m2393 (TiltWindow_t561 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = {0};
		Vector2__ctor_m2417(&L_0, (5.0f), (3.0f), /*hidden argument*/NULL);
		__this->___range_2 = L_0;
		Vector2_t97  L_1 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mRot_5 = L_1;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TiltWindow::Start()
extern "C" void TiltWindow_Start_m2394 (TiltWindow_t561 * __this, const MethodInfo* method)
{
	{
		Transform_t54 * L_0 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		__this->___mTrans_3 = L_0;
		Transform_t54 * L_1 = (__this->___mTrans_3);
		NullCheck(L_1);
		Quaternion_t69  L_2 = Transform_get_localRotation_m2947(L_1, /*hidden argument*/NULL);
		__this->___mStart_4 = L_2;
		return;
	}
}
// System.Void TiltWindow::Update()
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern "C" void TiltWindow_Update_m2395 (TiltWindow_t561 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t53  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		Vector3_t53  L_0 = Input_get_mousePosition_m2964(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Screen_get_width_m2424(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)L_1))*(float)(0.5f)));
		int32_t L_2 = Screen_get_height_m2428(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)((float)(((float)L_2))*(float)(0.5f)));
		float L_3 = ((&V_0)->___x_1);
		float L_4 = V_1;
		float L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Clamp_m2467(NULL /*static, unused*/, ((float)((float)((float)((float)L_3-(float)L_4))/(float)L_5)), (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = ((&V_0)->___y_2);
		float L_8 = V_2;
		float L_9 = V_2;
		float L_10 = Mathf_Clamp_m2467(NULL /*static, unused*/, ((float)((float)((float)((float)L_7-(float)L_8))/(float)L_9)), (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_4 = L_10;
		Vector2_t97  L_11 = (__this->___mRot_5);
		float L_12 = V_3;
		float L_13 = V_4;
		Vector2_t97  L_14 = {0};
		Vector2__ctor_m2417(&L_14, L_12, L_13, /*hidden argument*/NULL);
		float L_15 = Time_get_deltaTime_m2446(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t97  L_16 = Vector2_Lerp_m3438(NULL /*static, unused*/, L_11, L_14, ((float)((float)L_15*(float)(5.0f))), /*hidden argument*/NULL);
		__this->___mRot_5 = L_16;
		Transform_t54 * L_17 = (__this->___mTrans_3);
		Quaternion_t69  L_18 = (__this->___mStart_4);
		Vector2_t97 * L_19 = &(__this->___mRot_5);
		float L_20 = (L_19->___y_2);
		Vector2_t97 * L_21 = &(__this->___range_2);
		float L_22 = (L_21->___y_2);
		Vector2_t97 * L_23 = &(__this->___mRot_5);
		float L_24 = (L_23->___x_1);
		Vector2_t97 * L_25 = &(__this->___range_2);
		float L_26 = (L_25->___x_1);
		Quaternion_t69  L_27 = Quaternion_Euler_m2469(NULL /*static, unused*/, ((float)((float)((-L_20))*(float)L_22)), ((float)((float)L_24*(float)L_26)), (0.0f), /*hidden argument*/NULL);
		Quaternion_t69  L_28 = Quaternion_op_Multiply_m2695(NULL /*static, unused*/, L_18, L_27, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localRotation_m2689(L_17, L_28, /*hidden argument*/NULL);
		return;
	}
}
// StartGame
#include "AssemblyU2DCSharp_StartGame.h"
#ifndef _MSC_VER
#else
#endif
// StartGame
#include "AssemblyU2DCSharp_StartGameMethodDeclarations.h"



// System.Void StartGame::.ctor()
extern "C" void StartGame__ctor_m2396 (StartGame_t562 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartGame::NextLevelButton(System.String)
extern "C" void StartGame_NextLevelButton_m2397 (StartGame_t562 * __this, String_t* ___levelName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___levelName;
		Application_LoadLevel_m2442(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// ParticlePlayground.OnPlaygroundParticle
#include "AssemblyU2DCSharp_ParticlePlayground_OnPlaygroundParticle.h"
#ifndef _MSC_VER
#else
#endif
// ParticlePlayground.OnPlaygroundParticle
#include "AssemblyU2DCSharp_ParticlePlayground_OnPlaygroundParticleMethodDeclarations.h"

// ParticlePlayground.PlaygroundEventParticle
#include "AssemblyU2DCSharp_ParticlePlayground_PlaygroundEventParticle.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void ParticlePlayground.OnPlaygroundParticle::.ctor(System.Object,System.IntPtr)
extern "C" void OnPlaygroundParticle__ctor_m2398 (OnPlaygroundParticle_t83 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void ParticlePlayground.OnPlaygroundParticle::Invoke(ParticlePlayground.PlaygroundEventParticle)
extern "C" void OnPlaygroundParticle_Invoke_m2399 (OnPlaygroundParticle_t83 * __this, PlaygroundEventParticle_t114 * ___particle, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		OnPlaygroundParticle_Invoke_m2399((OnPlaygroundParticle_t83 *)__this->___prev_9,___particle, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, PlaygroundEventParticle_t114 * ___particle, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___particle,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, PlaygroundEventParticle_t114 * ___particle, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___particle,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___particle,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_OnPlaygroundParticle_t83(Il2CppObject* delegate, PlaygroundEventParticle_t114 * ___particle)
{
	// Marshaling of parameter '___particle' to native representation
	PlaygroundEventParticle_t114 * ____particle_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'ParticlePlayground.PlaygroundEventParticle'."));
}
// System.IAsyncResult ParticlePlayground.OnPlaygroundParticle::BeginInvoke(ParticlePlayground.PlaygroundEventParticle,System.AsyncCallback,System.Object)
extern "C" Object_t * OnPlaygroundParticle_BeginInvoke_m2400 (OnPlaygroundParticle_t83 * __this, PlaygroundEventParticle_t114 * ___particle, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___particle;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void ParticlePlayground.OnPlaygroundParticle::EndInvoke(System.IAsyncResult)
extern "C" void OnPlaygroundParticle_EndInvoke_m2401 (OnPlaygroundParticle_t83 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SelectedUsabl.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_SelectedUsablMethodDeclarations.h"

// PixelCrushers.DialogueSystem.Usable
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_Usable.h"


// System.Void PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void SelectedUsableObjectDelegate__ctor_m2402 (SelectedUsableObjectDelegate_t304 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate::Invoke(PixelCrushers.DialogueSystem.Usable)
extern "C" void SelectedUsableObjectDelegate_Invoke_m2403 (SelectedUsableObjectDelegate_t304 * __this, Usable_t279 * ___usable, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SelectedUsableObjectDelegate_Invoke_m2403((SelectedUsableObjectDelegate_t304 *)__this->___prev_9,___usable, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Usable_t279 * ___usable, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___usable,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Usable_t279 * ___usable, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___usable,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___usable,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SelectedUsableObjectDelegate_t304(Il2CppObject* delegate, Usable_t279 * ___usable)
{
	// Marshaling of parameter '___usable' to native representation
	Usable_t279 * ____usable_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'PixelCrushers.DialogueSystem.Usable'."));
}
// System.IAsyncResult PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate::BeginInvoke(PixelCrushers.DialogueSystem.Usable,System.AsyncCallback,System.Object)
extern "C" Object_t * SelectedUsableObjectDelegate_BeginInvoke_m2404 (SelectedUsableObjectDelegate_t304 * __this, Usable_t279 * ___usable, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___usable;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SelectedUsableObjectDelegate_EndInvoke_m2405 (SelectedUsableObjectDelegate_t304 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_DeselectedUsa.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_DeselectedUsaMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void DeselectedUsableObjectDelegate__ctor_m2406 (DeselectedUsableObjectDelegate_t305 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate::Invoke(PixelCrushers.DialogueSystem.Usable)
extern "C" void DeselectedUsableObjectDelegate_Invoke_m2407 (DeselectedUsableObjectDelegate_t305 * __this, Usable_t279 * ___usable, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DeselectedUsableObjectDelegate_Invoke_m2407((DeselectedUsableObjectDelegate_t305 *)__this->___prev_9,___usable, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Usable_t279 * ___usable, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___usable,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Usable_t279 * ___usable, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___usable,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___usable,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_DeselectedUsableObjectDelegate_t305(Il2CppObject* delegate, Usable_t279 * ___usable)
{
	// Marshaling of parameter '___usable' to native representation
	Usable_t279 * ____usable_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'PixelCrushers.DialogueSystem.Usable'."));
}
// System.IAsyncResult PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate::BeginInvoke(PixelCrushers.DialogueSystem.Usable,System.AsyncCallback,System.Object)
extern "C" Object_t * DeselectedUsableObjectDelegate_BeginInvoke_m2408 (DeselectedUsableObjectDelegate_t305 * __this, Usable_t279 * ___usable, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___usable;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DeselectedUsableObjectDelegate_EndInvoke_m2409 (DeselectedUsableObjectDelegate_t305 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// <PrivateImplementationDetails>/$ArrayType$1024
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E_U24Arra.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$1024
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E_U24ArraMethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void U24ArrayTypeU241024_t563_marshal(const U24ArrayTypeU241024_t563& unmarshaled, U24ArrayTypeU241024_t563_marshaled& marshaled)
{
}
void U24ArrayTypeU241024_t563_marshal_back(const U24ArrayTypeU241024_t563_marshaled& marshaled, U24ArrayTypeU241024_t563& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void U24ArrayTypeU241024_t563_marshal_cleanup(U24ArrayTypeU241024_t563_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"



// System.Void <PrivateImplementationDetails>::.ctor()
extern "C" void U3CPrivateImplementationDetailsU3E__ctor_m2410 (U3CPrivateImplementationDetailsU3E_t564 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
