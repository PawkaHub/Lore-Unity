#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent/SetAnimationAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetAnimationOnDi.h"
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
// PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent/SetAnimationAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetAnimationOnDiMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// PixelCrushers.DialogueSystem.ActOnDialogueEvent/Action
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEveMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent/SetAnimationAction::.ctor()
extern "C" void SetAnimationAction__ctor_m6499 (SetAnimationAction_t1294 * __this, const MethodInfo* method)
{
	{
		Action__ctor_m6463(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetAnimationOnDi_0.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetAnimationOnDi_0MethodDeclarations.h"

#include "DialogueSystem_ArrayTypes.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// PixelCrushers.DialogueSystem.ActOnDialogueEvent/Action
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve.h"
// PixelCrushers.DialogueSystem.Condition
#include "DialogueSystem_PixelCrushers_DialogueSystem_Condition.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_Animation.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.AnimationClip
#include "UnityEngine_UnityEngine_AnimationClip.h"
// PixelCrushers.DialogueSystem.ActOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_ActOnDialogueEve_0MethodDeclarations.h"
// PixelCrushers.DialogueSystem.Condition
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConditionMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// PixelCrushers.DialogueSystem.Tools
#include "DialogueSystem_PixelCrushers_DialogueSystem_ToolsMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// PixelCrushers.DialogueSystem.DialogueDebug
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueDebugMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_AnimationMethodDeclarations.h"
struct Component_t462;
struct Animation_t298;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t462;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" Object_t * Component_GetComponentInChildren_TisObject_t_m2599_gshared (Component_t462 * __this, const MethodInfo* method);
#define Component_GetComponentInChildren_TisObject_t_m2599(__this, method) (( Object_t * (*) (Component_t462 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m2599_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Animation>()
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Animation>()
#define Component_GetComponentInChildren_TisAnimation_t298_m7396(__this, method) (( Animation_t298 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m2599_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::.ctor()
extern TypeInfo* SetAnimationActionU5BU5D_t1295_il2cpp_TypeInfo_var;
extern "C" void SetAnimationOnDialogueEvent__ctor_m6500 (SetAnimationOnDialogueEvent_t1296 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SetAnimationActionU5BU5D_t1295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2533);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___onStart_5 = ((SetAnimationActionU5BU5D_t1295*)SZArrayNew(SetAnimationActionU5BU5D_t1295_il2cpp_TypeInfo_var, 0));
		__this->___onEnd_6 = ((SetAnimationActionU5BU5D_t1295*)SZArrayNew(SetAnimationActionU5BU5D_t1295_il2cpp_TypeInfo_var, 0));
		ActOnDialogueEvent__ctor_m6464(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetAnimationOnDialogueEvent_TryStartActions_m6501 (SetAnimationOnDialogueEvent_t1296 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		SetAnimationActionU5BU5D_t1295* L_0 = (__this->___onStart_5);
		Transform_t54 * L_1 = ___actor;
		SetAnimationOnDialogueEvent_TryActions_m6503(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetAnimationOnDialogueEvent_TryEndActions_m6502 (SetAnimationOnDialogueEvent_t1296 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		SetAnimationActionU5BU5D_t1295* L_0 = (__this->___onEnd_6);
		Transform_t54 * L_1 = ___actor;
		SetAnimationOnDialogueEvent_TryActions_m6503(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent/SetAnimationAction[],UnityEngine.Transform)
extern "C" void SetAnimationOnDialogueEvent_TryActions_m6503 (SetAnimationOnDialogueEvent_t1296 * __this, SetAnimationActionU5BU5D_t1295* ___actions, Transform_t54 * ___actor, const MethodInfo* method)
{
	SetAnimationAction_t1294 * V_0 = {0};
	SetAnimationActionU5BU5D_t1295* V_1 = {0};
	int32_t V_2 = 0;
	{
		SetAnimationActionU5BU5D_t1295* L_0 = ___actions;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		SetAnimationActionU5BU5D_t1295* L_1 = ___actions;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0042;
	}

IL_0010:
	{
		SetAnimationActionU5BU5D_t1295* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(SetAnimationAction_t1294 **)(SetAnimationAction_t1294 **)SZArrayLdElema(L_2, L_4));
		SetAnimationAction_t1294 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		SetAnimationAction_t1294 * L_6 = V_0;
		NullCheck(L_6);
		Condition_t203 * L_7 = (((Action_t1279 *)L_6)->___condition_0);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		SetAnimationAction_t1294 * L_8 = V_0;
		NullCheck(L_8);
		Condition_t203 * L_9 = (((Action_t1279 *)L_8)->___condition_0);
		Transform_t54 * L_10 = ___actor;
		NullCheck(L_9);
		bool L_11 = Condition_IsTrue_m2741(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		SetAnimationAction_t1294 * L_12 = V_0;
		Transform_t54 * L_13 = ___actor;
		SetAnimationOnDialogueEvent_DoAction_m6504(__this, L_12, L_13, /*hidden argument*/NULL);
	}

IL_003e:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_15 = V_2;
		SetAnimationActionU5BU5D_t1295* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent/SetAnimationAction,UnityEngine.Transform)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisAnimation_t298_m7396_MethodInfo_var;
extern "C" void SetAnimationOnDialogueEvent_DoAction_m6504 (SetAnimationOnDialogueEvent_t1296 * __this, SetAnimationAction_t1294 * ___action, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Component_GetComponentInChildren_TisAnimation_t298_m7396_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484427);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t54 * V_0 = {0};
	Animation_t298 * V_1 = {0};
	{
		SetAnimationAction_t1294 * L_0 = ___action;
		if (!L_0)
		{
			goto IL_00b6;
		}
	}
	{
		TransformU5BU5D_t95* L_1 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		SetAnimationAction_t1294 * L_2 = ___action;
		NullCheck(L_2);
		Transform_t54 * L_3 = (L_2->___target_1);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_1, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_1;
		Transform_t54 * L_5 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_6 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_6;
		Transform_t54 * L_7 = V_0;
		NullCheck(L_7);
		Animation_t298 * L_8 = Component_GetComponentInChildren_TisAnimation_t298_m7396(L_7, /*hidden argument*/Component_GetComponentInChildren_TisAnimation_t298_m7396_MethodInfo_var);
		V_1 = L_8;
		Animation_t298 * L_9 = V_1;
		bool L_10 = Object_op_Equality_m2464(NULL /*static, unused*/, L_9, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_11 = DialogueDebug_get_LogWarnings_m2766(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		ObjectU5BU5D_t21* L_12 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_13 = L_12;
		Transform_t54 * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = Object_get_name_m2484(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1)) = (Object_t *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1378, L_13, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
	}

IL_0067:
	{
		goto IL_00b6;
	}

IL_006c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_17 = DialogueDebug_get_LogInfo_m2769(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00a5;
		}
	}
	{
		ObjectU5BU5D_t21* L_18 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 3));
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		ArrayElementTypeCheck (L_18, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_19 = L_18;
		Transform_t54 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = Object_get_name_m2484(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 1);
		ArrayElementTypeCheck (L_19, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 1)) = (Object_t *)L_21;
		ObjectU5BU5D_t21* L_22 = L_19;
		SetAnimationAction_t1294 * L_23 = ___action;
		NullCheck(L_23);
		AnimationClip_t296 * L_24 = (L_23->___animationClip_2);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 2);
		ArrayElementTypeCheck (L_22, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_22, 2)) = (Object_t *)L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1379, L_22, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		Animation_t298 * L_26 = V_1;
		SetAnimationAction_t1294 * L_27 = ___action;
		NullCheck(L_27);
		AnimationClip_t296 * L_28 = (L_27->___animationClip_2);
		NullCheck(L_28);
		String_t* L_29 = Object_get_name_m2484(L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		Animation_CrossFade_m2960(L_26, L_29, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetAnimatorState.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetAnimatorStateMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"


// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction::.ctor()
extern "C" void SetAnimatorStateAction__ctor_m6505 (SetAnimatorStateAction_t1297 * __this, const MethodInfo* method)
{
	{
		__this->___crossFadeDuration_3 = (0.3f);
		Action__ctor_m6463(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetAnimatorState_0.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetAnimatorState_0MethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
struct Component_t462;
struct Animator_t214;
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
#define Component_GetComponentInChildren_TisAnimator_t214_m2776(__this, method) (( Animator_t214 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m2599_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::.ctor()
extern TypeInfo* SetAnimatorStateActionU5BU5D_t1298_il2cpp_TypeInfo_var;
extern "C" void SetAnimatorStateOnDialogueEvent__ctor_m6506 (SetAnimatorStateOnDialogueEvent_t1299 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SetAnimatorStateActionU5BU5D_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2535);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___onStart_5 = ((SetAnimatorStateActionU5BU5D_t1298*)SZArrayNew(SetAnimatorStateActionU5BU5D_t1298_il2cpp_TypeInfo_var, 0));
		__this->___onEnd_6 = ((SetAnimatorStateActionU5BU5D_t1298*)SZArrayNew(SetAnimatorStateActionU5BU5D_t1298_il2cpp_TypeInfo_var, 0));
		ActOnDialogueEvent__ctor_m6464(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetAnimatorStateOnDialogueEvent_TryStartActions_m6507 (SetAnimatorStateOnDialogueEvent_t1299 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		SetAnimatorStateActionU5BU5D_t1298* L_0 = (__this->___onStart_5);
		Transform_t54 * L_1 = ___actor;
		SetAnimatorStateOnDialogueEvent_TryActions_m6509(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetAnimatorStateOnDialogueEvent_TryEndActions_m6508 (SetAnimatorStateOnDialogueEvent_t1299 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		SetAnimatorStateActionU5BU5D_t1298* L_0 = (__this->___onEnd_6);
		Transform_t54 * L_1 = ___actor;
		SetAnimatorStateOnDialogueEvent_TryActions_m6509(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction[],UnityEngine.Transform)
extern "C" void SetAnimatorStateOnDialogueEvent_TryActions_m6509 (SetAnimatorStateOnDialogueEvent_t1299 * __this, SetAnimatorStateActionU5BU5D_t1298* ___actions, Transform_t54 * ___actor, const MethodInfo* method)
{
	SetAnimatorStateAction_t1297 * V_0 = {0};
	SetAnimatorStateActionU5BU5D_t1298* V_1 = {0};
	int32_t V_2 = 0;
	{
		SetAnimatorStateActionU5BU5D_t1298* L_0 = ___actions;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		SetAnimatorStateActionU5BU5D_t1298* L_1 = ___actions;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0042;
	}

IL_0010:
	{
		SetAnimatorStateActionU5BU5D_t1298* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(SetAnimatorStateAction_t1297 **)(SetAnimatorStateAction_t1297 **)SZArrayLdElema(L_2, L_4));
		SetAnimatorStateAction_t1297 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		SetAnimatorStateAction_t1297 * L_6 = V_0;
		NullCheck(L_6);
		Condition_t203 * L_7 = (((Action_t1279 *)L_6)->___condition_0);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		SetAnimatorStateAction_t1297 * L_8 = V_0;
		NullCheck(L_8);
		Condition_t203 * L_9 = (((Action_t1279 *)L_8)->___condition_0);
		Transform_t54 * L_10 = ___actor;
		NullCheck(L_9);
		bool L_11 = Condition_IsTrue_m2741(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		SetAnimatorStateAction_t1297 * L_12 = V_0;
		Transform_t54 * L_13 = ___actor;
		SetAnimatorStateOnDialogueEvent_DoAction_m6510(__this, L_12, L_13, /*hidden argument*/NULL);
	}

IL_003e:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_15 = V_2;
		SetAnimatorStateActionU5BU5D_t1298* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction,UnityEngine.Transform)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisAnimator_t214_m2776_MethodInfo_var;
extern "C" void SetAnimatorStateOnDialogueEvent_DoAction_m6510 (SetAnimatorStateOnDialogueEvent_t1299 * __this, SetAnimatorStateAction_t1297 * ___action, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Component_GetComponentInChildren_TisAnimator_t214_m2776_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483732);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t54 * V_0 = {0};
	Animator_t214 * V_1 = {0};
	{
		SetAnimatorStateAction_t1297 * L_0 = ___action;
		if (!L_0)
		{
			goto IL_00b7;
		}
	}
	{
		TransformU5BU5D_t95* L_1 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		SetAnimatorStateAction_t1297 * L_2 = ___action;
		NullCheck(L_2);
		Transform_t54 * L_3 = (L_2->___target_1);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_1, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_1;
		Transform_t54 * L_5 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_6 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_6;
		Transform_t54 * L_7 = V_0;
		NullCheck(L_7);
		Animator_t214 * L_8 = Component_GetComponentInChildren_TisAnimator_t214_m2776(L_7, /*hidden argument*/Component_GetComponentInChildren_TisAnimator_t214_m2776_MethodInfo_var);
		V_1 = L_8;
		Animator_t214 * L_9 = V_1;
		bool L_10 = Object_op_Equality_m2464(NULL /*static, unused*/, L_9, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_11 = DialogueDebug_get_LogWarnings_m2766(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		ObjectU5BU5D_t21* L_12 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_13 = L_12;
		Transform_t54 * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = Object_get_name_m2484(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1)) = (Object_t *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1380, L_13, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
	}

IL_0067:
	{
		goto IL_00b7;
	}

IL_006c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_17 = DialogueDebug_get_LogInfo_m2769(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00a5;
		}
	}
	{
		ObjectU5BU5D_t21* L_18 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 3));
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		ArrayElementTypeCheck (L_18, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_19 = L_18;
		Transform_t54 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = Object_get_name_m2484(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 1);
		ArrayElementTypeCheck (L_19, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 1)) = (Object_t *)L_21;
		ObjectU5BU5D_t21* L_22 = L_19;
		SetAnimatorStateAction_t1297 * L_23 = ___action;
		NullCheck(L_23);
		String_t* L_24 = (L_23->___stateName_2);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 2);
		ArrayElementTypeCheck (L_22, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_22, 2)) = (Object_t *)L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1381, L_22, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		Animator_t214 * L_26 = V_1;
		SetAnimatorStateAction_t1297 * L_27 = ___action;
		NullCheck(L_27);
		String_t* L_28 = (L_27->___stateName_2);
		SetAnimatorStateAction_t1297 * L_29 = ___action;
		NullCheck(L_29);
		float L_30 = (L_29->___crossFadeDuration_3);
		NullCheck(L_26);
		Animator_CrossFade_m7397(L_26, L_28, L_30, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetComponentEnab.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetComponentEnabMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction::.ctor()
extern "C" void SetComponentEnabledAction__ctor_m6511 (SetComponentEnabledAction_t1300 * __this, const MethodInfo* method)
{
	{
		Action__ctor_m6463(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetComponentEnab_0.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetComponentEnab_0MethodDeclarations.h"

// PixelCrushers.DialogueSystem.Toggle
#include "DialogueSystem_PixelCrushers_DialogueSystem_Toggle.h"


// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::.ctor()
extern TypeInfo* SetComponentEnabledActionU5BU5D_t1301_il2cpp_TypeInfo_var;
extern "C" void SetComponentEnabledOnDialogueEvent__ctor_m6512 (SetComponentEnabledOnDialogueEvent_t1302 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SetComponentEnabledActionU5BU5D_t1301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2537);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___onStart_5 = ((SetComponentEnabledActionU5BU5D_t1301*)SZArrayNew(SetComponentEnabledActionU5BU5D_t1301_il2cpp_TypeInfo_var, 0));
		__this->___onEnd_6 = ((SetComponentEnabledActionU5BU5D_t1301*)SZArrayNew(SetComponentEnabledActionU5BU5D_t1301_il2cpp_TypeInfo_var, 0));
		ActOnDialogueEvent__ctor_m6464(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetComponentEnabledOnDialogueEvent_TryStartActions_m6513 (SetComponentEnabledOnDialogueEvent_t1302 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		SetComponentEnabledActionU5BU5D_t1301* L_0 = (__this->___onStart_5);
		Transform_t54 * L_1 = ___actor;
		SetComponentEnabledOnDialogueEvent_TryActions_m6515(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetComponentEnabledOnDialogueEvent_TryEndActions_m6514 (SetComponentEnabledOnDialogueEvent_t1302 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		SetComponentEnabledActionU5BU5D_t1301* L_0 = (__this->___onEnd_6);
		Transform_t54 * L_1 = ___actor;
		SetComponentEnabledOnDialogueEvent_TryActions_m6515(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction[],UnityEngine.Transform)
extern "C" void SetComponentEnabledOnDialogueEvent_TryActions_m6515 (SetComponentEnabledOnDialogueEvent_t1302 * __this, SetComponentEnabledActionU5BU5D_t1301* ___actions, Transform_t54 * ___actor, const MethodInfo* method)
{
	SetComponentEnabledAction_t1300 * V_0 = {0};
	SetComponentEnabledActionU5BU5D_t1301* V_1 = {0};
	int32_t V_2 = 0;
	{
		SetComponentEnabledActionU5BU5D_t1301* L_0 = ___actions;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		SetComponentEnabledActionU5BU5D_t1301* L_1 = ___actions;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0042;
	}

IL_0010:
	{
		SetComponentEnabledActionU5BU5D_t1301* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(SetComponentEnabledAction_t1300 **)(SetComponentEnabledAction_t1300 **)SZArrayLdElema(L_2, L_4));
		SetComponentEnabledAction_t1300 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		SetComponentEnabledAction_t1300 * L_6 = V_0;
		NullCheck(L_6);
		Condition_t203 * L_7 = (((Action_t1279 *)L_6)->___condition_0);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		SetComponentEnabledAction_t1300 * L_8 = V_0;
		NullCheck(L_8);
		Condition_t203 * L_9 = (((Action_t1279 *)L_8)->___condition_0);
		Transform_t54 * L_10 = ___actor;
		NullCheck(L_9);
		bool L_11 = Condition_IsTrue_m2741(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		SetComponentEnabledAction_t1300 * L_12 = V_0;
		Transform_t54 * L_13 = ___actor;
		SetComponentEnabledOnDialogueEvent_DoAction_m6516(__this, L_12, L_13, /*hidden argument*/NULL);
	}

IL_003e:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_15 = V_2;
		SetComponentEnabledActionU5BU5D_t1301* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction,UnityEngine.Transform)
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void SetComponentEnabledOnDialogueEvent_DoAction_m6516 (SetComponentEnabledOnDialogueEvent_t1302 * __this, SetComponentEnabledAction_t1300 * ___action, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		SetComponentEnabledAction_t1300 * L_0 = ___action;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		SetComponentEnabledAction_t1300 * L_1 = ___action;
		NullCheck(L_1);
		Component_t462 * L_2 = (L_1->___target_1);
		bool L_3 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		SetComponentEnabledAction_t1300 * L_4 = ___action;
		NullCheck(L_4);
		Component_t462 * L_5 = (L_4->___target_1);
		SetComponentEnabledAction_t1300 * L_6 = ___action;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___state_2);
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Tools_SetComponentEnabled_m6268(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetEnabledOnDial.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetEnabledOnDialMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction::.ctor()
extern "C" void SetEnabledAction__ctor_m6517 (SetEnabledAction_t1303 * __this, const MethodInfo* method)
{
	{
		Action__ctor_m6463(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetEnabledOnDial_0.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetEnabledOnDial_0MethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// PixelCrushers.DialogueSystem.ToggleTools
#include "DialogueSystem_PixelCrushers_DialogueSystem_ToggleToolsMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::.ctor()
extern TypeInfo* SetEnabledActionU5BU5D_t1304_il2cpp_TypeInfo_var;
extern "C" void SetEnabledOnDialogueEvent__ctor_m6518 (SetEnabledOnDialogueEvent_t1305 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SetEnabledActionU5BU5D_t1304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2539);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___onStart_5 = ((SetEnabledActionU5BU5D_t1304*)SZArrayNew(SetEnabledActionU5BU5D_t1304_il2cpp_TypeInfo_var, 0));
		__this->___onEnd_6 = ((SetEnabledActionU5BU5D_t1304*)SZArrayNew(SetEnabledActionU5BU5D_t1304_il2cpp_TypeInfo_var, 0));
		ActOnDialogueEvent__ctor_m6464(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_TryStartActions_m6519 (SetEnabledOnDialogueEvent_t1305 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		SetEnabledActionU5BU5D_t1304* L_0 = (__this->___onStart_5);
		Transform_t54 * L_1 = ___actor;
		SetEnabledOnDialogueEvent_TryActions_m6521(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_TryEndActions_m6520 (SetEnabledOnDialogueEvent_t1305 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		SetEnabledActionU5BU5D_t1304* L_0 = (__this->___onEnd_6);
		Transform_t54 * L_1 = ___actor;
		SetEnabledOnDialogueEvent_TryActions_m6521(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction[],UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_TryActions_m6521 (SetEnabledOnDialogueEvent_t1305 * __this, SetEnabledActionU5BU5D_t1304* ___actions, Transform_t54 * ___actor, const MethodInfo* method)
{
	SetEnabledAction_t1303 * V_0 = {0};
	SetEnabledActionU5BU5D_t1304* V_1 = {0};
	int32_t V_2 = 0;
	{
		SetEnabledActionU5BU5D_t1304* L_0 = ___actions;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		SetEnabledActionU5BU5D_t1304* L_1 = ___actions;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0042;
	}

IL_0010:
	{
		SetEnabledActionU5BU5D_t1304* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(SetEnabledAction_t1303 **)(SetEnabledAction_t1303 **)SZArrayLdElema(L_2, L_4));
		SetEnabledAction_t1303 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		SetEnabledAction_t1303 * L_6 = V_0;
		NullCheck(L_6);
		Condition_t203 * L_7 = (((Action_t1279 *)L_6)->___condition_0);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		SetEnabledAction_t1303 * L_8 = V_0;
		NullCheck(L_8);
		Condition_t203 * L_9 = (((Action_t1279 *)L_8)->___condition_0);
		Transform_t54 * L_10 = ___actor;
		NullCheck(L_9);
		bool L_11 = Condition_IsTrue_m2741(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		SetEnabledAction_t1303 * L_12 = V_0;
		Transform_t54 * L_13 = ___actor;
		SetEnabledOnDialogueEvent_DoAction_m6522(__this, L_12, L_13, /*hidden argument*/NULL);
	}

IL_003e:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_15 = V_2;
		SetEnabledActionU5BU5D_t1304* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction,UnityEngine.Transform)
extern TypeInfo* MonoBehaviourU5BU5D_t465_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SetEnabledOnDialogueEvent_DoAction_m6522 (SetEnabledOnDialogueEvent_t1305 * __this, SetEnabledAction_t1303 * ___action, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoBehaviourU5BU5D_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2541);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	MonoBehaviour_t47 * V_0 = {0};
	bool V_1 = false;
	{
		SetEnabledAction_t1303 * L_0 = ___action;
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		MonoBehaviourU5BU5D_t465* L_1 = ((MonoBehaviourU5BU5D_t465*)SZArrayNew(MonoBehaviourU5BU5D_t465_il2cpp_TypeInfo_var, 2));
		SetEnabledAction_t1303 * L_2 = ___action;
		NullCheck(L_2);
		MonoBehaviour_t47 * L_3 = (L_2->___target_1);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((MonoBehaviour_t47 **)(MonoBehaviour_t47 **)SZArrayLdElema(L_1, 0)) = (MonoBehaviour_t47 *)L_3;
		MonoBehaviourU5BU5D_t465* L_4 = L_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, __this);
		*((MonoBehaviour_t47 **)(MonoBehaviour_t47 **)SZArrayLdElema(L_4, 1)) = (MonoBehaviour_t47 *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		MonoBehaviour_t47 * L_5 = Tools_Select_m6260(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		MonoBehaviour_t47 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Behaviour_get_enabled_m2552(L_6, /*hidden argument*/NULL);
		SetEnabledAction_t1303 * L_8 = ___action;
		NullCheck(L_8);
		int32_t L_9 = (L_8->___state_2);
		bool L_10 = ToggleTools_GetNewValue_m6247(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_11 = DialogueDebug_get_LogInfo_m2769(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_t21* L_12 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_13 = L_12;
		MonoBehaviour_t47 * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = Object_get_name_m2484(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1)) = (Object_t *)L_15;
		ObjectU5BU5D_t21* L_16 = L_13;
		MonoBehaviour_t47 * L_17 = V_0;
		NullCheck(L_17);
		Type_t * L_18 = Object_GetType_m2958(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 2)) = (Object_t *)L_19;
		ObjectU5BU5D_t21* L_20 = L_16;
		bool L_21 = V_1;
		bool L_22 = L_21;
		Object_t * L_23 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 3)) = (Object_t *)L_23;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1382, L_20, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
	}

IL_0078:
	{
		MonoBehaviour_t47 * L_25 = V_0;
		bool L_26 = V_1;
		NullCheck(L_25);
		Behaviour_set_enabled_m2780(L_25, L_26, /*hidden argument*/NULL);
	}

IL_007f:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetQuestStateOnD.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetQuestStateOnDMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction::.ctor()
extern "C" void SetQuestStateAction__ctor_m6523 (SetQuestStateAction_t1306 * __this, const MethodInfo* method)
{
	{
		Action__ctor_m6463(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetQuestStateOnD_0.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_SetQuestStateOnD_0MethodDeclarations.h"

// PixelCrushers.DialogueSystem.QuestState
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestState.h"
// PixelCrushers.DialogueSystem.QuestLog
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestLogMethodDeclarations.h"
// PixelCrushers.DialogueSystem.DialogueManager
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueManagerMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent::.ctor()
extern TypeInfo* SetQuestStateActionU5BU5D_t1307_il2cpp_TypeInfo_var;
extern "C" void SetQuestStateOnDialogueEvent__ctor_m6524 (SetQuestStateOnDialogueEvent_t1308 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SetQuestStateActionU5BU5D_t1307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2542);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___onStart_5 = ((SetQuestStateActionU5BU5D_t1307*)SZArrayNew(SetQuestStateActionU5BU5D_t1307_il2cpp_TypeInfo_var, 0));
		__this->___onEnd_6 = ((SetQuestStateActionU5BU5D_t1307*)SZArrayNew(SetQuestStateActionU5BU5D_t1307_il2cpp_TypeInfo_var, 0));
		ActOnDialogueEvent__ctor_m6464(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetQuestStateOnDialogueEvent_TryStartActions_m6525 (SetQuestStateOnDialogueEvent_t1308 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		SetQuestStateActionU5BU5D_t1307* L_0 = (__this->___onStart_5);
		Transform_t54 * L_1 = ___actor;
		SetQuestStateOnDialogueEvent_TryActions_m6527(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetQuestStateOnDialogueEvent_TryEndActions_m6526 (SetQuestStateOnDialogueEvent_t1308 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		SetQuestStateActionU5BU5D_t1307* L_0 = (__this->___onEnd_6);
		Transform_t54 * L_1 = ___actor;
		SetQuestStateOnDialogueEvent_TryActions_m6527(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction[],UnityEngine.Transform)
extern "C" void SetQuestStateOnDialogueEvent_TryActions_m6527 (SetQuestStateOnDialogueEvent_t1308 * __this, SetQuestStateActionU5BU5D_t1307* ___actions, Transform_t54 * ___actor, const MethodInfo* method)
{
	SetQuestStateAction_t1306 * V_0 = {0};
	SetQuestStateActionU5BU5D_t1307* V_1 = {0};
	int32_t V_2 = 0;
	{
		SetQuestStateActionU5BU5D_t1307* L_0 = ___actions;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		SetQuestStateActionU5BU5D_t1307* L_1 = ___actions;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0042;
	}

IL_0010:
	{
		SetQuestStateActionU5BU5D_t1307* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(SetQuestStateAction_t1306 **)(SetQuestStateAction_t1306 **)SZArrayLdElema(L_2, L_4));
		SetQuestStateAction_t1306 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		SetQuestStateAction_t1306 * L_6 = V_0;
		NullCheck(L_6);
		Condition_t203 * L_7 = (((Action_t1279 *)L_6)->___condition_0);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		SetQuestStateAction_t1306 * L_8 = V_0;
		NullCheck(L_8);
		Condition_t203 * L_9 = (((Action_t1279 *)L_8)->___condition_0);
		Transform_t54 * L_10 = ___actor;
		NullCheck(L_9);
		bool L_11 = Condition_IsTrue_m2741(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		SetQuestStateAction_t1306 * L_12 = V_0;
		Transform_t54 * L_13 = ___actor;
		SetQuestStateOnDialogueEvent_DoAction_m6528(__this, L_12, L_13, /*hidden argument*/NULL);
	}

IL_003e:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_15 = V_2;
		SetQuestStateActionU5BU5D_t1307* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction,UnityEngine.Transform)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* QuestLog_t647_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" void SetQuestStateOnDialogueEvent_DoAction_m6528 (SetQuestStateOnDialogueEvent_t1308 * __this, SetQuestStateAction_t1306 * ___action, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		QuestLog_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	{
		SetQuestStateAction_t1306 * L_0 = ___action;
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		SetQuestStateAction_t1306 * L_1 = ___action;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___questName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		SetQuestStateAction_t1306 * L_4 = ___action;
		NullCheck(L_4);
		String_t* L_5 = (L_4->___questName_1);
		SetQuestStateAction_t1306 * L_6 = ___action;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___questState_2);
		IL2CPP_RUNTIME_CLASS_INIT(QuestLog_t647_il2cpp_TypeInfo_var);
		QuestLog_SetQuestState_m6307(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		SetQuestStateAction_t1306 * L_8 = ___action;
		NullCheck(L_8);
		String_t* L_9 = (L_8->___alertMessage_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0042;
		}
	}
	{
		SetQuestStateAction_t1306 * L_11 = ___action;
		NullCheck(L_11);
		String_t* L_12 = (L_11->___alertMessage_3);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueManager_ShowAlert_m2724(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.ShowCursorOnConversation/<ShowCursorAfterOneFrame>c__IteratorD
#include "DialogueSystem_PixelCrushers_DialogueSystem_ShowCursorOnConv.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.ShowCursorOnConversation/<ShowCursorAfterOneFrame>c__IteratorD
#include "DialogueSystem_PixelCrushers_DialogueSystem_ShowCursorOnConvMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.CursorLockMode
#include "UnityEngine_UnityEngine_CursorLockMode.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// UnityEngine.Cursor
#include "UnityEngine_UnityEngine_CursorMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.ShowCursorOnConversation/<ShowCursorAfterOneFrame>c__IteratorD::.ctor()
extern "C" void U3CShowCursorAfterOneFrameU3Ec__IteratorD__ctor_m6529 (U3CShowCursorAfterOneFrameU3Ec__IteratorD_t1309 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.ShowCursorOnConversation/<ShowCursorAfterOneFrame>c__IteratorD::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CShowCursorAfterOneFrameU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6530 (U3CShowCursorAfterOneFrameU3Ec__IteratorD_t1309 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.ShowCursorOnConversation/<ShowCursorAfterOneFrame>c__IteratorD::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CShowCursorAfterOneFrameU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m6531 (U3CShowCursorAfterOneFrameU3Ec__IteratorD_t1309 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.ShowCursorOnConversation/<ShowCursorAfterOneFrame>c__IteratorD::MoveNext()
extern "C" bool U3CShowCursorAfterOneFrameU3Ec__IteratorD_MoveNext_m6532 (U3CShowCursorAfterOneFrameU3Ec__IteratorD_t1309 * __this, const MethodInfo* method)
{
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
			goto IL_0034;
		}
	}
	{
		goto IL_0047;
	}

IL_0021:
	{
		__this->___U24current_1 = NULL;
		__this->___U24PC_0 = 1;
		goto IL_0049;
	}

IL_0034:
	{
		Cursor_set_visible_m7370(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Cursor_set_lockState_m7371(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_0047:
	{
		return 0;
	}

IL_0049:
	{
		return 1;
	}
	// Dead block : IL_004b: ldloc.1
}
// System.Void PixelCrushers.DialogueSystem.ShowCursorOnConversation/<ShowCursorAfterOneFrame>c__IteratorD::Dispose()
extern "C" void U3CShowCursorAfterOneFrameU3Ec__IteratorD_Dispose_m6533 (U3CShowCursorAfterOneFrameU3Ec__IteratorD_t1309 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ShowCursorOnConversation/<ShowCursorAfterOneFrame>c__IteratorD::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CShowCursorAfterOneFrameU3Ec__IteratorD_Reset_m6534 (U3CShowCursorAfterOneFrameU3Ec__IteratorD_t1309 * __this, const MethodInfo* method)
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
// PixelCrushers.DialogueSystem.ShowCursorOnConversation
#include "DialogueSystem_PixelCrushers_DialogueSystem_ShowCursorOnConv_0.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.ShowCursorOnConversation
#include "DialogueSystem_PixelCrushers_DialogueSystem_ShowCursorOnConv_0MethodDeclarations.h"

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.ShowCursorOnConversation::.ctor()
extern "C" void ShowCursorOnConversation__ctor_m6535 (ShowCursorOnConversation_t1310 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ShowCursorOnConversation::OnConversationStart(UnityEngine.Transform)
extern "C" void ShowCursorOnConversation_OnConversationStart_m6536 (ShowCursorOnConversation_t1310 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Cursor_get_visible_m7368(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___wasCursorVisible_2 = L_0;
		int32_t L_1 = Cursor_get_lockState_m7369(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___savedLockState_3 = L_1;
		Object_t * L_2 = ShowCursorOnConversation_ShowCursorAfterOneFrame_m6537(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.ShowCursorOnConversation::ShowCursorAfterOneFrame()
extern TypeInfo* U3CShowCursorAfterOneFrameU3Ec__IteratorD_t1309_il2cpp_TypeInfo_var;
extern "C" Object_t * ShowCursorOnConversation_ShowCursorAfterOneFrame_m6537 (ShowCursorOnConversation_t1310 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CShowCursorAfterOneFrameU3Ec__IteratorD_t1309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2544);
		s_Il2CppMethodIntialized = true;
	}
	U3CShowCursorAfterOneFrameU3Ec__IteratorD_t1309 * V_0 = {0};
	{
		U3CShowCursorAfterOneFrameU3Ec__IteratorD_t1309 * L_0 = (U3CShowCursorAfterOneFrameU3Ec__IteratorD_t1309 *)il2cpp_codegen_object_new (U3CShowCursorAfterOneFrameU3Ec__IteratorD_t1309_il2cpp_TypeInfo_var);
		U3CShowCursorAfterOneFrameU3Ec__IteratorD__ctor_m6529(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CShowCursorAfterOneFrameU3Ec__IteratorD_t1309 * L_1 = V_0;
		return L_1;
	}
}
// System.Void PixelCrushers.DialogueSystem.ShowCursorOnConversation::OnConversationEnd(UnityEngine.Transform)
extern "C" void ShowCursorOnConversation_OnConversationEnd_m6538 (ShowCursorOnConversation_t1310 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___wasCursorVisible_2);
		Cursor_set_visible_m7370(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_1 = (__this->___savedLockState_3);
		Cursor_set_lockState_m7371(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_StartConversatio.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_StartConversatioMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction::.ctor()
extern "C" void ConversationAction__ctor_m6539 (ConversationAction_t1311 * __this, const MethodInfo* method)
{
	{
		Action__ctor_m6463(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_StartConversatio_0.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_StartConversatio_0MethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::.ctor()
extern TypeInfo* ConversationActionU5BU5D_t1312_il2cpp_TypeInfo_var;
extern "C" void StartConversationOnDialogueEvent__ctor_m6540 (StartConversationOnDialogueEvent_t1313 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConversationActionU5BU5D_t1312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2545);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___onStart_5 = ((ConversationActionU5BU5D_t1312*)SZArrayNew(ConversationActionU5BU5D_t1312_il2cpp_TypeInfo_var, 0));
		__this->___onEnd_6 = ((ConversationActionU5BU5D_t1312*)SZArrayNew(ConversationActionU5BU5D_t1312_il2cpp_TypeInfo_var, 0));
		ActOnDialogueEvent__ctor_m6464(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void StartConversationOnDialogueEvent_TryStartActions_m6541 (StartConversationOnDialogueEvent_t1313 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		ConversationActionU5BU5D_t1312* L_0 = (__this->___onStart_5);
		Transform_t54 * L_1 = ___actor;
		StartConversationOnDialogueEvent_TryActions_m6543(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void StartConversationOnDialogueEvent_TryEndActions_m6542 (StartConversationOnDialogueEvent_t1313 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		ConversationActionU5BU5D_t1312* L_0 = (__this->___onEnd_6);
		Transform_t54 * L_1 = ___actor;
		StartConversationOnDialogueEvent_TryActions_m6543(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction[],UnityEngine.Transform)
extern "C" void StartConversationOnDialogueEvent_TryActions_m6543 (StartConversationOnDialogueEvent_t1313 * __this, ConversationActionU5BU5D_t1312* ___actions, Transform_t54 * ___actor, const MethodInfo* method)
{
	ConversationAction_t1311 * V_0 = {0};
	ConversationActionU5BU5D_t1312* V_1 = {0};
	int32_t V_2 = 0;
	{
		ConversationActionU5BU5D_t1312* L_0 = ___actions;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		ConversationActionU5BU5D_t1312* L_1 = ___actions;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0042;
	}

IL_0010:
	{
		ConversationActionU5BU5D_t1312* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(ConversationAction_t1311 **)(ConversationAction_t1311 **)SZArrayLdElema(L_2, L_4));
		ConversationAction_t1311 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		ConversationAction_t1311 * L_6 = V_0;
		NullCheck(L_6);
		Condition_t203 * L_7 = (((Action_t1279 *)L_6)->___condition_0);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		ConversationAction_t1311 * L_8 = V_0;
		NullCheck(L_8);
		Condition_t203 * L_9 = (((Action_t1279 *)L_8)->___condition_0);
		Transform_t54 * L_10 = ___actor;
		NullCheck(L_9);
		bool L_11 = Condition_IsTrue_m2741(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		ConversationAction_t1311 * L_12 = V_0;
		Transform_t54 * L_13 = ___actor;
		StartConversationOnDialogueEvent_DoAction_m6544(__this, L_12, L_13, /*hidden argument*/NULL);
	}

IL_003e:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_15 = V_2;
		ConversationActionU5BU5D_t1312* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction,UnityEngine.Transform)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" void StartConversationOnDialogueEvent_DoAction_m6544 (StartConversationOnDialogueEvent_t1313 * __this, ConversationAction_t1311 * ___action, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t54 * V_0 = {0};
	Transform_t54 * V_1 = {0};
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		ConversationAction_t1311 * L_0 = ___action;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		TransformU5BU5D_t95* L_1 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		ConversationAction_t1311 * L_2 = ___action;
		NullCheck(L_2);
		Transform_t54 * L_3 = (L_2->___speaker_1);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_1, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_1;
		Transform_t54 * L_5 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_6 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_6;
		TransformU5BU5D_t95* L_7 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		ConversationAction_t1311 * L_8 = ___action;
		NullCheck(L_8);
		Transform_t54 * L_9 = (L_8->___listener_2);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_9);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_7, 0)) = (Transform_t54 *)L_9;
		TransformU5BU5D_t95* L_10 = L_7;
		Transform_t54 * L_11 = ___actor;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, L_11);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_10, 1)) = (Transform_t54 *)L_11;
		Transform_t54 * L_12 = Tools_Select_m6259(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_1 = L_12;
		ConversationAction_t1311 * L_13 = ___action;
		NullCheck(L_13);
		bool L_14 = (L_13->___skipIfNoValidEntries_4);
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		ConversationAction_t1311 * L_15 = ___action;
		NullCheck(L_15);
		String_t* L_16 = (L_15->___conversation_3);
		Transform_t54 * L_17 = V_0;
		Transform_t54 * L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		bool L_19 = DialogueManager_ConversationHasValidEntry_m5322(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B4_0 = 0;
	}

IL_005b:
	{
		V_2 = G_B4_0;
		bool L_20 = V_2;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		ConversationAction_t1311 * L_21 = ___action;
		NullCheck(L_21);
		String_t* L_22 = (L_21->___conversation_3);
		Transform_t54 * L_23 = V_0;
		Transform_t54 * L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueManager_StartConversation_m5326(NULL /*static, unused*/, L_22, L_23, L_24, /*hidden argument*/NULL);
	}

IL_006f:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_StartSequenceOnD.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_StartSequenceOnDMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction::.ctor()
extern "C" void SequenceAction__ctor_m6545 (SequenceAction_t1314 * __this, const MethodInfo* method)
{
	{
		Action__ctor_m6463(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_StartSequenceOnD_0.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_StartSequenceOnD_0MethodDeclarations.h"

// PixelCrushers.DialogueSystem.Sequencer
#include "DialogueSystem_PixelCrushers_DialogueSystem_Sequencer.h"


// System.Void PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent::.ctor()
extern TypeInfo* SequenceActionU5BU5D_t1315_il2cpp_TypeInfo_var;
extern "C" void StartSequenceOnDialogueEvent__ctor_m6546 (StartSequenceOnDialogueEvent_t1316 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SequenceActionU5BU5D_t1315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2547);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___onStart_5 = ((SequenceActionU5BU5D_t1315*)SZArrayNew(SequenceActionU5BU5D_t1315_il2cpp_TypeInfo_var, 0));
		__this->___onEnd_6 = ((SequenceActionU5BU5D_t1315*)SZArrayNew(SequenceActionU5BU5D_t1315_il2cpp_TypeInfo_var, 0));
		ActOnDialogueEvent__ctor_m6464(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void StartSequenceOnDialogueEvent_TryStartActions_m6547 (StartSequenceOnDialogueEvent_t1316 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		SequenceActionU5BU5D_t1315* L_0 = (__this->___onStart_5);
		Transform_t54 * L_1 = ___actor;
		StartSequenceOnDialogueEvent_TryActions_m6549(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void StartSequenceOnDialogueEvent_TryEndActions_m6548 (StartSequenceOnDialogueEvent_t1316 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		SequenceActionU5BU5D_t1315* L_0 = (__this->___onEnd_6);
		Transform_t54 * L_1 = ___actor;
		StartSequenceOnDialogueEvent_TryActions_m6549(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction[],UnityEngine.Transform)
extern "C" void StartSequenceOnDialogueEvent_TryActions_m6549 (StartSequenceOnDialogueEvent_t1316 * __this, SequenceActionU5BU5D_t1315* ___actions, Transform_t54 * ___actor, const MethodInfo* method)
{
	SequenceAction_t1314 * V_0 = {0};
	SequenceActionU5BU5D_t1315* V_1 = {0};
	int32_t V_2 = 0;
	{
		SequenceActionU5BU5D_t1315* L_0 = ___actions;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		SequenceActionU5BU5D_t1315* L_1 = ___actions;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0042;
	}

IL_0010:
	{
		SequenceActionU5BU5D_t1315* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(SequenceAction_t1314 **)(SequenceAction_t1314 **)SZArrayLdElema(L_2, L_4));
		SequenceAction_t1314 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		SequenceAction_t1314 * L_6 = V_0;
		NullCheck(L_6);
		Condition_t203 * L_7 = (((Action_t1279 *)L_6)->___condition_0);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		SequenceAction_t1314 * L_8 = V_0;
		NullCheck(L_8);
		Condition_t203 * L_9 = (((Action_t1279 *)L_8)->___condition_0);
		Transform_t54 * L_10 = ___actor;
		NullCheck(L_9);
		bool L_11 = Condition_IsTrue_m2741(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		SequenceAction_t1314 * L_12 = V_0;
		Transform_t54 * L_13 = ___actor;
		StartSequenceOnDialogueEvent_DoAction_m6550(__this, L_12, L_13, /*hidden argument*/NULL);
	}

IL_003e:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_15 = V_2;
		SequenceActionU5BU5D_t1315* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction,UnityEngine.Transform)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" void StartSequenceOnDialogueEvent_DoAction_m6550 (StartSequenceOnDialogueEvent_t1316 * __this, SequenceAction_t1314 * ___action, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t54 * V_0 = {0};
	Transform_t54 * V_1 = {0};
	{
		SequenceAction_t1314 * L_0 = ___action;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		TransformU5BU5D_t95* L_1 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		SequenceAction_t1314 * L_2 = ___action;
		NullCheck(L_2);
		Transform_t54 * L_3 = (L_2->___actor_1);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_1, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_1;
		Transform_t54 * L_5 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_6 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_6;
		TransformU5BU5D_t95* L_7 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		SequenceAction_t1314 * L_8 = ___action;
		NullCheck(L_8);
		Transform_t54 * L_9 = (L_8->___otherParticipant_2);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_9);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_7, 0)) = (Transform_t54 *)L_9;
		TransformU5BU5D_t95* L_10 = L_7;
		Transform_t54 * L_11 = ___actor;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, L_11);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_10, 1)) = (Transform_t54 *)L_11;
		Transform_t54 * L_12 = Tools_Select_m6259(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_1 = L_12;
		SequenceAction_t1314 * L_13 = ___action;
		NullCheck(L_13);
		String_t* L_14 = (L_13->___sequence_3);
		Transform_t54 * L_15 = V_0;
		Transform_t54 * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueManager_PlaySequence_m5340(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.StopConversationIfTooFar/<MonitorDistance>c__IteratorE
#include "DialogueSystem_PixelCrushers_DialogueSystem_StopConversation.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.StopConversationIfTooFar/<MonitorDistance>c__IteratorE
#include "DialogueSystem_PixelCrushers_DialogueSystem_StopConversationMethodDeclarations.h"

// PixelCrushers.DialogueSystem.StopConversationIfTooFar
#include "DialogueSystem_PixelCrushers_DialogueSystem_StopConversation_0.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.StopConversationIfTooFar/<MonitorDistance>c__IteratorE::.ctor()
extern "C" void U3CMonitorDistanceU3Ec__IteratorE__ctor_m6551 (U3CMonitorDistanceU3Ec__IteratorE_t1318 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.StopConversationIfTooFar/<MonitorDistance>c__IteratorE::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CMonitorDistanceU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6552 (U3CMonitorDistanceU3Ec__IteratorE_t1318 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.StopConversationIfTooFar/<MonitorDistance>c__IteratorE::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CMonitorDistanceU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m6553 (U3CMonitorDistanceU3Ec__IteratorE_t1318 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.StopConversationIfTooFar/<MonitorDistance>c__IteratorE::MoveNext()
extern TypeInfo* WaitForSeconds_t629_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t604_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" bool U3CMonitorDistanceU3Ec__IteratorE_MoveNext_m6554 (U3CMonitorDistanceU3Ec__IteratorE_t1318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Single_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00fc;
	}

IL_0021:
	{
		Transform_t54 * L_2 = (__this->___actor_0);
		bool L_3 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00f5;
		}
	}
	{
		StopConversationIfTooFar_t1317 * L_4 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_4);
		Transform_t54 * L_5 = Component_get_transform_m2421(L_4, /*hidden argument*/NULL);
		__this->___U3CmyTransformU3E__0_1 = L_5;
	}

IL_0043:
	{
		StopConversationIfTooFar_t1317 * L_6 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_6);
		float L_7 = (L_6->___monitorFrequency_3);
		WaitForSeconds_t629 * L_8 = (WaitForSeconds_t629 *)il2cpp_codegen_object_new (WaitForSeconds_t629_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2791(L_8, L_7, /*hidden argument*/NULL);
		__this->___U24current_3 = L_8;
		__this->___U24PC_2 = 1;
		goto IL_00fe;
	}

IL_0065:
	{
		Transform_t54 * L_9 = (__this->___U3CmyTransformU3E__0_1);
		NullCheck(L_9);
		Vector3_t53  L_10 = Transform_get_position_m2459(L_9, /*hidden argument*/NULL);
		Transform_t54 * L_11 = (__this->___actor_0);
		NullCheck(L_11);
		Vector3_t53  L_12 = Transform_get_position_m2459(L_11, /*hidden argument*/NULL);
		float L_13 = Vector3_Distance_m2463(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		StopConversationIfTooFar_t1317 * L_14 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_14);
		float L_15 = (L_14->___maxDistance_2);
		if ((!(((float)L_13) > ((float)L_15))))
		{
			goto IL_00f0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_16 = DialogueDebug_get_LogInfo_m2769(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00e6;
		}
	}
	{
		ObjectU5BU5D_t21* L_17 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 0);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_18 = L_17;
		StopConversationIfTooFar_t1317 * L_19 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_19);
		float L_20 = (L_19->___maxDistance_2);
		float L_21 = L_20;
		Object_t * L_22 = Box(Single_t604_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 1);
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 1)) = (Object_t *)L_22;
		ObjectU5BU5D_t21* L_23 = L_18;
		StopConversationIfTooFar_t1317 * L_24 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_24);
		String_t* L_25 = Object_get_name_m2484(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 2);
		ArrayElementTypeCheck (L_23, L_25);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, 2)) = (Object_t *)L_25;
		ObjectU5BU5D_t21* L_26 = L_23;
		Transform_t54 * L_27 = (__this->___actor_0);
		NullCheck(L_27);
		String_t* L_28 = Object_get_name_m2484(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 3);
		ArrayElementTypeCheck (L_26, L_28);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 3)) = (Object_t *)L_28;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1383, L_26, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
	}

IL_00e6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueManager_StopConversation_m5329(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00f0:
	{
		goto IL_0043;
	}

IL_00f5:
	{
		__this->___U24PC_2 = (-1);
	}

IL_00fc:
	{
		return 0;
	}

IL_00fe:
	{
		return 1;
	}
	// Dead block : IL_0100: ldloc.1
}
// System.Void PixelCrushers.DialogueSystem.StopConversationIfTooFar/<MonitorDistance>c__IteratorE::Dispose()
extern "C" void U3CMonitorDistanceU3Ec__IteratorE_Dispose_m6555 (U3CMonitorDistanceU3Ec__IteratorE_t1318 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.StopConversationIfTooFar/<MonitorDistance>c__IteratorE::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CMonitorDistanceU3Ec__IteratorE_Reset_m6556 (U3CMonitorDistanceU3Ec__IteratorE_t1318 * __this, const MethodInfo* method)
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
// PixelCrushers.DialogueSystem.StopConversationIfTooFar
#include "DialogueSystem_PixelCrushers_DialogueSystem_StopConversation_0MethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.StopConversationIfTooFar::.ctor()
extern "C" void StopConversationIfTooFar__ctor_m6557 (StopConversationIfTooFar_t1317 * __this, const MethodInfo* method)
{
	{
		__this->___maxDistance_2 = (5.0f);
		__this->___monitorFrequency_3 = (1.0f);
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.StopConversationIfTooFar::OnConversationStart(UnityEngine.Transform)
extern "C" void StopConversationIfTooFar_OnConversationStart_m6558 (StopConversationIfTooFar_t1317 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		MonoBehaviour_StopAllCoroutines_m2853(__this, /*hidden argument*/NULL);
		Transform_t54 * L_0 = ___actor;
		Object_t * L_1 = StopConversationIfTooFar_MonitorDistance_m6561(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.StopConversationIfTooFar::OnConversationEnd(UnityEngine.Transform)
extern "C" void StopConversationIfTooFar_OnConversationEnd_m6559 (StopConversationIfTooFar_t1317 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		MonoBehaviour_StopAllCoroutines_m2853(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.StopConversationIfTooFar::OnDisable()
extern "C" void StopConversationIfTooFar_OnDisable_m6560 (StopConversationIfTooFar_t1317 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour_StopAllCoroutines_m2853(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.StopConversationIfTooFar::MonitorDistance(UnityEngine.Transform)
extern TypeInfo* U3CMonitorDistanceU3Ec__IteratorE_t1318_il2cpp_TypeInfo_var;
extern "C" Object_t * StopConversationIfTooFar_MonitorDistance_m6561 (StopConversationIfTooFar_t1317 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CMonitorDistanceU3Ec__IteratorE_t1318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2549);
		s_Il2CppMethodIntialized = true;
	}
	U3CMonitorDistanceU3Ec__IteratorE_t1318 * V_0 = {0};
	{
		U3CMonitorDistanceU3Ec__IteratorE_t1318 * L_0 = (U3CMonitorDistanceU3Ec__IteratorE_t1318 *)il2cpp_codegen_object_new (U3CMonitorDistanceU3Ec__IteratorE_t1318_il2cpp_TypeInfo_var);
		U3CMonitorDistanceU3Ec__IteratorE__ctor_m6551(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CMonitorDistanceU3Ec__IteratorE_t1318 * L_1 = V_0;
		Transform_t54 * L_2 = ___actor;
		NullCheck(L_1);
		L_1->___actor_0 = L_2;
		U3CMonitorDistanceU3Ec__IteratorE_t1318 * L_3 = V_0;
		Transform_t54 * L_4 = ___actor;
		NullCheck(L_3);
		L_3->___U3CU24U3Eactor_4 = L_4;
		U3CMonitorDistanceU3Ec__IteratorE_t1318 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_5 = __this;
		U3CMonitorDistanceU3Ec__IteratorE_t1318 * L_6 = V_0;
		return L_6;
	}
}
// PixelCrushers.DialogueSystem.AlertTrigger/<StartAfterOneFrame>c__IteratorF
#include "DialogueSystem_PixelCrushers_DialogueSystem_AlertTrigger_U3C.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.AlertTrigger/<StartAfterOneFrame>c__IteratorF
#include "DialogueSystem_PixelCrushers_DialogueSystem_AlertTrigger_U3CMethodDeclarations.h"

// PixelCrushers.DialogueSystem.AlertTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_AlertTrigger.h"
// PixelCrushers.DialogueSystem.AlertTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_AlertTriggerMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.AlertTrigger/<StartAfterOneFrame>c__IteratorF::.ctor()
extern "C" void U3CStartAfterOneFrameU3Ec__IteratorF__ctor_m6562 (U3CStartAfterOneFrameU3Ec__IteratorF_t1320 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.AlertTrigger/<StartAfterOneFrame>c__IteratorF::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartAfterOneFrameU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6563 (U3CStartAfterOneFrameU3Ec__IteratorF_t1320 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.AlertTrigger/<StartAfterOneFrame>c__IteratorF::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartAfterOneFrameU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m6564 (U3CStartAfterOneFrameU3Ec__IteratorF_t1320 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.AlertTrigger/<StartAfterOneFrame>c__IteratorF::MoveNext()
extern "C" bool U3CStartAfterOneFrameU3Ec__IteratorF_MoveNext_m6565 (U3CStartAfterOneFrameU3Ec__IteratorF_t1320 * __this, const MethodInfo* method)
{
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
			goto IL_0034;
		}
	}
	{
		goto IL_0047;
	}

IL_0021:
	{
		__this->___U24current_1 = NULL;
		__this->___U24PC_0 = 1;
		goto IL_0049;
	}

IL_0034:
	{
		AlertTrigger_t1319 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		AlertTrigger_TryStart_m6584(L_2, (Transform_t54 *)NULL, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_0047:
	{
		return 0;
	}

IL_0049:
	{
		return 1;
	}
	// Dead block : IL_004b: ldloc.1
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger/<StartAfterOneFrame>c__IteratorF::Dispose()
extern "C" void U3CStartAfterOneFrameU3Ec__IteratorF_Dispose_m6566 (U3CStartAfterOneFrameU3Ec__IteratorF_t1320 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger/<StartAfterOneFrame>c__IteratorF::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CStartAfterOneFrameU3Ec__IteratorF_Reset_m6567 (U3CStartAfterOneFrameU3Ec__IteratorF_t1320 * __this, const MethodInfo* method)
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

// PixelCrushers.DialogueSystem.DialogueTriggerEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueTriggerE.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// PixelCrushers.DialogueSystem.LocalizedTextTable
#include "DialogueSystem_PixelCrushers_DialogueSystem_LocalizedTextTab.h"
// PixelCrushers.DialogueSystem.DialogueDatabase
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueDatabase.h"
// PixelCrushers.DialogueSystem.EmphasisSetting
#include "DialogueSystem_PixelCrushers_DialogueSystem_EmphasisSetting.h"
// PixelCrushers.DialogueSystem.FormattedText
#include "DialogueSystem_PixelCrushers_DialogueSystem_FormattedText.h"
// PixelCrushers.DialogueSystem.DialogueEventStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueEventStaMethodDeclarations.h"
// PixelCrushers.DialogueSystem.LocalizedTextTable
#include "DialogueSystem_PixelCrushers_DialogueSystem_LocalizedTextTabMethodDeclarations.h"
// PixelCrushers.DialogueSystem.FormattedText
#include "DialogueSystem_PixelCrushers_DialogueSystem_FormattedTextMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.AlertTrigger::.ctor()
extern "C" void AlertTrigger__ctor_m6568 (AlertTrigger_t1319 * __this, const MethodInfo* method)
{
	{
		__this->___trigger_3 = ((int32_t)32);
		__this->___duration_6 = (5.0f);
		DialogueEventStarter__ctor_m6678(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::OnBarkEnd(UnityEngine.Transform)
extern "C" void AlertTrigger_OnBarkEnd_m6569 (AlertTrigger_t1319 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		AlertTrigger_TryStart_m6584(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::OnConversationEnd(UnityEngine.Transform)
extern "C" void AlertTrigger_OnConversationEnd_m6570 (AlertTrigger_t1319 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		AlertTrigger_TryStart_m6584(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::OnSequenceEnd(UnityEngine.Transform)
extern "C" void AlertTrigger_OnSequenceEnd_m6571 (AlertTrigger_t1319 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_001e;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		AlertTrigger_TryStart_m6584(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::OnUse(UnityEngine.Transform)
extern "C" void AlertTrigger_OnUse_m6572 (AlertTrigger_t1319 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001f;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		AlertTrigger_TryStart_m6584(__this, L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::OnUse(System.String)
extern "C" void AlertTrigger_OnUse_m6573 (AlertTrigger_t1319 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001f;
		}
	}
	{
		AlertTrigger_TryStart_m6584(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::OnUse()
extern "C" void AlertTrigger_OnUse_m6574 (AlertTrigger_t1319 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001f;
		}
	}
	{
		AlertTrigger_TryStart_m6584(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::OnTriggerEnter(UnityEngine.Collider)
extern "C" void AlertTrigger_OnTriggerEnter_m6575 (AlertTrigger_t1319 * __this, Collider_t194 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0023;
		}
	}
	{
		Collider_t194 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		AlertTrigger_TryStart_m6584(__this, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void AlertTrigger_OnTriggerEnter2D_m6576 (AlertTrigger_t1319 * __this, Collider2D_t195 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0023;
		}
	}
	{
		Collider2D_t195 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		AlertTrigger_TryStart_m6584(__this, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::OnTriggerExit(UnityEngine.Collider)
extern "C" void AlertTrigger_OnTriggerExit_m6577 (AlertTrigger_t1319 * __this, Collider_t194 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0027;
		}
	}
	{
		Collider_t194 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		AlertTrigger_TryStart_m6584(__this, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C" void AlertTrigger_OnTriggerExit2D_m6578 (AlertTrigger_t1319 * __this, Collider2D_t195 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0027;
		}
	}
	{
		Collider2D_t195 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		AlertTrigger_TryStart_m6584(__this, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::Start()
extern "C" void AlertTrigger_Start_m6579 (AlertTrigger_t1319 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_1 = AlertTrigger_StartAfterOneFrame_m6583(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::OnEnable()
extern "C" void AlertTrigger_OnEnable_m6580 (AlertTrigger_t1319 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_1 = AlertTrigger_StartAfterOneFrame_m6583(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::OnDisable()
extern "C" void AlertTrigger_OnDisable_m6581 (AlertTrigger_t1319 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)256)))))
		{
			goto IL_0017;
		}
	}
	{
		AlertTrigger_TryStart_m6584(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::OnDestroy()
extern "C" void AlertTrigger_OnDestroy_m6582 (AlertTrigger_t1319 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_0017;
		}
	}
	{
		AlertTrigger_TryStart_m6584(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.AlertTrigger::StartAfterOneFrame()
extern TypeInfo* U3CStartAfterOneFrameU3Ec__IteratorF_t1320_il2cpp_TypeInfo_var;
extern "C" Object_t * AlertTrigger_StartAfterOneFrame_m6583 (AlertTrigger_t1319 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CStartAfterOneFrameU3Ec__IteratorF_t1320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2550);
		s_Il2CppMethodIntialized = true;
	}
	U3CStartAfterOneFrameU3Ec__IteratorF_t1320 * V_0 = {0};
	{
		U3CStartAfterOneFrameU3Ec__IteratorF_t1320 * L_0 = (U3CStartAfterOneFrameU3Ec__IteratorF_t1320 *)il2cpp_codegen_object_new (U3CStartAfterOneFrameU3Ec__IteratorF_t1320_il2cpp_TypeInfo_var);
		U3CStartAfterOneFrameU3Ec__IteratorF__ctor_m6562(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartAfterOneFrameU3Ec__IteratorF_t1320 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CStartAfterOneFrameU3Ec__IteratorF_t1320 * L_2 = V_0;
		return L_2;
	}
}
// System.Void PixelCrushers.DialogueSystem.AlertTrigger::TryStart(UnityEngine.Transform)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern TypeInfo* FormattedText_t572_il2cpp_TypeInfo_var;
extern "C" void AlertTrigger_TryStart_m6584 (AlertTrigger_t1319 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		FormattedText_t572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___tryingToStart_8);
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
		__this->___tryingToStart_8 = 1;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			Condition_t203 * L_1 = (__this->___condition_7);
			if (!L_1)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			Condition_t203 * L_2 = (__this->___condition_7);
			Transform_t54 * L_3 = ___actor;
			NullCheck(L_2);
			bool L_4 = Condition_IsTrue_m2741(L_2, L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_00a7;
			}
		}

IL_002f:
		{
			String_t* L_5 = (__this->___message_5);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_6 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_00a7;
			}
		}

IL_003f:
		{
			String_t* L_7 = (__this->___message_5);
			V_0 = L_7;
			LocalizedTextTable_t252 * L_8 = (__this->___localizedTextTable_4);
			bool L_9 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_8, (Object_t584 *)NULL, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_007f;
			}
		}

IL_0057:
		{
			LocalizedTextTable_t252 * L_10 = (__this->___localizedTextTable_4);
			String_t* L_11 = (__this->___message_5);
			NullCheck(L_10);
			bool L_12 = LocalizedTextTable_ContainsField_m2857(L_10, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_007f;
			}
		}

IL_006d:
		{
			LocalizedTextTable_t252 * L_13 = (__this->___localizedTextTable_4);
			String_t* L_14 = (__this->___message_5);
			NullCheck(L_13);
			String_t* L_15 = LocalizedTextTable_get_Item_m2859(L_13, L_14, /*hidden argument*/NULL);
			V_0 = L_15;
		}

IL_007f:
		{
			String_t* L_16 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
			DialogueDatabase_t202 * L_17 = DialogueManager_get_MasterDatabase_m2796(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_17);
			EmphasisSettingU5BU5D_t632* L_18 = (L_17->___emphasisSettings_8);
			IL2CPP_RUNTIME_CLASS_INIT(FormattedText_t572_il2cpp_TypeInfo_var);
			FormattedText_t572 * L_19 = FormattedText_Parse_m2797(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
			NullCheck(L_19);
			String_t* L_20 = FormattedText_get_text_m2782(L_19, /*hidden argument*/NULL);
			V_1 = L_20;
			String_t* L_21 = V_1;
			float L_22 = (__this->___duration_6);
			DialogueManager_ShowAlert_m5335(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
			DialogueEventStarter_DestroyIfOnce_m6679(__this, /*hidden argument*/NULL);
		}

IL_00a7:
		{
			IL2CPP_LEAVE(0xB4, FINALLY_00ac);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_00ac;
	}

FINALLY_00ac:
	{ // begin finally (depth: 1)
		__this->___tryingToStart_8 = 0;
		IL2CPP_END_FINALLY(172)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(172)
	{
		IL2CPP_JUMP_TBL(0xB4, IL_00b4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_00b4:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.BarkOnIdle/<BarkLoop>c__Iterator10
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkOnIdle_U3CBa.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.BarkOnIdle/<BarkLoop>c__Iterator10
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkOnIdle_U3CBaMethodDeclarations.h"

// PixelCrushers.DialogueSystem.BarkOnIdle
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkOnIdle.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// PixelCrushers.DialogueSystem.DialogueTime
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueTimeMethodDeclarations.h"
// PixelCrushers.DialogueSystem.BarkStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkStarterMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.BarkOnIdle/<BarkLoop>c__Iterator10::.ctor()
extern "C" void U3CBarkLoopU3Ec__Iterator10__ctor_m6585 (U3CBarkLoopU3Ec__Iterator10_t1323 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.BarkOnIdle/<BarkLoop>c__Iterator10::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CBarkLoopU3Ec__Iterator10_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6586 (U3CBarkLoopU3Ec__Iterator10_t1323 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.BarkOnIdle/<BarkLoop>c__Iterator10::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CBarkLoopU3Ec__Iterator10_System_Collections_IEnumerator_get_Current_m6587 (U3CBarkLoopU3Ec__Iterator10_t1323 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.BarkOnIdle/<BarkLoop>c__Iterator10::MoveNext()
extern TypeInfo* WaitForSeconds_t629_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueTime_t625_il2cpp_TypeInfo_var;
extern "C" bool U3CBarkLoopU3Ec__Iterator10_MoveNext_m6588 (U3CBarkLoopU3Ec__Iterator10_t1323 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		DialogueTime_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
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
			goto IL_0053;
		}
	}
	{
		goto IL_0099;
	}

IL_0021:
	{
		BarkOnIdle_t1322 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		float L_3 = (L_2->___minSeconds_18);
		BarkOnIdle_t1322 * L_4 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_4);
		float L_5 = (L_4->___maxSeconds_19);
		float L_6 = Random_Range_m2447(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		WaitForSeconds_t629 * L_7 = (WaitForSeconds_t629 *)il2cpp_codegen_object_new (WaitForSeconds_t629_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2791(L_7, L_6, /*hidden argument*/NULL);
		__this->___U24current_1 = L_7;
		__this->___U24PC_0 = 1;
		goto IL_009b;
	}

IL_0053:
	{
		BarkOnIdle_t1322 * L_8 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_8);
		bool L_9 = Behaviour_get_enabled_m2552(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_008d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		bool L_10 = DialogueManager_get_IsConversationActive_m2726(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_008d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		bool L_11 = DialogueTime_get_IsPaused_m2870(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_008d;
		}
	}
	{
		BarkOnIdle_t1322 * L_12 = (__this->___U3CU3Ef__this_2);
		BarkOnIdle_t1322 * L_13 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_13);
		Transform_t54 * L_14 = (L_13->___target_20);
		NullCheck(L_12);
		BarkStarter_TryBark_m6601(L_12, L_14, /*hidden argument*/NULL);
	}

IL_008d:
	{
		goto IL_0021;
	}
	// Dead block : IL_0092: ldarg.0

IL_0099:
	{
		return 0;
	}

IL_009b:
	{
		return 1;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkOnIdle/<BarkLoop>c__Iterator10::Dispose()
extern "C" void U3CBarkLoopU3Ec__Iterator10_Dispose_m6589 (U3CBarkLoopU3Ec__Iterator10_t1323 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkOnIdle/<BarkLoop>c__Iterator10::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CBarkLoopU3Ec__Iterator10_Reset_m6590 (U3CBarkLoopU3Ec__Iterator10_t1323 * __this, const MethodInfo* method)
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
// PixelCrushers.DialogueSystem.BarkOnIdle
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkOnIdleMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.BarkOnIdle::.ctor()
extern "C" void BarkOnIdle__ctor_m6591 (BarkOnIdle_t1322 * __this, const MethodInfo* method)
{
	{
		__this->___minSeconds_18 = (5.0f);
		__this->___maxSeconds_19 = (10.0f);
		BarkStarter__ctor_m6595(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkOnIdle::Start()
extern "C" void BarkOnIdle_Start_m6592 (BarkOnIdle_t1322 * __this, const MethodInfo* method)
{
	{
		BarkOnIdle_StartBarkLoop_m6593(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkOnIdle::StartBarkLoop()
extern "C" void BarkOnIdle_StartBarkLoop_m6593 (BarkOnIdle_t1322 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = BarkOnIdle_BarkLoop_m6594(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.BarkOnIdle::BarkLoop()
extern TypeInfo* U3CBarkLoopU3Ec__Iterator10_t1323_il2cpp_TypeInfo_var;
extern "C" Object_t * BarkOnIdle_BarkLoop_m6594 (BarkOnIdle_t1322 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CBarkLoopU3Ec__Iterator10_t1323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2551);
		s_Il2CppMethodIntialized = true;
	}
	U3CBarkLoopU3Ec__Iterator10_t1323 * V_0 = {0};
	{
		U3CBarkLoopU3Ec__Iterator10_t1323 * L_0 = (U3CBarkLoopU3Ec__Iterator10_t1323 *)il2cpp_codegen_object_new (U3CBarkLoopU3Ec__Iterator10_t1323_il2cpp_TypeInfo_var);
		U3CBarkLoopU3Ec__Iterator10__ctor_m6585(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CBarkLoopU3Ec__Iterator10_t1323 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CBarkLoopU3Ec__Iterator10_t1323 * L_2 = V_0;
		return L_2;
	}
}
// PixelCrushers.DialogueSystem.BarkStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkStarter.h"
#ifndef _MSC_VER
#else
#endif

// PixelCrushers.DialogueSystem.BarkHistory
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkHistory.h"
// PixelCrushers.DialogueSystem.BarkOrder
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkOrder.h"
// PixelCrushers.DialogueSystem.ConversationStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConversationStar.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// PixelCrushers.DialogueSystem.ConversationState
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConversationStat.h"
// PixelCrushers.DialogueSystem.ConversationModel
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConversationMode.h"
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate
#include "DialogueSystem_PixelCrushers_DialogueSystem_IsDialogueEntryV.h"
// PixelCrushers.DialogueSystem.Response
#include "DialogueSystem_PixelCrushers_DialogueSystem_Response.h"
// PixelCrushers.DialogueSystem.DialogueEntry
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueEntry.h"
// PixelCrushers.DialogueSystem.Subtitle
#include "DialogueSystem_PixelCrushers_DialogueSystem_Subtitle.h"
// PixelCrushers.DialogueSystem.CharacterInfo
#include "DialogueSystem_PixelCrushers_DialogueSystem_CharacterInfo.h"
// PixelCrushers.DialogueSystem.Emphasis
#include "DialogueSystem_PixelCrushers_DialogueSystem_Emphasis.h"
// PixelCrushers.DialogueSystem.Lua/Result
#include "DialogueSystem_PixelCrushers_DialogueSystem_Lua_Result.h"
// PixelCrushers.DialogueSystem.ConversationStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConversationStarMethodDeclarations.h"
// PixelCrushers.DialogueSystem.BarkHistory
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkHistoryMethodDeclarations.h"
// PixelCrushers.DialogueSystem.BarkController
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkControllerMethodDeclarations.h"
// PixelCrushers.DialogueSystem.OverrideActorName
#include "DialogueSystem_PixelCrushers_DialogueSystem_OverrideActorNamMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// PixelCrushers.DialogueSystem.ConversationModel
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConversationModeMethodDeclarations.h"
// PixelCrushers.DialogueSystem.ConversationState
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConversationStatMethodDeclarations.h"
// PixelCrushers.DialogueSystem.DialogueEntry
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueEntryMethodDeclarations.h"
// PixelCrushers.DialogueSystem.Subtitle
#include "DialogueSystem_PixelCrushers_DialogueSystem_SubtitleMethodDeclarations.h"
// PixelCrushers.DialogueSystem.DialogueLua
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueLuaMethodDeclarations.h"
// PixelCrushers.DialogueSystem.Lua/Result
#include "DialogueSystem_PixelCrushers_DialogueSystem_Lua_ResultMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.BarkStarter::.ctor()
extern "C" void BarkStarter__ctor_m6595 (BarkStarter_t1324 * __this, const MethodInfo* method)
{
	{
		ConversationStarter__ctor_m6650(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.BarkStarter::get_sequencer()
extern "C" Sequencer_t618 * BarkStarter_get_sequencer_m6596 (BarkStarter_t1324 * __this, const MethodInfo* method)
{
	{
		Sequencer_t618 * L_0 = (__this->___U3CsequencerU3Ek__BackingField_17);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkStarter::set_sequencer(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void BarkStarter_set_sequencer_m6597 (BarkStarter_t1324 * __this, Sequencer_t618 * ___value, const MethodInfo* method)
{
	{
		Sequencer_t618 * L_0 = ___value;
		__this->___U3CsequencerU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Int32 PixelCrushers.DialogueSystem.BarkStarter::get_BarkIndex()
extern "C" int32_t BarkStarter_get_BarkIndex_m6598 (BarkStarter_t1324 * __this, const MethodInfo* method)
{
	{
		BarkHistory_t1099 * L_0 = (__this->___barkHistory_13);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___index_1);
		return L_1;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkStarter::set_BarkIndex(System.Int32)
extern "C" void BarkStarter_set_BarkIndex_m6599 (BarkStarter_t1324 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		BarkHistory_t1099 * L_0 = (__this->___barkHistory_13);
		int32_t L_1 = ___value;
		NullCheck(L_0);
		L_0->___index_1 = L_1;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkStarter::Awake()
extern TypeInfo* BarkHistory_t1099_il2cpp_TypeInfo_var;
extern "C" void BarkStarter_Awake_m6600 (BarkStarter_t1324 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BarkHistory_t1099_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2355);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___barkOrder_10);
		BarkHistory_t1099 * L_1 = (BarkHistory_t1099 *)il2cpp_codegen_object_new (BarkHistory_t1099_il2cpp_TypeInfo_var);
		BarkHistory__ctor_m5465(L_1, L_0, /*hidden argument*/NULL);
		__this->___barkHistory_13 = L_1;
		BarkStarter_set_sequencer_m6597(__this, (Sequencer_t618 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkStarter::TryBark(UnityEngine.Transform)
extern "C" void BarkStarter_TryBark_m6601 (BarkStarter_t1324 * __this, Transform_t54 * ___target, const MethodInfo* method)
{
	{
		Transform_t54 * L_0 = ___target;
		Transform_t54 * L_1 = ___target;
		BarkStarter_TryBark_m6602(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkStarter::TryBark(UnityEngine.Transform,UnityEngine.Transform)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern TypeInfo* BarkController_t1106_il2cpp_TypeInfo_var;
extern "C" void BarkStarter_TryBark_m6602 (BarkStarter_t1324 * __this, Transform_t54 * ___target, Transform_t54 * ___interactor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		BarkController_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2354);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___tryingToBark_14);
		if (L_0)
		{
			goto IL_011c;
		}
	}
	{
		__this->___tryingToBark_14 = 1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			Condition_t203 * L_1 = (((ConversationStarter_t1325 *)__this)->___condition_4);
			if (!L_1)
			{
				goto IL_002e;
			}
		}

IL_001d:
		{
			Condition_t203 * L_2 = (((ConversationStarter_t1325 *)__this)->___condition_4);
			Transform_t54 * L_3 = ___interactor;
			NullCheck(L_2);
			bool L_4 = Condition_IsTrue_m2741(L_2, L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_010f;
			}
		}

IL_002e:
		{
			String_t* L_5 = (((ConversationStarter_t1325 *)__this)->___conversation_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_6 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0079;
			}
		}

IL_003e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
			bool L_7 = DialogueDebug_get_LogWarnings_m2766(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0074;
			}
		}

IL_0048:
		{
			ObjectU5BU5D_t21* L_8 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
			NullCheck(L_8);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
			ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral104);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
			ObjectU5BU5D_t21* L_9 = L_8;
			String_t* L_10 = Object_get_name_m2484(__this, /*hidden argument*/NULL);
			NullCheck(L_9);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
			ArrayElementTypeCheck (L_9, L_10);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 1)) = (Object_t *)L_10;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_11 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1384, L_9, /*hidden argument*/NULL);
			Transform_t54 * L_12 = BarkStarter_GetBarker_m6603(__this, /*hidden argument*/NULL);
			Debug_LogWarning_m2856(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		}

IL_0074:
		{
			goto IL_0109;
		}

IL_0079:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
			bool L_13 = DialogueManager_get_IsConversationActive_m2726(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_00c9;
			}
		}

IL_0083:
		{
			bool L_14 = (__this->___allowDuringConversations_11);
			if (L_14)
			{
				goto IL_00c9;
			}
		}

IL_008e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
			bool L_15 = DialogueDebug_get_LogWarnings_m2766(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_00c4;
			}
		}

IL_0098:
		{
			ObjectU5BU5D_t21* L_16 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
			NullCheck(L_16);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
			ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral104);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
			ObjectU5BU5D_t21* L_17 = L_16;
			String_t* L_18 = Object_get_name_m2484(__this, /*hidden argument*/NULL);
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
			ArrayElementTypeCheck (L_17, L_18);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 1)) = (Object_t *)L_18;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_19 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1385, L_17, /*hidden argument*/NULL);
			Transform_t54 * L_20 = BarkStarter_GetBarker_m6603(__this, /*hidden argument*/NULL);
			Debug_LogWarning_m2856(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		}

IL_00c4:
		{
			goto IL_0109;
		}

IL_00c9:
		{
			bool L_21 = (__this->___cacheBarkLines_12);
			if (!L_21)
			{
				goto IL_00e6;
			}
		}

IL_00d4:
		{
			Transform_t54 * L_22 = BarkStarter_GetBarker_m6603(__this, /*hidden argument*/NULL);
			Transform_t54 * L_23 = ___target;
			BarkStarter_BarkCachedLine_m6605(__this, L_22, L_23, /*hidden argument*/NULL);
			goto IL_0109;
		}

IL_00e6:
		{
			String_t* L_24 = (((ConversationStarter_t1325 *)__this)->___conversation_3);
			Transform_t54 * L_25 = BarkStarter_GetBarker_m6603(__this, /*hidden argument*/NULL);
			Transform_t54 * L_26 = ___target;
			BarkHistory_t1099 * L_27 = (__this->___barkHistory_13);
			IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
			DialogueManager_Bark_m5331(NULL /*static, unused*/, L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(BarkController_t1106_il2cpp_TypeInfo_var);
			Sequencer_t618 * L_28 = BarkController_get_LastSequencer_m5486(NULL /*static, unused*/, /*hidden argument*/NULL);
			BarkStarter_set_sequencer_m6597(__this, L_28, /*hidden argument*/NULL);
		}

IL_0109:
		{
			DialogueEventStarter_DestroyIfOnce_m6679(__this, /*hidden argument*/NULL);
		}

IL_010f:
		{
			IL2CPP_LEAVE(0x11C, FINALLY_0114);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0114;
	}

FINALLY_0114:
	{ // begin finally (depth: 1)
		__this->___tryingToBark_14 = 0;
		IL2CPP_END_FINALLY(276)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(276)
	{
		IL2CPP_JUMP_TBL(0x11C, IL_011c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_011c:
	{
		return;
	}
}
// UnityEngine.Transform PixelCrushers.DialogueSystem.BarkStarter::GetBarker()
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" Transform_t54 * BarkStarter_GetBarker_m6603 (BarkStarter_t1324 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		TransformU5BU5D_t95* L_0 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_1 = (((ConversationStarter_t1325 *)__this)->___conversant_6);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_0, 0)) = (Transform_t54 *)L_1;
		TransformU5BU5D_t95* L_2 = L_0;
		Transform_t54 * L_3 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 1)) = (Transform_t54 *)L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_4 = Tools_Select_m6259(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String PixelCrushers.DialogueSystem.BarkStarter::GetBarkerName()
extern "C" String_t* BarkStarter_GetBarkerName_m6604 (BarkStarter_t1324 * __this, const MethodInfo* method)
{
	{
		Transform_t54 * L_0 = BarkStarter_GetBarker_m6603(__this, /*hidden argument*/NULL);
		String_t* L_1 = OverrideActorName_GetActorName_m5967(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkStarter::BarkCachedLine(UnityEngine.Transform,UnityEngine.Transform)
extern const Il2CppType* IBarkUI_t745_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IBarkUI_t745_il2cpp_TypeInfo_var;
extern "C" void BarkStarter_BarkCachedLine_m6605 (BarkStarter_t1324 * __this, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IBarkUI_t745_0_0_0_var = il2cpp_codegen_type_from_index(858);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		IBarkUI_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(858);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___barkUI_16);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Transform_t54 * L_1 = ___speaker;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m2434(NULL /*static, unused*/, LoadTypeToken(IBarkUI_t745_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		Component_t462 * L_3 = Component_GetComponentInChildren_m7125(L_1, L_2, /*hidden argument*/NULL);
		__this->___barkUI_16 = ((Object_t *)IsInst(L_3, IBarkUI_t745_il2cpp_TypeInfo_var));
	}

IL_0026:
	{
		ConversationState_t1096 * L_4 = (__this->___cachedState_15);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		Transform_t54 * L_5 = ___speaker;
		Transform_t54 * L_6 = ___listener;
		BarkStarter_PopulateCache_m6606(__this, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		Transform_t54 * L_7 = ___speaker;
		Transform_t54 * L_8 = ___listener;
		BarkStarter_BarkNextCachedLine_m6607(__this, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkStarter::PopulateCache(UnityEngine.Transform,UnityEngine.Transform)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern TypeInfo* ConversationModel_t1101_il2cpp_TypeInfo_var;
extern "C" void BarkStarter_PopulateCache_m6606 (BarkStarter_t1324 * __this, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		ConversationModel_t1101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2347);
		s_Il2CppMethodIntialized = true;
	}
	ConversationModel_t1101 * V_0 = {0};
	{
		String_t* L_0 = (((ConversationStarter_t1325 *)__this)->___conversation_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_2 = DialogueDebug_get_LogWarnings_m2766(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		ObjectU5BU5D_t21* L_3 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 3));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_4 = L_3;
		Transform_t54 * L_5 = ___speaker;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t21* L_6 = L_4;
		Transform_t54 * L_7 = ___listener;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral945, L_6, /*hidden argument*/NULL);
		Transform_t54 * L_9 = ___speaker;
		Debug_Log_m2608(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueDatabase_t202 * L_10 = DialogueManager_get_MasterDatabase_m2796(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_11 = (((ConversationStarter_t1325 *)__this)->___conversation_3);
		Transform_t54 * L_12 = ___speaker;
		Transform_t54 * L_13 = ___listener;
		bool L_14 = DialogueManager_get_AllowLuaExceptions_m5316(NULL /*static, unused*/, /*hidden argument*/NULL);
		IsDialogueEntryValidDelegate_t1094 * L_15 = DialogueManager_get_IsDialogueEntryValid_m5307(NULL /*static, unused*/, /*hidden argument*/NULL);
		ConversationModel_t1101 * L_16 = (ConversationModel_t1101 *)il2cpp_codegen_object_new (ConversationModel_t1101_il2cpp_TypeInfo_var);
		ConversationModel__ctor_m5807(L_16, L_10, L_11, L_12, L_13, L_14, L_15, (-1), 0, /*hidden argument*/NULL);
		V_0 = L_16;
		ConversationModel_t1101 * L_17 = V_0;
		NullCheck(L_17);
		ConversationState_t1096 * L_18 = ConversationModel_get_FirstState_m5808(L_17, /*hidden argument*/NULL);
		__this->___cachedState_15 = L_18;
		ConversationState_t1096 * L_19 = (__this->___cachedState_15);
		if (L_19)
		{
			goto IL_00af;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_20 = DialogueDebug_get_LogWarnings_m2766(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00af;
		}
	}
	{
		ObjectU5BU5D_t21* L_21 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 0);
		ArrayElementTypeCheck (L_21, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_22 = L_21;
		Transform_t54 * L_23 = ___speaker;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 1);
		ArrayElementTypeCheck (L_22, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_22, 1)) = (Object_t *)L_23;
		ObjectU5BU5D_t21* L_24 = L_22;
		Transform_t54 * L_25 = ___listener;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 2);
		ArrayElementTypeCheck (L_24, L_25);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 2)) = (Object_t *)L_25;
		ObjectU5BU5D_t21* L_26 = L_24;
		String_t* L_27 = (((ConversationStarter_t1325 *)__this)->___conversation_3);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 3);
		ArrayElementTypeCheck (L_26, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 3)) = (Object_t *)L_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral948, L_26, /*hidden argument*/NULL);
		Transform_t54 * L_29 = ___speaker;
		Debug_Log_m2608(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
	}

IL_00af:
	{
		ConversationState_t1096 * L_30 = (__this->___cachedState_15);
		NullCheck(L_30);
		bool L_31 = ConversationState_get_HasAnyResponses_m5960(L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_32 = DialogueDebug_get_LogWarnings_m2766(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00f8;
		}
	}
	{
		ObjectU5BU5D_t21* L_33 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 0);
		ArrayElementTypeCheck (L_33, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_34 = L_33;
		Transform_t54 * L_35 = ___speaker;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 1);
		ArrayElementTypeCheck (L_34, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, 1)) = (Object_t *)L_35;
		ObjectU5BU5D_t21* L_36 = L_34;
		Transform_t54 * L_37 = ___listener;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 2);
		ArrayElementTypeCheck (L_36, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, 2)) = (Object_t *)L_37;
		ObjectU5BU5D_t21* L_38 = L_36;
		String_t* L_39 = (((ConversationStarter_t1325 *)__this)->___conversation_3);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 3);
		ArrayElementTypeCheck (L_38, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, 3)) = (Object_t *)L_39;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1386, L_38, /*hidden argument*/NULL);
		Transform_t54 * L_41 = ___speaker;
		Debug_Log_m2608(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkStarter::BarkNextCachedLine(UnityEngine.Transform,UnityEngine.Transform)
extern TypeInfo* BarkHistory_t1099_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormattedText_t572_il2cpp_TypeInfo_var;
extern TypeInfo* Subtitle_t570_il2cpp_TypeInfo_var;
extern TypeInfo* BarkController_t1106_il2cpp_TypeInfo_var;
extern "C" void BarkStarter_BarkNextCachedLine_m6607 (BarkStarter_t1324 * __this, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BarkHistory_t1099_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2355);
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormattedText_t572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		Subtitle_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(851);
		BarkController_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2354);
		s_Il2CppMethodIntialized = true;
	}
	ResponseU5BU5D_t571* V_0 = {0};
	int32_t V_1 = 0;
	DialogueEntry_t1102 * V_2 = {0};
	Subtitle_t570 * V_3 = {0};
	ResponseU5BU5D_t571* G_B6_0 = {0};
	BarkHistory_t1099 * G_B8_0 = {0};
	BarkHistory_t1099 * G_B7_0 = {0};
	{
		Object_t * L_0 = (__this->___barkUI_16);
		if (!L_0)
		{
			goto IL_0153;
		}
	}
	{
		ConversationState_t1096 * L_1 = (__this->___cachedState_15);
		if (!L_1)
		{
			goto IL_0153;
		}
	}
	{
		ConversationState_t1096 * L_2 = (__this->___cachedState_15);
		NullCheck(L_2);
		bool L_3 = ConversationState_get_HasAnyResponses_m5960(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0153;
		}
	}
	{
		ConversationState_t1096 * L_4 = (__this->___cachedState_15);
		NullCheck(L_4);
		bool L_5 = ConversationState_get_HasNPCResponse_m5955(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		ConversationState_t1096 * L_6 = (__this->___cachedState_15);
		NullCheck(L_6);
		ResponseU5BU5D_t571* L_7 = (L_6->___npcResponses_1);
		G_B6_0 = L_7;
		goto IL_0051;
	}

IL_0046:
	{
		ConversationState_t1096 * L_8 = (__this->___cachedState_15);
		NullCheck(L_8);
		ResponseU5BU5D_t571* L_9 = (L_8->___pcResponses_2);
		G_B6_0 = L_9;
	}

IL_0051:
	{
		V_0 = G_B6_0;
		BarkHistory_t1099 * L_10 = (__this->___barkHistory_13);
		BarkHistory_t1099 * L_11 = L_10;
		G_B7_0 = L_11;
		if (L_11)
		{
			G_B8_0 = L_11;
			goto IL_0065;
		}
	}
	{
		BarkHistory_t1099 * L_12 = (BarkHistory_t1099 *)il2cpp_codegen_object_new (BarkHistory_t1099_il2cpp_TypeInfo_var);
		BarkHistory__ctor_m5465(L_12, 0, /*hidden argument*/NULL);
		G_B8_0 = L_12;
	}

IL_0065:
	{
		ResponseU5BU5D_t571* L_13 = V_0;
		NullCheck(L_13);
		NullCheck(G_B8_0);
		int32_t L_14 = BarkHistory_GetNextIndex_m5466(G_B8_0, (((int32_t)(((Array_t *)L_13)->max_length))), /*hidden argument*/NULL);
		V_1 = L_14;
		ResponseU5BU5D_t571* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		NullCheck((*(Response_t235 **)(Response_t235 **)SZArrayLdElema(L_15, L_17)));
		DialogueEntry_t1102 * L_18 = ((*(Response_t235 **)(Response_t235 **)SZArrayLdElema(L_15, L_17))->___destinationEntry_1);
		V_2 = L_18;
		DialogueEntry_t1102 * L_19 = V_2;
		if (L_19)
		{
			goto IL_00b6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_20 = DialogueDebug_get_LogWarnings_m2766(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b6;
		}
	}
	{
		ObjectU5BU5D_t21* L_21 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 0);
		ArrayElementTypeCheck (L_21, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_22 = L_21;
		Transform_t54 * L_23 = ___speaker;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 1);
		ArrayElementTypeCheck (L_22, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_22, 1)) = (Object_t *)L_23;
		ObjectU5BU5D_t21* L_24 = L_22;
		Transform_t54 * L_25 = ___listener;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 2);
		ArrayElementTypeCheck (L_24, L_25);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 2)) = (Object_t *)L_25;
		ObjectU5BU5D_t21* L_26 = L_24;
		String_t* L_27 = (((ConversationStarter_t1325 *)__this)->___conversation_3);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 3);
		ArrayElementTypeCheck (L_26, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 3)) = (Object_t *)L_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral951, L_26, /*hidden argument*/NULL);
		Transform_t54 * L_29 = ___speaker;
		Debug_Log_m2608(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		DialogueEntry_t1102 * L_30 = V_2;
		if (!L_30)
		{
			goto IL_0153;
		}
	}
	{
		ConversationState_t1096 * L_31 = (__this->___cachedState_15);
		NullCheck(L_31);
		Subtitle_t570 * L_32 = (L_31->___subtitle_0);
		NullCheck(L_32);
		CharacterInfo_t628 * L_33 = (L_32->___listenerInfo_1);
		ConversationState_t1096 * L_34 = (__this->___cachedState_15);
		NullCheck(L_34);
		Subtitle_t570 * L_35 = (L_34->___subtitle_0);
		NullCheck(L_35);
		CharacterInfo_t628 * L_36 = (L_35->___speakerInfo_0);
		DialogueEntry_t1102 * L_37 = V_2;
		NullCheck(L_37);
		String_t* L_38 = DialogueEntry_get_DialogueText_m5655(L_37, /*hidden argument*/NULL);
		FormattedText_t572 * L_39 = (FormattedText_t572 *)il2cpp_codegen_object_new (FormattedText_t572_il2cpp_TypeInfo_var);
		FormattedText__ctor_m2891(L_39, L_38, (EmphasisU5BU5D_t635*)(EmphasisU5BU5D_t635*)NULL, 0, (-1), 1, 0, 0, 0, (String_t*)NULL, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_41 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		DialogueEntry_t1102 * L_42 = V_2;
		Subtitle_t570 * L_43 = (Subtitle_t570 *)il2cpp_codegen_object_new (Subtitle_t570_il2cpp_TypeInfo_var);
		Subtitle__ctor_m5969(L_43, L_33, L_36, L_39, L_40, L_41, L_42, /*hidden argument*/NULL);
		V_3 = L_43;
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_44 = DialogueDebug_get_LogInfo_m2769(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_013e;
		}
	}
	{
		ObjectU5BU5D_t21* L_45 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 0);
		ArrayElementTypeCheck (L_45, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_46 = L_45;
		Transform_t54 * L_47 = ___speaker;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 1);
		ArrayElementTypeCheck (L_46, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 1)) = (Object_t *)L_47;
		ObjectU5BU5D_t21* L_48 = L_46;
		Transform_t54 * L_49 = ___listener;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, 2);
		ArrayElementTypeCheck (L_48, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, 2)) = (Object_t *)L_49;
		ObjectU5BU5D_t21* L_50 = L_48;
		Subtitle_t570 * L_51 = V_3;
		NullCheck(L_51);
		FormattedText_t572 * L_52 = (L_51->___formattedText_2);
		NullCheck(L_52);
		String_t* L_53 = FormattedText_get_text_m2782(L_52, /*hidden argument*/NULL);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 3);
		ArrayElementTypeCheck (L_50, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 3)) = (Object_t *)L_53;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_54 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral953, L_50, /*hidden argument*/NULL);
		Transform_t54 * L_55 = ___speaker;
		Debug_Log_m2608(NULL /*static, unused*/, L_54, L_55, /*hidden argument*/NULL);
	}

IL_013e:
	{
		Subtitle_t570 * L_56 = V_3;
		Transform_t54 * L_57 = ___speaker;
		Transform_t54 * L_58 = ___listener;
		Object_t * L_59 = (__this->___barkUI_16);
		IL2CPP_RUNTIME_CLASS_INIT(BarkController_t1106_il2cpp_TypeInfo_var);
		Object_t * L_60 = BarkController_Bark_m5489(NULL /*static, unused*/, L_56, L_57, L_58, L_59, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_60, /*hidden argument*/NULL);
	}

IL_0153:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkStarter::OnRecordPersistentData()
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueLua_t648_il2cpp_TypeInfo_var;
extern "C" void BarkStarter_OnRecordPersistentData_m6608 (BarkStarter_t1324 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		DialogueLua_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_1 = BarkStarter_GetBarkerName_m6604(__this, /*hidden argument*/NULL);
		BarkHistory_t1099 * L_2 = (__this->___barkHistory_13);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___index_1);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueLua_t648_il2cpp_TypeInfo_var);
		DialogueLua_SetActorField_m5885(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral1387, L_5, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkStarter::OnApplyPersistentData()
extern TypeInfo* DialogueLua_t648_il2cpp_TypeInfo_var;
extern "C" void BarkStarter_OnApplyPersistentData_m6609 (BarkStarter_t1324 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueLua_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	Result_t583  V_0 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		BarkHistory_t1099 * L_1 = (__this->___barkHistory_13);
		String_t* L_2 = BarkStarter_GetBarkerName_m6604(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueLua_t648_il2cpp_TypeInfo_var);
		Result_t583  L_3 = DialogueLua_GetActorField_m5884(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral1387, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = Result_get_AsInt_m2953((&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___index_1 = L_4;
	}

IL_002e:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.BarkTrigger/<BarkAfterOneFrame>c__Iterator11
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkTrigger_U3CB.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.BarkTrigger/<BarkAfterOneFrame>c__Iterator11
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkTrigger_U3CBMethodDeclarations.h"

// PixelCrushers.DialogueSystem.BarkTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkTrigger.h"


// System.Void PixelCrushers.DialogueSystem.BarkTrigger/<BarkAfterOneFrame>c__Iterator11::.ctor()
extern "C" void U3CBarkAfterOneFrameU3Ec__Iterator11__ctor_m6610 (U3CBarkAfterOneFrameU3Ec__Iterator11_t1327 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.BarkTrigger/<BarkAfterOneFrame>c__Iterator11::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CBarkAfterOneFrameU3Ec__Iterator11_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6611 (U3CBarkAfterOneFrameU3Ec__Iterator11_t1327 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.BarkTrigger/<BarkAfterOneFrame>c__Iterator11::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CBarkAfterOneFrameU3Ec__Iterator11_System_Collections_IEnumerator_get_Current_m6612 (U3CBarkAfterOneFrameU3Ec__Iterator11_t1327 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.BarkTrigger/<BarkAfterOneFrame>c__Iterator11::MoveNext()
extern "C" bool U3CBarkAfterOneFrameU3Ec__Iterator11_MoveNext_m6613 (U3CBarkAfterOneFrameU3Ec__Iterator11_t1327 * __this, const MethodInfo* method)
{
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
			goto IL_0034;
		}
	}
	{
		goto IL_0051;
	}

IL_0021:
	{
		__this->___U24current_1 = NULL;
		__this->___U24PC_0 = 1;
		goto IL_0053;
	}

IL_0034:
	{
		BarkTrigger_t1326 * L_2 = (__this->___U3CU3Ef__this_2);
		BarkTrigger_t1326 * L_3 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_3);
		Transform_t54 * L_4 = (L_3->___target_18);
		NullCheck(L_2);
		BarkStarter_TryBark_m6601(L_2, L_4, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_0051:
	{
		return 0;
	}

IL_0053:
	{
		return 1;
	}
	// Dead block : IL_0055: ldloc.1
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger/<BarkAfterOneFrame>c__Iterator11::Dispose()
extern "C" void U3CBarkAfterOneFrameU3Ec__Iterator11_Dispose_m6614 (U3CBarkAfterOneFrameU3Ec__Iterator11_t1327 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger/<BarkAfterOneFrame>c__Iterator11::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CBarkAfterOneFrameU3Ec__Iterator11_Reset_m6615 (U3CBarkAfterOneFrameU3Ec__Iterator11_t1327 * __this, const MethodInfo* method)
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
// PixelCrushers.DialogueSystem.BarkTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkTriggerMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.BarkTrigger::.ctor()
extern "C" void BarkTrigger__ctor_m6616 (BarkTrigger_t1326 * __this, const MethodInfo* method)
{
	{
		__this->___trigger_19 = ((int32_t)32);
		BarkStarter__ctor_m6595(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger::OnBarkEnd(UnityEngine.Transform)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void BarkTrigger_OnBarkEnd_m6617 (BarkTrigger_t1326 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_19);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0035;
		}
	}
	{
		TransformU5BU5D_t95* L_2 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_3 = (__this->___target_18);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_2;
		Transform_t54 * L_5 = ___actor;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_6 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		BarkStarter_TryBark_m6601(__this, L_6, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger::OnConversationEnd(UnityEngine.Transform)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void BarkTrigger_OnConversationEnd_m6618 (BarkTrigger_t1326 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_19);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0035;
		}
	}
	{
		TransformU5BU5D_t95* L_2 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_3 = (__this->___target_18);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_2;
		Transform_t54 * L_5 = ___actor;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_6 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		BarkStarter_TryBark_m6601(__this, L_6, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger::OnSequenceEnd(UnityEngine.Transform)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void BarkTrigger_OnSequenceEnd_m6619 (BarkTrigger_t1326 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_19);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0035;
		}
	}
	{
		TransformU5BU5D_t95* L_2 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_3 = (__this->___target_18);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_2;
		Transform_t54 * L_5 = ___actor;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_6 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		BarkStarter_TryBark_m6601(__this, L_6, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger::OnUse(UnityEngine.Transform)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void BarkTrigger_OnUse_m6620 (BarkTrigger_t1326 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_19);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0036;
		}
	}
	{
		TransformU5BU5D_t95* L_2 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_3 = (__this->___target_18);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_2;
		Transform_t54 * L_5 = ___actor;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_6 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		BarkStarter_TryBark_m6601(__this, L_6, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger::OnUse(System.String)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void BarkTrigger_OnUse_m6621 (BarkTrigger_t1326 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_19);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0032;
		}
	}
	{
		TransformU5BU5D_t95* L_2 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_3 = (__this->___target_18);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 0)) = (Transform_t54 *)L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_4 = Tools_Select_m6259(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		BarkStarter_TryBark_m6601(__this, L_4, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger::OnUse()
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void BarkTrigger_OnUse_m6622 (BarkTrigger_t1326 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_19);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0032;
		}
	}
	{
		TransformU5BU5D_t95* L_2 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_3 = (__this->___target_18);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 0)) = (Transform_t54 *)L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_4 = Tools_Select_m6259(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		BarkStarter_TryBark_m6601(__this, L_4, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger::OnTriggerEnter(UnityEngine.Collider)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void BarkTrigger_OnTriggerEnter_m6623 (BarkTrigger_t1326 * __this, Collider_t194 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_19);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0040;
		}
	}
	{
		TransformU5BU5D_t95* L_2 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_3 = (__this->___target_18);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_2;
		Collider_t194 * L_5 = ___other;
		NullCheck(L_5);
		Transform_t54 * L_6 = Component_get_transform_m2421(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_6);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_6;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_7 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Collider_t194 * L_8 = ___other;
		NullCheck(L_8);
		Transform_t54 * L_9 = Component_get_transform_m2421(L_8, /*hidden argument*/NULL);
		BarkStarter_TryBark_m6602(__this, L_7, L_9, /*hidden argument*/NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void BarkTrigger_OnTriggerEnter2D_m6624 (BarkTrigger_t1326 * __this, Collider2D_t195 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_19);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0040;
		}
	}
	{
		TransformU5BU5D_t95* L_2 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_3 = (__this->___target_18);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_2;
		Collider2D_t195 * L_5 = ___other;
		NullCheck(L_5);
		Transform_t54 * L_6 = Component_get_transform_m2421(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_6);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_6;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_7 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Collider2D_t195 * L_8 = ___other;
		NullCheck(L_8);
		Transform_t54 * L_9 = Component_get_transform_m2421(L_8, /*hidden argument*/NULL);
		BarkStarter_TryBark_m6602(__this, L_7, L_9, /*hidden argument*/NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger::OnTriggerExit(UnityEngine.Collider)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void BarkTrigger_OnTriggerExit_m6625 (BarkTrigger_t1326 * __this, Collider_t194 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_19);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0044;
		}
	}
	{
		TransformU5BU5D_t95* L_2 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_3 = (__this->___target_18);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_2;
		Collider_t194 * L_5 = ___other;
		NullCheck(L_5);
		Transform_t54 * L_6 = Component_get_transform_m2421(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_6);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_6;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_7 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Collider_t194 * L_8 = ___other;
		NullCheck(L_8);
		Transform_t54 * L_9 = Component_get_transform_m2421(L_8, /*hidden argument*/NULL);
		BarkStarter_TryBark_m6602(__this, L_7, L_9, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger::OnTriggerExit2D(UnityEngine.Collider2D)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void BarkTrigger_OnTriggerExit2D_m6626 (BarkTrigger_t1326 * __this, Collider2D_t195 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_19);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0044;
		}
	}
	{
		TransformU5BU5D_t95* L_2 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_3 = (__this->___target_18);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_2;
		Collider2D_t195 * L_5 = ___other;
		NullCheck(L_5);
		Transform_t54 * L_6 = Component_get_transform_m2421(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_6);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_6;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_7 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Collider2D_t195 * L_8 = ___other;
		NullCheck(L_8);
		Transform_t54 * L_9 = Component_get_transform_m2421(L_8, /*hidden argument*/NULL);
		BarkStarter_TryBark_m6602(__this, L_7, L_9, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger::Start()
extern "C" void BarkTrigger_Start_m6627 (BarkTrigger_t1326 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_19);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_1 = BarkTrigger_BarkAfterOneFrame_m6631(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger::OnEnable()
extern "C" void BarkTrigger_OnEnable_m6628 (BarkTrigger_t1326 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_19);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_1 = BarkTrigger_BarkAfterOneFrame_m6631(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger::OnDisable()
extern "C" void BarkTrigger_OnDisable_m6629 (BarkTrigger_t1326 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_19);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)256)))))
		{
			goto IL_001c;
		}
	}
	{
		Transform_t54 * L_1 = (__this->___target_18);
		BarkStarter_TryBark_m6601(__this, L_1, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.BarkTrigger::OnDestroy()
extern "C" void BarkTrigger_OnDestroy_m6630 (BarkTrigger_t1326 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_19);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_001c;
		}
	}
	{
		Transform_t54 * L_1 = (__this->___target_18);
		BarkStarter_TryBark_m6601(__this, L_1, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.BarkTrigger::BarkAfterOneFrame()
extern TypeInfo* U3CBarkAfterOneFrameU3Ec__Iterator11_t1327_il2cpp_TypeInfo_var;
extern "C" Object_t * BarkTrigger_BarkAfterOneFrame_m6631 (BarkTrigger_t1326 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CBarkAfterOneFrameU3Ec__Iterator11_t1327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2552);
		s_Il2CppMethodIntialized = true;
	}
	U3CBarkAfterOneFrameU3Ec__Iterator11_t1327 * V_0 = {0};
	{
		U3CBarkAfterOneFrameU3Ec__Iterator11_t1327 * L_0 = (U3CBarkAfterOneFrameU3Ec__Iterator11_t1327 *)il2cpp_codegen_object_new (U3CBarkAfterOneFrameU3Ec__Iterator11_t1327_il2cpp_TypeInfo_var);
		U3CBarkAfterOneFrameU3Ec__Iterator11__ctor_m6610(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CBarkAfterOneFrameU3Ec__Iterator11_t1327 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CBarkAfterOneFrameU3Ec__Iterator11_t1327 * L_2 = V_0;
		return L_2;
	}
}
// PixelCrushers.DialogueSystem.ConditionObserver/SendMessageAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConditionObserve.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.ConditionObserver/SendMessageAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConditionObserveMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.ConditionObserver/SendMessageAction::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SendMessageAction__ctor_m6632 (SendMessageAction_t1328 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___message_1 = (String_t*) &_stringLiteral169;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___parameter_2 = L_0;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.ConditionObserver/<Observe>c__Iterator12
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConditionObserve_0.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.ConditionObserver/<Observe>c__Iterator12
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConditionObserve_0MethodDeclarations.h"

// PixelCrushers.DialogueSystem.ConditionObserver
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConditionObserve_1.h"
// PixelCrushers.DialogueSystem.ConditionObserver
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConditionObserve_1MethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.ConditionObserver/<Observe>c__Iterator12::.ctor()
extern "C" void U3CObserveU3Ec__Iterator12__ctor_m6633 (U3CObserveU3Ec__Iterator12_t1330 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.ConditionObserver/<Observe>c__Iterator12::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CObserveU3Ec__Iterator12_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6634 (U3CObserveU3Ec__Iterator12_t1330 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.ConditionObserver/<Observe>c__Iterator12::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CObserveU3Ec__Iterator12_System_Collections_IEnumerator_get_Current_m6635 (U3CObserveU3Ec__Iterator12_t1330 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.ConditionObserver/<Observe>c__Iterator12::MoveNext()
extern TypeInfo* WaitForSeconds_t629_il2cpp_TypeInfo_var;
extern "C" bool U3CObserveU3Ec__Iterator12_MoveNext_m6636 (U3CObserveU3Ec__Iterator12_t1330 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_0041;
		}
		if (L_1 == 2)
		{
			goto IL_006e;
		}
	}
	{
		goto IL_007a;
	}

IL_0025:
	{
		float L_2 = Random_get_value_m3381(NULL /*static, unused*/, /*hidden argument*/NULL);
		WaitForSeconds_t629 * L_3 = (WaitForSeconds_t629 *)il2cpp_codegen_object_new (WaitForSeconds_t629_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2791(L_3, L_2, /*hidden argument*/NULL);
		__this->___U24current_1 = L_3;
		__this->___U24PC_0 = 1;
		goto IL_007c;
	}

IL_0041:
	{
		ConditionObserver_t1329 * L_4 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_4);
		ConditionObserver_Check_m6646(L_4, /*hidden argument*/NULL);
		ConditionObserver_t1329 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		float L_6 = (L_5->___frequency_2);
		WaitForSeconds_t629 * L_7 = (WaitForSeconds_t629 *)il2cpp_codegen_object_new (WaitForSeconds_t629_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2791(L_7, L_6, /*hidden argument*/NULL);
		__this->___U24current_1 = L_7;
		__this->___U24PC_0 = 2;
		goto IL_007c;
	}

IL_006e:
	{
		goto IL_0041;
	}
	// Dead block : IL_0073: ldarg.0

IL_007a:
	{
		return 0;
	}

IL_007c:
	{
		return 1;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConditionObserver/<Observe>c__Iterator12::Dispose()
extern "C" void U3CObserveU3Ec__Iterator12_Dispose_m6637 (U3CObserveU3Ec__Iterator12_t1330 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConditionObserver/<Observe>c__Iterator12::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CObserveU3Ec__Iterator12_Reset_m6638 (U3CObserveU3Ec__Iterator12_t1330 * __this, const MethodInfo* method)
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

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// PixelCrushers.DialogueSystem.Lua
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.ConditionObserver::.ctor()
extern TypeInfo* Condition_t203_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SendMessageActionU5BU5D_t1331_il2cpp_TypeInfo_var;
extern "C" void ConditionObserver__ctor_m6639 (ConditionObserver_t1329 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Condition_t203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		SendMessageActionU5BU5D_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2553);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___frequency_2 = (1.0f);
		Condition_t203 * L_0 = (Condition_t203 *)il2cpp_codegen_object_new (Condition_t203_il2cpp_TypeInfo_var);
		Condition__ctor_m2945(L_0, /*hidden argument*/NULL);
		__this->___condition_5 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___questName_6 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___luaCode_8 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___sequence_9 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___alertMessage_10 = L_4;
		__this->___sendMessages_12 = ((SendMessageActionU5BU5D_t1331*)SZArrayNew(SendMessageActionU5BU5D_t1331_il2cpp_TypeInfo_var, 0));
		__this->___useQuestNamePicker_13 = 1;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Start()
extern "C" void ConditionObserver_Start_m6640 (ConditionObserver_t1329 * __this, const MethodInfo* method)
{
	{
		__this->___started_14 = 1;
		ConditionObserver_StartObserving_m6643(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::OnEnable()
extern "C" void ConditionObserver_OnEnable_m6641 (ConditionObserver_t1329 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___started_14);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		ConditionObserver_StartObserving_m6643(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::OnDisable()
extern "C" void ConditionObserver_OnDisable_m6642 (ConditionObserver_t1329 * __this, const MethodInfo* method)
{
	{
		ConditionObserver_StopObserving_m6644(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::StartObserving()
extern "C" void ConditionObserver_StartObserving_m6643 (ConditionObserver_t1329 * __this, const MethodInfo* method)
{
	{
		ConditionObserver_StopObserving_m6644(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ConditionObserver_Observe_m6645(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::StopObserving()
extern "C" void ConditionObserver_StopObserving_m6644 (ConditionObserver_t1329 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour_StopAllCoroutines_m2853(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.ConditionObserver::Observe()
extern TypeInfo* U3CObserveU3Ec__Iterator12_t1330_il2cpp_TypeInfo_var;
extern "C" Object_t * ConditionObserver_Observe_m6645 (ConditionObserver_t1329 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CObserveU3Ec__Iterator12_t1330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2555);
		s_Il2CppMethodIntialized = true;
	}
	U3CObserveU3Ec__Iterator12_t1330 * V_0 = {0};
	{
		U3CObserveU3Ec__Iterator12_t1330 * L_0 = (U3CObserveU3Ec__Iterator12_t1330 *)il2cpp_codegen_object_new (U3CObserveU3Ec__Iterator12_t1330_il2cpp_TypeInfo_var);
		U3CObserveU3Ec__Iterator12__ctor_m6633(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CObserveU3Ec__Iterator12_t1330 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CObserveU3Ec__Iterator12_t1330 * L_2 = V_0;
		return L_2;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Check()
extern "C" void ConditionObserver_Check_m6646 (ConditionObserver_t1329 * __this, const MethodInfo* method)
{
	Transform_t54 * V_0 = {0};
	Transform_t54 * G_B3_0 = {0};
	{
		GameObject_t49 * L_0 = (__this->___observeGameObject_4);
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		G_B3_0 = ((Transform_t54 *)(NULL));
		goto IL_0022;
	}

IL_0017:
	{
		GameObject_t49 * L_2 = (__this->___observeGameObject_4);
		NullCheck(L_2);
		Transform_t54 * L_3 = GameObject_get_transform_m2462(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		Condition_t203 * L_4 = (__this->___condition_5);
		Transform_t54 * L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = Condition_IsTrue_m2741(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		ConditionObserver_Fire_m6649(__this, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Check(UnityEngine.GameObject)
extern "C" void ConditionObserver_Check_m6647 (ConditionObserver_t1329 * __this, GameObject_t49 * ___gameObject, const MethodInfo* method)
{
	{
		GameObject_t49 * L_0 = ___gameObject;
		__this->___observeGameObject_4 = L_0;
		ConditionObserver_Check_m6646(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Check(System.String)
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void ConditionObserver_Check_m6648 (ConditionObserver_t1329 * __this, String_t* ___gameObjectName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t49 * V_0 = {0};
	{
		String_t* L_0 = ___gameObjectName;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		GameObject_t49 * L_1 = Tools_GameObjectHardFind_m6265(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t49 * L_2 = V_0;
		bool L_3 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		GameObject_t49 * L_4 = V_0;
		__this->___observeGameObject_4 = L_4;
	}

IL_001a:
	{
		ConditionObserver_Check_m6646(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Fire()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* QuestLog_t647_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* Lua_t617_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" void ConditionObserver_Fire_m6649 (ConditionObserver_t1329 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		QuestLog_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		Lua_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	SendMessageAction_t1328 * V_1 = {0};
	SendMessageActionU5BU5D_t1331* V_2 = {0};
	int32_t V_3 = 0;
	{
		String_t* L_0 = (__this->___questName_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = (__this->___questName_6);
		int32_t L_3 = (__this->___questState_7);
		IL2CPP_RUNTIME_CLASS_INIT(QuestLog_t647_il2cpp_TypeInfo_var);
		QuestLog_SetQuestState_m6307(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		String_t* L_4 = (__this->___luaCode_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_6 = (__this->___luaCode_8);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_7 = DialogueDebug_get_LogInfo_m2769(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lua_t617_il2cpp_TypeInfo_var);
		Lua_Run_m5241(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueManager_CheckAlerts_m5336(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0047:
	{
		String_t* L_8 = (__this->___sequence_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_10 = (__this->___sequence_9);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueManager_PlaySequence_m3398(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0063:
	{
		String_t* L_11 = (__this->___alertMessage_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00b9;
		}
	}
	{
		String_t* L_13 = (__this->___alertMessage_10);
		V_0 = L_13;
		LocalizedTextTable_t252 * L_14 = (__this->___localizedTextTable_11);
		bool L_15 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_14, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00b3;
		}
	}
	{
		LocalizedTextTable_t252 * L_16 = (__this->___localizedTextTable_11);
		String_t* L_17 = (__this->___alertMessage_10);
		NullCheck(L_16);
		bool L_18 = LocalizedTextTable_ContainsField_m2857(L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00b3;
		}
	}
	{
		LocalizedTextTable_t252 * L_19 = (__this->___localizedTextTable_11);
		String_t* L_20 = (__this->___alertMessage_10);
		NullCheck(L_19);
		String_t* L_21 = LocalizedTextTable_get_Item_m2859(L_19, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
	}

IL_00b3:
	{
		String_t* L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueManager_ShowAlert_m2724(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		SendMessageActionU5BU5D_t1331* L_23 = (__this->___sendMessages_12);
		V_2 = L_23;
		V_3 = 0;
		goto IL_0108;
	}

IL_00c7:
	{
		SendMessageActionU5BU5D_t1331* L_24 = V_2;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = L_25;
		V_1 = (*(SendMessageAction_t1328 **)(SendMessageAction_t1328 **)SZArrayLdElema(L_24, L_26));
		SendMessageAction_t1328 * L_27 = V_1;
		NullCheck(L_27);
		GameObject_t49 * L_28 = (L_27->___gameObject_0);
		bool L_29 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_28, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0104;
		}
	}
	{
		SendMessageAction_t1328 * L_30 = V_1;
		NullCheck(L_30);
		String_t* L_31 = (L_30->___message_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_32 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_0104;
		}
	}
	{
		SendMessageAction_t1328 * L_33 = V_1;
		NullCheck(L_33);
		GameObject_t49 * L_34 = (L_33->___gameObject_0);
		SendMessageAction_t1328 * L_35 = V_1;
		NullCheck(L_35);
		String_t* L_36 = (L_35->___message_1);
		SendMessageAction_t1328 * L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = (L_37->___parameter_2);
		NullCheck(L_34);
		GameObject_SendMessage_m2975(L_34, L_36, L_38, 1, /*hidden argument*/NULL);
	}

IL_0104:
	{
		int32_t L_39 = V_3;
		V_3 = ((int32_t)((int32_t)L_39+(int32_t)1));
	}

IL_0108:
	{
		int32_t L_40 = V_3;
		SendMessageActionU5BU5D_t1331* L_41 = V_2;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)(((Array_t *)L_41)->max_length))))))
		{
			goto IL_00c7;
		}
	}
	{
		bool L_42 = (__this->___once_3);
		if (!L_42)
		{
			goto IL_0127;
		}
	}
	{
		GameObject_t49 * L_43 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		Object_Destroy_m2754(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
	}

IL_0127:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void PixelCrushers.DialogueSystem.ConversationStarter::.ctor()
extern "C" void ConversationStarter__ctor_m6650 (ConversationStarter_t1325 * __this, const MethodInfo* method)
{
	{
		__this->___useConversationTitlePicker_8 = 1;
		DialogueEventStarter__ctor_m6678(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationStarter::TryStartConversation(UnityEngine.Transform)
extern "C" void ConversationStarter_TryStartConversation_m6651 (ConversationStarter_t1325 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		Transform_t54 * L_0 = ___actor;
		Transform_t54 * L_1 = ___actor;
		ConversationStarter_TryStartConversation_m6652(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationStarter::TryStartConversation(UnityEngine.Transform,UnityEngine.Transform)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" void ConversationStarter_TryStartConversation_m6652 (ConversationStarter_t1325 * __this, Transform_t54 * ___actor, Transform_t54 * ___interactor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___tryingToStart_7);
		if (L_0)
		{
			goto IL_00cc;
		}
	}
	{
		__this->___tryingToStart_7 = 1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			Condition_t203 * L_1 = (__this->___condition_4);
			if (!L_1)
			{
				goto IL_002e;
			}
		}

IL_001d:
		{
			Condition_t203 * L_2 = (__this->___condition_4);
			Transform_t54 * L_3 = ___interactor;
			NullCheck(L_2);
			bool L_4 = Condition_IsTrue_m2741(L_2, L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_00bf;
			}
		}

IL_002e:
		{
			String_t* L_5 = (__this->___conversation_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_6 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0073;
			}
		}

IL_003e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
			bool L_7 = DialogueDebug_get_LogErrors_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_006e;
			}
		}

IL_0048:
		{
			ObjectU5BU5D_t21* L_8 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
			NullCheck(L_8);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
			ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral104);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
			ObjectU5BU5D_t21* L_9 = L_8;
			String_t* L_10 = Object_get_name_m2484(__this, /*hidden argument*/NULL);
			NullCheck(L_9);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
			ArrayElementTypeCheck (L_9, L_10);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 1)) = (Object_t *)L_10;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_11 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1388, L_9, /*hidden argument*/NULL);
			Debug_LogError_m2815(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		}

IL_006e:
		{
			goto IL_00b9;
		}

IL_0073:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
			bool L_12 = DialogueManager_get_IsConversationActive_m2726(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_00b2;
			}
		}

IL_007d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
			bool L_13 = DialogueDebug_get_LogWarnings_m2766(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_00ad;
			}
		}

IL_0087:
		{
			ObjectU5BU5D_t21* L_14 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
			NullCheck(L_14);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
			ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral104);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
			ObjectU5BU5D_t21* L_15 = L_14;
			String_t* L_16 = Object_get_name_m2484(__this, /*hidden argument*/NULL);
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
			ArrayElementTypeCheck (L_15, L_16);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 1)) = (Object_t *)L_16;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_17 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1389, L_15, /*hidden argument*/NULL);
			Debug_LogWarning_m2768(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		}

IL_00ad:
		{
			goto IL_00b9;
		}

IL_00b2:
		{
			Transform_t54 * L_18 = ___actor;
			ConversationStarter_StartConversation_m6653(__this, L_18, /*hidden argument*/NULL);
		}

IL_00b9:
		{
			DialogueEventStarter_DestroyIfOnce_m6679(__this, /*hidden argument*/NULL);
		}

IL_00bf:
		{
			IL2CPP_LEAVE(0xCC, FINALLY_00c4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_00c4;
	}

FINALLY_00c4:
	{ // begin finally (depth: 1)
		__this->___tryingToStart_7 = 0;
		IL2CPP_END_FINALLY(196)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(196)
	{
		IL2CPP_JUMP_TBL(0xCC, IL_00cc)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_00cc:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationStarter::StartConversation(UnityEngine.Transform)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConversationStarter_StartConversation_m6653 (ConversationStarter_t1325 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t54 * V_0 = {0};
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		TransformU5BU5D_t95* L_0 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_1 = (__this->___conversant_6);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_0, 0)) = (Transform_t54 *)L_1;
		TransformU5BU5D_t95* L_2 = L_0;
		Transform_t54 * L_3 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 1)) = (Transform_t54 *)L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_4 = Tools_Select_m6259(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = (__this->___skipIfNoValidEntries_5);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_6 = (__this->___conversation_3);
		Transform_t54 * L_7 = ___actor;
		Transform_t54 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		bool L_9 = DialogueManager_ConversationHasValidEntry_m5322(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B3_0 = 0;
	}

IL_003c:
	{
		V_1 = G_B3_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_11 = DialogueDebug_get_LogInfo_m2769(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t21* L_12 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_13 = L_12;
		String_t* L_14 = Object_get_name_m2484(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1390, L_13, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
	}

IL_0073:
	{
		goto IL_0085;
	}

IL_0078:
	{
		String_t* L_16 = (__this->___conversation_3);
		Transform_t54 * L_17 = ___actor;
		Transform_t54 * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueManager_StartConversation_m5326(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
	}

IL_0085:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.ConversationTrigger/<StartConversationAfterOneFrame>c__Iterator13
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConversationTrig.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.ConversationTrigger/<StartConversationAfterOneFrame>c__Iterator13
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConversationTrigMethodDeclarations.h"

// PixelCrushers.DialogueSystem.ConversationTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConversationTrig_0.h"


// System.Void PixelCrushers.DialogueSystem.ConversationTrigger/<StartConversationAfterOneFrame>c__Iterator13::.ctor()
extern "C" void U3CStartConversationAfterOneFrameU3Ec__Iterator13__ctor_m6654 (U3CStartConversationAfterOneFrameU3Ec__Iterator13_t1333 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.ConversationTrigger/<StartConversationAfterOneFrame>c__Iterator13::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartConversationAfterOneFrameU3Ec__Iterator13_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6655 (U3CStartConversationAfterOneFrameU3Ec__Iterator13_t1333 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.ConversationTrigger/<StartConversationAfterOneFrame>c__Iterator13::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartConversationAfterOneFrameU3Ec__Iterator13_System_Collections_IEnumerator_get_Current_m6656 (U3CStartConversationAfterOneFrameU3Ec__Iterator13_t1333 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.ConversationTrigger/<StartConversationAfterOneFrame>c__Iterator13::MoveNext()
extern "C" bool U3CStartConversationAfterOneFrameU3Ec__Iterator13_MoveNext_m6657 (U3CStartConversationAfterOneFrameU3Ec__Iterator13_t1333 * __this, const MethodInfo* method)
{
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
			goto IL_0034;
		}
	}
	{
		goto IL_0051;
	}

IL_0021:
	{
		__this->___U24current_1 = NULL;
		__this->___U24PC_0 = 1;
		goto IL_0053;
	}

IL_0034:
	{
		ConversationTrigger_t1332 * L_2 = (__this->___U3CU3Ef__this_2);
		ConversationTrigger_t1332 * L_3 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_3);
		Transform_t54 * L_4 = (L_3->___actor_11);
		NullCheck(L_2);
		ConversationStarter_TryStartConversation_m6651(L_2, L_4, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_0051:
	{
		return 0;
	}

IL_0053:
	{
		return 1;
	}
	// Dead block : IL_0055: ldloc.1
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger/<StartConversationAfterOneFrame>c__Iterator13::Dispose()
extern "C" void U3CStartConversationAfterOneFrameU3Ec__Iterator13_Dispose_m6658 (U3CStartConversationAfterOneFrameU3Ec__Iterator13_t1333 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger/<StartConversationAfterOneFrame>c__Iterator13::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CStartConversationAfterOneFrameU3Ec__Iterator13_Reset_m6659 (U3CStartConversationAfterOneFrameU3Ec__Iterator13_t1333 * __this, const MethodInfo* method)
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
// PixelCrushers.DialogueSystem.ConversationTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConversationTrig_0MethodDeclarations.h"

// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::.ctor()
extern "C" void ConversationTrigger__ctor_m6660 (ConversationTrigger_t1332 * __this, const MethodInfo* method)
{
	{
		__this->___trigger_12 = ((int32_t)32);
		ConversationStarter__ctor_m6650(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnBarkEnd(UnityEngine.Transform)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void ConversationTrigger_OnBarkEnd_m6661 (ConversationTrigger_t1332 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_12);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0035;
		}
	}
	{
		TransformU5BU5D_t95* L_2 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_3 = (__this->___actor_11);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_2;
		Transform_t54 * L_5 = ___actor;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_6 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		ConversationStarter_TryStartConversation_m6651(__this, L_6, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnConversationEnd(UnityEngine.Transform)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void ConversationTrigger_OnConversationEnd_m6662 (ConversationTrigger_t1332 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_12);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0035;
		}
	}
	{
		TransformU5BU5D_t95* L_2 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_3 = (__this->___actor_11);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_2;
		Transform_t54 * L_5 = ___actor;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_6 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		ConversationStarter_TryStartConversation_m6651(__this, L_6, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnSequenceEnd(UnityEngine.Transform)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void ConversationTrigger_OnSequenceEnd_m6663 (ConversationTrigger_t1332 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_12);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0035;
		}
	}
	{
		TransformU5BU5D_t95* L_2 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_3 = (__this->___actor_11);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_2;
		Transform_t54 * L_5 = ___actor;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_6 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		ConversationStarter_TryStartConversation_m6651(__this, L_6, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnUse(UnityEngine.Transform)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void ConversationTrigger_OnUse_m6664 (ConversationTrigger_t1332 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_12);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0036;
		}
	}
	{
		TransformU5BU5D_t95* L_2 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_3 = (__this->___actor_11);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_2, 0)) = (Transform_t54 *)L_3;
		TransformU5BU5D_t95* L_4 = L_2;
		Transform_t54 * L_5 = ___actor;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_4, 1)) = (Transform_t54 *)L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_6 = Tools_Select_m6259(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		ConversationStarter_TryStartConversation_m6651(__this, L_6, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnUse(System.String)
extern "C" void ConversationTrigger_OnUse_m6665 (ConversationTrigger_t1332 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_12);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0024;
		}
	}
	{
		Transform_t54 * L_2 = (__this->___actor_11);
		ConversationStarter_TryStartConversation_m6651(__this, L_2, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnUse()
extern "C" void ConversationTrigger_OnUse_m6666 (ConversationTrigger_t1332 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_12);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0024;
		}
	}
	{
		Transform_t54 * L_2 = (__this->___actor_11);
		ConversationStarter_TryStartConversation_m6651(__this, L_2, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnTriggerEnter(UnityEngine.Collider)
extern "C" void ConversationTrigger_OnTriggerEnter_m6667 (ConversationTrigger_t1332 * __this, Collider_t194 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_12);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0023;
		}
	}
	{
		Collider_t194 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		ConversationTrigger_TryStartConversationOnTriggerEnter_m6671(__this, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnTriggerExit(UnityEngine.Collider)
extern "C" void ConversationTrigger_OnTriggerExit_m6668 (ConversationTrigger_t1332 * __this, Collider_t194 * ___other, const MethodInfo* method)
{
	{
		Collider_t194 * L_0 = ___other;
		NullCheck(L_0);
		Transform_t54 * L_1 = Component_get_transform_m2421(L_0, /*hidden argument*/NULL);
		ConversationTrigger_CheckOnTriggerExit_m6672(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" void ConversationTrigger_OnTriggerEnter2D_m6669 (ConversationTrigger_t1332 * __this, Collider2D_t195 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		bool L_0 = DialogueManager_get_IsConversationActive_m2726(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		bool L_1 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = (__this->___trigger_12);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_002d;
		}
	}
	{
		Collider2D_t195 * L_3 = ___other;
		NullCheck(L_3);
		Transform_t54 * L_4 = Component_get_transform_m2421(L_3, /*hidden argument*/NULL);
		ConversationTrigger_TryStartConversationOnTriggerEnter_m6671(__this, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C" void ConversationTrigger_OnTriggerExit2D_m6670 (ConversationTrigger_t1332 * __this, Collider2D_t195 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t195 * L_0 = ___other;
		NullCheck(L_0);
		Transform_t54 * L_1 = Component_get_transform_m2421(L_0, /*hidden argument*/NULL);
		ConversationTrigger_CheckOnTriggerExit_m6672(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::TryStartConversationOnTriggerEnter(UnityEngine.Transform)
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void ConversationTrigger_TryStartConversationOnTriggerEnter_m6671 (ConversationTrigger_t1332 * __this, Transform_t54 * ___otherTransform, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t54 * L_0 = ___otherTransform;
		Transform_t54 * L_1 = (__this->___actor_11);
		bool L_2 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Condition_t203 * L_3 = (((ConversationStarter_t1325 *)__this)->___condition_4);
		Transform_t54 * L_4 = ___otherTransform;
		NullCheck(L_3);
		bool L_5 = Condition_IsTrue_m2741(L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		TransformU5BU5D_t95* L_6 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_7 = (__this->___actor_11);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_6, 0)) = (Transform_t54 *)L_7;
		TransformU5BU5D_t95* L_8 = L_6;
		Transform_t54 * L_9 = ___otherTransform;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		ArrayElementTypeCheck (L_8, L_9);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_8, 1)) = (Transform_t54 *)L_9;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_10 = Tools_Select_m6259(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Transform_t54 * L_11 = ___otherTransform;
		ConversationStarter_TryStartConversation_m6652(__this, L_10, L_11, /*hidden argument*/NULL);
		float L_12 = Time_get_time_m2414(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___earliestTimeToAllowTriggerExit_14 = ((float)((float)L_12+(float)(0.2f)));
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::CheckOnTriggerExit(UnityEngine.Transform)
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConversationTrigger_CheckOnTriggerExit_m6672 (ConversationTrigger_t1332 * __this, Transform_t54 * ___otherTransform, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
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
		bool L_1 = (__this->___stopConversationOnTriggerExit_13);
		if (!L_1)
		{
			goto IL_008b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		bool L_2 = DialogueManager_get_IsConversationActive_m2726(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		float L_3 = Time_get_time_m2414(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = (__this->___earliestTimeToAllowTriggerExit_14);
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_008b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		Transform_t54 * L_5 = DialogueManager_get_CurrentActor_m5309(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t54 * L_6 = ___otherTransform;
		bool L_7 = Object_op_Equality_m2464(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		Transform_t54 * L_8 = DialogueManager_get_CurrentConversant_m5310(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t54 * L_9 = ___otherTransform;
		bool L_10 = Object_op_Equality_m2464(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}

IL_0051:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_11 = DialogueDebug_get_LogInfo_m2769(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0081;
		}
	}
	{
		ObjectU5BU5D_t21* L_12 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_13 = L_12;
		Transform_t54 * L_14 = ___otherTransform;
		NullCheck(L_14);
		String_t* L_15 = Object_get_name_m2484(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1)) = (Object_t *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1391, L_13, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
	}

IL_0081:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueManager_StopConversation_m5329(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_00a2;
	}

IL_008b:
	{
		int32_t L_17 = (__this->___trigger_12);
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_00a2;
		}
	}
	{
		Transform_t54 * L_18 = ___otherTransform;
		ConversationTrigger_TryStartConversationOnTriggerEnter_m6671(__this, L_18, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::Start()
extern "C" void ConversationTrigger_Start_m6673 (ConversationTrigger_t1332 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_12);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_1 = ConversationTrigger_StartConversationAfterOneFrame_m6677(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnEnable()
extern "C" void ConversationTrigger_OnEnable_m6674 (ConversationTrigger_t1332 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_12);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_1 = ConversationTrigger_StartConversationAfterOneFrame_m6677(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnDisable()
extern "C" void ConversationTrigger_OnDisable_m6675 (ConversationTrigger_t1332 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_12);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)256)))))
		{
			goto IL_001c;
		}
	}
	{
		Transform_t54 * L_1 = (__this->___actor_11);
		ConversationStarter_TryStartConversation_m6651(__this, L_1, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.ConversationTrigger::OnDestroy()
extern "C" void ConversationTrigger_OnDestroy_m6676 (ConversationTrigger_t1332 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_12);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_001c;
		}
	}
	{
		Transform_t54 * L_1 = (__this->___actor_11);
		ConversationStarter_TryStartConversation_m6651(__this, L_1, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.ConversationTrigger::StartConversationAfterOneFrame()
extern TypeInfo* U3CStartConversationAfterOneFrameU3Ec__Iterator13_t1333_il2cpp_TypeInfo_var;
extern "C" Object_t * ConversationTrigger_StartConversationAfterOneFrame_m6677 (ConversationTrigger_t1332 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CStartConversationAfterOneFrameU3Ec__Iterator13_t1333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2556);
		s_Il2CppMethodIntialized = true;
	}
	U3CStartConversationAfterOneFrameU3Ec__Iterator13_t1333 * V_0 = {0};
	{
		U3CStartConversationAfterOneFrameU3Ec__Iterator13_t1333 * L_0 = (U3CStartConversationAfterOneFrameU3Ec__Iterator13_t1333 *)il2cpp_codegen_object_new (U3CStartConversationAfterOneFrameU3Ec__Iterator13_t1333_il2cpp_TypeInfo_var);
		U3CStartConversationAfterOneFrameU3Ec__Iterator13__ctor_m6654(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartConversationAfterOneFrameU3Ec__Iterator13_t1333 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CStartConversationAfterOneFrameU3Ec__Iterator13_t1333 * L_2 = V_0;
		return L_2;
	}
}
// PixelCrushers.DialogueSystem.DialogueEventStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueEventSta.h"
#ifndef _MSC_VER
#else
#endif



// System.Void PixelCrushers.DialogueSystem.DialogueEventStarter::.ctor()
extern "C" void DialogueEventStarter__ctor_m6678 (DialogueEventStarter_t1321 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.DialogueEventStarter::DestroyIfOnce()
extern "C" void DialogueEventStarter_DestroyIfOnce_m6679 (DialogueEventStarter_t1321 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___once_2);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Object_Destroy_m2754(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.DialogueTriggerEvent
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueTriggerEMethodDeclarations.h"



// PixelCrushers.DialogueSystem.LuaTrigger/<StartAfterOneFrame>c__Iterator14
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaTrigger_U3CSt.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.LuaTrigger/<StartAfterOneFrame>c__Iterator14
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaTrigger_U3CStMethodDeclarations.h"

// PixelCrushers.DialogueSystem.LuaTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaTrigger.h"
// PixelCrushers.DialogueSystem.LuaTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaTriggerMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.LuaTrigger/<StartAfterOneFrame>c__Iterator14::.ctor()
extern "C" void U3CStartAfterOneFrameU3Ec__Iterator14__ctor_m6680 (U3CStartAfterOneFrameU3Ec__Iterator14_t1336 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.LuaTrigger/<StartAfterOneFrame>c__Iterator14::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartAfterOneFrameU3Ec__Iterator14_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6681 (U3CStartAfterOneFrameU3Ec__Iterator14_t1336 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.LuaTrigger/<StartAfterOneFrame>c__Iterator14::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartAfterOneFrameU3Ec__Iterator14_System_Collections_IEnumerator_get_Current_m6682 (U3CStartAfterOneFrameU3Ec__Iterator14_t1336 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.LuaTrigger/<StartAfterOneFrame>c__Iterator14::MoveNext()
extern "C" bool U3CStartAfterOneFrameU3Ec__Iterator14_MoveNext_m6683 (U3CStartAfterOneFrameU3Ec__Iterator14_t1336 * __this, const MethodInfo* method)
{
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
			goto IL_0034;
		}
	}
	{
		goto IL_0047;
	}

IL_0021:
	{
		__this->___U24current_1 = NULL;
		__this->___U24PC_0 = 1;
		goto IL_0049;
	}

IL_0034:
	{
		LuaTrigger_t1335 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		LuaTrigger_TryStart_m6702(L_2, (Transform_t54 *)NULL, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_0047:
	{
		return 0;
	}

IL_0049:
	{
		return 1;
	}
	// Dead block : IL_004b: ldloc.1
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger/<StartAfterOneFrame>c__Iterator14::Dispose()
extern "C" void U3CStartAfterOneFrameU3Ec__Iterator14_Dispose_m6684 (U3CStartAfterOneFrameU3Ec__Iterator14_t1336 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger/<StartAfterOneFrame>c__Iterator14::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CStartAfterOneFrameU3Ec__Iterator14_Reset_m6685 (U3CStartAfterOneFrameU3Ec__Iterator14_t1336 * __this, const MethodInfo* method)
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



// System.Void PixelCrushers.DialogueSystem.LuaTrigger::.ctor()
extern "C" void LuaTrigger__ctor_m6686 (LuaTrigger_t1335 * __this, const MethodInfo* method)
{
	{
		__this->___trigger_3 = ((int32_t)32);
		DialogueEventStarter__ctor_m6678(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::OnBarkEnd(UnityEngine.Transform)
extern "C" void LuaTrigger_OnBarkEnd_m6687 (LuaTrigger_t1335 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		LuaTrigger_TryStart_m6702(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::OnConversationEnd(UnityEngine.Transform)
extern "C" void LuaTrigger_OnConversationEnd_m6688 (LuaTrigger_t1335 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		LuaTrigger_TryStart_m6702(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::OnSequenceEnd(UnityEngine.Transform)
extern "C" void LuaTrigger_OnSequenceEnd_m6689 (LuaTrigger_t1335 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_001e;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		LuaTrigger_TryStart_m6702(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::OnUse(UnityEngine.Transform)
extern "C" void LuaTrigger_OnUse_m6690 (LuaTrigger_t1335 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001f;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		LuaTrigger_TryStart_m6702(__this, L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::OnUse(System.String)
extern "C" void LuaTrigger_OnUse_m6691 (LuaTrigger_t1335 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001f;
		}
	}
	{
		LuaTrigger_TryStart_m6702(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::OnUse()
extern "C" void LuaTrigger_OnUse_m6692 (LuaTrigger_t1335 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001f;
		}
	}
	{
		LuaTrigger_TryStart_m6702(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::OnTriggerEnter(UnityEngine.Collider)
extern "C" void LuaTrigger_OnTriggerEnter_m6693 (LuaTrigger_t1335 * __this, Collider_t194 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0023;
		}
	}
	{
		Collider_t194 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		LuaTrigger_TryStart_m6702(__this, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void LuaTrigger_OnTriggerEnter2D_m6694 (LuaTrigger_t1335 * __this, Collider2D_t195 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0023;
		}
	}
	{
		Collider2D_t195 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		LuaTrigger_TryStart_m6702(__this, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::OnTriggerExit(UnityEngine.Collider)
extern "C" void LuaTrigger_OnTriggerExit_m6695 (LuaTrigger_t1335 * __this, Collider_t194 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0027;
		}
	}
	{
		Collider_t194 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		LuaTrigger_TryStart_m6702(__this, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C" void LuaTrigger_OnTriggerExit2D_m6696 (LuaTrigger_t1335 * __this, Collider2D_t195 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0027;
		}
	}
	{
		Collider2D_t195 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		LuaTrigger_TryStart_m6702(__this, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::Start()
extern "C" void LuaTrigger_Start_m6697 (LuaTrigger_t1335 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_1 = LuaTrigger_StartAfterOneFrame_m6701(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::OnEnable()
extern "C" void LuaTrigger_OnEnable_m6698 (LuaTrigger_t1335 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_1 = LuaTrigger_StartAfterOneFrame_m6701(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::OnDisable()
extern "C" void LuaTrigger_OnDisable_m6699 (LuaTrigger_t1335 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)256)))))
		{
			goto IL_0017;
		}
	}
	{
		LuaTrigger_TryStart_m6702(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::OnDestroy()
extern "C" void LuaTrigger_OnDestroy_m6700 (LuaTrigger_t1335 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_0017;
		}
	}
	{
		LuaTrigger_TryStart_m6702(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.LuaTrigger::StartAfterOneFrame()
extern TypeInfo* U3CStartAfterOneFrameU3Ec__Iterator14_t1336_il2cpp_TypeInfo_var;
extern "C" Object_t * LuaTrigger_StartAfterOneFrame_m6701 (LuaTrigger_t1335 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CStartAfterOneFrameU3Ec__Iterator14_t1336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2557);
		s_Il2CppMethodIntialized = true;
	}
	U3CStartAfterOneFrameU3Ec__Iterator14_t1336 * V_0 = {0};
	{
		U3CStartAfterOneFrameU3Ec__Iterator14_t1336 * L_0 = (U3CStartAfterOneFrameU3Ec__Iterator14_t1336 *)il2cpp_codegen_object_new (U3CStartAfterOneFrameU3Ec__Iterator14_t1336_il2cpp_TypeInfo_var);
		U3CStartAfterOneFrameU3Ec__Iterator14__ctor_m6680(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartAfterOneFrameU3Ec__Iterator14_t1336 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CStartAfterOneFrameU3Ec__Iterator14_t1336 * L_2 = V_0;
		return L_2;
	}
}
// System.Void PixelCrushers.DialogueSystem.LuaTrigger::TryStart(UnityEngine.Transform)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* Lua_t617_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" void LuaTrigger_TryStart_m6702 (LuaTrigger_t1335 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		Lua_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___tryingToStart_6);
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
		__this->___tryingToStart_6 = 1;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			Condition_t203 * L_1 = (__this->___condition_4);
			if (!L_1)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			Condition_t203 * L_2 = (__this->___condition_4);
			Transform_t54 * L_3 = ___actor;
			NullCheck(L_2);
			bool L_4 = Condition_IsTrue_m2741(L_2, L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_005b;
			}
		}

IL_002f:
		{
			String_t* L_5 = (__this->___luaCode_5);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_6 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_005b;
			}
		}

IL_003f:
		{
			String_t* L_7 = (__this->___luaCode_5);
			IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
			bool L_8 = DialogueDebug_get_LogInfo_m2769(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Lua_t617_il2cpp_TypeInfo_var);
			Lua_Run_m5241(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
			DialogueManager_CheckAlerts_m5336(NULL /*static, unused*/, /*hidden argument*/NULL);
			DialogueEventStarter_DestroyIfOnce_m6679(__this, /*hidden argument*/NULL);
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x68, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		__this->___tryingToStart_6 = 0;
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0068:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.QuestTrigger/SendMessageAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestTrigger_Sen.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.QuestTrigger/SendMessageAction
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestTrigger_SenMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.QuestTrigger/SendMessageAction::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SendMessageAction__ctor_m6703 (SendMessageAction_t1337 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___message_1 = (String_t*) &_stringLiteral169;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___parameter_2 = L_0;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.QuestTrigger/<StartAfterOneFrame>c__Iterator15
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestTrigger_U3C.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.QuestTrigger/<StartAfterOneFrame>c__Iterator15
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestTrigger_U3CMethodDeclarations.h"

// PixelCrushers.DialogueSystem.QuestTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestTrigger.h"
// PixelCrushers.DialogueSystem.QuestTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestTriggerMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.QuestTrigger/<StartAfterOneFrame>c__Iterator15::.ctor()
extern "C" void U3CStartAfterOneFrameU3Ec__Iterator15__ctor_m6704 (U3CStartAfterOneFrameU3Ec__Iterator15_t1339 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.QuestTrigger/<StartAfterOneFrame>c__Iterator15::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartAfterOneFrameU3Ec__Iterator15_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6705 (U3CStartAfterOneFrameU3Ec__Iterator15_t1339 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.QuestTrigger/<StartAfterOneFrame>c__Iterator15::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartAfterOneFrameU3Ec__Iterator15_System_Collections_IEnumerator_get_Current_m6706 (U3CStartAfterOneFrameU3Ec__Iterator15_t1339 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.QuestTrigger/<StartAfterOneFrame>c__Iterator15::MoveNext()
extern "C" bool U3CStartAfterOneFrameU3Ec__Iterator15_MoveNext_m6707 (U3CStartAfterOneFrameU3Ec__Iterator15_t1339 * __this, const MethodInfo* method)
{
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
			goto IL_0034;
		}
	}
	{
		goto IL_0047;
	}

IL_0021:
	{
		__this->___U24current_1 = NULL;
		__this->___U24PC_0 = 1;
		goto IL_0049;
	}

IL_0034:
	{
		QuestTrigger_t1338 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		QuestTrigger_TryStart_m6726(L_2, (Transform_t54 *)NULL, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_0047:
	{
		return 0;
	}

IL_0049:
	{
		return 1;
	}
	// Dead block : IL_004b: ldloc.1
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger/<StartAfterOneFrame>c__Iterator15::Dispose()
extern "C" void U3CStartAfterOneFrameU3Ec__Iterator15_Dispose_m6708 (U3CStartAfterOneFrameU3Ec__Iterator15_t1339 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger/<StartAfterOneFrame>c__Iterator15::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CStartAfterOneFrameU3Ec__Iterator15_Reset_m6709 (U3CStartAfterOneFrameU3Ec__Iterator15_t1339 * __this, const MethodInfo* method)
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



// System.Void PixelCrushers.DialogueSystem.QuestTrigger::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SendMessageActionU5BU5D_t1340_il2cpp_TypeInfo_var;
extern "C" void QuestTrigger__ctor_m6710 (QuestTrigger_t1338 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		SendMessageActionU5BU5D_t1340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2558);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___trigger_3 = ((int32_t)32);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___luaCode_7 = L_0;
		__this->___sendMessages_10 = ((SendMessageActionU5BU5D_t1340*)SZArrayNew(SendMessageActionU5BU5D_t1340_il2cpp_TypeInfo_var, 0));
		__this->___useQuestNamePicker_11 = 1;
		DialogueEventStarter__ctor_m6678(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::OnBarkEnd(UnityEngine.Transform)
extern "C" void QuestTrigger_OnBarkEnd_m6711 (QuestTrigger_t1338 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		QuestTrigger_TryStart_m6726(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::OnConversationEnd(UnityEngine.Transform)
extern "C" void QuestTrigger_OnConversationEnd_m6712 (QuestTrigger_t1338 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		QuestTrigger_TryStart_m6726(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::OnSequenceEnd(UnityEngine.Transform)
extern "C" void QuestTrigger_OnSequenceEnd_m6713 (QuestTrigger_t1338 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_001e;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		QuestTrigger_TryStart_m6726(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::OnUse(UnityEngine.Transform)
extern "C" void QuestTrigger_OnUse_m6714 (QuestTrigger_t1338 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001f;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		QuestTrigger_TryStart_m6726(__this, L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::OnUse(System.String)
extern "C" void QuestTrigger_OnUse_m6715 (QuestTrigger_t1338 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001f;
		}
	}
	{
		QuestTrigger_TryStart_m6726(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::OnUse()
extern "C" void QuestTrigger_OnUse_m6716 (QuestTrigger_t1338 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001f;
		}
	}
	{
		QuestTrigger_TryStart_m6726(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::OnTriggerEnter(UnityEngine.Collider)
extern "C" void QuestTrigger_OnTriggerEnter_m6717 (QuestTrigger_t1338 * __this, Collider_t194 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0023;
		}
	}
	{
		Collider_t194 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		QuestTrigger_TryStart_m6726(__this, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void QuestTrigger_OnTriggerEnter2D_m6718 (QuestTrigger_t1338 * __this, Collider2D_t195 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0023;
		}
	}
	{
		Collider2D_t195 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		QuestTrigger_TryStart_m6726(__this, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::OnTriggerExit(UnityEngine.Collider)
extern "C" void QuestTrigger_OnTriggerExit_m6719 (QuestTrigger_t1338 * __this, Collider_t194 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0027;
		}
	}
	{
		Collider_t194 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		QuestTrigger_TryStart_m6726(__this, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C" void QuestTrigger_OnTriggerExit2D_m6720 (QuestTrigger_t1338 * __this, Collider2D_t195 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0027;
		}
	}
	{
		Collider2D_t195 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		QuestTrigger_TryStart_m6726(__this, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::Start()
extern "C" void QuestTrigger_Start_m6721 (QuestTrigger_t1338 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_1 = QuestTrigger_StartAfterOneFrame_m6725(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::OnEnable()
extern "C" void QuestTrigger_OnEnable_m6722 (QuestTrigger_t1338 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_1 = QuestTrigger_StartAfterOneFrame_m6725(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::OnDisable()
extern "C" void QuestTrigger_OnDisable_m6723 (QuestTrigger_t1338 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)256)))))
		{
			goto IL_0017;
		}
	}
	{
		QuestTrigger_TryStart_m6726(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::OnDestroy()
extern "C" void QuestTrigger_OnDestroy_m6724 (QuestTrigger_t1338 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_0017;
		}
	}
	{
		QuestTrigger_TryStart_m6726(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.QuestTrigger::StartAfterOneFrame()
extern TypeInfo* U3CStartAfterOneFrameU3Ec__Iterator15_t1339_il2cpp_TypeInfo_var;
extern "C" Object_t * QuestTrigger_StartAfterOneFrame_m6725 (QuestTrigger_t1338 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CStartAfterOneFrameU3Ec__Iterator15_t1339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2560);
		s_Il2CppMethodIntialized = true;
	}
	U3CStartAfterOneFrameU3Ec__Iterator15_t1339 * V_0 = {0};
	{
		U3CStartAfterOneFrameU3Ec__Iterator15_t1339 * L_0 = (U3CStartAfterOneFrameU3Ec__Iterator15_t1339 *)il2cpp_codegen_object_new (U3CStartAfterOneFrameU3Ec__Iterator15_t1339_il2cpp_TypeInfo_var);
		U3CStartAfterOneFrameU3Ec__Iterator15__ctor_m6704(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartAfterOneFrameU3Ec__Iterator15_t1339 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CStartAfterOneFrameU3Ec__Iterator15_t1339 * L_2 = V_0;
		return L_2;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::TryStart(UnityEngine.Transform)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void QuestTrigger_TryStart_m6726 (QuestTrigger_t1338 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___tryingToStart_13);
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
		__this->___tryingToStart_13 = 1;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			Condition_t203 * L_1 = (__this->___condition_4);
			if (!L_1)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			Condition_t203 * L_2 = (__this->___condition_4);
			Transform_t54 * L_3 = ___actor;
			NullCheck(L_2);
			bool L_4 = Condition_IsTrue_m2741(L_2, L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0045;
			}
		}

IL_002f:
		{
			String_t* L_5 = (__this->___questName_5);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_6 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0045;
			}
		}

IL_003f:
		{
			QuestTrigger_Fire_m6727(__this, /*hidden argument*/NULL);
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x52, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		__this->___tryingToStart_13 = 0;
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0052:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.QuestTrigger::Fire()
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* QuestLog_t647_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Lua_t617_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" void QuestTrigger_Fire_m6727 (QuestTrigger_t1338 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		QuestLog_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Lua_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	SendMessageAction_t1337 * V_1 = {0};
	SendMessageActionU5BU5D_t1340* V_2 = {0};
	int32_t V_3 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_0 = DialogueDebug_get_LogInfo_m2769(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t21* L_1 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 3));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		ObjectU5BU5D_t21* L_2 = L_1;
		String_t* L_3 = (__this->___questName_5);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t21* L_4 = L_2;
		int32_t L_5 = (__this->___questState_6);
		IL2CPP_RUNTIME_CLASS_INIT(QuestLog_t647_il2cpp_TypeInfo_var);
		String_t* L_6 = QuestLog_StateToString_m6321(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1392, L_4, /*hidden argument*/NULL);
		Debug_Log_m90(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_003e:
	{
		String_t* L_8 = (__this->___questName_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_10 = (__this->___questName_5);
		int32_t L_11 = (__this->___questState_6);
		IL2CPP_RUNTIME_CLASS_INIT(QuestLog_t647_il2cpp_TypeInfo_var);
		QuestLog_SetQuestState_m6307(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
	}

IL_005f:
	{
		String_t* L_12 = (__this->___luaCode_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_14 = (__this->___luaCode_7);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_15 = DialogueDebug_get_LogInfo_m2769(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lua_t617_il2cpp_TypeInfo_var);
		Lua_Run_m5241(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
	}

IL_0080:
	{
		String_t* L_16 = (__this->___alertMessage_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00d6;
		}
	}
	{
		String_t* L_18 = (__this->___alertMessage_8);
		V_0 = L_18;
		LocalizedTextTable_t252 * L_19 = (__this->___localizedTextTable_9);
		bool L_20 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_19, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00d0;
		}
	}
	{
		LocalizedTextTable_t252 * L_21 = (__this->___localizedTextTable_9);
		String_t* L_22 = (__this->___alertMessage_8);
		NullCheck(L_21);
		bool L_23 = LocalizedTextTable_ContainsField_m2857(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00d0;
		}
	}
	{
		LocalizedTextTable_t252 * L_24 = (__this->___localizedTextTable_9);
		String_t* L_25 = (__this->___alertMessage_8);
		NullCheck(L_24);
		String_t* L_26 = LocalizedTextTable_get_Item_m2859(L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
	}

IL_00d0:
	{
		String_t* L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueManager_ShowAlert_m2724(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		SendMessageActionU5BU5D_t1340* L_28 = (__this->___sendMessages_10);
		V_2 = L_28;
		V_3 = 0;
		goto IL_0125;
	}

IL_00e4:
	{
		SendMessageActionU5BU5D_t1340* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		V_1 = (*(SendMessageAction_t1337 **)(SendMessageAction_t1337 **)SZArrayLdElema(L_29, L_31));
		SendMessageAction_t1337 * L_32 = V_1;
		NullCheck(L_32);
		GameObject_t49 * L_33 = (L_32->___gameObject_0);
		bool L_34 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_33, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0121;
		}
	}
	{
		SendMessageAction_t1337 * L_35 = V_1;
		NullCheck(L_35);
		String_t* L_36 = (L_35->___message_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0121;
		}
	}
	{
		SendMessageAction_t1337 * L_38 = V_1;
		NullCheck(L_38);
		GameObject_t49 * L_39 = (L_38->___gameObject_0);
		SendMessageAction_t1337 * L_40 = V_1;
		NullCheck(L_40);
		String_t* L_41 = (L_40->___message_1);
		SendMessageAction_t1337 * L_42 = V_1;
		NullCheck(L_42);
		String_t* L_43 = (L_42->___parameter_2);
		NullCheck(L_39);
		GameObject_SendMessage_m2975(L_39, L_41, L_43, 1, /*hidden argument*/NULL);
	}

IL_0121:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)((int32_t)L_44+(int32_t)1));
	}

IL_0125:
	{
		int32_t L_45 = V_3;
		SendMessageActionU5BU5D_t1340* L_46 = V_2;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)(((int32_t)(((Array_t *)L_46)->max_length))))))
		{
			goto IL_00e4;
		}
	}
	{
		DialogueEventStarter_DestroyIfOnce_m6679(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.SequenceStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequenceStarter.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SequenceStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequenceStarterMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.SequenceStarter::.ctor()
extern "C" void SequenceStarter__ctor_m6728 (SequenceStarter_t1341 * __this, const MethodInfo* method)
{
	{
		DialogueEventStarter__ctor_m6678(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceStarter::TryStartSequence(UnityEngine.Transform)
extern "C" void SequenceStarter_TryStartSequence_m6729 (SequenceStarter_t1341 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		Transform_t54 * L_0 = ___actor;
		Transform_t54 * L_1 = ___actor;
		SequenceStarter_TryStartSequence_m6730(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceStarter::TryStartSequence(UnityEngine.Transform,UnityEngine.Transform)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" void SequenceStarter_TryStartSequence_m6730 (SequenceStarter_t1341 * __this, Transform_t54 * ___actor, Transform_t54 * ___interactor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___tryingToStart_7);
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
		__this->___tryingToStart_7 = 1;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			Condition_t203 * L_1 = (__this->___condition_6);
			if (!L_1)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			Condition_t203 * L_2 = (__this->___condition_6);
			Transform_t54 * L_3 = ___interactor;
			NullCheck(L_2);
			bool L_4 = Condition_IsTrue_m2741(L_2, L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0086;
			}
		}

IL_002f:
		{
			String_t* L_5 = (__this->___sequence_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_6 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0086;
			}
		}

IL_003f:
		{
			String_t* L_7 = (__this->___sequence_3);
			TransformU5BU5D_t95* L_8 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
			Transform_t54 * L_9 = (__this->___speaker_4);
			NullCheck(L_8);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
			ArrayElementTypeCheck (L_8, L_9);
			*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_8, 0)) = (Transform_t54 *)L_9;
			TransformU5BU5D_t95* L_10 = L_8;
			Transform_t54 * L_11 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
			ArrayElementTypeCheck (L_10, L_11);
			*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_10, 1)) = (Transform_t54 *)L_11;
			IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
			Transform_t54 * L_12 = Tools_Select_m6259(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			TransformU5BU5D_t95* L_13 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
			Transform_t54 * L_14 = (__this->___listener_5);
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
			ArrayElementTypeCheck (L_13, L_14);
			*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_13, 0)) = (Transform_t54 *)L_14;
			TransformU5BU5D_t95* L_15 = L_13;
			Transform_t54 * L_16 = ___actor;
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
			ArrayElementTypeCheck (L_15, L_16);
			*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_15, 1)) = (Transform_t54 *)L_16;
			Transform_t54 * L_17 = Tools_Select_m6259(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
			DialogueManager_PlaySequence_m5340(NULL /*static, unused*/, L_7, L_12, L_17, /*hidden argument*/NULL);
			DialogueEventStarter_DestroyIfOnce_m6679(__this, /*hidden argument*/NULL);
		}

IL_0086:
		{
			IL2CPP_LEAVE(0x93, FINALLY_008b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_008b;
	}

FINALLY_008b:
	{ // begin finally (depth: 1)
		__this->___tryingToStart_7 = 0;
		IL2CPP_END_FINALLY(139)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(139)
	{
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0093:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.SequenceTrigger/<StartSequenceAfterOneFrame>c__Iterator16
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequenceTrigger_.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.SequenceTrigger/<StartSequenceAfterOneFrame>c__Iterator16
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequenceTrigger_MethodDeclarations.h"

// PixelCrushers.DialogueSystem.SequenceTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequenceTrigger.h"


// System.Void PixelCrushers.DialogueSystem.SequenceTrigger/<StartSequenceAfterOneFrame>c__Iterator16::.ctor()
extern "C" void U3CStartSequenceAfterOneFrameU3Ec__Iterator16__ctor_m6731 (U3CStartSequenceAfterOneFrameU3Ec__Iterator16_t1343 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.SequenceTrigger/<StartSequenceAfterOneFrame>c__Iterator16::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartSequenceAfterOneFrameU3Ec__Iterator16_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6732 (U3CStartSequenceAfterOneFrameU3Ec__Iterator16_t1343 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.SequenceTrigger/<StartSequenceAfterOneFrame>c__Iterator16::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartSequenceAfterOneFrameU3Ec__Iterator16_System_Collections_IEnumerator_get_Current_m6733 (U3CStartSequenceAfterOneFrameU3Ec__Iterator16_t1343 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.SequenceTrigger/<StartSequenceAfterOneFrame>c__Iterator16::MoveNext()
extern "C" bool U3CStartSequenceAfterOneFrameU3Ec__Iterator16_MoveNext_m6734 (U3CStartSequenceAfterOneFrameU3Ec__Iterator16_t1343 * __this, const MethodInfo* method)
{
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
			goto IL_0044;
		}
	}
	{
		goto IL_0057;
	}

IL_0021:
	{
		SequenceTrigger_t1342 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		bool L_3 = (L_2->___waitOneFrameOnStartOrEnable_9);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		__this->___U24current_1 = NULL;
		__this->___U24PC_0 = 1;
		goto IL_0059;
	}

IL_0044:
	{
		SequenceTrigger_t1342 * L_4 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_4);
		SequenceStarter_TryStartSequence_m6729(L_4, (Transform_t54 *)NULL, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_0057:
	{
		return 0;
	}

IL_0059:
	{
		return 1;
	}
	// Dead block : IL_005b: ldloc.1
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger/<StartSequenceAfterOneFrame>c__Iterator16::Dispose()
extern "C" void U3CStartSequenceAfterOneFrameU3Ec__Iterator16_Dispose_m6735 (U3CStartSequenceAfterOneFrameU3Ec__Iterator16_t1343 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger/<StartSequenceAfterOneFrame>c__Iterator16::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CStartSequenceAfterOneFrameU3Ec__Iterator16_Reset_m6736 (U3CStartSequenceAfterOneFrameU3Ec__Iterator16_t1343 * __this, const MethodInfo* method)
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
// PixelCrushers.DialogueSystem.SequenceTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequenceTriggerMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::.ctor()
extern "C" void SequenceTrigger__ctor_m6737 (SequenceTrigger_t1342 * __this, const MethodInfo* method)
{
	{
		__this->___trigger_8 = ((int32_t)32);
		__this->___waitOneFrameOnStartOrEnable_9 = 1;
		SequenceStarter__ctor_m6728(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::OnBarkEnd(UnityEngine.Transform)
extern "C" void SequenceTrigger_OnBarkEnd_m6738 (SequenceTrigger_t1342 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_8);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		SequenceStarter_TryStartSequence_m6729(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::OnConversationEnd(UnityEngine.Transform)
extern "C" void SequenceTrigger_OnConversationEnd_m6739 (SequenceTrigger_t1342 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_8);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		SequenceStarter_TryStartSequence_m6729(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::OnSequenceEnd(UnityEngine.Transform)
extern "C" void SequenceTrigger_OnSequenceEnd_m6740 (SequenceTrigger_t1342 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_8);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_001e;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		SequenceStarter_TryStartSequence_m6729(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::OnUse(UnityEngine.Transform)
extern "C" void SequenceTrigger_OnUse_m6741 (SequenceTrigger_t1342 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_8);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001f;
		}
	}
	{
		Transform_t54 * L_2 = ___actor;
		SequenceStarter_TryStartSequence_m6729(__this, L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::OnUse(System.String)
extern "C" void SequenceTrigger_OnUse_m6742 (SequenceTrigger_t1342 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_8);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001f;
		}
	}
	{
		SequenceStarter_TryStartSequence_m6729(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::OnUse()
extern "C" void SequenceTrigger_OnUse_m6743 (SequenceTrigger_t1342 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_8);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001f;
		}
	}
	{
		SequenceStarter_TryStartSequence_m6729(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::OnTriggerEnter(UnityEngine.Collider)
extern "C" void SequenceTrigger_OnTriggerEnter_m6744 (SequenceTrigger_t1342 * __this, Collider_t194 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_8);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0029;
		}
	}
	{
		Collider_t194 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		Collider_t194 * L_4 = ___other;
		NullCheck(L_4);
		Transform_t54 * L_5 = Component_get_transform_m2421(L_4, /*hidden argument*/NULL);
		SequenceStarter_TryStartSequence_m6730(__this, L_3, L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void SequenceTrigger_OnTriggerEnter2D_m6745 (SequenceTrigger_t1342 * __this, Collider2D_t195 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_8);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0029;
		}
	}
	{
		Collider2D_t195 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		Collider2D_t195 * L_4 = ___other;
		NullCheck(L_4);
		Transform_t54 * L_5 = Component_get_transform_m2421(L_4, /*hidden argument*/NULL);
		SequenceStarter_TryStartSequence_m6730(__this, L_3, L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::OnTriggerExit(UnityEngine.Collider)
extern "C" void SequenceTrigger_OnTriggerExit_m6746 (SequenceTrigger_t1342 * __this, Collider_t194 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_8);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_002d;
		}
	}
	{
		Collider_t194 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		Collider_t194 * L_4 = ___other;
		NullCheck(L_4);
		Transform_t54 * L_5 = Component_get_transform_m2421(L_4, /*hidden argument*/NULL);
		SequenceStarter_TryStartSequence_m6730(__this, L_3, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C" void SequenceTrigger_OnTriggerExit2D_m6747 (SequenceTrigger_t1342 * __this, Collider2D_t195 * ___other, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_8);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_002d;
		}
	}
	{
		Collider2D_t195 * L_2 = ___other;
		NullCheck(L_2);
		Transform_t54 * L_3 = Component_get_transform_m2421(L_2, /*hidden argument*/NULL);
		Collider2D_t195 * L_4 = ___other;
		NullCheck(L_4);
		Transform_t54 * L_5 = Component_get_transform_m2421(L_4, /*hidden argument*/NULL);
		SequenceStarter_TryStartSequence_m6730(__this, L_3, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::Start()
extern "C" void SequenceTrigger_Start_m6748 (SequenceTrigger_t1342 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_8);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_1 = SequenceTrigger_StartSequenceAfterOneFrame_m6752(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::OnEnable()
extern "C" void SequenceTrigger_OnEnable_m6749 (SequenceTrigger_t1342 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_8);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_1 = SequenceTrigger_StartSequenceAfterOneFrame_m6752(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::OnDisable()
extern "C" void SequenceTrigger_OnDisable_m6750 (SequenceTrigger_t1342 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_8);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)256)))))
		{
			goto IL_0017;
		}
	}
	{
		SequenceStarter_TryStartSequence_m6729(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.SequenceTrigger::OnDestroy()
extern "C" void SequenceTrigger_OnDestroy_m6751 (SequenceTrigger_t1342 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___trigger_8);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_0017;
		}
	}
	{
		SequenceStarter_TryStartSequence_m6729(__this, (Transform_t54 *)NULL, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.SequenceTrigger::StartSequenceAfterOneFrame()
extern TypeInfo* U3CStartSequenceAfterOneFrameU3Ec__Iterator16_t1343_il2cpp_TypeInfo_var;
extern "C" Object_t * SequenceTrigger_StartSequenceAfterOneFrame_m6752 (SequenceTrigger_t1342 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CStartSequenceAfterOneFrameU3Ec__Iterator16_t1343_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2561);
		s_Il2CppMethodIntialized = true;
	}
	U3CStartSequenceAfterOneFrameU3Ec__Iterator16_t1343 * V_0 = {0};
	{
		U3CStartSequenceAfterOneFrameU3Ec__Iterator16_t1343 * L_0 = (U3CStartSequenceAfterOneFrameU3Ec__Iterator16_t1343 *)il2cpp_codegen_object_new (U3CStartSequenceAfterOneFrameU3Ec__Iterator16_t1343_il2cpp_TypeInfo_var);
		U3CStartSequenceAfterOneFrameU3Ec__Iterator16__ctor_m6731(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartSequenceAfterOneFrameU3Ec__Iterator16_t1343 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CStartSequenceAfterOneFrameU3Ec__Iterator16_t1343 * L_2 = V_0;
		return L_2;
	}
}
// PixelCrushers.DialogueSystem.ConversationPopupAttribute
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConversationPopu.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.ConversationPopupAttribute
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConversationPopuMethodDeclarations.h"

// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.ConversationPopupAttribute::.ctor()
extern "C" void ConversationPopupAttribute__ctor_m6753 (ConversationPopupAttribute_t1344 * __this, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m7350(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.QuestPopupAttribute
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestPopupAttrib.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.QuestPopupAttribute
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestPopupAttribMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.QuestPopupAttribute::.ctor()
extern "C" void QuestPopupAttribute__ctor_m6754 (QuestPopupAttribute_t1345 * __this, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m7350(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.GUIButton
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIButt.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.GUIButton
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIButtMethodDeclarations.h"

// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// PixelCrushers.DialogueSystem.UnityGUI.GUIImageParams
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIImag_0.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIVisi.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUICont.h"
// PixelCrushers.DialogueSystem.InputTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_InputTrigger.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
// PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIVisiMethodDeclarations.h"
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIContMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// PixelCrushers.DialogueSystem.UnityGUI.GUIImageParams
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIImag_0MethodDeclarations.h"
// PixelCrushers.DialogueSystem.InputTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_InputTriggerMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIButton::.ctor()
extern "C" void GUIButton__ctor_m6755 (GUIButton_t1263 * __this, const MethodInfo* method)
{
	{
		__this->___clickable_28 = 1;
		__this->___message_36 = (String_t*) &_stringLiteral122;
		GUIVisibleControl__ctor_m6844(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.GUIButton::get_DefaultGUIStyle()
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t303 * GUIButton_get_DefaultGUIStyle_m6756 (GUIButton_t1263 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUISkin_t197 * L_0 = GUI_get_skin_m2437(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t303 * L_1 = GUISkin_get_button_m7383(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIButton::DrawSelf(UnityEngine.Vector2)
extern "C" void GUIButton_DrawSelf_m6757 (GUIButton_t1263 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___clickable_28);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Vector2_t97  L_1 = ___relativeMousePosition;
		GUIButton_DrawClickable_m6758(__this, L_1, /*hidden argument*/NULL);
		goto IL_001d;
	}

IL_0017:
	{
		GUIButton_DrawUnclickable_m6759(__this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIButton::DrawClickable(UnityEngine.Vector2)
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" void GUIButton_DrawClickable_m6758 (GUIButton_t1263 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t201  V_0 = {0};
	{
		Rect_t201  L_0 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Vector2_t97  L_1 = ___relativeMousePosition;
		bool L_2 = Rect_Contains_m2980((&V_0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetMouseButton_m2465(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		GUIImageParams_t1346 * L_4 = (__this->___pressed_32);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		GUIImageParams_t1346 * L_5 = (__this->___pressed_32);
		Rect_t201  L_6 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GUIImageParams_Draw_m6798(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003b:
	{
		goto IL_007a;
	}

IL_0040:
	{
		bool L_7 = (__this->___isHovered_40);
		if (L_7)
		{
			goto IL_005e;
		}
	}
	{
		__this->___isHovered_40 = 1;
		AudioClip_t261 * L_8 = (__this->___hoverSound_33);
		GUIVisibleControl_PlaySound_m6864(__this, L_8, /*hidden argument*/NULL);
	}

IL_005e:
	{
		GUIImageParams_t1346 * L_9 = (__this->___hover_31);
		if (!L_9)
		{
			goto IL_007a;
		}
	}
	{
		GUIImageParams_t1346 * L_10 = (__this->___hover_31);
		Rect_t201  L_11 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		GUIImageParams_Draw_m6798(L_10, L_11, /*hidden argument*/NULL);
	}

IL_007a:
	{
		goto IL_00ad;
	}

IL_007f:
	{
		bool L_12 = (__this->___isHovered_40);
		if (!L_12)
		{
			goto IL_0091;
		}
	}
	{
		__this->___isHovered_40 = 0;
	}

IL_0091:
	{
		GUIImageParams_t1346 * L_13 = (__this->___normal_30);
		if (!L_13)
		{
			goto IL_00ad;
		}
	}
	{
		GUIImageParams_t1346 * L_14 = (__this->___normal_30);
		Rect_t201  L_15 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		GUIImageParams_Draw_m6798(L_14, L_15, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		Rect_t201  L_16 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		String_t* L_17 = (((GUIVisibleControl_t1347 *)__this)->___text_20);
		GUIStyle_t303 * L_18 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		bool L_19 = GUI_Button_m2441(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00cf;
		}
	}
	{
		GUIButton_Click_m6761(__this, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIButton::DrawUnclickable()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" void GUIButton_DrawUnclickable_m6759 (GUIButton_t1263 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIImageParams_t1346 * L_0 = (__this->___disabled_29);
		NullCheck(L_0);
		Texture2D_t90 * L_1 = (L_0->___texture_1);
		bool L_2 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		GUIImageParams_t1346 * L_3 = (__this->___disabled_29);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		GUIImageParams_t1346 * L_4 = (__this->___disabled_29);
		Rect_t201  L_5 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GUIImageParams_Draw_m6798(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		goto IL_006b;
	}

IL_0037:
	{
		String_t* L_6 = (((GUIVisibleControl_t1347 *)__this)->___text_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_set_enabled_m2440(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Rect_t201  L_8 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		String_t* L_9 = (((GUIVisibleControl_t1347 *)__this)->___text_20);
		GUIStyle_t303 * L_10 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		GUI_Button_m2441(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		GUI_set_enabled_m2440(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIButton::Update()
extern "C" void GUIButton_Update_m6760 (GUIButton_t1263 * __this, const MethodInfo* method)
{
	{
		GUIControl_Update_m6781(__this, /*hidden argument*/NULL);
		bool L_0 = (__this->___clickable_28);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputTrigger_t1241 * L_1 = (__this->___trigger_35);
		NullCheck(L_1);
		bool L_2 = InputTrigger_get_IsDown_m6237(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		GUIButton_Click_m6761(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIButton::Click()
extern TypeInfo* TransformU5BU5D_t95_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIButton_Click_m6761 (GUIButton_t1263 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TransformU5BU5D_t95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t54 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		AudioClip_t261 * L_0 = (__this->___clickSound_34);
		GUIVisibleControl_PlaySound_m6864(__this, L_0, /*hidden argument*/NULL);
		TransformU5BU5D_t95* L_1 = ((TransformU5BU5D_t95*)SZArrayNew(TransformU5BU5D_t95_il2cpp_TypeInfo_var, 2));
		Transform_t54 * L_2 = (__this->___target_38);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_1, 0)) = (Transform_t54 *)L_2;
		TransformU5BU5D_t95* L_3 = L_1;
		Transform_t54 * L_4 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_4);
		*((Transform_t54 **)(Transform_t54 **)SZArrayLdElema(L_3, 1)) = (Transform_t54 *)L_4;
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		Transform_t54 * L_5 = Tools_Select_m6259(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_5;
		V_1 = NULL;
		Object_t * L_6 = (__this->___data_39);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		Object_t * L_7 = (__this->___data_39);
		V_1 = L_7;
		goto IL_0061;
	}

IL_0043:
	{
		String_t* L_8 = (__this->___parameter_37);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_10 = (__this->___parameter_37);
		V_1 = L_10;
		goto IL_0061;
	}

IL_005f:
	{
		V_1 = __this;
	}

IL_0061:
	{
		Transform_t54 * L_11 = V_0;
		String_t* L_12 = (__this->___message_36);
		Object_t * L_13 = V_1;
		NullCheck(L_11);
		Component_SendMessage_m2821(L_11, L_12, L_13, 1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>
#include "mscorlib_System_Collections_Generic_List_1_gen_74.h"
// PixelCrushers.DialogueSystem.UnityGUI.Navigation
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_Navigat.h"
// PixelCrushers.DialogueSystem.UnityGUI.ScaledRect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_ScaledR.h"
// System.Collections.Generic.List`1/Enumerator<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// System.Char
#include "mscorlib_System_Char.h"
// PixelCrushers.DialogueSystem.UnityGUI.AutoSize
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_AutoSiz.h"
// PixelCrushers.DialogueSystem.UnityGUI.Fit
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_Fit.h"
// System.Comparison`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>
#include "mscorlib_System_Comparison_1_gen_3.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// PixelCrushers.DialogueSystem.UnityGUI.ScaledRect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_ScaledRMethodDeclarations.h"
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>
#include "mscorlib_System_Collections_Generic_List_1_gen_74MethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// PixelCrushers.DialogueSystem.UnityGUI.Navigation
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_NavigatMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26MethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// PixelCrushers.DialogueSystem.UnityGUI.Fit
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_FitMethodDeclarations.h"
// System.Comparison`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
struct Component_t462;
struct GUIControlU5BU5D_t1378;
struct Component_t462;
struct ObjectU5BU5D_t21;
// Declaration !!0[] UnityEngine.Component::GetComponents<System.Object>()
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" ObjectU5BU5D_t21* Component_GetComponents_TisObject_t_m3308_gshared (Component_t462 * __this, const MethodInfo* method);
#define Component_GetComponents_TisObject_t_m3308(__this, method) (( ObjectU5BU5D_t21* (*) (Component_t462 *, const MethodInfo*))Component_GetComponents_TisObject_t_m3308_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponents<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>()
// !!0[] UnityEngine.Component::GetComponents<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>()
#define Component_GetComponents_TisGUIControl_t1261_m7398(__this, method) (( GUIControlU5BU5D_t1378* (*) (Component_t462 *, const MethodInfo*))Component_GetComponents_TisObject_t_m3308_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::.ctor()
extern TypeInfo* ScaledRect_t199_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t1351_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m7399_MethodInfo_var;
extern "C" void GUIControl__ctor_m6762 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScaledRect_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		List_1_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2563);
		List_1__ctor_m7399_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484428);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScaledRect_t199_il2cpp_TypeInfo_var);
		ScaledRect_t199 * L_0 = ((ScaledRect_t199_StaticFields*)ScaledRect_t199_il2cpp_TypeInfo_var->static_fields)->___wholeScreen_1;
		ScaledRect_t199 * L_1 = (ScaledRect_t199 *)il2cpp_codegen_object_new (ScaledRect_t199_il2cpp_TypeInfo_var);
		ScaledRect__ctor_m2972(L_1, L_0, /*hidden argument*/NULL);
		__this->___scaledRect_4 = L_1;
		__this->___visible_8 = 1;
		__this->___clipChildren_9 = 1;
		List_1_t1351 * L_2 = (List_1_t1351 *)il2cpp_codegen_object_new (List_1_t1351_il2cpp_TypeInfo_var);
		List_1__ctor_m7399(L_2, /*hidden argument*/List_1__ctor_m7399_MethodInfo_var);
		__this->___children_11 = L_2;
		__this->___needToUpdateLayout_12 = 1;
		Vector2_t97  L_3 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___windowSize_13 = L_3;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Rect PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_rect()
extern "C" Rect_t201  GUIControl_get_rect_m6763 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	{
		Rect_t201  L_0 = (__this->___U3CrectU3Ek__BackingField_15);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::set_rect(UnityEngine.Rect)
extern "C" void GUIControl_set_rect_m6764 (GUIControl_t1261 * __this, Rect_t201  ___value, const MethodInfo* method)
{
	{
		Rect_t201  L_0 = ___value;
		__this->___U3CrectU3Ek__BackingField_15 = L_0;
		return;
	}
}
// UnityEngine.Vector2 PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_Offset()
extern "C" Vector2_t97  GUIControl_get_Offset_m6765 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = (__this->___U3COffsetU3Ek__BackingField_16);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::set_Offset(UnityEngine.Vector2)
extern "C" void GUIControl_set_Offset_m6766 (GUIControl_t1261 * __this, Vector2_t97  ___value, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = ___value;
		__this->___U3COffsetU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl> PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_Children()
extern "C" List_1_t1351 * GUIControl_get_Children_m6767 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	{
		List_1_t1351 * L_0 = (__this->___children_11);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_NeedToUpdateLayout()
extern "C" bool GUIControl_get_NeedToUpdateLayout_m6768 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___needToUpdateLayout_12);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::set_NeedToUpdateLayout(System.Boolean)
extern "C" void GUIControl_set_NeedToUpdateLayout_m6769 (GUIControl_t1261 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___needToUpdateLayout_12 = L_0;
		return;
	}
}
// UnityEngine.Vector2 PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_WindowSize()
extern "C" Vector2_t97  GUIControl_get_WindowSize_m6770 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = (__this->___windowSize_13);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::set_WindowSize(UnityEngine.Vector2)
extern "C" void GUIControl_set_WindowSize_m6771 (GUIControl_t1261 * __this, Vector2_t97  ___value, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = ___value;
		__this->___windowSize_13 = L_0;
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_IsNavigationEnabled()
extern "C" bool GUIControl_get_IsNavigationEnabled_m6772 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Navigation_t1350 * L_0 = (__this->___navigation_7);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Navigation_t1350 * L_1 = (__this->___navigation_7);
		NullCheck(L_1);
		bool L_2 = (L_1->___enabled_2);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.String PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_FullName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" String_t* GUIControl_get_FullName_m6773 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___fullName_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t49 * L_2 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		String_t* L_3 = Tools_GetFullName_m6258(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->___fullName_10 = L_3;
	}

IL_0021:
	{
		String_t* L_4 = (__this->___fullName_10);
		return L_4;
	}
}
// UnityEngine.Vector2 PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_dRect()
extern "C" Vector2_t97  GUIControl_get_dRect_m6774 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = (__this->___U3CdRectU3Ek__BackingField_17);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::set_dRect(UnityEngine.Vector2)
extern "C" void GUIControl_set_dRect_m6775 (GUIControl_t1261 * __this, Vector2_t97  ___value, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = ___value;
		__this->___U3CdRectU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Awake()
extern "C" void GUIControl_Awake_m6776 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUIControl_set_dRect_m6775(__this, L_0, /*hidden argument*/NULL);
		ScaledRect_t199 * L_1 = (__this->___scaledRect_4);
		NullCheck(L_1);
		Rect_t201  L_2 = ScaledRect_GetPixelRect_m2730(L_1, /*hidden argument*/NULL);
		GUIControl_set_rect_m6764(__this, L_2, /*hidden argument*/NULL);
		Vector2_t97  L_3 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUIControl_set_Offset_m6766(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::OnEnable()
extern "C" void GUIControl_OnEnable_m6777 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(10 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Refresh() */, __this);
		bool L_0 = GUIControl_get_IsNavigationEnabled_m6772(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		Navigation_t1350 * L_1 = (__this->___navigation_7);
		NullCheck(L_1);
		bool L_2 = (L_1->___focusFirstControlOnEnable_3);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Navigation_t1350 * L_3 = (__this->___navigation_7);
		NullCheck(L_3);
		Navigation_FocusFirstControl_m6955(L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Draw(UnityEngine.Vector2)
extern "C" void GUIControl_Draw_m6778 (GUIControl_t1261 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___visible_8);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		GameObject_t49 * L_1 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_get_activeSelf_m2433(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(11 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::UpdateLayout() */, __this);
		Vector2_t97  L_3 = ___relativeMousePosition;
		VirtActionInvoker1< Vector2_t97  >::Invoke(6 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::DrawSelf(UnityEngine.Vector2) */, __this, L_3);
		Vector2_t97  L_4 = ___relativeMousePosition;
		VirtActionInvoker1< Vector2_t97  >::Invoke(7 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::DrawChildren(UnityEngine.Vector2) */, __this, L_4);
	}

IL_002f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::DrawSelf(UnityEngine.Vector2)
extern "C" void GUIControl_DrawSelf_m6779 (GUIControl_t1261 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::DrawChildren(UnityEngine.Vector2)
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t1455_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t588_il2cpp_TypeInfo_var;
extern TypeInfo* GUIButton_t1263_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m7401_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m7402_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m7403_MethodInfo_var;
extern "C" void GUIControl_DrawChildren_m6780 (GUIControl_t1261 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Enumerator_t1455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2564);
		IDisposable_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		GUIButton_t1263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2565);
		List_1_GetEnumerator_m7401_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484429);
		Enumerator_get_Current_m7402_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484430);
		Enumerator_MoveNext_m7403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484431);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	GUIControl_t1261 * V_1 = {0};
	bool V_2 = false;
	Vector2_t97  V_3 = {0};
	GUIControl_t1261 * V_4 = {0};
	Enumerator_t1455  V_5 = {0};
	Rect_t201  V_6 = {0};
	Rect_t201  V_7 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	{
		List_1_t1351 * L_0 = GUIControl_get_Children_m6767(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>::get_Count() */, L_0);
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
		bool L_2 = (__this->___clipChildren_9);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Rect_t201  L_3 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_BeginGroup_m7400(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			bool L_4 = GUIControl_get_IsNavigationEnabled_m6772(__this, /*hidden argument*/NULL);
			V_0 = L_4;
			bool L_5 = V_0;
			if (!L_5)
			{
				goto IL_006c;
			}
		}

IL_0034:
		{
			Navigation_t1350 * L_6 = (__this->___navigation_7);
			NullCheck(L_6);
			int32_t L_7 = (L_6->___click_7);
			if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
			{
				goto IL_006c;
			}
		}

IL_0046:
		{
			Event_t662 * L_8 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_8);
			int32_t L_9 = Event_get_type_m3060(L_8, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_9) == ((uint32_t)4))))
			{
				goto IL_006c;
			}
		}

IL_0056:
		{
			Event_t662 * L_10 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_10);
			uint16_t L_11 = Event_get_character_m4906(L_10, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_006c;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x1A9, FINALLY_0198);
		}

IL_006c:
		{
			V_1 = (GUIControl_t1261 *)NULL;
			bool L_12 = GUIControl_get_IsNavigationEnabled_m6772(__this, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0094;
			}
		}

IL_0079:
		{
			Navigation_t1350 * L_13 = (__this->___navigation_7);
			NullCheck(L_13);
			bool L_14 = Navigation_get_IsClicked_m6954(L_13, /*hidden argument*/NULL);
			if (L_14)
			{
				goto IL_0091;
			}
		}

IL_0089:
		{
			bool L_15 = (__this->___navigationSelectButtonClicked_14);
			G_B13_0 = ((int32_t)(L_15));
			goto IL_0092;
		}

IL_0091:
		{
			G_B13_0 = 1;
		}

IL_0092:
		{
			G_B15_0 = G_B13_0;
			goto IL_0095;
		}

IL_0094:
		{
			G_B15_0 = 0;
		}

IL_0095:
		{
			V_2 = G_B15_0;
			float L_16 = ((&___relativeMousePosition)->___x_1);
			Rect_t201  L_17 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
			V_6 = L_17;
			float L_18 = Rect_get_x_m4804((&V_6), /*hidden argument*/NULL);
			float L_19 = ((&___relativeMousePosition)->___y_2);
			Rect_t201  L_20 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
			V_7 = L_20;
			float L_21 = Rect_get_y_m4805((&V_7), /*hidden argument*/NULL);
			Vector2__ctor_m2417((&V_3), ((float)((float)L_16-(float)L_18)), ((float)((float)L_19-(float)L_21)), /*hidden argument*/NULL);
			bool L_22 = V_0;
			if (!L_22)
			{
				goto IL_00dd;
			}
		}

IL_00d1:
		{
			Navigation_t1350 * L_23 = (__this->___navigation_7);
			Vector2_t97  L_24 = V_3;
			NullCheck(L_23);
			Navigation_CheckNavigationInput_m6956(L_23, L_24, /*hidden argument*/NULL);
		}

IL_00dd:
		{
			List_1_t1351 * L_25 = GUIControl_get_Children_m6767(__this, /*hidden argument*/NULL);
			NullCheck(L_25);
			Enumerator_t1455  L_26 = List_1_GetEnumerator_m7401(L_25, /*hidden argument*/List_1_GetEnumerator_m7401_MethodInfo_var);
			V_5 = L_26;
		}

IL_00ea:
		try
		{ // begin try (depth: 2)
			{
				goto IL_013d;
			}

IL_00ef:
			{
				GUIControl_t1261 * L_27 = Enumerator_get_Current_m7402((&V_5), /*hidden argument*/Enumerator_get_Current_m7402_MethodInfo_var);
				V_4 = L_27;
				bool L_28 = GUIControl_get_IsNavigationEnabled_m6772(__this, /*hidden argument*/NULL);
				if (!L_28)
				{
					goto IL_0135;
				}
			}

IL_0103:
			{
				GUIControl_t1261 * L_29 = V_4;
				NullCheck(L_29);
				String_t* L_30 = GUIControl_get_FullName_m6773(L_29, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
				GUI_SetNextControlName_m3064(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
				bool L_31 = V_2;
				if (!L_31)
				{
					goto IL_0135;
				}
			}

IL_0115:
			{
				IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
				String_t* L_32 = GUI_GetNameOfFocusedControl_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
				GUIControl_t1261 * L_33 = V_4;
				NullCheck(L_33);
				String_t* L_34 = GUIControl_get_FullName_m6773(L_33, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				bool L_35 = String_Equals_m2829(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
				if (!L_35)
				{
					goto IL_0135;
				}
			}

IL_012b:
			{
				__this->___navigationSelectButtonClicked_14 = 0;
				GUIControl_t1261 * L_36 = V_4;
				V_1 = L_36;
			}

IL_0135:
			{
				GUIControl_t1261 * L_37 = V_4;
				Vector2_t97  L_38 = V_3;
				NullCheck(L_37);
				GUIControl_Draw_m6778(L_37, L_38, /*hidden argument*/NULL);
			}

IL_013d:
			{
				bool L_39 = Enumerator_MoveNext_m7403((&V_5), /*hidden argument*/Enumerator_MoveNext_m7403_MethodInfo_var);
				if (L_39)
				{
					goto IL_00ef;
				}
			}

IL_0149:
			{
				IL2CPP_LEAVE(0x15B, FINALLY_014e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t468 *)e.ex;
			goto FINALLY_014e;
		}

FINALLY_014e:
		{ // begin finally (depth: 2)
			Enumerator_t1455  L_40 = V_5;
			Enumerator_t1455  L_41 = L_40;
			Object_t * L_42 = Box(Enumerator_t1455_il2cpp_TypeInfo_var, &L_41);
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t588_il2cpp_TypeInfo_var, L_42);
			IL2CPP_END_FINALLY(334)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(334)
		{
			IL2CPP_JUMP_TBL(0x15B, IL_015b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
		}

IL_015b:
		{
			bool L_43 = V_0;
			if (!L_43)
			{
				goto IL_0171;
			}
		}

IL_0161:
		{
			Navigation_t1350 * L_44 = (__this->___navigation_7);
			NullCheck(L_44);
			String_t* L_45 = Navigation_get_FocusedControlName_m6951(L_44, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
			GUI_FocusControl_m3063(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		}

IL_0171:
		{
			GUIControl_t1261 * L_46 = V_1;
			bool L_47 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_46, (Object_t584 *)NULL, /*hidden argument*/NULL);
			if (!L_47)
			{
				goto IL_0193;
			}
		}

IL_017d:
		{
			GUIControl_t1261 * L_48 = V_1;
			if (!((GUIButton_t1263 *)IsInst(L_48, GUIButton_t1263_il2cpp_TypeInfo_var)))
			{
				goto IL_0193;
			}
		}

IL_0188:
		{
			GUIControl_t1261 * L_49 = V_1;
			NullCheck(((GUIButton_t1263 *)IsInst(L_49, GUIButton_t1263_il2cpp_TypeInfo_var)));
			GUIButton_Click_m6761(((GUIButton_t1263 *)IsInst(L_49, GUIButton_t1263_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_0193:
		{
			IL2CPP_LEAVE(0x1A9, FINALLY_0198);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0198;
	}

FINALLY_0198:
	{ // begin finally (depth: 1)
		{
			bool L_50 = (__this->___clipChildren_9);
			if (!L_50)
			{
				goto IL_01a8;
			}
		}

IL_01a3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
			GUI_EndGroup_m7404(NULL /*static, unused*/, /*hidden argument*/NULL);
		}

IL_01a8:
		{
			IL2CPP_END_FINALLY(408)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(408)
	{
		IL2CPP_JUMP_TBL(0x1A9, IL_01a9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_01a9:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Update()
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern "C" void GUIControl_Update_m6781 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GUIControl_get_IsNavigationEnabled_m6772(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Navigation_t1350 * L_1 = (__this->___navigation_7);
		NullCheck(L_1);
		String_t* L_2 = (L_1->___clickButton_6);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetButtonDown_m2933(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->___navigationSelectButtonClicked_14 = L_3;
	}

IL_0021:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Refresh(UnityEngine.Vector2)
extern "C" void GUIControl_Refresh_m6782 (GUIControl_t1261 * __this, Vector2_t97  ___windowSize, const MethodInfo* method)
{
	{
		GUIControl_set_NeedToUpdateLayout_m6769(__this, 1, /*hidden argument*/NULL);
		Vector2_t97  L_0 = ___windowSize;
		GUIControl_set_WindowSize_m6771(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Refresh()
extern "C" void GUIControl_Refresh_m6783 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	{
		GUIControl_set_NeedToUpdateLayout_m6769(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::UpdateLayout()
extern "C" void GUIControl_UpdateLayout_m6784 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	{
		bool L_0 = GUIControl_get_NeedToUpdateLayout_m6768(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		VirtActionInvoker0::Invoke(12 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::UpdateLayoutSelf() */, __this);
		VirtActionInvoker0::Invoke(14 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::FitSelf() */, __this);
		GUIControl_UpdateLayoutChildren_m6788(__this, /*hidden argument*/NULL);
		GUIControl_FitChildren_m6790(__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::UpdateLayoutSelf()
extern "C" void GUIControl_UpdateLayoutSelf_m6785 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	Vector2_t97  V_0 = {0};
	Vector2_t97  V_1 = {0};
	Vector2_t97  V_2 = {0};
	Rect_t201  V_3 = {0};
	Vector2_t97  V_4 = {0};
	Rect_t201  V_5 = {0};
	Vector2_t97  V_6 = {0};
	Rect_t201  V_7 = {0};
	Rect_t201  V_8 = {0};
	Vector2_t97  V_9 = {0};
	Vector2_t97  V_10 = {0};
	Rect_t201  V_11 = {0};
	Vector2_t97  V_12 = {0};
	Rect_t201  V_13 = {0};
	Vector2_t97  V_14 = {0};
	Rect_t201  V_15 = {0};
	Rect_t201  V_16 = {0};
	{
		GUIControl_set_NeedToUpdateLayout_m6769(__this, 0, /*hidden argument*/NULL);
		Vector2_t97  L_0 = GUIControl_get_WindowSize_m6770(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_2 = Screen_get_width_m2424(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_height_m2428(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t97  L_4 = {0};
		Vector2__ctor_m2417(&L_4, (((float)L_2)), (((float)L_3)), /*hidden argument*/NULL);
		GUIControl_set_WindowSize_m6771(__this, L_4, /*hidden argument*/NULL);
	}

IL_0036:
	{
		ScaledRect_t199 * L_5 = (__this->___scaledRect_4);
		Vector2_t97  L_6 = GUIControl_get_WindowSize_m6770(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rect_t201  L_7 = ScaledRect_GetPixelRect_m6934(L_5, L_6, /*hidden argument*/NULL);
		GUIControl_set_rect_m6764(__this, L_7, /*hidden argument*/NULL);
		Vector2_t97  L_8 = GUIControl_get_Offset_m6765(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = ((&V_1)->___x_1);
		if ((!(((float)L_9) == ((float)(0.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		Vector2_t97  L_10 = GUIControl_get_Offset_m6765(__this, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = ((&V_2)->___y_2);
		if ((((float)L_11) == ((float)(0.0f))))
		{
			goto IL_00e3;
		}
	}

IL_007d:
	{
		Rect_t201  L_12 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_3 = L_12;
		float L_13 = Rect_get_x_m4804((&V_3), /*hidden argument*/NULL);
		Vector2_t97  L_14 = GUIControl_get_Offset_m6765(__this, /*hidden argument*/NULL);
		V_4 = L_14;
		float L_15 = ((&V_4)->___x_1);
		Rect_t201  L_16 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_5 = L_16;
		float L_17 = Rect_get_y_m4805((&V_5), /*hidden argument*/NULL);
		Vector2_t97  L_18 = GUIControl_get_Offset_m6765(__this, /*hidden argument*/NULL);
		V_6 = L_18;
		float L_19 = ((&V_6)->___y_2);
		Rect_t201  L_20 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_7 = L_20;
		float L_21 = Rect_get_width_m2728((&V_7), /*hidden argument*/NULL);
		Rect_t201  L_22 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_8 = L_22;
		float L_23 = Rect_get_height_m2868((&V_8), /*hidden argument*/NULL);
		Rect_t201  L_24 = {0};
		Rect__ctor_m2425(&L_24, ((float)((float)L_13+(float)L_15)), ((float)((float)L_17+(float)L_19)), L_21, L_23, /*hidden argument*/NULL);
		GUIControl_set_rect_m6764(__this, L_24, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		Vector2_t97  L_25 = GUIControl_get_dRect_m6774(__this, /*hidden argument*/NULL);
		V_9 = L_25;
		float L_26 = ((&V_9)->___x_1);
		if ((!(((float)L_26) == ((float)(0.0f)))))
		{
			goto IL_0115;
		}
	}
	{
		Vector2_t97  L_27 = GUIControl_get_dRect_m6774(__this, /*hidden argument*/NULL);
		V_10 = L_27;
		float L_28 = ((&V_10)->___y_2);
		if ((((float)L_28) == ((float)(0.0f))))
		{
			goto IL_017c;
		}
	}

IL_0115:
	{
		Rect_t201  L_29 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_11 = L_29;
		float L_30 = Rect_get_x_m4804((&V_11), /*hidden argument*/NULL);
		Vector2_t97  L_31 = GUIControl_get_dRect_m6774(__this, /*hidden argument*/NULL);
		V_12 = L_31;
		float L_32 = ((&V_12)->___x_1);
		Rect_t201  L_33 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_13 = L_33;
		float L_34 = Rect_get_y_m4805((&V_13), /*hidden argument*/NULL);
		Vector2_t97  L_35 = GUIControl_get_dRect_m6774(__this, /*hidden argument*/NULL);
		V_14 = L_35;
		float L_36 = ((&V_14)->___y_2);
		Rect_t201  L_37 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_15 = L_37;
		float L_38 = Rect_get_width_m2728((&V_15), /*hidden argument*/NULL);
		Rect_t201  L_39 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_16 = L_39;
		float L_40 = Rect_get_height_m2868((&V_16), /*hidden argument*/NULL);
		Rect_t201  L_41 = {0};
		Rect__ctor_m2425(&L_41, ((float)((float)L_30+(float)L_32)), ((float)((float)L_34+(float)L_36)), L_38, L_40, /*hidden argument*/NULL);
		GUIControl_set_rect_m6764(__this, L_41, /*hidden argument*/NULL);
	}

IL_017c:
	{
		AutoSize_t1348 * L_42 = (__this->___autoSize_5);
		if (!L_42)
		{
			goto IL_018d;
		}
	}
	{
		VirtActionInvoker0::Invoke(13 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::AutoSizeSelf() */, __this);
	}

IL_018d:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::AutoSizeSelf()
extern "C" void GUIControl_AutoSizeSelf_m6786 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::FitSelf()
extern "C" void GUIControl_FitSelf_m6787 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Rect_t201  V_4 = {0};
	Rect_t201  V_5 = {0};
	Rect_t201  V_6 = {0};
	Rect_t201  V_7 = {0};
	Rect_t201  V_8 = {0};
	Rect_t201  V_9 = {0};
	Rect_t201  V_10 = {0};
	Rect_t201  V_11 = {0};
	Rect_t201  V_12 = {0};
	Rect_t201  V_13 = {0};
	Rect_t201  V_14 = {0};
	Rect_t201  V_15 = {0};
	{
		Fit_t1349 * L_0 = (__this->___fit_6);
		if (!L_0)
		{
			goto IL_020a;
		}
	}
	{
		Fit_t1349 * L_1 = (__this->___fit_6);
		NullCheck(L_1);
		bool L_2 = Fit_get_IsSpecified_m6946(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_020a;
		}
	}
	{
		Rect_t201  L_3 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_4 = L_3;
		float L_4 = Rect_get_xMin_m4867((&V_4), /*hidden argument*/NULL);
		V_0 = L_4;
		Rect_t201  L_5 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_5 = L_5;
		float L_6 = Rect_get_xMax_m4860((&V_5), /*hidden argument*/NULL);
		V_1 = L_6;
		Rect_t201  L_7 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_6 = L_7;
		float L_8 = Rect_get_yMin_m4866((&V_6), /*hidden argument*/NULL);
		V_2 = L_8;
		Rect_t201  L_9 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_7 = L_9;
		float L_10 = Rect_get_yMax_m4861((&V_7), /*hidden argument*/NULL);
		V_3 = L_10;
		Fit_t1349 * L_11 = (__this->___fit_6);
		NullCheck(L_11);
		GUIControl_t1261 * L_12 = (L_11->___above_0);
		bool L_13 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_12, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c3;
		}
	}
	{
		Fit_t1349 * L_14 = (__this->___fit_6);
		NullCheck(L_14);
		GUIControl_t1261 * L_15 = (L_14->___above_0);
		NullCheck(L_15);
		Rect_t201  L_16 = GUIControl_get_rect_m6763(L_15, /*hidden argument*/NULL);
		V_8 = L_16;
		float L_17 = Rect_get_yMin_m4866((&V_8), /*hidden argument*/NULL);
		V_3 = L_17;
		Fit_t1349 * L_18 = (__this->___fit_6);
		NullCheck(L_18);
		GUIControl_t1261 * L_19 = (L_18->___below_1);
		bool L_20 = Object_op_Equality_m2464(NULL /*static, unused*/, L_19, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00c3;
		}
	}
	{
		Fit_t1349 * L_21 = (__this->___fit_6);
		NullCheck(L_21);
		bool L_22 = (L_21->___expandToFit_4);
		if (L_22)
		{
			goto IL_00c3;
		}
	}
	{
		float L_23 = V_3;
		Rect_t201  L_24 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_9 = L_24;
		float L_25 = Rect_get_height_m2868((&V_9), /*hidden argument*/NULL);
		V_2 = ((float)((float)L_23-(float)L_25));
	}

IL_00c3:
	{
		Fit_t1349 * L_26 = (__this->___fit_6);
		NullCheck(L_26);
		GUIControl_t1261 * L_27 = (L_26->___below_1);
		bool L_28 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_27, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_012b;
		}
	}
	{
		Fit_t1349 * L_29 = (__this->___fit_6);
		NullCheck(L_29);
		GUIControl_t1261 * L_30 = (L_29->___below_1);
		NullCheck(L_30);
		Rect_t201  L_31 = GUIControl_get_rect_m6763(L_30, /*hidden argument*/NULL);
		V_10 = L_31;
		float L_32 = Rect_get_yMax_m4861((&V_10), /*hidden argument*/NULL);
		V_2 = L_32;
		Fit_t1349 * L_33 = (__this->___fit_6);
		NullCheck(L_33);
		GUIControl_t1261 * L_34 = (L_33->___above_0);
		bool L_35 = Object_op_Equality_m2464(NULL /*static, unused*/, L_34, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_012b;
		}
	}
	{
		Fit_t1349 * L_36 = (__this->___fit_6);
		NullCheck(L_36);
		bool L_37 = (L_36->___expandToFit_4);
		if (L_37)
		{
			goto IL_012b;
		}
	}
	{
		float L_38 = V_2;
		Rect_t201  L_39 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_11 = L_39;
		float L_40 = Rect_get_height_m2868((&V_11), /*hidden argument*/NULL);
		V_3 = ((float)((float)L_38+(float)L_40));
	}

IL_012b:
	{
		Fit_t1349 * L_41 = (__this->___fit_6);
		NullCheck(L_41);
		GUIControl_t1261 * L_42 = (L_41->___leftOf_2);
		bool L_43 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_42, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0193;
		}
	}
	{
		Fit_t1349 * L_44 = (__this->___fit_6);
		NullCheck(L_44);
		GUIControl_t1261 * L_45 = (L_44->___leftOf_2);
		NullCheck(L_45);
		Rect_t201  L_46 = GUIControl_get_rect_m6763(L_45, /*hidden argument*/NULL);
		V_12 = L_46;
		float L_47 = Rect_get_xMin_m4867((&V_12), /*hidden argument*/NULL);
		V_1 = L_47;
		Fit_t1349 * L_48 = (__this->___fit_6);
		NullCheck(L_48);
		GUIControl_t1261 * L_49 = (L_48->___rightOf_3);
		bool L_50 = Object_op_Equality_m2464(NULL /*static, unused*/, L_49, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0193;
		}
	}
	{
		Fit_t1349 * L_51 = (__this->___fit_6);
		NullCheck(L_51);
		bool L_52 = (L_51->___expandToFit_4);
		if (L_52)
		{
			goto IL_0193;
		}
	}
	{
		float L_53 = V_1;
		Rect_t201  L_54 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_13 = L_54;
		float L_55 = Rect_get_width_m2728((&V_13), /*hidden argument*/NULL);
		V_0 = ((float)((float)L_53-(float)L_55));
	}

IL_0193:
	{
		Fit_t1349 * L_56 = (__this->___fit_6);
		NullCheck(L_56);
		GUIControl_t1261 * L_57 = (L_56->___rightOf_3);
		bool L_58 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_57, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_01fb;
		}
	}
	{
		Fit_t1349 * L_59 = (__this->___fit_6);
		NullCheck(L_59);
		GUIControl_t1261 * L_60 = (L_59->___rightOf_3);
		NullCheck(L_60);
		Rect_t201  L_61 = GUIControl_get_rect_m6763(L_60, /*hidden argument*/NULL);
		V_14 = L_61;
		float L_62 = Rect_get_xMax_m4860((&V_14), /*hidden argument*/NULL);
		V_0 = L_62;
		Fit_t1349 * L_63 = (__this->___fit_6);
		NullCheck(L_63);
		GUIControl_t1261 * L_64 = (L_63->___rightOf_3);
		bool L_65 = Object_op_Equality_m2464(NULL /*static, unused*/, L_64, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_01fb;
		}
	}
	{
		Fit_t1349 * L_66 = (__this->___fit_6);
		NullCheck(L_66);
		bool L_67 = (L_66->___expandToFit_4);
		if (L_67)
		{
			goto IL_01fb;
		}
	}
	{
		float L_68 = V_0;
		Rect_t201  L_69 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_15 = L_69;
		float L_70 = Rect_get_width_m2728((&V_15), /*hidden argument*/NULL);
		V_1 = ((float)((float)L_68+(float)L_70));
	}

IL_01fb:
	{
		float L_71 = V_0;
		float L_72 = V_2;
		float L_73 = V_1;
		float L_74 = V_3;
		Rect_t201  L_75 = Rect_MinMaxRect_m7405(NULL /*static, unused*/, L_71, L_72, L_73, L_74, /*hidden argument*/NULL);
		GUIControl_set_rect_m6764(__this, L_75, /*hidden argument*/NULL);
	}

IL_020a:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::UpdateLayoutChildren()
extern TypeInfo* Enumerator_t1455_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t588_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m7401_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m7402_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m7403_MethodInfo_var;
extern "C" void GUIControl_UpdateLayoutChildren_m6788 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t1455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2564);
		IDisposable_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		List_1_GetEnumerator_m7401_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484429);
		Enumerator_get_Current_m7402_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484430);
		Enumerator_MoveNext_m7403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484431);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t97  V_0 = {0};
	GUIControl_t1261 * V_1 = {0};
	Enumerator_t1455  V_2 = {0};
	Rect_t201  V_3 = {0};
	Rect_t201  V_4 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GUIControl_FindChildren_m6791(__this, /*hidden argument*/NULL);
		bool L_0 = (__this->___depthSortChildren_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		GUIControl_SortChildren_m6792(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		Rect_t201  L_1 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_3 = L_1;
		float L_2 = Rect_get_width_m2728((&V_3), /*hidden argument*/NULL);
		Rect_t201  L_3 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_4 = L_3;
		float L_4 = Rect_get_height_m2868((&V_4), /*hidden argument*/NULL);
		Vector2__ctor_m2417((&V_0), L_2, L_4, /*hidden argument*/NULL);
		List_1_t1351 * L_5 = GUIControl_get_Children_m6767(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Enumerator_t1455  L_6 = List_1_GetEnumerator_m7401(L_5, /*hidden argument*/List_1_GetEnumerator_m7401_MethodInfo_var);
		V_2 = L_6;
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_004c:
		{
			GUIControl_t1261 * L_7 = Enumerator_get_Current_m7402((&V_2), /*hidden argument*/Enumerator_get_Current_m7402_MethodInfo_var);
			V_1 = L_7;
			GUIControl_t1261 * L_8 = V_1;
			Vector2_t97  L_9 = V_0;
			GUIControl_UpdateLayoutChild_m6789(__this, L_8, L_9, /*hidden argument*/NULL);
		}

IL_005c:
		{
			bool L_10 = Enumerator_MoveNext_m7403((&V_2), /*hidden argument*/Enumerator_MoveNext_m7403_MethodInfo_var);
			if (L_10)
			{
				goto IL_004c;
			}
		}

IL_0068:
		{
			IL2CPP_LEAVE(0x79, FINALLY_006d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_006d;
	}

FINALLY_006d:
	{ // begin finally (depth: 1)
		Enumerator_t1455  L_11 = V_2;
		Enumerator_t1455  L_12 = L_11;
		Object_t * L_13 = Box(Enumerator_t1455_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t588_il2cpp_TypeInfo_var, L_13);
		IL2CPP_END_FINALLY(109)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(109)
	{
		IL2CPP_JUMP_TBL(0x79, IL_0079)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0079:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::UpdateLayoutChild(PixelCrushers.DialogueSystem.UnityGUI.GUIControl,UnityEngine.Vector2)
extern "C" void GUIControl_UpdateLayoutChild_m6789 (GUIControl_t1261 * __this, GUIControl_t1261 * ___child, Vector2_t97  ___childWindowSize, const MethodInfo* method)
{
	Rect_t201  V_0 = {0};
	Rect_t201  V_1 = {0};
	GUIControl_t1261 * G_B2_0 = {0};
	GUIControl_t1261 * G_B1_0 = {0};
	Vector2_t97  G_B3_0 = {0};
	GUIControl_t1261 * G_B3_1 = {0};
	{
		GUIControl_t1261 * L_0 = ___child;
		Vector2_t97  L_1 = ___childWindowSize;
		NullCheck(L_0);
		VirtActionInvoker1< Vector2_t97  >::Invoke(9 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Refresh(UnityEngine.Vector2) */, L_0, L_1);
		GUIControl_t1261 * L_2 = ___child;
		bool L_3 = (__this->___clipChildren_9);
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_001d;
		}
	}
	{
		Vector2_t97  L_4 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_003e;
	}

IL_001d:
	{
		Rect_t201  L_5 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = Rect_get_x_m4804((&V_0), /*hidden argument*/NULL);
		Rect_t201  L_7 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = Rect_get_y_m4805((&V_1), /*hidden argument*/NULL);
		Vector2_t97  L_9 = {0};
		Vector2__ctor_m2417(&L_9, L_6, L_8, /*hidden argument*/NULL);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_003e:
	{
		NullCheck(G_B3_1);
		GUIControl_set_dRect_m6775(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		GUIControl_t1261 * L_10 = ___child;
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(11 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::UpdateLayout() */, L_10);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::FitChildren()
extern "C" void GUIControl_FitChildren_m6790 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001c;
	}

IL_0007:
	{
		List_1_t1351 * L_0 = GUIControl_get_Children_m6767(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GUIControl_t1261 * L_2 = (GUIControl_t1261 *)VirtFuncInvoker1< GUIControl_t1261 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>::get_Item(System.Int32) */, L_0, L_1);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(14 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::FitSelf() */, L_2);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		List_1_t1351 * L_5 = GUIControl_get_Children_m6767(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>::get_Count() */, L_5);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::FindChildren()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t54_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t588_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponents_TisGUIControl_t1261_m7398_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m7406_MethodInfo_var;
extern "C" void GUIControl_FindChildren_m6791 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		Transform_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		IDisposable_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		Component_GetComponents_TisGUIControl_t1261_m7398_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484432);
		List_1_AddRange_m7406_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484433);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t54 * V_0 = {0};
	Object_t * V_1 = {0};
	GUIControlU5BU5D_t1378* V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t1351 * L_0 = GUIControl_get_Children_m6767(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>::Clear() */, L_0);
		Transform_t54 * L_1 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_001c:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_3);
			V_0 = ((Transform_t54 *)Castclass(L_4, Transform_t54_il2cpp_TypeInfo_var));
			Transform_t54 * L_5 = V_0;
			NullCheck(L_5);
			GUIControlU5BU5D_t1378* L_6 = Component_GetComponents_TisGUIControl_t1261_m7398(L_5, /*hidden argument*/Component_GetComponents_TisGUIControl_t1261_m7398_MethodInfo_var);
			V_2 = L_6;
			List_1_t1351 * L_7 = GUIControl_get_Children_m6767(__this, /*hidden argument*/NULL);
			GUIControlU5BU5D_t1378* L_8 = V_2;
			NullCheck(L_7);
			List_1_AddRange_m7406(L_7, (Object_t*)(Object_t*)L_8, /*hidden argument*/List_1_AddRange_m7406_MethodInfo_var);
			GUIControlU5BU5D_t1378* L_9 = V_2;
			NullCheck(L_9);
			if ((((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))) <= ((int32_t)0)))
			{
				goto IL_004c;
			}
		}

IL_0044:
		{
			GUIControlU5BU5D_t1378* L_10 = V_2;
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
			int32_t L_11 = 0;
			NullCheck((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_10, L_11)));
			GUIControl_FindChildren_m6791((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_10, L_11)), /*hidden argument*/NULL);
		}

IL_004c:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_001c;
			}
		}

IL_0057:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_1;
			V_3 = ((Object_t *)IsInst(L_14, IDisposable_t588_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_3;
			if (L_15)
			{
				goto IL_0067;
			}
		}

IL_0066:
		{
			IL2CPP_END_FINALLY(92)
		}

IL_0067:
		{
			Object_t * L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t588_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(92)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_006e:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::SortChildren()
extern TypeInfo* GUIControl_t1261_il2cpp_TypeInfo_var;
extern TypeInfo* Comparison_1_t1352_il2cpp_TypeInfo_var;
extern const MethodInfo* GUIControl_U3CSortChildrenU3Em__35_m6793_MethodInfo_var;
extern const MethodInfo* Comparison_1__ctor_m7407_MethodInfo_var;
extern const MethodInfo* List_1_Sort_m7408_MethodInfo_var;
extern "C" void GUIControl_SortChildren_m6792 (GUIControl_t1261 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIControl_t1261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2562);
		Comparison_1_t1352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2566);
		GUIControl_U3CSortChildrenU3Em__35_m6793_MethodInfo_var = il2cpp_codegen_method_info_from_index(786);
		Comparison_1__ctor_m7407_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484435);
		List_1_Sort_m7408_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484436);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t1351 * G_B2_0 = {0};
	List_1_t1351 * G_B1_0 = {0};
	{
		List_1_t1351 * L_0 = GUIControl_get_Children_m6767(__this, /*hidden argument*/NULL);
		Comparison_1_t1352 * L_1 = ((GUIControl_t1261_StaticFields*)GUIControl_t1261_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)GUIControl_U3CSortChildrenU3Em__35_m6793_MethodInfo_var };
		Comparison_1_t1352 * L_3 = (Comparison_1_t1352 *)il2cpp_codegen_object_new (Comparison_1_t1352_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m7407(L_3, NULL, L_2, /*hidden argument*/Comparison_1__ctor_m7407_MethodInfo_var);
		((GUIControl_t1261_StaticFields*)GUIControl_t1261_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Comparison_1_t1352 * L_4 = ((GUIControl_t1261_StaticFields*)GUIControl_t1261_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache10_18;
		NullCheck(G_B2_0);
		List_1_Sort_m7408(G_B2_0, L_4, /*hidden argument*/List_1_Sort_m7408_MethodInfo_var);
		return;
	}
}
// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.GUIControl::<SortChildren>m__35(PixelCrushers.DialogueSystem.UnityGUI.GUIControl,PixelCrushers.DialogueSystem.UnityGUI.GUIControl)
extern "C" int32_t GUIControl_U3CSortChildrenU3Em__35_m6793 (Object_t * __this /* static, unused */, GUIControl_t1261 * ___x, GUIControl_t1261 * ___y, const MethodInfo* method)
{
	{
		GUIControl_t1261 * L_0 = ___x;
		NullCheck(L_0);
		int32_t* L_1 = &(L_0->___depth_2);
		GUIControl_t1261 * L_2 = ___y;
		NullCheck(L_2);
		int32_t L_3 = (L_2->___depth_2);
		int32_t L_4 = Int32_CompareTo_m4686(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.GUIImage
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIImag.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.GUIImage
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIImagMethodDeclarations.h"

// PixelCrushers.DialogueSystem.UnityGUI.ImageAnimation
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_ImageAn.h"
// PixelCrushers.DialogueSystem.UnityGUI.ImageAnimation
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_ImageAnMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIImage::.ctor()
extern TypeInfo* GUIImageParams_t1346_il2cpp_TypeInfo_var;
extern TypeInfo* ImageAnimation_t1353_il2cpp_TypeInfo_var;
extern "C" void GUIImage__ctor_m6794 (GUIImage_t1354 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIImageParams_t1346_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2567);
		ImageAnimation_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2568);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIImageParams_t1346 * L_0 = (GUIImageParams_t1346 *)il2cpp_codegen_object_new (GUIImageParams_t1346_il2cpp_TypeInfo_var);
		GUIImageParams__ctor_m6797(L_0, /*hidden argument*/NULL);
		__this->___image_28 = L_0;
		ImageAnimation_t1353 * L_1 = (ImageAnimation_t1353 *)il2cpp_codegen_object_new (ImageAnimation_t1353_il2cpp_TypeInfo_var);
		ImageAnimation__ctor_m6947(L_1, /*hidden argument*/NULL);
		__this->___imageAnimation_29 = L_1;
		GUIVisibleControl__ctor_m6844(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIImage::DrawSelf(UnityEngine.Vector2)
extern "C" void GUIImage_DrawSelf_m6795 (GUIImage_t1354 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method)
{
	{
		GUIImageParams_t1346 * L_0 = (__this->___image_28);
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		ImageAnimation_t1353 * L_1 = (__this->___imageAnimation_29);
		NullCheck(L_1);
		bool L_2 = (L_1->___animate_0);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		ImageAnimation_t1353 * L_3 = (__this->___imageAnimation_29);
		Rect_t201  L_4 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		GUIImageParams_t1346 * L_5 = (__this->___image_28);
		NullCheck(L_5);
		Texture2D_t90 * L_6 = (L_5->___texture_1);
		NullCheck(L_3);
		ImageAnimation_DrawAnimation_m6949(L_3, L_4, L_6, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_003c:
	{
		GUIImageParams_t1346 * L_7 = (__this->___image_28);
		Rect_t201  L_8 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		bool L_9 = GUIVisibleControl_get_HasAlpha_m6847(__this, /*hidden argument*/NULL);
		float L_10 = GUIVisibleControl_get_Alpha_m6845(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		GUIImageParams_Draw_m6799(L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIImage::Refresh()
extern "C" void GUIImage_Refresh_m6796 (GUIImage_t1354 * __this, const MethodInfo* method)
{
	{
		GUIControl_Refresh_m6783(__this, /*hidden argument*/NULL);
		ImageAnimation_t1353 * L_0 = (__this->___imageAnimation_29);
		NullCheck(L_0);
		bool L_1 = (L_0->___animate_0);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		ImageAnimation_t1353 * L_2 = (__this->___imageAnimation_29);
		GUIImageParams_t1346 * L_3 = (__this->___image_28);
		NullCheck(L_3);
		Texture2D_t90 * L_4 = (L_3->___texture_1);
		NullCheck(L_2);
		ImageAnimation_RefreshAnimation_m6948(L_2, L_4, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIImageParams::.ctor()
extern "C" void GUIImageParams__ctor_m6797 (GUIImageParams_t1346 * __this, const MethodInfo* method)
{
	{
		Rect_t201  L_0 = {0};
		Rect__ctor_m2425(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___texCoords_3 = L_0;
		__this->___scaleMode_4 = 2;
		__this->___alphaBlend_5 = 1;
		Color_t121  L_1 = Color_get_white_m2643(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___color_6 = L_1;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIImageParams::Draw(UnityEngine.Rect)
extern "C" void GUIImageParams_Draw_m6798 (GUIImageParams_t1346 * __this, Rect_t201  ___rect, const MethodInfo* method)
{
	{
		Rect_t201  L_0 = ___rect;
		GUIImageParams_Draw_m6799(__this, L_0, 0, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIImageParams::Draw(UnityEngine.Rect,System.Boolean,System.Single)
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern "C" void GUIImageParams_Draw_m6799 (GUIImageParams_t1346 * __this, Rect_t201  ___rect, bool ___hasAlpha, float ___alpha, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		s_Il2CppMethodIntialized = true;
	}
	Color_t121  V_0 = {0};
	Rect_t201  V_1 = {0};
	Color_t121  V_2 = {0};
	Color_t121  V_3 = {0};
	Color_t121  V_4 = {0};
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	Rect_t201 * G_B5_2 = {0};
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	Rect_t201 * G_B4_2 = {0};
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	Rect_t201 * G_B6_3 = {0};
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	float G_B8_2 = 0.0f;
	Rect_t201 * G_B8_3 = {0};
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	float G_B7_2 = 0.0f;
	Rect_t201 * G_B7_3 = {0};
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B9_2 = 0.0f;
	float G_B9_3 = 0.0f;
	Rect_t201 * G_B9_4 = {0};
	{
		Texture2D_t90 * L_0 = (__this->___texture_1);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_012c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		Color_t121  L_2 = GUI_get_color_m7409(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		Color_t121  L_3 = (__this->___color_6);
		GUI_set_color_m3106(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		bool L_4 = ___hasAlpha;
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		Color_t121  L_5 = GUI_get_color_m7409(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = ((&V_2)->___r_0);
		Color_t121  L_7 = GUI_get_color_m7409(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = ((&V_3)->___g_1);
		Color_t121  L_9 = GUI_get_color_m7409(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_9;
		float L_10 = ((&V_4)->___b_2);
		float L_11 = ___alpha;
		Color_t121  L_12 = {0};
		Color__ctor_m2626(&L_12, L_6, L_8, L_10, L_11, /*hidden argument*/NULL);
		GUI_set_color_m3106(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_005b:
	{
		float L_13 = Rect_get_x_m4804((&___rect), /*hidden argument*/NULL);
		Rect_t201 * L_14 = &(__this->___pixelRect_0);
		float L_15 = Rect_get_x_m4804(L_14, /*hidden argument*/NULL);
		float L_16 = Rect_get_y_m4805((&___rect), /*hidden argument*/NULL);
		Rect_t201 * L_17 = &(__this->___pixelRect_0);
		float L_18 = Rect_get_y_m4805(L_17, /*hidden argument*/NULL);
		Rect_t201 * L_19 = &(__this->___pixelRect_0);
		float L_20 = Rect_get_width_m2728(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		bool L_21 = Tools_ApproximatelyZero_m6262(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		G_B4_0 = ((float)((float)L_16+(float)L_18));
		G_B4_1 = ((float)((float)L_13+(float)L_15));
		G_B4_2 = (&V_1);
		if (!L_21)
		{
			G_B5_0 = ((float)((float)L_16+(float)L_18));
			G_B5_1 = ((float)((float)L_13+(float)L_15));
			G_B5_2 = (&V_1);
			goto IL_00a4;
		}
	}
	{
		float L_22 = Rect_get_width_m2728((&___rect), /*hidden argument*/NULL);
		G_B6_0 = L_22;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_00af;
	}

IL_00a4:
	{
		Rect_t201 * L_23 = &(__this->___pixelRect_0);
		float L_24 = Rect_get_width_m2728(L_23, /*hidden argument*/NULL);
		G_B6_0 = L_24;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_00af:
	{
		Rect_t201 * L_25 = &(__this->___pixelRect_0);
		float L_26 = Rect_get_width_m2728(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		bool L_27 = Tools_ApproximatelyZero_m6262(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
		if (!L_27)
		{
			G_B8_0 = G_B6_0;
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			G_B8_3 = G_B6_3;
			goto IL_00d0;
		}
	}
	{
		float L_28 = Rect_get_height_m2868((&___rect), /*hidden argument*/NULL);
		G_B9_0 = L_28;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		G_B9_4 = G_B7_3;
		goto IL_00db;
	}

IL_00d0:
	{
		Rect_t201 * L_29 = &(__this->___pixelRect_0);
		float L_30 = Rect_get_height_m2868(L_29, /*hidden argument*/NULL);
		G_B9_0 = L_30;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
	}

IL_00db:
	{
		Rect__ctor_m2425(G_B9_4, G_B9_3, G_B9_2, G_B9_1, G_B9_0, /*hidden argument*/NULL);
		bool L_31 = (__this->___useTexCoords_2);
		if (!L_31)
		{
			goto IL_0108;
		}
	}
	{
		Rect_t201  L_32 = V_1;
		Texture2D_t90 * L_33 = (__this->___texture_1);
		Rect_t201  L_34 = (__this->___texCoords_3);
		bool L_35 = (__this->___alphaBlend_5);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_DrawTextureWithTexCoords_m7410(NULL /*static, unused*/, L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		goto IL_0126;
	}

IL_0108:
	{
		Rect_t201  L_36 = V_1;
		Texture2D_t90 * L_37 = (__this->___texture_1);
		int32_t L_38 = (__this->___scaleMode_4);
		bool L_39 = (__this->___alphaBlend_5);
		float L_40 = (__this->___aspect_7);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m7411(NULL /*static, unused*/, L_36, L_37, L_38, L_39, L_40, /*hidden argument*/NULL);
	}

IL_0126:
	{
		Color_t121  L_41 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_set_color_m3106(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
	}

IL_012c:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.GUILabel
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUILabe.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.GUILabel
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUILabeMethodDeclarations.h"

// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// PixelCrushers.DialogueSystem.UnityGUI.TextStyle
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_TextSty.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityGUMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::.ctor()
extern TypeInfo* ImageAnimation_t1353_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t1_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m83_MethodInfo_var;
extern "C" void GUILabel__ctor_m6800 (GUILabel_t1262 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ImageAnimation_t1353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2568);
		List_1_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		List_1__ctor_m83_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		Color_t121  L_0 = Color_get_black_m2971(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___textStyleColor_29 = L_0;
		Color_t121  L_1 = Color_get_white_m2643(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___imageColor_30 = L_1;
		ImageAnimation_t1353 * L_2 = (ImageAnimation_t1353 *)il2cpp_codegen_object_new (ImageAnimation_t1353_il2cpp_TypeInfo_var);
		ImageAnimation__ctor_m6947(L_2, /*hidden argument*/NULL);
		__this->___imageAnimation_32 = L_2;
		List_1_t1 * L_3 = (List_1_t1 *)il2cpp_codegen_object_new (List_1_t1_il2cpp_TypeInfo_var);
		List_1__ctor_m83(L_3, /*hidden argument*/List_1__ctor_m83_MethodInfo_var);
		__this->___closureTags_33 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___richTextClosedString_37 = L_4;
		GUIVisibleControl__ctor_m6844(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.GUILabel::get_currentLength()
extern "C" int32_t GUILabel_get_currentLength_m6801 (GUILabel_t1262 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___substringLength_35);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::set_currentLength(System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUILabel_set_currentLength_m6802 (GUILabel_t1262 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	GUILabel_t1262 * G_B2_0 = {0};
	GUILabel_t1262 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	GUILabel_t1262 * G_B3_1 = {0};
	{
		int32_t L_0 = ___value;
		__this->___substringLength_35 = L_0;
		String_t* L_1 = (((GUIVisibleControl_t1347 *)__this)->___text_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = (__this->___substringLength_35);
		String_t* L_4 = (((GUIVisibleControl_t1347 *)__this)->___text_20);
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m2869(L_4, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_002e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___useSubstring_34 = G_B3_0;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::Awake()
extern "C" void GUILabel_Awake_m6803 (GUILabel_t1262 * __this, const MethodInfo* method)
{
	{
		GUIVisibleControl_Awake_m6851(__this, /*hidden argument*/NULL);
		GUILabel_ResetClosureTags_m6804(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::ResetClosureTags()
extern "C" void GUILabel_ResetClosureTags_m6804 (GUILabel_t1262 * __this, const MethodInfo* method)
{
	{
		List_1_t1 * L_0 = (__this->___closureTags_33);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.String>::Clear() */, L_0);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::PushClosureTag(System.String)
extern "C" void GUILabel_PushClosureTag_m6805 (GUILabel_t1262 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		List_1_t1 * L_0 = (__this->___closureTags_33);
		String_t* L_1 = ___tag;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::PopClosureTag()
extern "C" void GUILabel_PopClosureTag_m6806 (GUILabel_t1262 * __this, const MethodInfo* method)
{
	{
		List_1_t1 * L_0 = (__this->___closureTags_33);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		List_1_t1 * L_2 = (__this->___closureTags_33);
		List_1_t1 * L_3 = (__this->___closureTags_33);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_3);
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32) */, L_2, ((int32_t)((int32_t)L_4-(int32_t)1)));
	}

IL_0029:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::SetFormattedText(PixelCrushers.DialogueSystem.FormattedText)
extern "C" void GUILabel_SetFormattedText_m6807 (GUILabel_t1262 * __this, FormattedText_t572 * ___formattedText, const MethodInfo* method)
{
	{
		FormattedText_t572 * L_0 = ___formattedText;
		GUIVisibleControl_SetFormattedText_m6856(__this, L_0, /*hidden argument*/NULL);
		GUILabel_ResetClosureTags_m6804(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawSelf(UnityEngine.Vector2)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUILabel_DrawSelf_m6808 (GUILabel_t1262 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIVisibleControl_ApplyAlphaToGUIColor_m6854(__this, /*hidden argument*/NULL);
		Texture2D_t90 * L_0 = (__this->___image_31);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GUILabel_DrawImage_m6817(__this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		String_t* L_2 = (((GUIVisibleControl_t1347 *)__this)->___text_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0066;
		}
	}
	{
		bool L_4 = (__this->___useSubstring_34);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		GUILabel_DrawSubstring_m6809(__this, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0043:
	{
		Rect_t201  L_5 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		String_t* L_6 = (((GUIVisibleControl_t1347 *)__this)->___text_20);
		GUIStyle_t303 * L_7 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___textStyle_28);
		Color_t121  L_9 = (__this->___textStyleColor_29);
		UnityGUITools_DrawText_m2981(NULL /*static, unused*/, L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0066:
	{
		GUIVisibleControl_RestoreGUIColor_m6855(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawSubstring()
extern "C" void GUILabel_DrawSubstring_m6809 (GUILabel_t1262 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t303 * L_0 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GUIStyle_get_alignment_m7412(L_0, /*hidden argument*/NULL);
		bool L_2 = GUILabel_IsLeftAligned_m6810(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		GUILabel_DrawSubstringLeftAligned_m6813(__this, /*hidden argument*/NULL);
		goto IL_0027;
	}

IL_0021:
	{
		GUILabel_DrawSubstringNotLeftAligned_m6814(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUILabel::IsLeftAligned(UnityEngine.TextAnchor)
extern "C" bool GUILabel_IsLeftAligned_m6810 (GUILabel_t1262 * __this, int32_t ___textAnchor, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___textAnchor;
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___textAnchor;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___textAnchor;
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 1;
	}

IL_0015:
	{
		return G_B4_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUILabel::IsCenterAligned(UnityEngine.TextAnchor)
extern "C" bool GUILabel_IsCenterAligned_m6811 (GUILabel_t1262 * __this, int32_t ___textAnchor, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___textAnchor;
		if ((((int32_t)L_0) == ((int32_t)7)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___textAnchor;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___textAnchor;
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 1;
	}

IL_0015:
	{
		return G_B4_0;
	}
}
// UnityEngine.TextAnchor PixelCrushers.DialogueSystem.UnityGUI.GUILabel::GetLeftAlignedVersion(UnityEngine.TextAnchor)
extern "C" int32_t GUILabel_GetLeftAlignedVersion_m6812 (GUILabel_t1262 * __this, int32_t ___textAnchor, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___textAnchor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0035;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_0035;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_002f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_002f;
		}
	}
	{
		goto IL_0035;
	}

IL_002f:
	{
		return (int32_t)(6);
	}

IL_0031:
	{
		return (int32_t)(3);
	}

IL_0033:
	{
		return (int32_t)(0);
	}

IL_0035:
	{
		int32_t L_2 = ___textAnchor;
		return L_2;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawSubstringLeftAligned()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern "C" void GUILabel_DrawSubstringLeftAligned_m6813 (GUILabel_t1262 * __this, const MethodInfo* method)
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
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		int32_t L_1 = (__this->___substringLength_35);
		V_2 = L_1;
		goto IL_006a;
	}

IL_0014:
	{
		String_t* L_2 = (((GUIVisibleControl_t1347 *)__this)->___text_20);
		int32_t L_3 = V_1;
		String_t* L_4 = GUILabel_GetNextLine_m6815(__this, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		String_t* L_5 = V_3;
		String_t* L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m2869(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_9 = Mathf_Min_m2836(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_10 = String_Substring_m2872(L_5, 0, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		String_t* L_12 = V_3;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m2869(L_12, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)L_13));
		int32_t L_14 = V_2;
		String_t* L_15 = V_3;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m2869(L_15, /*hidden argument*/NULL);
		V_2 = ((int32_t)((int32_t)L_14-(int32_t)L_16));
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_19 = V_4;
		V_0 = L_19;
		goto IL_006a;
	}

IL_005c:
	{
		String_t* L_20 = V_0;
		String_t* L_21 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m103(NULL /*static, unused*/, L_20, (String_t*) &_stringLiteral148, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
	}

IL_006a:
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		Rect_t201  L_24 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		String_t* L_25 = V_0;
		String_t* L_26 = GUILabel_GetRichTextClosedText_m6816(__this, L_25, /*hidden argument*/NULL);
		GUIStyle_t303 * L_27 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		int32_t L_28 = (__this->___textStyle_28);
		Color_t121  L_29 = (__this->___textStyleColor_29);
		UnityGUITools_DrawText_m2981(NULL /*static, unused*/, L_24, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawSubstringNotLeftAligned()
extern TypeInfo* GUIContent_t542_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern "C" void GUILabel_DrawSubstringNotLeftAligned_m6814 (GUILabel_t1262 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* V_6 = {0};
	String_t* V_7 = {0};
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector2_t97  V_10 = {0};
	Rect_t201  V_11 = {0};
	Vector2_t97  V_12 = {0};
	Rect_t201  V_13 = {0};
	Rect_t201  V_14 = {0};
	Rect_t201  V_15 = {0};
	Rect_t201  V_16 = {0};
	Rect_t201  V_17 = {0};
	float G_B4_0 = 0.0f;
	{
		GUIStyle_t303 * L_0 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GUIStyle_get_alignment_m7412(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GUIStyle_t303 * L_2 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = GUIStyle_get_wordWrap_m7413(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		GUIStyle_t303 * L_4 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		GUIStyle_t303 * L_5 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = GUIStyle_get_alignment_m7412(L_5, /*hidden argument*/NULL);
		int32_t L_7 = GUILabel_GetLeftAlignedVersion_m6812(__this, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		GUIStyle_set_alignment_m2439(L_4, L_7, /*hidden argument*/NULL);
		GUIStyle_t303 * L_8 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		GUIStyle_set_wordWrap_m3058(L_8, 0, /*hidden argument*/NULL);
		GUIStyle_t303 * L_9 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		String_t* L_10 = (((GUIVisibleControl_t1347 *)__this)->___text_20);
		GUIContent_t542 * L_11 = (GUIContent_t542 *)il2cpp_codegen_object_new (GUIContent_t542_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2982(L_11, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector2_t97  L_12 = GUIStyle_CalcSize_m2983(L_9, L_11, /*hidden argument*/NULL);
		V_10 = L_12;
		float L_13 = ((&V_10)->___y_2);
		V_2 = L_13;
		Rect_t201  L_14 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_11 = L_14;
		float L_15 = Rect_get_y_m4805((&V_11), /*hidden argument*/NULL);
		V_3 = L_15;
		V_4 = 0;
		int32_t L_16 = (__this->___substringLength_35);
		V_5 = L_16;
		goto IL_019a;
	}

IL_0080:
	{
		String_t* L_17 = (((GUIVisibleControl_t1347 *)__this)->___text_20);
		int32_t L_18 = V_4;
		String_t* L_19 = GUILabel_GetNextLine_m6815(__this, L_17, L_18, /*hidden argument*/NULL);
		V_6 = L_19;
		String_t* L_20 = V_6;
		String_t* L_21 = V_6;
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_m2869(L_21, /*hidden argument*/NULL);
		int32_t L_23 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_24 = Mathf_Min_m2836(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_25 = String_Substring_m2872(L_20, 0, L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		int32_t L_26 = V_4;
		String_t* L_27 = V_6;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m2869(L_27, /*hidden argument*/NULL);
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)L_28));
		int32_t L_29 = V_5;
		String_t* L_30 = V_6;
		NullCheck(L_30);
		int32_t L_31 = String_get_Length_m2869(L_30, /*hidden argument*/NULL);
		V_5 = ((int32_t)((int32_t)L_29-(int32_t)L_31));
		GUIStyle_t303 * L_32 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		String_t* L_33 = V_6;
		NullCheck(L_33);
		String_t* L_34 = String_Trim_m2717(L_33, /*hidden argument*/NULL);
		GUIContent_t542 * L_35 = (GUIContent_t542 *)il2cpp_codegen_object_new (GUIContent_t542_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2982(L_35, L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector2_t97  L_36 = GUIStyle_CalcSize_m2983(L_32, L_35, /*hidden argument*/NULL);
		V_12 = L_36;
		float L_37 = ((&V_12)->___x_1);
		V_8 = L_37;
		int32_t L_38 = V_0;
		bool L_39 = GUILabel_IsCenterAligned_m6811(__this, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_012c;
		}
	}
	{
		Rect_t201  L_40 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_13 = L_40;
		float L_41 = Rect_get_x_m4804((&V_13), /*hidden argument*/NULL);
		Rect_t201  L_42 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_14 = L_42;
		float L_43 = Rect_get_width_m2728((&V_14), /*hidden argument*/NULL);
		float L_44 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		float L_45 = ceilf(((float)((float)((float)((float)L_41+(float)((float)((float)(0.5f)*(float)L_43))))-(float)((float)((float)(0.5f)*(float)L_44)))));
		G_B4_0 = ((float)((float)L_45+(float)(0.5f)));
		goto IL_014e;
	}

IL_012c:
	{
		Rect_t201  L_46 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_15 = L_46;
		float L_47 = Rect_get_x_m4804((&V_15), /*hidden argument*/NULL);
		Rect_t201  L_48 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_16 = L_48;
		float L_49 = Rect_get_width_m2728((&V_16), /*hidden argument*/NULL);
		float L_50 = V_8;
		G_B4_0 = ((float)((float)((float)((float)L_47+(float)L_49))-(float)L_50));
	}

IL_014e:
	{
		V_9 = G_B4_0;
		float L_51 = V_9;
		float L_52 = V_3;
		Rect_t201  L_53 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_17 = L_53;
		float L_54 = Rect_get_width_m2728((&V_17), /*hidden argument*/NULL);
		float L_55 = V_2;
		Rect_t201  L_56 = {0};
		Rect__ctor_m2425(&L_56, L_51, L_52, L_54, L_55, /*hidden argument*/NULL);
		String_t* L_57 = V_7;
		NullCheck(L_57);
		String_t* L_58 = String_Trim_m2717(L_57, /*hidden argument*/NULL);
		String_t* L_59 = GUILabel_GetRichTextClosedText_m6816(__this, L_58, /*hidden argument*/NULL);
		GUIStyle_t303 * L_60 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		int32_t L_61 = (__this->___textStyle_28);
		Color_t121  L_62 = (__this->___textStyleColor_29);
		UnityGUITools_DrawText_m2981(NULL /*static, unused*/, L_56, L_59, L_60, L_61, L_62, /*hidden argument*/NULL);
		float L_63 = V_3;
		GUIStyle_t303 * L_64 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		NullCheck(L_64);
		float L_65 = GUIStyle_get_lineHeight_m7414(L_64, /*hidden argument*/NULL);
		V_3 = ((float)((float)L_63+(float)L_65));
	}

IL_019a:
	{
		int32_t L_66 = V_5;
		if ((((int32_t)L_66) > ((int32_t)0)))
		{
			goto IL_0080;
		}
	}
	{
		GUIStyle_t303 * L_67 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		int32_t L_68 = V_0;
		NullCheck(L_67);
		GUIStyle_set_alignment_m2439(L_67, L_68, /*hidden argument*/NULL);
		GUIStyle_t303 * L_69 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		bool L_70 = V_1;
		NullCheck(L_69);
		GUIStyle_set_wordWrap_m3058(L_69, L_70, /*hidden argument*/NULL);
		return;
	}
}
// System.String PixelCrushers.DialogueSystem.UnityGUI.GUILabel::GetNextLine(System.String,System.Int32)
extern TypeInfo* GUIContent_t542_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern "C" String_t* GUILabel_GetNextLine_m6815 (GUILabel_t1262 * __this, String_t* ___text, int32_t ___start, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	Vector2_t97  V_6 = {0};
	Rect_t201  V_7 = {0};
	Vector2_t97  V_8 = {0};
	Rect_t201  V_9 = {0};
	{
		String_t* L_0 = ___text;
		int32_t L_1 = ___start;
		NullCheck(L_0);
		String_t* L_2 = String_Substring_m4916(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		GUIStyle_t303 * L_3 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = String_Trim_m2717(L_4, /*hidden argument*/NULL);
		GUIContent_t542 * L_6 = (GUIContent_t542 *)il2cpp_codegen_object_new (GUIContent_t542_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2982(L_6, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector2_t97  L_7 = GUIStyle_CalcSize_m2983(L_3, L_6, /*hidden argument*/NULL);
		V_6 = L_7;
		float L_8 = ((&V_6)->___x_1);
		Rect_t201  L_9 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_7 = L_9;
		float L_10 = Rect_get_width_m2728((&V_7), /*hidden argument*/NULL);
		if ((!(((float)L_8) > ((float)L_10))))
		{
			goto IL_00ec;
		}
	}
	{
		V_2 = 1;
		goto IL_00de;
	}

IL_0044:
	{
		String_t* L_11 = ___text;
		int32_t L_12 = ___start;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		String_t* L_14 = String_Substring_m2872(L_11, L_12, ((int32_t)((int32_t)L_13+(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_14;
		String_t* L_15 = ___text;
		int32_t L_16 = ___start;
		int32_t L_17 = V_2;
		NullCheck(L_15);
		uint16_t L_18 = String_get_Chars_m2874(L_15, ((int32_t)((int32_t)L_16+(int32_t)L_17)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_19 = V_2;
		V_1 = L_19;
	}

IL_0061:
	{
		GUIStyle_t303 * L_20 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		String_t* L_21 = V_3;
		NullCheck(L_21);
		String_t* L_22 = String_Trim_m2717(L_21, /*hidden argument*/NULL);
		GUIContent_t542 * L_23 = (GUIContent_t542 *)il2cpp_codegen_object_new (GUIContent_t542_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2982(L_23, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector2_t97  L_24 = GUIStyle_CalcSize_m2983(L_20, L_23, /*hidden argument*/NULL);
		V_8 = L_24;
		float L_25 = ((&V_8)->___x_1);
		V_4 = L_25;
		float L_26 = V_4;
		Rect_t201  L_27 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_9 = L_27;
		float L_28 = Rect_get_width_m2728((&V_9), /*hidden argument*/NULL);
		if ((!(((float)L_26) < ((float)L_28))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_29 = V_2;
		V_2 = ((int32_t)((int32_t)L_29+(int32_t)1));
		goto IL_00de;
	}

IL_00a1:
	{
		String_t* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = String_get_Length_m2869(L_30, /*hidden argument*/NULL);
		V_5 = L_31;
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_00c6;
		}
	}
	{
		String_t* L_33 = ___text;
		int32_t L_34 = ___start;
		int32_t L_35 = V_1;
		int32_t L_36 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_37 = Mathf_Min_m2836(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		int32_t L_38 = Mathf_Max_m3148(NULL /*static, unused*/, 1, L_37, /*hidden argument*/NULL);
		NullCheck(L_33);
		String_t* L_39 = String_Substring_m2872(L_33, L_34, L_38, /*hidden argument*/NULL);
		return L_39;
	}

IL_00c6:
	{
		String_t* L_40 = ___text;
		int32_t L_41 = ___start;
		int32_t L_42 = V_2;
		int32_t L_43 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_44 = Mathf_Min_m2836(NULL /*static, unused*/, ((int32_t)((int32_t)L_42-(int32_t)1)), L_43, /*hidden argument*/NULL);
		int32_t L_45 = Mathf_Max_m3148(NULL /*static, unused*/, 1, L_44, /*hidden argument*/NULL);
		NullCheck(L_40);
		String_t* L_46 = String_Substring_m2872(L_40, L_41, L_45, /*hidden argument*/NULL);
		return L_46;
	}

IL_00de:
	{
		int32_t L_47 = ___start;
		int32_t L_48 = V_2;
		String_t* L_49 = ___text;
		NullCheck(L_49);
		int32_t L_50 = String_get_Length_m2869(L_49, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_47+(int32_t)L_48))) < ((int32_t)L_50)))
		{
			goto IL_0044;
		}
	}

IL_00ec:
	{
		String_t* L_51 = V_0;
		return L_51;
	}
}
// System.String PixelCrushers.DialogueSystem.UnityGUI.GUILabel::GetRichTextClosedText(System.String)
extern TypeInfo* StringBuilder_t640_il2cpp_TypeInfo_var;
extern "C" String_t* GUILabel_GetRichTextClosedText_m6816 (GUILabel_t1262 * __this, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t640 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t1 * L_0 = (__this->___closureTags_33);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___s;
		return L_2;
	}

IL_0012:
	{
		int32_t L_3 = (__this->___substringLength_35);
		int32_t L_4 = (__this->___substringLengthLastGetRichTextClosedString_36);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_5 = (__this->___substringLength_35);
		__this->___substringLengthLastGetRichTextClosedString_36 = L_5;
		String_t* L_6 = ___s;
		StringBuilder_t640 * L_7 = (StringBuilder_t640 *)il2cpp_codegen_object_new (StringBuilder_t640_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m4736(L_7, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		List_1_t1 * L_8 = (__this->___closureTags_33);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_8);
		V_1 = ((int32_t)((int32_t)L_9-(int32_t)1));
		goto IL_0060;
	}

IL_0049:
	{
		StringBuilder_t640 * L_10 = V_0;
		List_1_t1 * L_11 = (__this->___closureTags_33);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		String_t* L_13 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_11, L_12);
		NullCheck(L_10);
		StringBuilder_Append_m2877(L_10, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14-(int32_t)1));
	}

IL_0060:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		StringBuilder_t640 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_16);
		__this->___richTextClosedString_37 = L_17;
	}

IL_0073:
	{
		String_t* L_18 = (__this->___richTextClosedString_37);
		return L_18;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::DrawImage()
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" void GUILabel_DrawImage_m6817 (GUILabel_t1262 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	Color_t121  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		Color_t121  L_0 = GUI_get_color_m7409(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Color_t121  L_1 = (__this->___imageColor_30);
		GUI_set_color_m3106(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		ImageAnimation_t1353 * L_2 = (__this->___imageAnimation_32);
		NullCheck(L_2);
		bool L_3 = (L_2->___animate_0);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		ImageAnimation_t1353 * L_4 = (__this->___imageAnimation_32);
		Rect_t201  L_5 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		Texture2D_t90 * L_6 = (__this->___image_31);
		NullCheck(L_4);
		ImageAnimation_DrawAnimation_m6949(L_4, L_5, L_6, /*hidden argument*/NULL);
		goto IL_0054;
	}

IL_003d:
	{
		Rect_t201  L_7 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		Texture2D_t90 * L_8 = (__this->___image_31);
		GUIStyle_t303 * L_9 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_Label_m7415(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0054:
	{
		Color_t121  L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_set_color_m3106(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::Refresh()
extern "C" void GUILabel_Refresh_m6818 (GUILabel_t1262 * __this, const MethodInfo* method)
{
	{
		GUIControl_Refresh_m6783(__this, /*hidden argument*/NULL);
		ImageAnimation_t1353 * L_0 = (__this->___imageAnimation_32);
		NullCheck(L_0);
		bool L_1 = (L_0->___animate_0);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		ImageAnimation_t1353 * L_2 = (__this->___imageAnimation_32);
		Texture2D_t90 * L_3 = (__this->___image_31);
		NullCheck(L_2);
		ImageAnimation_RefreshAnimation_m6948(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar/Origin
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIProg.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar/Origin
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIProgMethodDeclarations.h"



// PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIProg_0.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIProg_0MethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar::.ctor()
extern "C" void GUIProgressBar__ctor_m6819 (GUIProgressBar_t1356 * __this, const MethodInfo* method)
{
	{
		GUIVisibleControl__ctor_m6844(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar::DrawSelf(UnityEngine.Vector2)
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern "C" void GUIProgressBar_DrawSelf_m6820 (GUIProgressBar_t1356 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Rect_t201  V_1 = {0};
	Rect_t201  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = {0};
	Rect_t201  V_9 = {0};
	Rect_t201  V_10 = {0};
	Rect_t201  V_11 = {0};
	Rect_t201  V_12 = {0};
	Rect_t201  V_13 = {0};
	Rect_t201  V_14 = {0};
	Rect_t201  V_15 = {0};
	Rect_t201  V_16 = {0};
	Rect_t201  V_17 = {0};
	Rect_t201  V_18 = {0};
	Rect_t201  V_19 = {0};
	Rect_t201  V_20 = {0};
	Rect_t201  V_21 = {0};
	Rect_t201  V_22 = {0};
	Rect_t201  V_23 = {0};
	Rect_t201  V_24 = {0};
	Rect_t201  V_25 = {0};
	Rect_t201  V_26 = {0};
	Rect_t201  V_27 = {0};
	Rect_t201  V_28 = {0};
	Rect_t201  V_29 = {0};
	Rect_t201  V_30 = {0};
	Rect_t201  V_31 = {0};
	Rect_t201  V_32 = {0};
	Rect_t201  V_33 = {0};
	Rect_t201  V_34 = {0};
	{
		Texture2D_t90 * L_0 = (__this->___emptyImage_29);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Rect_t201  L_2 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		Texture2D_t90 * L_3 = (__this->___emptyImage_29);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m7416(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		float L_4 = (__this->___progress_31);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		float L_5 = Mathf_Clamp_m2467(NULL /*static, unused*/, L_4, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = (__this->___origin_28);
		V_8 = L_6;
		int32_t L_7 = V_8;
		if (L_7 == 0)
		{
			goto IL_0064;
		}
		if (L_7 == 1)
		{
			goto IL_00c9;
		}
		if (L_7 == 2)
		{
			goto IL_0131;
		}
		if (L_7 == 3)
		{
			goto IL_0192;
		}
		if (L_7 == 4)
		{
			goto IL_01fc;
		}
		if (L_7 == 5)
		{
			goto IL_0282;
		}
	}
	{
		goto IL_0131;
	}

IL_0064:
	{
		Rect_t201  L_8 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_9 = L_8;
		float L_9 = Rect_get_height_m2868((&V_9), /*hidden argument*/NULL);
		float L_10 = V_0;
		V_3 = ((float)((float)L_9*(float)L_10));
		Rect_t201  L_11 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_10 = L_11;
		float L_12 = Rect_get_x_m4804((&V_10), /*hidden argument*/NULL);
		Rect_t201  L_13 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_11 = L_13;
		float L_14 = Rect_get_y_m4805((&V_11), /*hidden argument*/NULL);
		Rect_t201  L_15 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_12 = L_15;
		float L_16 = Rect_get_width_m2728((&V_12), /*hidden argument*/NULL);
		float L_17 = V_3;
		Rect__ctor_m2425((&V_1), L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		float L_18 = V_0;
		float L_19 = V_0;
		Rect__ctor_m2425((&V_2), (0.0f), ((float)((float)(1.0f)-(float)L_18)), (1.0f), L_19, /*hidden argument*/NULL);
		goto IL_0308;
	}

IL_00c9:
	{
		Rect_t201  L_20 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_13 = L_20;
		float L_21 = Rect_get_height_m2868((&V_13), /*hidden argument*/NULL);
		float L_22 = V_0;
		V_4 = ((float)((float)L_21*(float)L_22));
		Rect_t201  L_23 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_14 = L_23;
		float L_24 = Rect_get_x_m4804((&V_14), /*hidden argument*/NULL);
		Rect_t201  L_25 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_15 = L_25;
		float L_26 = Rect_get_yMax_m4861((&V_15), /*hidden argument*/NULL);
		float L_27 = V_4;
		Rect_t201  L_28 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_16 = L_28;
		float L_29 = Rect_get_width_m2728((&V_16), /*hidden argument*/NULL);
		float L_30 = V_4;
		Rect__ctor_m2425((&V_1), L_24, ((float)((float)L_26-(float)L_27)), L_29, L_30, /*hidden argument*/NULL);
		float L_31 = V_0;
		Rect__ctor_m2425((&V_2), (0.0f), (0.0f), (1.0f), L_31, /*hidden argument*/NULL);
		goto IL_0308;
	}

IL_0131:
	{
		Rect_t201  L_32 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_17 = L_32;
		float L_33 = Rect_get_x_m4804((&V_17), /*hidden argument*/NULL);
		Rect_t201  L_34 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_18 = L_34;
		float L_35 = Rect_get_y_m4805((&V_18), /*hidden argument*/NULL);
		Rect_t201  L_36 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_19 = L_36;
		float L_37 = Rect_get_width_m2728((&V_19), /*hidden argument*/NULL);
		float L_38 = V_0;
		Rect_t201  L_39 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_20 = L_39;
		float L_40 = Rect_get_height_m2868((&V_20), /*hidden argument*/NULL);
		Rect__ctor_m2425((&V_1), L_33, L_35, ((float)((float)L_37*(float)L_38)), L_40, /*hidden argument*/NULL);
		float L_41 = V_0;
		Rect__ctor_m2425((&V_2), (0.0f), (0.0f), L_41, (1.0f), /*hidden argument*/NULL);
		goto IL_0308;
	}

IL_0192:
	{
		Rect_t201  L_42 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_21 = L_42;
		float L_43 = Rect_get_width_m2728((&V_21), /*hidden argument*/NULL);
		float L_44 = V_0;
		V_5 = ((float)((float)L_43*(float)L_44));
		Rect_t201  L_45 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_22 = L_45;
		float L_46 = Rect_get_xMax_m4860((&V_22), /*hidden argument*/NULL);
		float L_47 = V_5;
		Rect_t201  L_48 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_23 = L_48;
		float L_49 = Rect_get_y_m4805((&V_23), /*hidden argument*/NULL);
		float L_50 = V_5;
		Rect_t201  L_51 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_24 = L_51;
		float L_52 = Rect_get_height_m2868((&V_24), /*hidden argument*/NULL);
		Rect__ctor_m2425((&V_1), ((float)((float)L_46-(float)L_47)), L_49, L_50, L_52, /*hidden argument*/NULL);
		float L_53 = V_0;
		float L_54 = V_0;
		Rect__ctor_m2425((&V_2), ((float)((float)(1.0f)-(float)L_53)), (0.0f), L_54, (1.0f), /*hidden argument*/NULL);
		goto IL_0308;
	}

IL_01fc:
	{
		Rect_t201  L_55 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_25 = L_55;
		float L_56 = Rect_get_width_m2728((&V_25), /*hidden argument*/NULL);
		float L_57 = V_0;
		V_6 = ((float)((float)L_56*(float)L_57));
		Rect_t201  L_58 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_26 = L_58;
		float L_59 = Rect_get_x_m4804((&V_26), /*hidden argument*/NULL);
		Rect_t201  L_60 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_27 = L_60;
		float L_61 = Rect_get_width_m2728((&V_27), /*hidden argument*/NULL);
		float L_62 = V_6;
		Rect_t201  L_63 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_28 = L_63;
		float L_64 = Rect_get_y_m4805((&V_28), /*hidden argument*/NULL);
		float L_65 = V_6;
		Rect_t201  L_66 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_29 = L_66;
		float L_67 = Rect_get_height_m2868((&V_29), /*hidden argument*/NULL);
		Rect__ctor_m2425((&V_1), ((float)((float)L_59+(float)((float)((float)(0.5f)*(float)((float)((float)L_61-(float)L_62)))))), L_64, L_65, L_67, /*hidden argument*/NULL);
		float L_68 = V_0;
		float L_69 = V_0;
		Rect__ctor_m2425((&V_2), ((float)((float)(0.5f)*(float)((float)((float)(1.0f)-(float)L_68)))), (0.0f), L_69, (1.0f), /*hidden argument*/NULL);
		goto IL_0308;
	}

IL_0282:
	{
		Rect_t201  L_70 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_30 = L_70;
		float L_71 = Rect_get_height_m2868((&V_30), /*hidden argument*/NULL);
		float L_72 = V_0;
		V_7 = ((float)((float)L_71*(float)L_72));
		Rect_t201  L_73 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_31 = L_73;
		float L_74 = Rect_get_x_m4804((&V_31), /*hidden argument*/NULL);
		Rect_t201  L_75 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_32 = L_75;
		float L_76 = Rect_get_y_m4805((&V_32), /*hidden argument*/NULL);
		Rect_t201  L_77 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_33 = L_77;
		float L_78 = Rect_get_height_m2868((&V_33), /*hidden argument*/NULL);
		float L_79 = V_7;
		Rect_t201  L_80 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_34 = L_80;
		float L_81 = Rect_get_width_m2728((&V_34), /*hidden argument*/NULL);
		float L_82 = V_7;
		Rect__ctor_m2425((&V_1), L_74, ((float)((float)L_76+(float)((float)((float)(0.5f)*(float)((float)((float)L_78-(float)L_79)))))), L_81, L_82, /*hidden argument*/NULL);
		float L_83 = V_0;
		float L_84 = V_0;
		Rect__ctor_m2425((&V_2), (0.0f), ((float)((float)(0.5f)*(float)((float)((float)(1.0f)-(float)L_83)))), (1.0f), L_84, /*hidden argument*/NULL);
		goto IL_0308;
	}

IL_0308:
	{
		Texture2D_t90 * L_85 = (__this->___fullImage_30);
		bool L_86 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_85, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_0326;
		}
	}
	{
		Rect_t201  L_87 = V_1;
		Texture2D_t90 * L_88 = (__this->___fullImage_30);
		Rect_t201  L_89 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_DrawTextureWithTexCoords_m7417(NULL /*static, unused*/, L_87, L_88, L_89, /*hidden argument*/NULL);
	}

IL_0326:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.GUIRoot
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIRoot.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.GUIRoot
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIRootMethodDeclarations.h"

// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIRoot::.ctor()
extern "C" void GUIRoot__ctor_m6821 (GUIRoot_t1265 * __this, const MethodInfo* method)
{
	{
		GUIControl__ctor_m6762(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIRoot::OnGUI()
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern "C" void GUIRoot_OnGUI_m6822 (GUIRoot_t1265 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t97  V_0 = {0};
	Vector3_t53  V_1 = {0};
	Vector3_t53  V_2 = {0};
	{
		GUIRoot_UseGUISkin_m6824(__this, /*hidden argument*/NULL);
		bool L_0 = Application_get_isPlaying_m2677(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		GUIRoot_ManualRefresh_m6823(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		Vector3_t53  L_1 = Input_get_mousePosition_m2964(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = ((&V_1)->___x_1);
		int32_t L_3 = Screen_get_height_m2428(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_4 = Input_get_mousePosition_m2964(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = ((&V_2)->___y_2);
		Vector2__ctor_m2417((&V_0), L_2, ((float)((float)(((float)L_3))-(float)L_5)), /*hidden argument*/NULL);
		Vector2_t97  L_6 = V_0;
		GUIControl_Draw_m6778(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIRoot::ManualRefresh()
extern "C" void GUIRoot_ManualRefresh_m6823 (GUIRoot_t1265 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Screen_get_width_m2424(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m2428(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t97  L_2 = {0};
		Vector2__ctor_m2417(&L_2, (((float)L_0)), (((float)L_1)), /*hidden argument*/NULL);
		VirtActionInvoker1< Vector2_t97  >::Invoke(9 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Refresh(UnityEngine.Vector2) */, __this, L_2);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIRoot::UseGUISkin()
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" void GUIRoot_UseGUISkin_m6824 (GUIRoot_t1265 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUISkin_t197 * L_0 = (__this->___guiSkin_19);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		GUISkin_t197 * L_2 = (__this->___guiSkin_19);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_set_skin_m2727(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIScro.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIScroMethodDeclarations.h"

// System.Action
#include "System_Core_System_Action.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleState.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::.ctor()
extern "C" void GUIScrollView__ctor_m6825 (GUIScrollView_t1266 * __this, const MethodInfo* method)
{
	{
		__this->___showVerticalScrollbar_19 = 1;
		__this->___padding_21 = 2;
		Vector2_t97  L_0 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollViewVector_22 = L_0;
		GUIControl__ctor_m6762(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::add_MeasureContentHandler(System.Action)
extern TypeInfo* Action_t250_il2cpp_TypeInfo_var;
extern "C" void GUIScrollView_add_MeasureContentHandler_m6826 (GUIScrollView_t1266 * __this, Action_t250 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_t250 * L_0 = (__this->___MeasureContentHandler_23);
		Action_t250 * L_1 = ___value;
		Delegate_t593 * L_2 = Delegate_Combine_m2527(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MeasureContentHandler_23 = ((Action_t250 *)Castclass(L_2, Action_t250_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::remove_MeasureContentHandler(System.Action)
extern TypeInfo* Action_t250_il2cpp_TypeInfo_var;
extern "C" void GUIScrollView_remove_MeasureContentHandler_m6827 (GUIScrollView_t1266 * __this, Action_t250 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_t250 * L_0 = (__this->___MeasureContentHandler_23);
		Action_t250 * L_1 = ___value;
		Delegate_t593 * L_2 = Delegate_Remove_m2528(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___MeasureContentHandler_23 = ((Action_t250 *)Castclass(L_2, Action_t250_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::add_DrawContentHandler(System.Action)
extern TypeInfo* Action_t250_il2cpp_TypeInfo_var;
extern "C" void GUIScrollView_add_DrawContentHandler_m6828 (GUIScrollView_t1266 * __this, Action_t250 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_t250 * L_0 = (__this->___DrawContentHandler_24);
		Action_t250 * L_1 = ___value;
		Delegate_t593 * L_2 = Delegate_Combine_m2527(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___DrawContentHandler_24 = ((Action_t250 *)Castclass(L_2, Action_t250_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::remove_DrawContentHandler(System.Action)
extern TypeInfo* Action_t250_il2cpp_TypeInfo_var;
extern "C" void GUIScrollView_remove_DrawContentHandler_m6829 (GUIScrollView_t1266 * __this, Action_t250 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_t250 * L_0 = (__this->___DrawContentHandler_24);
		Action_t250 * L_1 = ___value;
		Delegate_t593 * L_2 = Delegate_Remove_m2528(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___DrawContentHandler_24 = ((Action_t250 *)Castclass(L_2, Action_t250_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::get_contentWidth()
extern "C" float GUIScrollView_get_contentWidth_m6830 (GUIScrollView_t1266 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CcontentWidthU3Ek__BackingField_25);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::set_contentWidth(System.Single)
extern "C" void GUIScrollView_set_contentWidth_m6831 (GUIScrollView_t1266 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CcontentWidthU3Ek__BackingField_25 = L_0;
		return;
	}
}
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::get_contentHeight()
extern "C" float GUIScrollView_get_contentHeight_m6832 (GUIScrollView_t1266 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CcontentHeightU3Ek__BackingField_26);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::set_contentHeight(System.Single)
extern "C" void GUIScrollView_set_contentHeight_m6833 (GUIScrollView_t1266 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CcontentHeightU3Ek__BackingField_26 = L_0;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::ResetScrollPosition()
extern "C" void GUIScrollView_ResetScrollPosition_m6834 (GUIScrollView_t1266 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollViewVector_22 = L_0;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::DrawChildren(UnityEngine.Vector2)
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t303_il2cpp_TypeInfo_var;
extern "C" void GUIScrollView_DrawChildren_m6835 (GUIScrollView_t1266 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		GUIStyle_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t201  V_0 = {0};
	GUIStyle_t303 * V_1 = {0};
	GUIStyle_t303 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	GUIStyle_t303 * G_B3_0 = {0};
	GUIStyle_t303 * G_B6_0 = {0};
	{
		((GUIControl_t1261 *)__this)->___clipChildren_9 = 0;
		Rect_t201  L_0 = GUIScrollView_GetScrollContentRect_m6836(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = (__this->___showHorizontalScrollbar_20);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUISkin_t197 * L_2 = GUI_get_skin_m2437(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyle_t303 * L_3 = GUISkin_get_horizontalScrollbar_m7418(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002d;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t303_il2cpp_TypeInfo_var);
		GUIStyle_t303 * L_4 = GUIStyle_get_none_m3096(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_002d:
	{
		V_1 = G_B3_0;
		bool L_5 = (__this->___showVerticalScrollbar_19);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUISkin_t197 * L_6 = GUI_get_skin_m2437(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIStyle_t303 * L_7 = GUISkin_get_verticalScrollbar_m7419(L_6, /*hidden argument*/NULL);
		G_B6_0 = L_7;
		goto IL_004d;
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t303_il2cpp_TypeInfo_var);
		GUIStyle_t303 * L_8 = GUIStyle_get_none_m3096(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B6_0 = L_8;
	}

IL_004d:
	{
		V_2 = G_B6_0;
		Rect_t201  L_9 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		Vector2_t97  L_10 = (__this->___scrollViewVector_22);
		Rect_t201  L_11 = V_0;
		GUIStyle_t303 * L_12 = V_1;
		GUIStyle_t303 * L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		Vector2_t97  L_14 = GUI_BeginScrollView_m7420(NULL /*static, unused*/, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		__this->___scrollViewVector_22 = L_14;
	}

IL_0068:
	try
	{ // begin try (depth: 1)
		{
			Action_t250 * L_15 = (__this->___DrawContentHandler_24);
			if (!L_15)
			{
				goto IL_007e;
			}
		}

IL_0073:
		{
			Action_t250 * L_16 = (__this->___DrawContentHandler_24);
			NullCheck(L_16);
			VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_16);
		}

IL_007e:
		{
			Vector2_t97  L_17 = ___relativeMousePosition;
			GUIControl_DrawChildren_m6780(__this, L_17, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x90, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_EndScrollView_m7421(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_JUMP_TBL(0x90, IL_0090)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0090:
	{
		return;
	}
}
// UnityEngine.Rect PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::GetScrollContentRect()
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" Rect_t201  GUIScrollView_GetScrollContentRect_m6836 (GUIScrollView_t1266 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Rect_t201  V_1 = {0};
	float G_B3_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUISkin_t197 * L_0 = GUI_get_skin_m2437(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t303 * L_1 = GUISkin_get_verticalSlider_m7422(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyleState_t656 * L_2 = GUIStyle_get_normal_m2988(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Texture2D_t90 * L_3 = GUIStyleState_get_background_m7423(L_2, /*hidden argument*/NULL);
		bool L_4 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_3, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUISkin_t197 * L_5 = GUI_get_skin_m2437(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		GUIStyle_t303 * L_6 = GUISkin_get_verticalSlider_m7422(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIStyleState_t656 * L_7 = GUIStyle_get_normal_m2988(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Texture2D_t90 * L_8 = GUIStyleState_get_background_m7423(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		G_B3_0 = (((float)L_9));
		goto IL_0043;
	}

IL_003e:
	{
		G_B3_0 = (16.0f);
	}

IL_0043:
	{
		V_0 = G_B3_0;
		Rect_t201  L_10 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = Rect_get_width_m2728((&V_1), /*hidden argument*/NULL);
		float L_12 = V_0;
		GUIScrollView_set_contentWidth_m6831(__this, ((float)((float)L_11-(float)L_12)), /*hidden argument*/NULL);
		GUIScrollView_MeasureChildrenAsContent_m6837(__this, /*hidden argument*/NULL);
		Action_t250 * L_13 = (__this->___MeasureContentHandler_23);
		if (!L_13)
		{
			goto IL_0076;
		}
	}
	{
		Action_t250 * L_14 = (__this->___MeasureContentHandler_23);
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_14);
	}

IL_0076:
	{
		float L_15 = GUIScrollView_get_contentWidth_m6830(__this, /*hidden argument*/NULL);
		float L_16 = GUIScrollView_get_contentHeight_m6832(__this, /*hidden argument*/NULL);
		Rect_t201  L_17 = {0};
		Rect__ctor_m2425(&L_17, (0.0f), (0.0f), L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::MeasureChildrenAsContent()
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t1455_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t588_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m7401_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m7402_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m7403_MethodInfo_var;
extern "C" void GUIScrollView_MeasureChildrenAsContent_m6837 (GUIScrollView_t1266 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Enumerator_t1455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2564);
		IDisposable_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		List_1_GetEnumerator_m7401_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484429);
		Enumerator_get_Current_m7402_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484430);
		Enumerator_MoveNext_m7403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484431);
		s_Il2CppMethodIntialized = true;
	}
	GUIControl_t1261 * V_0 = {0};
	Enumerator_t1455  V_1 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t1351 * L_0 = GUIControl_get_Children_m6767(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0071;
		}
	}
	{
		List_1_t1351 * L_1 = GUIControl_get_Children_m6767(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Enumerator_t1455  L_2 = List_1_GetEnumerator_m7401(L_1, /*hidden argument*/List_1_GetEnumerator_m7401_MethodInfo_var);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0054;
		}

IL_001c:
		{
			GUIControl_t1261 * L_3 = Enumerator_get_Current_m7402((&V_1), /*hidden argument*/Enumerator_get_Current_m7402_MethodInfo_var);
			V_0 = L_3;
			float L_4 = GUIScrollView_get_contentWidth_m6830(__this, /*hidden argument*/NULL);
			GUIControl_t1261 * L_5 = V_0;
			float L_6 = GUIScrollView_GetChildXMax_m6838(__this, L_5, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
			float L_7 = Mathf_Max_m4982(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
			GUIScrollView_set_contentWidth_m6831(__this, L_7, /*hidden argument*/NULL);
			float L_8 = GUIScrollView_get_contentHeight_m6832(__this, /*hidden argument*/NULL);
			GUIControl_t1261 * L_9 = V_0;
			float L_10 = GUIScrollView_GetChildYMax_m6839(__this, L_9, /*hidden argument*/NULL);
			float L_11 = Mathf_Max_m4982(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
			GUIScrollView_set_contentHeight_m6833(__this, L_11, /*hidden argument*/NULL);
		}

IL_0054:
		{
			bool L_12 = Enumerator_MoveNext_m7403((&V_1), /*hidden argument*/Enumerator_MoveNext_m7403_MethodInfo_var);
			if (L_12)
			{
				goto IL_001c;
			}
		}

IL_0060:
		{
			IL2CPP_LEAVE(0x71, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		Enumerator_t1455  L_13 = V_1;
		Enumerator_t1455  L_14 = L_13;
		Object_t * L_15 = Box(Enumerator_t1455_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t588_il2cpp_TypeInfo_var, L_15);
		IL2CPP_END_FINALLY(101)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_JUMP_TBL(0x71, IL_0071)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0071:
	{
		return;
	}
}
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::GetChildXMax(PixelCrushers.DialogueSystem.UnityGUI.GUIControl)
extern "C" float GUIScrollView_GetChildXMax_m6838 (GUIScrollView_t1266 * __this, GUIControl_t1261 * ___child, const MethodInfo* method)
{
	Rect_t201  V_0 = {0};
	{
		GUIControl_t1261 * L_0 = ___child;
		NullCheck(L_0);
		Rect_t201  L_1 = GUIControl_get_rect_m6763(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = Rect_get_xMax_m4860((&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::GetChildYMax(PixelCrushers.DialogueSystem.UnityGUI.GUIControl)
extern TypeInfo* GUILabel_t1262_il2cpp_TypeInfo_var;
extern "C" float GUIScrollView_GetChildYMax_m6839 (GUIScrollView_t1266 * __this, GUIControl_t1261 * ___child, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUILabel_t1262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2569);
		s_Il2CppMethodIntialized = true;
	}
	GUILabel_t1262 * V_0 = {0};
	Rect_t201  V_1 = {0};
	Rect_t201  V_2 = {0};
	Rect_t201  V_3 = {0};
	{
		GUIControl_t1261 * L_0 = ___child;
		if (!((GUILabel_t1262 *)IsInst(L_0, GUILabel_t1262_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		GUIControl_t1261 * L_1 = ___child;
		V_0 = ((GUILabel_t1262 *)IsInst(L_1, GUILabel_t1262_il2cpp_TypeInfo_var));
		GUILabel_t1262 * L_2 = V_0;
		NullCheck(L_2);
		AutoSize_t1348 * L_3 = (((GUIControl_t1261 *)L_2)->___autoSize_5);
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		GUILabel_t1262 * L_4 = V_0;
		NullCheck(L_4);
		AutoSize_t1348 * L_5 = (((GUIControl_t1261 *)L_4)->___autoSize_5);
		NullCheck(L_5);
		bool L_6 = (L_5->___autoSizeHeight_1);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		GUILabel_t1262 * L_7 = V_0;
		Rect_t201  L_8 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = Rect_get_width_m2728((&V_1), /*hidden argument*/NULL);
		Rect_t201  L_10 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = Rect_get_height_m2868((&V_2), /*hidden argument*/NULL);
		Vector2_t97  L_12 = {0};
		Vector2__ctor_m2417(&L_12, L_9, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< Vector2_t97  >::Invoke(9 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Refresh(UnityEngine.Vector2) */, L_7, L_12);
		GUILabel_t1262 * L_13 = V_0;
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(11 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::UpdateLayout() */, L_13);
	}

IL_005a:
	{
		GUIControl_t1261 * L_14 = ___child;
		NullCheck(L_14);
		Rect_t201  L_15 = GUIControl_get_rect_m6763(L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		float L_16 = Rect_get_yMax_m4861((&V_3), /*hidden argument*/NULL);
		return L_16;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.GUITextField
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIText.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.GUITextField
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUITextMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUITextField::.ctor()
extern "C" void GUITextField__ctor_m6840 (GUITextField_t1357 * __this, const MethodInfo* method)
{
	{
		GUIVisibleControl__ctor_m6844(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.GUITextField::get_DefaultGUIStyle()
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t303 * GUITextField_get_DefaultGUIStyle_m6841 (GUITextField_t1357 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUISkin_t197 * L_0 = GUI_get_skin_m2437(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t303 * L_1 = GUISkin_get_textField_m7424(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUITextField::TakeFocus()
extern "C" void GUITextField_TakeFocus_m6842 (GUITextField_t1357 * __this, const MethodInfo* method)
{
	{
		__this->___takeFocus_29 = 1;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUITextField::DrawSelf(UnityEngine.Vector2)
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUITextField_DrawSelf_m6843 (GUITextField_t1357 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIVisibleControl_SetGUIStyle_m6859(__this, /*hidden argument*/NULL);
		bool L_0 = (__this->___takeFocus_29);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = GUIControl_get_FullName_m6773(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_SetNextControlName_m3064(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_001c:
	{
		String_t* L_2 = (((GUIVisibleControl_t1347 *)__this)->___text_20);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((GUIVisibleControl_t1347 *)__this)->___text_20 = L_3;
	}

IL_0032:
	{
		int32_t L_4 = (__this->___maxLength_28);
		if (L_4)
		{
			goto IL_005f;
		}
	}
	{
		Rect_t201  L_5 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		String_t* L_6 = (((GUIVisibleControl_t1347 *)__this)->___text_20);
		GUIStyle_t303 * L_7 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		String_t* L_8 = GUI_TextField_m7425(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
		((GUIVisibleControl_t1347 *)__this)->___text_20 = L_8;
		goto IL_0082;
	}

IL_005f:
	{
		Rect_t201  L_9 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		String_t* L_10 = (((GUIVisibleControl_t1347 *)__this)->___text_20);
		int32_t L_11 = (__this->___maxLength_28);
		GUIStyle_t303 * L_12 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		String_t* L_13 = GUI_TextField_m7426(NULL /*static, unused*/, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		((GUIVisibleControl_t1347 *)__this)->___text_20 = L_13;
	}

IL_0082:
	{
		bool L_14 = (__this->___takeFocus_29);
		if (!L_14)
		{
			goto IL_009f;
		}
	}
	{
		String_t* L_15 = GUIControl_get_FullName_m6773(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_FocusControl_m3063(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		__this->___takeFocus_29 = 0;
	}

IL_009f:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// PixelCrushers.DialogueSystem.UnityGUI.ScaledValue
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_ScaledV.h"
// PixelCrushers.DialogueSystem.UnityGUI.ScaledRectAlignment
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_ScaledR_0.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// PixelCrushers.DialogueSystem.UnityGUI.ScaledValue
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_ScaledVMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
struct Component_t462;
struct AudioSource_t262;
struct Component_t462;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m2412_gshared (Component_t462 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m2412(__this, method) (( Object_t * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t262_m2873(__this, method) (( AudioSource_t262 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)
struct GameObject_t49;
struct AudioSource_t262;
struct GameObject_t49;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m2825_gshared (GameObject_t49 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m2825(__this, method) (( Object_t * (*) (GameObject_t49 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m2825_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t262_m7324(__this, method) (( AudioSource_t262 * (*) (GameObject_t49 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m2825_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GUIVisibleControl__ctor_m6844 (GUIVisibleControl_t1347 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		Color_t121  L_0 = Color_get_white_m2643(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___originalGUIColor_25 = L_0;
		__this->___alpha_26 = (1.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___originalTextValue_27 = L_1;
		GUIControl__ctor_m6762(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::get_Alpha()
extern "C" float GUIVisibleControl_get_Alpha_m6845 (GUIVisibleControl_t1347 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___alpha_26);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::set_Alpha(System.Single)
extern "C" void GUIVisibleControl_set_Alpha_m6846 (GUIVisibleControl_t1347 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___alpha_26 = L_0;
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::get_HasAlpha()
extern "C" bool GUIVisibleControl_get_HasAlpha_m6847 (GUIVisibleControl_t1347 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		float L_0 = GUIVisibleControl_get_Alpha_m6845(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)(0.999f)))))
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = Application_get_isPlaying_m2677(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::get_DefaultGUIStyle()
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t303 * GUIVisibleControl_get_DefaultGUIStyle_m6848 (GUIVisibleControl_t1347 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUISkin_t197 * L_0 = GUI_get_skin_m2437(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t303 * L_1 = GUISkin_get_label_m2986(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::get_GuiStyle()
extern "C" GUIStyle_t303 * GUIVisibleControl_get_GuiStyle_m6849 (GUIVisibleControl_t1347 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t303 * L_0 = (__this->___guiStyle_24);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::set_GuiStyle(UnityEngine.GUIStyle)
extern "C" void GUIVisibleControl_set_GuiStyle_m6850 (GUIVisibleControl_t1347 * __this, GUIStyle_t303 * ___value, const MethodInfo* method)
{
	{
		GUIStyle_t303 * L_0 = ___value;
		__this->___guiStyle_24 = L_0;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::Awake()
extern "C" void GUIVisibleControl_Awake_m6851 (GUIVisibleControl_t1347 * __this, const MethodInfo* method)
{
	{
		GUIControl_Awake_m6776(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___text_20);
		__this->___originalTextValue_27 = L_0;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::Start()
extern "C" void GUIVisibleControl_Start_m6852 (GUIVisibleControl_t1347 * __this, const MethodInfo* method)
{
	{
		LocalizedTextTable_t252 * L_0 = (__this->___localizedText_19);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		LocalizedTextTable_t252 * L_2 = (__this->___localizedText_19);
		GUIVisibleControl_UseLocalizedText_m6853(__this, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::UseLocalizedText(PixelCrushers.DialogueSystem.LocalizedTextTable)
extern "C" void GUIVisibleControl_UseLocalizedText_m6853 (GUIVisibleControl_t1347 * __this, LocalizedTextTable_t252 * ___localizedText, const MethodInfo* method)
{
	{
		LocalizedTextTable_t252 * L_0 = ___localizedText;
		__this->___localizedText_19 = L_0;
		LocalizedTextTable_t252 * L_1 = ___localizedText;
		bool L_2 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		LocalizedTextTable_t252 * L_3 = ___localizedText;
		String_t* L_4 = (__this->___originalTextValue_27);
		NullCheck(L_3);
		bool L_5 = LocalizedTextTable_ContainsField_m2857(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		LocalizedTextTable_t252 * L_6 = ___localizedText;
		String_t* L_7 = (__this->___originalTextValue_27);
		NullCheck(L_6);
		String_t* L_8 = LocalizedTextTable_get_Item_m2859(L_6, L_7, /*hidden argument*/NULL);
		__this->___text_20 = L_8;
	}

IL_0036:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::ApplyAlphaToGUIColor()
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" void GUIVisibleControl_ApplyAlphaToGUIColor_m6854 (GUIVisibleControl_t1347 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GUIVisibleControl_get_HasAlpha_m6847(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		Color_t121  L_1 = GUI_get_color_m7409(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___originalGUIColor_25 = L_1;
		Color_t121  L_2 = GUI_get_color_m7409(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = GUIVisibleControl_get_Alpha_m6845(__this, /*hidden argument*/NULL);
		Color_t121  L_4 = UnityGUITools_ColorWithAlpha_m6966(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		GUI_set_color_m3106(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::RestoreGUIColor()
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" void GUIVisibleControl_RestoreGUIColor_m6855 (GUIVisibleControl_t1347 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GUIVisibleControl_get_HasAlpha_m6847(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Color_t121  L_1 = (__this->___originalGUIColor_25);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_set_color_m3106(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::SetFormattedText(PixelCrushers.DialogueSystem.FormattedText)
extern "C" void GUIVisibleControl_SetFormattedText_m6856 (GUIVisibleControl_t1347 * __this, FormattedText_t572 * ___formattedText, const MethodInfo* method)
{
	{
		FormattedText_t572 * L_0 = ___formattedText;
		NullCheck(L_0);
		String_t* L_1 = FormattedText_get_text_m2782(L_0, /*hidden argument*/NULL);
		__this->___text_20 = L_1;
		FormattedText_t572 * L_2 = ___formattedText;
		__this->___formattingToApply_22 = L_2;
		__this->___isFormattingApplied_23 = 0;
		GUIVisibleControl_set_GuiStyle_m6850(__this, (GUIStyle_t303 *)NULL, /*hidden argument*/NULL);
		GUIControl_set_NeedToUpdateLayout_m6769(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::SetUnformattedText(System.String)
extern "C" void GUIVisibleControl_SetUnformattedText_m6857 (GUIVisibleControl_t1347 * __this, String_t* ___text, const MethodInfo* method)
{
	{
		String_t* L_0 = ___text;
		__this->___text_20 = L_0;
		__this->___formattingToApply_22 = (FormattedText_t572 *)NULL;
		__this->___guiStyle_24 = (GUIStyle_t303 *)NULL;
		GUIControl_set_NeedToUpdateLayout_m6769(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::UpdateLayoutSelf()
extern "C" void GUIVisibleControl_UpdateLayoutSelf_m6858 (GUIVisibleControl_t1347 * __this, const MethodInfo* method)
{
	{
		__this->___guiStyle_24 = (GUIStyle_t303 *)NULL;
		__this->___isFormattingApplied_23 = 0;
		GUIVisibleControl_ApplyFormatting_m6860(__this, /*hidden argument*/NULL);
		GUIControl_UpdateLayoutSelf_m6785(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::SetGUIStyle()
extern "C" void GUIVisibleControl_SetGUIStyle_m6859 (GUIVisibleControl_t1347 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t303 * L_0 = (__this->___guiStyle_24);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = (__this->___guiStyleName_21);
		GUIStyle_t303 * L_2 = (GUIStyle_t303 *)VirtFuncInvoker0< GUIStyle_t303 * >::Invoke(15 /* UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::get_DefaultGUIStyle() */, __this);
		GUIStyle_t303 * L_3 = UnityGUITools_GetGUIStyle_m2997(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		__this->___guiStyle_24 = L_3;
	}

IL_0022:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::ApplyFormatting()
extern "C" void GUIVisibleControl_ApplyFormatting_m6860 (GUIVisibleControl_t1347 * __this, const MethodInfo* method)
{
	{
		GUIVisibleControl_SetGUIStyle_m6859(__this, /*hidden argument*/NULL);
		bool L_0 = (__this->___isFormattingApplied_23);
		if (L_0)
		{
			goto IL_004b;
		}
	}
	{
		FormattedText_t572 * L_1 = (__this->___formattingToApply_22);
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		FormattedText_t572 * L_2 = (__this->___formattingToApply_22);
		NullCheck(L_2);
		String_t* L_3 = FormattedText_get_text_m2782(L_2, /*hidden argument*/NULL);
		__this->___text_20 = L_3;
		FormattedText_t572 * L_4 = (__this->___formattingToApply_22);
		GUIStyle_t303 * L_5 = (__this->___guiStyle_24);
		GUIStyle_t303 * L_6 = UnityGUITools_ApplyFormatting_m6969(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		__this->___guiStyle_24 = L_6;
		__this->___isFormattingApplied_23 = 1;
	}

IL_004b:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::AutoSizeSelf()
extern TypeInfo* GUIStyle_t303_il2cpp_TypeInfo_var;
extern TypeInfo* RectOffset_t667_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t542_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern "C" void GUIVisibleControl_AutoSizeSelf_m6861 (GUIVisibleControl_t1347 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		RectOffset_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(315);
		GUIContent_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	GUIStyle_t303 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_t97  V_3 = {0};
	Vector2_t97  V_4 = {0};
	Rect_t201  V_5 = {0};
	Rect_t201  V_6 = {0};
	Rect_t201  V_7 = {0};
	Vector2_t97  V_8 = {0};
	Rect_t201  V_9 = {0};
	Rect_t201  V_10 = {0};
	{
		GUIVisibleControl_ApplyFormatting_m6860(__this, /*hidden argument*/NULL);
		AutoSize_t1348 * L_0 = (((GUIControl_t1261 *)__this)->___autoSize_5);
		NullCheck(L_0);
		bool L_1 = (L_0->___autoSizeWidth_0);
		if (!L_1)
		{
			goto IL_00f6;
		}
	}
	{
		GUIStyle_t303 * L_2 = (__this->___guiStyle_24);
		GUIStyle_t303 * L_3 = (GUIStyle_t303 *)il2cpp_codegen_object_new (GUIStyle_t303_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2987(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		GUIStyle_t303 * L_4 = V_0;
		RectOffset_t667 * L_5 = (RectOffset_t667 *)il2cpp_codegen_object_new (RectOffset_t667_il2cpp_TypeInfo_var);
		RectOffset__ctor_m3091(L_5, 0, 0, 0, 0, /*hidden argument*/NULL);
		NullCheck(L_4);
		GUIStyle_set_padding_m3092(L_4, L_5, /*hidden argument*/NULL);
		GUIStyle_t303 * L_6 = V_0;
		String_t* L_7 = (__this->___text_20);
		GUIContent_t542 * L_8 = (GUIContent_t542 *)il2cpp_codegen_object_new (GUIContent_t542_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2982(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector2_t97  L_9 = GUIStyle_CalcSize_m2983(L_6, L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		float L_10 = ((&V_3)->___x_1);
		GUIStyle_t303 * L_11 = (__this->___guiStyle_24);
		NullCheck(L_11);
		RectOffset_t667 * L_12 = GUIStyle_get_padding_m7427(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = RectOffset_get_left_m5026(L_12, /*hidden argument*/NULL);
		GUIStyle_t303 * L_14 = (__this->___guiStyle_24);
		NullCheck(L_14);
		RectOffset_t667 * L_15 = GUIStyle_get_padding_m7427(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = RectOffset_get_right_m7428(L_15, /*hidden argument*/NULL);
		V_1 = ((float)((float)((float)((float)L_10+(float)(((float)L_13))))+(float)(((float)L_16))));
		float L_17 = V_1;
		ScaledRect_t199 * L_18 = (((GUIControl_t1261 *)__this)->___scaledRect_4);
		NullCheck(L_18);
		float L_19 = (L_18->___minPixelWidth_8);
		AutoSize_t1348 * L_20 = (((GUIControl_t1261 *)__this)->___autoSize_5);
		NullCheck(L_20);
		ScaledValue_t606 * L_21 = (L_20->___maxWidth_2);
		Vector2_t97  L_22 = GUIControl_get_WindowSize_m6770(__this, /*hidden argument*/NULL);
		V_4 = L_22;
		float L_23 = ((&V_4)->___x_1);
		NullCheck(L_21);
		float L_24 = ScaledValue_GetPixelValue_m6942(L_21, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		float L_25 = Mathf_Clamp_m2467(NULL /*static, unused*/, L_17, L_19, L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		float L_26 = V_1;
		AutoSize_t1348 * L_27 = (((GUIControl_t1261 *)__this)->___autoSize_5);
		NullCheck(L_27);
		RectOffset_t667 * L_28 = (L_27->___padding_4);
		NullCheck(L_28);
		int32_t L_29 = RectOffset_get_left_m5026(L_28, /*hidden argument*/NULL);
		AutoSize_t1348 * L_30 = (((GUIControl_t1261 *)__this)->___autoSize_5);
		NullCheck(L_30);
		RectOffset_t667 * L_31 = (L_30->___padding_4);
		NullCheck(L_31);
		int32_t L_32 = RectOffset_get_right_m7428(L_31, /*hidden argument*/NULL);
		V_1 = ((float)((float)L_26+(float)(((float)((int32_t)((int32_t)L_29+(int32_t)L_32))))));
		float L_33 = V_1;
		float L_34 = GUIVisibleControl_GetAutoSizeX_m6862(__this, L_33, /*hidden argument*/NULL);
		Rect_t201  L_35 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_5 = L_35;
		float L_36 = Rect_get_y_m4805((&V_5), /*hidden argument*/NULL);
		float L_37 = V_1;
		Rect_t201  L_38 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_6 = L_38;
		float L_39 = Rect_get_height_m2868((&V_6), /*hidden argument*/NULL);
		Rect_t201  L_40 = {0};
		Rect__ctor_m2425(&L_40, L_34, L_36, L_37, L_39, /*hidden argument*/NULL);
		GUIControl_set_rect_m6764(__this, L_40, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		AutoSize_t1348 * L_41 = (((GUIControl_t1261 *)__this)->___autoSize_5);
		NullCheck(L_41);
		bool L_42 = (L_41->___autoSizeHeight_1);
		if (!L_42)
		{
			goto IL_01b3;
		}
	}
	{
		GUIStyle_t303 * L_43 = (__this->___guiStyle_24);
		String_t* L_44 = (__this->___text_20);
		GUIContent_t542 * L_45 = (GUIContent_t542 *)il2cpp_codegen_object_new (GUIContent_t542_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2982(L_45, L_44, /*hidden argument*/NULL);
		Rect_t201  L_46 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_7 = L_46;
		float L_47 = Rect_get_width_m2728((&V_7), /*hidden argument*/NULL);
		NullCheck(L_43);
		float L_48 = GUIStyle_CalcHeight_m7384(L_43, L_45, L_47, /*hidden argument*/NULL);
		V_2 = L_48;
		float L_49 = V_2;
		ScaledRect_t199 * L_50 = (((GUIControl_t1261 *)__this)->___scaledRect_4);
		NullCheck(L_50);
		float L_51 = (L_50->___minPixelHeight_9);
		AutoSize_t1348 * L_52 = (((GUIControl_t1261 *)__this)->___autoSize_5);
		NullCheck(L_52);
		ScaledValue_t606 * L_53 = (L_52->___maxHeight_3);
		Vector2_t97  L_54 = GUIControl_get_WindowSize_m6770(__this, /*hidden argument*/NULL);
		V_8 = L_54;
		float L_55 = ((&V_8)->___y_2);
		NullCheck(L_53);
		float L_56 = ScaledValue_GetPixelValue_m6942(L_53, L_55, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		float L_57 = Mathf_Clamp_m2467(NULL /*static, unused*/, L_49, L_51, L_56, /*hidden argument*/NULL);
		V_2 = L_57;
		float L_58 = V_2;
		AutoSize_t1348 * L_59 = (((GUIControl_t1261 *)__this)->___autoSize_5);
		NullCheck(L_59);
		RectOffset_t667 * L_60 = (L_59->___padding_4);
		NullCheck(L_60);
		int32_t L_61 = RectOffset_get_top_m5027(L_60, /*hidden argument*/NULL);
		AutoSize_t1348 * L_62 = (((GUIControl_t1261 *)__this)->___autoSize_5);
		NullCheck(L_62);
		RectOffset_t667 * L_63 = (L_62->___padding_4);
		NullCheck(L_63);
		int32_t L_64 = RectOffset_get_bottom_m7429(L_63, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_58+(float)(((float)((int32_t)((int32_t)L_61+(int32_t)L_64))))));
		Rect_t201  L_65 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_9 = L_65;
		float L_66 = Rect_get_x_m4804((&V_9), /*hidden argument*/NULL);
		float L_67 = V_2;
		float L_68 = GUIVisibleControl_GetAutoSizeY_m6863(__this, L_67, /*hidden argument*/NULL);
		Rect_t201  L_69 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_10 = L_69;
		float L_70 = Rect_get_width_m2728((&V_10), /*hidden argument*/NULL);
		float L_71 = V_2;
		Rect_t201  L_72 = {0};
		Rect__ctor_m2425(&L_72, L_66, L_68, L_70, L_71, /*hidden argument*/NULL);
		GUIControl_set_rect_m6764(__this, L_72, /*hidden argument*/NULL);
	}

IL_01b3:
	{
		return;
	}
}
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::GetAutoSizeX(System.Single)
extern "C" float GUIVisibleControl_GetAutoSizeX_m6862 (GUIVisibleControl_t1347 * __this, float ___width, const MethodInfo* method)
{
	int32_t V_0 = {0};
	Rect_t201  V_1 = {0};
	Rect_t201  V_2 = {0};
	Rect_t201  V_3 = {0};
	Rect_t201  V_4 = {0};
	Rect_t201  V_5 = {0};
	Rect_t201  V_6 = {0};
	{
		ScaledRect_t199 * L_0 = (((GUIControl_t1261 *)__this)->___scaledRect_4);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___alignment_3);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2 == 0)
		{
			goto IL_003b;
		}
		if (L_2 == 1)
		{
			goto IL_004a;
		}
		if (L_2 == 2)
		{
			goto IL_0070;
		}
		if (L_2 == 3)
		{
			goto IL_003b;
		}
		if (L_2 == 4)
		{
			goto IL_004a;
		}
		if (L_2 == 5)
		{
			goto IL_0070;
		}
		if (L_2 == 6)
		{
			goto IL_003b;
		}
		if (L_2 == 7)
		{
			goto IL_004a;
		}
		if (L_2 == 8)
		{
			goto IL_0070;
		}
	}
	{
		goto IL_0092;
	}

IL_003b:
	{
		Rect_t201  L_3 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = Rect_get_x_m4804((&V_1), /*hidden argument*/NULL);
		return L_4;
	}

IL_004a:
	{
		Rect_t201  L_5 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = Rect_get_x_m4804((&V_2), /*hidden argument*/NULL);
		Rect_t201  L_7 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = Rect_get_width_m2728((&V_3), /*hidden argument*/NULL);
		float L_9 = ___width;
		return ((float)((float)L_6+(float)((float)((float)(0.5f)*(float)((float)((float)L_8-(float)L_9))))));
	}

IL_0070:
	{
		Rect_t201  L_10 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = Rect_get_x_m4804((&V_4), /*hidden argument*/NULL);
		Rect_t201  L_12 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_5 = L_12;
		float L_13 = Rect_get_width_m2728((&V_5), /*hidden argument*/NULL);
		float L_14 = ___width;
		return ((float)((float)L_11+(float)((float)((float)L_13-(float)L_14))));
	}

IL_0092:
	{
		Rect_t201  L_15 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_6 = L_15;
		float L_16 = Rect_get_x_m4804((&V_6), /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::GetAutoSizeY(System.Single)
extern "C" float GUIVisibleControl_GetAutoSizeY_m6863 (GUIVisibleControl_t1347 * __this, float ___height, const MethodInfo* method)
{
	int32_t V_0 = {0};
	Rect_t201  V_1 = {0};
	Rect_t201  V_2 = {0};
	Rect_t201  V_3 = {0};
	Rect_t201  V_4 = {0};
	Rect_t201  V_5 = {0};
	Rect_t201  V_6 = {0};
	{
		ScaledRect_t199 * L_0 = (((GUIControl_t1261 *)__this)->___scaledRect_4);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___alignment_3);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2 == 0)
		{
			goto IL_003b;
		}
		if (L_2 == 1)
		{
			goto IL_003b;
		}
		if (L_2 == 2)
		{
			goto IL_003b;
		}
		if (L_2 == 3)
		{
			goto IL_004a;
		}
		if (L_2 == 4)
		{
			goto IL_004a;
		}
		if (L_2 == 5)
		{
			goto IL_004a;
		}
		if (L_2 == 6)
		{
			goto IL_0070;
		}
		if (L_2 == 7)
		{
			goto IL_0070;
		}
		if (L_2 == 8)
		{
			goto IL_0070;
		}
	}
	{
		goto IL_0092;
	}

IL_003b:
	{
		Rect_t201  L_3 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = Rect_get_y_m4805((&V_1), /*hidden argument*/NULL);
		return L_4;
	}

IL_004a:
	{
		Rect_t201  L_5 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = Rect_get_y_m4805((&V_2), /*hidden argument*/NULL);
		Rect_t201  L_7 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = Rect_get_height_m2868((&V_3), /*hidden argument*/NULL);
		float L_9 = ___height;
		return ((float)((float)L_6+(float)((float)((float)(0.5f)*(float)((float)((float)L_8-(float)L_9))))));
	}

IL_0070:
	{
		Rect_t201  L_10 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = Rect_get_y_m4805((&V_4), /*hidden argument*/NULL);
		Rect_t201  L_12 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_5 = L_12;
		float L_13 = Rect_get_height_m2868((&V_5), /*hidden argument*/NULL);
		float L_14 = ___height;
		return ((float)((float)L_11+(float)((float)((float)L_13-(float)L_14))));
	}

IL_0092:
	{
		Rect_t201  L_15 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_6 = L_15;
		float L_16 = Rect_get_y_m4805((&V_6), /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::PlaySound(UnityEngine.AudioClip)
extern const MethodInfo* Component_GetComponent_TisAudioSource_t262_m2873_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisAudioSource_t262_m7324_MethodInfo_var;
extern "C" void GUIVisibleControl_PlaySound_m6864 (GUIVisibleControl_t1347 * __this, AudioClip_t261 * ___audioClip, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAudioSource_t262_m2873_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483751);
		GameObject_AddComponent_TisAudioSource_t262_m7324_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484390);
		s_Il2CppMethodIntialized = true;
	}
	AudioSource_t262 * V_0 = {0};
	{
		AudioClip_t261 * L_0 = ___audioClip;
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		Camera_t356 * L_2 = Camera_get_main_m2548(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_3 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		Camera_t356 * L_4 = Camera_get_main_m2548(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		AudioSource_t262 * L_5 = Component_GetComponent_TisAudioSource_t262_m2873(L_4, /*hidden argument*/Component_GetComponent_TisAudioSource_t262_m2873_MethodInfo_var);
		V_0 = L_5;
		AudioSource_t262 * L_6 = V_0;
		bool L_7 = Object_op_Equality_m2464(NULL /*static, unused*/, L_6, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		Camera_t356 * L_8 = Camera_get_main_m2548(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_t49 * L_9 = Component_get_gameObject_m2452(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		AudioSource_t262 * L_10 = GameObject_AddComponent_TisAudioSource_t262_m7324(L_9, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t262_m7324_MethodInfo_var);
		V_0 = L_10;
	}

IL_0043:
	{
		AudioSource_t262 * L_11 = V_0;
		AudioClip_t261 * L_12 = ___audioClip;
		NullCheck(L_11);
		AudioSource_PlayOneShot_m2871(L_11, L_12, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.GUIWindow
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIWind.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.GUIWindow
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIWindMethodDeclarations.h"

// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunction.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunctionMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIWindow::.ctor()
extern "C" void GUIWindow__ctor_m6865 (GUIWindow_t1358 * __this, const MethodInfo* method)
{
	{
		GUIVisibleControl__ctor_m6844(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.GUIWindow::get_DefaultGUIStyle()
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t303 * GUIWindow_get_DefaultGUIStyle_m6866 (GUIWindow_t1358 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUISkin_t197 * L_0 = GUI_get_skin_m2437(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t303 * L_1 = GUISkin_get_window_m7430(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIWindow::DrawSelf(UnityEngine.Vector2)
extern TypeInfo* WindowFunction_t586_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern const MethodInfo* GUIWindow_WindowFunction_m6869_MethodInfo_var;
extern "C" void GUIWindow_DrawSelf_m6867 (GUIWindow_t1358 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WindowFunction_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		GUIWindow_WindowFunction_m6869_MethodInfo_var = il2cpp_codegen_method_info_from_index(789);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t201  V_0 = {0};
	Rect_t201  V_1 = {0};
	Rect_t201  V_2 = {0};
	{
		GUIVisibleControl_SetGUIStyle_m6859(__this, /*hidden argument*/NULL);
		GUIVisibleControl_ApplyAlphaToGUIColor_m6854(__this, /*hidden argument*/NULL);
		float L_0 = ((&___relativeMousePosition)->___x_1);
		Rect_t201  L_1 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = Rect_get_x_m4804((&V_1), /*hidden argument*/NULL);
		float L_3 = ((&___relativeMousePosition)->___y_2);
		Rect_t201  L_4 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = Rect_get_y_m4805((&V_2), /*hidden argument*/NULL);
		Vector2_t97  L_6 = {0};
		Vector2__ctor_m2417(&L_6, ((float)((float)L_0-(float)L_2)), ((float)((float)L_3-(float)L_5)), /*hidden argument*/NULL);
		__this->___currentChildMousePosition_28 = L_6;
		Rect_t201  L_7 = GUIControl_get_rect_m6763(__this, /*hidden argument*/NULL);
		IntPtr_t L_8 = { (void*)GUIWindow_WindowFunction_m6869_MethodInfo_var };
		WindowFunction_t586 * L_9 = (WindowFunction_t586 *)il2cpp_codegen_object_new (WindowFunction_t586_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m2426(L_9, __this, L_8, /*hidden argument*/NULL);
		String_t* L_10 = (((GUIVisibleControl_t1347 *)__this)->___text_20);
		GUIStyle_t303 * L_11 = GUIVisibleControl_get_GuiStyle_m6849(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		Rect_t201  L_12 = GUI_Window_m7431(NULL /*static, unused*/, 0, L_7, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		GUIVisibleControl_RestoreGUIColor_m6855(__this, /*hidden argument*/NULL);
		Rect_t201  L_13 = V_0;
		GUIControl_set_rect_m6764(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIWindow::DrawChildren(UnityEngine.Vector2)
extern "C" void GUIWindow_DrawChildren_m6868 (GUIWindow_t1358 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIWindow::WindowFunction(System.Int32)
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t1455_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t588_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m7401_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m7402_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m7403_MethodInfo_var;
extern "C" void GUIWindow_WindowFunction_m6869 (GUIWindow_t1358 * __this, int32_t ___windowID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Enumerator_t1455_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2564);
		IDisposable_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		List_1_GetEnumerator_m7401_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484429);
		Enumerator_get_Current_m7402_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484430);
		Enumerator_MoveNext_m7403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484431);
		s_Il2CppMethodIntialized = true;
	}
	GUIControl_t1261 * V_0 = {0};
	Enumerator_t1455  V_1 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Rect_t201  L_0 = {0};
		Rect__ctor_m2425(&L_0, (0.0f), (0.0f), (10000.0f), (20.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_DragWindow_m3391(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		List_1_t1351 * L_1 = GUIControl_get_Children_m6767(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Enumerator_t1455  L_2 = List_1_GetEnumerator_m7401(L_1, /*hidden argument*/List_1_GetEnumerator_m7401_MethodInfo_var);
		V_1 = L_2;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0043;
		}

IL_002f:
		{
			GUIControl_t1261 * L_3 = Enumerator_get_Current_m7402((&V_1), /*hidden argument*/Enumerator_get_Current_m7402_MethodInfo_var);
			V_0 = L_3;
			GUIControl_t1261 * L_4 = V_0;
			Vector2_t97  L_5 = (__this->___currentChildMousePosition_28);
			NullCheck(L_4);
			GUIControl_Draw_m6778(L_4, L_5, /*hidden argument*/NULL);
		}

IL_0043:
		{
			bool L_6 = Enumerator_MoveNext_m7403((&V_1), /*hidden argument*/Enumerator_MoveNext_m7403_MethodInfo_var);
			if (L_6)
			{
				goto IL_002f;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0054);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		Enumerator_t1455  L_7 = V_1;
		Enumerator_t1455  L_8 = L_7;
		Object_t * L_9 = Box(Enumerator_t1455_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t588_il2cpp_TypeInfo_var, L_9);
		IL2CPP_END_FINALLY(84)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0060:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.AudioEffect/<Play>c__Iterator17
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_AudioEf.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.AudioEffect/<Play>c__Iterator17
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_AudioEfMethodDeclarations.h"

// PixelCrushers.DialogueSystem.UnityGUI.AudioEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_AudioEf_0.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.AudioEffect/<Play>c__Iterator17::.ctor()
extern "C" void U3CPlayU3Ec__Iterator17__ctor_m6870 (U3CPlayU3Ec__Iterator17_t1360 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.UnityGUI.AudioEffect/<Play>c__Iterator17::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayU3Ec__Iterator17_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6871 (U3CPlayU3Ec__Iterator17_t1360 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.UnityGUI.AudioEffect/<Play>c__Iterator17::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayU3Ec__Iterator17_System_Collections_IEnumerator_get_Current_m6872 (U3CPlayU3Ec__Iterator17_t1360 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.AudioEffect/<Play>c__Iterator17::MoveNext()
extern "C" bool U3CPlayU3Ec__Iterator17_MoveNext_m6873 (U3CPlayU3Ec__Iterator17_t1360 * __this, const MethodInfo* method)
{
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
			goto IL_005a;
		}
	}
	{
		goto IL_0061;
	}

IL_0021:
	{
		AudioEffect_t1359 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		AudioSource_t262 * L_3 = (L_2->___myAudio_3);
		bool L_4 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_3, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		AudioEffect_t1359 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		AudioSource_t262 * L_6 = (L_5->___myAudio_3);
		NullCheck(L_6);
		AudioSource_Play_m3157(L_6, /*hidden argument*/NULL);
	}

IL_0047:
	{
		__this->___U24current_1 = NULL;
		__this->___U24PC_0 = 1;
		goto IL_0063;
	}

IL_005a:
	{
		__this->___U24PC_0 = (-1);
	}

IL_0061:
	{
		return 0;
	}

IL_0063:
	{
		return 1;
	}
	// Dead block : IL_0065: ldloc.1
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.AudioEffect/<Play>c__Iterator17::Dispose()
extern "C" void U3CPlayU3Ec__Iterator17_Dispose_m6874 (U3CPlayU3Ec__Iterator17_t1360 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.AudioEffect/<Play>c__Iterator17::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CPlayU3Ec__Iterator17_Reset_m6875 (U3CPlayU3Ec__Iterator17_t1360 * __this, const MethodInfo* method)
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
// PixelCrushers.DialogueSystem.UnityGUI.AudioEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_AudioEf_0MethodDeclarations.h"

// PixelCrushers.DialogueSystem.UnityGUI.GUIEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIEffeMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.AudioEffect::.ctor()
extern "C" void AudioEffect__ctor_m6876 (AudioEffect_t1359 * __this, const MethodInfo* method)
{
	{
		GUIEffect__ctor_m6898(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.AudioEffect::Awake()
extern const MethodInfo* Component_GetComponent_TisAudioSource_t262_m2873_MethodInfo_var;
extern "C" void AudioEffect_Awake_m6877 (AudioEffect_t1359 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAudioSource_t262_m2873_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483751);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioSource_t262 * L_0 = Component_GetComponent_TisAudioSource_t262_m2873(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t262_m2873_MethodInfo_var);
		__this->___myAudio_3 = L_0;
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityGUI.AudioEffect::Play()
extern TypeInfo* U3CPlayU3Ec__Iterator17_t1360_il2cpp_TypeInfo_var;
extern "C" Object_t * AudioEffect_Play_m6878 (AudioEffect_t1359 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayU3Ec__Iterator17_t1360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2570);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayU3Ec__Iterator17_t1360 * V_0 = {0};
	{
		U3CPlayU3Ec__Iterator17_t1360 * L_0 = (U3CPlayU3Ec__Iterator17_t1360 *)il2cpp_codegen_object_new (U3CPlayU3Ec__Iterator17_t1360_il2cpp_TypeInfo_var);
		U3CPlayU3Ec__Iterator17__ctor_m6870(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayU3Ec__Iterator17_t1360 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CPlayU3Ec__Iterator17_t1360 * L_2 = V_0;
		return L_2;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.ContinueButtonFastForward
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_Continu.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.ContinueButtonFastForward
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_ContinuMethodDeclarations.h"

// PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_Typewri_0.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityDi.h"
// PixelCrushers.DialogueSystem.AbstractDialogueUI
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractDialogue_0.h"
// PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_Typewri_0MethodDeclarations.h"
// PixelCrushers.DialogueSystem.AbstractDialogueUI
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractDialogue_0MethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.ContinueButtonFastForward::.ctor()
extern "C" void ContinueButtonFastForward__ctor_m6879 (ContinueButtonFastForward_t1364 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ContinueButtonFastForward::OnFastForward()
extern "C" void ContinueButtonFastForward_OnFastForward_m6880 (ContinueButtonFastForward_t1364 * __this, const MethodInfo* method)
{
	{
		TypewriterEffect_t1363 * L_0 = (__this->___typewriterEffect_3);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		TypewriterEffect_t1363 * L_2 = (__this->___typewriterEffect_3);
		NullCheck(L_2);
		bool L_3 = TypewriterEffect_get_IsPlaying_m6927(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		TypewriterEffect_t1363 * L_4 = (__this->___typewriterEffect_3);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(5 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect::Stop() */, L_4);
		goto IL_004d;
	}

IL_0031:
	{
		UnityDialogueUI_t1362 * L_5 = (__this->___dialogueUI_2);
		bool L_6 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_5, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		UnityDialogueUI_t1362 * L_7 = (__this->___dialogueUI_2);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(37 /* System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::OnContinue() */, L_7);
	}

IL_004d:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.FadeEffect/<Play>c__Iterator18
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_FadeEff.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.FadeEffect/<Play>c__Iterator18
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_FadeEffMethodDeclarations.h"

// PixelCrushers.DialogueSystem.UnityGUI.FadeEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_FadeEff_0.h"
struct Component_t462;
struct GUIVisibleControl_t1347;
// Declaration !!0 UnityEngine.Component::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl>()
// !!0 UnityEngine.Component::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl>()
#define Component_GetComponent_TisGUIVisibleControl_t1347_m7432(__this, method) (( GUIVisibleControl_t1347 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.UnityGUI.FadeEffect/<Play>c__Iterator18::.ctor()
extern "C" void U3CPlayU3Ec__Iterator18__ctor_m6881 (U3CPlayU3Ec__Iterator18_t1366 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.UnityGUI.FadeEffect/<Play>c__Iterator18::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayU3Ec__Iterator18_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6882 (U3CPlayU3Ec__Iterator18_t1366 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_5);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.UnityGUI.FadeEffect/<Play>c__Iterator18::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayU3Ec__Iterator18_System_Collections_IEnumerator_get_Current_m6883 (U3CPlayU3Ec__Iterator18_t1366 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_5);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.FadeEffect/<Play>c__Iterator18::MoveNext()
extern TypeInfo* DialogueTime_t625_il2cpp_TypeInfo_var;
extern TypeInfo* Tools_t630_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForSeconds_t629_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUIVisibleControl_t1347_m7432_MethodInfo_var;
extern "C" bool U3CPlayU3Ec__Iterator18_MoveNext_m6884 (U3CPlayU3Ec__Iterator18_t1366 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueTime_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		Tools_t630_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		WaitForSeconds_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		Component_GetComponent_TisGUIVisibleControl_t1347_m7432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484438);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_4);
		V_0 = L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_00c9;
		}
		if (L_1 == 2)
		{
			goto IL_012a;
		}
		if (L_1 == 3)
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01cb;
	}

IL_0029:
	{
		FadeEffect_t1365 * L_2 = (__this->___U3CU3Ef__this_6);
		FadeEffect_t1365 * L_3 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_3);
		GUIVisibleControl_t1347 * L_4 = Component_GetComponent_TisGUIVisibleControl_t1347_m7432(L_3, /*hidden argument*/Component_GetComponent_TisGUIVisibleControl_t1347_m7432_MethodInfo_var);
		NullCheck(L_2);
		L_2->___control_6 = L_4;
		FadeEffect_t1365 * L_5 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_5);
		GUIVisibleControl_t1347 * L_6 = (L_5->___control_6);
		bool L_7 = Object_op_Equality_m2464(NULL /*static, unused*/, L_6, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_01cb;
	}

IL_005a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_8 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CstartTimeU3E__0_0 = L_8;
		float L_9 = (__this->___U3CstartTimeU3E__0_0);
		FadeEffect_t1365 * L_10 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_10);
		float L_11 = (L_10->___fadeInDuration_3);
		__this->___U3CendTimeU3E__1_1 = ((float)((float)L_9+(float)L_11));
		goto IL_00c9;
	}

IL_0082:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_12 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = (__this->___U3CstartTimeU3E__0_0);
		__this->___U3CelapsedU3E__2_2 = ((float)((float)L_12-(float)L_13));
		FadeEffect_t1365 * L_14 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_14);
		GUIVisibleControl_t1347 * L_15 = (L_14->___control_6);
		float L_16 = (__this->___U3CelapsedU3E__2_2);
		FadeEffect_t1365 * L_17 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_17);
		float L_18 = (L_17->___fadeInDuration_3);
		NullCheck(L_15);
		GUIVisibleControl_set_Alpha_m6846(L_15, ((float)((float)L_16/(float)L_18)), /*hidden argument*/NULL);
		__this->___U24current_5 = NULL;
		__this->___U24PC_4 = 1;
		goto IL_01cd;
	}

IL_00c9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_19 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_20 = (__this->___U3CendTimeU3E__1_1);
		if ((((float)L_19) < ((float)L_20)))
		{
			goto IL_0082;
		}
	}
	{
		FadeEffect_t1365 * L_21 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_21);
		GUIVisibleControl_t1347 * L_22 = (L_21->___control_6);
		NullCheck(L_22);
		GUIVisibleControl_set_Alpha_m6846(L_22, (1.0f), /*hidden argument*/NULL);
		FadeEffect_t1365 * L_23 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_23);
		float L_24 = (L_23->___fadeOutDuration_5);
		IL2CPP_RUNTIME_CLASS_INIT(Tools_t630_il2cpp_TypeInfo_var);
		bool L_25 = Tools_ApproximatelyZero_m6262(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0108;
		}
	}
	{
		goto IL_01cb;
	}

IL_0108:
	{
		FadeEffect_t1365 * L_26 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_26);
		float L_27 = (L_26->___duration_4);
		WaitForSeconds_t629 * L_28 = (WaitForSeconds_t629 *)il2cpp_codegen_object_new (WaitForSeconds_t629_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2791(L_28, L_27, /*hidden argument*/NULL);
		__this->___U24current_5 = L_28;
		__this->___U24PC_4 = 2;
		goto IL_01cd;
	}

IL_012a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_29 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CstartTimeU3E__0_0 = L_29;
		float L_30 = (__this->___U3CstartTimeU3E__0_0);
		FadeEffect_t1365 * L_31 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_31);
		float L_32 = (L_31->___fadeOutDuration_5);
		__this->___U3CendTimeU3E__1_1 = ((float)((float)L_30+(float)L_32));
		goto IL_019f;
	}

IL_0152:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_33 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_34 = (__this->___U3CstartTimeU3E__0_0);
		__this->___U3CelapsedU3E__3_3 = ((float)((float)L_33-(float)L_34));
		FadeEffect_t1365 * L_35 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_35);
		GUIVisibleControl_t1347 * L_36 = (L_35->___control_6);
		float L_37 = (__this->___U3CelapsedU3E__3_3);
		FadeEffect_t1365 * L_38 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_38);
		float L_39 = (L_38->___fadeOutDuration_5);
		NullCheck(L_36);
		GUIVisibleControl_set_Alpha_m6846(L_36, ((float)((float)(1.0f)-(float)((float)((float)L_37/(float)L_39)))), /*hidden argument*/NULL);
		__this->___U24current_5 = NULL;
		__this->___U24PC_4 = 3;
		goto IL_01cd;
	}

IL_019f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_40 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_41 = (__this->___U3CendTimeU3E__1_1);
		if ((((float)L_40) < ((float)L_41)))
		{
			goto IL_0152;
		}
	}
	{
		FadeEffect_t1365 * L_42 = (__this->___U3CU3Ef__this_6);
		NullCheck(L_42);
		GUIVisibleControl_t1347 * L_43 = (L_42->___control_6);
		NullCheck(L_43);
		GUIVisibleControl_set_Alpha_m6846(L_43, (0.0f), /*hidden argument*/NULL);
		__this->___U24PC_4 = (-1);
	}

IL_01cb:
	{
		return 0;
	}

IL_01cd:
	{
		return 1;
	}
	// Dead block : IL_01cf: ldloc.1
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.FadeEffect/<Play>c__Iterator18::Dispose()
extern "C" void U3CPlayU3Ec__Iterator18_Dispose_m6885 (U3CPlayU3Ec__Iterator18_t1366 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_4 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.FadeEffect/<Play>c__Iterator18::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CPlayU3Ec__Iterator18_Reset_m6886 (U3CPlayU3Ec__Iterator18_t1366 * __this, const MethodInfo* method)
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
// PixelCrushers.DialogueSystem.UnityGUI.FadeEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_FadeEff_0MethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.UnityGUI.FadeEffect::.ctor()
extern "C" void FadeEffect__ctor_m6887 (FadeEffect_t1365 * __this, const MethodInfo* method)
{
	{
		__this->___fadeInDuration_3 = (0.5f);
		__this->___duration_4 = (1.0f);
		__this->___fadeOutDuration_5 = (0.5f);
		GUIEffect__ctor_m6898(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.FadeEffect::SetFadeDurations(System.Single,System.Single,System.Single)
extern "C" void FadeEffect_SetFadeDurations_m6888 (FadeEffect_t1365 * __this, float ___fadeInDuration, float ___duration, float ___fadeOutDuration, const MethodInfo* method)
{
	{
		float L_0 = ___fadeInDuration;
		__this->___fadeInDuration_3 = L_0;
		float L_1 = ___duration;
		__this->___duration_4 = L_1;
		float L_2 = ___fadeOutDuration;
		__this->___fadeOutDuration_5 = L_2;
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityGUI.FadeEffect::Play()
extern TypeInfo* U3CPlayU3Ec__Iterator18_t1366_il2cpp_TypeInfo_var;
extern "C" Object_t * FadeEffect_Play_m6889 (FadeEffect_t1365 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayU3Ec__Iterator18_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2572);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayU3Ec__Iterator18_t1366 * V_0 = {0};
	{
		U3CPlayU3Ec__Iterator18_t1366 * L_0 = (U3CPlayU3Ec__Iterator18_t1366 *)il2cpp_codegen_object_new (U3CPlayU3Ec__Iterator18_t1366_il2cpp_TypeInfo_var);
		U3CPlayU3Ec__Iterator18__ctor_m6881(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayU3Ec__Iterator18_t1366 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_6 = __this;
		U3CPlayU3Ec__Iterator18_t1366 * L_2 = V_0;
		return L_2;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.FlashEffect/<Play>c__Iterator19
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_FlashEf.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.FlashEffect/<Play>c__Iterator19
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_FlashEfMethodDeclarations.h"

// PixelCrushers.DialogueSystem.UnityGUI.FlashEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_FlashEf_0.h"
struct Component_t462;
struct GUIControl_t1261;
// Declaration !!0 UnityEngine.Component::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>()
// !!0 UnityEngine.Component::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>()
#define Component_GetComponent_TisGUIControl_t1261_m7433(__this, method) (( GUIControl_t1261 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.UnityGUI.FlashEffect/<Play>c__Iterator19::.ctor()
extern "C" void U3CPlayU3Ec__Iterator19__ctor_m6890 (U3CPlayU3Ec__Iterator19_t1368 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.UnityGUI.FlashEffect/<Play>c__Iterator19::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayU3Ec__Iterator19_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6891 (U3CPlayU3Ec__Iterator19_t1368 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.UnityGUI.FlashEffect/<Play>c__Iterator19::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayU3Ec__Iterator19_System_Collections_IEnumerator_get_Current_m6892 (U3CPlayU3Ec__Iterator19_t1368 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.FlashEffect/<Play>c__Iterator19::MoveNext()
extern TypeInfo* WaitForSeconds_t629_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUIControl_t1261_m7433_MethodInfo_var;
extern "C" bool U3CPlayU3Ec__Iterator19_MoveNext_m6893 (U3CPlayU3Ec__Iterator19_t1368 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		Component_GetComponent_TisGUIControl_t1261_m7433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484439);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
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
			goto IL_0085;
		}
	}
	{
		goto IL_00b4;
	}

IL_0021:
	{
		FlashEffect_t1367 * L_2 = (__this->___U3CU3Ef__this_2);
		FlashEffect_t1367 * L_3 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_3);
		GUIControl_t1261 * L_4 = Component_GetComponent_TisGUIControl_t1261_m7433(L_3, /*hidden argument*/Component_GetComponent_TisGUIControl_t1261_m7433_MethodInfo_var);
		NullCheck(L_2);
		L_2->___control_4 = L_4;
		FlashEffect_t1367 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		GUIControl_t1261 * L_6 = (L_5->___control_4);
		bool L_7 = Object_op_Equality_m2464(NULL /*static, unused*/, L_6, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		goto IL_00b4;
	}

IL_0052:
	{
		FlashEffect_t1367 * L_8 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_8);
		GUIControl_t1261 * L_9 = (L_8->___control_4);
		NullCheck(L_9);
		L_9->___visible_8 = 1;
	}

IL_0063:
	{
		FlashEffect_t1367 * L_10 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_10);
		float L_11 = (L_10->___interval_3);
		WaitForSeconds_t629 * L_12 = (WaitForSeconds_t629 *)il2cpp_codegen_object_new (WaitForSeconds_t629_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2791(L_12, L_11, /*hidden argument*/NULL);
		__this->___U24current_1 = L_12;
		__this->___U24PC_0 = 1;
		goto IL_00b6;
	}

IL_0085:
	{
		FlashEffect_t1367 * L_13 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_13);
		GUIControl_t1261 * L_14 = (L_13->___control_4);
		FlashEffect_t1367 * L_15 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_15);
		GUIControl_t1261 * L_16 = (L_15->___control_4);
		NullCheck(L_16);
		bool L_17 = (L_16->___visible_8);
		NullCheck(L_14);
		L_14->___visible_8 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_0063;
	}
	// Dead block : IL_00ad: ldarg.0

IL_00b4:
	{
		return 0;
	}

IL_00b6:
	{
		return 1;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.FlashEffect/<Play>c__Iterator19::Dispose()
extern "C" void U3CPlayU3Ec__Iterator19_Dispose_m6894 (U3CPlayU3Ec__Iterator19_t1368 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.FlashEffect/<Play>c__Iterator19::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CPlayU3Ec__Iterator19_Reset_m6895 (U3CPlayU3Ec__Iterator19_t1368 * __this, const MethodInfo* method)
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
// PixelCrushers.DialogueSystem.UnityGUI.FlashEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_FlashEf_0MethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.UnityGUI.FlashEffect::.ctor()
extern "C" void FlashEffect__ctor_m6896 (FlashEffect_t1367 * __this, const MethodInfo* method)
{
	{
		__this->___interval_3 = (0.5f);
		GUIEffect__ctor_m6898(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityGUI.FlashEffect::Play()
extern TypeInfo* U3CPlayU3Ec__Iterator19_t1368_il2cpp_TypeInfo_var;
extern "C" Object_t * FlashEffect_Play_m6897 (FlashEffect_t1367 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayU3Ec__Iterator19_t1368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2573);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayU3Ec__Iterator19_t1368 * V_0 = {0};
	{
		U3CPlayU3Ec__Iterator19_t1368 * L_0 = (U3CPlayU3Ec__Iterator19_t1368 *)il2cpp_codegen_object_new (U3CPlayU3Ec__Iterator19_t1368_il2cpp_TypeInfo_var);
		U3CPlayU3Ec__Iterator19__ctor_m6890(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayU3Ec__Iterator19_t1368 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CPlayU3Ec__Iterator19_t1368 * L_2 = V_0;
		return L_2;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.GUIEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIEffe.h"
#ifndef _MSC_VER
#else
#endif

// PixelCrushers.DialogueSystem.UnityGUI.GUIEffectTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIEffe_0.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIEffect::.ctor()
extern "C" void GUIEffect__ctor_m6898 (GUIEffect_t1361 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityGUI.GUIEffect::Play()
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIEffect::Stop()
extern "C" void GUIEffect_Stop_m6899 (GUIEffect_t1361 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour_StopAllCoroutines_m2853(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIEffect::OnEnable()
extern "C" void GUIEffect_OnEnable_m6900 (GUIEffect_t1361 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_2);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityGUI.GUIEffect::Play() */, __this);
		MonoBehaviour_StartCoroutine_m2547(__this, L_2, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIEffect::OnDisable()
extern "C" void GUIEffect_OnDisable_m6901 (GUIEffect_t1361 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(5 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIEffect::Stop() */, __this);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.GUIEffectTrigger
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUIEffe_0MethodDeclarations.h"



// PixelCrushers.DialogueSystem.UnityGUI.SlideEffect/SlideDirection
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_SlideEf.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.SlideEffect/SlideDirection
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_SlideEfMethodDeclarations.h"



// PixelCrushers.DialogueSystem.UnityGUI.SlideEffect/<Play>c__Iterator1A
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_SlideEf_0.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.SlideEffect/<Play>c__Iterator1A
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_SlideEf_0MethodDeclarations.h"

// PixelCrushers.DialogueSystem.UnityGUI.SlideEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_SlideEf_1.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.SlideEffect/<Play>c__Iterator1A::.ctor()
extern "C" void U3CPlayU3Ec__Iterator1A__ctor_m6902 (U3CPlayU3Ec__Iterator1A_t1372 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.UnityGUI.SlideEffect/<Play>c__Iterator1A::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayU3Ec__Iterator1A_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6903 (U3CPlayU3Ec__Iterator1A_t1372 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.UnityGUI.SlideEffect/<Play>c__Iterator1A::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayU3Ec__Iterator1A_System_Collections_IEnumerator_get_Current_m6904 (U3CPlayU3Ec__Iterator1A_t1372 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_6);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.SlideEffect/<Play>c__Iterator1A::MoveNext()
extern TypeInfo* DialogueTime_t625_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUIControl_t1261_m7433_MethodInfo_var;
extern "C" bool U3CPlayU3Ec__Iterator1A_MoveNext_m6905 (U3CPlayU3Ec__Iterator1A_t1372 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueTime_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Component_GetComponent_TisGUIControl_t1261_m7433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484439);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = {0};
	bool V_2 = false;
	{
		int32_t L_0 = (__this->___U24PC_5);
		V_0 = L_0;
		__this->___U24PC_5 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_023e;
		}
	}
	{
		goto IL_028b;
	}

IL_0021:
	{
		SlideEffect_t1371 * L_2 = (__this->___U3CU3Ef__this_7);
		SlideEffect_t1371 * L_3 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_3);
		GUIControl_t1261 * L_4 = Component_GetComponent_TisGUIControl_t1261_m7433(L_3, /*hidden argument*/Component_GetComponent_TisGUIControl_t1261_m7433_MethodInfo_var);
		NullCheck(L_2);
		L_2->___control_5 = L_4;
		SlideEffect_t1371 * L_5 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_5);
		GUIControl_t1261 * L_6 = (L_5->___control_5);
		bool L_7 = Object_op_Equality_m2464(NULL /*static, unused*/, L_6, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		goto IL_028b;
	}

IL_0052:
	{
		SlideEffect_t1371 * L_8 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_8);
		GUIControl_t1261 * L_9 = (L_8->___control_5);
		NullCheck(L_9);
		L_9->___visible_8 = 0;
		SlideEffect_t1371 * L_10 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_10);
		GUIControl_t1261 * L_11 = (L_10->___control_5);
		NullCheck(L_11);
		ScaledRect_t199 * L_12 = (L_11->___scaledRect_4);
		NullCheck(L_12);
		Rect_t201  L_13 = ScaledRect_GetPixelRect_m2730(L_12, /*hidden argument*/NULL);
		__this->___U3CrectU3E__0_0 = L_13;
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_14 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CstartTimeU3E__1_1 = L_14;
		float L_15 = (__this->___U3CstartTimeU3E__1_1);
		SlideEffect_t1371 * L_16 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_16);
		float L_17 = (L_16->___duration_4);
		__this->___U3CendTimeU3E__2_2 = ((float)((float)L_15+(float)L_17));
		goto IL_023e;
	}

IL_00a6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_18 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_19 = (__this->___U3CstartTimeU3E__1_1);
		__this->___U3CelapsedU3E__3_3 = ((float)((float)L_18-(float)L_19));
		float L_20 = (__this->___U3CelapsedU3E__3_3);
		SlideEffect_t1371 * L_21 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_21);
		float L_22 = (L_21->___duration_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		float L_23 = Mathf_Clamp_m2467(NULL /*static, unused*/, ((float)((float)L_20/(float)L_22)), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___U3CprogressU3E__4_4 = L_23;
		SlideEffect_t1371 * L_24 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_24);
		int32_t L_25 = (L_24->___direction_3);
		V_1 = L_25;
		int32_t L_26 = V_1;
		if (L_26 == 0)
		{
			goto IL_0106;
		}
		if (L_26 == 1)
		{
			goto IL_0144;
		}
		if (L_26 == 2)
		{
			goto IL_0188;
		}
		if (L_26 == 3)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_020a;
	}

IL_0106:
	{
		SlideEffect_t1371 * L_27 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_27);
		GUIControl_t1261 * L_28 = (L_27->___control_5);
		float L_29 = (__this->___U3CprogressU3E__4_4);
		int32_t L_30 = Screen_get_height_m2428(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t201 * L_31 = &(__this->___U3CrectU3E__0_0);
		float L_32 = Rect_get_y_m4805(L_31, /*hidden argument*/NULL);
		Vector2_t97  L_33 = {0};
		Vector2__ctor_m2417(&L_33, (0.0f), ((float)((float)((float)((float)(1.0f)-(float)L_29))*(float)((float)((float)(((float)L_30))-(float)L_32)))), /*hidden argument*/NULL);
		NullCheck(L_28);
		GUIControl_set_Offset_m6766(L_28, L_33, /*hidden argument*/NULL);
		goto IL_020a;
	}

IL_0144:
	{
		SlideEffect_t1371 * L_34 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_34);
		GUIControl_t1261 * L_35 = (L_34->___control_5);
		float L_36 = (__this->___U3CprogressU3E__4_4);
		Rect_t201 * L_37 = &(__this->___U3CrectU3E__0_0);
		float L_38 = Rect_get_y_m4805(L_37, /*hidden argument*/NULL);
		Rect_t201 * L_39 = &(__this->___U3CrectU3E__0_0);
		float L_40 = Rect_get_height_m2868(L_39, /*hidden argument*/NULL);
		Vector2_t97  L_41 = {0};
		Vector2__ctor_m2417(&L_41, (0.0f), ((float)((float)((-((float)((float)(1.0f)-(float)L_36))))*(float)((float)((float)L_38+(float)L_40)))), /*hidden argument*/NULL);
		NullCheck(L_35);
		GUIControl_set_Offset_m6766(L_35, L_41, /*hidden argument*/NULL);
		goto IL_020a;
	}

IL_0188:
	{
		SlideEffect_t1371 * L_42 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_42);
		GUIControl_t1261 * L_43 = (L_42->___control_5);
		float L_44 = (__this->___U3CprogressU3E__4_4);
		Rect_t201 * L_45 = &(__this->___U3CrectU3E__0_0);
		float L_46 = Rect_get_x_m4804(L_45, /*hidden argument*/NULL);
		Rect_t201 * L_47 = &(__this->___U3CrectU3E__0_0);
		float L_48 = Rect_get_width_m2728(L_47, /*hidden argument*/NULL);
		Vector2_t97  L_49 = {0};
		Vector2__ctor_m2417(&L_49, ((float)((float)((-((float)((float)(1.0f)-(float)L_44))))*(float)((float)((float)L_46+(float)L_48)))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_43);
		GUIControl_set_Offset_m6766(L_43, L_49, /*hidden argument*/NULL);
		goto IL_020a;
	}

IL_01cc:
	{
		SlideEffect_t1371 * L_50 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_50);
		GUIControl_t1261 * L_51 = (L_50->___control_5);
		float L_52 = (__this->___U3CprogressU3E__4_4);
		int32_t L_53 = Screen_get_width_m2424(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t201 * L_54 = &(__this->___U3CrectU3E__0_0);
		float L_55 = Rect_get_x_m4804(L_54, /*hidden argument*/NULL);
		Vector2_t97  L_56 = {0};
		Vector2__ctor_m2417(&L_56, ((float)((float)((float)((float)(1.0f)-(float)L_52))*(float)((float)((float)(((float)L_53))-(float)L_55)))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_51);
		GUIControl_set_Offset_m6766(L_51, L_56, /*hidden argument*/NULL);
		goto IL_020a;
	}

IL_020a:
	{
		SlideEffect_t1371 * L_57 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_57);
		GUIControl_t1261 * L_58 = (L_57->___control_5);
		NullCheck(L_58);
		L_58->___visible_8 = 1;
		SlideEffect_t1371 * L_59 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_59);
		GUIControl_t1261 * L_60 = (L_59->___control_5);
		NullCheck(L_60);
		VirtActionInvoker0::Invoke(10 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Refresh() */, L_60);
		__this->___U24current_6 = NULL;
		__this->___U24PC_5 = 1;
		goto IL_028d;
	}

IL_023e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_61 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_62 = (__this->___U3CendTimeU3E__2_2);
		if ((((float)L_61) < ((float)L_62)))
		{
			goto IL_00a6;
		}
	}
	{
		SlideEffect_t1371 * L_63 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_63);
		GUIControl_t1261 * L_64 = (L_63->___control_5);
		Vector2_t97  L_65 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_64);
		GUIControl_set_Offset_m6766(L_64, L_65, /*hidden argument*/NULL);
		SlideEffect_t1371 * L_66 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_66);
		GUIControl_t1261 * L_67 = (L_66->___control_5);
		NullCheck(L_67);
		L_67->___visible_8 = 1;
		SlideEffect_t1371 * L_68 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_68);
		GUIControl_t1261 * L_69 = (L_68->___control_5);
		NullCheck(L_69);
		VirtActionInvoker0::Invoke(10 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Refresh() */, L_69);
		__this->___U24PC_5 = (-1);
	}

IL_028b:
	{
		return 0;
	}

IL_028d:
	{
		return 1;
	}
	// Dead block : IL_028f: ldloc.2
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.SlideEffect/<Play>c__Iterator1A::Dispose()
extern "C" void U3CPlayU3Ec__Iterator1A_Dispose_m6906 (U3CPlayU3Ec__Iterator1A_t1372 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_5 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.SlideEffect/<Play>c__Iterator1A::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CPlayU3Ec__Iterator1A_Reset_m6907 (U3CPlayU3Ec__Iterator1A_t1372 * __this, const MethodInfo* method)
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
// PixelCrushers.DialogueSystem.UnityGUI.SlideEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_SlideEf_1MethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.UnityGUI.SlideEffect::.ctor()
extern "C" void SlideEffect__ctor_m6908 (SlideEffect_t1371 * __this, const MethodInfo* method)
{
	{
		__this->___duration_4 = (0.3f);
		GUIEffect__ctor_m6898(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityGUI.SlideEffect::Play()
extern TypeInfo* U3CPlayU3Ec__Iterator1A_t1372_il2cpp_TypeInfo_var;
extern "C" Object_t * SlideEffect_Play_m6909 (SlideEffect_t1371 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayU3Ec__Iterator1A_t1372_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2574);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayU3Ec__Iterator1A_t1372 * V_0 = {0};
	{
		U3CPlayU3Ec__Iterator1A_t1372 * L_0 = (U3CPlayU3Ec__Iterator1A_t1372 *)il2cpp_codegen_object_new (U3CPlayU3Ec__Iterator1A_t1372_il2cpp_TypeInfo_var);
		U3CPlayU3Ec__Iterator1A__ctor_m6902(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayU3Ec__Iterator1A_t1372 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_7 = __this;
		U3CPlayU3Ec__Iterator1A_t1372 * L_2 = V_0;
		return L_2;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.TimerEffect/<Play>c__Iterator1B
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_TimerEf.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.TimerEffect/<Play>c__Iterator1B
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_TimerEfMethodDeclarations.h"

// PixelCrushers.DialogueSystem.UnityGUI.TimerEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_TimerEf_0.h"
struct Component_t462;
struct GUIProgressBar_t1356;
// Declaration !!0 UnityEngine.Component::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar>()
// !!0 UnityEngine.Component::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.GUIProgressBar>()
#define Component_GetComponent_TisGUIProgressBar_t1356_m7434(__this, method) (( GUIProgressBar_t1356 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.UnityGUI.TimerEffect/<Play>c__Iterator1B::.ctor()
extern "C" void U3CPlayU3Ec__Iterator1B__ctor_m6910 (U3CPlayU3Ec__Iterator1B_t1374 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.UnityGUI.TimerEffect/<Play>c__Iterator1B::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayU3Ec__Iterator1B_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6911 (U3CPlayU3Ec__Iterator1B_t1374 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.UnityGUI.TimerEffect/<Play>c__Iterator1B::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayU3Ec__Iterator1B_System_Collections_IEnumerator_get_Current_m6912 (U3CPlayU3Ec__Iterator1B_t1374 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.TimerEffect/<Play>c__Iterator1B::MoveNext()
extern TypeInfo* DialogueTime_t625_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUIProgressBar_t1356_m7434_MethodInfo_var;
extern "C" bool U3CPlayU3Ec__Iterator1B_MoveNext_m6913 (U3CPlayU3Ec__Iterator1B_t1374 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueTime_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		Component_GetComponent_TisGUIProgressBar_t1356_m7434_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484440);
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
			goto IL_00d6;
		}
	}
	{
		goto IL_010d;
	}

IL_0021:
	{
		TimerEffect_t1373 * L_2 = (__this->___U3CU3Ef__this_5);
		TimerEffect_t1373 * L_3 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_3);
		GUIProgressBar_t1356 * L_4 = Component_GetComponent_TisGUIProgressBar_t1356_m7434(L_3, /*hidden argument*/Component_GetComponent_TisGUIProgressBar_t1356_m7434_MethodInfo_var);
		NullCheck(L_2);
		L_2->___progressBar_4 = L_4;
		TimerEffect_t1373 * L_5 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_5);
		GUIProgressBar_t1356 * L_6 = (L_5->___progressBar_4);
		bool L_7 = Object_op_Equality_m2464(NULL /*static, unused*/, L_6, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		goto IL_010d;
	}

IL_0052:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_8 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CstartTimeU3E__0_0 = L_8;
		float L_9 = (__this->___U3CstartTimeU3E__0_0);
		TimerEffect_t1373 * L_10 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_10);
		float L_11 = (L_10->___duration_3);
		__this->___U3CendTimeU3E__1_1 = ((float)((float)L_9+(float)L_11));
		goto IL_00d6;
	}

IL_007a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_12 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = (__this->___U3CstartTimeU3E__0_0);
		__this->___U3CelapsedU3E__2_2 = ((float)((float)L_12-(float)L_13));
		TimerEffect_t1373 * L_14 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_14);
		GUIProgressBar_t1356 * L_15 = (L_14->___progressBar_4);
		float L_16 = (__this->___U3CelapsedU3E__2_2);
		TimerEffect_t1373 * L_17 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_17);
		float L_18 = (L_17->___duration_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		float L_19 = Mathf_Clamp_m2467(NULL /*static, unused*/, ((float)((float)(1.0f)-(float)((float)((float)L_16/(float)L_18)))), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->___progress_31 = L_19;
		__this->___U24current_4 = NULL;
		__this->___U24PC_3 = 1;
		goto IL_010f;
	}

IL_00d6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_20 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_21 = (__this->___U3CendTimeU3E__1_1);
		if ((((float)L_20) < ((float)L_21)))
		{
			goto IL_007a;
		}
	}
	{
		TimerEffect_t1373 * L_22 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_22);
		Action_t250 * L_23 = (L_22->___TimeoutHandler_5);
		if (!L_23)
		{
			goto IL_0106;
		}
	}
	{
		TimerEffect_t1373 * L_24 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_24);
		Action_t250 * L_25 = (L_24->___TimeoutHandler_5);
		NullCheck(L_25);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_25);
	}

IL_0106:
	{
		__this->___U24PC_3 = (-1);
	}

IL_010d:
	{
		return 0;
	}

IL_010f:
	{
		return 1;
	}
	// Dead block : IL_0111: ldloc.1
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.TimerEffect/<Play>c__Iterator1B::Dispose()
extern "C" void U3CPlayU3Ec__Iterator1B_Dispose_m6914 (U3CPlayU3Ec__Iterator1B_t1374 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.TimerEffect/<Play>c__Iterator1B::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CPlayU3Ec__Iterator1B_Reset_m6915 (U3CPlayU3Ec__Iterator1B_t1374 * __this, const MethodInfo* method)
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
// PixelCrushers.DialogueSystem.UnityGUI.TimerEffect
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_TimerEf_0MethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.UnityGUI.TimerEffect::.ctor()
extern "C" void TimerEffect__ctor_m6916 (TimerEffect_t1373 * __this, const MethodInfo* method)
{
	{
		__this->___duration_3 = (5.0f);
		GUIEffect__ctor_m6898(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.TimerEffect::add_TimeoutHandler(System.Action)
extern TypeInfo* Action_t250_il2cpp_TypeInfo_var;
extern "C" void TimerEffect_add_TimeoutHandler_m6917 (TimerEffect_t1373 * __this, Action_t250 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_t250 * L_0 = (__this->___TimeoutHandler_5);
		Action_t250 * L_1 = ___value;
		Delegate_t593 * L_2 = Delegate_Combine_m2527(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TimeoutHandler_5 = ((Action_t250 *)Castclass(L_2, Action_t250_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.TimerEffect::remove_TimeoutHandler(System.Action)
extern TypeInfo* Action_t250_il2cpp_TypeInfo_var;
extern "C" void TimerEffect_remove_TimeoutHandler_m6918 (TimerEffect_t1373 * __this, Action_t250 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_t250 * L_0 = (__this->___TimeoutHandler_5);
		Action_t250 * L_1 = ___value;
		Delegate_t593 * L_2 = Delegate_Remove_m2528(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___TimeoutHandler_5 = ((Action_t250 *)Castclass(L_2, Action_t250_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityGUI.TimerEffect::Play()
extern TypeInfo* U3CPlayU3Ec__Iterator1B_t1374_il2cpp_TypeInfo_var;
extern "C" Object_t * TimerEffect_Play_m6919 (TimerEffect_t1373 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayU3Ec__Iterator1B_t1374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2576);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayU3Ec__Iterator1B_t1374 * V_0 = {0};
	{
		U3CPlayU3Ec__Iterator1B_t1374 * L_0 = (U3CPlayU3Ec__Iterator1B_t1374 *)il2cpp_codegen_object_new (U3CPlayU3Ec__Iterator1B_t1374_il2cpp_TypeInfo_var);
		U3CPlayU3Ec__Iterator1B__ctor_m6910(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayU3Ec__Iterator1B_t1374 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_5 = __this;
		U3CPlayU3Ec__Iterator1B_t1374 * L_2 = V_0;
		return L_2;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect/<Play>c__Iterator1C
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_Typewri.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect/<Play>c__Iterator1C
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_TypewriMethodDeclarations.h"

struct Component_t462;
struct GUILabel_t1262;
// Declaration !!0 UnityEngine.Component::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.GUILabel>()
// !!0 UnityEngine.Component::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.GUILabel>()
#define Component_GetComponent_TisGUILabel_t1262_m7435(__this, method) (( GUILabel_t1262 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect/<Play>c__Iterator1C::.ctor()
extern "C" void U3CPlayU3Ec__Iterator1C__ctor_m6920 (U3CPlayU3Ec__Iterator1C_t1375 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect/<Play>c__Iterator1C::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CPlayU3Ec__Iterator1C_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6921 (U3CPlayU3Ec__Iterator1C_t1375 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect/<Play>c__Iterator1C::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CPlayU3Ec__Iterator1C_System_Collections_IEnumerator_get_Current_m6922 (U3CPlayU3Ec__Iterator1C_t1375 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect/<Play>c__Iterator1C::MoveNext()
extern TypeInfo* DialogueTime_t625_il2cpp_TypeInfo_var;
extern TypeInfo* WaitForSeconds_t629_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUILabel_t1262_m7435_MethodInfo_var;
extern "C" bool U3CPlayU3Ec__Iterator1C_MoveNext_m6923 (U3CPlayU3Ec__Iterator1C_t1375 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueTime_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		WaitForSeconds_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		Component_GetComponent_TisGUILabel_t1262_m7435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484441);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_014c;
	}

IL_0021:
	{
		TypewriterEffect_t1363 * L_2 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_2);
		GUILabel_t1262 * L_3 = Component_GetComponent_TisGUILabel_t1262_m7435(L_2, /*hidden argument*/Component_GetComponent_TisGUILabel_t1262_m7435_MethodInfo_var);
		__this->___U3CcontrolU3E__0_0 = L_3;
		GUILabel_t1262 * L_4 = (__this->___U3CcontrolU3E__0_0);
		bool L_5 = Object_op_Equality_m2464(NULL /*static, unused*/, L_4, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_014c;
	}

IL_0048:
	{
		TypewriterEffect_t1363 * L_6 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_6);
		TypewriterEffect_set_IsPlaying_m6928(L_6, 1, /*hidden argument*/NULL);
		GUILabel_t1262 * L_7 = (__this->___U3CcontrolU3E__0_0);
		NullCheck(L_7);
		GUILabel_set_currentLength_m6802(L_7, 0, /*hidden argument*/NULL);
		goto IL_00f1;
	}

IL_0065:
	{
		TypewriterEffect_t1363 * L_8 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_8);
		float L_9 = (L_8->___charactersPerSecond_9);
		__this->___U3CdelayU3E__1_1 = ((float)((float)(1.0f)/(float)L_9));
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		bool L_10 = DialogueTime_get_IsPaused_m2870(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00d4;
		}
	}
	{
		TypewriterEffect_t1363 * L_11 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_11);
		AudioClip_t261 * L_12 = (L_11->___audioClip_10);
		bool L_13 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_12, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c3;
		}
	}
	{
		GUILabel_t1262 * L_14 = (__this->___U3CcontrolU3E__0_0);
		NullCheck(L_14);
		int32_t L_15 = GUILabel_get_currentLength_m6801(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_00c3;
		}
	}
	{
		GUILabel_t1262 * L_16 = (__this->___U3CcontrolU3E__0_0);
		TypewriterEffect_t1363 * L_17 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_17);
		AudioClip_t261 * L_18 = (L_17->___audioClip_10);
		NullCheck(L_16);
		GUIVisibleControl_PlaySound_m6864(L_16, L_18, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		TypewriterEffect_t1363 * L_19 = (__this->___U3CU3Ef__this_4);
		GUILabel_t1262 * L_20 = (__this->___U3CcontrolU3E__0_0);
		NullCheck(L_19);
		TypewriterEffect_AdvanceOneCharacter_m6930(L_19, L_20, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		float L_21 = (__this->___U3CdelayU3E__1_1);
		WaitForSeconds_t629 * L_22 = (WaitForSeconds_t629 *)il2cpp_codegen_object_new (WaitForSeconds_t629_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2791(L_22, L_21, /*hidden argument*/NULL);
		__this->___U24current_3 = L_22;
		__this->___U24PC_2 = 1;
		goto IL_014e;
	}

IL_00f1:
	{
		GUILabel_t1262 * L_23 = (__this->___U3CcontrolU3E__0_0);
		NullCheck(L_23);
		int32_t L_24 = GUILabel_get_currentLength_m6801(L_23, /*hidden argument*/NULL);
		GUILabel_t1262 * L_25 = (__this->___U3CcontrolU3E__0_0);
		NullCheck(L_25);
		String_t* L_26 = (((GUIVisibleControl_t1347 *)L_25)->___text_20);
		NullCheck(L_26);
		int32_t L_27 = String_get_Length_m2869(L_26, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_24+(int32_t)1))) < ((int32_t)L_27)))
		{
			goto IL_0065;
		}
	}
	{
		GUILabel_t1262 * L_28 = (__this->___U3CcontrolU3E__0_0);
		GUILabel_t1262 * L_29 = (__this->___U3CcontrolU3E__0_0);
		NullCheck(L_29);
		String_t* L_30 = (((GUIVisibleControl_t1347 *)L_29)->___text_20);
		NullCheck(L_30);
		int32_t L_31 = String_get_Length_m2869(L_30, /*hidden argument*/NULL);
		NullCheck(L_28);
		GUILabel_set_currentLength_m6802(L_28, L_31, /*hidden argument*/NULL);
		GUILabel_t1262 * L_32 = (__this->___U3CcontrolU3E__0_0);
		NullCheck(L_32);
		GUILabel_ResetClosureTags_m6804(L_32, /*hidden argument*/NULL);
		TypewriterEffect_t1363 * L_33 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_33);
		TypewriterEffect_set_IsPlaying_m6928(L_33, 0, /*hidden argument*/NULL);
		__this->___U24PC_2 = (-1);
	}

IL_014c:
	{
		return 0;
	}

IL_014e:
	{
		return 1;
	}
	// Dead block : IL_0150: ldloc.1
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect/<Play>c__Iterator1C::Dispose()
extern "C" void U3CPlayU3Ec__Iterator1C_Dispose_m6924 (U3CPlayU3Ec__Iterator1C_t1375 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect/<Play>c__Iterator1C::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CPlayU3Ec__Iterator1C_Reset_m6925 (U3CPlayU3Ec__Iterator1C_t1375 * __this, const MethodInfo* method)
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



// System.Void PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect::.ctor()
extern "C" void TypewriterEffect__ctor_m6926 (TypewriterEffect_t1363 * __this, const MethodInfo* method)
{
	{
		__this->___charactersPerSecond_9 = (50.0f);
		GUIEffect__ctor_m6898(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect::get_IsPlaying()
extern "C" bool TypewriterEffect_get_IsPlaying_m6927 (TypewriterEffect_t1363 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CIsPlayingU3Ek__BackingField_11);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect::set_IsPlaying(System.Boolean)
extern "C" void TypewriterEffect_set_IsPlaying_m6928 (TypewriterEffect_t1363 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CIsPlayingU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect::Play()
extern TypeInfo* U3CPlayU3Ec__Iterator1C_t1375_il2cpp_TypeInfo_var;
extern "C" Object_t * TypewriterEffect_Play_m6929 (TypewriterEffect_t1363 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CPlayU3Ec__Iterator1C_t1375_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2577);
		s_Il2CppMethodIntialized = true;
	}
	U3CPlayU3Ec__Iterator1C_t1375 * V_0 = {0};
	{
		U3CPlayU3Ec__Iterator1C_t1375 * L_0 = (U3CPlayU3Ec__Iterator1C_t1375 *)il2cpp_codegen_object_new (U3CPlayU3Ec__Iterator1C_t1375_il2cpp_TypeInfo_var);
		U3CPlayU3Ec__Iterator1C__ctor_m6920(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayU3Ec__Iterator1C_t1375 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_4 = __this;
		U3CPlayU3Ec__Iterator1C_t1375 * L_2 = V_0;
		return L_2;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect::AdvanceOneCharacter(PixelCrushers.DialogueSystem.UnityGUI.GUILabel)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TypewriterEffect_AdvanceOneCharacter_m6930 (TypewriterEffect_t1363 * __this, GUILabel_t1262 * ___control, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILabel_t1262 * L_0 = ___control;
		NullCheck(L_0);
		String_t* L_1 = (((GUIVisibleControl_t1347 *)L_0)->___text_20);
		GUILabel_t1262 * L_2 = ___control;
		NullCheck(L_2);
		int32_t L_3 = GUILabel_get_currentLength_m6801(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		uint16_t L_4 = String_get_Chars_m2874(L_1, L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_01d5;
		}
	}
	{
		GUILabel_t1262 * L_5 = ___control;
		NullCheck(L_5);
		String_t* L_6 = (((GUIVisibleControl_t1347 *)L_5)->___text_20);
		GUILabel_t1262 * L_7 = ___control;
		NullCheck(L_7);
		int32_t L_8 = GUILabel_get_currentLength_m6801(L_7, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral135);
		int32_t L_9 = String_get_Length_m2869((String_t*) &_stringLiteral135, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_10 = String_Compare_m2875(NULL /*static, unused*/, L_6, L_8, (String_t*) &_stringLiteral135, 0, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0065;
		}
	}
	{
		GUILabel_t1262 * L_11 = ___control;
		GUILabel_t1262 * L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13 = GUILabel_get_currentLength_m6801(L_12, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral135);
		int32_t L_14 = String_get_Length_m2869((String_t*) &_stringLiteral135, /*hidden argument*/NULL);
		NullCheck(L_12);
		GUILabel_set_currentLength_m6802(L_12, ((int32_t)((int32_t)L_13+(int32_t)L_14)), /*hidden argument*/NULL);
		GUILabel_t1262 * L_15 = ___control;
		NullCheck(L_15);
		GUILabel_PushClosureTag_m6805(L_15, (String_t*) &_stringLiteral136, /*hidden argument*/NULL);
		goto IL_013d;
	}

IL_0065:
	{
		GUILabel_t1262 * L_16 = ___control;
		NullCheck(L_16);
		String_t* L_17 = (((GUIVisibleControl_t1347 *)L_16)->___text_20);
		GUILabel_t1262 * L_18 = ___control;
		NullCheck(L_18);
		int32_t L_19 = GUILabel_get_currentLength_m6801(L_18, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral136);
		int32_t L_20 = String_get_Length_m2869((String_t*) &_stringLiteral136, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_21 = String_Compare_m2875(NULL /*static, unused*/, L_17, L_19, (String_t*) &_stringLiteral136, 0, L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00ad;
		}
	}
	{
		GUILabel_t1262 * L_22 = ___control;
		GUILabel_t1262 * L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24 = GUILabel_get_currentLength_m6801(L_23, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral136);
		int32_t L_25 = String_get_Length_m2869((String_t*) &_stringLiteral136, /*hidden argument*/NULL);
		NullCheck(L_23);
		GUILabel_set_currentLength_m6802(L_23, ((int32_t)((int32_t)L_24+(int32_t)L_25)), /*hidden argument*/NULL);
		GUILabel_t1262 * L_26 = ___control;
		NullCheck(L_26);
		GUILabel_PopClosureTag_m6806(L_26, /*hidden argument*/NULL);
		goto IL_013d;
	}

IL_00ad:
	{
		GUILabel_t1262 * L_27 = ___control;
		NullCheck(L_27);
		String_t* L_28 = (((GUIVisibleControl_t1347 *)L_27)->___text_20);
		GUILabel_t1262 * L_29 = ___control;
		NullCheck(L_29);
		int32_t L_30 = GUILabel_get_currentLength_m6801(L_29, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral137);
		int32_t L_31 = String_get_Length_m2869((String_t*) &_stringLiteral137, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_32 = String_Compare_m2875(NULL /*static, unused*/, L_28, L_30, (String_t*) &_stringLiteral137, 0, L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00fa;
		}
	}
	{
		GUILabel_t1262 * L_33 = ___control;
		GUILabel_t1262 * L_34 = L_33;
		NullCheck(L_34);
		int32_t L_35 = GUILabel_get_currentLength_m6801(L_34, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral137);
		int32_t L_36 = String_get_Length_m2869((String_t*) &_stringLiteral137, /*hidden argument*/NULL);
		NullCheck(L_34);
		GUILabel_set_currentLength_m6802(L_34, ((int32_t)((int32_t)L_35+(int32_t)L_36)), /*hidden argument*/NULL);
		GUILabel_t1262 * L_37 = ___control;
		NullCheck(L_37);
		GUILabel_PushClosureTag_m6805(L_37, (String_t*) &_stringLiteral138, /*hidden argument*/NULL);
		goto IL_013d;
	}

IL_00fa:
	{
		GUILabel_t1262 * L_38 = ___control;
		NullCheck(L_38);
		String_t* L_39 = (((GUIVisibleControl_t1347 *)L_38)->___text_20);
		GUILabel_t1262 * L_40 = ___control;
		NullCheck(L_40);
		int32_t L_41 = GUILabel_get_currentLength_m6801(L_40, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral138);
		int32_t L_42 = String_get_Length_m2869((String_t*) &_stringLiteral138, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_43 = String_Compare_m2875(NULL /*static, unused*/, L_39, L_41, (String_t*) &_stringLiteral138, 0, L_42, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_013d;
		}
	}
	{
		GUILabel_t1262 * L_44 = ___control;
		GUILabel_t1262 * L_45 = L_44;
		NullCheck(L_45);
		int32_t L_46 = GUILabel_get_currentLength_m6801(L_45, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral138);
		int32_t L_47 = String_get_Length_m2869((String_t*) &_stringLiteral138, /*hidden argument*/NULL);
		NullCheck(L_45);
		GUILabel_set_currentLength_m6802(L_45, ((int32_t)((int32_t)L_46+(int32_t)L_47)), /*hidden argument*/NULL);
		GUILabel_t1262 * L_48 = ___control;
		NullCheck(L_48);
		GUILabel_PopClosureTag_m6806(L_48, /*hidden argument*/NULL);
	}

IL_013d:
	{
		GUILabel_t1262 * L_49 = ___control;
		NullCheck(L_49);
		String_t* L_50 = (((GUIVisibleControl_t1347 *)L_49)->___text_20);
		GUILabel_t1262 * L_51 = ___control;
		NullCheck(L_51);
		int32_t L_52 = GUILabel_get_currentLength_m6801(L_51, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral139);
		int32_t L_53 = String_get_Length_m2869((String_t*) &_stringLiteral139, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_54 = String_Compare_m2875(NULL /*static, unused*/, L_50, L_52, (String_t*) &_stringLiteral139, 0, L_53, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_018d;
		}
	}
	{
		GUILabel_t1262 * L_55 = ___control;
		GUILabel_t1262 * L_56 = L_55;
		NullCheck(L_56);
		int32_t L_57 = GUILabel_get_currentLength_m6801(L_56, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral139);
		int32_t L_58 = String_get_Length_m2869((String_t*) &_stringLiteral139, /*hidden argument*/NULL);
		NullCheck(L_56);
		GUILabel_set_currentLength_m6802(L_56, ((int32_t)((int32_t)L_57+(int32_t)((int32_t)((int32_t)L_58+(int32_t)((int32_t)10))))), /*hidden argument*/NULL);
		GUILabel_t1262 * L_59 = ___control;
		NullCheck(L_59);
		GUILabel_PushClosureTag_m6805(L_59, (String_t*) &_stringLiteral140, /*hidden argument*/NULL);
		goto IL_01d0;
	}

IL_018d:
	{
		GUILabel_t1262 * L_60 = ___control;
		NullCheck(L_60);
		String_t* L_61 = (((GUIVisibleControl_t1347 *)L_60)->___text_20);
		GUILabel_t1262 * L_62 = ___control;
		NullCheck(L_62);
		int32_t L_63 = GUILabel_get_currentLength_m6801(L_62, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral140);
		int32_t L_64 = String_get_Length_m2869((String_t*) &_stringLiteral140, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_65 = String_Compare_m2875(NULL /*static, unused*/, L_61, L_63, (String_t*) &_stringLiteral140, 0, L_64, /*hidden argument*/NULL);
		if (L_65)
		{
			goto IL_01d0;
		}
	}
	{
		GUILabel_t1262 * L_66 = ___control;
		GUILabel_t1262 * L_67 = L_66;
		NullCheck(L_67);
		int32_t L_68 = GUILabel_get_currentLength_m6801(L_67, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral140);
		int32_t L_69 = String_get_Length_m2869((String_t*) &_stringLiteral140, /*hidden argument*/NULL);
		NullCheck(L_67);
		GUILabel_set_currentLength_m6802(L_67, ((int32_t)((int32_t)L_68+(int32_t)L_69)), /*hidden argument*/NULL);
		GUILabel_t1262 * L_70 = ___control;
		NullCheck(L_70);
		GUILabel_PopClosureTag_m6806(L_70, /*hidden argument*/NULL);
	}

IL_01d0:
	{
		goto IL_01e3;
	}

IL_01d5:
	{
		GUILabel_t1262 * L_71 = ___control;
		GUILabel_t1262 * L_72 = L_71;
		NullCheck(L_72);
		int32_t L_73 = GUILabel_get_currentLength_m6801(L_72, /*hidden argument*/NULL);
		NullCheck(L_72);
		GUILabel_set_currentLength_m6802(L_72, ((int32_t)((int32_t)L_73+(int32_t)1)), /*hidden argument*/NULL);
	}

IL_01e3:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.TypewriterEffect::Stop()
extern const MethodInfo* Component_GetComponent_TisGUILabel_t1262_m7435_MethodInfo_var;
extern "C" void TypewriterEffect_Stop_m6931 (TypewriterEffect_t1363 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisGUILabel_t1262_m7435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484441);
		s_Il2CppMethodIntialized = true;
	}
	GUILabel_t1262 * V_0 = {0};
	{
		GUIEffect_Stop_m6899(__this, /*hidden argument*/NULL);
		TypewriterEffect_set_IsPlaying_m6928(__this, 0, /*hidden argument*/NULL);
		GUILabel_t1262 * L_0 = Component_GetComponent_TisGUILabel_t1262_m7435(__this, /*hidden argument*/Component_GetComponent_TisGUILabel_t1262_m7435_MethodInfo_var);
		V_0 = L_0;
		GUILabel_t1262 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		GUILabel_t1262 * L_3 = V_0;
		GUILabel_t1262 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = (((GUIVisibleControl_t1347 *)L_4)->___text_20);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m2869(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		GUILabel_set_currentLength_m6802(L_3, L_6, /*hidden argument*/NULL);
		GUILabel_t1262 * L_7 = V_0;
		NullCheck(L_7);
		GUILabel_ResetClosureTags_m6804(L_7, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::.ctor(PixelCrushers.DialogueSystem.UnityGUI.ScaledRectAlignment,PixelCrushers.DialogueSystem.UnityGUI.ScaledRectAlignment,PixelCrushers.DialogueSystem.UnityGUI.ScaledValue,PixelCrushers.DialogueSystem.UnityGUI.ScaledValue,PixelCrushers.DialogueSystem.UnityGUI.ScaledValue,PixelCrushers.DialogueSystem.UnityGUI.ScaledValue,System.Single,System.Single)
extern "C" void ScaledRect__ctor_m2991 (ScaledRect_t199 * __this, int32_t ___origin, int32_t ___alignment, ScaledValue_t606 * ___x, ScaledValue_t606 * ___y, ScaledValue_t606 * ___width, ScaledValue_t606 * ___height, float ___minPixelWidth, float ___minPixelHeight, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___origin;
		__this->___origin_2 = L_0;
		int32_t L_1 = ___alignment;
		__this->___alignment_3 = L_1;
		ScaledValue_t606 * L_2 = ___x;
		__this->___x_4 = L_2;
		ScaledValue_t606 * L_3 = ___y;
		__this->___y_5 = L_3;
		ScaledValue_t606 * L_4 = ___width;
		__this->___width_6 = L_4;
		ScaledValue_t606 * L_5 = ___height;
		__this->___height_7 = L_5;
		float L_6 = ___minPixelWidth;
		__this->___minPixelWidth_8 = L_6;
		float L_7 = ___minPixelHeight;
		__this->___minPixelHeight_9 = L_7;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::.ctor(PixelCrushers.DialogueSystem.UnityGUI.ScaledRect)
extern TypeInfo* ScaledValue_t606_il2cpp_TypeInfo_var;
extern "C" void ScaledRect__ctor_m2972 (ScaledRect_t199 * __this, ScaledRect_t199 * ___source, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScaledValue_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(199);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		ScaledRect_t199 * L_0 = ___source;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		ScaledRect_t199 * L_1 = ___source;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___origin_2);
		__this->___origin_2 = L_2;
		ScaledRect_t199 * L_3 = ___source;
		NullCheck(L_3);
		int32_t L_4 = (L_3->___alignment_3);
		__this->___alignment_3 = L_4;
		ScaledRect_t199 * L_5 = ___source;
		NullCheck(L_5);
		ScaledValue_t606 * L_6 = (L_5->___x_4);
		ScaledValue_t606 * L_7 = (ScaledValue_t606 *)il2cpp_codegen_object_new (ScaledValue_t606_il2cpp_TypeInfo_var);
		ScaledValue__ctor_m6939(L_7, L_6, /*hidden argument*/NULL);
		__this->___x_4 = L_7;
		ScaledRect_t199 * L_8 = ___source;
		NullCheck(L_8);
		ScaledValue_t606 * L_9 = (L_8->___y_5);
		ScaledValue_t606 * L_10 = (ScaledValue_t606 *)il2cpp_codegen_object_new (ScaledValue_t606_il2cpp_TypeInfo_var);
		ScaledValue__ctor_m6939(L_10, L_9, /*hidden argument*/NULL);
		__this->___y_5 = L_10;
		ScaledRect_t199 * L_11 = ___source;
		NullCheck(L_11);
		ScaledValue_t606 * L_12 = (L_11->___width_6);
		ScaledValue_t606 * L_13 = (ScaledValue_t606 *)il2cpp_codegen_object_new (ScaledValue_t606_il2cpp_TypeInfo_var);
		ScaledValue__ctor_m6939(L_13, L_12, /*hidden argument*/NULL);
		__this->___width_6 = L_13;
		ScaledRect_t199 * L_14 = ___source;
		NullCheck(L_14);
		ScaledValue_t606 * L_15 = (L_14->___height_7);
		ScaledValue_t606 * L_16 = (ScaledValue_t606 *)il2cpp_codegen_object_new (ScaledValue_t606_il2cpp_TypeInfo_var);
		ScaledValue__ctor_m6939(L_16, L_15, /*hidden argument*/NULL);
		__this->___height_7 = L_16;
		ScaledRect_t199 * L_17 = ___source;
		NullCheck(L_17);
		float L_18 = (L_17->___minPixelWidth_8);
		__this->___minPixelWidth_8 = L_18;
		ScaledRect_t199 * L_19 = ___source;
		NullCheck(L_19);
		float L_20 = (L_19->___minPixelHeight_9);
		__this->___minPixelHeight_9 = L_20;
	}

IL_0080:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::.ctor()
extern "C" void ScaledRect__ctor_m6932 (ScaledRect_t199 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::.cctor()
extern TypeInfo* ScaledValue_t606_il2cpp_TypeInfo_var;
extern TypeInfo* ScaledRect_t199_il2cpp_TypeInfo_var;
extern "C" void ScaledRect__cctor_m6933 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScaledValue_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(199);
		ScaledRect_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScaledValue_t606_il2cpp_TypeInfo_var);
		ScaledValue_t606 * L_0 = ((ScaledValue_t606_StaticFields*)ScaledValue_t606_il2cpp_TypeInfo_var->static_fields)->___zero_0;
		ScaledValue_t606 * L_1 = ((ScaledValue_t606_StaticFields*)ScaledValue_t606_il2cpp_TypeInfo_var->static_fields)->___zero_0;
		ScaledValue_t606 * L_2 = ((ScaledValue_t606_StaticFields*)ScaledValue_t606_il2cpp_TypeInfo_var->static_fields)->___zero_0;
		ScaledValue_t606 * L_3 = ((ScaledValue_t606_StaticFields*)ScaledValue_t606_il2cpp_TypeInfo_var->static_fields)->___zero_0;
		ScaledRect_t199 * L_4 = (ScaledRect_t199 *)il2cpp_codegen_object_new (ScaledRect_t199_il2cpp_TypeInfo_var);
		ScaledRect__ctor_m2991(L_4, 0, 0, L_0, L_1, L_2, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		((ScaledRect_t199_StaticFields*)ScaledRect_t199_il2cpp_TypeInfo_var->static_fields)->___empty_0 = L_4;
		ScaledValue_t606 * L_5 = ((ScaledValue_t606_StaticFields*)ScaledValue_t606_il2cpp_TypeInfo_var->static_fields)->___zero_0;
		ScaledValue_t606 * L_6 = ((ScaledValue_t606_StaticFields*)ScaledValue_t606_il2cpp_TypeInfo_var->static_fields)->___zero_0;
		ScaledValue_t606 * L_7 = ((ScaledValue_t606_StaticFields*)ScaledValue_t606_il2cpp_TypeInfo_var->static_fields)->___max_1;
		ScaledValue_t606 * L_8 = ((ScaledValue_t606_StaticFields*)ScaledValue_t606_il2cpp_TypeInfo_var->static_fields)->___max_1;
		ScaledRect_t199 * L_9 = (ScaledRect_t199 *)il2cpp_codegen_object_new (ScaledRect_t199_il2cpp_TypeInfo_var);
		ScaledRect__ctor_m2991(L_9, 0, 0, L_5, L_6, L_7, L_8, (0.0f), (0.0f), /*hidden argument*/NULL);
		((ScaledRect_t199_StaticFields*)ScaledRect_t199_il2cpp_TypeInfo_var->static_fields)->___wholeScreen_1 = L_9;
		return;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.ScaledRect PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::FromOrigin(PixelCrushers.DialogueSystem.UnityGUI.ScaledRectAlignment,PixelCrushers.DialogueSystem.UnityGUI.ScaledValue,PixelCrushers.DialogueSystem.UnityGUI.ScaledValue,System.Single,System.Single)
extern TypeInfo* ScaledValue_t606_il2cpp_TypeInfo_var;
extern TypeInfo* ScaledRect_t199_il2cpp_TypeInfo_var;
extern "C" ScaledRect_t199 * ScaledRect_FromOrigin_m2723 (Object_t * __this /* static, unused */, int32_t ___origin, ScaledValue_t606 * ___width, ScaledValue_t606 * ___height, float ___minPixelWidth, float ___minPixelHeight, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScaledValue_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(199);
		ScaledRect_t199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___origin;
		int32_t L_1 = ___origin;
		IL2CPP_RUNTIME_CLASS_INIT(ScaledValue_t606_il2cpp_TypeInfo_var);
		ScaledValue_t606 * L_2 = ((ScaledValue_t606_StaticFields*)ScaledValue_t606_il2cpp_TypeInfo_var->static_fields)->___zero_0;
		ScaledValue_t606 * L_3 = ((ScaledValue_t606_StaticFields*)ScaledValue_t606_il2cpp_TypeInfo_var->static_fields)->___zero_0;
		ScaledValue_t606 * L_4 = ___width;
		ScaledValue_t606 * L_5 = ___height;
		float L_6 = ___minPixelWidth;
		float L_7 = ___minPixelHeight;
		ScaledRect_t199 * L_8 = (ScaledRect_t199 *)il2cpp_codegen_object_new (ScaledRect_t199_il2cpp_TypeInfo_var);
		ScaledRect__ctor_m2991(L_8, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Rect PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::GetPixelRect()
extern "C" Rect_t201  ScaledRect_GetPixelRect_m2730 (ScaledRect_t199 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Screen_get_width_m2424(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m2428(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t97  L_2 = {0};
		Vector2__ctor_m2417(&L_2, (((float)L_0)), (((float)L_1)), /*hidden argument*/NULL);
		Vector2_t97  L_3 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t201  L_4 = ScaledRect_GetPixelRect_m6935(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Rect PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::GetPixelRect(UnityEngine.Vector2)
extern "C" Rect_t201  ScaledRect_GetPixelRect_m6934 (ScaledRect_t199 * __this, Vector2_t97  ___windowSize, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = ___windowSize;
		Vector2_t97  L_1 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t201  L_2 = ScaledRect_GetPixelRect_m6935(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Rect PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::GetPixelRect(UnityEngine.Vector2,UnityEngine.Vector2)
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern "C" Rect_t201  ScaledRect_GetPixelRect_m6935 (ScaledRect_t199 * __this, Vector2_t97  ___windowSize, Vector2_t97  ___defaultSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t97  V_2 = {0};
	Vector2_t97  V_3 = {0};
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		ScaledValue_t606 * L_0 = (__this->___width_6);
		float L_1 = ((&___windowSize)->___x_1);
		NullCheck(L_0);
		float L_2 = ScaledValue_GetPixelValue_m6942(L_0, L_1, /*hidden argument*/NULL);
		float L_3 = (__this->___minPixelWidth_8);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Max_m4982(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		ScaledValue_t606 * L_5 = (__this->___height_7);
		float L_6 = ((&___windowSize)->___y_2);
		NullCheck(L_5);
		float L_7 = ScaledValue_GetPixelValue_m6942(L_5, L_6, /*hidden argument*/NULL);
		float L_8 = (__this->___minPixelHeight_9);
		float L_9 = Mathf_Max_m4982(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Vector2_t97  L_10 = ___windowSize;
		Vector2_t97  L_11 = ScaledRect_GetPixelOrigin_m6936(__this, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		Vector2_t97  L_12 = ScaledRect_GetAlignmentFactor_m6937(__this, /*hidden argument*/NULL);
		V_3 = L_12;
		float L_13 = ((&V_2)->___x_1);
		float L_14 = V_0;
		float L_15 = ((&V_3)->___x_1);
		ScaledValue_t606 * L_16 = (__this->___x_4);
		float L_17 = ((&___windowSize)->___x_1);
		NullCheck(L_16);
		float L_18 = ScaledValue_GetPixelValue_m6942(L_16, L_17, /*hidden argument*/NULL);
		V_4 = ((float)((float)((float)((float)L_13+(float)((float)((float)L_14*(float)L_15))))+(float)L_18));
		float L_19 = ((&V_2)->___y_2);
		float L_20 = V_1;
		float L_21 = ((&V_3)->___y_2);
		ScaledValue_t606 * L_22 = (__this->___y_5);
		float L_23 = ((&___windowSize)->___y_2);
		NullCheck(L_22);
		float L_24 = ScaledValue_GetPixelValue_m6942(L_22, L_23, /*hidden argument*/NULL);
		V_5 = ((float)((float)((float)((float)L_19+(float)((float)((float)L_20*(float)L_21))))+(float)L_24));
		float L_25 = V_4;
		float L_26 = V_5;
		float L_27 = V_0;
		float L_28 = V_1;
		Rect_t201  L_29 = {0};
		Rect__ctor_m2425(&L_29, L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
		return L_29;
	}
}
// UnityEngine.Vector2 PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::GetPixelOrigin(UnityEngine.Vector2)
extern "C" Vector2_t97  ScaledRect_GetPixelOrigin_m6936 (ScaledRect_t199 * __this, Vector2_t97  ___windowSize, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___origin_2);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0036;
		}
		if (L_1 == 1)
		{
			goto IL_003c;
		}
		if (L_1 == 2)
		{
			goto IL_0054;
		}
		if (L_1 == 3)
		{
			goto IL_0066;
		}
		if (L_1 == 4)
		{
			goto IL_007e;
		}
		if (L_1 == 5)
		{
			goto IL_009e;
		}
		if (L_1 == 6)
		{
			goto IL_00b8;
		}
		if (L_1 == 7)
		{
			goto IL_00ca;
		}
		if (L_1 == 8)
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_00e6;
	}

IL_0036:
	{
		Vector2_t97  L_2 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_2;
	}

IL_003c:
	{
		float L_3 = ((&___windowSize)->___x_1);
		Vector2_t97  L_4 = {0};
		Vector2__ctor_m2417(&L_4, ((float)((float)(0.5f)*(float)L_3)), (0.0f), /*hidden argument*/NULL);
		return L_4;
	}

IL_0054:
	{
		float L_5 = ((&___windowSize)->___x_1);
		Vector2_t97  L_6 = {0};
		Vector2__ctor_m2417(&L_6, L_5, (0.0f), /*hidden argument*/NULL);
		return L_6;
	}

IL_0066:
	{
		float L_7 = ((&___windowSize)->___y_2);
		Vector2_t97  L_8 = {0};
		Vector2__ctor_m2417(&L_8, (0.0f), ((float)((float)(0.5f)*(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}

IL_007e:
	{
		float L_9 = ((&___windowSize)->___x_1);
		float L_10 = ((&___windowSize)->___y_2);
		Vector2_t97  L_11 = {0};
		Vector2__ctor_m2417(&L_11, ((float)((float)(0.5f)*(float)L_9)), ((float)((float)(0.5f)*(float)L_10)), /*hidden argument*/NULL);
		return L_11;
	}

IL_009e:
	{
		float L_12 = ((&___windowSize)->___x_1);
		float L_13 = ((&___windowSize)->___y_2);
		Vector2_t97  L_14 = {0};
		Vector2__ctor_m2417(&L_14, L_12, ((float)((float)(0.5f)*(float)L_13)), /*hidden argument*/NULL);
		return L_14;
	}

IL_00b8:
	{
		float L_15 = ((&___windowSize)->___y_2);
		Vector2_t97  L_16 = {0};
		Vector2__ctor_m2417(&L_16, (0.0f), L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_00ca:
	{
		float L_17 = ((&___windowSize)->___x_1);
		float L_18 = ((&___windowSize)->___y_2);
		Vector2_t97  L_19 = {0};
		Vector2__ctor_m2417(&L_19, ((float)((float)(0.5f)*(float)L_17)), L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_00e4:
	{
		Vector2_t97  L_20 = ___windowSize;
		return L_20;
	}

IL_00e6:
	{
		Vector2_t97  L_21 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_21;
	}
}
// UnityEngine.Vector2 PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::GetAlignmentFactor()
extern "C" Vector2_t97  ScaledRect_GetAlignmentFactor_m6937 (ScaledRect_t199 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___alignment_3);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0036;
		}
		if (L_1 == 1)
		{
			goto IL_003c;
		}
		if (L_1 == 2)
		{
			goto IL_004c;
		}
		if (L_1 == 3)
		{
			goto IL_005c;
		}
		if (L_1 == 4)
		{
			goto IL_006c;
		}
		if (L_1 == 5)
		{
			goto IL_007c;
		}
		if (L_1 == 6)
		{
			goto IL_008c;
		}
		if (L_1 == 7)
		{
			goto IL_009c;
		}
		if (L_1 == 8)
		{
			goto IL_00ac;
		}
	}
	{
		goto IL_00bc;
	}

IL_0036:
	{
		Vector2_t97  L_2 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_2;
	}

IL_003c:
	{
		Vector2_t97  L_3 = {0};
		Vector2__ctor_m2417(&L_3, (-0.5f), (0.0f), /*hidden argument*/NULL);
		return L_3;
	}

IL_004c:
	{
		Vector2_t97  L_4 = {0};
		Vector2__ctor_m2417(&L_4, (-1.0f), (0.0f), /*hidden argument*/NULL);
		return L_4;
	}

IL_005c:
	{
		Vector2_t97  L_5 = {0};
		Vector2__ctor_m2417(&L_5, (0.0f), (-0.5f), /*hidden argument*/NULL);
		return L_5;
	}

IL_006c:
	{
		Vector2_t97  L_6 = {0};
		Vector2__ctor_m2417(&L_6, (-0.5f), (-0.5f), /*hidden argument*/NULL);
		return L_6;
	}

IL_007c:
	{
		Vector2_t97  L_7 = {0};
		Vector2__ctor_m2417(&L_7, (-1.0f), (-0.5f), /*hidden argument*/NULL);
		return L_7;
	}

IL_008c:
	{
		Vector2_t97  L_8 = {0};
		Vector2__ctor_m2417(&L_8, (0.0f), (-1.0f), /*hidden argument*/NULL);
		return L_8;
	}

IL_009c:
	{
		Vector2_t97  L_9 = {0};
		Vector2__ctor_m2417(&L_9, (-0.5f), (-1.0f), /*hidden argument*/NULL);
		return L_9;
	}

IL_00ac:
	{
		Vector2_t97  L_10 = {0};
		Vector2__ctor_m2417(&L_10, (-1.0f), (-1.0f), /*hidden argument*/NULL);
		return L_10;
	}

IL_00bc:
	{
		Vector2_t97  L_11 = Vector2_get_zero_m2937(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_11;
	}
}
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.ScaledRectAlignment
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_ScaledR_0MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// PixelCrushers.DialogueSystem.UnityGUI.ValueScale
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_ValueSc.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledValue::.ctor(PixelCrushers.DialogueSystem.UnityGUI.ValueScale,System.Single)
extern "C" void ScaledValue__ctor_m6938 (ScaledValue_t606 * __this, int32_t ___scale, float ___value, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___scale;
		__this->___scale_2 = L_0;
		float L_1 = ___value;
		__this->___value_3 = L_1;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledValue::.ctor(PixelCrushers.DialogueSystem.UnityGUI.ScaledValue)
extern "C" void ScaledValue__ctor_m6939 (ScaledValue_t606 * __this, ScaledValue_t606 * ___source, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		ScaledValue_t606 * L_0 = ___source;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		ScaledValue_t606 * L_1 = ___source;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___scale_2);
		__this->___scale_2 = L_2;
		ScaledValue_t606 * L_3 = ___source;
		NullCheck(L_3);
		float L_4 = (L_3->___value_3);
		__this->___value_3 = L_4;
	}

IL_0024:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledValue::.ctor()
extern "C" void ScaledValue__ctor_m6940 (ScaledValue_t606 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledValue::.cctor()
extern TypeInfo* ScaledValue_t606_il2cpp_TypeInfo_var;
extern "C" void ScaledValue__cctor_m6941 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScaledValue_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(199);
		s_Il2CppMethodIntialized = true;
	}
	{
		ScaledValue_t606 * L_0 = (ScaledValue_t606 *)il2cpp_codegen_object_new (ScaledValue_t606_il2cpp_TypeInfo_var);
		ScaledValue__ctor_m6938(L_0, 0, (0.0f), /*hidden argument*/NULL);
		((ScaledValue_t606_StaticFields*)ScaledValue_t606_il2cpp_TypeInfo_var->static_fields)->___zero_0 = L_0;
		ScaledValue_t606 * L_1 = (ScaledValue_t606 *)il2cpp_codegen_object_new (ScaledValue_t606_il2cpp_TypeInfo_var);
		ScaledValue__ctor_m6938(L_1, 1, (1.0f), /*hidden argument*/NULL);
		((ScaledValue_t606_StaticFields*)ScaledValue_t606_il2cpp_TypeInfo_var->static_fields)->___max_1 = L_1;
		return;
	}
}
// System.Single PixelCrushers.DialogueSystem.UnityGUI.ScaledValue::GetPixelValue(System.Single)
extern "C" float ScaledValue_GetPixelValue_m6942 (ScaledValue_t606 * __this, float ___windowSize, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___scale_2);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		float L_1 = (__this->___value_3);
		return L_1;
	}

IL_0012:
	{
		float L_2 = (__this->___value_3);
		float L_3 = ___windowSize;
		return ((float)((float)L_2*(float)L_3));
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.ScaledValue PixelCrushers.DialogueSystem.UnityGUI.ScaledValue::FromPixelValue(System.Single)
extern TypeInfo* ScaledValue_t606_il2cpp_TypeInfo_var;
extern "C" ScaledValue_t606 * ScaledValue_FromPixelValue_m2722 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScaledValue_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(199);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		ScaledValue_t606 * L_1 = (ScaledValue_t606 *)il2cpp_codegen_object_new (ScaledValue_t606_il2cpp_TypeInfo_var);
		ScaledValue__ctor_m6938(L_1, 0, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.ScaledValue PixelCrushers.DialogueSystem.UnityGUI.ScaledValue::FromNormalizedValue(System.Single)
extern TypeInfo* ScaledValue_t606_il2cpp_TypeInfo_var;
extern "C" ScaledValue_t606 * ScaledValue_FromNormalizedValue_m2990 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScaledValue_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(199);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		ScaledValue_t606 * L_1 = (ScaledValue_t606 *)il2cpp_codegen_object_new (ScaledValue_t606_il2cpp_TypeInfo_var);
		ScaledValue__ctor_m6938(L_1, 1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.ValueScale
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_ValueScMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.AutoSize
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_AutoSizMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.UnityGUI.AutoSize::.ctor()
extern TypeInfo* ScaledValue_t606_il2cpp_TypeInfo_var;
extern "C" void AutoSize__ctor_m6943 (AutoSize_t1348 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScaledValue_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(199);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScaledValue_t606_il2cpp_TypeInfo_var);
		ScaledValue_t606 * L_0 = ((ScaledValue_t606_StaticFields*)ScaledValue_t606_il2cpp_TypeInfo_var->static_fields)->___max_1;
		ScaledValue_t606 * L_1 = (ScaledValue_t606 *)il2cpp_codegen_object_new (ScaledValue_t606_il2cpp_TypeInfo_var);
		ScaledValue__ctor_m6939(L_1, L_0, /*hidden argument*/NULL);
		__this->___maxWidth_2 = L_1;
		ScaledValue_t606 * L_2 = ((ScaledValue_t606_StaticFields*)ScaledValue_t606_il2cpp_TypeInfo_var->static_fields)->___max_1;
		ScaledValue_t606 * L_3 = (ScaledValue_t606 *)il2cpp_codegen_object_new (ScaledValue_t606_il2cpp_TypeInfo_var);
		ScaledValue__ctor_m6939(L_3, L_2, /*hidden argument*/NULL);
		__this->___maxHeight_3 = L_3;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.AutoSize::get_IsEnabled()
extern "C" bool AutoSize_get_IsEnabled_m6944 (AutoSize_t1348 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->___autoSizeWidth_0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = (__this->___autoSizeHeight_1);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void PixelCrushers.DialogueSystem.UnityGUI.Fit::.ctor()
extern "C" void Fit__ctor_m6945 (Fit_t1349 * __this, const MethodInfo* method)
{
	{
		__this->___expandToFit_4 = 1;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Fit::get_IsSpecified()
extern "C" bool Fit_get_IsSpecified_m6946 (Fit_t1349 * __this, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		GUIControl_t1261 * L_0 = (__this->___above_0);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		GUIControl_t1261 * L_2 = (__this->___below_1);
		bool L_3 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0041;
		}
	}
	{
		GUIControl_t1261 * L_4 = (__this->___leftOf_2);
		bool L_5 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_4, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		GUIControl_t1261 * L_6 = (__this->___rightOf_3);
		bool L_7 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_6, (Object_t584 *)NULL, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0042;
	}

IL_0041:
	{
		G_B5_0 = 1;
	}

IL_0042:
	{
		return G_B5_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void PixelCrushers.DialogueSystem.UnityGUI.ImageAnimation::.ctor()
extern "C" void ImageAnimation__ctor_m6947 (ImageAnimation_t1353 * __this, const MethodInfo* method)
{
	{
		__this->___frameWidth_1 = ((int32_t)64);
		__this->___framesPerSecond_2 = (1.0f);
		__this->___numFrames_3 = 1;
		__this->___frameNormalWidth_4 = (1.0f);
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ImageAnimation::RefreshAnimation(UnityEngine.Texture2D)
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueTime_t625_il2cpp_TypeInfo_var;
extern "C" void ImageAnimation_RefreshAnimation_m6948 (ImageAnimation_t1353 * __this, Texture2D_t90 * ___image, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		DialogueTime_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture2D_t90 * L_0 = ___image;
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = Application_get_isPlaying_m2677(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		Texture2D_t90 * L_3 = ___image;
		bool L_4 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_3, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0088;
		}
	}
	{
		Texture2D_t90 * L_5 = ___image;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		int32_t L_7 = (__this->___frameWidth_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_8 = Mathf_Max_m3148(NULL /*static, unused*/, L_7, 1, /*hidden argument*/NULL);
		__this->___numFrames_3 = ((int32_t)((int32_t)L_6/(int32_t)L_8));
		int32_t L_9 = (__this->___numFrames_3);
		int32_t L_10 = Mathf_Max_m3148(NULL /*static, unused*/, L_9, 1, /*hidden argument*/NULL);
		__this->___frameNormalWidth_4 = ((float)((float)(1.0f)/(float)(((float)L_10))));
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_11 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = (__this->___framesPerSecond_2);
		float L_13 = Mathf_Max_m4982(NULL /*static, unused*/, L_12, (0.05f), /*hidden argument*/NULL);
		__this->___nextFrameTime_6 = ((float)((float)L_11+(float)((float)((float)(1.0f)/(float)L_13))));
		float L_14 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lastDialogueTime_8 = L_14;
		goto IL_0093;
	}

IL_0088:
	{
		__this->___nextFrameTime_6 = (std::numeric_limits<float>::infinity());
	}

IL_0093:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ImageAnimation::DrawAnimation(UnityEngine.Rect,UnityEngine.Texture2D)
extern TypeInfo* DialogueTime_t625_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" void ImageAnimation_DrawAnimation_m6949 (ImageAnimation_t1353 * __this, Rect_t201  ___rect, Texture2D_t90 * ___image, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueTime_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Application_get_isPlaying_m2677(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00ed;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_1 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = (__this->___nextFrameTime_6);
		if ((((float)L_1) >= ((float)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_3 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = (__this->___lastDialogueTime_8);
		if ((!(((float)L_3) < ((float)L_4))))
		{
			goto IL_00dd;
		}
	}

IL_002a:
	{
		int32_t L_5 = (__this->___numFrames_3);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		float L_6 = (__this->___frameNormalWidth_4);
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0077;
		}
	}

IL_0045:
	{
		Texture2D_t90 * L_7 = ___image;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		int32_t L_9 = (__this->___frameWidth_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_Max_m3148(NULL /*static, unused*/, L_9, 1, /*hidden argument*/NULL);
		__this->___numFrames_3 = ((int32_t)((int32_t)L_8/(int32_t)L_10));
		int32_t L_11 = (__this->___numFrames_3);
		int32_t L_12 = Mathf_Max_m3148(NULL /*static, unused*/, L_11, 1, /*hidden argument*/NULL);
		__this->___frameNormalWidth_4 = ((float)((float)(1.0f)/(float)(((float)L_12))));
	}

IL_0077:
	{
		int32_t L_13 = (__this->___currentFrame_5);
		int32_t L_14 = (__this->___numFrames_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_15 = Mathf_Max_m3148(NULL /*static, unused*/, L_14, 1, /*hidden argument*/NULL);
		__this->___currentFrame_5 = ((int32_t)((int32_t)((int32_t)((int32_t)L_13+(int32_t)1))%(int32_t)L_15));
		int32_t L_16 = (__this->___currentFrame_5);
		float L_17 = (__this->___frameNormalWidth_4);
		float L_18 = (__this->___frameNormalWidth_4);
		Rect_t201  L_19 = {0};
		Rect__ctor_m2425(&L_19, ((float)((float)(((float)L_16))*(float)L_17)), (0.0f), L_18, (1.0f), /*hidden argument*/NULL);
		__this->___texCoords_7 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_20 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_21 = (__this->___framesPerSecond_2);
		float L_22 = Mathf_Max_m4982(NULL /*static, unused*/, L_21, (0.05f), /*hidden argument*/NULL);
		__this->___nextFrameTime_6 = ((float)((float)L_20+(float)((float)((float)(1.0f)/(float)L_22))));
	}

IL_00dd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_23 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___lastDialogueTime_8 = L_23;
		goto IL_011c;
	}

IL_00ed:
	{
		int32_t L_24 = (__this->___frameWidth_1);
		Texture2D_t90 * L_25 = ___image;
		NullCheck(L_25);
		int32_t L_26 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_25);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_27 = Mathf_Max_m3148(NULL /*static, unused*/, L_26, 1, /*hidden argument*/NULL);
		Rect_t201  L_28 = {0};
		Rect__ctor_m2425(&L_28, (0.0f), (0.0f), ((float)((float)(((float)L_24))/(float)(((float)L_27)))), (1.0f), /*hidden argument*/NULL);
		__this->___texCoords_7 = L_28;
	}

IL_011c:
	{
		Rect_t201 * L_29 = &(__this->___texCoords_7);
		float L_30 = Rect_get_width_m2728(L_29, /*hidden argument*/NULL);
		if ((!(((float)L_30) > ((float)(0.0f)))))
		{
			goto IL_013e;
		}
	}
	{
		Rect_t201  L_31 = ___rect;
		Texture2D_t90 * L_32 = ___image;
		Rect_t201  L_33 = (__this->___texCoords_7);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_DrawTextureWithTexCoords_m7417(NULL /*static, unused*/, L_31, L_32, L_33, /*hidden argument*/NULL);
	}

IL_013e:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::.ctor()
extern "C" void Navigation__ctor_m6950 (Navigation_t1350 * __this, const MethodInfo* method)
{
	{
		__this->___focusFirstControlOnEnable_3 = 1;
		__this->___jumpToMousePosition_4 = 1;
		__this->___clickButton_6 = (String_t*) &_stringLiteral173;
		__this->___click_7 = ((int32_t)32);
		__this->___previous_8 = ((int32_t)273);
		__this->___next_9 = ((int32_t)274);
		__this->___axis_10 = (String_t*) &_stringLiteral174;
		__this->___invertAxis_11 = 1;
		__this->___axisRepeatDelay_12 = (1.0f);
		__this->___mouseWheelSensitivity_13 = (5.0f);
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String PixelCrushers.DialogueSystem.UnityGUI.Navigation::get_FocusedControlName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Navigation_get_FocusedControlName_m6951 (Navigation_t1350 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		bool L_0 = Navigation_get_IsCurrentValid_m6952(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		GUIControlU5BU5D_t1378* L_1 = (__this->___order_5);
		int32_t L_2 = (__this->___current_14);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_1, L_3)));
		String_t* L_4 = GUIControl_get_FullName_m6773((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_1, L_3)), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0027;
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_5;
	}

IL_0027:
	{
		return G_B3_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::get_IsCurrentValid()
extern "C" bool Navigation_get_IsCurrentValid_m6952 (Navigation_t1350 * __this, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = Navigation_get_IsOrderArrayValid_m6953(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->___current_14);
		if ((((int32_t)0) > ((int32_t)L_1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2 = (__this->___current_14);
		GUIControlU5BU5D_t1378* L_3 = (__this->___order_5);
		NullCheck(L_3);
		G_B4_0 = ((((int32_t)L_2) < ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B4_0 = 0;
	}

IL_002a:
	{
		return G_B4_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::get_IsOrderArrayValid()
extern "C" bool Navigation_get_IsOrderArrayValid_m6953 (Navigation_t1350 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GUIControlU5BU5D_t1378* L_0 = (__this->___order_5);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		GUIControlU5BU5D_t1378* L_1 = (__this->___order_5);
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) > ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::get_IsClicked()
extern "C" bool Navigation_get_IsClicked_m6954 (Navigation_t1350 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Event_t662 * L_0 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Event_get_type_m3060(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0024;
		}
	}
	{
		Event_t662 * L_2 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_keyCode_m3061(L_2, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___click_7);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::FocusFirstControl()
extern "C" void Navigation_FocusFirstControl_m6955 (Navigation_t1350 * __this, const MethodInfo* method)
{
	Navigation_t1350 * G_B2_0 = {0};
	Navigation_t1350 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	Navigation_t1350 * G_B3_1 = {0};
	{
		GUIControlU5BU5D_t1378* L_0 = (__this->___order_5);
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_001b;
		}
	}
	{
		GUIControlU5BU5D_t1378* L_1 = (__this->___order_5);
		NullCheck(L_1);
		G_B3_0 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))+(int32_t)1));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		NullCheck(G_B3_1);
		G_B3_1->___current_14 = G_B3_0;
		Navigation_Navigate_m6958(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::CheckNavigationInput(UnityEngine.Vector2)
extern "C" void Navigation_CheckNavigationInput_m6956 (Navigation_t1350 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Navigation_CheckMouseWheel_m6960(__this, /*hidden argument*/NULL);
		float L_0 = Navigation_GetNavigationAxis_m6963(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		bool L_2 = Navigation_IsPreviousControlInputDown_m6962(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		Navigation_Navigate_m6958(__this, (-1), /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_0025:
	{
		float L_3 = V_0;
		bool L_4 = Navigation_IsNextControlInputDown_m6961(__this, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		Navigation_Navigate_m6958(__this, 1, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_003d:
	{
		bool L_5 = (__this->___jumpToMousePosition_4);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		Vector2_t97  L_6 = ___relativeMousePosition;
		Navigation_NavigateToMousePosition_m6957(__this, L_6, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::NavigateToMousePosition(UnityEngine.Vector2)
extern "C" void Navigation_NavigateToMousePosition_m6957 (Navigation_t1350 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Rect_t201  V_1 = {0};
	{
		V_0 = 0;
		goto IL_0057;
	}

IL_0007:
	{
		GUIControlU5BU5D_t1378* L_0 = (__this->___order_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_0, L_2)));
		GameObject_t49 * L_3 = Component_get_gameObject_m2452((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_0, L_2)), /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = GameObject_get_activeInHierarchy_m2549(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0053;
		}
	}
	{
		GUIControlU5BU5D_t1378* L_5 = (__this->___order_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_5, L_7)));
		bool L_8 = ((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_5, L_7))->___visible_8);
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		GUIControlU5BU5D_t1378* L_9 = (__this->___order_5);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_9, L_11)));
		Rect_t201  L_12 = GUIControl_get_rect_m6763((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_9, L_11)), /*hidden argument*/NULL);
		V_1 = L_12;
		Vector2_t97  L_13 = ___relativeMousePosition;
		bool L_14 = Rect_Contains_m2980((&V_1), L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_15 = V_0;
		__this->___current_14 = L_15;
		return;
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		GUIControlU5BU5D_t1378* L_18 = (__this->___order_5);
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::Navigate(System.Int32)
extern "C" void Navigation_Navigate_m6958 (Navigation_t1350 * __this, int32_t ___direction, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = Navigation_get_IsOrderArrayValid_m6953(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_1 = (__this->___current_14);
		V_0 = L_1;
		int32_t L_2 = ___direction;
		int32_t L_3 = Navigation_NextControlIndex_m6959(__this, L_2, /*hidden argument*/NULL);
		__this->___current_14 = L_3;
		goto IL_0031;
	}

IL_0024:
	{
		int32_t L_4 = ___direction;
		int32_t L_5 = Navigation_NextControlIndex_m6959(__this, L_4, /*hidden argument*/NULL);
		__this->___current_14 = L_5;
	}

IL_0031:
	{
		GUIControlU5BU5D_t1378* L_6 = (__this->___order_5);
		int32_t L_7 = (__this->___current_14);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_6, L_8)));
		bool L_9 = ((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_6, L_8))->___visible_8);
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_10 = (__this->___current_14);
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0024;
		}
	}

IL_0054:
	{
		return;
	}
}
// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.Navigation::NextControlIndex(System.Int32)
extern "C" int32_t Navigation_NextControlIndex_m6959 (Navigation_t1350 * __this, int32_t ___direction, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		bool L_0 = Navigation_get_IsOrderArrayValid_m6953(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (__this->___current_14);
		int32_t L_2 = ___direction;
		GUIControlU5BU5D_t1378* L_3 = (__this->___order_5);
		NullCheck(L_3);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)L_2))%(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_0;
		G_B4_0 = L_5;
		goto IL_0034;
	}

IL_002a:
	{
		GUIControlU5BU5D_t1378* L_6 = (__this->___order_5);
		NullCheck(L_6);
		G_B4_0 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))-(int32_t)1));
	}

IL_0034:
	{
		return G_B4_0;
	}

IL_0035:
	{
		return 0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::CheckMouseWheel()
extern "C" void Navigation_CheckMouseWheel_m6960 (Navigation_t1350 * __this, const MethodInfo* method)
{
	Vector2_t97  V_0 = {0};
	{
		Event_t662 * L_0 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Event_get_type_m3060(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)6))))
		{
			goto IL_002f;
		}
	}
	{
		float L_2 = (__this->___mouseWheelY_16);
		Event_t662 * L_3 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector2_t97  L_4 = Event_get_delta_m7436(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = ((&V_0)->___y_2);
		__this->___mouseWheelY_16 = ((float)((float)L_2+(float)L_5));
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::IsNextControlInputDown(System.Single)
extern TypeInfo* DialogueTime_t625_il2cpp_TypeInfo_var;
extern "C" bool Navigation_IsNextControlInputDown_m6961 (Navigation_t1350 * __this, float ___axisValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueTime_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B9_0 = 0;
	{
		Event_t662 * L_0 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Event_get_type_m3060(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_003b;
		}
	}
	{
		Event_t662 * L_2 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_keyCode_m3061(L_2, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___next_9);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_003b;
		}
	}
	{
		Event_t662 * L_5 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Event_Use_m7095(L_5, /*hidden argument*/NULL);
		__this->___isAxisNextDown_18 = 1;
		goto IL_0059;
	}

IL_003b:
	{
		float L_6 = (__this->___mouseWheelY_16);
		float L_7 = (__this->___mouseWheelSensitivity_13);
		if ((!(((float)L_6) >= ((float)L_7))))
		{
			goto IL_0059;
		}
	}
	{
		__this->___mouseWheelY_16 = (0.0f);
		return 1;
	}

IL_0059:
	{
		bool L_8 = (__this->___isAxisNextDown_18);
		if (!L_8)
		{
			goto IL_0081;
		}
	}
	{
		float L_9 = ___axisValue;
		if ((!(((float)L_9) <= ((float)(0.01f)))))
		{
			goto IL_0081;
		}
	}
	{
		float L_10 = Time_get_time_m2414(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = (__this->___timeNextRelease_19);
		G_B9_0 = ((((int32_t)((!(((float)L_10) >= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0082;
	}

IL_0081:
	{
		G_B9_0 = 0;
	}

IL_0082:
	{
		V_0 = G_B9_0;
		float L_12 = ___axisValue;
		__this->___isAxisNextDown_18 = ((((float)L_12) > ((float)(0.01f)))? 1 : 0);
		float L_13 = ___axisValue;
		if ((!(((float)L_13) > ((float)(0.5f)))))
		{
			goto IL_00d6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_14 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_15 = (__this->___axisRepeatTime_15);
		if ((!(((float)L_14) >= ((float)L_15))))
		{
			goto IL_00d1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_16 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_17 = (__this->___axisRepeatDelay_12);
		__this->___axisRepeatTime_15 = ((float)((float)L_16+(float)L_17));
		float L_18 = Time_get_time_m2414(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___timeNextRelease_19 = ((float)((float)L_18+(float)(0.5f)));
		return 1;
	}

IL_00d1:
	{
		goto IL_00f4;
	}

IL_00d6:
	{
		float L_19 = ___axisValue;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_00ec;
		}
	}
	{
		__this->___axisRepeatTime_15 = (0.0f);
	}

IL_00ec:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_00f4;
		}
	}
	{
		return 1;
	}

IL_00f4:
	{
		return 0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::IsPreviousControlInputDown(System.Single)
extern TypeInfo* DialogueTime_t625_il2cpp_TypeInfo_var;
extern "C" bool Navigation_IsPreviousControlInputDown_m6962 (Navigation_t1350 * __this, float ___axisValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueTime_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B9_0 = 0;
	{
		Event_t662 * L_0 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Event_get_type_m3060(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_003b;
		}
	}
	{
		Event_t662 * L_2 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Event_get_keyCode_m3061(L_2, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___previous_8);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_003b;
		}
	}
	{
		Event_t662 * L_5 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Event_Use_m7095(L_5, /*hidden argument*/NULL);
		__this->___isAxisPrevDown_17 = 1;
		goto IL_005a;
	}

IL_003b:
	{
		float L_6 = (__this->___mouseWheelY_16);
		float L_7 = (__this->___mouseWheelSensitivity_13);
		if ((!(((float)L_6) <= ((float)((-L_7))))))
		{
			goto IL_005a;
		}
	}
	{
		__this->___mouseWheelY_16 = (0.0f);
		return 1;
	}

IL_005a:
	{
		bool L_8 = (__this->___isAxisPrevDown_17);
		if (!L_8)
		{
			goto IL_0082;
		}
	}
	{
		float L_9 = ___axisValue;
		if ((!(((float)L_9) >= ((float)(-0.01f)))))
		{
			goto IL_0082;
		}
	}
	{
		float L_10 = Time_get_time_m2414(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = (__this->___timeNextRelease_19);
		G_B9_0 = ((((int32_t)((!(((float)L_10) >= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0083;
	}

IL_0082:
	{
		G_B9_0 = 0;
	}

IL_0083:
	{
		V_0 = G_B9_0;
		float L_12 = ___axisValue;
		__this->___isAxisPrevDown_17 = ((((float)L_12) < ((float)(-0.01f)))? 1 : 0);
		float L_13 = ___axisValue;
		if ((!(((float)L_13) < ((float)(-0.5f)))))
		{
			goto IL_00d7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_14 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_15 = (__this->___axisRepeatTime_15);
		if ((!(((float)L_14) >= ((float)L_15))))
		{
			goto IL_00d2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_16 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_17 = (__this->___axisRepeatDelay_12);
		__this->___axisRepeatTime_15 = ((float)((float)L_16+(float)L_17));
		float L_18 = Time_get_time_m2414(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___timeNextRelease_19 = ((float)((float)L_18+(float)(0.5f)));
		return 1;
	}

IL_00d2:
	{
		goto IL_00f5;
	}

IL_00d7:
	{
		float L_19 = ___axisValue;
		if ((!(((float)L_19) <= ((float)(0.0f)))))
		{
			goto IL_00ed;
		}
	}
	{
		__this->___axisRepeatTime_15 = (0.0f);
	}

IL_00ed:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_00f5;
		}
	}
	{
		return 1;
	}

IL_00f5:
	{
		return 0;
	}
}
// System.Single PixelCrushers.DialogueSystem.UnityGUI.Navigation::GetNavigationAxis()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern TypeInfo* UnityException_t983_il2cpp_TypeInfo_var;
extern "C" float Navigation_GetNavigationAxis_m6963 (Navigation_t1350 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		UnityException_t983_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1743);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	int32_t G_B6_0 = 0;
	float G_B6_1 = 0.0f;
	{
		bool L_0 = Application_get_isPlaying_m2677(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1 = (__this->___axis_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}

IL_001a:
	{
		return (0.0f);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_3 = (__this->___axis_10);
			IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
			float L_4 = Input_GetAxis_m2466(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			bool L_5 = (__this->___invertAxis_11);
			G_B4_0 = L_4;
			if (!L_5)
			{
				G_B5_0 = L_4;
				goto IL_003c;
			}
		}

IL_0036:
		{
			G_B6_0 = (-1);
			G_B6_1 = G_B4_0;
			goto IL_003d;
		}

IL_003c:
		{
			G_B6_0 = 1;
			G_B6_1 = G_B5_0;
		}

IL_003d:
		{
			V_0 = ((float)((float)G_B6_1*(float)(((float)G_B6_0))));
			goto IL_005b;
		}

IL_0045:
		{
			; // IL_0045: leave IL_005b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (UnityException_t983_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_004a;
		throw e;
	}

CATCH_004a:
	{ // begin catch(UnityEngine.UnityException)
		{
			V_0 = (0.0f);
			goto IL_005b;
		}

IL_0056:
		{
			; // IL_0056: leave IL_005b
		}
	} // end catch (depth: 1)

IL_005b:
	{
		float L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.TextStyle
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_TextStyMethodDeclarations.h"



// PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityGU.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// PixelCrushers.DialogueSystem.Emphasis
#include "DialogueSystem_PixelCrushers_DialogueSystem_EmphasisMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::DrawText(UnityEngine.Rect,System.String,UnityEngine.GUIStyle,PixelCrushers.DialogueSystem.UnityGUI.TextStyle)
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" void UnityGUITools_DrawText_m6964 (Object_t * __this /* static, unused */, Rect_t201  ___rect, String_t* ___text, GUIStyle_t303 * ___guiStyle, int32_t ___textStyle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	Color_t121  V_0 = {0};
	Color_t121  V_1 = {0};
	{
		int32_t L_0 = ___textStyle;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___textStyle;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_012f;
		}
	}

IL_000e:
	{
		GUIStyle_t303 * L_2 = ___guiStyle;
		NullCheck(L_2);
		GUIStyleState_t656 * L_3 = GUIStyle_get_normal_m2988(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Color_t121  L_4 = GUIStyleState_get_textColor_m7437(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		GUIStyle_t303 * L_5 = ___guiStyle;
		NullCheck(L_5);
		GUIStyleState_t656 * L_6 = GUIStyle_get_normal_m2988(L_5, /*hidden argument*/NULL);
		GUIStyle_t303 * L_7 = ___guiStyle;
		NullCheck(L_7);
		GUIStyleState_t656 * L_8 = GUIStyle_get_normal_m2988(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Color_t121  L_9 = GUIStyleState_get_textColor_m7437(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = ((&V_1)->___a_3);
		Color_t121  L_11 = {0};
		Color__ctor_m2626(&L_11, (0.0f), (0.0f), (0.0f), L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIStyleState_set_textColor_m2989(L_6, L_11, /*hidden argument*/NULL);
		float L_12 = Rect_get_x_m4804((&___rect), /*hidden argument*/NULL);
		float L_13 = Rect_get_y_m4805((&___rect), /*hidden argument*/NULL);
		float L_14 = Rect_get_width_m2728((&___rect), /*hidden argument*/NULL);
		float L_15 = Rect_get_height_m2868((&___rect), /*hidden argument*/NULL);
		Rect_t201  L_16 = {0};
		Rect__ctor_m2425(&L_16, ((float)((float)L_12+(float)(1.0f))), ((float)((float)L_13+(float)(1.0f))), L_14, L_15, /*hidden argument*/NULL);
		String_t* L_17 = ___text;
		GUIStyle_t303 * L_18 = ___guiStyle;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_Label_m3112(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		int32_t L_19 = ___textStyle;
		if ((!(((uint32_t)L_19) == ((uint32_t)2))))
		{
			goto IL_0123;
		}
	}
	{
		float L_20 = Rect_get_x_m4804((&___rect), /*hidden argument*/NULL);
		float L_21 = Rect_get_y_m4805((&___rect), /*hidden argument*/NULL);
		float L_22 = Rect_get_width_m2728((&___rect), /*hidden argument*/NULL);
		float L_23 = Rect_get_height_m2868((&___rect), /*hidden argument*/NULL);
		Rect_t201  L_24 = {0};
		Rect__ctor_m2425(&L_24, ((float)((float)L_20+(float)(1.0f))), ((float)((float)L_21-(float)(1.0f))), L_22, L_23, /*hidden argument*/NULL);
		String_t* L_25 = ___text;
		GUIStyle_t303 * L_26 = ___guiStyle;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_Label_m3112(NULL /*static, unused*/, L_24, L_25, L_26, /*hidden argument*/NULL);
		float L_27 = Rect_get_x_m4804((&___rect), /*hidden argument*/NULL);
		float L_28 = Rect_get_y_m4805((&___rect), /*hidden argument*/NULL);
		float L_29 = Rect_get_width_m2728((&___rect), /*hidden argument*/NULL);
		float L_30 = Rect_get_height_m2868((&___rect), /*hidden argument*/NULL);
		Rect_t201  L_31 = {0};
		Rect__ctor_m2425(&L_31, ((float)((float)L_27-(float)(1.0f))), ((float)((float)L_28+(float)(1.0f))), L_29, L_30, /*hidden argument*/NULL);
		String_t* L_32 = ___text;
		GUIStyle_t303 * L_33 = ___guiStyle;
		GUI_Label_m3112(NULL /*static, unused*/, L_31, L_32, L_33, /*hidden argument*/NULL);
		float L_34 = Rect_get_x_m4804((&___rect), /*hidden argument*/NULL);
		float L_35 = Rect_get_y_m4805((&___rect), /*hidden argument*/NULL);
		float L_36 = Rect_get_width_m2728((&___rect), /*hidden argument*/NULL);
		float L_37 = Rect_get_height_m2868((&___rect), /*hidden argument*/NULL);
		Rect_t201  L_38 = {0};
		Rect__ctor_m2425(&L_38, ((float)((float)L_34-(float)(1.0f))), ((float)((float)L_35-(float)(1.0f))), L_36, L_37, /*hidden argument*/NULL);
		String_t* L_39 = ___text;
		GUIStyle_t303 * L_40 = ___guiStyle;
		GUI_Label_m3112(NULL /*static, unused*/, L_38, L_39, L_40, /*hidden argument*/NULL);
	}

IL_0123:
	{
		GUIStyle_t303 * L_41 = ___guiStyle;
		NullCheck(L_41);
		GUIStyleState_t656 * L_42 = GUIStyle_get_normal_m2988(L_41, /*hidden argument*/NULL);
		Color_t121  L_43 = V_0;
		NullCheck(L_42);
		GUIStyleState_set_textColor_m2989(L_42, L_43, /*hidden argument*/NULL);
	}

IL_012f:
	{
		Rect_t201  L_44 = ___rect;
		String_t* L_45 = ___text;
		GUIStyle_t303 * L_46 = ___guiStyle;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_Label_m3112(NULL /*static, unused*/, L_44, L_45, L_46, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::DrawText(UnityEngine.Rect,System.String,UnityEngine.GUIStyle,PixelCrushers.DialogueSystem.UnityGUI.TextStyle,UnityEngine.Color)
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" void UnityGUITools_DrawText_m2981 (Object_t * __this /* static, unused */, Rect_t201  ___rect, String_t* ___text, GUIStyle_t303 * ___guiStyle, int32_t ___textStyle, Color_t121  ___textStyleColor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	Color_t121  V_0 = {0};
	Color_t121  V_1 = {0};
	{
		int32_t L_0 = ___textStyle;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___textStyle;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0135;
		}
	}

IL_000e:
	{
		GUIStyle_t303 * L_2 = ___guiStyle;
		NullCheck(L_2);
		GUIStyleState_t656 * L_3 = GUIStyle_get_normal_m2988(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Color_t121  L_4 = GUIStyleState_get_textColor_m7437(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		GUIStyle_t303 * L_5 = ___guiStyle;
		NullCheck(L_5);
		GUIStyleState_t656 * L_6 = GUIStyle_get_normal_m2988(L_5, /*hidden argument*/NULL);
		float L_7 = ((&___textStyleColor)->___r_0);
		float L_8 = ((&___textStyleColor)->___g_1);
		float L_9 = ((&___textStyleColor)->___b_2);
		GUIStyle_t303 * L_10 = ___guiStyle;
		NullCheck(L_10);
		GUIStyleState_t656 * L_11 = GUIStyle_get_normal_m2988(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Color_t121  L_12 = GUIStyleState_get_textColor_m7437(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = ((&V_1)->___a_3);
		Color_t121  L_14 = {0};
		Color__ctor_m2626(&L_14, L_7, L_8, L_9, L_13, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIStyleState_set_textColor_m2989(L_6, L_14, /*hidden argument*/NULL);
		float L_15 = Rect_get_x_m4804((&___rect), /*hidden argument*/NULL);
		float L_16 = Rect_get_y_m4805((&___rect), /*hidden argument*/NULL);
		float L_17 = Rect_get_width_m2728((&___rect), /*hidden argument*/NULL);
		float L_18 = Rect_get_height_m2868((&___rect), /*hidden argument*/NULL);
		Rect_t201  L_19 = {0};
		Rect__ctor_m2425(&L_19, ((float)((float)L_15+(float)(1.0f))), ((float)((float)L_16+(float)(1.0f))), L_17, L_18, /*hidden argument*/NULL);
		String_t* L_20 = ___text;
		GUIStyle_t303 * L_21 = ___guiStyle;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_Label_m3112(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		int32_t L_22 = ___textStyle;
		if ((!(((uint32_t)L_22) == ((uint32_t)2))))
		{
			goto IL_0129;
		}
	}
	{
		float L_23 = Rect_get_x_m4804((&___rect), /*hidden argument*/NULL);
		float L_24 = Rect_get_y_m4805((&___rect), /*hidden argument*/NULL);
		float L_25 = Rect_get_width_m2728((&___rect), /*hidden argument*/NULL);
		float L_26 = Rect_get_height_m2868((&___rect), /*hidden argument*/NULL);
		Rect_t201  L_27 = {0};
		Rect__ctor_m2425(&L_27, ((float)((float)L_23+(float)(1.0f))), ((float)((float)L_24-(float)(1.0f))), L_25, L_26, /*hidden argument*/NULL);
		String_t* L_28 = ___text;
		GUIStyle_t303 * L_29 = ___guiStyle;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_Label_m3112(NULL /*static, unused*/, L_27, L_28, L_29, /*hidden argument*/NULL);
		float L_30 = Rect_get_x_m4804((&___rect), /*hidden argument*/NULL);
		float L_31 = Rect_get_y_m4805((&___rect), /*hidden argument*/NULL);
		float L_32 = Rect_get_width_m2728((&___rect), /*hidden argument*/NULL);
		float L_33 = Rect_get_height_m2868((&___rect), /*hidden argument*/NULL);
		Rect_t201  L_34 = {0};
		Rect__ctor_m2425(&L_34, ((float)((float)L_30-(float)(1.0f))), ((float)((float)L_31+(float)(1.0f))), L_32, L_33, /*hidden argument*/NULL);
		String_t* L_35 = ___text;
		GUIStyle_t303 * L_36 = ___guiStyle;
		GUI_Label_m3112(NULL /*static, unused*/, L_34, L_35, L_36, /*hidden argument*/NULL);
		float L_37 = Rect_get_x_m4804((&___rect), /*hidden argument*/NULL);
		float L_38 = Rect_get_y_m4805((&___rect), /*hidden argument*/NULL);
		float L_39 = Rect_get_width_m2728((&___rect), /*hidden argument*/NULL);
		float L_40 = Rect_get_height_m2868((&___rect), /*hidden argument*/NULL);
		Rect_t201  L_41 = {0};
		Rect__ctor_m2425(&L_41, ((float)((float)L_37-(float)(1.0f))), ((float)((float)L_38-(float)(1.0f))), L_39, L_40, /*hidden argument*/NULL);
		String_t* L_42 = ___text;
		GUIStyle_t303 * L_43 = ___guiStyle;
		GUI_Label_m3112(NULL /*static, unused*/, L_41, L_42, L_43, /*hidden argument*/NULL);
	}

IL_0129:
	{
		GUIStyle_t303 * L_44 = ___guiStyle;
		NullCheck(L_44);
		GUIStyleState_t656 * L_45 = GUIStyle_get_normal_m2988(L_44, /*hidden argument*/NULL);
		Color_t121  L_46 = V_0;
		NullCheck(L_45);
		GUIStyleState_set_textColor_m2989(L_45, L_46, /*hidden argument*/NULL);
	}

IL_0135:
	{
		Rect_t201  L_47 = ___rect;
		String_t* L_48 = ___text;
		GUIStyle_t303 * L_49 = ___guiStyle;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_Label_m3112(NULL /*static, unused*/, L_47, L_48, L_49, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUISkin PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::GetValidGUISkin(UnityEngine.GUISkin)
extern "C" GUISkin_t197 * UnityGUITools_GetValidGUISkin_m2984 (Object_t * __this /* static, unused */, GUISkin_t197 * ___guiSkin, const MethodInfo* method)
{
	GUISkin_t197 * G_B3_0 = {0};
	{
		GUISkin_t197 * L_0 = ___guiSkin;
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		GUISkin_t197 * L_2 = ___guiSkin;
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0012:
	{
		GUISkin_t197 * L_3 = UnityGUITools_GetDialogueManagerGUISkin_m6965(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// UnityEngine.GUISkin PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::GetDialogueManagerGUISkin()
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern TypeInfo* UnityDialogueUI_t1362_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern "C" GUISkin_t197 * UnityGUITools_GetDialogueManagerGUISkin_m6965 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		UnityDialogueUI_t1362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2578);
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	UnityDialogueUI_t1362 * V_0 = {0};
	GUISkin_t197 * G_B5_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		Object_t * L_0 = DialogueManager_get_DialogueUI_m5305(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((UnityDialogueUI_t1362 *)IsInst(L_0, UnityDialogueUI_t1362_il2cpp_TypeInfo_var));
		UnityDialogueUI_t1362 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		UnityDialogueUI_t1362 * L_3 = V_0;
		NullCheck(L_3);
		GUIRoot_t1265 * L_4 = (L_3->___guiRoot_4);
		bool L_5 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_4, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		UnityDialogueUI_t1362 * L_6 = V_0;
		NullCheck(L_6);
		GUIRoot_t1265 * L_7 = (L_6->___guiRoot_4);
		NullCheck(L_7);
		GUISkin_t197 * L_8 = (L_7->___guiSkin_19);
		bool L_9 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_8, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		UnityDialogueUI_t1362 * L_10 = V_0;
		NullCheck(L_10);
		GUIRoot_t1265 * L_11 = (L_10->___guiRoot_4);
		NullCheck(L_11);
		GUISkin_t197 * L_12 = (L_11->___guiSkin_19);
		G_B5_0 = L_12;
		goto IL_0053;
	}

IL_004e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUISkin_t197 * L_13 = GUI_get_skin_m2437(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B5_0 = L_13;
	}

IL_0053:
	{
		return G_B5_0;
	}
}
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::GetGUIStyle(System.String,UnityEngine.GUIStyle)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t303_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t303 * UnityGUITools_GetGUIStyle_m2997 (Object_t * __this /* static, unused */, String_t* ___guiStyleName, GUIStyle_t303 * ___defaultGUIStyle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		GUIStyle_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	GUIStyle_t303 * V_0 = {0};
	GUIStyle_t303 * G_B3_0 = {0};
	GUIStyle_t303 * G_B5_0 = {0};
	GUIStyle_t303 * G_B4_0 = {0};
	{
		String_t* L_0 = ___guiStyleName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((GUIStyle_t303 *)(NULL));
		goto IL_001c;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUISkin_t197 * L_2 = GUI_get_skin_m2437(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = ___guiStyleName;
		NullCheck(L_2);
		GUIStyle_t303 * L_4 = GUISkin_FindStyle_m2985(L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		GUIStyle_t303 * L_5 = V_0;
		GUIStyle_t303 * L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0026;
		}
	}
	{
		GUIStyle_t303 * L_7 = ___defaultGUIStyle;
		G_B5_0 = L_7;
	}

IL_0026:
	{
		GUIStyle_t303 * L_8 = (GUIStyle_t303 *)il2cpp_codegen_object_new (GUIStyle_t303_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2987(L_8, G_B5_0, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Color PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::ColorWithAlpha(UnityEngine.Color,System.Single)
extern "C" Color_t121  UnityGUITools_ColorWithAlpha_m6966 (Object_t * __this /* static, unused */, Color_t121  ___color, float ___alpha, const MethodInfo* method)
{
	{
		float L_0 = ((&___color)->___r_0);
		float L_1 = ((&___color)->___g_1);
		float L_2 = ((&___color)->___b_2);
		float L_3 = ___alpha;
		Color_t121  L_4 = {0};
		Color__ctor_m2626(&L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.FontStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::ApplyBold(UnityEngine.FontStyle)
extern "C" int32_t UnityGUITools_ApplyBold_m6967 (Object_t * __this /* static, unused */, int32_t ___fontStyle, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___fontStyle;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 3;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
	}

IL_000e:
	{
		return (int32_t)(G_B3_0);
	}
}
// UnityEngine.FontStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::ApplyItalic(UnityEngine.FontStyle)
extern "C" int32_t UnityGUITools_ApplyItalic_m6968 (Object_t * __this /* static, unused */, int32_t ___fontStyle, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___fontStyle;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 3;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 2;
	}

IL_000e:
	{
		return (int32_t)(G_B3_0);
	}
}
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.UnityGUITools::ApplyFormatting(PixelCrushers.DialogueSystem.FormattedText,UnityEngine.GUIStyle)
extern "C" GUIStyle_t303 * UnityGUITools_ApplyFormatting_m6969 (Object_t * __this /* static, unused */, FormattedText_t572 * ___formattingToApply, GUIStyle_t303 * ___guiStyle, const MethodInfo* method)
{
	{
		GUIStyle_t303 * L_0 = ___guiStyle;
		if (!L_0)
		{
			goto IL_00ab;
		}
	}
	{
		FormattedText_t572 * L_1 = ___formattingToApply;
		if (!L_1)
		{
			goto IL_00ab;
		}
	}
	{
		FormattedText_t572 * L_2 = ___formattingToApply;
		NullCheck(L_2);
		bool L_3 = FormattedText_get_italic_m2939(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		GUIStyle_t303 * L_4 = ___guiStyle;
		GUIStyle_t303 * L_5 = ___guiStyle;
		NullCheck(L_5);
		int32_t L_6 = GUIStyle_get_fontStyle_m7438(L_5, /*hidden argument*/NULL);
		int32_t L_7 = UnityGUITools_ApplyItalic_m6968(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		GUIStyle_set_fontStyle_m7439(L_4, L_7, /*hidden argument*/NULL);
	}

IL_0028:
	{
		FormattedText_t572 * L_8 = ___formattingToApply;
		NullCheck(L_8);
		EmphasisU5BU5D_t635* L_9 = FormattedText_get_emphases_m2818(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00ab;
		}
	}
	{
		FormattedText_t572 * L_10 = ___formattingToApply;
		NullCheck(L_10);
		EmphasisU5BU5D_t635* L_11 = FormattedText_get_emphases_m2818(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		if ((((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00ab;
		}
	}
	{
		GUIStyle_t303 * L_12 = ___guiStyle;
		NullCheck(L_12);
		GUIStyleState_t656 * L_13 = GUIStyle_get_normal_m2988(L_12, /*hidden argument*/NULL);
		FormattedText_t572 * L_14 = ___formattingToApply;
		NullCheck(L_14);
		EmphasisU5BU5D_t635* L_15 = FormattedText_get_emphases_m2818(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		Color_t121  L_16 = Emphasis_get_color_m2819(((Emphasis_t636 *)(Emphasis_t636 *)SZArrayLdElema(L_15, 0)), /*hidden argument*/NULL);
		NullCheck(L_13);
		GUIStyleState_set_textColor_m2989(L_13, L_16, /*hidden argument*/NULL);
		FormattedText_t572 * L_17 = ___formattingToApply;
		NullCheck(L_17);
		EmphasisU5BU5D_t635* L_18 = FormattedText_get_emphases_m2818(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		bool L_19 = Emphasis_get_bold_m5908(((Emphasis_t636 *)(Emphasis_t636 *)SZArrayLdElema(L_18, 0)), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		GUIStyle_t303 * L_20 = ___guiStyle;
		GUIStyle_t303 * L_21 = ___guiStyle;
		NullCheck(L_21);
		int32_t L_22 = GUIStyle_get_fontStyle_m7438(L_21, /*hidden argument*/NULL);
		int32_t L_23 = UnityGUITools_ApplyBold_m6967(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		GUIStyle_set_fontStyle_m7439(L_20, L_23, /*hidden argument*/NULL);
	}

IL_0084:
	{
		FormattedText_t572 * L_24 = ___formattingToApply;
		NullCheck(L_24);
		EmphasisU5BU5D_t635* L_25 = FormattedText_get_emphases_m2818(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		bool L_26 = Emphasis_get_italic_m5910(((Emphasis_t636 *)(Emphasis_t636 *)SZArrayLdElema(L_25, 0)), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00ab;
		}
	}
	{
		GUIStyle_t303 * L_27 = ___guiStyle;
		GUIStyle_t303 * L_28 = ___guiStyle;
		NullCheck(L_28);
		int32_t L_29 = GUIStyle_get_fontStyle_m7438(L_28, /*hidden argument*/NULL);
		int32_t L_30 = UnityGUITools_ApplyItalic_m6968(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		NullCheck(L_27);
		GUIStyle_set_fontStyle_m7439(L_27, L_30, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		GUIStyle_t303 * L_31 = ___guiStyle;
		return L_31;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityBa.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityBaMethodDeclarations.h"

// PixelCrushers.DialogueSystem.BarkSubtitleSetting
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkSubtitleSett.h"
// PixelCrushers.DialogueSystem.DisplaySettings
#include "DialogueSystem_PixelCrushers_DialogueSystem_DisplaySettings.h"
// PixelCrushers.DialogueSystem.DisplaySettings/SubtitleSettings
#include "DialogueSystem_PixelCrushers_DialogueSystem_DisplaySettings_.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityBa_1.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityBa_1MethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
struct Component_t462;
struct UnityBarkUIOnGUI_t1380;
// Declaration !!0 UnityEngine.Component::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI>()
// !!0 UnityEngine.Component::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI>()
#define Component_GetComponent_TisUnityBarkUIOnGUI_t1380_m7440(__this, method) (( UnityBarkUIOnGUI_t1380 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)
struct GameObject_t49;
struct UnityBarkUIOnGUI_t1380;
// Declaration !!0 UnityEngine.GameObject::AddComponent<PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI>()
// !!0 UnityEngine.GameObject::AddComponent<PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI>()
#define GameObject_AddComponent_TisUnityBarkUIOnGUI_t1380_m7441(__this, method) (( UnityBarkUIOnGUI_t1380 * (*) (GameObject_t49 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m2825_gshared)(__this, method)
struct Component_t462;
struct Collider_t194;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
#define Component_GetComponent_TisCollider_t194_m3115(__this, method) (( Collider_t194 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::.ctor()
extern "C" void UnityBarkUI__ctor_m6970 (UnityBarkUI_t1381 * __this, const MethodInfo* method)
{
	{
		__this->___duration_6 = (4.0f);
		__this->___fadeDuration_7 = (0.5f);
		__this->___textStyle_8 = 1;
		Color_t121  L_0 = Color_get_black_m2971(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___textStyleColor_9 = L_0;
		__this->___checkIfPlayerVisible_12 = 1;
		LayerMask_t87  L_1 = LayerMask_op_Implicit_m2533(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		__this->___visibilityLayerMask_13 = L_1;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::get_showText()
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" bool UnityBarkUI_get_showText_m6971 (UnityBarkUI_t1381 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = (__this->___textDisplaySetting_10);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_1 = (__this->___textDisplaySetting_10);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DisplaySettings_t626 * L_2 = DialogueManager_get_DisplaySettings_m2781(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		SubtitleSettings_t627 * L_3 = (L_2->___subtitleSettings_2);
		NullCheck(L_3);
		bool L_4 = (L_3->___showNPCSubtitlesDuringLine_0);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 0;
	}

IL_0029:
	{
		G_B6_0 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
	}

IL_002c:
	{
		return G_B6_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::Awake()
extern "C" void UnityBarkUI_Awake_m6972 (UnityBarkUI_t1381 * __this, const MethodInfo* method)
{
	{
		UnityBarkUI_CheckUnityBarkUIOnGUI_m6974(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::OnDestroy()
extern "C" void UnityBarkUI_OnDestroy_m6973 (UnityBarkUI_t1381 * __this, const MethodInfo* method)
{
	{
		UnityBarkUIOnGUI_t1380 * L_0 = (__this->___unityBarkUIOnGUI_14);
		Object_Destroy_m2754(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___unityBarkUIOnGUI_14 = (UnityBarkUIOnGUI_t1380 *)NULL;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::CheckUnityBarkUIOnGUI()
extern const MethodInfo* Component_GetComponent_TisUnityBarkUIOnGUI_t1380_m7440_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisUnityBarkUIOnGUI_t1380_m7441_MethodInfo_var;
extern "C" void UnityBarkUI_CheckUnityBarkUIOnGUI_m6974 (UnityBarkUI_t1381 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisUnityBarkUIOnGUI_t1380_m7440_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484442);
		GameObject_AddComponent_TisUnityBarkUIOnGUI_t1380_m7441_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484443);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityBarkUIOnGUI_t1380 * L_0 = (__this->___unityBarkUIOnGUI_14);
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		UnityBarkUIOnGUI_t1380 * L_2 = Component_GetComponent_TisUnityBarkUIOnGUI_t1380_m7440(__this, /*hidden argument*/Component_GetComponent_TisUnityBarkUIOnGUI_t1380_m7440_MethodInfo_var);
		__this->___unityBarkUIOnGUI_14 = L_2;
		UnityBarkUIOnGUI_t1380 * L_3 = (__this->___unityBarkUIOnGUI_14);
		bool L_4 = Object_op_Equality_m2464(NULL /*static, unused*/, L_3, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		GameObject_t49 * L_5 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityBarkUIOnGUI_t1380 * L_6 = GameObject_AddComponent_TisUnityBarkUIOnGUI_t1380_m7441(L_5, /*hidden argument*/GameObject_AddComponent_TisUnityBarkUIOnGUI_t1380_m7441_MethodInfo_var);
		__this->___unityBarkUIOnGUI_14 = L_6;
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::get_IsPlaying()
extern "C" bool UnityBarkUI_get_IsPlaying_m6975 (UnityBarkUI_t1381 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___secondsLeft_17);
		return ((((float)L_0) > ((float)(0.0f)))? 1 : 0);
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::Bark(PixelCrushers.DialogueSystem.Subtitle)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern "C" void UnityBarkUI_Bark_m6976 (UnityBarkUI_t1381 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = UnityBarkUI_get_showText_m6971(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00a8;
		}
	}
	{
		Subtitle_t570 * L_1 = ___subtitle;
		if (!L_1)
		{
			goto IL_00a8;
		}
	}
	{
		Subtitle_t570 * L_2 = ___subtitle;
		NullCheck(L_2);
		FormattedText_t572 * L_3 = (L_2->___formattedText_2);
		NullCheck(L_3);
		String_t* L_4 = FormattedText_get_text_m2782(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_00a8;
		}
	}
	{
		Camera_t356 * L_6 = Camera_get_main_m2548(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_7 = Object_op_Equality_m2464(NULL /*static, unused*/, L_6, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_8 = DialogueDebug_get_LogWarnings_m2766(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2767(NULL /*static, unused*/, (String_t*) &_stringLiteral1393, (String_t*) &_stringLiteral104, /*hidden argument*/NULL);
		Debug_LogWarning_m2768(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_0054:
	{
		UnityBarkUI_CheckUnityBarkUIOnGUI_m6974(__this, /*hidden argument*/NULL);
		UnityBarkUIOnGUI_t1380 * L_10 = (__this->___unityBarkUIOnGUI_14);
		Subtitle_t570 * L_11 = ___subtitle;
		float L_12 = (__this->___duration_6);
		GUISkin_t197 * L_13 = (__this->___guiSkin_3);
		String_t* L_14 = (__this->___guiStyleName_4);
		int32_t L_15 = (__this->___textStyle_8);
		Color_t121  L_16 = (__this->___textStyleColor_9);
		bool L_17 = (__this->___includeName_5);
		Transform_t54 * L_18 = (__this->___textPosition_2);
		NullCheck(L_10);
		VirtActionInvoker8< Subtitle_t570 *, float, GUISkin_t197 *, String_t*, int32_t, Color_t121 , bool, Transform_t54 * >::Invoke(7 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::Show(PixelCrushers.DialogueSystem.Subtitle,System.Single,UnityEngine.GUISkin,System.String,PixelCrushers.DialogueSystem.UnityGUI.TextStyle,UnityEngine.Color,System.Boolean,UnityEngine.Transform) */, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18);
		UnityBarkUI_CheckPlayerCameraTransform_m6981(__this, /*hidden argument*/NULL);
		MonoBehaviour_StopAllCoroutines_m2853(__this, /*hidden argument*/NULL);
		float L_19 = (__this->___duration_6);
		__this->___secondsLeft_17 = L_19;
	}

IL_00a8:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::Update()
extern "C" void UnityBarkUI_Update_m6977 (UnityBarkUI_t1381 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___secondsLeft_17);
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		float L_1 = (__this->___secondsLeft_17);
		float L_2 = Time_get_deltaTime_m2446(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___secondsLeft_17 = ((float)((float)L_1-(float)L_2));
		bool L_3 = (__this->___checkIfPlayerVisible_12);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		UnityBarkUI_CheckPlayerVisibility_m6980(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		float L_4 = (__this->___secondsLeft_17);
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		bool L_5 = (__this->___waitUntilSequenceEnds_11);
		if (L_5)
		{
			goto IL_0054;
		}
	}
	{
		UnityBarkUI_Hide_m6979(__this, /*hidden argument*/NULL);
	}

IL_0054:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::OnBarkEnd(UnityEngine.Transform)
extern "C" void UnityBarkUI_OnBarkEnd_m6978 (UnityBarkUI_t1381 * __this, Transform_t54 * ___actor, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___waitUntilSequenceEnds_11);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityBarkUI_Hide_m6979(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::Hide()
extern "C" void UnityBarkUI_Hide_m6979 (UnityBarkUI_t1381 * __this, const MethodInfo* method)
{
	{
		UnityBarkUIOnGUI_t1380 * L_0 = (__this->___unityBarkUIOnGUI_14);
		NullCheck(L_0);
		bool L_1 = Behaviour_get_enabled_m2552(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		UnityBarkUIOnGUI_t1380 * L_2 = (__this->___unityBarkUIOnGUI_14);
		float L_3 = (__this->___fadeDuration_7);
		NullCheck(L_2);
		Object_t * L_4 = UnityBarkUIOnGUI_FadeOut_m6997(L_2, L_3, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2547(__this, L_4, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::CheckPlayerVisibility()
extern "C" void UnityBarkUI_CheckPlayerVisibility_m6980 (UnityBarkUI_t1381 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	RaycastHit_t318  V_1 = {0};
	{
		UnityBarkUI_CheckPlayerCameraTransform_m6981(__this, /*hidden argument*/NULL);
		V_0 = 1;
		Transform_t54 * L_0 = (__this->___playerCameraTransform_15);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		UnityBarkUIOnGUI_t1380 * L_2 = (__this->___unityBarkUIOnGUI_14);
		NullCheck(L_2);
		Vector3_t53  L_3 = UnityBarkUIOnGUI_get_BarkPosition_m6990(L_2, /*hidden argument*/NULL);
		Transform_t54 * L_4 = (__this->___playerCameraTransform_15);
		NullCheck(L_4);
		Vector3_t53  L_5 = Transform_get_position_m2459(L_4, /*hidden argument*/NULL);
		LayerMask_t87  L_6 = (__this->___visibilityLayerMask_13);
		int32_t L_7 = LayerMask_op_Implicit_m2561(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		bool L_8 = Physics_Linecast_m7442(NULL /*static, unused*/, L_3, L_5, (&V_1), L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		Collider_t194 * L_9 = RaycastHit_get_collider_m2710((&V_1), /*hidden argument*/NULL);
		Collider_t194 * L_10 = (__this->___playerCameraCollider_16);
		bool L_11 = Object_op_Equality_m2464(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0059:
	{
		UnityBarkUIOnGUI_t1380 * L_12 = (__this->___unityBarkUIOnGUI_14);
		bool L_13 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_12, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00b3;
		}
	}
	{
		UnityBarkUIOnGUI_t1380 * L_14 = (__this->___unityBarkUIOnGUI_14);
		NullCheck(L_14);
		bool L_15 = Behaviour_get_enabled_m2552(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0091;
		}
	}
	{
		bool L_16 = V_0;
		if (L_16)
		{
			goto IL_0091;
		}
	}
	{
		UnityBarkUIOnGUI_t1380 * L_17 = (__this->___unityBarkUIOnGUI_14);
		NullCheck(L_17);
		Behaviour_set_enabled_m2780(L_17, 0, /*hidden argument*/NULL);
		goto IL_00b3;
	}

IL_0091:
	{
		UnityBarkUIOnGUI_t1380 * L_18 = (__this->___unityBarkUIOnGUI_14);
		NullCheck(L_18);
		bool L_19 = Behaviour_get_enabled_m2552(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00b3;
		}
	}
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_00b3;
		}
	}
	{
		UnityBarkUIOnGUI_t1380 * L_21 = (__this->___unityBarkUIOnGUI_14);
		NullCheck(L_21);
		Behaviour_set_enabled_m2780(L_21, 1, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUI::CheckPlayerCameraTransform()
extern const MethodInfo* Component_GetComponent_TisCollider_t194_m3115_MethodInfo_var;
extern "C" void UnityBarkUI_CheckPlayerCameraTransform_m6981 (UnityBarkUI_t1381 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCollider_t194_m3115_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483804);
		s_Il2CppMethodIntialized = true;
	}
	UnityBarkUI_t1381 * G_B4_0 = {0};
	UnityBarkUI_t1381 * G_B3_0 = {0};
	Collider_t194 * G_B5_0 = {0};
	UnityBarkUI_t1381 * G_B5_1 = {0};
	{
		Transform_t54 * L_0 = (__this->___playerCameraTransform_15);
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		Camera_t356 * L_2 = Camera_get_main_m2548(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_3 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		Camera_t356 * L_4 = Camera_get_main_m2548(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t54 * L_5 = Component_get_transform_m2421(L_4, /*hidden argument*/NULL);
		__this->___playerCameraTransform_15 = L_5;
		Transform_t54 * L_6 = (__this->___playerCameraTransform_15);
		bool L_7 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_6, (Object_t584 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = __this;
		if (!L_7)
		{
			G_B4_0 = __this;
			goto IL_0053;
		}
	}
	{
		Transform_t54 * L_8 = (__this->___playerCameraTransform_15);
		NullCheck(L_8);
		Collider_t194 * L_9 = Component_GetComponent_TisCollider_t194_m3115(L_8, /*hidden argument*/Component_GetComponent_TisCollider_t194_m3115_MethodInfo_var);
		G_B5_0 = L_9;
		G_B5_1 = G_B3_0;
		goto IL_0054;
	}

IL_0053:
	{
		G_B5_0 = ((Collider_t194 *)(NULL));
		G_B5_1 = G_B4_0;
	}

IL_0054:
	{
		NullCheck(G_B5_1);
		G_B5_1->___playerCameraCollider_16 = G_B5_0;
	}

IL_0059:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI/<FadeOut>c__Iterator1D
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityBa_0.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI/<FadeOut>c__Iterator1D
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityBa_0MethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI/<FadeOut>c__Iterator1D::.ctor()
extern "C" void U3CFadeOutU3Ec__Iterator1D__ctor_m6982 (U3CFadeOutU3Ec__Iterator1D_t1382 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI/<FadeOut>c__Iterator1D::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CFadeOutU3Ec__Iterator1D_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m6983 (U3CFadeOutU3Ec__Iterator1D_t1382 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_5);
		return L_0;
	}
}
// System.Object PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI/<FadeOut>c__Iterator1D::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CFadeOutU3Ec__Iterator1D_System_Collections_IEnumerator_get_Current_m6984 (U3CFadeOutU3Ec__Iterator1D_t1382 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_5);
		return L_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI/<FadeOut>c__Iterator1D::MoveNext()
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern "C" bool U3CFadeOutU3Ec__Iterator1D_MoveNext_m6985 (U3CFadeOutU3Ec__Iterator1D_t1382 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_4);
		V_0 = L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0096;
		}
	}
	{
		goto IL_00b9;
	}

IL_0021:
	{
		float L_2 = Time_get_time_m2414(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CstartTimeU3E__0_0 = L_2;
		float L_3 = (__this->___U3CstartTimeU3E__0_0);
		float L_4 = (__this->___fadeDuration_1);
		__this->___U3CendTimeU3E__1_2 = ((float)((float)L_3+(float)L_4));
		goto IL_0096;
	}

IL_0044:
	{
		float L_5 = Time_get_time_m2414(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = (__this->___U3CstartTimeU3E__0_0);
		__this->___U3CelapsedU3E__2_3 = ((float)((float)L_5-(float)L_6));
		UnityBarkUIOnGUI_t1380 * L_7 = (__this->___U3CU3Ef__this_7);
		float L_8 = (__this->___U3CelapsedU3E__2_3);
		float L_9 = (__this->___fadeDuration_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Clamp_m2467(NULL /*static, unused*/, ((float)((float)L_8/(float)L_9)), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->___alpha_12 = ((float)((float)(1.0f)-(float)L_10));
		__this->___U24current_5 = NULL;
		__this->___U24PC_4 = 1;
		goto IL_00bb;
	}

IL_0096:
	{
		float L_11 = Time_get_time_m2414(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = (__this->___U3CendTimeU3E__1_2);
		if ((((float)L_11) < ((float)L_12)))
		{
			goto IL_0044;
		}
	}
	{
		UnityBarkUIOnGUI_t1380 * L_13 = (__this->___U3CU3Ef__this_7);
		NullCheck(L_13);
		Behaviour_set_enabled_m2780(L_13, 0, /*hidden argument*/NULL);
		__this->___U24PC_4 = (-1);
	}

IL_00b9:
	{
		return 0;
	}

IL_00bb:
	{
		return 1;
	}
	// Dead block : IL_00bd: ldloc.1
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI/<FadeOut>c__Iterator1D::Dispose()
extern "C" void U3CFadeOutU3Ec__Iterator1D_Dispose_m6986 (U3CFadeOutU3Ec__Iterator1D_t1382 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_4 = (-1);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI/<FadeOut>c__Iterator1D::Reset()
extern TypeInfo* NotSupportedException_t592_il2cpp_TypeInfo_var;
extern "C" void U3CFadeOutU3Ec__Iterator1D_Reset_m6987 (U3CFadeOutU3Ec__Iterator1D_t1382 * __this, const MethodInfo* method)
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

// UnityEngine.CharacterController
#include "UnityEngine_UnityEngine_CharacterController.h"
// UnityEngine.CapsuleCollider
#include "UnityEngine_UnityEngine_CapsuleCollider.h"
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxCollider.h"
// UnityEngine.SphereCollider
#include "UnityEngine_UnityEngine_SphereCollider.h"
// UnityEngine.CharacterController
#include "UnityEngine_UnityEngine_CharacterControllerMethodDeclarations.h"
// UnityEngine.CapsuleCollider
#include "UnityEngine_UnityEngine_CapsuleColliderMethodDeclarations.h"
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxColliderMethodDeclarations.h"
// UnityEngine.SphereCollider
#include "UnityEngine_UnityEngine_SphereColliderMethodDeclarations.h"
// PixelCrushers.DialogueSystem.CharacterInfo
#include "DialogueSystem_PixelCrushers_DialogueSystem_CharacterInfoMethodDeclarations.h"
struct Component_t462;
struct CharacterController_t321;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
#define Component_GetComponent_TisCharacterController_t321_m3017(__this, method) (( CharacterController_t321 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)
struct Component_t462;
struct CapsuleCollider_t1448;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
#define Component_GetComponent_TisCapsuleCollider_t1448_m7443(__this, method) (( CapsuleCollider_t1448 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)
struct Component_t462;
struct BoxCollider_t1449;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
#define Component_GetComponent_TisBoxCollider_t1449_m7444(__this, method) (( BoxCollider_t1449 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)
struct Component_t462;
struct SphereCollider_t1450;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.SphereCollider>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SphereCollider>()
#define Component_GetComponent_TisSphereCollider_t1450_m7445(__this, method) (( SphereCollider_t1450 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::.ctor()
extern "C" void UnityBarkUIOnGUI__ctor_m6988 (UnityBarkUIOnGUI_t1380 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = Vector3_get_zero_m2454(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___offset_2 = L_0;
		Color_t121  L_1 = Color_get_black_m2971(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___textStyleColor_9 = L_1;
		__this->___alpha_12 = (1.0f);
		Vector3_t53  L_2 = Vector3_get_zero_m2454(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___offsetToHead_15 = L_2;
		Vector3_t53  L_3 = Vector3_get_zero_m2454(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___screenPos_16 = L_3;
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::get_IsPlaying()
extern "C" bool UnityBarkUIOnGUI_get_IsPlaying_m6989 (UnityBarkUIOnGUI_t1380 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m2552(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::get_BarkPosition()
extern "C" Vector3_t53  UnityBarkUIOnGUI_get_BarkPosition_m6990 (UnityBarkUIOnGUI_t1380 * __this, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = (__this->___U3CBarkPositionU3Ek__BackingField_17);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::set_BarkPosition(UnityEngine.Vector3)
extern "C" void UnityBarkUIOnGUI_set_BarkPosition_m6991 (UnityBarkUIOnGUI_t1380 * __this, Vector3_t53  ___value, const MethodInfo* method)
{
	{
		Vector3_t53  L_0 = ___value;
		__this->___U3CBarkPositionU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::Awake()
extern "C" void UnityBarkUIOnGUI_Awake_m6992 (UnityBarkUIOnGUI_t1380 * __this, const MethodInfo* method)
{
	{
		Transform_t54 * L_0 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		__this->___myTransform_13 = L_0;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::Start()
extern "C" void UnityBarkUIOnGUI_Start_m6993 (UnityBarkUIOnGUI_t1380 * __this, const MethodInfo* method)
{
	{
		UnityBarkUIOnGUI_ComputeOffsetToHead_m6994(__this, /*hidden argument*/NULL);
		Behaviour_set_enabled_m2780(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::ComputeOffsetToHead()
extern const MethodInfo* Component_GetComponent_TisCharacterController_t321_m3017_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCapsuleCollider_t1448_m7443_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisBoxCollider_t1449_m7444_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisSphereCollider_t1450_m7445_MethodInfo_var;
extern "C" void UnityBarkUIOnGUI_ComputeOffsetToHead_m6994 (UnityBarkUIOnGUI_t1380 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCharacterController_t321_m3017_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483785);
		Component_GetComponent_TisCapsuleCollider_t1448_m7443_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484444);
		Component_GetComponent_TisBoxCollider_t1449_m7444_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484445);
		Component_GetComponent_TisSphereCollider_t1450_m7445_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484446);
		s_Il2CppMethodIntialized = true;
	}
	CharacterController_t321 * V_0 = {0};
	CapsuleCollider_t1448 * V_1 = {0};
	BoxCollider_t1449 * V_2 = {0};
	SphereCollider_t1450 * V_3 = {0};
	Vector3_t53  V_4 = {0};
	Vector3_t53  V_5 = {0};
	Vector3_t53  V_6 = {0};
	{
		CharacterController_t321 * L_0 = Component_GetComponent_TisCharacterController_t321_m3017(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_t321_m3017_MethodInfo_var);
		V_0 = L_0;
		CharacterController_t321 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		CharacterController_t321 * L_3 = V_0;
		NullCheck(L_3);
		float L_4 = CharacterController_get_height_m7360(L_3, /*hidden argument*/NULL);
		Vector3_t53  L_5 = {0};
		Vector3__ctor_m2422(&L_5, (0.0f), L_4, (0.0f), /*hidden argument*/NULL);
		__this->___offsetToHead_15 = L_5;
		goto IL_0100;
	}

IL_0033:
	{
		CapsuleCollider_t1448 * L_6 = Component_GetComponent_TisCapsuleCollider_t1448_m7443(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t1448_m7443_MethodInfo_var);
		V_1 = L_6;
		CapsuleCollider_t1448 * L_7 = V_1;
		bool L_8 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_7, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		CapsuleCollider_t1448 * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = CapsuleCollider_get_height_m7361(L_9, /*hidden argument*/NULL);
		Vector3_t53  L_11 = {0};
		Vector3__ctor_m2422(&L_11, (0.0f), L_10, (0.0f), /*hidden argument*/NULL);
		__this->___offsetToHead_15 = L_11;
		goto IL_0100;
	}

IL_0066:
	{
		BoxCollider_t1449 * L_12 = Component_GetComponent_TisBoxCollider_t1449_m7444(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t1449_m7444_MethodInfo_var);
		V_2 = L_12;
		BoxCollider_t1449 * L_13 = V_2;
		bool L_14 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_13, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00b2;
		}
	}
	{
		BoxCollider_t1449 * L_15 = V_2;
		NullCheck(L_15);
		Vector3_t53  L_16 = BoxCollider_get_center_m7362(L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		float L_17 = ((&V_4)->___y_2);
		BoxCollider_t1449 * L_18 = V_2;
		NullCheck(L_18);
		Vector3_t53  L_19 = BoxCollider_get_size_m7363(L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		float L_20 = ((&V_5)->___y_2);
		Vector3_t53  L_21 = {0};
		Vector3__ctor_m2422(&L_21, (0.0f), ((float)((float)L_17+(float)L_20)), (0.0f), /*hidden argument*/NULL);
		__this->___offsetToHead_15 = L_21;
		goto IL_0100;
	}

IL_00b2:
	{
		SphereCollider_t1450 * L_22 = Component_GetComponent_TisSphereCollider_t1450_m7445(__this, /*hidden argument*/Component_GetComponent_TisSphereCollider_t1450_m7445_MethodInfo_var);
		V_3 = L_22;
		SphereCollider_t1450 * L_23 = V_3;
		bool L_24 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_23, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00f5;
		}
	}
	{
		SphereCollider_t1450 * L_25 = V_3;
		NullCheck(L_25);
		Vector3_t53  L_26 = SphereCollider_get_center_m7364(L_25, /*hidden argument*/NULL);
		V_6 = L_26;
		float L_27 = ((&V_6)->___y_2);
		SphereCollider_t1450 * L_28 = V_3;
		NullCheck(L_28);
		float L_29 = SphereCollider_get_radius_m7365(L_28, /*hidden argument*/NULL);
		Vector3_t53  L_30 = {0};
		Vector3__ctor_m2422(&L_30, (0.0f), ((float)((float)L_27+(float)L_29)), (0.0f), /*hidden argument*/NULL);
		__this->___offsetToHead_15 = L_30;
		goto IL_0100;
	}

IL_00f5:
	{
		Vector3_t53  L_31 = Vector3_get_zero_m2454(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___offsetToHead_15 = L_31;
	}

IL_0100:
	{
		Vector3_t53  L_32 = (__this->___offsetToHead_15);
		Vector3_t53  L_33 = (__this->___offset_2);
		Vector3_t53  L_34 = Vector3_op_Addition_m2448(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		__this->___offsetToHead_15 = L_34;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::Show(PixelCrushers.DialogueSystem.Subtitle,System.Single,UnityEngine.GUISkin,System.String,PixelCrushers.DialogueSystem.UnityGUI.TextStyle,System.Boolean,UnityEngine.Transform)
extern "C" void UnityBarkUIOnGUI_Show_m6995 (UnityBarkUIOnGUI_t1380 * __this, Subtitle_t570 * ___subtitle, float ___duration, GUISkin_t197 * ___guiSkin, String_t* ___guiStyleName, int32_t ___textStyle, bool ___includeName, Transform_t54 * ___textPosition, const MethodInfo* method)
{
	{
		Subtitle_t570 * L_0 = ___subtitle;
		float L_1 = ___duration;
		GUISkin_t197 * L_2 = ___guiSkin;
		String_t* L_3 = ___guiStyleName;
		int32_t L_4 = ___textStyle;
		Color_t121  L_5 = Color_get_black_m2971(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_6 = ___includeName;
		Transform_t54 * L_7 = ___textPosition;
		VirtActionInvoker8< Subtitle_t570 *, float, GUISkin_t197 *, String_t*, int32_t, Color_t121 , bool, Transform_t54 * >::Invoke(7 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::Show(PixelCrushers.DialogueSystem.Subtitle,System.Single,UnityEngine.GUISkin,System.String,PixelCrushers.DialogueSystem.UnityGUI.TextStyle,UnityEngine.Color,System.Boolean,UnityEngine.Transform) */, __this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::Show(PixelCrushers.DialogueSystem.Subtitle,System.Single,UnityEngine.GUISkin,System.String,PixelCrushers.DialogueSystem.UnityGUI.TextStyle,UnityEngine.Color,System.Boolean,UnityEngine.Transform)
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void UnityBarkUIOnGUI_Show_m6996 (UnityBarkUIOnGUI_t1380 * __this, Subtitle_t570 * ___subtitle, float ___duration, GUISkin_t197 * ___guiSkin, String_t* ___guiStyleName, int32_t ___textStyle, Color_t121  ___textStyleColor, bool ___includeName, Transform_t54 * ___textPosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	UnityBarkUIOnGUI_t1380 * G_B2_0 = {0};
	UnityBarkUIOnGUI_t1380 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	UnityBarkUIOnGUI_t1380 * G_B3_1 = {0};
	{
		bool L_0 = ___includeName;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t21* L_1 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		Subtitle_t570 * L_2 = ___subtitle;
		NullCheck(L_2);
		CharacterInfo_t628 * L_3 = (L_2->___speakerInfo_0);
		NullCheck(L_3);
		String_t* L_4 = CharacterInfo_get_Name_m2783(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_4;
		ObjectU5BU5D_t21* L_5 = L_1;
		Subtitle_t570 * L_6 = ___subtitle;
		NullCheck(L_6);
		FormattedText_t572 * L_7 = (L_6->___formattedText_2);
		NullCheck(L_7);
		String_t* L_8 = FormattedText_get_text_m2782(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)L_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral110, L_5, /*hidden argument*/NULL);
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		goto IL_0044;
	}

IL_0039:
	{
		Subtitle_t570 * L_10 = ___subtitle;
		NullCheck(L_10);
		FormattedText_t572 * L_11 = (L_10->___formattedText_2);
		NullCheck(L_11);
		String_t* L_12 = FormattedText_get_text_m2782(L_11, /*hidden argument*/NULL);
		G_B3_0 = L_12;
		G_B3_1 = G_B2_0;
	}

IL_0044:
	{
		NullCheck(G_B3_1);
		G_B3_1->___message_11 = G_B3_0;
		Subtitle_t570 * L_13 = ___subtitle;
		NullCheck(L_13);
		FormattedText_t572 * L_14 = (L_13->___formattedText_2);
		__this->___formattingToApply_7 = L_14;
		GUISkin_t197 * L_15 = ___guiSkin;
		__this->___guiSkin_4 = L_15;
		String_t* L_16 = ___guiStyleName;
		__this->___guiStyleName_5 = L_16;
		__this->___guiStyle_6 = (GUIStyle_t303 *)NULL;
		int32_t L_17 = ___textStyle;
		__this->___textStyle_8 = L_17;
		Color_t121  L_18 = ___textStyleColor;
		__this->___textStyleColor_9 = L_18;
		__this->___alpha_12 = (1.0f);
		Transform_t54 * L_19 = ___textPosition;
		__this->___absolutePosition_14 = L_19;
		UnityBarkUIOnGUI_UpdateBarkPosition_m6999(__this, /*hidden argument*/NULL);
		Behaviour_set_enabled_m2780(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::FadeOut(System.Single)
extern TypeInfo* U3CFadeOutU3Ec__Iterator1D_t1382_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityBarkUIOnGUI_FadeOut_m6997 (UnityBarkUIOnGUI_t1380 * __this, float ___fadeDuration, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CFadeOutU3Ec__Iterator1D_t1382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2580);
		s_Il2CppMethodIntialized = true;
	}
	U3CFadeOutU3Ec__Iterator1D_t1382 * V_0 = {0};
	{
		U3CFadeOutU3Ec__Iterator1D_t1382 * L_0 = (U3CFadeOutU3Ec__Iterator1D_t1382 *)il2cpp_codegen_object_new (U3CFadeOutU3Ec__Iterator1D_t1382_il2cpp_TypeInfo_var);
		U3CFadeOutU3Ec__Iterator1D__ctor_m6982(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeOutU3Ec__Iterator1D_t1382 * L_1 = V_0;
		float L_2 = ___fadeDuration;
		NullCheck(L_1);
		L_1->___fadeDuration_1 = L_2;
		U3CFadeOutU3Ec__Iterator1D_t1382 * L_3 = V_0;
		float L_4 = ___fadeDuration;
		NullCheck(L_3);
		L_3->___U3CU24U3EfadeDuration_6 = L_4;
		U3CFadeOutU3Ec__Iterator1D_t1382 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_7 = __this;
		U3CFadeOutU3Ec__Iterator1D_t1382 * L_6 = V_0;
		return L_6;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::OnGUI()
extern TypeInfo* GUI_t587_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t303_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t542_il2cpp_TypeInfo_var;
extern "C" void UnityBarkUIOnGUI_OnGUI_m6998 (UnityBarkUIOnGUI_t1380 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		GUIStyle_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		GUIContent_t542_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t201  V_0 = {0};
	{
		GUISkin_t197 * L_0 = (__this->___guiSkin_4);
		GUISkin_t197 * L_1 = UnityGUITools_GetValidGUISkin_m2984(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUI_set_skin_m2727(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		GUIStyle_t303 * L_2 = (__this->___guiStyle_6);
		if (L_2)
		{
			goto IL_00c1;
		}
	}
	{
		FormattedText_t572 * L_3 = (__this->___formattingToApply_7);
		String_t* L_4 = (__this->___guiStyleName_5);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t587_il2cpp_TypeInfo_var);
		GUISkin_t197 * L_5 = GUI_get_skin_m2437(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		GUIStyle_t303 * L_6 = GUISkin_get_label_m2986(L_5, /*hidden argument*/NULL);
		GUIStyle_t303 * L_7 = UnityGUITools_GetGUIStyle_m2997(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		GUIStyle_t303 * L_8 = (GUIStyle_t303 *)il2cpp_codegen_object_new (GUIStyle_t303_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2987(L_8, L_7, /*hidden argument*/NULL);
		GUIStyle_t303 * L_9 = UnityGUITools_ApplyFormatting_m6969(NULL /*static, unused*/, L_3, L_8, /*hidden argument*/NULL);
		__this->___guiStyle_6 = L_9;
		GUIStyle_t303 * L_10 = (__this->___guiStyle_6);
		NullCheck(L_10);
		GUIStyle_set_alignment_m2439(L_10, 1, /*hidden argument*/NULL);
		GUIStyle_t303 * L_11 = (__this->___guiStyle_6);
		String_t* L_12 = (__this->___message_11);
		GUIContent_t542 * L_13 = (GUIContent_t542 *)il2cpp_codegen_object_new (GUIContent_t542_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2982(L_13, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector2_t97  L_14 = GUIStyle_CalcSize_m2983(L_11, L_13, /*hidden argument*/NULL);
		__this->___size_10 = L_14;
		float L_15 = (__this->___maxWidth_3);
		if ((!(((float)L_15) >= ((float)(1.0f)))))
		{
			goto IL_00c1;
		}
	}
	{
		Vector2_t97 * L_16 = &(__this->___size_10);
		float L_17 = (L_16->___x_1);
		float L_18 = (__this->___maxWidth_3);
		if ((!(((float)L_17) > ((float)L_18))))
		{
			goto IL_00c1;
		}
	}
	{
		float L_19 = (__this->___maxWidth_3);
		GUIStyle_t303 * L_20 = (__this->___guiStyle_6);
		String_t* L_21 = (__this->___message_11);
		GUIContent_t542 * L_22 = (GUIContent_t542 *)il2cpp_codegen_object_new (GUIContent_t542_il2cpp_TypeInfo_var);
		GUIContent__ctor_m2982(L_22, L_21, /*hidden argument*/NULL);
		float L_23 = (__this->___maxWidth_3);
		NullCheck(L_20);
		float L_24 = GUIStyle_CalcHeight_m7384(L_20, L_22, L_23, /*hidden argument*/NULL);
		Vector2_t97  L_25 = {0};
		Vector2__ctor_m2417(&L_25, L_19, L_24, /*hidden argument*/NULL);
		__this->___size_10 = L_25;
	}

IL_00c1:
	{
		UnityBarkUIOnGUI_UpdateBarkPosition_m6999(__this, /*hidden argument*/NULL);
		GUIStyle_t303 * L_26 = (__this->___guiStyle_6);
		NullCheck(L_26);
		GUIStyleState_t656 * L_27 = GUIStyle_get_normal_m2988(L_26, /*hidden argument*/NULL);
		GUIStyle_t303 * L_28 = (__this->___guiStyle_6);
		NullCheck(L_28);
		GUIStyleState_t656 * L_29 = GUIStyle_get_normal_m2988(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Color_t121  L_30 = GUIStyleState_get_textColor_m7437(L_29, /*hidden argument*/NULL);
		float L_31 = (__this->___alpha_12);
		Color_t121  L_32 = UnityGUITools_ColorWithAlpha_m6966(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_27);
		GUIStyleState_set_textColor_m2989(L_27, L_32, /*hidden argument*/NULL);
		Vector3_t53 * L_33 = &(__this->___screenPos_16);
		float L_34 = (L_33->___z_3);
		if ((!(((float)L_34) < ((float)(0.0f)))))
		{
			goto IL_0108;
		}
	}
	{
		return;
	}

IL_0108:
	{
		Vector3_t53 * L_35 = &(__this->___screenPos_16);
		float L_36 = (L_35->___x_1);
		Vector2_t97 * L_37 = &(__this->___size_10);
		float L_38 = (L_37->___x_1);
		int32_t L_39 = Screen_get_height_m2428(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53 * L_40 = &(__this->___screenPos_16);
		float L_41 = (L_40->___y_2);
		Vector2_t97 * L_42 = &(__this->___size_10);
		float L_43 = (L_42->___y_2);
		Vector2_t97 * L_44 = &(__this->___size_10);
		float L_45 = (L_44->___x_1);
		Vector2_t97 * L_46 = &(__this->___size_10);
		float L_47 = (L_46->___y_2);
		Rect__ctor_m2425((&V_0), ((float)((float)L_36-(float)((float)((float)L_38/(float)(2.0f))))), ((float)((float)((float)((float)(((float)L_39))-(float)L_41))-(float)((float)((float)L_43/(float)(2.0f))))), L_45, L_47, /*hidden argument*/NULL);
		Rect_t201  L_48 = V_0;
		String_t* L_49 = (__this->___message_11);
		GUIStyle_t303 * L_50 = (__this->___guiStyle_6);
		int32_t L_51 = (__this->___textStyle_8);
		Color_t121  L_52 = (__this->___textStyleColor_9);
		UnityGUITools_DrawText_m2981(NULL /*static, unused*/, L_48, L_49, L_50, L_51, L_52, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityBarkUIOnGUI::UpdateBarkPosition()
extern "C" void UnityBarkUIOnGUI_UpdateBarkPosition_m6999 (UnityBarkUIOnGUI_t1380 * __this, const MethodInfo* method)
{
	UnityBarkUIOnGUI_t1380 * G_B6_0 = {0};
	UnityBarkUIOnGUI_t1380 * G_B5_0 = {0};
	Vector3_t53  G_B7_0 = {0};
	UnityBarkUIOnGUI_t1380 * G_B7_1 = {0};
	{
		Camera_t356 * L_0 = Camera_get_main_m2548(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		Transform_t54 * L_2 = (__this->___myTransform_13);
		bool L_3 = Object_op_Equality_m2464(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Transform_t54 * L_4 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		__this->___myTransform_13 = L_4;
	}

IL_002e:
	{
		Transform_t54 * L_5 = (__this->___absolutePosition_14);
		bool L_6 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_5, (Object_t584 *)NULL, /*hidden argument*/NULL);
		G_B5_0 = __this;
		if (!L_6)
		{
			G_B6_0 = __this;
			goto IL_005b;
		}
	}
	{
		Transform_t54 * L_7 = (__this->___absolutePosition_14);
		NullCheck(L_7);
		Vector3_t53  L_8 = Transform_get_position_m2459(L_7, /*hidden argument*/NULL);
		Vector3_t53  L_9 = (__this->___offset_2);
		Vector3_t53  L_10 = Vector3_op_Addition_m2448(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		G_B7_0 = L_10;
		G_B7_1 = G_B5_0;
		goto IL_0071;
	}

IL_005b:
	{
		Transform_t54 * L_11 = (__this->___myTransform_13);
		NullCheck(L_11);
		Vector3_t53  L_12 = Transform_get_position_m2459(L_11, /*hidden argument*/NULL);
		Vector3_t53  L_13 = (__this->___offsetToHead_15);
		Vector3_t53  L_14 = Vector3_op_Addition_m2448(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		G_B7_0 = L_14;
		G_B7_1 = G_B6_0;
	}

IL_0071:
	{
		NullCheck(G_B7_1);
		UnityBarkUIOnGUI_set_BarkPosition_m6991(G_B7_1, G_B7_0, /*hidden argument*/NULL);
		Camera_t356 * L_15 = Camera_get_main_m2548(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t53  L_16 = UnityBarkUIOnGUI_get_BarkPosition_m6990(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t53  L_17 = Camera_WorldToScreenPoint_m3016(L_15, L_16, /*hidden argument*/NULL);
		__this->___screenPos_16 = L_17;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityDiMethodDeclarations.h"

// PixelCrushers.DialogueSystem.AbstractUIRoot
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUIRoot.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityUIRoot
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityUI.h"
// PixelCrushers.DialogueSystem.AbstractDialogueUIControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractDialogue.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityDi_0.h"
// PixelCrushers.DialogueSystem.AbstractUIQTEControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUIQTECon.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityQTEControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityQT.h"
// PixelCrushers.DialogueSystem.AbstractUIAlertControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUIAlertC.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityAlertControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityAl.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnitySu.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityRe.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityUIRoot
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityUIMethodDeclarations.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityQTEControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityQTMethodDeclarations.h"
struct Component_t462;
struct GUIRoot_t1265;
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<PixelCrushers.DialogueSystem.UnityGUI.GUIRoot>()
// !!0 UnityEngine.Component::GetComponentInChildren<PixelCrushers.DialogueSystem.UnityGUI.GUIRoot>()
#define Component_GetComponentInChildren_TisGUIRoot_t1265_m7381(__this, method) (( GUIRoot_t1265 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m2599_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI::.ctor()
extern "C" void UnityDialogueUI__ctor_m7000 (UnityDialogueUI_t1362 * __this, const MethodInfo* method)
{
	{
		AbstractDialogueUI__ctor_m2805(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.AbstractUIRoot PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI::get_UIRoot()
extern "C" AbstractUIRoot_t245 * UnityDialogueUI_get_UIRoot_m7001 (UnityDialogueUI_t1362 * __this, const MethodInfo* method)
{
	{
		UnityUIRoot_t1385 * L_0 = (__this->___unityUIRoot_8);
		return L_0;
	}
}
// PixelCrushers.DialogueSystem.AbstractDialogueUIControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI::get_Dialogue()
extern "C" AbstractDialogueUIControls_t229 * UnityDialogueUI_get_Dialogue_m7002 (UnityDialogueUI_t1362 * __this, const MethodInfo* method)
{
	{
		UnityDialogueControls_t1383 * L_0 = (__this->___dialogue_5);
		return L_0;
	}
}
// PixelCrushers.DialogueSystem.AbstractUIQTEControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI::get_QTEs()
extern "C" AbstractUIQTEControls_t234 * UnityDialogueUI_get_QTEs_m7003 (UnityDialogueUI_t1362 * __this, const MethodInfo* method)
{
	{
		UnityQTEControls_t1386 * L_0 = (__this->___unityQTEControls_9);
		return L_0;
	}
}
// PixelCrushers.DialogueSystem.AbstractUIAlertControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI::get_Alert()
extern "C" AbstractUIAlertControls_t221 * UnityDialogueUI_get_Alert_m7004 (UnityDialogueUI_t1362 * __this, const MethodInfo* method)
{
	{
		UnityAlertControls_t1384 * L_0 = (__this->___alert_7);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI::Awake()
extern "C" void UnityDialogueUI_Awake_m7005 (UnityDialogueUI_t1362 * __this, const MethodInfo* method)
{
	{
		AbstractDialogueUI_Awake_m2806(__this, /*hidden argument*/NULL);
		UnityDialogueUI_FindControls_m7006(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI::FindControls()
extern TypeInfo* UnityUIRoot_t1385_il2cpp_TypeInfo_var;
extern TypeInfo* UnityQTEControls_t1386_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueDebug_t624_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisGUIRoot_t1265_m7381_MethodInfo_var;
extern "C" void UnityDialogueUI_FindControls_m7006 (UnityDialogueUI_t1362 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityUIRoot_t1385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2581);
		UnityQTEControls_t1386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2582);
		DialogueDebug_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Component_GetComponentInChildren_TisGUIRoot_t1265_m7381_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484419);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIRoot_t1265 * L_0 = (__this->___guiRoot_4);
		bool L_1 = Object_op_Equality_m2464(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GUIRoot_t1265 * L_2 = Component_GetComponentInChildren_TisGUIRoot_t1265_m7381(__this, /*hidden argument*/Component_GetComponentInChildren_TisGUIRoot_t1265_m7381_MethodInfo_var);
		__this->___guiRoot_4 = L_2;
	}

IL_001d:
	{
		GUIRoot_t1265 * L_3 = (__this->___guiRoot_4);
		UnityUIRoot_t1385 * L_4 = (UnityUIRoot_t1385 *)il2cpp_codegen_object_new (UnityUIRoot_t1385_il2cpp_TypeInfo_var);
		UnityUIRoot__ctor_m7059(L_4, L_3, /*hidden argument*/NULL);
		__this->___unityUIRoot_8 = L_4;
		GUIControlU5BU5D_t1378* L_5 = (__this->___qteIndicators_6);
		UnityQTEControls_t1386 * L_6 = (UnityQTEControls_t1386 *)il2cpp_codegen_object_new (UnityQTEControls_t1386_il2cpp_TypeInfo_var);
		UnityQTEControls__ctor_m7034(L_6, L_5, /*hidden argument*/NULL);
		__this->___unityQTEControls_9 = L_6;
		UnityDialogueControls_t1383 * L_7 = (__this->___dialogue_5);
		NullCheck(L_7);
		UnitySubtitleControls_t1388 * L_8 = (L_7->___npcSubtitle_1);
		NullCheck(L_8);
		GUIButton_t1263 * L_9 = (L_8->___continueButton_5);
		UnityDialogueUI_SetupContinueButton_m7007(__this, L_9, /*hidden argument*/NULL);
		UnityDialogueControls_t1383 * L_10 = (__this->___dialogue_5);
		NullCheck(L_10);
		UnitySubtitleControls_t1388 * L_11 = (L_10->___pcSubtitle_2);
		NullCheck(L_11);
		GUIButton_t1263 * L_12 = (L_11->___continueButton_5);
		UnityDialogueUI_SetupContinueButton_m7007(__this, L_12, /*hidden argument*/NULL);
		UnityAlertControls_t1384 * L_13 = (__this->___alert_7);
		NullCheck(L_13);
		GUIButton_t1263 * L_14 = (L_13->___continueButton_3);
		UnityDialogueUI_SetupContinueButton_m7007(__this, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_15 = DialogueDebug_get_LogErrors_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0195;
		}
	}
	{
		GUIRoot_t1265 * L_16 = (__this->___guiRoot_4);
		bool L_17 = Object_op_Equality_m2464(NULL /*static, unused*/, L_16, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00b4;
		}
	}
	{
		ObjectU5BU5D_t21* L_18 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		ArrayElementTypeCheck (L_18, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1394, L_18, /*hidden argument*/NULL);
		Debug_LogError_m2815(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueDebug_t624_il2cpp_TypeInfo_var);
		bool L_20 = DialogueDebug_get_LogWarnings_m2766(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0195;
		}
	}
	{
		UnityDialogueControls_t1383 * L_21 = (__this->___dialogue_5);
		NullCheck(L_21);
		UnitySubtitleControls_t1388 * L_22 = (L_21->___npcSubtitle_1);
		NullCheck(L_22);
		GUILabel_t1262 * L_23 = (L_22->___line_2);
		bool L_24 = Object_op_Equality_m2464(NULL /*static, unused*/, L_23, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00f6;
		}
	}
	{
		ObjectU5BU5D_t21* L_25 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1395, L_25, /*hidden argument*/NULL);
		Debug_LogWarning_m2768(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		UnityDialogueControls_t1383 * L_27 = (__this->___dialogue_5);
		NullCheck(L_27);
		UnitySubtitleControls_t1388 * L_28 = (L_27->___pcSubtitle_2);
		NullCheck(L_28);
		GUILabel_t1262 * L_29 = (L_28->___line_2);
		bool L_30 = Object_op_Equality_m2464(NULL /*static, unused*/, L_29, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_012e;
		}
	}
	{
		ObjectU5BU5D_t21* L_31 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1396, L_31, /*hidden argument*/NULL);
		Debug_LogWarning_m2768(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
	}

IL_012e:
	{
		UnityDialogueControls_t1383 * L_33 = (__this->___dialogue_5);
		NullCheck(L_33);
		UnityResponseMenuControls_t1389 * L_34 = (L_33->___responseMenu_3);
		NullCheck(L_34);
		GUIButtonU5BU5D_t1391* L_35 = (L_34->___buttons_7);
		NullCheck(L_35);
		if ((((int32_t)(((Array_t *)L_35)->max_length))))
		{
			goto IL_0162;
		}
	}
	{
		ObjectU5BU5D_t21* L_36 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 0);
		ArrayElementTypeCheck (L_36, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1397, L_36, /*hidden argument*/NULL);
		Debug_LogWarning_m2768(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
	}

IL_0162:
	{
		UnityAlertControls_t1384 * L_38 = (__this->___alert_7);
		NullCheck(L_38);
		GUILabel_t1262 * L_39 = (L_38->___line_2);
		bool L_40 = Object_op_Equality_m2464(NULL /*static, unused*/, L_39, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0195;
		}
	}
	{
		ObjectU5BU5D_t21* L_41 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 0);
		ArrayElementTypeCheck (L_41, (String_t*) &_stringLiteral104);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 0)) = (Object_t *)(String_t*) &_stringLiteral104;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_42 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral1398, L_41, /*hidden argument*/NULL);
		Debug_LogWarning_m2768(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
	}

IL_0195:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUI::SetupContinueButton(PixelCrushers.DialogueSystem.UnityGUI.GUIButton)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void UnityDialogueUI_SetupContinueButton_m7007 (UnityDialogueUI_t1362 * __this, GUIButton_t1263 * ___continueButton, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIButton_t1263 * L_0 = ___continueButton;
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		GUIButton_t1263 * L_2 = ___continueButton;
		NullCheck(L_2);
		String_t* L_3 = (L_2->___message_36);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		GUIButton_t1263 * L_5 = ___continueButton;
		NullCheck(L_5);
		String_t* L_6 = (L_5->___message_36);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_Equals_m2829(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral122, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}

IL_0031:
	{
		GUIButton_t1263 * L_8 = ___continueButton;
		NullCheck(L_8);
		L_8->___message_36 = (String_t*) &_stringLiteral1399;
	}

IL_003c:
	{
		GUIButton_t1263 * L_9 = ___continueButton;
		NullCheck(L_9);
		Transform_t54 * L_10 = (L_9->___target_38);
		bool L_11 = Object_op_Equality_m2464(NULL /*static, unused*/, L_10, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		GUIButton_t1263 * L_12 = ___continueButton;
		Transform_t54 * L_13 = Component_get_transform_m2421(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->___target_38 = L_13;
	}

IL_0059:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityTe.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityTeMethodDeclarations.h"

// PixelCrushers.DialogueSystem.AcceptedTextDelegate
#include "DialogueSystem_PixelCrushers_DialogueSystem_AcceptedTextDele.h"
// PixelCrushers.DialogueSystem.AcceptedTextDelegate
#include "DialogueSystem_PixelCrushers_DialogueSystem_AcceptedTextDeleMethodDeclarations.h"
// PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUIControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityDi_1MethodDeclarations.h"
struct GameObject_t49;
struct GUIControl_t1261;
// Declaration !!0 UnityEngine.GameObject::AddComponent<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>()
// !!0 UnityEngine.GameObject::AddComponent<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>()
#define GameObject_AddComponent_TisGUIControl_t1261_m7446(__this, method) (( GUIControl_t1261 * (*) (GameObject_t49 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m2825_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::.ctor()
extern "C" void UnityTextFieldUI__ctor_m7008 (UnityTextFieldUI_t1387 * __this, const MethodInfo* method)
{
	{
		__this->___acceptKey_5 = ((int32_t)13);
		MonoBehaviour__ctor_m2413(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::Awake()
extern const MethodInfo* Component_GetComponent_TisGUIControl_t1261_m7433_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisGUIControl_t1261_m7446_MethodInfo_var;
extern "C" void UnityTextFieldUI_Awake_m7009 (UnityTextFieldUI_t1387 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisGUIControl_t1261_m7433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484439);
		GameObject_AddComponent_TisGUIControl_t1261_m7446_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484447);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIControl_t1261 * L_0 = Component_GetComponent_TisGUIControl_t1261_m7433(__this, /*hidden argument*/Component_GetComponent_TisGUIControl_t1261_m7433_MethodInfo_var);
		__this->___control_8 = L_0;
		GUIControl_t1261 * L_1 = (__this->___control_8);
		bool L_2 = Object_op_Equality_m2464(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t49 * L_3 = Component_get_gameObject_m2452(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GUIControl_t1261 * L_4 = GameObject_AddComponent_TisGUIControl_t1261_m7446(L_3, /*hidden argument*/GameObject_AddComponent_TisGUIControl_t1261_m7446_MethodInfo_var);
		__this->___control_8 = L_4;
	}

IL_002e:
	{
		GUIControl_t1261 * L_5 = (__this->___control_8);
		NullCheck(L_5);
		L_5->___visible_8 = 0;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::StartTextInput(System.String,System.String,System.Int32,PixelCrushers.DialogueSystem.AcceptedTextDelegate)
extern TypeInfo* Input_t585_il2cpp_TypeInfo_var;
extern "C" void UnityTextFieldUI_StartTextInput_m7010 (UnityTextFieldUI_t1387 * __this, String_t* ___labelText, String_t* ___text, int32_t ___maxLength, AcceptedTextDelegate_t248 * ___acceptedText, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	UnityTextFieldUI_t1387 * G_B5_0 = {0};
	UnityTextFieldUI_t1387 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	UnityTextFieldUI_t1387 * G_B6_1 = {0};
	UnityTextFieldUI_t1387 * G_B8_0 = {0};
	UnityTextFieldUI_t1387 * G_B7_0 = {0};
	int32_t G_B9_0 = 0;
	UnityTextFieldUI_t1387 * G_B9_1 = {0};
	{
		GUILabel_t1262 * L_0 = (__this->___label_3);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GUILabel_t1262 * L_2 = (__this->___label_3);
		String_t* L_3 = ___labelText;
		NullCheck(L_2);
		((GUIVisibleControl_t1347 *)L_2)->___text_20 = L_3;
	}

IL_001d:
	{
		GUITextField_t1357 * L_4 = (__this->___textField_4);
		bool L_5 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_4, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_008f;
		}
	}
	{
		GUITextField_t1357 * L_6 = (__this->___textField_4);
		String_t* L_7 = ___text;
		NullCheck(L_6);
		((GUIVisibleControl_t1347 *)L_6)->___text_20 = L_7;
		GUITextField_t1357 * L_8 = (__this->___textField_4);
		int32_t L_9 = ___maxLength;
		NullCheck(L_8);
		L_8->___maxLength_28 = L_9;
		GUITextField_t1357 * L_10 = (__this->___textField_4);
		NullCheck(L_10);
		GUITextField_TakeFocus_m6842(L_10, /*hidden argument*/NULL);
		int32_t L_11 = (__this->___acceptKey_5);
		G_B4_0 = __this;
		if (!L_11)
		{
			G_B5_0 = __this;
			goto IL_006a;
		}
	}
	{
		int32_t L_12 = (__this->___acceptKey_5);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_13 = Input_GetKeyDown_m2725(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_13));
		G_B6_1 = G_B4_0;
		goto IL_006b;
	}

IL_006a:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_006b:
	{
		NullCheck(G_B6_1);
		G_B6_1->___ignoreFirstAccept_9 = G_B6_0;
		int32_t L_14 = (__this->___cancelKey_6);
		G_B7_0 = __this;
		if (!L_14)
		{
			G_B8_0 = __this;
			goto IL_0089;
		}
	}
	{
		int32_t L_15 = (__this->___cancelKey_6);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t585_il2cpp_TypeInfo_var);
		bool L_16 = Input_GetKeyDown_m2725(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_16));
		G_B9_1 = G_B7_0;
		goto IL_008a;
	}

IL_0089:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_008a:
	{
		NullCheck(G_B9_1);
		G_B9_1->___ignoreFirstCancel_10 = G_B9_0;
	}

IL_008f:
	{
		AcceptedTextDelegate_t248 * L_17 = ___acceptedText;
		__this->___acceptedText_7 = L_17;
		UnityTextFieldUI_Show_m7018(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::OnGUI()
extern "C" void UnityTextFieldUI_OnGUI_m7011 (UnityTextFieldUI_t1387 * __this, const MethodInfo* method)
{
	{
		GUIControl_t1261 * L_0 = (__this->___control_8);
		NullCheck(L_0);
		bool L_1 = (L_0->___visible_8);
		if (!L_1)
		{
			goto IL_00b9;
		}
	}
	{
		GUITextField_t1357 * L_2 = (__this->___textField_4);
		bool L_3 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		GUITextField_t1357 * L_4 = (__this->___textField_4);
		NullCheck(L_4);
		GUITextField_TakeFocus_m6842(L_4, /*hidden argument*/NULL);
	}

IL_002c:
	{
		bool L_5 = UnityTextFieldUI_IsAcceptKey_m7012(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		bool L_6 = (__this->___ignoreFirstAccept_9);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		__this->___ignoreFirstAccept_9 = 0;
		goto IL_005e;
	}

IL_004e:
	{
		Event_t662 * L_7 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		Event_Use_m7095(L_7, /*hidden argument*/NULL);
		UnityTextFieldUI_AcceptTextInput_m7015(__this, /*hidden argument*/NULL);
	}

IL_005e:
	{
		goto IL_00b9;
	}

IL_0063:
	{
		Event_t662 * L_8 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9 = Event_get_isKey_m7447(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_10 = (__this->___cancelKey_6);
		if (!L_10)
		{
			goto IL_00b9;
		}
	}
	{
		Event_t662 * L_11 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = Event_get_keyCode_m3061(L_11, /*hidden argument*/NULL);
		int32_t L_13 = (__this->___cancelKey_6);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_00b9;
		}
	}
	{
		bool L_14 = (__this->___ignoreFirstCancel_10);
		if (!L_14)
		{
			goto IL_00a9;
		}
	}
	{
		__this->___ignoreFirstCancel_10 = 0;
		goto IL_00b9;
	}

IL_00a9:
	{
		Event_t662 * L_15 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		Event_Use_m7095(L_15, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(5 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::CancelTextInput() */, __this);
	}

IL_00b9:
	{
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::IsAcceptKey()
extern "C" bool UnityTextFieldUI_IsAcceptKey_m7012 (UnityTextFieldUI_t1387 * __this, const MethodInfo* method)
{
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		int32_t L_0 = (__this->___acceptKey_5);
		bool L_1 = UnityTextFieldUI_IsKeyCodeReturn_m7013(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00ab;
		}
	}
	{
		Event_t662 * L_2 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		Event_t662 * L_3 = Event_KeyboardEvent_m7448(NULL /*static, unused*/, (String_t*) &_stringLiteral1400, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean UnityEngine.Event::Equals(System.Object) */, L_2, L_3);
		if (L_4)
		{
			goto IL_00a9;
		}
	}
	{
		Event_t662 * L_5 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		Event_t662 * L_6 = Event_KeyboardEvent_m7448(NULL /*static, unused*/, (String_t*) &_stringLiteral1401, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean UnityEngine.Event::Equals(System.Object) */, L_5, L_6);
		if (L_7)
		{
			goto IL_00a9;
		}
	}
	{
		Event_t662 * L_8 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9 = Event_get_isKey_m7447(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		Event_t662 * L_10 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = Event_get_keyCode_m3061(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)((int32_t)271))))
		{
			goto IL_00a9;
		}
	}

IL_0066:
	{
		Event_t662 * L_12 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_13 = Event_get_isKey_m7447(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0086;
		}
	}
	{
		Event_t662 * L_14 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = Event_get_keyCode_m3061(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) == ((int32_t)((int32_t)13))))
		{
			goto IL_00a9;
		}
	}

IL_0086:
	{
		Event_t662 * L_16 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17 = Event_get_type_m3060(L_16, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)4))))
		{
			goto IL_00a6;
		}
	}
	{
		Event_t662 * L_18 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		uint16_t L_19 = Event_get_character_m4906(L_18, /*hidden argument*/NULL);
		G_B10_0 = ((((int32_t)L_19) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_00a7;
	}

IL_00a6:
	{
		G_B10_0 = 0;
	}

IL_00a7:
	{
		G_B12_0 = G_B10_0;
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B12_0 = 1;
	}

IL_00aa:
	{
		return G_B12_0;
	}

IL_00ab:
	{
		int32_t L_20 = (__this->___acceptKey_5);
		if (!L_20)
		{
			goto IL_00ca;
		}
	}
	{
		Event_t662 * L_21 = Event_get_current_m3059(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22 = Event_get_keyCode_m3061(L_21, /*hidden argument*/NULL);
		int32_t L_23 = (__this->___acceptKey_5);
		G_B16_0 = ((((int32_t)L_22) == ((int32_t)L_23))? 1 : 0);
		goto IL_00cb;
	}

IL_00ca:
	{
		G_B16_0 = 0;
	}

IL_00cb:
	{
		return G_B16_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::IsKeyCodeReturn(UnityEngine.KeyCode)
extern "C" bool UnityTextFieldUI_IsKeyCodeReturn_m7013 (UnityTextFieldUI_t1387 * __this, int32_t ___keyCode, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___keyCode;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)271))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___keyCode;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)((int32_t)13)))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::CancelTextInput()
extern "C" void UnityTextFieldUI_CancelTextInput_m7014 (UnityTextFieldUI_t1387 * __this, const MethodInfo* method)
{
	{
		UnityTextFieldUI_Hide_m7019(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::AcceptTextInput()
extern "C" void UnityTextFieldUI_AcceptTextInput_m7015 (UnityTextFieldUI_t1387 * __this, const MethodInfo* method)
{
	{
		UnityTextFieldUI_Hide_m7019(__this, /*hidden argument*/NULL);
		AcceptedTextDelegate_t248 * L_0 = (__this->___acceptedText_7);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		GUITextField_t1357 * L_1 = (__this->___textField_4);
		bool L_2 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_1, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		AcceptedTextDelegate_t248 * L_3 = (__this->___acceptedText_7);
		GUITextField_t1357 * L_4 = (__this->___textField_4);
		NullCheck(L_4);
		String_t* L_5 = (((GUIVisibleControl_t1347 *)L_4)->___text_20);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void PixelCrushers.DialogueSystem.AcceptedTextDelegate::Invoke(System.String) */, L_3, L_5);
	}

IL_0038:
	{
		__this->___acceptedText_7 = (AcceptedTextDelegate_t248 *)NULL;
	}

IL_003f:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::OnAccept(System.Object)
extern "C" void UnityTextFieldUI_OnAccept_m7016 (UnityTextFieldUI_t1387 * __this, Object_t * ___data, const MethodInfo* method)
{
	{
		UnityTextFieldUI_AcceptTextInput_m7015(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::OnCancel(System.Object)
extern "C" void UnityTextFieldUI_OnCancel_m7017 (UnityTextFieldUI_t1387 * __this, Object_t * ___data, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(5 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::CancelTextInput() */, __this);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::Show()
extern "C" void UnityTextFieldUI_Show_m7018 (UnityTextFieldUI_t1387 * __this, const MethodInfo* method)
{
	{
		UnityTextFieldUI_SetControlsActive_m7020(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::Hide()
extern "C" void UnityTextFieldUI_Hide_m7019 (UnityTextFieldUI_t1387 * __this, const MethodInfo* method)
{
	{
		UnityTextFieldUI_SetControlsActive_m7020(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::SetControlsActive(System.Boolean)
extern "C" void UnityTextFieldUI_SetControlsActive_m7020 (UnityTextFieldUI_t1387 * __this, bool ___value, const MethodInfo* method)
{
	{
		GUIControl_t1261 * L_0 = (__this->___control_8);
		bool L_1 = ___value;
		NullCheck(L_0);
		L_0->___visible_8 = L_1;
		GUILabel_t1262 * L_2 = (__this->___label_3);
		bool L_3 = ___value;
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		GUITextField_t1357 * L_4 = (__this->___textField_4);
		bool L_5 = ___value;
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		GUIControl_t1261 * L_6 = (__this->___panel_2);
		bool L_7 = ___value;
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.UnityAlertControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityAlMethodDeclarations.h"

// PixelCrushers.DialogueSystem.AbstractUIAlertControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUIAlertCMethodDeclarations.h"
struct GameObject_t49;
struct FadeEffect_t1365;
struct GameObject_t49;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m2450_gshared (GameObject_t49 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m2450(__this, method) (( Object_t * (*) (GameObject_t49 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2450_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.FadeEffect>()
// !!0 UnityEngine.GameObject::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.FadeEffect>()
#define GameObject_GetComponent_TisFadeEffect_t1365_m7449(__this, method) (( FadeEffect_t1365 * (*) (GameObject_t49 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2450_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityAlertControls::.ctor()
extern "C" void UnityAlertControls__ctor_m7021 (UnityAlertControls_t1384 * __this, const MethodInfo* method)
{
	{
		AbstractUIAlertControls__ctor_m2794(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityAlertControls::get_IsVisible()
extern "C" bool UnityAlertControls_get_IsVisible_m7022 (UnityAlertControls_t1384 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GUILabel_t1262 * L_0 = (__this->___line_2);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		GUILabel_t1262 * L_2 = (__this->___line_2);
		NullCheck(L_2);
		GameObject_t49 * L_3 = Component_get_gameObject_m2452(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = GameObject_get_activeSelf_m2433(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		return G_B3_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityAlertControls::SetActive(System.Boolean)
extern "C" void UnityAlertControls_SetActive_m7023 (UnityAlertControls_t1384 * __this, bool ___value, const MethodInfo* method)
{
	{
		GUILabel_t1262 * L_0 = (__this->___line_2);
		bool L_1 = ___value;
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		GUIControl_t1261 * L_2 = (__this->___panel_1);
		bool L_3 = ___value;
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityAlertControls::SetMessage(System.String,System.Single)
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern TypeInfo* FormattedText_t572_il2cpp_TypeInfo_var;
extern "C" void UnityAlertControls_SetMessage_m7024 (UnityAlertControls_t1384 * __this, String_t* ___message, float ___duration, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		FormattedText_t572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILabel_t1262 * L_0 = (__this->___line_2);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0061;
		}
	}
	{
		GUILabel_t1262 * L_2 = (__this->___line_2);
		String_t* L_3 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueDatabase_t202 * L_4 = DialogueManager_get_MasterDatabase_m2796(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		EmphasisSettingU5BU5D_t632* L_5 = (L_4->___emphasisSettings_8);
		IL2CPP_RUNTIME_CLASS_INIT(FormattedText_t572_il2cpp_TypeInfo_var);
		FormattedText_t572 * L_6 = FormattedText_Parse_m2797(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< FormattedText_t572 * >::Invoke(17 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::SetFormattedText(PixelCrushers.DialogueSystem.FormattedText) */, L_2, L_6);
		GUILabel_t1262 * L_7 = (__this->___line_2);
		NullCheck(L_7);
		GameObject_t49 * L_8 = Component_get_gameObject_m2452(L_7, /*hidden argument*/NULL);
		float L_9 = ___duration;
		UnityAlertControls_SetFadeDuration_m7025(__this, L_8, L_9, /*hidden argument*/NULL);
		GUIControl_t1261 * L_10 = (__this->___panel_1);
		bool L_11 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_10, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		GUIControl_t1261 * L_12 = (__this->___panel_1);
		NullCheck(L_12);
		GameObject_t49 * L_13 = Component_get_gameObject_m2452(L_12, /*hidden argument*/NULL);
		float L_14 = ___duration;
		UnityAlertControls_SetFadeDuration_m7025(__this, L_13, L_14, /*hidden argument*/NULL);
	}

IL_0061:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityAlertControls::SetFadeDuration(UnityEngine.GameObject,System.Single)
extern TypeInfo* DialogueTime_t625_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisFadeEffect_t1365_m7449_MethodInfo_var;
extern "C" void UnityAlertControls_SetFadeDuration_m7025 (UnityAlertControls_t1384 * __this, GameObject_t49 * ___go, float ___duration, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueTime_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		GameObject_GetComponent_TisFadeEffect_t1365_m7449_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484448);
		s_Il2CppMethodIntialized = true;
	}
	FadeEffect_t1365 * V_0 = {0};
	{
		GameObject_t49 * L_0 = ___go;
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0076;
		}
	}
	{
		GameObject_t49 * L_2 = ___go;
		NullCheck(L_2);
		FadeEffect_t1365 * L_3 = GameObject_GetComponent_TisFadeEffect_t1365_m7449(L_2, /*hidden argument*/GameObject_GetComponent_TisFadeEffect_t1365_m7449_MethodInfo_var);
		V_0 = L_3;
		FadeEffect_t1365 * L_4 = V_0;
		bool L_5 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_4, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0076;
		}
	}
	{
		FadeEffect_t1365 * L_6 = V_0;
		FadeEffect_t1365 * L_7 = V_0;
		NullCheck(L_7);
		float L_8 = (L_7->___fadeInDuration_3);
		float L_9 = ___duration;
		FadeEffect_t1365 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = (L_10->___fadeOutDuration_5);
		NullCheck(L_6);
		FadeEffect_SetFadeDurations_m6888(L_6, L_8, L_9, L_11, /*hidden argument*/NULL);
		float L_12 = (((AbstractUIAlertControls_t221 *)__this)->___alertDoneTime_0);
		IL2CPP_RUNTIME_CLASS_INIT(DialogueTime_t625_il2cpp_TypeInfo_var);
		float L_13 = DialogueTime_get_time_m2777(NULL /*static, unused*/, /*hidden argument*/NULL);
		FadeEffect_t1365 * L_14 = V_0;
		NullCheck(L_14);
		float L_15 = (L_14->___fadeInDuration_3);
		float L_16 = ___duration;
		FadeEffect_t1365 * L_17 = V_0;
		NullCheck(L_17);
		float L_18 = (L_17->___fadeOutDuration_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		float L_19 = Mathf_Max_m4982(NULL /*static, unused*/, L_12, ((float)((float)((float)((float)((float)((float)L_13+(float)L_15))+(float)L_16))+(float)L_18)), /*hidden argument*/NULL);
		((AbstractUIAlertControls_t221 *)__this)->___alertDoneTime_0 = L_19;
		GameObject_t49 * L_20 = ___go;
		NullCheck(L_20);
		bool L_21 = GameObject_get_activeInHierarchy_m2549(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0076;
		}
	}
	{
		FadeEffect_t1365 * L_22 = V_0;
		NullCheck(L_22);
		MonoBehaviour_StopAllCoroutines_m2853(L_22, /*hidden argument*/NULL);
		FadeEffect_t1365 * L_23 = V_0;
		FadeEffect_t1365 * L_24 = V_0;
		NullCheck(L_24);
		Object_t * L_25 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityGUI.FadeEffect::Play() */, L_24);
		NullCheck(L_23);
		MonoBehaviour_StartCoroutine_m2547(L_23, L_25, /*hidden argument*/NULL);
	}

IL_0076:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityDi_0MethodDeclarations.h"

// PixelCrushers.DialogueSystem.AbstractUISubtitleControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUISubtit.h"
// PixelCrushers.DialogueSystem.AbstractUIResponseMenuControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUIRespon.h"
// PixelCrushers.DialogueSystem.AbstractDialogueUIControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractDialogueMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls::.ctor()
extern "C" void UnityDialogueControls__ctor_m7026 (UnityDialogueControls_t1383 * __this, const MethodInfo* method)
{
	{
		AbstractDialogueUIControls__ctor_m2804(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.AbstractUISubtitleControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls::get_NPCSubtitle()
extern "C" AbstractUISubtitleControls_t246 * UnityDialogueControls_get_NPCSubtitle_m7027 (UnityDialogueControls_t1383 * __this, const MethodInfo* method)
{
	{
		UnitySubtitleControls_t1388 * L_0 = (__this->___npcSubtitle_1);
		return L_0;
	}
}
// PixelCrushers.DialogueSystem.AbstractUISubtitleControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls::get_PCSubtitle()
extern "C" AbstractUISubtitleControls_t246 * UnityDialogueControls_get_PCSubtitle_m7028 (UnityDialogueControls_t1383 * __this, const MethodInfo* method)
{
	{
		UnitySubtitleControls_t1388 * L_0 = (__this->___pcSubtitle_2);
		return L_0;
	}
}
// PixelCrushers.DialogueSystem.AbstractUIResponseMenuControls PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls::get_ResponseMenu()
extern "C" AbstractUIResponseMenuControls_t244 * UnityDialogueControls_get_ResponseMenu_m7029 (UnityDialogueControls_t1383 * __this, const MethodInfo* method)
{
	{
		UnityResponseMenuControls_t1389 * L_0 = (__this->___responseMenu_3);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls::ShowPanel()
extern "C" void UnityDialogueControls_ShowPanel_m7030 (UnityDialogueControls_t1383 * __this, const MethodInfo* method)
{
	{
		GUIControl_t1261 * L_0 = (__this->___panel_0);
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueControls::SetActive(System.Boolean)
extern "C" void UnityDialogueControls_SetActive_m7031 (UnityDialogueControls_t1383 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		AbstractDialogueUIControls_SetActive_m2803(__this, L_0, /*hidden argument*/NULL);
		GUIControl_t1261 * L_1 = (__this->___panel_0);
		bool L_2 = ___value;
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUIControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityDi_1.h"
#ifndef _MSC_VER
#else
#endif

struct Component_t462;
struct SlideEffect_t1371;
// Declaration !!0 UnityEngine.Component::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.SlideEffect>()
// !!0 UnityEngine.Component::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.SlideEffect>()
#define Component_GetComponent_TisSlideEffect_t1371_m7450(__this, method) (( SlideEffect_t1371 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUIControls::SetControlActive(PixelCrushers.DialogueSystem.UnityGUI.GUIControl,System.Boolean)
extern "C" void UnityDialogueUIControls_SetControlActive_m7032 (Object_t * __this /* static, unused */, GUIControl_t1261 * ___control, bool ___value, const MethodInfo* method)
{
	{
		GUIControl_t1261 * L_0 = ___control;
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		bool L_2 = ___value;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		GUIControl_t1261 * L_3 = ___control;
		NullCheck(L_3);
		GameObject_t49 * L_4 = Component_get_gameObject_m2452(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = GameObject_get_activeSelf_m2433(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		GUIControl_t1261 * L_6 = ___control;
		NullCheck(L_6);
		GameObject_t49 * L_7 = Component_get_gameObject_m2452(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m2429(L_7, 1, /*hidden argument*/NULL);
		GUIControl_t1261 * L_8 = ___control;
		UnityDialogueUIControls_CheckSlideEffect_m7033(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		goto IL_005b;
	}

IL_0039:
	{
		bool L_9 = ___value;
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		GUIControl_t1261 * L_10 = ___control;
		NullCheck(L_10);
		GameObject_t49 * L_11 = Component_get_gameObject_m2452(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = GameObject_get_activeSelf_m2433(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		GUIControl_t1261 * L_13 = ___control;
		NullCheck(L_13);
		GameObject_t49 * L_14 = Component_get_gameObject_m2452(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_m2429(L_14, 0, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityDialogueUIControls::CheckSlideEffect(PixelCrushers.DialogueSystem.UnityGUI.GUIControl)
extern const MethodInfo* Component_GetComponent_TisSlideEffect_t1371_m7450_MethodInfo_var;
extern "C" void UnityDialogueUIControls_CheckSlideEffect_m7033 (Object_t * __this /* static, unused */, GUIControl_t1261 * ___control, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSlideEffect_t1371_m7450_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484449);
		s_Il2CppMethodIntialized = true;
	}
	SlideEffect_t1371 * V_0 = {0};
	{
		GUIControl_t1261 * L_0 = ___control;
		NullCheck(L_0);
		SlideEffect_t1371 * L_1 = Component_GetComponent_TisSlideEffect_t1371_m7450(L_0, /*hidden argument*/Component_GetComponent_TisSlideEffect_t1371_m7450_MethodInfo_var);
		V_0 = L_1;
		SlideEffect_t1371 * L_2 = V_0;
		bool L_3 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		SlideEffect_t1371 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (((GUIEffect_t1361 *)L_4)->___trigger_2);
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		GUIControl_t1261 * L_6 = ___control;
		NullCheck(L_6);
		L_6->___visible_8 = 0;
	}

IL_0025:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// PixelCrushers.DialogueSystem.AbstractUIQTEControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUIQTEConMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityQTEControls::.ctor(PixelCrushers.DialogueSystem.UnityGUI.GUIControl[])
extern "C" void UnityQTEControls__ctor_m7034 (UnityQTEControls_t1386 * __this, GUIControlU5BU5D_t1378* ___qteIndicators, const MethodInfo* method)
{
	{
		AbstractUIQTEControls__ctor_m2814(__this, /*hidden argument*/NULL);
		GUIControlU5BU5D_t1378* L_0 = ___qteIndicators;
		__this->___qteIndicators_0 = L_0;
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityQTEControls::get_AreVisible()
extern "C" bool UnityQTEControls_get_AreVisible_m7035 (UnityQTEControls_t1386 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___numVisibleQTEIndicators_1);
		return ((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityQTEControls::SetActive(System.Boolean)
extern "C" void UnityQTEControls_SetActive_m7036 (UnityQTEControls_t1386 * __this, bool ___value, const MethodInfo* method)
{
	GUIControl_t1261 * V_0 = {0};
	GUIControlU5BU5D_t1378* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = ___value;
		if (L_0)
		{
			goto IL_0038;
		}
	}
	{
		__this->___numVisibleQTEIndicators_1 = 0;
		GUIControlU5BU5D_t1378* L_1 = (__this->___qteIndicators_0);
		V_1 = L_1;
		V_2 = 0;
		goto IL_002f;
	}

IL_001b:
	{
		GUIControlU5BU5D_t1378* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_2, L_4));
		GUIControl_t1261 * L_5 = V_0;
		NullCheck(L_5);
		GameObject_t49 * L_6 = Component_get_gameObject_m2452(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m2429(L_6, 0, /*hidden argument*/NULL);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_8 = V_2;
		GUIControlU5BU5D_t1378* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001b;
		}
	}

IL_0038:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityQTEControls::ShowIndicator(System.Int32)
extern "C" void UnityQTEControls_ShowIndicator_m7037 (UnityQTEControls_t1386 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		bool L_1 = UnityQTEControls_IsValidQTEIndex_m7040(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_2 = ___index;
		bool L_3 = UnityQTEControls_IsQTEIndicatorVisible_m7039(__this, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		GUIControlU5BU5D_t1378* L_4 = (__this->___qteIndicators_0);
		int32_t L_5 = ___index;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_4, L_6)));
		GameObject_t49 * L_7 = Component_get_gameObject_m2452((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_4, L_6)), /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m2429(L_7, 1, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___numVisibleQTEIndicators_1);
		__this->___numVisibleQTEIndicators_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0039:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityQTEControls::HideIndicator(System.Int32)
extern "C" void UnityQTEControls_HideIndicator_m7038 (UnityQTEControls_t1386 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		bool L_1 = UnityQTEControls_IsValidQTEIndex_m7040(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_2 = ___index;
		bool L_3 = UnityQTEControls_IsQTEIndicatorVisible_m7039(__this, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		GUIControlU5BU5D_t1378* L_4 = (__this->___qteIndicators_0);
		int32_t L_5 = ___index;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_4, L_6)));
		GameObject_t49 * L_7 = Component_get_gameObject_m2452((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_4, L_6)), /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m2429(L_7, 0, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___numVisibleQTEIndicators_1);
		__this->___numVisibleQTEIndicators_1 = ((int32_t)((int32_t)L_8-(int32_t)1));
	}

IL_0039:
	{
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityQTEControls::IsQTEIndicatorVisible(System.Int32)
extern "C" bool UnityQTEControls_IsQTEIndicatorVisible_m7039 (UnityQTEControls_t1386 * __this, int32_t ___index, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___index;
		bool L_1 = UnityQTEControls_IsValidQTEIndex_m7040(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		GUIControlU5BU5D_t1378* L_2 = (__this->___qteIndicators_0);
		int32_t L_3 = ___index;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_2, L_4)));
		GameObject_t49 * L_5 = Component_get_gameObject_m2452((*(GUIControl_t1261 **)(GUIControl_t1261 **)SZArrayLdElema(L_2, L_4)), /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = GameObject_get_activeSelf_m2433(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		return G_B3_0;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityQTEControls::IsValidQTEIndex(System.Int32)
extern "C" bool UnityQTEControls_IsValidQTEIndex_m7040 (UnityQTEControls_t1386 * __this, int32_t ___index, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___index;
		if ((((int32_t)0) > ((int32_t)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___index;
		GUIControlU5BU5D_t1378* L_2 = (__this->___qteIndicators_0);
		NullCheck(L_2);
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnityReMethodDeclarations.h"

// PixelCrushers.DialogueSystem.AbstractUIControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUIContro.h"
// PixelCrushers.DialogueSystem.ResponseButtonAlignment
#include "DialogueSystem_PixelCrushers_DialogueSystem_ResponseButtonAl.h"
// PixelCrushers.DialogueSystem.DialogueSystemController
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueSystemCo.h"
// PixelCrushers.DialogueSystem.AbstractUIResponseMenuControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUIResponMethodDeclarations.h"
// PixelCrushers.DialogueSystem.DialogueDatabase
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueDatabaseMethodDeclarations.h"
// PixelCrushers.DialogueSystem.AbstractUISubtitleControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUISubtitMethodDeclarations.h"
// PixelCrushers.DialogueSystem.AbstractUIControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUIControMethodDeclarations.h"
struct Component_t462;
struct TimerEffect_t1373;
// Declaration !!0 UnityEngine.Component::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.TimerEffect>()
// !!0 UnityEngine.Component::GetComponent<PixelCrushers.DialogueSystem.UnityGUI.TimerEffect>()
#define Component_GetComponent_TisTimerEffect_t1373_m7451(__this, method) (( TimerEffect_t1373 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2412_gshared)(__this, method)


// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::.ctor()
extern "C" void UnityResponseMenuControls__ctor_m7041 (UnityResponseMenuControls_t1389 * __this, const MethodInfo* method)
{
	{
		AbstractUIResponseMenuControls__ctor_m2828(__this, /*hidden argument*/NULL);
		return;
	}
}
// PixelCrushers.DialogueSystem.AbstractUISubtitleControls PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::get_SubtitleReminder()
extern "C" AbstractUISubtitleControls_t246 * UnityResponseMenuControls_get_SubtitleReminder_m7042 (UnityResponseMenuControls_t1389 * __this, const MethodInfo* method)
{
	{
		UnitySubtitleControls_t1388 * L_0 = (__this->___subtitleReminder_5);
		return L_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::SetPCPortrait(UnityEngine.Texture2D,System.String)
extern "C" void UnityResponseMenuControls_SetPCPortrait_m7043 (UnityResponseMenuControls_t1389 * __this, Texture2D_t90 * ___portraitTexture, String_t* ___portraitName, const MethodInfo* method)
{
	{
		Texture2D_t90 * L_0 = ___portraitTexture;
		__this->___pcPortraitTexture_9 = L_0;
		String_t* L_1 = ___portraitName;
		__this->___pcPortraitName_10 = L_1;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" void UnityResponseMenuControls_SetActorPortraitTexture_m7044 (UnityResponseMenuControls_t1389 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	Texture2D_t90 * V_0 = {0};
	{
		String_t* L_0 = ___actorName;
		String_t* L_1 = (__this->___pcPortraitName_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_Equals_m2829(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_3 = ___actorName;
		Texture2D_t90 * L_4 = ___portraitTexture;
		Texture2D_t90 * L_5 = AbstractDialogueUI_GetValidPortraitTexture_m2830(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Texture2D_t90 * L_6 = V_0;
		__this->___pcPortraitTexture_9 = L_6;
		GUILabel_t1262 * L_7 = (__this->___pcImage_3);
		bool L_8 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_7, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueDatabase_t202 * L_9 = DialogueManager_get_MasterDatabase_m2796(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_10 = ___actorName;
		NullCheck(L_9);
		bool L_11 = DialogueDatabase_IsPlayer_m2831(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		GUILabel_t1262 * L_12 = (__this->___pcImage_3);
		Texture2D_t90 * L_13 = V_0;
		NullCheck(L_12);
		L_12->___image_31 = L_13;
	}

IL_004d:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::SetActive(System.Boolean)
extern "C" void UnityResponseMenuControls_SetActive_m7045 (UnityResponseMenuControls_t1389 * __this, bool ___value, const MethodInfo* method)
{
	GUIButton_t1263 * V_0 = {0};
	GUIButtonU5BU5D_t1391* V_1 = {0};
	int32_t V_2 = 0;
	AbstractUISubtitleControls_t246 * G_B2_0 = {0};
	AbstractUISubtitleControls_t246 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	AbstractUISubtitleControls_t246 * G_B3_1 = {0};
	GUIButton_t1263 * G_B6_0 = {0};
	GUIButton_t1263 * G_B5_0 = {0};
	int32_t G_B7_0 = 0;
	GUIButton_t1263 * G_B7_1 = {0};
	{
		AbstractUISubtitleControls_t246 * L_0 = (AbstractUISubtitleControls_t246 *)VirtFuncInvoker0< AbstractUISubtitleControls_t246 * >::Invoke(5 /* PixelCrushers.DialogueSystem.AbstractUISubtitleControls PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::get_SubtitleReminder() */, __this);
		bool L_1 = ___value;
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		AbstractUISubtitleControls_t246 * L_2 = (AbstractUISubtitleControls_t246 *)VirtFuncInvoker0< AbstractUISubtitleControls_t246 * >::Invoke(5 /* PixelCrushers.DialogueSystem.AbstractUISubtitleControls PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::get_SubtitleReminder() */, __this);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean PixelCrushers.DialogueSystem.AbstractUISubtitleControls::get_HasText() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< bool >::Invoke(4 /* System.Void PixelCrushers.DialogueSystem.AbstractUIControls::SetActive(System.Boolean) */, G_B3_1, G_B3_0);
		GUIButtonU5BU5D_t1391* L_4 = (__this->___buttons_7);
		V_1 = L_4;
		V_2 = 0;
		goto IL_004a;
	}

IL_002d:
	{
		GUIButtonU5BU5D_t1391* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(GUIButton_t1263 **)(GUIButton_t1263 **)SZArrayLdElema(L_5, L_7));
		GUIButton_t1263 * L_8 = V_0;
		bool L_9 = ___value;
		G_B5_0 = L_8;
		if (!L_9)
		{
			G_B6_0 = L_8;
			goto IL_0040;
		}
	}
	{
		GUIButton_t1263 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = (((GUIControl_t1261 *)L_10)->___visible_8);
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = G_B5_0;
		goto IL_0041;
	}

IL_0040:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_0041:
	{
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, G_B7_1, G_B7_0, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004a:
	{
		int32_t L_13 = V_2;
		GUIButtonU5BU5D_t1391* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_002d;
		}
	}
	{
		GUIProgressBar_t1356 * L_15 = (__this->___timer_6);
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_15, 0, /*hidden argument*/NULL);
		GUILabel_t1262 * L_16 = (__this->___pcImage_3);
		bool L_17 = ___value;
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		GUILabel_t1262 * L_18 = (__this->___pcName_4);
		bool L_19 = ___value;
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		GUIControl_t1261 * L_20 = (__this->___panel_2);
		bool L_21 = ___value;
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		bool L_22 = ___value;
		if (!L_22)
		{
			goto IL_00e9;
		}
	}
	{
		GUILabel_t1262 * L_23 = (__this->___pcImage_3);
		bool L_24 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_23, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00bc;
		}
	}
	{
		Texture2D_t90 * L_25 = (__this->___pcPortraitTexture_9);
		bool L_26 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_25, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00bc;
		}
	}
	{
		GUILabel_t1262 * L_27 = (__this->___pcImage_3);
		Texture2D_t90 * L_28 = (__this->___pcPortraitTexture_9);
		NullCheck(L_27);
		L_27->___image_31 = L_28;
	}

IL_00bc:
	{
		GUILabel_t1262 * L_29 = (__this->___pcName_4);
		bool L_30 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_29, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00e9;
		}
	}
	{
		String_t* L_31 = (__this->___pcPortraitName_10);
		if (!L_31)
		{
			goto IL_00e9;
		}
	}
	{
		GUILabel_t1262 * L_32 = (__this->___pcName_4);
		String_t* L_33 = (__this->___pcPortraitName_10);
		NullCheck(L_32);
		((GUIVisibleControl_t1347 *)L_32)->___text_20 = L_33;
	}

IL_00e9:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::ClearResponseButtons()
extern "C" void UnityResponseMenuControls_ClearResponseButtons_m7046 (UnityResponseMenuControls_t1389 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		GUIButtonU5BU5D_t1391* L_0 = (__this->___buttons_7);
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		V_0 = 0;
		goto IL_0039;
	}

IL_0012:
	{
		GUIButtonU5BU5D_t1391* L_1 = (__this->___buttons_7);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		UnityResponseMenuControls_SetResponseButton_m7048(__this, (*(GUIButton_t1263 **)(GUIButton_t1263 **)SZArrayLdElema(L_1, L_3)), (Response_t235 *)NULL, (Transform_t54 *)NULL, /*hidden argument*/NULL);
		GUIButtonU5BU5D_t1391* L_4 = (__this->___buttons_7);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		bool L_7 = (((AbstractUIResponseMenuControls_t244 *)__this)->___showUnusedButtons_1);
		NullCheck((*(GUIButton_t1263 **)(GUIButton_t1263 **)SZArrayLdElema(L_4, L_6)));
		((GUIControl_t1261 *)(*(GUIButton_t1263 **)(GUIButton_t1263 **)SZArrayLdElema(L_4, L_6)))->___visible_8 = L_7;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_9 = V_0;
		GUIButtonU5BU5D_t1391* L_10 = (__this->___buttons_7);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0012;
		}
	}

IL_0047:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::SetResponseButtons(PixelCrushers.DialogueSystem.Response[],UnityEngine.Transform)
extern TypeInfo* Mathf_t589_il2cpp_TypeInfo_var;
extern "C" void UnityResponseMenuControls_SetResponseButtons_m7047 (UnityResponseMenuControls_t1389 * __this, ResponseU5BU5D_t571* ___responses, Transform_t54 * ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		GUIButtonU5BU5D_t1391* L_0 = (__this->___buttons_7);
		if (!L_0)
		{
			goto IL_0157;
		}
	}
	{
		GUIButtonU5BU5D_t1391* L_1 = (__this->___buttons_7);
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0157;
		}
	}
	{
		ResponseU5BU5D_t571* L_2 = ___responses;
		if (!L_2)
		{
			goto IL_0157;
		}
	}
	{
		V_0 = 0;
		goto IL_006d;
	}

IL_0026:
	{
		ResponseU5BU5D_t571* L_3 = ___responses;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(Response_t235 **)(Response_t235 **)SZArrayLdElema(L_3, L_5)));
		FormattedText_t572 * L_6 = ((*(Response_t235 **)(Response_t235 **)SZArrayLdElema(L_3, L_5))->___formattedText_0);
		NullCheck(L_6);
		int32_t L_7 = FormattedText_get_position_m2833(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0069;
		}
	}
	{
		ResponseU5BU5D_t571* L_8 = ___responses;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		NullCheck((*(Response_t235 **)(Response_t235 **)SZArrayLdElema(L_8, L_10)));
		FormattedText_t572 * L_11 = ((*(Response_t235 **)(Response_t235 **)SZArrayLdElema(L_8, L_10))->___formattedText_0);
		NullCheck(L_11);
		int32_t L_12 = FormattedText_get_position_m2833(L_11, /*hidden argument*/NULL);
		GUIButtonU5BU5D_t1391* L_13 = (__this->___buttons_7);
		NullCheck(L_13);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_14 = Mathf_Clamp_m2498(NULL /*static, unused*/, L_12, 0, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_13)->max_length)))-(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_14;
		GUIButtonU5BU5D_t1391* L_15 = (__this->___buttons_7);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		ResponseU5BU5D_t571* L_18 = ___responses;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		Transform_t54 * L_21 = ___target;
		UnityResponseMenuControls_SetResponseButton_m7048(__this, (*(GUIButton_t1263 **)(GUIButton_t1263 **)SZArrayLdElema(L_15, L_17)), (*(Response_t235 **)(Response_t235 **)SZArrayLdElema(L_18, L_20)), L_21, /*hidden argument*/NULL);
	}

IL_0069:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_006d:
	{
		int32_t L_23 = V_0;
		ResponseU5BU5D_t571* L_24 = ___responses;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_25 = (((AbstractUIResponseMenuControls_t244 *)__this)->___buttonAlignment_0);
		if (L_25)
		{
			goto IL_00e5;
		}
	}
	{
		V_2 = 0;
		goto IL_00ca;
	}

IL_0088:
	{
		ResponseU5BU5D_t571* L_26 = ___responses;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		NullCheck((*(Response_t235 **)(Response_t235 **)SZArrayLdElema(L_26, L_28)));
		FormattedText_t572 * L_29 = ((*(Response_t235 **)(Response_t235 **)SZArrayLdElema(L_26, L_28))->___formattedText_0);
		NullCheck(L_29);
		int32_t L_30 = FormattedText_get_position_m2833(L_29, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_31 = UnityResponseMenuControls_GetNextAvailableResponseButtonPosition_m7049(__this, 0, 1, /*hidden argument*/NULL);
		GUIButtonU5BU5D_t1391* L_32 = (__this->___buttons_7);
		NullCheck(L_32);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_33 = Mathf_Clamp_m2498(NULL /*static, unused*/, L_31, 0, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))-(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_33;
		GUIButtonU5BU5D_t1391* L_34 = (__this->___buttons_7);
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		int32_t L_36 = L_35;
		ResponseU5BU5D_t571* L_37 = ___responses;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = L_38;
		Transform_t54 * L_40 = ___target;
		UnityResponseMenuControls_SetResponseButton_m7048(__this, (*(GUIButton_t1263 **)(GUIButton_t1263 **)SZArrayLdElema(L_34, L_36)), (*(Response_t235 **)(Response_t235 **)SZArrayLdElema(L_37, L_39)), L_40, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		int32_t L_41 = V_2;
		V_2 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00ca:
	{
		int32_t L_42 = V_2;
		GUIButtonU5BU5D_t1391* L_43 = (__this->___buttons_7);
		NullCheck(L_43);
		ResponseU5BU5D_t571* L_44 = ___responses;
		NullCheck(L_44);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_45 = Mathf_Min_m2836(NULL /*static, unused*/, (((int32_t)(((Array_t *)L_43)->max_length))), (((int32_t)(((Array_t *)L_44)->max_length))), /*hidden argument*/NULL);
		if ((((int32_t)L_42) < ((int32_t)L_45)))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0157;
	}

IL_00e5:
	{
		GUIButtonU5BU5D_t1391* L_46 = (__this->___buttons_7);
		NullCheck(L_46);
		ResponseU5BU5D_t571* L_47 = ___responses;
		NullCheck(L_47);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_48 = Mathf_Min_m2836(NULL /*static, unused*/, (((int32_t)(((Array_t *)L_46)->max_length))), (((int32_t)(((Array_t *)L_47)->max_length))), /*hidden argument*/NULL);
		V_4 = ((int32_t)((int32_t)L_48-(int32_t)1));
		goto IL_014f;
	}

IL_00fe:
	{
		ResponseU5BU5D_t571* L_49 = ___responses;
		int32_t L_50 = V_4;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = L_50;
		NullCheck((*(Response_t235 **)(Response_t235 **)SZArrayLdElema(L_49, L_51)));
		FormattedText_t572 * L_52 = ((*(Response_t235 **)(Response_t235 **)SZArrayLdElema(L_49, L_51))->___formattedText_0);
		NullCheck(L_52);
		int32_t L_53 = FormattedText_get_position_m2833(L_52, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_53) == ((uint32_t)(-1)))))
		{
			goto IL_0149;
		}
	}
	{
		GUIButtonU5BU5D_t1391* L_54 = (__this->___buttons_7);
		NullCheck(L_54);
		int32_t L_55 = UnityResponseMenuControls_GetNextAvailableResponseButtonPosition_m7049(__this, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_54)->max_length)))-(int32_t)1)), (-1), /*hidden argument*/NULL);
		GUIButtonU5BU5D_t1391* L_56 = (__this->___buttons_7);
		NullCheck(L_56);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t589_il2cpp_TypeInfo_var);
		int32_t L_57 = Mathf_Clamp_m2498(NULL /*static, unused*/, L_55, 0, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_56)->max_length)))-(int32_t)1)), /*hidden argument*/NULL);
		V_5 = L_57;
		GUIButtonU5BU5D_t1391* L_58 = (__this->___buttons_7);
		int32_t L_59 = V_5;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = L_59;
		ResponseU5BU5D_t571* L_61 = ___responses;
		int32_t L_62 = V_4;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		int32_t L_63 = L_62;
		Transform_t54 * L_64 = ___target;
		UnityResponseMenuControls_SetResponseButton_m7048(__this, (*(GUIButton_t1263 **)(GUIButton_t1263 **)SZArrayLdElema(L_58, L_60)), (*(Response_t235 **)(Response_t235 **)SZArrayLdElema(L_61, L_63)), L_64, /*hidden argument*/NULL);
	}

IL_0149:
	{
		int32_t L_65 = V_4;
		V_4 = ((int32_t)((int32_t)L_65-(int32_t)1));
	}

IL_014f:
	{
		int32_t L_66 = V_4;
		if ((((int32_t)L_66) >= ((int32_t)0)))
		{
			goto IL_00fe;
		}
	}

IL_0157:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::SetResponseButton(PixelCrushers.DialogueSystem.UnityGUI.GUIButton,PixelCrushers.DialogueSystem.Response,UnityEngine.Transform)
extern "C" void UnityResponseMenuControls_SetResponseButton_m7048 (UnityResponseMenuControls_t1389 * __this, GUIButton_t1263 * ___button, Response_t235 * ___response, Transform_t54 * ___target, const MethodInfo* method)
{
	{
		GUIButton_t1263 * L_0 = ___button;
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		GUIButton_t1263 * L_2 = ___button;
		NullCheck(L_2);
		((GUIControl_t1261 *)L_2)->___visible_8 = 1;
		GUIButton_t1263 * L_3 = ___button;
		Response_t235 * L_4 = ___response;
		NullCheck(L_3);
		L_3->___clickable_28 = ((((int32_t)((((Object_t*)(Response_t235 *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		Response_t235 * L_5 = ___response;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		GUIButton_t1263 * L_6 = ___button;
		Response_t235 * L_7 = ___response;
		NullCheck(L_7);
		FormattedText_t572 * L_8 = (L_7->___formattedText_0);
		NullCheck(L_6);
		VirtActionInvoker1< FormattedText_t572 * >::Invoke(17 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIVisibleControl::SetFormattedText(PixelCrushers.DialogueSystem.FormattedText) */, L_6, L_8);
		goto IL_004d;
	}

IL_0037:
	{
		bool L_9 = (((AbstractUIResponseMenuControls_t244 *)__this)->___showUnusedButtons_1);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		GUIButton_t1263 * L_10 = ___button;
		NullCheck(L_10);
		GUIVisibleControl_SetUnformattedText_m6857(L_10, (String_t*) &_stringLiteral68, /*hidden argument*/NULL);
	}

IL_004d:
	{
		GUIButton_t1263 * L_11 = ___button;
		Transform_t54 * L_12 = ___target;
		NullCheck(L_11);
		L_11->___target_38 = L_12;
		GUIButton_t1263 * L_13 = ___button;
		Response_t235 * L_14 = ___response;
		NullCheck(L_13);
		L_13->___data_39 = L_14;
	}

IL_005b:
	{
		return;
	}
}
// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::GetNextAvailableResponseButtonPosition(System.Int32,System.Int32)
extern "C" int32_t UnityResponseMenuControls_GetNextAvailableResponseButtonPosition_m7049 (UnityResponseMenuControls_t1389 * __this, int32_t ___start, int32_t ___direction, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		GUIButtonU5BU5D_t1391* L_0 = (__this->___buttons_7);
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_1 = ___start;
		V_0 = L_1;
		goto IL_002f;
	}

IL_0012:
	{
		GUIButtonU5BU5D_t1391* L_2 = (__this->___buttons_7);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((*(GUIButton_t1263 **)(GUIButton_t1263 **)SZArrayLdElema(L_2, L_4)));
		bool L_5 = ((*(GUIButton_t1263 **)(GUIButton_t1263 **)SZArrayLdElema(L_2, L_4))->___clickable_28);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___direction;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)L_7));
		goto IL_002f;
	}

IL_002d:
	{
		int32_t L_8 = V_0;
		return L_8;
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)0) > ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_10 = V_0;
		GUIButtonU5BU5D_t1391* L_11 = (__this->___buttons_7);
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0012;
		}
	}

IL_0044:
	{
		return 0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::StartTimer(System.Single)
extern TypeInfo* Action_t250_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisTimerEffect_t1373_m7451_MethodInfo_var;
extern const MethodInfo* UnityResponseMenuControls_OnTimeout_m7051_MethodInfo_var;
extern "C" void UnityResponseMenuControls_StartTimer_m7050 (UnityResponseMenuControls_t1389 * __this, float ___timeout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(137);
		Component_GetComponent_TisTimerEffect_t1373_m7451_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484450);
		UnityResponseMenuControls_OnTimeout_m7051_MethodInfo_var = il2cpp_codegen_method_info_from_index(803);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIProgressBar_t1356 * L_0 = (__this->___timer_6);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00b2;
		}
	}
	{
		TimerEffect_t1373 * L_2 = (__this->___timerEffect_8);
		bool L_3 = Object_op_Equality_m2464(NULL /*static, unused*/, L_2, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		GUIProgressBar_t1356 * L_4 = (__this->___timer_6);
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_4, 1, /*hidden argument*/NULL);
		GUIProgressBar_t1356 * L_5 = (__this->___timer_6);
		NullCheck(L_5);
		TimerEffect_t1373 * L_6 = Component_GetComponent_TisTimerEffect_t1373_m7451(L_5, /*hidden argument*/Component_GetComponent_TisTimerEffect_t1373_m7451_MethodInfo_var);
		__this->___timerEffect_8 = L_6;
		GUIProgressBar_t1356 * L_7 = (__this->___timer_6);
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_7, 0, /*hidden argument*/NULL);
	}

IL_004b:
	{
		TimerEffect_t1373 * L_8 = (__this->___timerEffect_8);
		bool L_9 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_8, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00b2;
		}
	}
	{
		GUIProgressBar_t1356 * L_10 = (__this->___timer_6);
		NullCheck(L_10);
		L_10->___progress_31 = (1.0f);
		TimerEffect_t1373 * L_11 = (__this->___timerEffect_8);
		float L_12 = ___timeout;
		NullCheck(L_11);
		L_11->___duration_3 = L_12;
		TimerEffect_t1373 * L_13 = (__this->___timerEffect_8);
		IntPtr_t L_14 = { (void*)UnityResponseMenuControls_OnTimeout_m7051_MethodInfo_var };
		Action_t250 * L_15 = (Action_t250 *)il2cpp_codegen_object_new (Action_t250_il2cpp_TypeInfo_var);
		Action__ctor_m2554(L_15, __this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		TimerEffect_remove_TimeoutHandler_m6918(L_13, L_15, /*hidden argument*/NULL);
		TimerEffect_t1373 * L_16 = (__this->___timerEffect_8);
		IntPtr_t L_17 = { (void*)UnityResponseMenuControls_OnTimeout_m7051_MethodInfo_var };
		Action_t250 * L_18 = (Action_t250 *)il2cpp_codegen_object_new (Action_t250_il2cpp_TypeInfo_var);
		Action__ctor_m2554(L_18, __this, L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		TimerEffect_add_TimeoutHandler_m6917(L_16, L_18, /*hidden argument*/NULL);
		GUIProgressBar_t1356 * L_19 = (__this->___timer_6);
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_19, 1, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::OnTimeout()
extern TypeInfo* DialogueManager_t607_il2cpp_TypeInfo_var;
extern "C" void UnityResponseMenuControls_OnTimeout_m7051 (UnityResponseMenuControls_t1389 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogueManager_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DialogueManager_t607_il2cpp_TypeInfo_var);
		DialogueSystemController_t631 * L_0 = DialogueManager_get_Instance_m2795(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Component_SendMessage_m2841(L_0, (String_t*) &_stringLiteral125, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_UnitySuMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls::.ctor()
extern "C" void UnitySubtitleControls__ctor_m7052 (UnitySubtitleControls_t1388 * __this, const MethodInfo* method)
{
	{
		AbstractUISubtitleControls__ctor_m2844(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls::get_HasText()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool UnitySubtitleControls_get_HasText_m7053 (UnitySubtitleControls_t1388 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		GUILabel_t1262 * L_0 = (__this->___line_2);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		GUILabel_t1262 * L_2 = (__this->___line_2);
		NullCheck(L_2);
		String_t* L_3 = (((GUIVisibleControl_t1347 *)L_2)->___text_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		return G_B3_0;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls::SetActive(System.Boolean)
extern "C" void UnitySubtitleControls_SetActive_m7054 (UnitySubtitleControls_t1388 * __this, bool ___value, const MethodInfo* method)
{
	{
		GUILabel_t1262 * L_0 = (__this->___line_2);
		bool L_1 = ___value;
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		GUILabel_t1262 * L_2 = (__this->___portraitImage_3);
		bool L_3 = ___value;
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		GUILabel_t1262 * L_4 = (__this->___portraitName_4);
		bool L_5 = ___value;
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		GUIButton_t1263 * L_6 = (__this->___continueButton_5);
		bool L_7 = ___value;
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		GUIControl_t1261 * L_8 = (__this->___panel_1);
		bool L_9 = ___value;
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls::SetSubtitle(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void UnitySubtitleControls_SetSubtitle_m7055 (UnitySubtitleControls_t1388 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method)
{
	{
		GUILabel_t1262 * L_0 = (__this->___portraitImage_3);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GUILabel_t1262 * L_2 = (__this->___portraitImage_3);
		Subtitle_t570 * L_3 = ___subtitle;
		NullCheck(L_3);
		Texture2D_t90 * L_4 = Subtitle_GetSpeakerPortrait_m2845(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->___image_31 = L_4;
	}

IL_0022:
	{
		GUILabel_t1262 * L_5 = (__this->___portraitName_4);
		bool L_6 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_5, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		GUILabel_t1262 * L_7 = (__this->___portraitName_4);
		Subtitle_t570 * L_8 = ___subtitle;
		NullCheck(L_8);
		CharacterInfo_t628 * L_9 = (L_8->___speakerInfo_0);
		NullCheck(L_9);
		String_t* L_10 = CharacterInfo_get_Name_m2783(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		((GUIVisibleControl_t1347 *)L_7)->___text_20 = L_10;
	}

IL_0049:
	{
		GUILabel_t1262 * L_11 = (__this->___line_2);
		bool L_12 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_11, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		GUILabel_t1262 * L_13 = (__this->___line_2);
		Subtitle_t570 * L_14 = ___subtitle;
		NullCheck(L_14);
		FormattedText_t572 * L_15 = (L_14->___formattedText_2);
		NullCheck(L_13);
		VirtActionInvoker1< FormattedText_t572 * >::Invoke(17 /* System.Void PixelCrushers.DialogueSystem.UnityGUI.GUILabel::SetFormattedText(PixelCrushers.DialogueSystem.FormattedText) */, L_13, L_15);
	}

IL_006b:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls::ClearSubtitle()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void UnitySubtitleControls_ClearSubtitle_m7056 (UnitySubtitleControls_t1388 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUILabel_t1262 * L_0 = (__this->___portraitImage_3);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GUILabel_t1262 * L_2 = (__this->___portraitImage_3);
		NullCheck(L_2);
		L_2->___image_31 = (Texture2D_t90 *)NULL;
	}

IL_001d:
	{
		GUILabel_t1262 * L_3 = (__this->___portraitName_4);
		bool L_4 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_3, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		GUILabel_t1262 * L_5 = (__this->___portraitName_4);
		NullCheck(L_5);
		((GUIVisibleControl_t1347 *)L_5)->___text_20 = (String_t*)NULL;
	}

IL_003a:
	{
		GUILabel_t1262 * L_6 = (__this->___line_2);
		bool L_7 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_6, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		GUILabel_t1262 * L_8 = (__this->___line_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_8);
		GUIVisibleControl_SetUnformattedText_m6857(L_8, L_9, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls::HideContinueButton()
extern "C" void UnitySubtitleControls_HideContinueButton_m7057 (UnitySubtitleControls_t1388 * __this, const MethodInfo* method)
{
	{
		GUIButton_t1263 * L_0 = (__this->___continueButton_5);
		UnityDialogueUIControls_SetControlActive_m7032(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnitySubtitleControls::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void UnitySubtitleControls_SetActorPortraitTexture_m7058 (UnitySubtitleControls_t1388 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		Subtitle_t570 * L_0 = (((AbstractUISubtitleControls_t246 *)__this)->___currentSubtitle_0);
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		Subtitle_t570 * L_1 = (((AbstractUISubtitleControls_t246 *)__this)->___currentSubtitle_0);
		NullCheck(L_1);
		CharacterInfo_t628 * L_2 = (L_1->___speakerInfo_0);
		NullCheck(L_2);
		String_t* L_3 = (L_2->___nameInDatabase_1);
		String_t* L_4 = ___actorName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_Equals_m2829(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		GUILabel_t1262 * L_6 = (__this->___portraitImage_3);
		bool L_7 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_6, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		GUILabel_t1262 * L_8 = (__this->___portraitImage_3);
		String_t* L_9 = ___actorName;
		Texture2D_t90 * L_10 = ___portraitTexture;
		Texture2D_t90 * L_11 = AbstractDialogueUI_GetValidPortraitTexture_m2830(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->___image_31 = L_11;
	}

IL_0049:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// PixelCrushers.DialogueSystem.AbstractUIRoot
#include "DialogueSystem_PixelCrushers_DialogueSystem_AbstractUIRootMethodDeclarations.h"


// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityUIRoot::.ctor(PixelCrushers.DialogueSystem.UnityGUI.GUIRoot)
extern "C" void UnityUIRoot__ctor_m7059 (UnityUIRoot_t1385 * __this, GUIRoot_t1265 * ___guiRoot, const MethodInfo* method)
{
	{
		AbstractUIRoot__ctor_m2843(__this, /*hidden argument*/NULL);
		GUIRoot_t1265 * L_0 = ___guiRoot;
		__this->___guiRoot_0 = L_0;
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityUIRoot::Show()
extern "C" void UnityUIRoot_Show_m7060 (UnityUIRoot_t1385 * __this, const MethodInfo* method)
{
	{
		GUIRoot_t1265 * L_0 = (__this->___guiRoot_0);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		GUIRoot_t1265 * L_2 = (__this->___guiRoot_0);
		NullCheck(L_2);
		GameObject_t49 * L_3 = Component_get_gameObject_m2452(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m2429(L_3, 1, /*hidden argument*/NULL);
		GUIRoot_t1265 * L_4 = (__this->___guiRoot_0);
		NullCheck(L_4);
		GUIRoot_ManualRefresh_m6823(L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityUIRoot::Hide()
extern "C" void UnityUIRoot_Hide_m7061 (UnityUIRoot_t1385 * __this, const MethodInfo* method)
{
	{
		GUIRoot_t1265 * L_0 = (__this->___guiRoot_0);
		bool L_1 = Object_op_Inequality_m2419(NULL /*static, unused*/, L_0, (Object_t584 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GUIRoot_t1265 * L_2 = (__this->___guiRoot_0);
		NullCheck(L_2);
		GameObject_t49 * L_3 = Component_get_gameObject_m2452(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m2429(L_3, 0, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// PixelCrushers.DialogueSystem.LuaChangedDelegate
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaChangedDelega.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.LuaChangedDelegate
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaChangedDelegaMethodDeclarations.h"

// PixelCrushers.DialogueSystem.LuaWatchItem
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchItem.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void PixelCrushers.DialogueSystem.LuaChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void LuaChangedDelegate__ctor_m3402 (LuaChangedDelegate_t724 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PixelCrushers.DialogueSystem.LuaChangedDelegate::Invoke(PixelCrushers.DialogueSystem.LuaWatchItem,PixelCrushers.DialogueSystem.Lua/Result)
extern "C" void LuaChangedDelegate_Invoke_m7062 (LuaChangedDelegate_t724 * __this, LuaWatchItem_t582 * ___luaWatchItem, Result_t583  ___newValue, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LuaChangedDelegate_Invoke_m7062((LuaChangedDelegate_t724 *)__this->___prev_9,___luaWatchItem, ___newValue, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, LuaWatchItem_t582 * ___luaWatchItem, Result_t583  ___newValue, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___luaWatchItem, ___newValue,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, LuaWatchItem_t582 * ___luaWatchItem, Result_t583  ___newValue, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___luaWatchItem, ___newValue,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Result_t583  ___newValue, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___luaWatchItem, ___newValue,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LuaChangedDelegate_t724(Il2CppObject* delegate, LuaWatchItem_t582 * ___luaWatchItem, Result_t583  ___newValue)
{
	// Marshaling of parameter '___luaWatchItem' to native representation
	LuaWatchItem_t582 * ____luaWatchItem_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'PixelCrushers.DialogueSystem.LuaWatchItem'."));
}
// System.IAsyncResult PixelCrushers.DialogueSystem.LuaChangedDelegate::BeginInvoke(PixelCrushers.DialogueSystem.LuaWatchItem,PixelCrushers.DialogueSystem.Lua/Result,System.AsyncCallback,System.Object)
extern TypeInfo* Result_t583_il2cpp_TypeInfo_var;
extern "C" Object_t * LuaChangedDelegate_BeginInvoke_m7063 (LuaChangedDelegate_t724 * __this, LuaWatchItem_t582 * ___luaWatchItem, Result_t583  ___newValue, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Result_t583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1597);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___luaWatchItem;
	__d_args[1] = Box(Result_t583_il2cpp_TypeInfo_var, &___newValue);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PixelCrushers.DialogueSystem.LuaChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void LuaChangedDelegate_EndInvoke_m7064 (LuaChangedDelegate_t724 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate
#include "DialogueSystem_PixelCrushers_DialogueSystem_IsDialogueEntryVMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void IsDialogueEntryValidDelegate__ctor_m7065 (IsDialogueEntryValidDelegate_t1094 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate::Invoke(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" bool IsDialogueEntryValidDelegate_Invoke_m7066 (IsDialogueEntryValidDelegate_t1094 * __this, DialogueEntry_t1102 * ___dialogueEntry, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		IsDialogueEntryValidDelegate_Invoke_m7066((IsDialogueEntryValidDelegate_t1094 *)__this->___prev_9,___dialogueEntry, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, DialogueEntry_t1102 * ___dialogueEntry, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___dialogueEntry,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, DialogueEntry_t1102 * ___dialogueEntry, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___dialogueEntry,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___dialogueEntry,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_IsDialogueEntryValidDelegate_t1094(Il2CppObject* delegate, DialogueEntry_t1102 * ___dialogueEntry)
{
	// Marshaling of parameter '___dialogueEntry' to native representation
	DialogueEntry_t1102 * ____dialogueEntry_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'PixelCrushers.DialogueSystem.DialogueEntry'."));
}
// System.IAsyncResult PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate::BeginInvoke(PixelCrushers.DialogueSystem.DialogueEntry,System.AsyncCallback,System.Object)
extern "C" Object_t * IsDialogueEntryValidDelegate_BeginInvoke_m7067 (IsDialogueEntryValidDelegate_t1094 * __this, DialogueEntry_t1102 * ___dialogueEntry, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___dialogueEntry;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate::EndInvoke(System.IAsyncResult)
extern "C" bool IsDialogueEntryValidDelegate_EndInvoke_m7068 (IsDialogueEntryValidDelegate_t1094 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueEntrySpo.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueEntrySpoMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void DialogueEntrySpokenDelegate__ctor_m7069 (DialogueEntrySpokenDelegate_t1198 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate::Invoke(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void DialogueEntrySpokenDelegate_Invoke_m7070 (DialogueEntrySpokenDelegate_t1198 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DialogueEntrySpokenDelegate_Invoke_m7070((DialogueEntrySpokenDelegate_t1198 *)__this->___prev_9,___subtitle, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___subtitle,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___subtitle,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___subtitle,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_DialogueEntrySpokenDelegate_t1198(Il2CppObject* delegate, Subtitle_t570 * ___subtitle)
{
	// Marshaling of parameter '___subtitle' to native representation
	Subtitle_t570 * ____subtitle_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'PixelCrushers.DialogueSystem.Subtitle'."));
}
// System.IAsyncResult PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate::BeginInvoke(PixelCrushers.DialogueSystem.Subtitle,System.AsyncCallback,System.Object)
extern "C" Object_t * DialogueEntrySpokenDelegate_BeginInvoke_m7071 (DialogueEntrySpokenDelegate_t1198 * __this, Subtitle_t570 * ___subtitle, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___subtitle;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DialogueEntrySpokenDelegate_EndInvoke_m7072 (DialogueEntrySpokenDelegate_t1198 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void PixelCrushers.DialogueSystem.AcceptedTextDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void AcceptedTextDelegate__ctor_m7073 (AcceptedTextDelegate_t248 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void PixelCrushers.DialogueSystem.AcceptedTextDelegate::Invoke(System.String)
extern "C" void AcceptedTextDelegate_Invoke_m7074 (AcceptedTextDelegate_t248 * __this, String_t* ___text, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AcceptedTextDelegate_Invoke_m7074((AcceptedTextDelegate_t248 *)__this->___prev_9,___text, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___text, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___text,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___text, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___text,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___text,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AcceptedTextDelegate_t248(Il2CppObject* delegate, String_t* ___text)
{
	typedef void (STDCALL *native_function_ptr_type)(char*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___text' to native representation
	char* ____text_marshaled = { 0 };
	____text_marshaled = il2cpp_codegen_marshal_string(___text);

	// Native function invocation
	_il2cpp_pinvoke_func(____text_marshaled);

	// Marshaling cleanup of parameter '___text' native representation
	il2cpp_codegen_marshal_free(____text_marshaled);
	____text_marshaled = NULL;

}
// System.IAsyncResult PixelCrushers.DialogueSystem.AcceptedTextDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * AcceptedTextDelegate_BeginInvoke_m7075 (AcceptedTextDelegate_t248 * __this, String_t* ___text, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___text;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void PixelCrushers.DialogueSystem.AcceptedTextDelegate::EndInvoke(System.IAsyncResult)
extern "C" void AcceptedTextDelegate_EndInvoke_m7076 (AcceptedTextDelegate_t248 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate
#include "DialogueSystem_PixelCrushers_DialogueSystem_GetCustomSaveDat.h"
#ifndef _MSC_VER
#else
#endif
// PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate
#include "DialogueSystem_PixelCrushers_DialogueSystem_GetCustomSaveDatMethodDeclarations.h"



// System.Void PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void GetCustomSaveDataDelegate__ctor_m7077 (GetCustomSaveDataDelegate_t1276 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.String PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate::Invoke()
extern "C" String_t* GetCustomSaveDataDelegate_Invoke_m7078 (GetCustomSaveDataDelegate_t1276 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetCustomSaveDataDelegate_Invoke_m7078((GetCustomSaveDataDelegate_t1276 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef String_t* (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef String_t* (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" String_t* pinvoke_delegate_wrapper_GetCustomSaveDataDelegate_t1276(Il2CppObject* delegate)
{
	typedef char* (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation and marshaling of return value back from native representation
	char* _return_value = _il2cpp_pinvoke_func();
	String_t* __return_value_unmarshaled = { 0 };
	__return_value_unmarshaled = il2cpp_codegen_marshal_string_result(_return_value);
	il2cpp_codegen_marshal_free(_return_value);
	_return_value = NULL;

	return __return_value_unmarshaled;
}
// System.IAsyncResult PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GetCustomSaveDataDelegate_BeginInvoke_m7079 (GetCustomSaveDataDelegate_t1276 * __this, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.String PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate::EndInvoke(System.IAsyncResult)
extern "C" String_t* GetCustomSaveDataDelegate_EndInvoke_m7080 (GetCustomSaveDataDelegate_t1276 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (String_t*)__result;
}
// <PrivateImplementationDetails>/$ArrayType$8
#include "DialogueSystem_U3CPrivateImplementationDetailsU3E_U24ArrayTy.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$8
#include "DialogueSystem_U3CPrivateImplementationDetailsU3E_U24ArrayTyMethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$8
void U24ArrayTypeU248_t1392_marshal(const U24ArrayTypeU248_t1392& unmarshaled, U24ArrayTypeU248_t1392_marshaled& marshaled)
{
}
void U24ArrayTypeU248_t1392_marshal_back(const U24ArrayTypeU248_t1392_marshaled& marshaled, U24ArrayTypeU248_t1392& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$8
void U24ArrayTypeU248_t1392_marshal_cleanup(U24ArrayTypeU248_t1392_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>
#include "DialogueSystem_U3CPrivateImplementationDetailsU3E.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>
#include "DialogueSystem_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"



// System.Void <PrivateImplementationDetails>::.ctor()
extern "C" void U3CPrivateImplementationDetailsU3E__ctor_m7081 (U3CPrivateImplementationDetailsU3E_t1393 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
