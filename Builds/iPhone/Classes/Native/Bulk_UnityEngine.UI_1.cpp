#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.UI.LayoutElement
#include "UnityEngine_UI_UnityEngine_UI_LayoutElement.h"
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
// UnityEngine.UI.LayoutElement
#include "UnityEngine_UI_UnityEngine_UI_LayoutElementMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.UI.SetPropertyUtility
#include "UnityEngine_UI_UnityEngine_UI_SetPropertyUtilityMethodDeclarations.h"
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.UI.LayoutRebuilder
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilderMethodDeclarations.h"
struct SetPropertyUtility_t2079;
// UnityEngine.UI.SetPropertyUtility
#include "UnityEngine_UI_UnityEngine_UI_SetPropertyUtility.h"
struct SetPropertyUtility_t2079;
// Declaration System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Byte>(!!0&,!!0)
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Byte>(!!0&,!!0)
extern "C" bool SetPropertyUtility_SetStruct_TisByte_t26_m9403_gshared (Object_t * __this /* static, unused */, uint8_t* p0, uint8_t p1, const MethodInfo* method);
#define SetPropertyUtility_SetStruct_TisByte_t26_m9403(__this /* static, unused */, p0, p1, method) (( bool (*) (Object_t * /* static, unused */, uint8_t*, uint8_t, const MethodInfo*))SetPropertyUtility_SetStruct_TisByte_t26_m9403_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Boolean>(!!0&,!!0)
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Boolean>(!!0&,!!0)
#define SetPropertyUtility_SetStruct_TisBoolean_t30_m9402(__this /* static, unused */, p0, p1, method) (( bool (*) (Object_t * /* static, unused */, bool*, bool, const MethodInfo*))SetPropertyUtility_SetStruct_TisByte_t26_m9403_gshared)(__this /* static, unused */, p0, p1, method)
struct SetPropertyUtility_t2079;
// Declaration System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Single>(!!0&,!!0)
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Single>(!!0&,!!0)
extern "C" bool SetPropertyUtility_SetStruct_TisSingle_t583_m9405_gshared (Object_t * __this /* static, unused */, float* p0, float p1, const MethodInfo* method);
#define SetPropertyUtility_SetStruct_TisSingle_t583_m9405(__this /* static, unused */, p0, p1, method) (( bool (*) (Object_t * /* static, unused */, float*, float, const MethodInfo*))SetPropertyUtility_SetStruct_TisSingle_t583_m9405_gshared)(__this /* static, unused */, p0, p1, method)

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.UI.LayoutElement::.ctor()
extern "C" void LayoutElement__ctor_m9117 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		__this->___m_MinWidth_3 = (-1.0f);
		__this->___m_MinHeight_4 = (-1.0f);
		__this->___m_PreferredWidth_5 = (-1.0f);
		__this->___m_PreferredHeight_6 = (-1.0f);
		__this->___m_FlexibleWidth_7 = (-1.0f);
		__this->___m_FlexibleHeight_8 = (-1.0f);
		UIBehaviour__ctor_m8206(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.LayoutElement::get_ignoreLayout()
extern "C" bool LayoutElement_get_ignoreLayout_m9118 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IgnoreLayout_2);
		return L_0;
	}
}
// System.Void UnityEngine.UI.LayoutElement::set_ignoreLayout(System.Boolean)
extern const MethodInfo* SetPropertyUtility_SetStruct_TisBoolean_t30_m9402_MethodInfo_var;
extern "C" void LayoutElement_set_ignoreLayout_m9119 (LayoutElement_t2109 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SetPropertyUtility_SetStruct_TisBoolean_t30_m9402_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484720);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool* L_0 = &(__this->___m_IgnoreLayout_2);
		bool L_1 = ___value;
		bool L_2 = SetPropertyUtility_SetStruct_TisBoolean_t30_m9402(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/SetPropertyUtility_SetStruct_TisBoolean_t30_m9402_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		LayoutElement_SetDirty_m9140(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.UI.LayoutElement::CalculateLayoutInputHorizontal()
extern "C" void LayoutElement_CalculateLayoutInputHorizontal_m9120 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UI.LayoutElement::CalculateLayoutInputVertical()
extern "C" void LayoutElement_CalculateLayoutInputVertical_m9121 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Single UnityEngine.UI.LayoutElement::get_minWidth()
extern "C" float LayoutElement_get_minWidth_m9122 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_MinWidth_3);
		return L_0;
	}
}
// System.Void UnityEngine.UI.LayoutElement::set_minWidth(System.Single)
extern const MethodInfo* SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var;
extern "C" void LayoutElement_set_minWidth_m9123 (LayoutElement_t2109 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484722);
		s_Il2CppMethodIntialized = true;
	}
	{
		float* L_0 = &(__this->___m_MinWidth_3);
		float L_1 = ___value;
		bool L_2 = SetPropertyUtility_SetStruct_TisSingle_t583_m9405(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		LayoutElement_SetDirty_m9140(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Single UnityEngine.UI.LayoutElement::get_minHeight()
extern "C" float LayoutElement_get_minHeight_m9124 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_MinHeight_4);
		return L_0;
	}
}
// System.Void UnityEngine.UI.LayoutElement::set_minHeight(System.Single)
extern const MethodInfo* SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var;
extern "C" void LayoutElement_set_minHeight_m9125 (LayoutElement_t2109 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484722);
		s_Il2CppMethodIntialized = true;
	}
	{
		float* L_0 = &(__this->___m_MinHeight_4);
		float L_1 = ___value;
		bool L_2 = SetPropertyUtility_SetStruct_TisSingle_t583_m9405(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		LayoutElement_SetDirty_m9140(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Single UnityEngine.UI.LayoutElement::get_preferredWidth()
extern "C" float LayoutElement_get_preferredWidth_m9126 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_PreferredWidth_5);
		return L_0;
	}
}
// System.Void UnityEngine.UI.LayoutElement::set_preferredWidth(System.Single)
extern const MethodInfo* SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var;
extern "C" void LayoutElement_set_preferredWidth_m9127 (LayoutElement_t2109 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484722);
		s_Il2CppMethodIntialized = true;
	}
	{
		float* L_0 = &(__this->___m_PreferredWidth_5);
		float L_1 = ___value;
		bool L_2 = SetPropertyUtility_SetStruct_TisSingle_t583_m9405(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		LayoutElement_SetDirty_m9140(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Single UnityEngine.UI.LayoutElement::get_preferredHeight()
extern "C" float LayoutElement_get_preferredHeight_m9128 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_PreferredHeight_6);
		return L_0;
	}
}
// System.Void UnityEngine.UI.LayoutElement::set_preferredHeight(System.Single)
extern const MethodInfo* SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var;
extern "C" void LayoutElement_set_preferredHeight_m9129 (LayoutElement_t2109 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484722);
		s_Il2CppMethodIntialized = true;
	}
	{
		float* L_0 = &(__this->___m_PreferredHeight_6);
		float L_1 = ___value;
		bool L_2 = SetPropertyUtility_SetStruct_TisSingle_t583_m9405(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		LayoutElement_SetDirty_m9140(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Single UnityEngine.UI.LayoutElement::get_flexibleWidth()
extern "C" float LayoutElement_get_flexibleWidth_m9130 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FlexibleWidth_7);
		return L_0;
	}
}
// System.Void UnityEngine.UI.LayoutElement::set_flexibleWidth(System.Single)
extern const MethodInfo* SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var;
extern "C" void LayoutElement_set_flexibleWidth_m9131 (LayoutElement_t2109 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484722);
		s_Il2CppMethodIntialized = true;
	}
	{
		float* L_0 = &(__this->___m_FlexibleWidth_7);
		float L_1 = ___value;
		bool L_2 = SetPropertyUtility_SetStruct_TisSingle_t583_m9405(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		LayoutElement_SetDirty_m9140(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Single UnityEngine.UI.LayoutElement::get_flexibleHeight()
extern "C" float LayoutElement_get_flexibleHeight_m9132 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FlexibleHeight_8);
		return L_0;
	}
}
// System.Void UnityEngine.UI.LayoutElement::set_flexibleHeight(System.Single)
extern const MethodInfo* SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var;
extern "C" void LayoutElement_set_flexibleHeight_m9133 (LayoutElement_t2109 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484722);
		s_Il2CppMethodIntialized = true;
	}
	{
		float* L_0 = &(__this->___m_FlexibleHeight_8);
		float L_1 = ___value;
		bool L_2 = SetPropertyUtility_SetStruct_TisSingle_t583_m9405(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/SetPropertyUtility_SetStruct_TisSingle_t583_m9405_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		LayoutElement_SetDirty_m9140(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Int32 UnityEngine.UI.LayoutElement::get_layoutPriority()
extern "C" int32_t LayoutElement_get_layoutPriority_m9134 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.UI.LayoutElement::OnEnable()
extern "C" void LayoutElement_OnEnable_m9135 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		UIBehaviour_OnEnable_m8208(__this, /*hidden argument*/NULL);
		LayoutElement_SetDirty_m9140(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutElement::OnTransformParentChanged()
extern "C" void LayoutElement_OnTransformParentChanged_m9136 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		LayoutElement_SetDirty_m9140(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutElement::OnDisable()
extern "C" void LayoutElement_OnDisable_m9137 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		LayoutElement_SetDirty_m9140(__this, /*hidden argument*/NULL);
		UIBehaviour_OnDisable_m8210(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutElement::OnDidApplyAnimationProperties()
extern "C" void LayoutElement_OnDidApplyAnimationProperties_m9138 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		LayoutElement_SetDirty_m9140(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutElement::OnBeforeTransformParentChanged()
extern "C" void LayoutElement_OnBeforeTransformParentChanged_m9139 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	{
		LayoutElement_SetDirty_m9140(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutElement::SetDirty()
extern TypeInfo* RectTransform_t259_il2cpp_TypeInfo_var;
extern TypeInfo* LayoutRebuilder_t2113_il2cpp_TypeInfo_var;
extern "C" void LayoutElement_SetDirty_m9140 (LayoutElement_t2109 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4005);
		LayoutRebuilder_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4003);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
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
		Transform_t54 * L_1 = Component_get_transform_m2334(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		LayoutRebuilder_MarkLayoutForRebuild_m9178(NULL /*static, unused*/, ((RectTransform_t259 *)IsInst(L_1, RectTransform_t259_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UI.LayoutGroup
#include "UnityEngine_UI_UnityEngine_UI_LayoutGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UI.LayoutGroup
#include "UnityEngine_UI_UnityEngine_UI_LayoutGroupMethodDeclarations.h"

// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_gen_80.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_Edge.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_gen_80MethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTrackerMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
struct LayoutGroup_t2106;
struct RectOffset_t648;
struct LayoutGroup_t2106;
struct Object_t;
// Declaration System.Void UnityEngine.UI.LayoutGroup::SetProperty<System.Object>(!!0&,!!0)
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<System.Object>(!!0&,!!0)
extern "C" void LayoutGroup_SetProperty_TisObject_t_m9589_gshared (LayoutGroup_t2106 * __this, Object_t ** p0, Object_t * p1, const MethodInfo* method);
#define LayoutGroup_SetProperty_TisObject_t_m9589(__this, p0, p1, method) (( void (*) (LayoutGroup_t2106 *, Object_t **, Object_t *, const MethodInfo*))LayoutGroup_SetProperty_TisObject_t_m9589_gshared)(__this, p0, p1, method)
// Declaration System.Void UnityEngine.UI.LayoutGroup::SetProperty<UnityEngine.RectOffset>(!!0&,!!0)
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<UnityEngine.RectOffset>(!!0&,!!0)
#define LayoutGroup_SetProperty_TisRectOffset_t648_m9588(__this, p0, p1, method) (( void (*) (LayoutGroup_t2106 *, RectOffset_t648 **, RectOffset_t648 *, const MethodInfo*))LayoutGroup_SetProperty_TisObject_t_m9589_gshared)(__this, p0, p1, method)
struct LayoutGroup_t2106;
struct LayoutGroup_t2106;
// Declaration System.Void UnityEngine.UI.LayoutGroup::SetProperty<System.Int32>(!!0&,!!0)
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<System.Int32>(!!0&,!!0)
extern "C" void LayoutGroup_SetProperty_TisInt32_t29_m9578_gshared (LayoutGroup_t2106 * __this, int32_t* p0, int32_t p1, const MethodInfo* method);
#define LayoutGroup_SetProperty_TisInt32_t29_m9578(__this, p0, p1, method) (( void (*) (LayoutGroup_t2106 *, int32_t*, int32_t, const MethodInfo*))LayoutGroup_SetProperty_TisInt32_t29_m9578_gshared)(__this, p0, p1, method)
// Declaration System.Void UnityEngine.UI.LayoutGroup::SetProperty<UnityEngine.TextAnchor>(!!0&,!!0)
// System.Void UnityEngine.UI.LayoutGroup::SetProperty<UnityEngine.TextAnchor>(!!0&,!!0)
#define LayoutGroup_SetProperty_TisTextAnchor_t1175_m9590(__this, p0, p1, method) (( void (*) (LayoutGroup_t2106 *, int32_t*, int32_t, const MethodInfo*))LayoutGroup_SetProperty_TisInt32_t29_m9578_gshared)(__this, p0, p1, method)
struct Component_t462;
struct RectTransform_t259;
struct Component_t462;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m2325_gshared (Component_t462 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m2325(__this, method) (( Object_t * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2325_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t259_m9356(__this, method) (( RectTransform_t259 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2325_gshared)(__this, method)


// System.Void UnityEngine.UI.LayoutGroup::.ctor()
extern TypeInfo* RectOffset_t648_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t2110_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m9592_MethodInfo_var;
extern "C" void LayoutGroup__ctor_m9141 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectOffset_t648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(315);
		List_1_t2110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4082);
		List_1__ctor_m9592_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484785);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectOffset_t648 * L_0 = (RectOffset_t648 *)il2cpp_codegen_object_new (RectOffset_t648_il2cpp_TypeInfo_var);
		RectOffset__ctor_m9591(L_0, /*hidden argument*/NULL);
		__this->___m_Padding_2 = L_0;
		Vector2_t97  L_1 = Vector2_get_zero_m2850(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_TotalMinSize_6 = L_1;
		Vector2_t97  L_2 = Vector2_get_zero_m2850(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_TotalPreferredSize_7 = L_2;
		Vector2_t97  L_3 = Vector2_get_zero_m2850(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___m_TotalFlexibleSize_8 = L_3;
		List_1_t2110 * L_4 = (List_1_t2110 *)il2cpp_codegen_object_new (List_1_t2110_il2cpp_TypeInfo_var);
		List_1__ctor_m9592(L_4, /*hidden argument*/List_1__ctor_m9592_MethodInfo_var);
		__this->___m_RectChildren_9 = L_4;
		UIBehaviour__ctor_m8206(__this, /*hidden argument*/NULL);
		RectOffset_t648 * L_5 = (__this->___m_Padding_2);
		if (L_5)
		{
			goto IL_0053;
		}
	}
	{
		RectOffset_t648 * L_6 = (RectOffset_t648 *)il2cpp_codegen_object_new (RectOffset_t648_il2cpp_TypeInfo_var);
		RectOffset__ctor_m9591(L_6, /*hidden argument*/NULL);
		__this->___m_Padding_2 = L_6;
	}

IL_0053:
	{
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::get_padding()
extern "C" RectOffset_t648 * LayoutGroup_get_padding_m9142 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	{
		RectOffset_t648 * L_0 = (__this->___m_Padding_2);
		return L_0;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::set_padding(UnityEngine.RectOffset)
extern const MethodInfo* LayoutGroup_SetProperty_TisRectOffset_t648_m9588_MethodInfo_var;
extern "C" void LayoutGroup_set_padding_m9143 (LayoutGroup_t2106 * __this, RectOffset_t648 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LayoutGroup_SetProperty_TisRectOffset_t648_m9588_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484786);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectOffset_t648 ** L_0 = &(__this->___m_Padding_2);
		RectOffset_t648 * L_1 = ___value;
		LayoutGroup_SetProperty_TisRectOffset_t648_m9588(__this, L_0, L_1, /*hidden argument*/LayoutGroup_SetProperty_TisRectOffset_t648_m9588_MethodInfo_var);
		return;
	}
}
// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::get_childAlignment()
extern "C" int32_t LayoutGroup_get_childAlignment_m9144 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_ChildAlignment_3);
		return L_0;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::set_childAlignment(UnityEngine.TextAnchor)
extern const MethodInfo* LayoutGroup_SetProperty_TisTextAnchor_t1175_m9590_MethodInfo_var;
extern "C" void LayoutGroup_set_childAlignment_m9145 (LayoutGroup_t2106 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LayoutGroup_SetProperty_TisTextAnchor_t1175_m9590_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484787);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t* L_0 = &(__this->___m_ChildAlignment_3);
		int32_t L_1 = ___value;
		LayoutGroup_SetProperty_TisTextAnchor_t1175_m9590(__this, L_0, L_1, /*hidden argument*/LayoutGroup_SetProperty_TisTextAnchor_t1175_m9590_MethodInfo_var);
		return;
	}
}
// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::get_rectTransform()
extern const MethodInfo* Component_GetComponent_TisRectTransform_t259_m9356_MethodInfo_var;
extern "C" RectTransform_t259 * LayoutGroup_get_rectTransform_m9146 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t259_m9356_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484701);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t259 * L_0 = (__this->___m_Rect_4);
		bool L_1 = Object_op_Equality_m2377(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RectTransform_t259 * L_2 = Component_GetComponent_TisRectTransform_t259_m9356(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t259_m9356_MethodInfo_var);
		__this->___m_Rect_4 = L_2;
	}

IL_001d:
	{
		RectTransform_t259 * L_3 = (__this->___m_Rect_4);
		return L_3;
	}
}
// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::get_rectChildren()
extern "C" List_1_t2110 * LayoutGroup_get_rectChildren_m9147 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	{
		List_1_t2110 * L_0 = (__this->___m_RectChildren_9);
		return L_0;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputHorizontal()
extern const Il2CppType* ILayoutIgnorer_t2185_0_0_0_var;
extern TypeInfo* RectTransform_t259_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ILayoutIgnorer_t2185_il2cpp_TypeInfo_var;
extern "C" void LayoutGroup_CalculateLayoutInputHorizontal_m9148 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutIgnorer_t2185_0_0_0_var = il2cpp_codegen_type_from_index(4083);
		RectTransform_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4005);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		ILayoutIgnorer_t2185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4083);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t259 * V_1 = {0};
	Object_t * V_2 = {0};
	{
		List_1_t2110 * L_0 = (__this->___m_RectChildren_9);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Clear() */, L_0);
		V_0 = 0;
		goto IL_007c;
	}

IL_0012:
	{
		RectTransform_t259 * L_1 = LayoutGroup_get_rectTransform_m9146(__this, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_t54 * L_3 = Transform_GetChild_m3057(L_1, L_2, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t259 *)IsInst(L_3, RectTransform_t259_il2cpp_TypeInfo_var));
		RectTransform_t259 * L_4 = V_1;
		bool L_5 = Object_op_Equality_m2377(NULL /*static, unused*/, L_4, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0078;
	}

IL_0035:
	{
		RectTransform_t259 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(ILayoutIgnorer_t2185_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		Component_t462 * L_8 = Component_GetComponent_m5496(L_6, L_7, /*hidden argument*/NULL);
		V_2 = ((Object_t *)IsInst(L_8, ILayoutIgnorer_t2185_il2cpp_TypeInfo_var));
		RectTransform_t259 * L_9 = V_1;
		NullCheck(L_9);
		GameObject_t49 * L_10 = Component_get_gameObject_m2365(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11 = GameObject_get_activeInHierarchy_m2462(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		Object_t * L_12 = V_2;
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		Object_t * L_13 = V_2;
		NullCheck(L_13);
		bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.UI.ILayoutIgnorer::get_ignoreLayout() */, ILayoutIgnorer_t2185_il2cpp_TypeInfo_var, L_13);
		if (L_14)
		{
			goto IL_0078;
		}
	}

IL_006c:
	{
		List_1_t2110 * L_15 = (__this->___m_RectChildren_9);
		RectTransform_t259 * L_16 = V_1;
		NullCheck(L_15);
		VirtActionInvoker1< RectTransform_t259 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Add(!0) */, L_15, L_16);
	}

IL_0078:
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_18 = V_0;
		RectTransform_t259 * L_19 = LayoutGroup_get_rectTransform_m9146(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = Transform_get_childCount_m2369(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}
	{
		DrivenRectTransformTracker_t2069 * L_21 = &(__this->___m_Tracker_5);
		DrivenRectTransformTracker_Clear_m9511(L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputVertical()
// System.Single UnityEngine.UI.LayoutGroup::get_minWidth()
extern "C" float LayoutGroup_get_minWidth_m9149 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	{
		float L_0 = LayoutGroup_GetTotalMinSize_m9159(__this, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.UI.LayoutGroup::get_preferredWidth()
extern "C" float LayoutGroup_get_preferredWidth_m9150 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	{
		float L_0 = LayoutGroup_GetTotalPreferredSize_m9160(__this, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleWidth()
extern "C" float LayoutGroup_get_flexibleWidth_m9151 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	{
		float L_0 = LayoutGroup_GetTotalFlexibleSize_m9161(__this, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.UI.LayoutGroup::get_minHeight()
extern "C" float LayoutGroup_get_minHeight_m9152 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	{
		float L_0 = LayoutGroup_GetTotalMinSize_m9159(__this, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.UI.LayoutGroup::get_preferredHeight()
extern "C" float LayoutGroup_get_preferredHeight_m9153 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	{
		float L_0 = LayoutGroup_GetTotalPreferredSize_m9160(__this, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleHeight()
extern "C" float LayoutGroup_get_flexibleHeight_m9154 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	{
		float L_0 = LayoutGroup_GetTotalFlexibleSize_m9161(__this, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 UnityEngine.UI.LayoutGroup::get_layoutPriority()
extern "C" int32_t LayoutGroup_get_layoutPriority_m9155 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutHorizontal()
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutVertical()
// System.Void UnityEngine.UI.LayoutGroup::OnEnable()
extern "C" void LayoutGroup_OnEnable_m9156 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	{
		UIBehaviour_OnEnable_m8208(__this, /*hidden argument*/NULL);
		LayoutGroup_SetDirty_m9168(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::OnDisable()
extern TypeInfo* LayoutRebuilder_t2113_il2cpp_TypeInfo_var;
extern "C" void LayoutGroup_OnDisable_m9157 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LayoutRebuilder_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4003);
		s_Il2CppMethodIntialized = true;
	}
	{
		DrivenRectTransformTracker_t2069 * L_0 = &(__this->___m_Tracker_5);
		DrivenRectTransformTracker_Clear_m9511(L_0, /*hidden argument*/NULL);
		RectTransform_t259 * L_1 = LayoutGroup_get_rectTransform_m9146(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		LayoutRebuilder_MarkLayoutForRebuild_m9178(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		UIBehaviour_OnDisable_m8210(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::OnDidApplyAnimationProperties()
extern "C" void LayoutGroup_OnDidApplyAnimationProperties_m9158 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	{
		LayoutGroup_SetDirty_m9168(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.UI.LayoutGroup::GetTotalMinSize(System.Int32)
extern "C" float LayoutGroup_GetTotalMinSize_m9159 (LayoutGroup_t2106 * __this, int32_t ___axis, const MethodInfo* method)
{
	{
		Vector2_t97 * L_0 = &(__this->___m_TotalMinSize_6);
		int32_t L_1 = ___axis;
		float L_2 = Vector2_get_Item_m9425(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.UI.LayoutGroup::GetTotalPreferredSize(System.Int32)
extern "C" float LayoutGroup_GetTotalPreferredSize_m9160 (LayoutGroup_t2106 * __this, int32_t ___axis, const MethodInfo* method)
{
	{
		Vector2_t97 * L_0 = &(__this->___m_TotalPreferredSize_7);
		int32_t L_1 = ___axis;
		float L_2 = Vector2_get_Item_m9425(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.UI.LayoutGroup::GetTotalFlexibleSize(System.Int32)
extern "C" float LayoutGroup_GetTotalFlexibleSize_m9161 (LayoutGroup_t2106 * __this, int32_t ___axis, const MethodInfo* method)
{
	{
		Vector2_t97 * L_0 = &(__this->___m_TotalFlexibleSize_8);
		int32_t L_1 = ___axis;
		float L_2 = Vector2_get_Item_m9425(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityEngine.UI.LayoutGroup::GetStartOffset(System.Int32,System.Single)
extern "C" float LayoutGroup_GetStartOffset_m9162 (LayoutGroup_t2106 * __this, int32_t ___axis, float ___requiredSpaceWithoutPadding, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Rect_t201  V_4 = {0};
	Vector2_t97  V_5 = {0};
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	int32_t G_B3_0 = 0;
	float G_B3_1 = 0.0f;
	int32_t G_B9_0 = 0;
	{
		float L_0 = ___requiredSpaceWithoutPadding;
		int32_t L_1 = ___axis;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
	}
	{
		RectOffset_t648 * L_2 = LayoutGroup_get_padding_m9142(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = RectOffset_get_horizontal_m9583(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_0017:
	{
		RectOffset_t648 * L_4 = LayoutGroup_get_padding_m9142(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = RectOffset_get_vertical_m9584(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		V_0 = ((float)((float)G_B3_1+(float)(((float)G_B3_0))));
		RectTransform_t259 * L_6 = LayoutGroup_get_rectTransform_m9146(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Rect_t201  L_7 = RectTransform_get_rect_m2780(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		Vector2_t97  L_8 = Rect_get_size_m9421((&V_4), /*hidden argument*/NULL);
		V_5 = L_8;
		int32_t L_9 = ___axis;
		float L_10 = Vector2_get_Item_m9425((&V_5), L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = V_1;
		float L_12 = V_0;
		V_2 = ((float)((float)L_11-(float)L_12));
		V_3 = (0.0f);
		int32_t L_13 = ___axis;
		if (L_13)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_14 = LayoutGroup_get_childAlignment_m9144(__this, /*hidden argument*/NULL);
		V_3 = ((float)((float)(((float)((int32_t)((int32_t)L_14%(int32_t)3))))*(float)(0.5f)));
		goto IL_0079;
	}

IL_0069:
	{
		int32_t L_15 = LayoutGroup_get_childAlignment_m9144(__this, /*hidden argument*/NULL);
		V_3 = ((float)((float)(((float)((int32_t)((int32_t)L_15/(int32_t)3))))*(float)(0.5f)));
	}

IL_0079:
	{
		int32_t L_16 = ___axis;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		RectOffset_t648 * L_17 = LayoutGroup_get_padding_m9142(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18 = RectOffset_get_left_m5589(L_17, /*hidden argument*/NULL);
		G_B9_0 = L_18;
		goto IL_009a;
	}

IL_008f:
	{
		RectOffset_t648 * L_19 = LayoutGroup_get_padding_m9142(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = RectOffset_get_top_m5591(L_19, /*hidden argument*/NULL);
		G_B9_0 = L_20;
	}

IL_009a:
	{
		float L_21 = V_2;
		float L_22 = V_3;
		return ((float)((float)(((float)G_B9_0))+(float)((float)((float)L_21*(float)L_22))));
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutInputForAxis(System.Single,System.Single,System.Single,System.Int32)
extern "C" void LayoutGroup_SetLayoutInputForAxis_m9163 (LayoutGroup_t2106 * __this, float ___totalMin, float ___totalPreferred, float ___totalFlexible, int32_t ___axis, const MethodInfo* method)
{
	{
		Vector2_t97 * L_0 = &(__this->___m_TotalMinSize_6);
		int32_t L_1 = ___axis;
		float L_2 = ___totalMin;
		Vector2_set_Item_m9430(L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector2_t97 * L_3 = &(__this->___m_TotalPreferredSize_7);
		int32_t L_4 = ___axis;
		float L_5 = ___totalPreferred;
		Vector2_set_Item_m9430(L_3, L_4, L_5, /*hidden argument*/NULL);
		Vector2_t97 * L_6 = &(__this->___m_TotalFlexibleSize_8);
		int32_t L_7 = ___axis;
		float L_8 = ___totalFlexible;
		Vector2_set_Item_m9430(L_6, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetChildAlongAxis(UnityEngine.RectTransform,System.Int32,System.Single,System.Single)
extern "C" void LayoutGroup_SetChildAlongAxis_m9164 (LayoutGroup_t2106 * __this, RectTransform_t259 * ___rect, int32_t ___axis, float ___pos, float ___size, const MethodInfo* method)
{
	RectTransform_t259 * G_B4_0 = {0};
	RectTransform_t259 * G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	RectTransform_t259 * G_B5_1 = {0};
	{
		RectTransform_t259 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m2377(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
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
		DrivenRectTransformTracker_t2069 * L_2 = &(__this->___m_Tracker_5);
		RectTransform_t259 * L_3 = ___rect;
		DrivenRectTransformTracker_Add_m9513(L_2, __this, L_3, ((int32_t)16134), /*hidden argument*/NULL);
		RectTransform_t259 * L_4 = ___rect;
		int32_t L_5 = ___axis;
		G_B3_0 = L_4;
		if (L_5)
		{
			G_B4_0 = L_4;
			goto IL_002c;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 2;
		G_B5_1 = G_B4_0;
	}

IL_002d:
	{
		float L_6 = ___pos;
		float L_7 = ___size;
		NullCheck(G_B5_1);
		RectTransform_SetInsetAndSizeFromParentEdge_m9593(G_B5_1, G_B5_0, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.LayoutGroup::get_isRootLayoutGroup()
extern const Il2CppType* ILayoutGroup_t2186_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool LayoutGroup_get_isRootLayoutGroup_m9165 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutGroup_t2186_0_0_0_var = il2cpp_codegen_type_from_index(4084);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t54 * V_0 = {0};
	{
		Transform_t54 * L_0 = Component_get_transform_m2334(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t54 * L_1 = Transform_get_parent_m2453(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Transform_t54 * L_2 = V_0;
		bool L_3 = Object_op_Equality_m2377(NULL /*static, unused*/, L_2, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		Transform_t54 * L_4 = Component_get_transform_m2334(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t54 * L_5 = Transform_get_parent_m2453(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(ILayoutGroup_t2186_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		Component_t462 * L_7 = Component_GetComponent_m5496(L_5, L_6, /*hidden argument*/NULL);
		bool L_8 = Object_op_Equality_m2377(NULL /*static, unused*/, L_7, (Object_t563 *)NULL, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::OnRectTransformDimensionsChange()
extern "C" void LayoutGroup_OnRectTransformDimensionsChange_m9166 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	{
		UIBehaviour_OnRectTransformDimensionsChange_m8213(__this, /*hidden argument*/NULL);
		bool L_0 = LayoutGroup_get_isRootLayoutGroup_m9165(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		LayoutGroup_SetDirty_m9168(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::OnTransformChildrenChanged()
extern "C" void LayoutGroup_OnTransformChildrenChanged_m9167 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	{
		LayoutGroup_SetDirty_m9168(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup::SetDirty()
extern TypeInfo* LayoutRebuilder_t2113_il2cpp_TypeInfo_var;
extern "C" void LayoutGroup_SetDirty_m9168 (LayoutGroup_t2106 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LayoutRebuilder_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4003);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
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
		RectTransform_t259 * L_1 = LayoutGroup_get_rectTransform_m9146(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		LayoutRebuilder_MarkLayoutForRebuild_m9178(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UI.LayoutRebuilder
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilder.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertie.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_3.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_29.h"
// System.Predicate`1<UnityEngine.Component>
#include "mscorlib_System_Predicate_1_gen_15.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertieMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_3MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Component>
#include "mscorlib_System_Predicate_1_gen_15MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
// UnityEngine.UI.ComponentListPool
#include "UnityEngine_UI_UnityEngine_UI_ComponentListPoolMethodDeclarations.h"
// UnityEngine.UI.CanvasUpdateRegistry
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdateRegistryMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"


// System.Void UnityEngine.UI.LayoutRebuilder::.ctor(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder__ctor_m9169 (LayoutRebuilder_t2113 * __this, RectTransform_t259 * ___controller, const MethodInfo* method)
{
	{
		RectTransform_t259 * L_0 = ___controller;
		__this->___m_ToRebuild_0 = L_0;
		RectTransform_t259 * L_1 = (__this->___m_ToRebuild_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 UnityEngine.Object::GetHashCode() */, L_1);
		__this->___m_CachedHashFromTransform_1 = L_2;
		return;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
extern TypeInfo* ReapplyDrivenProperties_t2187_il2cpp_TypeInfo_var;
extern const MethodInfo* LayoutRebuilder_ReapplyDrivenProperties_m9172_MethodInfo_var;
extern "C" void LayoutRebuilder__cctor_m9170 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReapplyDrivenProperties_t2187_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4085);
		LayoutRebuilder_ReapplyDrivenProperties_m9172_MethodInfo_var = il2cpp_codegen_method_info_from_index(1140);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)LayoutRebuilder_ReapplyDrivenProperties_m9172_MethodInfo_var };
		ReapplyDrivenProperties_t2187 * L_1 = (ReapplyDrivenProperties_t2187 *)il2cpp_codegen_object_new (ReapplyDrivenProperties_t2187_il2cpp_TypeInfo_var);
		ReapplyDrivenProperties__ctor_m9594(L_1, NULL, L_0, /*hidden argument*/NULL);
		RectTransform_add_reapplyDrivenProperties_m9595(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder::UnityEngine.UI.ICanvasElement.Rebuild(UnityEngine.UI.CanvasUpdate)
extern TypeInfo* LayoutRebuilder_t2113_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_1_t2111_il2cpp_TypeInfo_var;
extern const MethodInfo* LayoutRebuilder_U3CRebuildU3Em__9_m9185_MethodInfo_var;
extern const MethodInfo* UnityAction_1__ctor_m9596_MethodInfo_var;
extern const MethodInfo* LayoutRebuilder_U3CRebuildU3Em__A_m9186_MethodInfo_var;
extern const MethodInfo* LayoutRebuilder_U3CRebuildU3Em__B_m9187_MethodInfo_var;
extern const MethodInfo* LayoutRebuilder_U3CRebuildU3Em__C_m9188_MethodInfo_var;
extern "C" void LayoutRebuilder_UnityEngine_UI_ICanvasElement_Rebuild_m9171 (LayoutRebuilder_t2113 * __this, int32_t ___executing, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LayoutRebuilder_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4003);
		UnityAction_1_t2111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4086);
		LayoutRebuilder_U3CRebuildU3Em__9_m9185_MethodInfo_var = il2cpp_codegen_method_info_from_index(1141);
		UnityAction_1__ctor_m9596_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484790);
		LayoutRebuilder_U3CRebuildU3Em__A_m9186_MethodInfo_var = il2cpp_codegen_method_info_from_index(1143);
		LayoutRebuilder_U3CRebuildU3Em__B_m9187_MethodInfo_var = il2cpp_codegen_method_info_from_index(1144);
		LayoutRebuilder_U3CRebuildU3Em__C_m9188_MethodInfo_var = il2cpp_codegen_method_info_from_index(1145);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	RectTransform_t259 * G_B4_0 = {0};
	LayoutRebuilder_t2113 * G_B4_1 = {0};
	RectTransform_t259 * G_B3_0 = {0};
	LayoutRebuilder_t2113 * G_B3_1 = {0};
	RectTransform_t259 * G_B6_0 = {0};
	LayoutRebuilder_t2113 * G_B6_1 = {0};
	RectTransform_t259 * G_B5_0 = {0};
	LayoutRebuilder_t2113 * G_B5_1 = {0};
	RectTransform_t259 * G_B8_0 = {0};
	LayoutRebuilder_t2113 * G_B8_1 = {0};
	RectTransform_t259 * G_B7_0 = {0};
	LayoutRebuilder_t2113 * G_B7_1 = {0};
	RectTransform_t259 * G_B10_0 = {0};
	LayoutRebuilder_t2113 * G_B10_1 = {0};
	RectTransform_t259 * G_B9_0 = {0};
	LayoutRebuilder_t2113 * G_B9_1 = {0};
	{
		int32_t L_0 = ___executing;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000e;
		}
	}
	{
		goto IL_00b7;
	}

IL_000e:
	{
		RectTransform_t259 * L_2 = (__this->___m_ToRebuild_0);
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		UnityAction_1_t2111 * L_3 = ((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_2;
		G_B3_0 = L_2;
		G_B3_1 = __this;
		if (L_3)
		{
			G_B4_0 = L_2;
			G_B4_1 = __this;
			goto IL_002d;
		}
	}
	{
		IntPtr_t L_4 = { (void*)LayoutRebuilder_U3CRebuildU3Em__9_m9185_MethodInfo_var };
		UnityAction_1_t2111 * L_5 = (UnityAction_1_t2111 *)il2cpp_codegen_object_new (UnityAction_1_t2111_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m9596(L_5, NULL, L_4, /*hidden argument*/UnityAction_1__ctor_m9596_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_2 = L_5;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		UnityAction_1_t2111 * L_6 = ((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_2;
		LayoutRebuilder_PerformLayoutCalculation_m9177(G_B4_1, G_B4_0, L_6, /*hidden argument*/NULL);
		RectTransform_t259 * L_7 = (__this->___m_ToRebuild_0);
		UnityAction_1_t2111 * L_8 = ((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_3;
		G_B5_0 = L_7;
		G_B5_1 = __this;
		if (L_8)
		{
			G_B6_0 = L_7;
			G_B6_1 = __this;
			goto IL_0056;
		}
	}
	{
		IntPtr_t L_9 = { (void*)LayoutRebuilder_U3CRebuildU3Em__A_m9186_MethodInfo_var };
		UnityAction_1_t2111 * L_10 = (UnityAction_1_t2111 *)il2cpp_codegen_object_new (UnityAction_1_t2111_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m9596(L_10, NULL, L_9, /*hidden argument*/UnityAction_1__ctor_m9596_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_3 = L_10;
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		UnityAction_1_t2111 * L_11 = ((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_3;
		LayoutRebuilder_PerformLayoutControl_m9176(G_B6_1, G_B6_0, L_11, /*hidden argument*/NULL);
		RectTransform_t259 * L_12 = (__this->___m_ToRebuild_0);
		UnityAction_1_t2111 * L_13 = ((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_4;
		G_B7_0 = L_12;
		G_B7_1 = __this;
		if (L_13)
		{
			G_B8_0 = L_12;
			G_B8_1 = __this;
			goto IL_007f;
		}
	}
	{
		IntPtr_t L_14 = { (void*)LayoutRebuilder_U3CRebuildU3Em__B_m9187_MethodInfo_var };
		UnityAction_1_t2111 * L_15 = (UnityAction_1_t2111 *)il2cpp_codegen_object_new (UnityAction_1_t2111_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m9596(L_15, NULL, L_14, /*hidden argument*/UnityAction_1__ctor_m9596_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_4 = L_15;
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
	}

IL_007f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		UnityAction_1_t2111 * L_16 = ((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_4;
		LayoutRebuilder_PerformLayoutCalculation_m9177(G_B8_1, G_B8_0, L_16, /*hidden argument*/NULL);
		RectTransform_t259 * L_17 = (__this->___m_ToRebuild_0);
		UnityAction_1_t2111 * L_18 = ((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_5;
		G_B9_0 = L_17;
		G_B9_1 = __this;
		if (L_18)
		{
			G_B10_0 = L_17;
			G_B10_1 = __this;
			goto IL_00a8;
		}
	}
	{
		IntPtr_t L_19 = { (void*)LayoutRebuilder_U3CRebuildU3Em__C_m9188_MethodInfo_var };
		UnityAction_1_t2111 * L_20 = (UnityAction_1_t2111 *)il2cpp_codegen_object_new (UnityAction_1_t2111_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m9596(L_20, NULL, L_19, /*hidden argument*/UnityAction_1__ctor_m9596_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_5 = L_20;
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
	}

IL_00a8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		UnityAction_1_t2111 * L_21 = ((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_5;
		LayoutRebuilder_PerformLayoutControl_m9176(G_B10_1, G_B10_0, L_21, /*hidden argument*/NULL);
		goto IL_00b7;
	}

IL_00b7:
	{
		return;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
extern TypeInfo* LayoutRebuilder_t2113_il2cpp_TypeInfo_var;
extern "C" void LayoutRebuilder_ReapplyDrivenProperties_m9172 (Object_t * __this /* static, unused */, RectTransform_t259 * ___driven, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LayoutRebuilder_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4003);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t259 * L_0 = ___driven;
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		LayoutRebuilder_MarkLayoutForRebuild_m9178(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
extern "C" Transform_t54 * LayoutRebuilder_get_transform_m9173 (LayoutRebuilder_t2113 * __this, const MethodInfo* method)
{
	{
		RectTransform_t259 * L_0 = (__this->___m_ToRebuild_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
extern "C" bool LayoutRebuilder_IsDestroyed_m9174 (LayoutRebuilder_t2113 * __this, const MethodInfo* method)
{
	{
		RectTransform_t259 * L_0 = (__this->___m_ToRebuild_0);
		bool L_1 = Object_op_Equality_m2377(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
extern TypeInfo* LayoutRebuilder_t2113_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t2112_il2cpp_TypeInfo_var;
extern const MethodInfo* LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__D_m9189_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m9597_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAll_m9598_MethodInfo_var;
extern "C" void LayoutRebuilder_StripDisabledBehavioursFromList_m9175 (Object_t * __this /* static, unused */, List_1_t463 * ___components, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LayoutRebuilder_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4003);
		Predicate_1_t2112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4087);
		LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__D_m9189_MethodInfo_var = il2cpp_codegen_method_info_from_index(1146);
		Predicate_1__ctor_m9597_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484795);
		List_1_RemoveAll_m9598_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484796);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t463 * G_B2_0 = {0};
	List_1_t463 * G_B1_0 = {0};
	{
		List_1_t463 * L_0 = ___components;
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		Predicate_1_t2112 * L_1 = ((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache6_6;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_2 = { (void*)LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__D_m9189_MethodInfo_var };
		Predicate_1_t2112 * L_3 = (Predicate_1_t2112 *)il2cpp_codegen_object_new (Predicate_1_t2112_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m9597(L_3, NULL, L_2, /*hidden argument*/Predicate_1__ctor_m9597_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache6_6 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		Predicate_1_t2112 * L_4 = ((LayoutRebuilder_t2113_StaticFields*)LayoutRebuilder_t2113_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache6_6;
		NullCheck(G_B2_0);
		List_1_RemoveAll_m9598(G_B2_0, L_4, /*hidden argument*/List_1_RemoveAll_m9598_MethodInfo_var);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern const Il2CppType* ILayoutController_t2188_0_0_0_var;
extern TypeInfo* ComponentListPool_t2123_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* LayoutRebuilder_t2113_il2cpp_TypeInfo_var;
extern TypeInfo* ILayoutSelfController_t2189_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransform_t259_il2cpp_TypeInfo_var;
extern "C" void LayoutRebuilder_PerformLayoutControl_m9176 (LayoutRebuilder_t2113 * __this, RectTransform_t259 * ___rect, UnityAction_1_t2111 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutController_t2188_0_0_0_var = il2cpp_codegen_type_from_index(4088);
		ComponentListPool_t2123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4009);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		LayoutRebuilder_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4003);
		ILayoutSelfController_t2189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4089);
		RectTransform_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4005);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t463 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		RectTransform_t259 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m2377(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(ComponentListPool_t2123_il2cpp_TypeInfo_var);
		List_1_t463 * L_2 = ComponentListPool_Get_m9232(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		RectTransform_t259 * L_3 = ___rect;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(ILayoutController_t2188_0_0_0_var), /*hidden argument*/NULL);
		List_1_t463 * L_5 = V_0;
		NullCheck(L_3);
		Component_GetComponents_m9367(L_3, L_4, L_5, /*hidden argument*/NULL);
		List_1_t463 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		LayoutRebuilder_StripDisabledBehavioursFromList_m9175(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		List_1_t463 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count() */, L_7);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		V_1 = 0;
		goto IL_005f;
	}

IL_003d:
	{
		List_1_t463 * L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Component_t462 * L_11 = (Component_t462 *)VirtFuncInvoker1< Component_t462 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32) */, L_9, L_10);
		if (!((Object_t *)IsInst(L_11, ILayoutSelfController_t2189_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		UnityAction_1_t2111 * L_12 = ___action;
		List_1_t463 * L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		Component_t462 * L_15 = (Component_t462 *)VirtFuncInvoker1< Component_t462 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32) */, L_13, L_14);
		NullCheck(L_12);
		VirtActionInvoker1< Component_t462 * >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(!0) */, L_12, L_15);
	}

IL_005b:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_17 = V_1;
		List_1_t463 * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count() */, L_18);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_003d;
		}
	}
	{
		V_2 = 0;
		goto IL_0094;
	}

IL_0072:
	{
		List_1_t463 * L_20 = V_0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Component_t462 * L_22 = (Component_t462 *)VirtFuncInvoker1< Component_t462 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32) */, L_20, L_21);
		if (((Object_t *)IsInst(L_22, ILayoutSelfController_t2189_il2cpp_TypeInfo_var)))
		{
			goto IL_0090;
		}
	}
	{
		UnityAction_1_t2111 * L_23 = ___action;
		List_1_t463 * L_24 = V_0;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		Component_t462 * L_26 = (Component_t462 *)VirtFuncInvoker1< Component_t462 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32) */, L_24, L_25);
		NullCheck(L_23);
		VirtActionInvoker1< Component_t462 * >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(!0) */, L_23, L_26);
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_0094:
	{
		int32_t L_28 = V_2;
		List_1_t463 * L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count() */, L_29);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0072;
		}
	}
	{
		V_3 = 0;
		goto IL_00be;
	}

IL_00a7:
	{
		RectTransform_t259 * L_31 = ___rect;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		Transform_t54 * L_33 = Transform_GetChild_m3057(L_31, L_32, /*hidden argument*/NULL);
		UnityAction_1_t2111 * L_34 = ___action;
		LayoutRebuilder_PerformLayoutControl_m9176(__this, ((RectTransform_t259 *)IsInst(L_33, RectTransform_t259_il2cpp_TypeInfo_var)), L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_3;
		V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_00be:
	{
		int32_t L_36 = V_3;
		RectTransform_t259 * L_37 = ___rect;
		NullCheck(L_37);
		int32_t L_38 = Transform_get_childCount_m2369(L_37, /*hidden argument*/NULL);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_00a7;
		}
	}

IL_00ca:
	{
		List_1_t463 * L_39 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ComponentListPool_t2123_il2cpp_TypeInfo_var);
		ComponentListPool_Release_m9233(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern const Il2CppType* ILayoutElement_t2153_0_0_0_var;
extern TypeInfo* ComponentListPool_t2123_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* LayoutRebuilder_t2113_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransform_t259_il2cpp_TypeInfo_var;
extern "C" void LayoutRebuilder_PerformLayoutCalculation_m9177 (LayoutRebuilder_t2113 * __this, RectTransform_t259 * ___rect, UnityAction_1_t2111 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutElement_t2153_0_0_0_var = il2cpp_codegen_type_from_index(4090);
		ComponentListPool_t2123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4009);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		LayoutRebuilder_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4003);
		RectTransform_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4005);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t463 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		RectTransform_t259 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m2377(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(ComponentListPool_t2123_il2cpp_TypeInfo_var);
		List_1_t463 * L_2 = ComponentListPool_Get_m9232(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		RectTransform_t259 * L_3 = ___rect;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(ILayoutElement_t2153_0_0_0_var), /*hidden argument*/NULL);
		List_1_t463 * L_5 = V_0;
		NullCheck(L_3);
		Component_GetComponents_m9367(L_3, L_4, L_5, /*hidden argument*/NULL);
		List_1_t463 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		LayoutRebuilder_StripDisabledBehavioursFromList_m9175(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		List_1_t463 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count() */, L_7);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		V_1 = 0;
		goto IL_0054;
	}

IL_003d:
	{
		RectTransform_t259 * L_9 = ___rect;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Transform_t54 * L_11 = Transform_GetChild_m3057(L_9, L_10, /*hidden argument*/NULL);
		UnityAction_1_t2111 * L_12 = ___action;
		LayoutRebuilder_PerformLayoutCalculation_m9177(__this, ((RectTransform_t259 *)IsInst(L_11, RectTransform_t259_il2cpp_TypeInfo_var)), L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_14 = V_1;
		RectTransform_t259 * L_15 = ___rect;
		NullCheck(L_15);
		int32_t L_16 = Transform_get_childCount_m2369(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_003d;
		}
	}
	{
		V_2 = 0;
		goto IL_0078;
	}

IL_0067:
	{
		UnityAction_1_t2111 * L_17 = ___action;
		List_1_t463 * L_18 = V_0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Component_t462 * L_20 = (Component_t462 *)VirtFuncInvoker1< Component_t462 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32) */, L_18, L_19);
		NullCheck(L_17);
		VirtActionInvoker1< Component_t462 * >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(!0) */, L_17, L_20);
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		List_1_t463 * L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count() */, L_23);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0067;
		}
	}

IL_0084:
	{
		List_1_t463 * L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ComponentListPool_t2123_il2cpp_TypeInfo_var);
		ComponentListPool_Release_m9233(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
extern TypeInfo* RectTransform_t259_il2cpp_TypeInfo_var;
extern TypeInfo* LayoutRebuilder_t2113_il2cpp_TypeInfo_var;
extern "C" void LayoutRebuilder_MarkLayoutForRebuild_m9178 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4005);
		LayoutRebuilder_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4003);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t259 * V_0 = {0};
	RectTransform_t259 * V_1 = {0};
	{
		RectTransform_t259 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m2377(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
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
		RectTransform_t259 * L_2 = ___rect;
		V_0 = L_2;
	}

IL_000f:
	{
		RectTransform_t259 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t54 * L_4 = Transform_get_parent_m2453(L_3, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t259 *)IsInst(L_4, RectTransform_t259_il2cpp_TypeInfo_var));
		RectTransform_t259 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		bool L_6 = LayoutRebuilder_ValidLayoutGroup_m9179(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		goto IL_0032;
	}

IL_002b:
	{
		RectTransform_t259 * L_7 = V_1;
		V_0 = L_7;
		goto IL_000f;
	}

IL_0032:
	{
		RectTransform_t259 * L_8 = V_0;
		RectTransform_t259 * L_9 = ___rect;
		bool L_10 = Object_op_Equality_m2377(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		RectTransform_t259 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		bool L_12 = LayoutRebuilder_ValidController_m9180(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_004a:
	{
		RectTransform_t259 * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		LayoutRebuilder_MarkLayoutRootForRebuild_m9181(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform)
extern const Il2CppType* ILayoutGroup_t2186_0_0_0_var;
extern TypeInfo* ComponentListPool_t2123_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* LayoutRebuilder_t2113_il2cpp_TypeInfo_var;
extern "C" bool LayoutRebuilder_ValidLayoutGroup_m9179 (Object_t * __this /* static, unused */, RectTransform_t259 * ___parent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutGroup_t2186_0_0_0_var = il2cpp_codegen_type_from_index(4084);
		ComponentListPool_t2123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4009);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		LayoutRebuilder_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4003);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t463 * V_0 = {0};
	bool V_1 = false;
	{
		RectTransform_t259 * L_0 = ___parent;
		bool L_1 = Object_op_Equality_m2377(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ComponentListPool_t2123_il2cpp_TypeInfo_var);
		List_1_t463 * L_2 = ComponentListPool_Get_m9232(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		RectTransform_t259 * L_3 = ___parent;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(ILayoutGroup_t2186_0_0_0_var), /*hidden argument*/NULL);
		List_1_t463 * L_5 = V_0;
		NullCheck(L_3);
		Component_GetComponents_m9367(L_3, L_4, L_5, /*hidden argument*/NULL);
		List_1_t463 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		LayoutRebuilder_StripDisabledBehavioursFromList_m9175(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		List_1_t463 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count() */, L_7);
		V_1 = ((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		List_1_t463 * L_9 = V_0;
		ComponentListPool_Release_m9233(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform)
extern const Il2CppType* ILayoutController_t2188_0_0_0_var;
extern TypeInfo* ComponentListPool_t2123_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* LayoutRebuilder_t2113_il2cpp_TypeInfo_var;
extern "C" bool LayoutRebuilder_ValidController_m9180 (Object_t * __this /* static, unused */, RectTransform_t259 * ___layoutRoot, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutController_t2188_0_0_0_var = il2cpp_codegen_type_from_index(4088);
		ComponentListPool_t2123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4009);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		LayoutRebuilder_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4003);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t463 * V_0 = {0};
	bool V_1 = false;
	{
		RectTransform_t259 * L_0 = ___layoutRoot;
		bool L_1 = Object_op_Equality_m2377(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ComponentListPool_t2123_il2cpp_TypeInfo_var);
		List_1_t463 * L_2 = ComponentListPool_Get_m9232(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		RectTransform_t259 * L_3 = ___layoutRoot;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(ILayoutController_t2188_0_0_0_var), /*hidden argument*/NULL);
		List_1_t463 * L_5 = V_0;
		NullCheck(L_3);
		Component_GetComponents_m9367(L_3, L_4, L_5, /*hidden argument*/NULL);
		List_1_t463 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_t2113_il2cpp_TypeInfo_var);
		LayoutRebuilder_StripDisabledBehavioursFromList_m9175(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		List_1_t463 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count() */, L_7);
		V_1 = ((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		List_1_t463 * L_9 = V_0;
		ComponentListPool_Release_m9233(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
extern TypeInfo* LayoutRebuilder_t2113_il2cpp_TypeInfo_var;
extern TypeInfo* CanvasUpdateRegistry_t2022_il2cpp_TypeInfo_var;
extern "C" void LayoutRebuilder_MarkLayoutRootForRebuild_m9181 (Object_t * __this /* static, unused */, RectTransform_t259 * ___controller, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LayoutRebuilder_t2113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4003);
		CanvasUpdateRegistry_t2022_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3989);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t259 * L_0 = ___controller;
		bool L_1 = Object_op_Equality_m2377(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
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
		RectTransform_t259 * L_2 = ___controller;
		LayoutRebuilder_t2113  L_3 = {0};
		LayoutRebuilder__ctor_m9169(&L_3, L_2, /*hidden argument*/NULL);
		LayoutRebuilder_t2113  L_4 = L_3;
		Object_t * L_5 = Box(LayoutRebuilder_t2113_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(CanvasUpdateRegistry_t2022_il2cpp_TypeInfo_var);
		CanvasUpdateRegistry_RegisterCanvasElementForLayoutRebuild_m8408(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(UnityEngine.UI.LayoutRebuilder)
extern "C" bool LayoutRebuilder_Equals_m9182 (LayoutRebuilder_t2113 * __this, LayoutRebuilder_t2113  ___other, const MethodInfo* method)
{
	{
		RectTransform_t259 * L_0 = (__this->___m_ToRebuild_0);
		RectTransform_t259 * L_1 = ((&___other)->___m_ToRebuild_0);
		bool L_2 = Object_op_Equality_m2377(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
extern "C" int32_t LayoutRebuilder_GetHashCode_m9183 (LayoutRebuilder_t2113 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_CachedHashFromTransform_1);
		return L_0;
	}
}
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* LayoutRebuilder_ToString_m9184 (LayoutRebuilder_t2113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t259 * L_0 = (__this->___m_ToRebuild_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral2128, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
extern TypeInfo* ILayoutElement_t2153_il2cpp_TypeInfo_var;
extern "C" void LayoutRebuilder_U3CRebuildU3Em__9_m9185 (Object_t * __this /* static, unused */, Component_t462 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutElement_t2153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Component_t462 * L_0 = ___e;
		NullCheck(((Object_t *)IsInst(L_0, ILayoutElement_t2153_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.UI.ILayoutElement::CalculateLayoutInputHorizontal() */, ILayoutElement_t2153_il2cpp_TypeInfo_var, ((Object_t *)IsInst(L_0, ILayoutElement_t2153_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
extern TypeInfo* ILayoutController_t2188_il2cpp_TypeInfo_var;
extern "C" void LayoutRebuilder_U3CRebuildU3Em__A_m9186 (Object_t * __this /* static, unused */, Component_t462 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutController_t2188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4088);
		s_Il2CppMethodIntialized = true;
	}
	{
		Component_t462 * L_0 = ___e;
		NullCheck(((Object_t *)IsInst(L_0, ILayoutController_t2188_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.UI.ILayoutController::SetLayoutHorizontal() */, ILayoutController_t2188_il2cpp_TypeInfo_var, ((Object_t *)IsInst(L_0, ILayoutController_t2188_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
extern TypeInfo* ILayoutElement_t2153_il2cpp_TypeInfo_var;
extern "C" void LayoutRebuilder_U3CRebuildU3Em__B_m9187 (Object_t * __this /* static, unused */, Component_t462 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutElement_t2153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Component_t462 * L_0 = ___e;
		NullCheck(((Object_t *)IsInst(L_0, ILayoutElement_t2153_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.UI.ILayoutElement::CalculateLayoutInputVertical() */, ILayoutElement_t2153_il2cpp_TypeInfo_var, ((Object_t *)IsInst(L_0, ILayoutElement_t2153_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__C(UnityEngine.Component)
extern TypeInfo* ILayoutController_t2188_il2cpp_TypeInfo_var;
extern "C" void LayoutRebuilder_U3CRebuildU3Em__C_m9188 (Object_t * __this /* static, unused */, Component_t462 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutController_t2188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4088);
		s_Il2CppMethodIntialized = true;
	}
	{
		Component_t462 * L_0 = ___e;
		NullCheck(((Object_t *)IsInst(L_0, ILayoutController_t2188_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.UI.ILayoutController::SetLayoutVertical() */, ILayoutController_t2188_il2cpp_TypeInfo_var, ((Object_t *)IsInst(L_0, ILayoutController_t2188_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__D(UnityEngine.Component)
extern TypeInfo* Behaviour_t1130_il2cpp_TypeInfo_var;
extern "C" bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__D_m9189 (Object_t * __this /* static, unused */, Component_t462 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Behaviour_t1130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1782);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Component_t462 * L_0 = ___e;
		if (!((Behaviour_t1130 *)IsInst(L_0, Behaviour_t1130_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		Component_t462 * L_1 = ___e;
		NullCheck(((Behaviour_t1130 *)IsInst(L_1, Behaviour_t1130_il2cpp_TypeInfo_var)));
		bool L_2 = Behaviour_get_enabled_m2465(((Behaviour_t1130 *)IsInst(L_1, Behaviour_t1130_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		Component_t462 * L_3 = ___e;
		NullCheck(((Behaviour_t1130 *)IsInst(L_3, Behaviour_t1130_il2cpp_TypeInfo_var)));
		bool L_4 = Behaviour_get_isActiveAndEnabled_m9289(((Behaviour_t1130 *)IsInst(L_3, Behaviour_t1130_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 1;
	}

IL_002c:
	{
		G_B6_0 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 0;
	}

IL_002f:
	{
		return G_B6_0;
	}
}
// UnityEngine.UI.LayoutUtility
#include "UnityEngine_UI_UnityEngine_UI_LayoutUtility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UI.LayoutUtility
#include "UnityEngine_UI_UnityEngine_UI_LayoutUtilityMethodDeclarations.h"

// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
#include "System_Core_System_Func_2_gen_30.h"
// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
#include "System_Core_System_Func_2_gen_30MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"


// System.Single UnityEngine.UI.LayoutUtility::GetMinSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetMinSize_m9190 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, int32_t ___axis, const MethodInfo* method)
{
	{
		int32_t L_0 = ___axis;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		RectTransform_t259 * L_1 = ___rect;
		float L_2 = LayoutUtility_GetMinWidth_m9193(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000d:
	{
		RectTransform_t259 * L_3 = ___rect;
		float L_4 = LayoutUtility_GetMinHeight_m9196(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetPreferredSize_m9191 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, int32_t ___axis, const MethodInfo* method)
{
	{
		int32_t L_0 = ___axis;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		RectTransform_t259 * L_1 = ___rect;
		float L_2 = LayoutUtility_GetPreferredWidth_m9194(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000d:
	{
		RectTransform_t259 * L_3 = ___rect;
		float L_4 = LayoutUtility_GetPreferredHeight_m9197(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleSize(UnityEngine.RectTransform,System.Int32)
extern "C" float LayoutUtility_GetFlexibleSize_m9192 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, int32_t ___axis, const MethodInfo* method)
{
	{
		int32_t L_0 = ___axis;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		RectTransform_t259 * L_1 = ___rect;
		float L_2 = LayoutUtility_GetFlexibleWidth_m9195(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000d:
	{
		RectTransform_t259 * L_3 = ___rect;
		float L_4 = LayoutUtility_GetFlexibleHeight_m9198(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::GetMinWidth(UnityEngine.RectTransform)
extern TypeInfo* LayoutUtility_t2115_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t2114_il2cpp_TypeInfo_var;
extern const MethodInfo* LayoutUtility_U3CGetMinWidthU3Em__E_m9201_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m9599_MethodInfo_var;
extern "C" float LayoutUtility_GetMinWidth_m9193 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LayoutUtility_t2115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4091);
		Func_2_t2114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4092);
		LayoutUtility_U3CGetMinWidthU3Em__E_m9201_MethodInfo_var = il2cpp_codegen_method_info_from_index(1149);
		Func_2__ctor_m9599_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484798);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t259 * G_B2_0 = {0};
	RectTransform_t259 * G_B1_0 = {0};
	{
		RectTransform_t259 * L_0 = ___rect;
		Func_2_t2114 * L_1 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache0_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_2 = { (void*)LayoutUtility_U3CGetMinWidthU3Em__E_m9201_MethodInfo_var };
		Func_2_t2114 * L_3 = (Func_2_t2114 *)il2cpp_codegen_object_new (Func_2_t2114_il2cpp_TypeInfo_var);
		Func_2__ctor_m9599(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m9599_MethodInfo_var);
		((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache0_0 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Func_2_t2114 * L_4 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache0_0;
		float L_5 = LayoutUtility_GetLayoutProperty_m9199(NULL /*static, unused*/, G_B2_0, L_4, (0.0f), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredWidth(UnityEngine.RectTransform)
extern TypeInfo* LayoutUtility_t2115_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t2114_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t568_il2cpp_TypeInfo_var;
extern const MethodInfo* LayoutUtility_U3CGetPreferredWidthU3Em__F_m9202_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m9599_MethodInfo_var;
extern const MethodInfo* LayoutUtility_U3CGetPreferredWidthU3Em__10_m9203_MethodInfo_var;
extern "C" float LayoutUtility_GetPreferredWidth_m9194 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LayoutUtility_t2115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4091);
		Func_2_t2114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4092);
		Mathf_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		LayoutUtility_U3CGetPreferredWidthU3Em__F_m9202_MethodInfo_var = il2cpp_codegen_method_info_from_index(1151);
		Func_2__ctor_m9599_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484798);
		LayoutUtility_U3CGetPreferredWidthU3Em__10_m9203_MethodInfo_var = il2cpp_codegen_method_info_from_index(1152);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t259 * G_B2_0 = {0};
	RectTransform_t259 * G_B1_0 = {0};
	RectTransform_t259 * G_B4_0 = {0};
	float G_B4_1 = 0.0f;
	RectTransform_t259 * G_B3_0 = {0};
	float G_B3_1 = 0.0f;
	{
		RectTransform_t259 * L_0 = ___rect;
		Func_2_t2114 * L_1 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_2 = { (void*)LayoutUtility_U3CGetPreferredWidthU3Em__F_m9202_MethodInfo_var };
		Func_2_t2114 * L_3 = (Func_2_t2114 *)il2cpp_codegen_object_new (Func_2_t2114_il2cpp_TypeInfo_var);
		Func_2__ctor_m9599(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m9599_MethodInfo_var);
		((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_1 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Func_2_t2114 * L_4 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_1;
		float L_5 = LayoutUtility_GetLayoutProperty_m9199(NULL /*static, unused*/, G_B2_0, L_4, (0.0f), /*hidden argument*/NULL);
		RectTransform_t259 * L_6 = ___rect;
		Func_2_t2114 * L_7 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_2;
		G_B3_0 = L_6;
		G_B3_1 = L_5;
		if (L_7)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_5;
			goto IL_0041;
		}
	}
	{
		IntPtr_t L_8 = { (void*)LayoutUtility_U3CGetPreferredWidthU3Em__10_m9203_MethodInfo_var };
		Func_2_t2114 * L_9 = (Func_2_t2114 *)il2cpp_codegen_object_new (Func_2_t2114_il2cpp_TypeInfo_var);
		Func_2__ctor_m9599(L_9, NULL, L_8, /*hidden argument*/Func_2__ctor_m9599_MethodInfo_var);
		((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_2 = L_9;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0041:
	{
		Func_2_t2114 * L_10 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache2_2;
		float L_11 = LayoutUtility_GetLayoutProperty_m9199(NULL /*static, unused*/, G_B4_0, L_10, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t568_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Max_m5239(NULL /*static, unused*/, G_B4_1, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleWidth(UnityEngine.RectTransform)
extern TypeInfo* LayoutUtility_t2115_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t2114_il2cpp_TypeInfo_var;
extern const MethodInfo* LayoutUtility_U3CGetFlexibleWidthU3Em__11_m9204_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m9599_MethodInfo_var;
extern "C" float LayoutUtility_GetFlexibleWidth_m9195 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LayoutUtility_t2115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4091);
		Func_2_t2114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4092);
		LayoutUtility_U3CGetFlexibleWidthU3Em__11_m9204_MethodInfo_var = il2cpp_codegen_method_info_from_index(1153);
		Func_2__ctor_m9599_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484798);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t259 * G_B2_0 = {0};
	RectTransform_t259 * G_B1_0 = {0};
	{
		RectTransform_t259 * L_0 = ___rect;
		Func_2_t2114 * L_1 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_3;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_2 = { (void*)LayoutUtility_U3CGetFlexibleWidthU3Em__11_m9204_MethodInfo_var };
		Func_2_t2114 * L_3 = (Func_2_t2114 *)il2cpp_codegen_object_new (Func_2_t2114_il2cpp_TypeInfo_var);
		Func_2__ctor_m9599(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m9599_MethodInfo_var);
		((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_3 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Func_2_t2114 * L_4 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_3;
		float L_5 = LayoutUtility_GetLayoutProperty_m9199(NULL /*static, unused*/, G_B2_0, L_4, (0.0f), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::GetMinHeight(UnityEngine.RectTransform)
extern TypeInfo* LayoutUtility_t2115_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t2114_il2cpp_TypeInfo_var;
extern const MethodInfo* LayoutUtility_U3CGetMinHeightU3Em__12_m9205_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m9599_MethodInfo_var;
extern "C" float LayoutUtility_GetMinHeight_m9196 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LayoutUtility_t2115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4091);
		Func_2_t2114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4092);
		LayoutUtility_U3CGetMinHeightU3Em__12_m9205_MethodInfo_var = il2cpp_codegen_method_info_from_index(1154);
		Func_2__ctor_m9599_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484798);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t259 * G_B2_0 = {0};
	RectTransform_t259 * G_B1_0 = {0};
	{
		RectTransform_t259 * L_0 = ___rect;
		Func_2_t2114 * L_1 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_4;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_2 = { (void*)LayoutUtility_U3CGetMinHeightU3Em__12_m9205_MethodInfo_var };
		Func_2_t2114 * L_3 = (Func_2_t2114 *)il2cpp_codegen_object_new (Func_2_t2114_il2cpp_TypeInfo_var);
		Func_2__ctor_m9599(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m9599_MethodInfo_var);
		((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_4 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Func_2_t2114 * L_4 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_4;
		float L_5 = LayoutUtility_GetLayoutProperty_m9199(NULL /*static, unused*/, G_B2_0, L_4, (0.0f), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredHeight(UnityEngine.RectTransform)
extern TypeInfo* LayoutUtility_t2115_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t2114_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t568_il2cpp_TypeInfo_var;
extern const MethodInfo* LayoutUtility_U3CGetPreferredHeightU3Em__13_m9206_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m9599_MethodInfo_var;
extern const MethodInfo* LayoutUtility_U3CGetPreferredHeightU3Em__14_m9207_MethodInfo_var;
extern "C" float LayoutUtility_GetPreferredHeight_m9197 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LayoutUtility_t2115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4091);
		Func_2_t2114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4092);
		Mathf_t568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		LayoutUtility_U3CGetPreferredHeightU3Em__13_m9206_MethodInfo_var = il2cpp_codegen_method_info_from_index(1155);
		Func_2__ctor_m9599_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484798);
		LayoutUtility_U3CGetPreferredHeightU3Em__14_m9207_MethodInfo_var = il2cpp_codegen_method_info_from_index(1156);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t259 * G_B2_0 = {0};
	RectTransform_t259 * G_B1_0 = {0};
	RectTransform_t259 * G_B4_0 = {0};
	float G_B4_1 = 0.0f;
	RectTransform_t259 * G_B3_0 = {0};
	float G_B3_1 = 0.0f;
	{
		RectTransform_t259 * L_0 = ___rect;
		Func_2_t2114 * L_1 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_5;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_2 = { (void*)LayoutUtility_U3CGetPreferredHeightU3Em__13_m9206_MethodInfo_var };
		Func_2_t2114 * L_3 = (Func_2_t2114 *)il2cpp_codegen_object_new (Func_2_t2114_il2cpp_TypeInfo_var);
		Func_2__ctor_m9599(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m9599_MethodInfo_var);
		((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_5 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Func_2_t2114 * L_4 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_5;
		float L_5 = LayoutUtility_GetLayoutProperty_m9199(NULL /*static, unused*/, G_B2_0, L_4, (0.0f), /*hidden argument*/NULL);
		RectTransform_t259 * L_6 = ___rect;
		Func_2_t2114 * L_7 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache6_6;
		G_B3_0 = L_6;
		G_B3_1 = L_5;
		if (L_7)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_5;
			goto IL_0041;
		}
	}
	{
		IntPtr_t L_8 = { (void*)LayoutUtility_U3CGetPreferredHeightU3Em__14_m9207_MethodInfo_var };
		Func_2_t2114 * L_9 = (Func_2_t2114 *)il2cpp_codegen_object_new (Func_2_t2114_il2cpp_TypeInfo_var);
		Func_2__ctor_m9599(L_9, NULL, L_8, /*hidden argument*/Func_2__ctor_m9599_MethodInfo_var);
		((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache6_6 = L_9;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0041:
	{
		Func_2_t2114 * L_10 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache6_6;
		float L_11 = LayoutUtility_GetLayoutProperty_m9199(NULL /*static, unused*/, G_B4_0, L_10, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t568_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Max_m5239(NULL /*static, unused*/, G_B4_1, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleHeight(UnityEngine.RectTransform)
extern TypeInfo* LayoutUtility_t2115_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t2114_il2cpp_TypeInfo_var;
extern const MethodInfo* LayoutUtility_U3CGetFlexibleHeightU3Em__15_m9208_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m9599_MethodInfo_var;
extern "C" float LayoutUtility_GetFlexibleHeight_m9198 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LayoutUtility_t2115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4091);
		Func_2_t2114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4092);
		LayoutUtility_U3CGetFlexibleHeightU3Em__15_m9208_MethodInfo_var = il2cpp_codegen_method_info_from_index(1157);
		Func_2__ctor_m9599_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484798);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t259 * G_B2_0 = {0};
	RectTransform_t259 * G_B1_0 = {0};
	{
		RectTransform_t259 * L_0 = ___rect;
		Func_2_t2114 * L_1 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache7_7;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_2 = { (void*)LayoutUtility_U3CGetFlexibleHeightU3Em__15_m9208_MethodInfo_var };
		Func_2_t2114 * L_3 = (Func_2_t2114 *)il2cpp_codegen_object_new (Func_2_t2114_il2cpp_TypeInfo_var);
		Func_2__ctor_m9599(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m9599_MethodInfo_var);
		((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache7_7 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Func_2_t2114 * L_4 = ((LayoutUtility_t2115_StaticFields*)LayoutUtility_t2115_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache7_7;
		float L_5 = LayoutUtility_GetLayoutProperty_m9199(NULL /*static, unused*/, G_B2_0, L_4, (0.0f), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::GetLayoutProperty(UnityEngine.RectTransform,System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>,System.Single)
extern "C" float LayoutUtility_GetLayoutProperty_m9199 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, Func_2_t2114 * ___property, float ___defaultValue, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		RectTransform_t259 * L_0 = ___rect;
		Func_2_t2114 * L_1 = ___property;
		float L_2 = ___defaultValue;
		float L_3 = LayoutUtility_GetLayoutProperty_m9200(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::GetLayoutProperty(UnityEngine.RectTransform,System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>,System.Single,UnityEngine.UI.ILayoutElement&)
extern const Il2CppType* ILayoutElement_t2153_0_0_0_var;
extern TypeInfo* ComponentListPool_t2123_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ILayoutElement_t2153_il2cpp_TypeInfo_var;
extern TypeInfo* Behaviour_t1130_il2cpp_TypeInfo_var;
extern "C" float LayoutUtility_GetLayoutProperty_m9200 (Object_t * __this /* static, unused */, RectTransform_t259 * ___rect, Func_2_t2114 * ___property, float ___defaultValue, Object_t ** ___source, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutElement_t2153_0_0_0_var = il2cpp_codegen_type_from_index(4090);
		ComponentListPool_t2123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4009);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		ILayoutElement_t2153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4090);
		Behaviour_t1130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1782);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	List_1_t463 * V_2 = {0};
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	{
		Object_t ** L_0 = ___source;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		RectTransform_t259 * L_1 = ___rect;
		bool L_2 = Object_op_Equality_m2377(NULL /*static, unused*/, L_1, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		return (0.0f);
	}

IL_0015:
	{
		float L_3 = ___defaultValue;
		V_0 = L_3;
		V_1 = ((int32_t)-2147483648);
		IL2CPP_RUNTIME_CLASS_INIT(ComponentListPool_t2123_il2cpp_TypeInfo_var);
		List_1_t463 * L_4 = ComponentListPool_Get_m9232(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_4;
		RectTransform_t259 * L_5 = ___rect;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(ILayoutElement_t2153_0_0_0_var), /*hidden argument*/NULL);
		List_1_t463 * L_7 = V_2;
		NullCheck(L_5);
		Component_GetComponents_m9367(L_5, L_6, L_7, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_00d7;
	}

IL_003b:
	{
		List_1_t463 * L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		Component_t462 * L_10 = (Component_t462 *)VirtFuncInvoker1< Component_t462 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32) */, L_8, L_9);
		V_4 = ((Object_t *)IsInst(L_10, ILayoutElement_t2153_il2cpp_TypeInfo_var));
		Object_t * L_11 = V_4;
		if (!((Behaviour_t1130 *)IsInst(L_11, Behaviour_t1130_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		Object_t * L_12 = V_4;
		NullCheck(((Behaviour_t1130 *)IsInst(L_12, Behaviour_t1130_il2cpp_TypeInfo_var)));
		bool L_13 = Behaviour_get_enabled_m2465(((Behaviour_t1130 *)IsInst(L_12, Behaviour_t1130_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0077;
		}
	}
	{
		Object_t * L_14 = V_4;
		NullCheck(((Behaviour_t1130 *)IsInst(L_14, Behaviour_t1130_il2cpp_TypeInfo_var)));
		bool L_15 = Behaviour_get_isActiveAndEnabled_m9289(((Behaviour_t1130 *)IsInst(L_14, Behaviour_t1130_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007c;
		}
	}

IL_0077:
	{
		goto IL_00d3;
	}

IL_007c:
	{
		Object_t * L_16 = V_4;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 UnityEngine.UI.ILayoutElement::get_layoutPriority() */, ILayoutElement_t2153_il2cpp_TypeInfo_var, L_16);
		V_5 = L_17;
		int32_t L_18 = V_5;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) >= ((int32_t)L_19)))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_00d3;
	}

IL_0092:
	{
		Func_2_t2114 * L_20 = ___property;
		Object_t * L_21 = V_4;
		NullCheck(L_20);
		float L_22 = (float)VirtFuncInvoker1< float, Object_t * >::Invoke(11 /* !1 System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::Invoke(!0) */, L_20, L_21);
		V_6 = L_22;
		float L_23 = V_6;
		if ((!(((float)L_23) < ((float)(0.0f)))))
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00d3;
	}

IL_00ad:
	{
		int32_t L_24 = V_5;
		int32_t L_25 = V_1;
		if ((((int32_t)L_24) <= ((int32_t)L_25)))
		{
			goto IL_00c4;
		}
	}
	{
		float L_26 = V_6;
		V_0 = L_26;
		int32_t L_27 = V_5;
		V_1 = L_27;
		Object_t ** L_28 = ___source;
		Object_t * L_29 = V_4;
		*((Object_t **)(L_28)) = (Object_t *)L_29;
		goto IL_00d3;
	}

IL_00c4:
	{
		float L_30 = V_6;
		float L_31 = V_0;
		if ((!(((float)L_30) > ((float)L_31))))
		{
			goto IL_00d3;
		}
	}
	{
		float L_32 = V_6;
		V_0 = L_32;
		Object_t ** L_33 = ___source;
		Object_t * L_34 = V_4;
		*((Object_t **)(L_33)) = (Object_t *)L_34;
	}

IL_00d3:
	{
		int32_t L_35 = V_3;
		V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_00d7:
	{
		int32_t L_36 = V_3;
		List_1_t463 * L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count() */, L_37);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_003b;
		}
	}
	{
		List_1_t463 * L_39 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ComponentListPool_t2123_il2cpp_TypeInfo_var);
		ComponentListPool_Release_m9233(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		float L_40 = V_0;
		return L_40;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::<GetMinWidth>m__E(UnityEngine.UI.ILayoutElement)
extern TypeInfo* ILayoutElement_t2153_il2cpp_TypeInfo_var;
extern "C" float LayoutUtility_U3CGetMinWidthU3Em__E_m9201 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutElement_t2153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___e;
		NullCheck(L_0);
		float L_1 = (float)InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single UnityEngine.UI.ILayoutElement::get_minWidth() */, ILayoutElement_t2153_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredWidth>m__F(UnityEngine.UI.ILayoutElement)
extern TypeInfo* ILayoutElement_t2153_il2cpp_TypeInfo_var;
extern "C" float LayoutUtility_U3CGetPreferredWidthU3Em__F_m9202 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutElement_t2153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___e;
		NullCheck(L_0);
		float L_1 = (float)InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single UnityEngine.UI.ILayoutElement::get_minWidth() */, ILayoutElement_t2153_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredWidth>m__10(UnityEngine.UI.ILayoutElement)
extern TypeInfo* ILayoutElement_t2153_il2cpp_TypeInfo_var;
extern "C" float LayoutUtility_U3CGetPreferredWidthU3Em__10_m9203 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutElement_t2153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___e;
		NullCheck(L_0);
		float L_1 = (float)InterfaceFuncInvoker0< float >::Invoke(3 /* System.Single UnityEngine.UI.ILayoutElement::get_preferredWidth() */, ILayoutElement_t2153_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::<GetFlexibleWidth>m__11(UnityEngine.UI.ILayoutElement)
extern TypeInfo* ILayoutElement_t2153_il2cpp_TypeInfo_var;
extern "C" float LayoutUtility_U3CGetFlexibleWidthU3Em__11_m9204 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutElement_t2153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___e;
		NullCheck(L_0);
		float L_1 = (float)InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single UnityEngine.UI.ILayoutElement::get_flexibleWidth() */, ILayoutElement_t2153_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::<GetMinHeight>m__12(UnityEngine.UI.ILayoutElement)
extern TypeInfo* ILayoutElement_t2153_il2cpp_TypeInfo_var;
extern "C" float LayoutUtility_U3CGetMinHeightU3Em__12_m9205 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutElement_t2153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___e;
		NullCheck(L_0);
		float L_1 = (float)InterfaceFuncInvoker0< float >::Invoke(5 /* System.Single UnityEngine.UI.ILayoutElement::get_minHeight() */, ILayoutElement_t2153_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredHeight>m__13(UnityEngine.UI.ILayoutElement)
extern TypeInfo* ILayoutElement_t2153_il2cpp_TypeInfo_var;
extern "C" float LayoutUtility_U3CGetPreferredHeightU3Em__13_m9206 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutElement_t2153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___e;
		NullCheck(L_0);
		float L_1 = (float)InterfaceFuncInvoker0< float >::Invoke(5 /* System.Single UnityEngine.UI.ILayoutElement::get_minHeight() */, ILayoutElement_t2153_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredHeight>m__14(UnityEngine.UI.ILayoutElement)
extern TypeInfo* ILayoutElement_t2153_il2cpp_TypeInfo_var;
extern "C" float LayoutUtility_U3CGetPreferredHeightU3Em__14_m9207 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutElement_t2153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___e;
		NullCheck(L_0);
		float L_1 = (float)InterfaceFuncInvoker0< float >::Invoke(6 /* System.Single UnityEngine.UI.ILayoutElement::get_preferredHeight() */, ILayoutElement_t2153_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single UnityEngine.UI.LayoutUtility::<GetFlexibleHeight>m__15(UnityEngine.UI.ILayoutElement)
extern TypeInfo* ILayoutElement_t2153_il2cpp_TypeInfo_var;
extern "C" float LayoutUtility_U3CGetFlexibleHeightU3Em__15_m9208 (Object_t * __this /* static, unused */, Object_t * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILayoutElement_t2153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___e;
		NullCheck(L_0);
		float L_1 = (float)InterfaceFuncInvoker0< float >::Invoke(7 /* System.Single UnityEngine.UI.ILayoutElement::get_flexibleHeight() */, ILayoutElement_t2153_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// UnityEngine.UI.VerticalLayoutGroup
#include "UnityEngine_UI_UnityEngine_UI_VerticalLayoutGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UI.VerticalLayoutGroup
#include "UnityEngine_UI_UnityEngine_UI_VerticalLayoutGroupMethodDeclarations.h"

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
#include "UnityEngine_UI_UnityEngine_UI_HorizontalOrVerticalLayoutGrouMethodDeclarations.h"


// System.Void UnityEngine.UI.VerticalLayoutGroup::.ctor()
extern "C" void VerticalLayoutGroup__ctor_m9209 (VerticalLayoutGroup_t2116 * __this, const MethodInfo* method)
{
	{
		HorizontalOrVerticalLayoutGroup__ctor_m9108(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.VerticalLayoutGroup::CalculateLayoutInputHorizontal()
extern "C" void VerticalLayoutGroup_CalculateLayoutInputHorizontal_m9210 (VerticalLayoutGroup_t2116 * __this, const MethodInfo* method)
{
	{
		LayoutGroup_CalculateLayoutInputHorizontal_m9148(__this, /*hidden argument*/NULL);
		HorizontalOrVerticalLayoutGroup_CalcAlongAxis_m9115(__this, 0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.VerticalLayoutGroup::CalculateLayoutInputVertical()
extern "C" void VerticalLayoutGroup_CalculateLayoutInputVertical_m9211 (VerticalLayoutGroup_t2116 * __this, const MethodInfo* method)
{
	{
		HorizontalOrVerticalLayoutGroup_CalcAlongAxis_m9115(__this, 1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.VerticalLayoutGroup::SetLayoutHorizontal()
extern "C" void VerticalLayoutGroup_SetLayoutHorizontal_m9212 (VerticalLayoutGroup_t2116 * __this, const MethodInfo* method)
{
	{
		HorizontalOrVerticalLayoutGroup_SetChildrenAlongAxis_m9116(__this, 0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.VerticalLayoutGroup::SetLayoutVertical()
extern "C" void VerticalLayoutGroup_SetLayoutVertical_m9213 (VerticalLayoutGroup_t2116 * __this, const MethodInfo* method)
{
	{
		HorizontalOrVerticalLayoutGroup_SetChildrenAlongAxis_m9116(__this, 1, 1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UI.Mask
#include "UnityEngine_UI_UnityEngine_UI_Mask.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UI.Mask
#include "UnityEngine_UI_UnityEngine_UI_MaskMethodDeclarations.h"

// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_Graphic.h"
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_GraphicMethodDeclarations.h"
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"
// UnityEngine.UI.Misc
#include "UnityEngine_UI_UnityEngine_UI_MiscMethodDeclarations.h"
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
struct Component_t462;
struct Graphic_t219;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Graphic>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Graphic>()
#define Component_GetComponent_TisGraphic_t219_m9539(__this, method) (( Graphic_t219 * (*) (Component_t462 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2325_gshared)(__this, method)
struct Component_t462;
struct List_1_t463;
struct Component_t462;
struct List_1_t2;
// Declaration System.Void UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Collections.Generic.List`1<!!0>)
// System.Void UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Collections.Generic.List`1<!!0>)
extern "C" void Component_GetComponentsInChildren_TisObject_t_m9601_gshared (Component_t462 * __this, List_1_t2 * p0, const MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m9601(__this, p0, method) (( void (*) (Component_t462 *, List_1_t2 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m9601_gshared)(__this, p0, method)
// Declaration System.Void UnityEngine.Component::GetComponentsInChildren<UnityEngine.Component>(System.Collections.Generic.List`1<!!0>)
// System.Void UnityEngine.Component::GetComponentsInChildren<UnityEngine.Component>(System.Collections.Generic.List`1<!!0>)
#define Component_GetComponentsInChildren_TisComponent_t462_m9600(__this, p0, method) (( void (*) (Component_t462 *, List_1_t463 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m9601_gshared)(__this, p0, method)


// System.Void UnityEngine.UI.Mask::.ctor()
extern "C" void Mask__ctor_m9214 (Mask_t2117 * __this, const MethodInfo* method)
{
	{
		__this->___m_ShowMaskGraphic_2 = 1;
		UIBehaviour__ctor_m8206(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UI.Graphic UnityEngine.UI.Mask::get_graphic()
extern const MethodInfo* Component_GetComponent_TisGraphic_t219_m9539_MethodInfo_var;
extern "C" Graphic_t219 * Mask_get_graphic_m9215 (Mask_t2117 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisGraphic_t219_m9539_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484762);
		s_Il2CppMethodIntialized = true;
	}
	{
		Graphic_t219 * L_0 = (__this->___m_Graphic_4);
		bool L_1 = Object_op_Equality_m2377(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Graphic_t219 * L_2 = Component_GetComponent_TisGraphic_t219_m9539(__this, /*hidden argument*/Component_GetComponent_TisGraphic_t219_m9539_MethodInfo_var);
		__this->___m_Graphic_4 = L_2;
	}

IL_001d:
	{
		Graphic_t219 * L_3 = (__this->___m_Graphic_4);
		return L_3;
	}
}
// System.Boolean UnityEngine.UI.Mask::get_showMaskGraphic()
extern "C" bool Mask_get_showMaskGraphic_m9216 (Mask_t2117 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_ShowMaskGraphic_2);
		return L_0;
	}
}
// System.Void UnityEngine.UI.Mask::set_showMaskGraphic(System.Boolean)
extern "C" void Mask_set_showMaskGraphic_m9217 (Mask_t2117 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_ShowMaskGraphic_2);
		bool L_1 = ___value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___value;
		__this->___m_ShowMaskGraphic_2 = L_2;
		Graphic_t219 * L_3 = Mask_get_graphic_m9215(__this, /*hidden argument*/NULL);
		bool L_4 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_3, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		Graphic_t219 * L_5 = Mask_get_graphic_m9215(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(22 /* System.Void UnityEngine.UI.Graphic::SetMaterialDirty() */, L_5);
	}

IL_0030:
	{
		return;
	}
}
// UnityEngine.RectTransform UnityEngine.UI.Mask::get_rectTransform()
extern const MethodInfo* Component_GetComponent_TisRectTransform_t259_m9356_MethodInfo_var;
extern "C" RectTransform_t259 * Mask_get_rectTransform_m9218 (Mask_t2117 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRectTransform_t259_m9356_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484701);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t259 * V_0 = {0};
	RectTransform_t259 * G_B2_0 = {0};
	RectTransform_t259 * G_B1_0 = {0};
	{
		RectTransform_t259 * L_0 = (__this->___m_RectTransform_5);
		RectTransform_t259 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001c;
		}
	}
	{
		RectTransform_t259 * L_2 = Component_GetComponent_TisRectTransform_t259_m9356(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t259_m9356_MethodInfo_var);
		RectTransform_t259 * L_3 = L_2;
		V_0 = L_3;
		__this->___m_RectTransform_5 = L_3;
		RectTransform_t259 * L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_001c:
	{
		return G_B2_0;
	}
}
// System.Boolean UnityEngine.UI.Mask::MaskEnabled()
extern "C" bool Mask_MaskEnabled_m9219 (Mask_t2117 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Graphic_t219 * L_1 = Mask_get_graphic_m9215(__this, /*hidden argument*/NULL);
		bool L_2 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_1, (Object_t563 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.UI.Mask::OnSiblingGraphicEnabledDisabled()
extern "C" void Mask_OnSiblingGraphicEnabledDisabled_m9220 (Mask_t2117 * __this, const MethodInfo* method)
{
	{
		Mask_NotifyMaskStateChanged_m9221(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Mask::NotifyMaskStateChanged()
extern TypeInfo* ComponentListPool_t2123_il2cpp_TypeInfo_var;
extern TypeInfo* IMaskable_t2190_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentsInChildren_TisComponent_t462_m9600_MethodInfo_var;
extern "C" void Mask_NotifyMaskStateChanged_m9221 (Mask_t2117 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ComponentListPool_t2123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4009);
		IMaskable_t2190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4093);
		Component_GetComponentsInChildren_TisComponent_t462_m9600_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484806);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t463 * V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		Graphic_t219 * L_0 = Mask_get_graphic_m9215(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		Graphic_t219 * L_2 = Mask_get_graphic_m9215(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		CanvasRenderer_t2031 * L_3 = Graphic_get_canvasRenderer_m8472(L_2, /*hidden argument*/NULL);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		NullCheck(L_3);
		CanvasRenderer_set_isMask_m9602(L_3, L_4, /*hidden argument*/NULL);
		Graphic_t219 * L_5 = Mask_get_graphic_m9215(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(22 /* System.Void UnityEngine.UI.Graphic::SetMaterialDirty() */, L_5);
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ComponentListPool_t2123_il2cpp_TypeInfo_var);
		List_1_t463 * L_6 = ComponentListPool_Get_m9232(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_6;
		List_1_t463 * L_7 = V_0;
		Component_GetComponentsInChildren_TisComponent_t462_m9600(__this, L_7, /*hidden argument*/Component_GetComponentsInChildren_TisComponent_t462_m9600_MethodInfo_var);
		V_1 = 0;
		goto IL_0096;
	}

IL_0046:
	{
		List_1_t463 * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Component_t462 * L_10 = (Component_t462 *)VirtFuncInvoker1< Component_t462 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32) */, L_8, L_9);
		bool L_11 = Object_op_Equality_m2377(NULL /*static, unused*/, L_10, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0074;
		}
	}
	{
		List_1_t463 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		Component_t462 * L_14 = (Component_t462 *)VirtFuncInvoker1< Component_t462 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32) */, L_12, L_13);
		NullCheck(L_14);
		GameObject_t49 * L_15 = Component_get_gameObject_m2365(L_14, /*hidden argument*/NULL);
		GameObject_t49 * L_16 = Component_get_gameObject_m2365(__this, /*hidden argument*/NULL);
		bool L_17 = Object_op_Equality_m2377(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0079;
		}
	}

IL_0074:
	{
		goto IL_0092;
	}

IL_0079:
	{
		List_1_t463 * L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Component_t462 * L_20 = (Component_t462 *)VirtFuncInvoker1< Component_t462 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32) */, L_18, L_19);
		V_2 = ((Object_t *)IsInst(L_20, IMaskable_t2190_il2cpp_TypeInfo_var));
		Object_t * L_21 = V_2;
		if (!L_21)
		{
			goto IL_0092;
		}
	}
	{
		Object_t * L_22 = V_2;
		NullCheck(L_22);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.UI.IMaskable::ParentMaskStateChanged() */, IMaskable_t2190_il2cpp_TypeInfo_var, L_22);
	}

IL_0092:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0096:
	{
		int32_t L_24 = V_1;
		List_1_t463 * L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count() */, L_25);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0046;
		}
	}
	{
		List_1_t463 * L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ComponentListPool_t2123_il2cpp_TypeInfo_var);
		ComponentListPool_Release_m9233(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Mask::ClearCachedMaterial()
extern "C" void Mask_ClearCachedMaterial_m9222 (Mask_t2117 * __this, const MethodInfo* method)
{
	{
		Material_t48 * L_0 = (__this->___m_RenderMaterial_3);
		bool L_1 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Material_t48 * L_2 = (__this->___m_RenderMaterial_3);
		Misc_DestroyImmediate_m8722(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		__this->___m_RenderMaterial_3 = (Material_t48 *)NULL;
		return;
	}
}
// System.Void UnityEngine.UI.Mask::OnEnable()
extern "C" void Mask_OnEnable_m9223 (Mask_t2117 * __this, const MethodInfo* method)
{
	{
		UIBehaviour_OnEnable_m8208(__this, /*hidden argument*/NULL);
		Mask_NotifyMaskStateChanged_m9221(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Mask::OnDisable()
extern "C" void Mask_OnDisable_m9224 (Mask_t2117 * __this, const MethodInfo* method)
{
	{
		UIBehaviour_OnDisable_m8210(__this, /*hidden argument*/NULL);
		Mask_ClearCachedMaterial_m9222(__this, /*hidden argument*/NULL);
		Mask_NotifyMaskStateChanged_m9221(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.Mask::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern TypeInfo* RectTransformUtility_t2167_il2cpp_TypeInfo_var;
extern "C" bool Mask_IsRaycastLocationValid_m9225 (Mask_t2117 * __this, Vector2_t97  ___sp, Camera_t356 * ___eventCamera, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t2167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4014);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t259 * L_0 = Mask_get_rectTransform_m9218(__this, /*hidden argument*/NULL);
		Vector2_t97  L_1 = ___sp;
		Camera_t356 * L_2 = ___eventCamera;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t2167_il2cpp_TypeInfo_var);
		bool L_3 = RectTransformUtility_RectangleContainsScreenPoint_m9393(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Material UnityEngine.UI.Mask::GetModifiedMaterial(UnityEngine.Material)
extern TypeInfo* Material_t48_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Material_t48 * Mask_GetModifiedMaterial_m9226 (Mask_t2117 * __this, Material_t48 * ___baseMaterial, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	Material_t48 * V_0 = {0};
	String_t* G_B5_0 = {0};
	Material_t48 * G_B5_1 = {0};
	String_t* G_B4_0 = {0};
	Material_t48 * G_B4_1 = {0};
	int32_t G_B6_0 = 0;
	String_t* G_B6_1 = {0};
	Material_t48 * G_B6_2 = {0};
	{
		Mask_ClearCachedMaterial_m9222(__this, /*hidden argument*/NULL);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Material_t48 * L_1 = ___baseMaterial;
		return L_1;
	}

IL_0013:
	{
		Material_t48 * L_2 = ___baseMaterial;
		Material_t48 * L_3 = (Material_t48 *)il2cpp_codegen_object_new (Material_t48_il2cpp_TypeInfo_var);
		Material__ctor_m3082(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Material_t48 * L_4 = V_0;
		Material_t48 * L_5 = ___baseMaterial;
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m2397(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m103(NULL /*static, unused*/, (String_t*) &_stringLiteral2129, L_6, (String_t*) &_stringLiteral775, /*hidden argument*/NULL);
		NullCheck(L_4);
		Object_set_name_m2449(L_4, L_7, /*hidden argument*/NULL);
		Material_t48 * L_8 = V_0;
		NullCheck(L_8);
		Object_set_hideFlags_m3193(L_8, ((int32_t)61), /*hidden argument*/NULL);
		Material_t48 * L_9 = V_0;
		__this->___m_RenderMaterial_3 = L_9;
		Material_t48 * L_10 = (__this->___m_RenderMaterial_3);
		NullCheck(L_10);
		bool L_11 = Material_HasProperty_m9550(L_10, (String_t*) &_stringLiteral2130, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0081;
		}
	}
	{
		Material_t48 * L_12 = (__this->___m_RenderMaterial_3);
		bool L_13 = (__this->___m_ShowMaskGraphic_2);
		G_B4_0 = (String_t*) &_stringLiteral2130;
		G_B4_1 = L_12;
		if (!L_13)
		{
			G_B5_0 = (String_t*) &_stringLiteral2130;
			G_B5_1 = L_12;
			goto IL_0076;
		}
	}
	{
		G_B6_0 = ((int32_t)15);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0077;
	}

IL_0076:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		Material_SetInt_m9551(G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		goto IL_0097;
	}

IL_0081:
	{
		Material_t48 * L_14 = ___baseMaterial;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m2832(NULL /*static, unused*/, (String_t*) &_stringLiteral2123, L_14, (String_t*) &_stringLiteral2131, /*hidden argument*/NULL);
		Material_t48 * L_16 = ___baseMaterial;
		Debug_LogWarning_m2769(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
	}

IL_0097:
	{
		Material_t48 * L_17 = (__this->___m_RenderMaterial_3);
		return L_17;
	}
}
// UnityEngine.UI.CanvasListPool
#include "UnityEngine_UI_UnityEngine_UI_CanvasListPool.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UI.CanvasListPool
#include "UnityEngine_UI_UnityEngine_UI_CanvasListPoolMethodDeclarations.h"

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_4.h"
// System.Collections.Generic.List`1<UnityEngine.Canvas>
#include "mscorlib_System_Collections_Generic_List_1_gen_74.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_1.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_4MethodDeclarations.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.Canvas>
#include "mscorlib_System_Collections_Generic_List_1_gen_74MethodDeclarations.h"


// System.Void UnityEngine.UI.CanvasListPool::.cctor()
extern TypeInfo* CanvasListPool_t2120_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_1_t2119_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectPool_1_t2118_il2cpp_TypeInfo_var;
extern const MethodInfo* CanvasListPool_U3Cs_CanvasListPoolU3Em__16_m9230_MethodInfo_var;
extern const MethodInfo* UnityAction_1__ctor_m9603_MethodInfo_var;
extern const MethodInfo* ObjectPool_1__ctor_m9604_MethodInfo_var;
extern "C" void CanvasListPool__cctor_m9227 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CanvasListPool_t2120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4006);
		UnityAction_1_t2119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4095);
		ObjectPool_1_t2118_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4096);
		CanvasListPool_U3Cs_CanvasListPoolU3Em__16_m9230_MethodInfo_var = il2cpp_codegen_method_info_from_index(1159);
		UnityAction_1__ctor_m9603_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484808);
		ObjectPool_1__ctor_m9604_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484809);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		UnityAction_1_t2119 * L_0 = ((CanvasListPool_t2120_StaticFields*)CanvasListPool_t2120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_1;
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)CanvasListPool_U3Cs_CanvasListPoolU3Em__16_m9230_MethodInfo_var };
		UnityAction_1_t2119 * L_2 = (UnityAction_1_t2119 *)il2cpp_codegen_object_new (UnityAction_1_t2119_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m9603(L_2, NULL, L_1, /*hidden argument*/UnityAction_1__ctor_m9603_MethodInfo_var);
		((CanvasListPool_t2120_StaticFields*)CanvasListPool_t2120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_1 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t2119 * L_3 = ((CanvasListPool_t2120_StaticFields*)CanvasListPool_t2120_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_1;
		ObjectPool_1_t2118 * L_4 = (ObjectPool_1_t2118 *)il2cpp_codegen_object_new (ObjectPool_1_t2118_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m9604(L_4, (UnityAction_1_t2119 *)G_B2_0, L_3, /*hidden argument*/ObjectPool_1__ctor_m9604_MethodInfo_var);
		((CanvasListPool_t2120_StaticFields*)CanvasListPool_t2120_il2cpp_TypeInfo_var->static_fields)->___s_CanvasListPool_0 = L_4;
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Canvas> UnityEngine.UI.CanvasListPool::Get()
extern TypeInfo* CanvasListPool_t2120_il2cpp_TypeInfo_var;
extern const MethodInfo* ObjectPool_1_Get_m9605_MethodInfo_var;
extern "C" List_1_t2154 * CanvasListPool_Get_m9228 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CanvasListPool_t2120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4006);
		ObjectPool_1_Get_m9605_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484810);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CanvasListPool_t2120_il2cpp_TypeInfo_var);
		ObjectPool_1_t2118 * L_0 = ((CanvasListPool_t2120_StaticFields*)CanvasListPool_t2120_il2cpp_TypeInfo_var->static_fields)->___s_CanvasListPool_0;
		NullCheck(L_0);
		List_1_t2154 * L_1 = ObjectPool_1_Get_m9605(L_0, /*hidden argument*/ObjectPool_1_Get_m9605_MethodInfo_var);
		return L_1;
	}
}
// System.Void UnityEngine.UI.CanvasListPool::Release(System.Collections.Generic.List`1<UnityEngine.Canvas>)
extern TypeInfo* CanvasListPool_t2120_il2cpp_TypeInfo_var;
extern const MethodInfo* ObjectPool_1_Release_m9606_MethodInfo_var;
extern "C" void CanvasListPool_Release_m9229 (Object_t * __this /* static, unused */, List_1_t2154 * ___toRelease, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CanvasListPool_t2120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4006);
		ObjectPool_1_Release_m9606_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484811);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CanvasListPool_t2120_il2cpp_TypeInfo_var);
		ObjectPool_1_t2118 * L_0 = ((CanvasListPool_t2120_StaticFields*)CanvasListPool_t2120_il2cpp_TypeInfo_var->static_fields)->___s_CanvasListPool_0;
		List_1_t2154 * L_1 = ___toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m9606(L_0, L_1, /*hidden argument*/ObjectPool_1_Release_m9606_MethodInfo_var);
		return;
	}
}
// System.Void UnityEngine.UI.CanvasListPool::<s_CanvasListPool>m__16(System.Collections.Generic.List`1<UnityEngine.Canvas>)
extern "C" void CanvasListPool_U3Cs_CanvasListPoolU3Em__16_m9230 (Object_t * __this /* static, unused */, List_1_t2154 * ___l, const MethodInfo* method)
{
	{
		List_1_t2154 * L_0 = ___l;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Clear() */, L_0);
		return;
	}
}
// UnityEngine.UI.ComponentListPool
#include "UnityEngine_UI_UnityEngine_UI_ComponentListPool.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_5.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_2.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_5MethodDeclarations.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_2MethodDeclarations.h"


// System.Void UnityEngine.UI.ComponentListPool::.cctor()
extern TypeInfo* ComponentListPool_t2123_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_1_t2122_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectPool_1_t2121_il2cpp_TypeInfo_var;
extern const MethodInfo* ComponentListPool_U3Cs_ComponentListPoolU3Em__17_m9234_MethodInfo_var;
extern const MethodInfo* UnityAction_1__ctor_m9607_MethodInfo_var;
extern const MethodInfo* ObjectPool_1__ctor_m9608_MethodInfo_var;
extern "C" void ComponentListPool__cctor_m9231 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ComponentListPool_t2123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4009);
		UnityAction_1_t2122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4098);
		ObjectPool_1_t2121_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4099);
		ComponentListPool_U3Cs_ComponentListPoolU3Em__17_m9234_MethodInfo_var = il2cpp_codegen_method_info_from_index(1164);
		UnityAction_1__ctor_m9607_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484813);
		ObjectPool_1__ctor_m9608_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484814);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		UnityAction_1_t2122 * L_0 = ((ComponentListPool_t2123_StaticFields*)ComponentListPool_t2123_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_1;
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)ComponentListPool_U3Cs_ComponentListPoolU3Em__17_m9234_MethodInfo_var };
		UnityAction_1_t2122 * L_2 = (UnityAction_1_t2122 *)il2cpp_codegen_object_new (UnityAction_1_t2122_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m9607(L_2, NULL, L_1, /*hidden argument*/UnityAction_1__ctor_m9607_MethodInfo_var);
		((ComponentListPool_t2123_StaticFields*)ComponentListPool_t2123_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_1 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t2122 * L_3 = ((ComponentListPool_t2123_StaticFields*)ComponentListPool_t2123_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache1_1;
		ObjectPool_1_t2121 * L_4 = (ObjectPool_1_t2121 *)il2cpp_codegen_object_new (ObjectPool_1_t2121_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m9608(L_4, (UnityAction_1_t2122 *)G_B2_0, L_3, /*hidden argument*/ObjectPool_1__ctor_m9608_MethodInfo_var);
		((ComponentListPool_t2123_StaticFields*)ComponentListPool_t2123_il2cpp_TypeInfo_var->static_fields)->___s_ComponentListPool_0 = L_4;
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Component> UnityEngine.UI.ComponentListPool::Get()
extern TypeInfo* ComponentListPool_t2123_il2cpp_TypeInfo_var;
extern const MethodInfo* ObjectPool_1_Get_m9609_MethodInfo_var;
extern "C" List_1_t463 * ComponentListPool_Get_m9232 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ComponentListPool_t2123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4009);
		ObjectPool_1_Get_m9609_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484815);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ComponentListPool_t2123_il2cpp_TypeInfo_var);
		ObjectPool_1_t2121 * L_0 = ((ComponentListPool_t2123_StaticFields*)ComponentListPool_t2123_il2cpp_TypeInfo_var->static_fields)->___s_ComponentListPool_0;
		NullCheck(L_0);
		List_1_t463 * L_1 = ObjectPool_1_Get_m9609(L_0, /*hidden argument*/ObjectPool_1_Get_m9609_MethodInfo_var);
		return L_1;
	}
}
// System.Void UnityEngine.UI.ComponentListPool::Release(System.Collections.Generic.List`1<UnityEngine.Component>)
extern TypeInfo* ComponentListPool_t2123_il2cpp_TypeInfo_var;
extern const MethodInfo* ObjectPool_1_Release_m9610_MethodInfo_var;
extern "C" void ComponentListPool_Release_m9233 (Object_t * __this /* static, unused */, List_1_t463 * ___toRelease, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ComponentListPool_t2123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4009);
		ObjectPool_1_Release_m9610_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484816);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ComponentListPool_t2123_il2cpp_TypeInfo_var);
		ObjectPool_1_t2121 * L_0 = ((ComponentListPool_t2123_StaticFields*)ComponentListPool_t2123_il2cpp_TypeInfo_var->static_fields)->___s_ComponentListPool_0;
		List_1_t463 * L_1 = ___toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m9610(L_0, L_1, /*hidden argument*/ObjectPool_1_Release_m9610_MethodInfo_var);
		return;
	}
}
// System.Void UnityEngine.UI.ComponentListPool::<s_ComponentListPool>m__17(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void ComponentListPool_U3Cs_ComponentListPoolU3Em__17_m9234 (Object_t * __this /* static, unused */, List_1_t463 * ___l, const MethodInfo* method)
{
	{
		List_1_t463 * L_0 = ___l;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Clear() */, L_0);
		return;
	}
}
// UnityEngine.UI.BaseVertexEffect
#include "UnityEngine_UI_UnityEngine_UI_BaseVertexEffect.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UI.BaseVertexEffect
#include "UnityEngine_UI_UnityEngine_UI_BaseVertexEffectMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_73.h"


// System.Void UnityEngine.UI.BaseVertexEffect::.ctor()
extern "C" void BaseVertexEffect__ctor_m9235 (BaseVertexEffect_t2124 * __this, const MethodInfo* method)
{
	{
		UIBehaviour__ctor_m8206(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UI.Graphic UnityEngine.UI.BaseVertexEffect::get_graphic()
extern const MethodInfo* Component_GetComponent_TisGraphic_t219_m9539_MethodInfo_var;
extern "C" Graphic_t219 * BaseVertexEffect_get_graphic_m9236 (BaseVertexEffect_t2124 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisGraphic_t219_m9539_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484762);
		s_Il2CppMethodIntialized = true;
	}
	{
		Graphic_t219 * L_0 = (__this->___m_Graphic_2);
		bool L_1 = Object_op_Equality_m2377(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Graphic_t219 * L_2 = Component_GetComponent_TisGraphic_t219_m9539(__this, /*hidden argument*/Component_GetComponent_TisGraphic_t219_m9539_MethodInfo_var);
		__this->___m_Graphic_2 = L_2;
	}

IL_001d:
	{
		Graphic_t219 * L_3 = (__this->___m_Graphic_2);
		return L_3;
	}
}
// System.Void UnityEngine.UI.BaseVertexEffect::OnEnable()
extern "C" void BaseVertexEffect_OnEnable_m9237 (BaseVertexEffect_t2124 * __this, const MethodInfo* method)
{
	{
		UIBehaviour_OnEnable_m8208(__this, /*hidden argument*/NULL);
		Graphic_t219 * L_0 = BaseVertexEffect_get_graphic_m9236(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Graphic_t219 * L_2 = BaseVertexEffect_get_graphic_m9236(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(21 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.UI.BaseVertexEffect::OnDisable()
extern "C" void BaseVertexEffect_OnDisable_m9238 (BaseVertexEffect_t2124 * __this, const MethodInfo* method)
{
	{
		Graphic_t219 * L_0 = BaseVertexEffect_get_graphic_m9236(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_0, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Graphic_t219 * L_2 = BaseVertexEffect_get_graphic_m9236(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(21 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, L_2);
	}

IL_001c:
	{
		UIBehaviour_OnDisable_m8210(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.BaseVertexEffect::ModifyVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
// UnityEngine.UI.Outline
#include "UnityEngine_UI_UnityEngine_UI_Outline.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UI.Outline
#include "UnityEngine_UI_UnityEngine_UI_OutlineMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// UnityEngine.UI.Shadow
#include "UnityEngine_UI_UnityEngine_UI_ShadowMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_73MethodDeclarations.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"


// System.Void UnityEngine.UI.Outline::.ctor()
extern "C" void Outline__ctor_m9239 (Outline_t2125 * __this, const MethodInfo* method)
{
	{
		Shadow__ctor_m9243(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Outline::ModifyVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Outline_ModifyVertices_m9240 (Outline_t2125 * __this, List_1_t2058 * ___verts, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t97  V_2 = {0};
	Vector2_t97  V_3 = {0};
	Vector2_t97  V_4 = {0};
	Vector2_t97  V_5 = {0};
	Vector2_t97  V_6 = {0};
	Vector2_t97  V_7 = {0};
	Vector2_t97  V_8 = {0};
	Vector2_t97  V_9 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
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
		V_0 = 0;
		List_1_t2058 * L_1 = ___verts;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_1);
		V_1 = L_2;
		List_1_t2058 * L_3 = ___verts;
		Color_t121  L_4 = Shadow_get_effectColor_m9244(__this, /*hidden argument*/NULL);
		Color32_t89  L_5 = Color32_op_Implicit_m2445(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		List_1_t2058 * L_7 = ___verts;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_7);
		Vector2_t97  L_9 = Shadow_get_effectDistance_m9246(__this, /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = ((&V_2)->___x_1);
		Vector2_t97  L_11 = Shadow_get_effectDistance_m9246(__this, /*hidden argument*/NULL);
		V_3 = L_11;
		float L_12 = ((&V_3)->___y_2);
		Shadow_ApplyShadow_m9250(__this, L_3, L_5, L_6, L_8, L_10, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_0 = L_13;
		List_1_t2058 * L_14 = ___verts;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_14);
		V_1 = L_15;
		List_1_t2058 * L_16 = ___verts;
		Color_t121  L_17 = Shadow_get_effectColor_m9244(__this, /*hidden argument*/NULL);
		Color32_t89  L_18 = Color32_op_Implicit_m2445(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_0;
		List_1_t2058 * L_20 = ___verts;
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_20);
		Vector2_t97  L_22 = Shadow_get_effectDistance_m9246(__this, /*hidden argument*/NULL);
		V_4 = L_22;
		float L_23 = ((&V_4)->___x_1);
		Vector2_t97  L_24 = Shadow_get_effectDistance_m9246(__this, /*hidden argument*/NULL);
		V_5 = L_24;
		float L_25 = ((&V_5)->___y_2);
		Shadow_ApplyShadow_m9250(__this, L_16, L_18, L_19, L_21, L_23, ((-L_25)), /*hidden argument*/NULL);
		int32_t L_26 = V_1;
		V_0 = L_26;
		List_1_t2058 * L_27 = ___verts;
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_27);
		V_1 = L_28;
		List_1_t2058 * L_29 = ___verts;
		Color_t121  L_30 = Shadow_get_effectColor_m9244(__this, /*hidden argument*/NULL);
		Color32_t89  L_31 = Color32_op_Implicit_m2445(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		int32_t L_32 = V_0;
		List_1_t2058 * L_33 = ___verts;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_33);
		Vector2_t97  L_35 = Shadow_get_effectDistance_m9246(__this, /*hidden argument*/NULL);
		V_6 = L_35;
		float L_36 = ((&V_6)->___x_1);
		Vector2_t97  L_37 = Shadow_get_effectDistance_m9246(__this, /*hidden argument*/NULL);
		V_7 = L_37;
		float L_38 = ((&V_7)->___y_2);
		Shadow_ApplyShadow_m9250(__this, L_29, L_31, L_32, L_34, ((-L_36)), L_38, /*hidden argument*/NULL);
		int32_t L_39 = V_1;
		V_0 = L_39;
		List_1_t2058 * L_40 = ___verts;
		NullCheck(L_40);
		int32_t L_41 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_40);
		V_1 = L_41;
		List_1_t2058 * L_42 = ___verts;
		Color_t121  L_43 = Shadow_get_effectColor_m9244(__this, /*hidden argument*/NULL);
		Color32_t89  L_44 = Color32_op_Implicit_m2445(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		int32_t L_45 = V_0;
		List_1_t2058 * L_46 = ___verts;
		NullCheck(L_46);
		int32_t L_47 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_46);
		Vector2_t97  L_48 = Shadow_get_effectDistance_m9246(__this, /*hidden argument*/NULL);
		V_8 = L_48;
		float L_49 = ((&V_8)->___x_1);
		Vector2_t97  L_50 = Shadow_get_effectDistance_m9246(__this, /*hidden argument*/NULL);
		V_9 = L_50;
		float L_51 = ((&V_9)->___y_2);
		Shadow_ApplyShadow_m9250(__this, L_42, L_44, L_45, L_47, ((-L_49)), ((-L_51)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UI.PositionAsUV1
#include "UnityEngine_UI_UnityEngine_UI_PositionAsUV1.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UI.PositionAsUV1
#include "UnityEngine_UI_UnityEngine_UI_PositionAsUV1MethodDeclarations.h"

// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"


// System.Void UnityEngine.UI.PositionAsUV1::.ctor()
extern "C" void PositionAsUV1__ctor_m9241 (PositionAsUV1_t2127 * __this, const MethodInfo* method)
{
	{
		BaseVertexEffect__ctor_m9235(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.PositionAsUV1::ModifyVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void PositionAsUV1_ModifyVertices_m9242 (PositionAsUV1_t2127 * __this, List_1_t2058 * ___verts, const MethodInfo* method)
{
	int32_t V_0 = 0;
	UIVertex_t2056  V_1 = {0};
	UIVertex_t2056  V_2 = {0};
	UIVertex_t2056  V_3 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
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
		V_0 = 0;
		goto IL_005b;
	}

IL_0013:
	{
		List_1_t2058 * L_1 = ___verts;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		UIVertex_t2056  L_3 = (UIVertex_t2056 )VirtFuncInvoker1< UIVertex_t2056 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, L_1, L_2);
		V_1 = L_3;
		List_1_t2058 * L_4 = ___verts;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		UIVertex_t2056  L_6 = (UIVertex_t2056 )VirtFuncInvoker1< UIVertex_t2056 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, L_4, L_5);
		V_2 = L_6;
		Vector3_t53 * L_7 = &((&V_2)->___position_0);
		float L_8 = (L_7->___x_1);
		List_1_t2058 * L_9 = ___verts;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		UIVertex_t2056  L_11 = (UIVertex_t2056 )VirtFuncInvoker1< UIVertex_t2056 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, L_9, L_10);
		V_3 = L_11;
		Vector3_t53 * L_12 = &((&V_3)->___position_0);
		float L_13 = (L_12->___y_2);
		Vector2_t97  L_14 = {0};
		Vector2__ctor_m2330(&L_14, L_8, L_13, /*hidden argument*/NULL);
		(&V_1)->___uv1_4 = L_14;
		List_1_t2058 * L_15 = ___verts;
		int32_t L_16 = V_0;
		UIVertex_t2056  L_17 = V_1;
		NullCheck(L_15);
		VirtActionInvoker2< int32_t, UIVertex_t2056  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,!0) */, L_15, L_16, L_17);
		int32_t L_18 = V_0;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_19 = V_0;
		List_1_t2058 * L_20 = ___verts;
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_20);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// UnityEngine.UI.Shadow
#include "UnityEngine_UI_UnityEngine_UI_Shadow.h"
#ifndef _MSC_VER
#else
#endif

// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"


// System.Void UnityEngine.UI.Shadow::.ctor()
extern "C" void Shadow__ctor_m9243 (Shadow_t2126 * __this, const MethodInfo* method)
{
	{
		Color_t121  L_0 = {0};
		Color__ctor_m2539(&L_0, (0.0f), (0.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		__this->___m_EffectColor_3 = L_0;
		Vector2_t97  L_1 = {0};
		Vector2__ctor_m2330(&L_1, (1.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___m_EffectDistance_4 = L_1;
		__this->___m_UseGraphicAlpha_5 = 1;
		BaseVertexEffect__ctor_m9235(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color UnityEngine.UI.Shadow::get_effectColor()
extern "C" Color_t121  Shadow_get_effectColor_m9244 (Shadow_t2126 * __this, const MethodInfo* method)
{
	{
		Color_t121  L_0 = (__this->___m_EffectColor_3);
		return L_0;
	}
}
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
extern "C" void Shadow_set_effectColor_m9245 (Shadow_t2126 * __this, Color_t121  ___value, const MethodInfo* method)
{
	{
		Color_t121  L_0 = ___value;
		__this->___m_EffectColor_3 = L_0;
		Graphic_t219 * L_1 = BaseVertexEffect_get_graphic_m9236(__this, /*hidden argument*/NULL);
		bool L_2 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_1, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Graphic_t219 * L_3 = BaseVertexEffect_get_graphic_m9236(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(21 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, L_3);
	}

IL_0023:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UI.Shadow::get_effectDistance()
extern "C" Vector2_t97  Shadow_get_effectDistance_m9246 (Shadow_t2126 * __this, const MethodInfo* method)
{
	{
		Vector2_t97  L_0 = (__this->___m_EffectDistance_4);
		return L_0;
	}
}
// System.Void UnityEngine.UI.Shadow::set_effectDistance(UnityEngine.Vector2)
extern "C" void Shadow_set_effectDistance_m9247 (Shadow_t2126 * __this, Vector2_t97  ___value, const MethodInfo* method)
{
	{
		float L_0 = ((&___value)->___x_1);
		if ((!(((float)L_0) > ((float)(600.0f)))))
		{
			goto IL_001d;
		}
	}
	{
		(&___value)->___x_1 = (600.0f);
	}

IL_001d:
	{
		float L_1 = ((&___value)->___x_1);
		if ((!(((float)L_1) < ((float)(-600.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		(&___value)->___x_1 = (-600.0f);
	}

IL_003a:
	{
		float L_2 = ((&___value)->___y_2);
		if ((!(((float)L_2) > ((float)(600.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		(&___value)->___y_2 = (600.0f);
	}

IL_0057:
	{
		float L_3 = ((&___value)->___y_2);
		if ((!(((float)L_3) < ((float)(-600.0f)))))
		{
			goto IL_0074;
		}
	}
	{
		(&___value)->___y_2 = (-600.0f);
	}

IL_0074:
	{
		Vector2_t97  L_4 = (__this->___m_EffectDistance_4);
		Vector2_t97  L_5 = ___value;
		bool L_6 = Vector2_op_Equality_m9611(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
		Vector2_t97  L_7 = ___value;
		__this->___m_EffectDistance_4 = L_7;
		Graphic_t219 * L_8 = BaseVertexEffect_get_graphic_m9236(__this, /*hidden argument*/NULL);
		bool L_9 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_8, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00a9;
		}
	}
	{
		Graphic_t219 * L_10 = BaseVertexEffect_get_graphic_m9236(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(21 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, L_10);
	}

IL_00a9:
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.Shadow::get_useGraphicAlpha()
extern "C" bool Shadow_get_useGraphicAlpha_m9248 (Shadow_t2126 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_UseGraphicAlpha_5);
		return L_0;
	}
}
// System.Void UnityEngine.UI.Shadow::set_useGraphicAlpha(System.Boolean)
extern "C" void Shadow_set_useGraphicAlpha_m9249 (Shadow_t2126 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_UseGraphicAlpha_5 = L_0;
		Graphic_t219 * L_1 = BaseVertexEffect_get_graphic_m9236(__this, /*hidden argument*/NULL);
		bool L_2 = Object_op_Inequality_m2332(NULL /*static, unused*/, L_1, (Object_t563 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Graphic_t219 * L_3 = BaseVertexEffect_get_graphic_m9236(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(21 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, L_3);
	}

IL_0023:
	{
		return;
	}
}
// System.Void UnityEngine.UI.Shadow::ApplyShadow(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
extern const MethodInfo* List_1_get_Capacity_m9384_MethodInfo_var;
extern const MethodInfo* List_1_set_Capacity_m9385_MethodInfo_var;
extern "C" void Shadow_ApplyShadow_m9250 (Shadow_t2126 * __this, List_1_t2058 * ___verts, Color32_t89  ___color, int32_t ___start, int32_t ___end, float ___x, float ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_get_Capacity_m9384_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484710);
		List_1_set_Capacity_m9385_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484711);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t2056  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t53  V_3 = {0};
	Color32_t89  V_4 = {0};
	UIVertex_t2056  V_5 = {0};
	{
		List_1_t2058 * L_0 = ___verts;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_0);
		V_1 = ((int32_t)((int32_t)L_1*(int32_t)2));
		List_1_t2058 * L_2 = ___verts;
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Capacity_m9384(L_2, /*hidden argument*/List_1_get_Capacity_m9384_MethodInfo_var);
		int32_t L_4 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t2058 * L_5 = ___verts;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		List_1_set_Capacity_m9385(L_5, L_6, /*hidden argument*/List_1_set_Capacity_m9385_MethodInfo_var);
	}

IL_001c:
	{
		int32_t L_7 = ___start;
		V_2 = L_7;
		goto IL_00b0;
	}

IL_0023:
	{
		List_1_t2058 * L_8 = ___verts;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		UIVertex_t2056  L_10 = (UIVertex_t2056 )VirtFuncInvoker1< UIVertex_t2056 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, L_8, L_9);
		V_0 = L_10;
		List_1_t2058 * L_11 = ___verts;
		UIVertex_t2056  L_12 = V_0;
		NullCheck(L_11);
		VirtActionInvoker1< UIVertex_t2056  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(!0) */, L_11, L_12);
		Vector3_t53  L_13 = ((&V_0)->___position_0);
		V_3 = L_13;
		Vector3_t53 * L_14 = (&V_3);
		float L_15 = (L_14->___x_1);
		float L_16 = ___x;
		L_14->___x_1 = ((float)((float)L_15+(float)L_16));
		Vector3_t53 * L_17 = (&V_3);
		float L_18 = (L_17->___y_2);
		float L_19 = ___y;
		L_17->___y_2 = ((float)((float)L_18+(float)L_19));
		Vector3_t53  L_20 = V_3;
		(&V_0)->___position_0 = L_20;
		Color32_t89  L_21 = ___color;
		V_4 = L_21;
		bool L_22 = (__this->___m_UseGraphicAlpha_5);
		if (!L_22)
		{
			goto IL_009b;
		}
	}
	{
		uint8_t L_23 = ((&V_4)->___a_3);
		List_1_t2058 * L_24 = ___verts;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		UIVertex_t2056  L_26 = (UIVertex_t2056 )VirtFuncInvoker1< UIVertex_t2056 , int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, L_24, L_25);
		V_5 = L_26;
		Color32_t89 * L_27 = &((&V_5)->___color_2);
		uint8_t L_28 = (L_27->___a_3);
		(&V_4)->___a_3 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_23*(int32_t)L_28))/(int32_t)((int32_t)255)))));
	}

IL_009b:
	{
		Color32_t89  L_29 = V_4;
		(&V_0)->___color_2 = L_29;
		List_1_t2058 * L_30 = ___verts;
		int32_t L_31 = V_2;
		UIVertex_t2056  L_32 = V_0;
		NullCheck(L_30);
		VirtActionInvoker2< int32_t, UIVertex_t2056  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,!0) */, L_30, L_31, L_32);
		int32_t L_33 = V_2;
		V_2 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_00b0:
	{
		int32_t L_34 = V_2;
		int32_t L_35 = ___end;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Shadow::ModifyVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Shadow_ModifyVertices_m9251 (Shadow_t2126 * __this, List_1_t2058 * ___verts, const MethodInfo* method)
{
	Vector2_t97  V_0 = {0};
	Vector2_t97  V_1 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
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
		List_1_t2058 * L_1 = ___verts;
		Color_t121  L_2 = Shadow_get_effectColor_m9244(__this, /*hidden argument*/NULL);
		Color32_t89  L_3 = Color32_op_Implicit_m2445(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		List_1_t2058 * L_4 = ___verts;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_4);
		Vector2_t97  L_6 = Shadow_get_effectDistance_m9246(__this, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = ((&V_0)->___x_1);
		Vector2_t97  L_8 = Shadow_get_effectDistance_m9246(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = ((&V_1)->___y_2);
		Shadow_ApplyShadow_m9250(__this, L_1, L_3, 0, L_5, L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
