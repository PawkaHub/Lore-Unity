﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
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
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern TypeInfo* ArgumentCache_t4877_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m17943 (PersistentCall_t4881 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t4877_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8796);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t4877 * L_0 = (ArgumentCache_t4877 *)il2cpp_codegen_object_new (ArgumentCache_t4877_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m17926(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t642 * PersistentCall_get_target_m17944 (PersistentCall_t4881 * __this, const MethodInfo* method)
{
	{
		Object_t642 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m17945 (PersistentCall_t4881 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m17946 (PersistentCall_t4881 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t4877 * PersistentCall_get_arguments_m17947 (PersistentCall_t4881 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_t4877 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool PersistentCall_IsValid_m17948 (PersistentCall_t4881 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Object_t642 * L_0 = PersistentCall_get_target_m17944(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m2591(NULL /*static, unused*/, L_0, (Object_t642 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m17945(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern TypeInfo* CachedInvokableCall_1_t4940_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t4941_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t4942_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t4943_il2cpp_TypeInfo_var;
extern TypeInfo* InvokableCall_t4879_il2cpp_TypeInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m18065_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m18066_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m18067_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m18068_MethodInfo_var;
extern "C" BaseInvokableCall_t4878 * PersistentCall_GetRuntimeCall_m17949 (PersistentCall_t4881 * __this, UnityEventBase_t4886 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CachedInvokableCall_1_t4940_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8797);
		CachedInvokableCall_1_t4941_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8798);
		CachedInvokableCall_1_t4942_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8799);
		CachedInvokableCall_1_t4943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8800);
		InvokableCall_t4879_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8801);
		CachedInvokableCall_1__ctor_m18065_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485431);
		CachedInvokableCall_1__ctor_m18066_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485432);
		CachedInvokableCall_1__ctor_m18067_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485433);
		CachedInvokableCall_1__ctor_m18068_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485434);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityEventBase_t4886 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t4878 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t4886 * L_2 = ___theEvent;
		NullCheck(L_2);
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m17960(L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t4878 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->___m_Mode_2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		UnityEventBase_t4886 * L_7 = ___theEvent;
		Object_t642 * L_8 = PersistentCall_get_target_m17944(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_7);
		BaseInvokableCall_t4878 * L_10 = (BaseInvokableCall_t4878 *)VirtFuncInvoker2< BaseInvokableCall_t4878 *, Object_t *, MethodInfo_t * >::Invoke(7 /* UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo) */, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t642 * L_11 = PersistentCall_get_target_m17944(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t4877 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t4878 * L_14 = PersistentCall_GetObjectCall_m17950(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0072:
	{
		Object_t642 * L_15 = PersistentCall_get_target_m17944(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t4877 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		float L_18 = ArgumentCache_get_floatArgument_m17930(L_17, /*hidden argument*/NULL);
		CachedInvokableCall_1_t4940 * L_19 = (CachedInvokableCall_1_t4940 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t4940_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m18065(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m18065_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t642 * L_20 = PersistentCall_get_target_m17944(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t4877 * L_22 = (__this->___m_Arguments_3);
		NullCheck(L_22);
		int32_t L_23 = ArgumentCache_get_intArgument_m17929(L_22, /*hidden argument*/NULL);
		CachedInvokableCall_1_t4941 * L_24 = (CachedInvokableCall_1_t4941 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t4941_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m18066(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m18066_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t642 * L_25 = PersistentCall_get_target_m17944(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t4877 * L_27 = (__this->___m_Arguments_3);
		NullCheck(L_27);
		String_t* L_28 = ArgumentCache_get_stringArgument_m17931(L_27, /*hidden argument*/NULL);
		CachedInvokableCall_1_t4942 * L_29 = (CachedInvokableCall_1_t4942 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t4942_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m18067(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m18067_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t642 * L_30 = PersistentCall_get_target_m17944(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t4877 * L_32 = (__this->___m_Arguments_3);
		NullCheck(L_32);
		bool L_33 = ArgumentCache_get_boolArgument_m17932(L_32, /*hidden argument*/NULL);
		CachedInvokableCall_1_t4943 * L_34 = (CachedInvokableCall_1_t4943 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t4943_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m18068(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m18068_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t642 * L_35 = PersistentCall_get_target_m17944(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t4879 * L_37 = (InvokableCall_t4879 *)il2cpp_codegen_object_new (InvokableCall_t4879_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m17939(L_37, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t4878 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern const Il2CppType* Object_t642_0_0_0_var;
extern const Il2CppType* CachedInvokableCall_1_t4944_0_0_0_var;
extern const Il2CppType* MethodInfo_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t636_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* BaseInvokableCall_t4878_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t4878 * PersistentCall_GetObjectCall_m17950 (Object_t * __this /* static, unused */, Object_t642 * ___target, MethodInfo_t * ___method, ArgumentCache_t4877 * ___arguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t642_0_0_0_var = il2cpp_codegen_type_from_index(2118);
		CachedInvokableCall_1_t4944_0_0_0_var = il2cpp_codegen_type_from_index(8802);
		MethodInfo_t_0_0_0_var = il2cpp_codegen_type_from_index(204);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		TypeU5BU5D_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		BaseInvokableCall_t4878_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8803);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t1960 * V_3 = {0};
	Object_t642 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(Object_t642_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		ArgumentCache_t4877 * L_1 = ___arguments;
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m17928(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t4877 * L_4 = ___arguments;
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m17928(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetType_m18069(NULL /*static, unused*/, L_5, 0, /*hidden argument*/NULL);
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(Object_t642_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(CachedInvokableCall_1_t4944_0_0_0_var), /*hidden argument*/NULL);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t636* L_11 = ((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_12;
		NullCheck(L_10);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t636* >::Invoke(93 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t636* L_15 = ((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(Object_t642_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		TypeU5BU5D_t636* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(MethodInfo_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1)) = (Type_t *)L_18;
		TypeU5BU5D_t636* L_19 = L_17;
		Type_t * L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2)) = (Type_t *)L_20;
		NullCheck(L_14);
		ConstructorInfo_t1960 * L_21 = (ConstructorInfo_t1960 *)VirtFuncInvoker1< ConstructorInfo_t1960 *, TypeU5BU5D_t636* >::Invoke(81 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t4877 * L_22 = ___arguments;
		NullCheck(L_22);
		Object_t642 * L_23 = ArgumentCache_get_unityObjectArgument_m17927(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		Object_t642 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m2591(NULL /*static, unused*/, L_24, (Object_t642 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t642 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m3130(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t642 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t1960 * L_30 = V_3;
		ObjectU5BU5D_t21* L_31 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 3));
		Object_t642 * L_32 = ___target;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)L_32;
		ObjectU5BU5D_t21* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 1);
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1)) = (Object_t *)L_34;
		ObjectU5BU5D_t21* L_35 = L_33;
		Object_t642 * L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2)) = (Object_t *)L_36;
		NullCheck(L_30);
		Object_t * L_37 = ConstructorInfo_Invoke_m18050(L_30, L_35, /*hidden argument*/NULL);
		return ((BaseInvokableCall_t4878 *)IsInst(L_37, BaseInvokableCall_t4878_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_110.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_41.h"
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_110MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_41MethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"


// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern TypeInfo* List_1_t4882_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m18070_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m17951 (PersistentCallGroup_t4883 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t4882_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8805);
		List_1__ctor_m18070_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485435);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		List_1_t4882 * L_0 = (List_1_t4882 *)il2cpp_codegen_object_new (List_1_t4882_il2cpp_TypeInfo_var);
		List_1__ctor_m18070(L_0, /*hidden argument*/List_1__ctor_m18070_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern TypeInfo* Enumerator_t4945_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m18071_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m18072_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m18073_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m17952 (PersistentCallGroup_t4883 * __this, InvokableCallList_t4885 * ___invokableList, UnityEventBase_t4886 * ___unityEventBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t4945_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8806);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		List_1_GetEnumerator_m18071_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485436);
		Enumerator_get_Current_m18072_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485437);
		Enumerator_MoveNext_m18073_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485438);
		s_Il2CppMethodIntialized = true;
	}
	PersistentCall_t4881 * V_0 = {0};
	Enumerator_t4945  V_1 = {0};
	BaseInvokableCall_t4878 * V_2 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t4882 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t4945  L_1 = List_1_GetEnumerator_m18071(L_0, /*hidden argument*/List_1_GetEnumerator_m18071_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t4881 * L_2 = Enumerator_get_Current_m18072((&V_1), /*hidden argument*/Enumerator_get_Current_m18072_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t4881 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = PersistentCall_IsValid_m17948(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			PersistentCall_t4881 * L_5 = V_0;
			UnityEventBase_t4886 * L_6 = ___unityEventBase;
			NullCheck(L_5);
			BaseInvokableCall_t4878 * L_7 = PersistentCall_GetRuntimeCall_m17949(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			BaseInvokableCall_t4878 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t4885 * L_9 = ___invokableList;
			BaseInvokableCall_t4878 * L_10 = V_2;
			NullCheck(L_9);
			InvokableCallList_AddPersistentInvokableCall_m17954(L_9, L_10, /*hidden argument*/NULL);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m18073((&V_1), /*hidden argument*/Enumerator_MoveNext_m18073_MethodInfo_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t4945  L_12 = V_1;
		Enumerator_t4945  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t4945_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_005b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_111.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_16.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_111MethodDeclarations.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_16MethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern TypeInfo* List_1_t4884_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m18074_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m17953 (InvokableCallList_t4885 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t4884_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8807);
		List_1__ctor_m18074_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485439);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t4884 * L_0 = (List_1_t4884 *)il2cpp_codegen_object_new (List_1_t4884_il2cpp_TypeInfo_var);
		List_1__ctor_m18074(L_0, /*hidden argument*/List_1__ctor_m18074_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t4884 * L_1 = (List_1_t4884 *)il2cpp_codegen_object_new (List_1_t4884_il2cpp_TypeInfo_var);
		List_1__ctor_m18074(L_1, /*hidden argument*/List_1__ctor_m18074_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t4884 * L_2 = (List_1_t4884 *)il2cpp_codegen_object_new (List_1_t4884_il2cpp_TypeInfo_var);
		List_1__ctor_m18074(L_2, /*hidden argument*/List_1__ctor_m18074_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m17954 (InvokableCallList_t4885 * __this, BaseInvokableCall_t4878 * ___call, const MethodInfo* method)
{
	{
		List_1_t4884 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t4878 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t4878 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m17955 (InvokableCallList_t4885 * __this, BaseInvokableCall_t4878 * ___call, const MethodInfo* method)
{
	{
		List_1_t4884 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t4878 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t4878 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* List_1_t4884_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t4946_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m18074_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m18075_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAll_m18076_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m17956 (InvokableCallList_t4885 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t4884_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8807);
		Predicate_1_t4946_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8808);
		List_1__ctor_m18074_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485439);
		Predicate_1__ctor_m18075_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485440);
		List_1_RemoveAll_m18076_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485441);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t4884 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t4884 * L_0 = (List_1_t4884 *)il2cpp_codegen_object_new (List_1_t4884_il2cpp_TypeInfo_var);
		List_1__ctor_m18074(L_0, /*hidden argument*/List_1__ctor_m18074_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t4884 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_t4878 * L_3 = (BaseInvokableCall_t4878 *)VirtFuncInvoker1< BaseInvokableCall_t4878 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_1, L_2);
		Object_t * L_4 = ___targetObj;
		MethodInfo_t * L_5 = ___method;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t * >::Invoke(5 /* System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo) */, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t4884 * L_7 = V_0;
		List_1_t4884 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BaseInvokableCall_t4878 * L_10 = (BaseInvokableCall_t4878 *)VirtFuncInvoker1< BaseInvokableCall_t4878 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_8, L_9);
		NullCheck(L_7);
		VirtActionInvoker1< BaseInvokableCall_t4878 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t4884 * L_13 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t4884 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t4884 * L_16 = V_0;
		List_1_t4884 * L_17 = L_16;
		IntPtr_t L_18 = { (void*)GetVirtualMethodInfo(L_17, 24) };
		Predicate_1_t4946 * L_19 = (Predicate_1_t4946 *)il2cpp_codegen_object_new (Predicate_1_t4946_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m18075(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m18075_MethodInfo_var);
		NullCheck(L_15);
		List_1_RemoveAll_m18076(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m18076_MethodInfo_var);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m17957 (InvokableCallList_t4885 * __this, const MethodInfo* method)
{
	{
		List_1_t4884 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern const MethodInfo* List_1_AddRange_m18077_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m17958 (InvokableCallList_t4885 * __this, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m18077_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485442);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t4884 * L_0 = (__this->___m_ExecutingCalls_2);
		List_1_t4884 * L_1 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		List_1_AddRange_m18077(L_0, L_1, /*hidden argument*/List_1_AddRange_m18077_MethodInfo_var);
		List_1_t4884 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t4884 * L_3 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_2);
		List_1_AddRange_m18077(L_2, L_3, /*hidden argument*/List_1_AddRange_m18077_MethodInfo_var);
		V_0 = 0;
		goto IL_003f;
	}

IL_0029:
	{
		List_1_t4884 * L_4 = (__this->___m_ExecutingCalls_2);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BaseInvokableCall_t4878 * L_6 = (BaseInvokableCall_t4878 *)VirtFuncInvoker1< BaseInvokableCall_t4878 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_4, L_5);
		ObjectU5BU5D_t21* L_7 = ___parameters;
		NullCheck(L_6);
		VirtActionInvoker1< ObjectU5BU5D_t21* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		List_1_t4884 * L_10 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0029;
		}
	}
	{
		List_1_t4884 * L_12 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_12);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"


// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern TypeInfo* InvokableCallList_t4885_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t4883_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m17959 (UnityEventBase_t4886 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t4885_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8809);
		PersistentCallGroup_t4883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8810);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		InvokableCallList_t4885 * L_0 = (InvokableCallList_t4885 *)il2cpp_codegen_object_new (InvokableCallList_t4885_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m17953(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t4883 * L_1 = (PersistentCallGroup_t4883 *)il2cpp_codegen_object_new (PersistentCallGroup_t4883_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m17951(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m3130(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m4060 (UnityEventBase_t4886 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m4061 (UnityEventBase_t4886 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m17962(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m3130(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern const Il2CppType* Object_t642_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m17960 (UnityEventBase_t4886 * __this, PersistentCall_t4881 * ___call, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t642_0_0_0_var = il2cpp_codegen_type_from_index(2118);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(Object_t642_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		PersistentCall_t4881 * L_1 = ___call;
		NullCheck(L_1);
		ArgumentCache_t4877 * L_2 = PersistentCall_get_arguments_m17947(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m17928(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t4881 * L_5 = ___call;
		NullCheck(L_5);
		ArgumentCache_t4877 * L_6 = PersistentCall_get_arguments_m17947(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m17928(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetType_m18069(NULL /*static, unused*/, L_7, 0, /*hidden argument*/NULL);
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(Object_t642_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t4881 * L_11 = ___call;
		NullCheck(L_11);
		String_t* L_12 = PersistentCall_get_methodName_m17945(L_11, /*hidden argument*/NULL);
		PersistentCall_t4881 * L_13 = ___call;
		NullCheck(L_13);
		Object_t642 * L_14 = PersistentCall_get_target_m17944(L_13, /*hidden argument*/NULL);
		PersistentCall_t4881 * L_15 = ___call;
		NullCheck(L_15);
		int32_t L_16 = PersistentCall_get_mode_m17946(L_15, /*hidden argument*/NULL);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m17961(__this, L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern const Il2CppType* Single_t662_0_0_0_var;
extern const Il2CppType* Int32_t29_0_0_0_var;
extern const Il2CppType* Boolean_t30_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Object_t642_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t636_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m17961 (UnityEventBase_t4886 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t662_0_0_0_var = il2cpp_codegen_type_from_index(135);
		Int32_t29_0_0_0_var = il2cpp_codegen_type_from_index(14);
		Boolean_t30_0_0_0_var = il2cpp_codegen_type_from_index(15);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(1);
		Object_t642_0_0_0_var = il2cpp_codegen_type_from_index(2118);
		TypeU5BU5D_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t636* G_B10_2 = {0};
	TypeU5BU5D_t636* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t636* G_B9_2 = {0};
	TypeU5BU5D_t636* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		int32_t L_0 = ___mode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___listener;
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, Object_t * >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object) */, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		Object_t * L_5 = ___listener;
		String_t* L_6 = ___name;
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m17967(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t636* L_10 = ((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(Single_t662_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0)) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m17967(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t636* L_15 = ((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(Int32_t29_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m17967(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t636* L_20 = ((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(Boolean_t30_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0)) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m17967(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t636* L_25 = ((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0)) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m17967(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t636* L_30 = ((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 1));
		Type_t * L_31 = ___argumentType;
		Type_t * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(Object_t642_0_0_0_var), /*hidden argument*/NULL);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1)) = (Type_t *)G_B10_0;
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m17967(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/NULL);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m17962 (UnityEventBase_t4886 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t4885 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m17957(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m17963 (UnityEventBase_t4886 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t4883 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t4885 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m17952(L_1, L_2, __this, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void UnityEventBase_AddCall_m17964 (UnityEventBase_t4886 * __this, BaseInvokableCall_t4878 * ___call, const MethodInfo* method)
{
	{
		InvokableCallList_t4885 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t4878 * L_1 = ___call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m17955(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void UnityEventBase_RemoveListener_m17965 (UnityEventBase_t4886 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	{
		InvokableCallList_t4885 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m17956(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern "C" void UnityEventBase_Invoke_m17966 (UnityEventBase_t4886 * __this, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m17963(__this, /*hidden argument*/NULL);
		InvokableCallList_t4885 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t21* L_1 = ___parameters;
		NullCheck(L_0);
		InvokableCallList_Invoke_m17958(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UnityEventBase_ToString_m4059 (UnityEventBase_t4886 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m129(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m3130(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m103(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral68, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m17967 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t636* ___argumentTypes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t635* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t762 * V_5 = {0};
	ParameterInfoU5BU5D_t635* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m3130(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t636* L_4 = ___argumentTypes;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t4167 *, TypeU5BU5D_t636*, ParameterModifierU5BU5D_t3948* >::Invoke(57 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_2, L_3, ((int32_t)52), (Binder_t4167 *)NULL, L_4, (ParameterModifierU5BU5D_t3948*)(ParameterModifierU5BU5D_t3948*)NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t635* L_8 = (ParameterInfoU5BU5D_t635*)VirtFuncInvoker0< ParameterInfoU5BU5D_t635* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t635* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t635* L_10 = V_6;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t762 **)(ParameterInfo_t762 **)SZArrayLdElema(L_10, L_12));
		TypeU5BU5D_t636* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15));
		ParameterInfo_t762 * L_16 = V_5;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
		V_9 = L_17;
		Type_t * L_18 = V_8;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, L_18);
		Type_t * L_20 = V_9;
		NullCheck(L_20);
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		ParameterInfoU5BU5D_t635* L_26 = V_6;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		Type_t * L_29 = V_0;
		NullCheck(L_29);
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t *)NULL;
	}
}
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"

// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m2998 (UnityEvent_t241 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m17959(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C" void UnityEvent_AddListener_m3068 (UnityEvent_t241 * __this, UnityAction_t702 * ___call, const MethodInfo* method)
{
	{
		UnityAction_t702 * L_0 = ___call;
		BaseInvokableCall_t4878 * L_1 = UnityEvent_GetDelegate_m17968(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityEventBase_AddCall_m17964(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
extern "C" void UnityEvent_RemoveListener_m3067 (UnityEvent_t241 * __this, UnityAction_t702 * ___call, const MethodInfo* method)
{
	{
		UnityAction_t702 * L_0 = ___call;
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m18063(L_0, /*hidden argument*/NULL);
		UnityAction_t702 * L_2 = ___call;
		NullCheck(L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m18062(L_2, /*hidden argument*/NULL);
		UnityEventBase_RemoveListener_m17965(__this, L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t636_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m5638 (UnityEvent_t241 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m17967(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* InvokableCall_t4879_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t4878 * UnityEvent_GetDelegate_m5639 (UnityEvent_t241 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t4879_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8801);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t4879 * L_2 = (InvokableCall_t4879 *)il2cpp_codegen_object_new (InvokableCall_t4879_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m17939(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
extern TypeInfo* InvokableCall_t4879_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t4878 * UnityEvent_GetDelegate_m17968 (Object_t * __this /* static, unused */, UnityAction_t702 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t4879_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8801);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAction_t702 * L_0 = ___action;
		InvokableCall_t4879 * L_1 = (InvokableCall_t4879 *)il2cpp_codegen_object_new (InvokableCall_t4879_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m17940(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" void UnityEvent_Invoke_m3012 (UnityEvent_t241 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t21* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m17966(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialog.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialogMethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"


// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
extern "C" void UserAuthorizationDialog__ctor_m17969 (UserAuthorizationDialog_t4887 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2585(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::Start()
extern "C" void UserAuthorizationDialog_Start_m17970 (UserAuthorizationDialog_t4887 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
extern "C" void UserAuthorizationDialog_OnGUI_m17971 (UserAuthorizationDialog_t4887 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
extern "C" void UserAuthorizationDialog_DoUserAuthorizationDialog_m17972 (UserAuthorizationDialog_t4887 * __this, int32_t ___windowID, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m17973 (DefaultValueAttribute_t4888 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m17974 (DefaultValueAttribute_t4888 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern TypeInfo* DefaultValueAttribute_t4888_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m17975 (DefaultValueAttribute_t4888 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t4888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8811);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t4888 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t4888 *)IsInst(L_0, DefaultValueAttribute_t4888_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t4888 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t4888 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m17974(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t4888 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m17974(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m17976 (DefaultValueAttribute_t4888 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m3961(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"



// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern "C" void ExcludeFromDocsAttribute__ctor_m17977 (ExcludeFromDocsAttribute_t4889 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"



// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C" void FormerlySerializedAsAttribute__ctor_m3885 (FormerlySerializedAsAttribute_t836 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"



// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"

// System.Enum
#include "mscorlib_System_Enum.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t4890_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m17978 (TypeInferenceRuleAttribute_t4891 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t4890_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8812);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t4890_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m17979(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m17979 (TypeInferenceRuleAttribute_t4891 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m3241(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m17980 (TypeInferenceRuleAttribute_t4891 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"

// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"


// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" void GenericStack__ctor_m17981 (GenericStack_t4707 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m13232(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction__ctor_m3066 (UnityAction_t702 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m17982 (UnityAction_t702 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m17982((UnityAction_t702 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityAction_t702(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_BeginInvoke_m17983 (UnityAction_t702 * __this, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_EndInvoke_m17984 (UnityAction_t702 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
