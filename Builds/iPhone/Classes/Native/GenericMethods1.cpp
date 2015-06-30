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
#include "stringLiterals.h"
#include "codegen/il2cpp-codegen.h"

// System.Array
#include "mscorlib_System_Array.h"
// System.Void
#include "mscorlib_System_Void.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Comparison`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Comparison_1_gen_103.h"
// System.Comparison`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Comparison_1_gen_103MethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
struct Array_t;
struct UICharInfoU5BU5D_t2929;
// Declaration System.Void System.Array::swap<UnityEngine.UICharInfo>(!!0[],System.Int32,System.Int32)
// System.Void System.Array::swap<UnityEngine.UICharInfo>(!!0[],System.Int32,System.Int32)
extern "C" void Array_swap_TisUICharInfo_t2177_m46126_gshared (Object_t * __this /* static, unused */, UICharInfoU5BU5D_t2929* p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define Array_swap_TisUICharInfo_t2177_m46126(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t2929*, int32_t, int32_t, const MethodInfo*))Array_swap_TisUICharInfo_t2177_m46126_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct Array_t;
struct UICharInfoU5BU5D_t2929;
struct Comparison_1_t6125;
// Declaration System.Void System.Array::qsort<UnityEngine.UICharInfo>(!!0[],System.Int32,System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::qsort<UnityEngine.UICharInfo>(!!0[],System.Int32,System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_qsort_TisUICharInfo_t2177_m46124_gshared (Object_t * __this /* static, unused */, UICharInfoU5BU5D_t2929* p0, int32_t p1, int32_t p2, Comparison_1_t6125 * p3, const MethodInfo* method);
#define Array_qsort_TisUICharInfo_t2177_m46124(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t2929*, int32_t, int32_t, Comparison_1_t6125 *, const MethodInfo*))Array_qsort_TisUICharInfo_t2177_m46124_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Void System.Array::qsort<UnityEngine.UICharInfo>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
// System.Void System.Array::qsort<UnityEngine.UICharInfo>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern "C" void Array_qsort_TisUICharInfo_t2177_m46124_gshared (Object_t * __this /* static, unused */, UICharInfoU5BU5D_t2929* ___array, int32_t ___low0, int32_t ___high0, Comparison_1_t6125 * ___comparison, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UICharInfo_t2177  V_3 = {0};
	{
		int32_t L_0 = ___low0;
		int32_t L_1 = ___high0;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = ___low0;
		V_0 = (int32_t)L_2;
		int32_t L_3 = ___high0;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		UICharInfoU5BU5D_t2929* L_7 = ___array;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_3 = (UICharInfo_t2177 )(*(UICharInfo_t2177 *)(UICharInfo_t2177 *)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___high0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		Comparison_1_t6125 * L_13 = ___comparison;
		UICharInfoU5BU5D_t2929* L_14 = ___array;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		UICharInfo_t2177  L_17 = V_3;
		NullCheck((Comparison_1_t6125 *)L_13);
		int32_t L_18 = (int32_t)VirtFuncInvoker2< int32_t, UICharInfo_t2177 , UICharInfo_t2177  >::Invoke(11 /* System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T) */, (Comparison_1_t6125 *)L_13, (UICharInfo_t2177 )(*(UICharInfo_t2177 *)(UICharInfo_t2177 *)SZArrayLdElema(L_14, L_16)), (UICharInfo_t2177 )L_17);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0034:
	{
		goto IL_003a;
	}

IL_0036:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___low0;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_004f;
		}
	}
	{
		Comparison_1_t6125 * L_22 = ___comparison;
		UICharInfo_t2177  L_23 = V_3;
		UICharInfoU5BU5D_t2929* L_24 = ___array;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = L_25;
		NullCheck((Comparison_1_t6125 *)L_22);
		int32_t L_27 = (int32_t)VirtFuncInvoker2< int32_t, UICharInfo_t2177 , UICharInfo_t2177  >::Invoke(11 /* System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T) */, (Comparison_1_t6125 *)L_22, (UICharInfo_t2177 )L_23, (UICharInfo_t2177 )(*(UICharInfo_t2177 *)(UICharInfo_t2177 *)SZArrayLdElema(L_24, L_26)));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}

IL_004f:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0065;
		}
	}
	{
		UICharInfoU5BU5D_t2929* L_30 = ___array;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		(( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t2929*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL /*static, unused*/, (UICharInfoU5BU5D_t2929*)L_30, (int32_t)L_31, (int32_t)L_32, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_33 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		int32_t L_34 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_34-(int32_t)1));
		goto IL_0067;
	}

IL_0065:
	{
		goto IL_0069;
	}

IL_0067:
	{
		goto IL_0019;
	}

IL_0069:
	{
		int32_t L_35 = ___low0;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_0076;
		}
	}
	{
		UICharInfoU5BU5D_t2929* L_37 = ___array;
		int32_t L_38 = ___low0;
		int32_t L_39 = V_1;
		Comparison_1_t6125 * L_40 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t2929*, int32_t, int32_t, Comparison_1_t6125 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (UICharInfoU5BU5D_t2929*)L_37, (int32_t)L_38, (int32_t)L_39, (Comparison_1_t6125 *)L_40, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0076:
	{
		int32_t L_41 = V_0;
		int32_t L_42 = ___high0;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_0083;
		}
	}
	{
		UICharInfoU5BU5D_t2929* L_43 = ___array;
		int32_t L_44 = V_0;
		int32_t L_45 = ___high0;
		Comparison_1_t6125 * L_46 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t2929*, int32_t, int32_t, Comparison_1_t6125 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (UICharInfoU5BU5D_t2929*)L_43, (int32_t)L_44, (int32_t)L_45, (Comparison_1_t6125 *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0083:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::swap<UnityEngine.UICharInfo>(T[],System.Int32,System.Int32)
// System.Void System.Array::swap<UnityEngine.UICharInfo>(T[],System.Int32,System.Int32)
extern "C" void Array_swap_TisUICharInfo_t2177_m46126_gshared (Object_t * __this /* static, unused */, UICharInfoU5BU5D_t2929* ___array, int32_t ___i, int32_t ___j, const MethodInfo* method)
{
	UICharInfo_t2177  V_0 = {0};
	{
		UICharInfoU5BU5D_t2929* L_0 = ___array;
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (UICharInfo_t2177 )(*(UICharInfo_t2177 *)(UICharInfo_t2177 *)SZArrayLdElema(L_0, L_2));
		UICharInfoU5BU5D_t2929* L_3 = ___array;
		int32_t L_4 = ___i;
		UICharInfoU5BU5D_t2929* L_5 = ___array;
		int32_t L_6 = ___j;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		*((UICharInfo_t2177 *)(UICharInfo_t2177 *)SZArrayLdElema(L_3, L_4)) = (UICharInfo_t2177 )(*(UICharInfo_t2177 *)(UICharInfo_t2177 *)SZArrayLdElema(L_5, L_7));
		UICharInfoU5BU5D_t2929* L_8 = ___array;
		int32_t L_9 = ___j;
		UICharInfo_t2177  L_10 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((UICharInfo_t2177 *)(UICharInfo_t2177 *)SZArrayLdElema(L_8, L_9)) = (UICharInfo_t2177 )L_10;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
struct Array_t;
struct UILineInfoU5BU5D_t2930;
// Declaration System.Void System.Array::Resize<UnityEngine.UILineInfo>(!!0[]&,System.Int32,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UILineInfo>(!!0[]&,System.Int32,System.Int32)
extern "C" void Array_Resize_TisUILineInfo_t2175_m46127_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930** p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define Array_Resize_TisUILineInfo_t2175_m46127(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930**, int32_t, int32_t, const MethodInfo*))Array_Resize_TisUILineInfo_t2175_m46127_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void System.Array::Resize<UnityEngine.UILineInfo>(T[]&,System.Int32)
struct Array_t;
struct UILineInfoU5BU5D_t2930;
// Declaration System.Void System.Array::Resize<UnityEngine.UILineInfo>(T[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UILineInfo>(T[]&,System.Int32)
extern "C" void Array_Resize_TisUILineInfo_t2175_m46128_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930** ___array, int32_t ___newSize, const MethodInfo* method);
#define Array_Resize_TisUILineInfo_t2175_m46128(__this /* static, unused */, ___array, ___newSize, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930**, int32_t, const MethodInfo*))Array_Resize_TisUILineInfo_t2175_m46128_gshared)(__this /* static, unused */, ___array, ___newSize, method)
// System.Void System.Array::Resize<UnityEngine.UILineInfo>(T[]&,System.Int32)
extern "C" void Array_Resize_TisUILineInfo_t2175_m46128_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930** ___array, int32_t ___newSize, const MethodInfo* method)
{
	UILineInfoU5BU5D_t2930** G_B2_0 = {0};
	UILineInfoU5BU5D_t2930** G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	UILineInfoU5BU5D_t2930** G_B3_1 = {0};
	{
		UILineInfoU5BU5D_t2930** L_0 = ___array;
		UILineInfoU5BU5D_t2930** L_1 = ___array;
		G_B1_0 = L_0;
		if ((*((UILineInfoU5BU5D_t2930**)L_1)))
		{
			G_B2_0 = L_0;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000c;
	}

IL_0008:
	{
		UILineInfoU5BU5D_t2930** L_2 = ___array;
		NullCheck((*((UILineInfoU5BU5D_t2930**)L_2)));
		G_B3_0 = (((int32_t)(((Array_t *)(*((UILineInfoU5BU5D_t2930**)L_2)))->max_length)));
		G_B3_1 = G_B2_0;
	}

IL_000c:
	{
		int32_t L_3 = ___newSize;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930**, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t2930**)G_B3_1, (int32_t)G_B3_0, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Void System.Array::Resize<UnityEngine.UILineInfo>(T[]&,System.Int32,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UILineInfo>(T[]&,System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_Resize_TisUILineInfo_t2175_m46127_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930** ___array, int32_t ___length, int32_t ___newSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	UILineInfoU5BU5D_t2930* V_0 = {0};
	{
		int32_t L_0 = ___newSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_1 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11582(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000a:
	{
		UILineInfoU5BU5D_t2930** L_2 = ___array;
		if ((*((UILineInfoU5BU5D_t2930**)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		UILineInfoU5BU5D_t2930** L_3 = ___array;
		int32_t L_4 = ___newSize;
		*((Object_t **)(L_3)) = (Object_t *)((UILineInfoU5BU5D_t2930*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_4));
		return;
	}

IL_0017:
	{
		UILineInfoU5BU5D_t2930** L_5 = ___array;
		NullCheck((*((UILineInfoU5BU5D_t2930**)L_5)));
		int32_t L_6 = ___newSize;
		if ((!(((uint32_t)(((int32_t)(((Array_t *)(*((UILineInfoU5BU5D_t2930**)L_5)))->max_length)))) == ((uint32_t)L_6))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		int32_t L_7 = ___newSize;
		V_0 = (UILineInfoU5BU5D_t2930*)((UILineInfoU5BU5D_t2930*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_7));
		UILineInfoU5BU5D_t2930** L_8 = ___array;
		UILineInfoU5BU5D_t2930* L_9 = V_0;
		int32_t L_10 = ___newSize;
		int32_t L_11 = ___length;
		int32_t L_12 = Math_Min_m11572(NULL /*static, unused*/, (int32_t)L_10, (int32_t)L_11, /*hidden argument*/NULL);
		Array_Copy_m11497(NULL /*static, unused*/, (Array_t *)(Array_t *)(*((UILineInfoU5BU5D_t2930**)L_8)), (Array_t *)(Array_t *)L_9, (int32_t)L_12, /*hidden argument*/NULL);
		UILineInfoU5BU5D_t2930** L_13 = ___array;
		UILineInfoU5BU5D_t2930* L_14 = V_0;
		*((Object_t **)(L_13)) = (Object_t *)L_14;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_14.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_14MethodDeclarations.h"
// System.Int32 System.Array::IndexOf<UnityEngine.UILineInfo>(T[],T,System.Int32,System.Int32)
struct Array_t;
struct UILineInfoU5BU5D_t2930;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UILineInfo>(T[],T,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UILineInfo>(T[],T,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisUILineInfo_t2175_m46129_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* ___array, UILineInfo_t2175  ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method);
#define Array_IndexOf_TisUILineInfo_t2175_m46129(__this /* static, unused */, ___array, ___value, ___startIndex, ___count, method) (( int32_t (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, UILineInfo_t2175 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisUILineInfo_t2175_m46129_gshared)(__this /* static, unused */, ___array, ___value, ___startIndex, ___count, method)
// System.Int32 System.Array::IndexOf<UnityEngine.UILineInfo>(T[],T,System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t6129_il2cpp_TypeInfo_var;
extern "C" int32_t Array_IndexOf_TisUILineInfo_t2175_m46129_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* ___array, UILineInfo_t2175  ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		EqualityComparer_1_t6129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12869);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	EqualityComparer_1_t6129 * V_1 = {0};
	int32_t V_2 = 0;
	{
		UILineInfoU5BU5D_t2930* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___startIndex;
		UILineInfoU5BU5D_t2930* L_4 = ___array;
		NullCheck((Array_t *)L_4);
		int32_t L_5 = Array_GetLowerBound_m17642((Array_t *)L_4, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = ___startIndex;
		UILineInfoU5BU5D_t2930* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetUpperBound_m17654((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		int32_t L_9 = ___count;
		if ((((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))) <= ((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9)))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		ArgumentOutOfRangeException_t1123 * L_10 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11582(L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0030:
	{
		int32_t L_11 = ___startIndex;
		int32_t L_12 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12));
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6129_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6129 * L_13 = (( EqualityComparer_1_t6129 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (EqualityComparer_1_t6129 *)L_13;
		int32_t L_14 = ___startIndex;
		V_2 = (int32_t)L_14;
		goto IL_0054;
	}

IL_003e:
	{
		EqualityComparer_1_t6129 * L_15 = V_1;
		UILineInfoU5BU5D_t2930* L_16 = ___array;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		UILineInfo_t2175  L_19 = ___value;
		NullCheck((EqualityComparer_1_t6129 *)L_15);
		bool L_20 = (bool)VirtFuncInvoker2< bool, UILineInfo_t2175 , UILineInfo_t2175  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::Equals(T,T) */, (EqualityComparer_1_t6129 *)L_15, (UILineInfo_t2175 )(*(UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_16, L_18)), (UILineInfo_t2175 )L_19);
		if (!L_20)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_21 = V_2;
		return L_21;
	}

IL_0050:
	{
		int32_t L_22 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_003e;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct UILineInfoU5BU5D_t2930;
struct IComparer_1_t7080;
// Declaration System.Void System.Array::Sort<UnityEngine.UILineInfo,UnityEngine.UILineInfo>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UILineInfo,UnityEngine.UILineInfo>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisUILineInfo_t2175_TisUILineInfo_t2175_m46130_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* p0, UILineInfoU5BU5D_t2930* p1, int32_t p2, int32_t p3, Object_t* p4, const MethodInfo* method);
#define Array_Sort_TisUILineInfo_t2175_TisUILineInfo_t2175_m46130(__this /* static, unused */, p0, p1, p2, p3, p4, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, UILineInfoU5BU5D_t2930*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisUILineInfo_t2175_TisUILineInfo_t2175_m46130_gshared)(__this /* static, unused */, p0, p1, p2, p3, p4, method)
// System.Void System.Array::Sort<UnityEngine.UILineInfo>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
struct Array_t;
struct UILineInfoU5BU5D_t2930;
struct IComparer_1_t7080;
// Declaration System.Void System.Array::Sort<UnityEngine.UILineInfo>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
// System.Void System.Array::Sort<UnityEngine.UILineInfo>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern "C" void Array_Sort_TisUILineInfo_t2175_m46131_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* ___array, int32_t ___index, int32_t ___length, Object_t* ___comparer, const MethodInfo* method);
#define Array_Sort_TisUILineInfo_t2175_m46131(__this /* static, unused */, ___array, ___index, ___length, ___comparer, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisUILineInfo_t2175_m46131_gshared)(__this /* static, unused */, ___array, ___index, ___length, ___comparer, method)
// System.Void System.Array::Sort<UnityEngine.UILineInfo>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisUILineInfo_t2175_m46131_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* ___array, int32_t ___index, int32_t ___length, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		UILineInfoU5BU5D_t2930* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		UILineInfoU5BU5D_t2930* L_2 = ___array;
		int32_t L_3 = ___index;
		int32_t L_4 = ___length;
		Object_t* L_5 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, UILineInfoU5BU5D_t2930*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t2930*)L_2, (UILineInfoU5BU5D_t2930*)(UILineInfoU5BU5D_t2930*)NULL, (int32_t)L_3, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Array/Swapper
#include "mscorlib_System_Array_Swapper.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
#include "mscorlib_ArrayTypes.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
struct Array_t;
struct Swapper_t3828;
struct UILineInfoU5BU5D_t2930;
// Declaration System.Array/Swapper System.Array::get_swapper<UnityEngine.UILineInfo>(!!0[])
// System.Array/Swapper System.Array::get_swapper<UnityEngine.UILineInfo>(!!0[])
extern "C" Swapper_t3828 * Array_get_swapper_TisUILineInfo_t2175_m46132_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* p0, const MethodInfo* method);
#define Array_get_swapper_TisUILineInfo_t2175_m46132(__this /* static, unused */, p0, method) (( Swapper_t3828 * (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, const MethodInfo*))Array_get_swapper_TisUILineInfo_t2175_m46132_gshared)(__this /* static, unused */, p0, method)
struct Array_t;
struct UILineInfoU5BU5D_t2930;
struct IComparer_1_t7080;
// Declaration System.Void System.Array::qsort<UnityEngine.UILineInfo,UnityEngine.UILineInfo>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::qsort<UnityEngine.UILineInfo,UnityEngine.UILineInfo>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_qsort_TisUILineInfo_t2175_TisUILineInfo_t2175_m46133_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* p0, UILineInfoU5BU5D_t2930* p1, int32_t p2, int32_t p3, Object_t* p4, const MethodInfo* method);
#define Array_qsort_TisUILineInfo_t2175_TisUILineInfo_t2175_m46133(__this /* static, unused */, p0, p1, p2, p3, p4, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, UILineInfoU5BU5D_t2930*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_qsort_TisUILineInfo_t2175_TisUILineInfo_t2175_m46133_gshared)(__this /* static, unused */, p0, p1, p2, p3, p4, method)
// System.Void System.Array::Sort<UnityEngine.UILineInfo,UnityEngine.UILineInfo>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
// System.Void System.Array::Sort<UnityEngine.UILineInfo,UnityEngine.UILineInfo>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* DoubleU5BU5D_t3153_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisUILineInfo_t2175_TisUILineInfo_t2175_m46130_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* ___keys, UILineInfoU5BU5D_t2930* ___items, int32_t ___index, int32_t ___length, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		DoubleU5BU5D_t3153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6693);
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	Swapper_t3828 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Exception_t468 * V_3 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		UILineInfoU5BU5D_t2930* L_0 = ___keys;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral4408, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_3 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_3, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___length;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_5 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_5, (String_t*)(String_t*) &_stringLiteral2538, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002c:
	{
		UILineInfoU5BU5D_t2930* L_6 = ___keys;
		NullCheck(L_6);
		int32_t L_7 = ___index;
		int32_t L_8 = ___length;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))-(int32_t)L_7))) < ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_9 = ___items;
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_10 = ___index;
		UILineInfoU5BU5D_t2930* L_11 = ___items;
		NullCheck(L_11);
		int32_t L_12 = ___length;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_0045;
		}
	}

IL_003f:
	{
		ArgumentException_t1126 * L_13 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11580(L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0045:
	{
		int32_t L_14 = ___length;
		if ((((int32_t)L_14) > ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_004a:
	{
		Object_t* L_15 = ___comparer;
		if (L_15)
		{
			goto IL_00b0;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_16 = ___items;
		if (L_16)
		{
			goto IL_0055;
		}
	}
	{
		V_0 = (Swapper_t3828 *)NULL;
		goto IL_005c;
	}

IL_0055:
	{
		UILineInfoU5BU5D_t2930* L_17 = ___items;
		Swapper_t3828 * L_18 = (( Swapper_t3828 * (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t2930*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Swapper_t3828 *)L_18;
	}

IL_005c:
	{
		UILineInfoU5BU5D_t2930* L_19 = ___keys;
		if (!((DoubleU5BU5D_t3153*)IsInst(L_19, DoubleU5BU5D_t3153_il2cpp_TypeInfo_var)))
		{
			goto IL_0078;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_20 = ___keys;
		UILineInfoU5BU5D_t2930* L_21 = L_20;
		int32_t L_22 = ___index;
		int32_t L_23 = ___length;
		Swapper_t3828 * L_24 = V_0;
		Array_combsort_m17702(NULL /*static, unused*/, (DoubleU5BU5D_t3153*)((DoubleU5BU5D_t3153*)IsInst(((UILineInfoU5BU5D_t2930*)L_21), DoubleU5BU5D_t3153_il2cpp_TypeInfo_var)), (int32_t)L_22, (int32_t)L_23, (Swapper_t3828 *)L_24, /*hidden argument*/NULL);
		return;
	}

IL_0078:
	{
		UILineInfoU5BU5D_t2930* L_25 = ___keys;
		if (!((Int32U5BU5D_t119*)IsInst(L_25, Int32U5BU5D_t119_il2cpp_TypeInfo_var)))
		{
			goto IL_0094;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_26 = ___keys;
		UILineInfoU5BU5D_t2930* L_27 = L_26;
		int32_t L_28 = ___index;
		int32_t L_29 = ___length;
		Swapper_t3828 * L_30 = V_0;
		Array_combsort_m17703(NULL /*static, unused*/, (Int32U5BU5D_t119*)((Int32U5BU5D_t119*)IsInst(((UILineInfoU5BU5D_t2930*)L_27), Int32U5BU5D_t119_il2cpp_TypeInfo_var)), (int32_t)L_28, (int32_t)L_29, (Swapper_t3828 *)L_30, /*hidden argument*/NULL);
		return;
	}

IL_0094:
	{
		UILineInfoU5BU5D_t2930* L_31 = ___keys;
		if (!((CharU5BU5D_t646*)IsInst(L_31, CharU5BU5D_t646_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_32 = ___keys;
		UILineInfoU5BU5D_t2930* L_33 = L_32;
		int32_t L_34 = ___index;
		int32_t L_35 = ___length;
		Swapper_t3828 * L_36 = V_0;
		Array_combsort_m17704(NULL /*static, unused*/, (CharU5BU5D_t646*)((CharU5BU5D_t646*)IsInst(((UILineInfoU5BU5D_t2930*)L_33), CharU5BU5D_t646_il2cpp_TypeInfo_var)), (int32_t)L_34, (int32_t)L_35, (Swapper_t3828 *)L_36, /*hidden argument*/NULL);
		return;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		int32_t L_37 = ___index;
		V_1 = (int32_t)L_37;
		int32_t L_38 = ___index;
		int32_t L_39 = ___length;
		V_2 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_38+(int32_t)L_39))-(int32_t)1));
		UILineInfoU5BU5D_t2930* L_40 = ___keys;
		UILineInfoU5BU5D_t2930* L_41 = ___items;
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		Object_t* L_44 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, UILineInfoU5BU5D_t2930*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t2930*)L_40, (UILineInfoU5BU5D_t2930*)L_41, (int32_t)L_42, (int32_t)L_43, (Object_t*)L_44, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		goto IL_00d9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00c5;
		throw e;
	}

CATCH_00c5:
	{ // begin catch(System.Exception)
		V_3 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		String_t* L_45 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4409, /*hidden argument*/NULL);
		Exception_t468 * L_46 = V_3;
		InvalidOperationException_t1086 * L_47 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11492(L_47, (String_t*)L_45, (Exception_t468 *)L_46, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_47);
		goto IL_00d9;
	} // end catch (depth: 1)

IL_00d9:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Array/Swapper
#include "mscorlib_System_Array_SwapperMethodDeclarations.h"
// System.Array/Swapper System.Array::get_swapper<UnityEngine.UILineInfo>(T[])
// System.Array/Swapper System.Array::get_swapper<UnityEngine.UILineInfo>(T[])
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern TypeInfo* Swapper_t3828_il2cpp_TypeInfo_var;
extern TypeInfo* DoubleU5BU5D_t3153_il2cpp_TypeInfo_var;
extern const MethodInfo* Array_int_swapper_m17697_MethodInfo_var;
extern const MethodInfo* Array_double_swapper_m17700_MethodInfo_var;
extern const MethodInfo* Array_slow_swapper_m17699_MethodInfo_var;
extern "C" Swapper_t3828 * Array_get_swapper_TisUILineInfo_t2175_m46132_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* ___array, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		Swapper_t3828_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8172);
		DoubleU5BU5D_t3153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6693);
		Array_int_swapper_m17697_MethodInfo_var = il2cpp_codegen_method_info_from_index(1528);
		Array_double_swapper_m17700_MethodInfo_var = il2cpp_codegen_method_info_from_index(1529);
		Array_slow_swapper_m17699_MethodInfo_var = il2cpp_codegen_method_info_from_index(1531);
		s_Il2CppMethodIntialized = true;
	}
	{
		UILineInfoU5BU5D_t2930* L_0 = ___array;
		if (!((Int32U5BU5D_t119*)IsInst(L_0, Int32U5BU5D_t119_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_1 = ___array;
		IntPtr_t L_2 = { (void*)Array_int_swapper_m17697_MethodInfo_var };
		Swapper_t3828 * L_3 = (Swapper_t3828 *)il2cpp_codegen_object_new (Swapper_t3828_il2cpp_TypeInfo_var);
		Swapper__ctor_m17619(L_3, (Object_t *)(Object_t *)L_1, (IntPtr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		UILineInfoU5BU5D_t2930* L_4 = ___array;
		if (!((DoubleU5BU5D_t3153*)IsInst(L_4, DoubleU5BU5D_t3153_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_5 = ___array;
		IntPtr_t L_6 = { (void*)Array_double_swapper_m17700_MethodInfo_var };
		Swapper_t3828 * L_7 = (Swapper_t3828 *)il2cpp_codegen_object_new (Swapper_t3828_il2cpp_TypeInfo_var);
		Swapper__ctor_m17619(L_7, (Object_t *)(Object_t *)L_5, (IntPtr_t)L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_002a:
	{
		UILineInfoU5BU5D_t2930* L_8 = ___array;
		IntPtr_t L_9 = { (void*)Array_slow_swapper_m17699_MethodInfo_var };
		Swapper_t3828 * L_10 = (Swapper_t3828 *)il2cpp_codegen_object_new (Swapper_t3828_il2cpp_TypeInfo_var);
		Swapper__ctor_m17619(L_10, (Object_t *)(Object_t *)L_8, (IntPtr_t)L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct IComparer_1_t7080;
// Declaration System.Int32 System.Array::compare<UnityEngine.UILineInfo>(!!0,!!0,System.Collections.Generic.IComparer`1<!!0>)
// System.Int32 System.Array::compare<UnityEngine.UILineInfo>(!!0,!!0,System.Collections.Generic.IComparer`1<!!0>)
extern "C" int32_t Array_compare_TisUILineInfo_t2175_m46134_gshared (Object_t * __this /* static, unused */, UILineInfo_t2175  p0, UILineInfo_t2175  p1, Object_t* p2, const MethodInfo* method);
#define Array_compare_TisUILineInfo_t2175_m46134(__this /* static, unused */, p0, p1, p2, method) (( int32_t (*) (Object_t * /* static, unused */, UILineInfo_t2175 , UILineInfo_t2175 , Object_t*, const MethodInfo*))Array_compare_TisUILineInfo_t2175_m46134_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct Array_t;
struct UILineInfoU5BU5D_t2930;
// Declaration System.Void System.Array::swap<UnityEngine.UILineInfo,UnityEngine.UILineInfo>(!!0[],!!1[],System.Int32,System.Int32)
// System.Void System.Array::swap<UnityEngine.UILineInfo,UnityEngine.UILineInfo>(!!0[],!!1[],System.Int32,System.Int32)
extern "C" void Array_swap_TisUILineInfo_t2175_TisUILineInfo_t2175_m46135_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* p0, UILineInfoU5BU5D_t2930* p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_swap_TisUILineInfo_t2175_TisUILineInfo_t2175_m46135(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, UILineInfoU5BU5D_t2930*, int32_t, int32_t, const MethodInfo*))Array_swap_TisUILineInfo_t2175_TisUILineInfo_t2175_m46135_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Void System.Array::qsort<UnityEngine.UILineInfo,UnityEngine.UILineInfo>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
// System.Void System.Array::qsort<UnityEngine.UILineInfo,UnityEngine.UILineInfo>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern "C" void Array_qsort_TisUILineInfo_t2175_TisUILineInfo_t2175_m46133_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* ___keys, UILineInfoU5BU5D_t2930* ___items, int32_t ___low0, int32_t ___high0, Object_t* ___comparer, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UILineInfo_t2175  V_3 = {0};
	{
		int32_t L_0 = ___low0;
		int32_t L_1 = ___high0;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = ___low0;
		V_0 = (int32_t)L_2;
		int32_t L_3 = ___high0;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		UILineInfoU5BU5D_t2930* L_7 = ___keys;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_3 = (UILineInfo_t2175 )(*(UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___high0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0035;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_13 = ___keys;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		UILineInfo_t2175  L_16 = V_3;
		Object_t* L_17 = ___comparer;
		int32_t L_18 = (( int32_t (*) (Object_t * /* static, unused */, UILineInfo_t2175 , UILineInfo_t2175 , Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (UILineInfo_t2175 )(*(UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_13, L_15)), (UILineInfo_t2175 )L_16, (Object_t*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0035:
	{
		goto IL_003b;
	}

IL_0037:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003b:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___low0;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_0051;
		}
	}
	{
		UILineInfo_t2175  L_22 = V_3;
		UILineInfoU5BU5D_t2930* L_23 = ___keys;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		Object_t* L_26 = ___comparer;
		int32_t L_27 = (( int32_t (*) (Object_t * /* static, unused */, UILineInfo_t2175 , UILineInfo_t2175 , Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (UILineInfo_t2175 )L_22, (UILineInfo_t2175 )(*(UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_23, L_25)), (Object_t*)L_26, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}

IL_0051:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0068;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_30 = ___keys;
		UILineInfoU5BU5D_t2930* L_31 = ___items;
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, UILineInfoU5BU5D_t2930*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t2930*)L_30, (UILineInfoU5BU5D_t2930*)L_31, (int32_t)L_32, (int32_t)L_33, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_34 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_35-(int32_t)1));
		goto IL_006a;
	}

IL_0068:
	{
		goto IL_006c;
	}

IL_006a:
	{
		goto IL_0019;
	}

IL_006c:
	{
		int32_t L_36 = ___low0;
		int32_t L_37 = V_1;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_007b;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_38 = ___keys;
		UILineInfoU5BU5D_t2930* L_39 = ___items;
		int32_t L_40 = ___low0;
		int32_t L_41 = V_1;
		Object_t* L_42 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, UILineInfoU5BU5D_t2930*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t2930*)L_38, (UILineInfoU5BU5D_t2930*)L_39, (int32_t)L_40, (int32_t)L_41, (Object_t*)L_42, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007b:
	{
		int32_t L_43 = V_0;
		int32_t L_44 = ___high0;
		if ((((int32_t)L_43) >= ((int32_t)L_44)))
		{
			goto IL_008a;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_45 = ___keys;
		UILineInfoU5BU5D_t2930* L_46 = ___items;
		int32_t L_47 = V_0;
		int32_t L_48 = ___high0;
		Object_t* L_49 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, UILineInfoU5BU5D_t2930*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t2930*)L_45, (UILineInfoU5BU5D_t2930*)L_46, (int32_t)L_47, (int32_t)L_48, (Object_t*)L_49, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_008a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Int32 System.Array::compare<UnityEngine.UILineInfo>(T,T,System.Collections.Generic.IComparer`1<T>)
// System.Int32 System.Array::compare<UnityEngine.UILineInfo>(T,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo* IComparable_t43_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" int32_t Array_compare_TisUILineInfo_t2175_m46134_gshared (Object_t * __this /* static, unused */, UILineInfo_t2175  ___value1, UILineInfo_t2175  ___value2, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t* L_0 = ___comparer;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Object_t* L_1 = ___comparer;
		UILineInfo_t2175  L_2 = ___value1;
		UILineInfo_t2175  L_3 = ___value2;
		NullCheck((Object_t*)L_1);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker2< int32_t, UILineInfo_t2175 , UILineInfo_t2175  >::Invoke(0 /* System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>::Compare(T,T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (Object_t*)L_1, (UILineInfo_t2175 )L_2, (UILineInfo_t2175 )L_3);
		return L_4;
	}

IL_000c:
	{
		UILineInfo_t2175  L_5 = ___value1;
		UILineInfo_t2175  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_6);
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		UILineInfo_t2175  L_8 = ___value2;
		UILineInfo_t2175  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_9);
		if (L_10)
		{
			goto IL_001f;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B6_0 = (-1);
	}

IL_0020:
	{
		return G_B6_0;
	}

IL_0021:
	{
		UILineInfo_t2175  L_11 = ___value2;
		UILineInfo_t2175  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_12);
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		UILineInfo_t2175  L_14 = ___value1;
		UILineInfo_t2175  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_15);
		if (!((Object_t*)IsInst(L_16, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))
		{
			goto IL_004a;
		}
	}
	{
		UILineInfo_t2175  L_17 = ___value1;
		UILineInfo_t2175  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_18);
		UILineInfo_t2175  L_20 = ___value2;
		NullCheck((Object_t*)((Object_t*)Castclass(L_19, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
		int32_t L_21 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t2175  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.UILineInfo>::CompareTo(T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_19, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), (UILineInfo_t2175 )L_20);
		return L_21;
	}

IL_004a:
	{
		UILineInfo_t2175  L_22 = ___value1;
		UILineInfo_t2175  L_23 = L_22;
		Object_t * L_24 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_23);
		if (!((Object_t *)IsInst(L_24, IComparable_t43_il2cpp_TypeInfo_var)))
		{
			goto IL_006e;
		}
	}
	{
		UILineInfo_t2175  L_25 = ___value1;
		UILineInfo_t2175  L_26 = L_25;
		Object_t * L_27 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_26);
		UILineInfo_t2175  L_28 = ___value2;
		UILineInfo_t2175  L_29 = L_28;
		Object_t * L_30 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_29);
		NullCheck((Object_t *)((Object_t *)Castclass(L_27, IComparable_t43_il2cpp_TypeInfo_var)));
		int32_t L_31 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t43_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_27, IComparable_t43_il2cpp_TypeInfo_var)), (Object_t *)L_30);
		return L_31;
	}

IL_006e:
	{
		String_t* L_32 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4412, /*hidden argument*/NULL);
		V_0 = (String_t*)L_32;
		String_t* L_33 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Format_m2680(NULL /*static, unused*/, (String_t*)L_33, (Object_t *)L_34, /*hidden argument*/NULL);
		InvalidOperationException_t1086 * L_36 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_36, (String_t*)L_35, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_36);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::swap<UnityEngine.UILineInfo,UnityEngine.UILineInfo>(K[],V[],System.Int32,System.Int32)
// System.Void System.Array::swap<UnityEngine.UILineInfo,UnityEngine.UILineInfo>(K[],V[],System.Int32,System.Int32)
extern "C" void Array_swap_TisUILineInfo_t2175_TisUILineInfo_t2175_m46135_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* ___keys, UILineInfoU5BU5D_t2930* ___items, int32_t ___i, int32_t ___j, const MethodInfo* method)
{
	UILineInfo_t2175  V_0 = {0};
	UILineInfo_t2175  V_1 = {0};
	{
		UILineInfoU5BU5D_t2930* L_0 = ___keys;
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (UILineInfo_t2175 )(*(UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_0, L_2));
		UILineInfoU5BU5D_t2930* L_3 = ___keys;
		int32_t L_4 = ___i;
		UILineInfoU5BU5D_t2930* L_5 = ___keys;
		int32_t L_6 = ___j;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		*((UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_3, L_4)) = (UILineInfo_t2175 )(*(UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_5, L_7));
		UILineInfoU5BU5D_t2930* L_8 = ___keys;
		int32_t L_9 = ___j;
		UILineInfo_t2175  L_10 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_8, L_9)) = (UILineInfo_t2175 )L_10;
		UILineInfoU5BU5D_t2930* L_11 = ___items;
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_12 = ___items;
		int32_t L_13 = ___i;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_1 = (UILineInfo_t2175 )(*(UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_12, L_14));
		UILineInfoU5BU5D_t2930* L_15 = ___items;
		int32_t L_16 = ___i;
		UILineInfoU5BU5D_t2930* L_17 = ___items;
		int32_t L_18 = ___j;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		*((UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_15, L_16)) = (UILineInfo_t2175 )(*(UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_17, L_19));
		UILineInfoU5BU5D_t2930* L_20 = ___items;
		int32_t L_21 = ___j;
		UILineInfo_t2175  L_22 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		*((UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_20, L_21)) = (UILineInfo_t2175 )L_22;
	}

IL_003f:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Comparison`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Comparison_1_gen_104.h"
struct Array_t;
struct UILineInfoU5BU5D_t2930;
struct Comparison_1_t6134;
// Declaration System.Void System.Array::qsort<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::qsort<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_qsort_TisUILineInfo_t2175_m46136_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* p0, int32_t p1, int32_t p2, Comparison_1_t6134 * p3, const MethodInfo* method);
#define Array_qsort_TisUILineInfo_t2175_m46136(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, int32_t, int32_t, Comparison_1_t6134 *, const MethodInfo*))Array_qsort_TisUILineInfo_t2175_m46136_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Void System.Array::Sort<UnityEngine.UILineInfo>(T[],System.Int32,System.Comparison`1<T>)
struct Array_t;
struct UILineInfoU5BU5D_t2930;
struct Comparison_1_t6134;
// Declaration System.Void System.Array::Sort<UnityEngine.UILineInfo>(T[],System.Int32,System.Comparison`1<T>)
// System.Void System.Array::Sort<UnityEngine.UILineInfo>(T[],System.Int32,System.Comparison`1<T>)
extern "C" void Array_Sort_TisUILineInfo_t2175_m46137_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* ___array, int32_t ___length, Comparison_1_t6134 * ___comparison, const MethodInfo* method);
#define Array_Sort_TisUILineInfo_t2175_m46137(__this /* static, unused */, ___array, ___length, ___comparison, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, int32_t, Comparison_1_t6134 *, const MethodInfo*))Array_Sort_TisUILineInfo_t2175_m46137_gshared)(__this /* static, unused */, ___array, ___length, ___comparison, method)
// System.Void System.Array::Sort<UnityEngine.UILineInfo>(T[],System.Int32,System.Comparison`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisUILineInfo_t2175_m46137_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* ___array, int32_t ___length, Comparison_1_t6134 * ___comparison, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t468 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Comparison_1_t6134 * L_0 = ___comparison;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral4410, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___length;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_3 = ___array;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) > ((int32_t)1)))
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		V_0 = (int32_t)0;
		int32_t L_4 = ___length;
		V_1 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		UILineInfoU5BU5D_t2930* L_5 = ___array;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		Comparison_1_t6134 * L_8 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, int32_t, int32_t, Comparison_1_t6134 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t2930*)L_5, (int32_t)L_6, (int32_t)L_7, (Comparison_1_t6134 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Exception)
		V_2 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		String_t* L_9 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4411, /*hidden argument*/NULL);
		Exception_t468 * L_10 = V_2;
		InvalidOperationException_t1086 * L_11 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11492(L_11, (String_t*)L_9, (Exception_t468 *)L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
		goto IL_003e;
	} // end catch (depth: 1)

IL_003e:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Comparison`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Comparison_1_gen_104MethodDeclarations.h"
struct Array_t;
struct UILineInfoU5BU5D_t2930;
// Declaration System.Void System.Array::swap<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Int32)
// System.Void System.Array::swap<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Int32)
extern "C" void Array_swap_TisUILineInfo_t2175_m46138_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define Array_swap_TisUILineInfo_t2175_m46138(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, int32_t, int32_t, const MethodInfo*))Array_swap_TisUILineInfo_t2175_m46138_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void System.Array::qsort<UnityEngine.UILineInfo>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
// System.Void System.Array::qsort<UnityEngine.UILineInfo>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern "C" void Array_qsort_TisUILineInfo_t2175_m46136_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* ___array, int32_t ___low0, int32_t ___high0, Comparison_1_t6134 * ___comparison, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UILineInfo_t2175  V_3 = {0};
	{
		int32_t L_0 = ___low0;
		int32_t L_1 = ___high0;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = ___low0;
		V_0 = (int32_t)L_2;
		int32_t L_3 = ___high0;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		UILineInfoU5BU5D_t2930* L_7 = ___array;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_3 = (UILineInfo_t2175 )(*(UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___high0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		Comparison_1_t6134 * L_13 = ___comparison;
		UILineInfoU5BU5D_t2930* L_14 = ___array;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		UILineInfo_t2175  L_17 = V_3;
		NullCheck((Comparison_1_t6134 *)L_13);
		int32_t L_18 = (int32_t)VirtFuncInvoker2< int32_t, UILineInfo_t2175 , UILineInfo_t2175  >::Invoke(11 /* System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T) */, (Comparison_1_t6134 *)L_13, (UILineInfo_t2175 )(*(UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_14, L_16)), (UILineInfo_t2175 )L_17);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0034:
	{
		goto IL_003a;
	}

IL_0036:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___low0;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_004f;
		}
	}
	{
		Comparison_1_t6134 * L_22 = ___comparison;
		UILineInfo_t2175  L_23 = V_3;
		UILineInfoU5BU5D_t2930* L_24 = ___array;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = L_25;
		NullCheck((Comparison_1_t6134 *)L_22);
		int32_t L_27 = (int32_t)VirtFuncInvoker2< int32_t, UILineInfo_t2175 , UILineInfo_t2175  >::Invoke(11 /* System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T) */, (Comparison_1_t6134 *)L_22, (UILineInfo_t2175 )L_23, (UILineInfo_t2175 )(*(UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_24, L_26)));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}

IL_004f:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0065;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_30 = ___array;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t2930*)L_30, (int32_t)L_31, (int32_t)L_32, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_33 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		int32_t L_34 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_34-(int32_t)1));
		goto IL_0067;
	}

IL_0065:
	{
		goto IL_0069;
	}

IL_0067:
	{
		goto IL_0019;
	}

IL_0069:
	{
		int32_t L_35 = ___low0;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_0076;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_37 = ___array;
		int32_t L_38 = ___low0;
		int32_t L_39 = V_1;
		Comparison_1_t6134 * L_40 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, int32_t, int32_t, Comparison_1_t6134 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t2930*)L_37, (int32_t)L_38, (int32_t)L_39, (Comparison_1_t6134 *)L_40, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0076:
	{
		int32_t L_41 = V_0;
		int32_t L_42 = ___high0;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_0083;
		}
	}
	{
		UILineInfoU5BU5D_t2930* L_43 = ___array;
		int32_t L_44 = V_0;
		int32_t L_45 = ___high0;
		Comparison_1_t6134 * L_46 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t2930*, int32_t, int32_t, Comparison_1_t6134 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (UILineInfoU5BU5D_t2930*)L_43, (int32_t)L_44, (int32_t)L_45, (Comparison_1_t6134 *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0083:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::swap<UnityEngine.UILineInfo>(T[],System.Int32,System.Int32)
// System.Void System.Array::swap<UnityEngine.UILineInfo>(T[],System.Int32,System.Int32)
extern "C" void Array_swap_TisUILineInfo_t2175_m46138_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t2930* ___array, int32_t ___i, int32_t ___j, const MethodInfo* method)
{
	UILineInfo_t2175  V_0 = {0};
	{
		UILineInfoU5BU5D_t2930* L_0 = ___array;
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (UILineInfo_t2175 )(*(UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_0, L_2));
		UILineInfoU5BU5D_t2930* L_3 = ___array;
		int32_t L_4 = ___i;
		UILineInfoU5BU5D_t2930* L_5 = ___array;
		int32_t L_6 = ___j;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		*((UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_3, L_4)) = (UILineInfo_t2175 )(*(UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_5, L_7));
		UILineInfoU5BU5D_t2930* L_8 = ___array;
		int32_t L_9 = ___j;
		UILineInfo_t2175  L_10 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((UILineInfo_t2175 *)(UILineInfo_t2175 *)SZArrayLdElema(L_8, L_9)) = (UILineInfo_t2175 )L_10;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_39.h"
// System.FormatException
#include "mscorlib_System_FormatException.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_39MethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
struct Activator_t4270;
struct Object_t;
// System.Activator
#include "mscorlib_System_Activator.h"
// Declaration !!0 System.Activator::CreateInstance<System.Object>()
// !!0 System.Activator::CreateInstance<System.Object>()
extern "C" Object_t * Activator_CreateInstance_TisObject_t_m45546_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Activator_CreateInstance_TisObject_t_m45546(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Activator_CreateInstance_TisObject_t_m45546_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
struct ResponseBase_t2818;
struct List_1_t2;
struct String_t;
struct Object_t;
struct IDictionary_2_t1430;
// Declaration System.Collections.Generic.List`1<T> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<T> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t2 * ResponseBase_ParseJSONList_TisObject_t_m13728_gshared (ResponseBase_t2818 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method);
#define ResponseBase_ParseJSONList_TisObject_t_m13728(__this, ___name, ___obj, ___dictJsonObj, method) (( List_1_t2 * (*) (ResponseBase_t2818 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m13728_gshared)(__this, ___name, ___obj, ___dictJsonObj, method)
// System.Collections.Generic.List`1<T> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t1430_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t2_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t4877_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t1330_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m22549_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m22576_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m22575_MethodInfo_var;
extern "C" List_1_t2 * ResponseBase_ParseJSONList_TisObject_t_m13728_gshared (ResponseBase_t2818 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3068);
		List_1_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Enumerator_t4877_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10526);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t1330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2627);
		List_1_GetEnumerator_m22549_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485218);
		Enumerator_get_Current_m22576_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485219);
		Enumerator_MoveNext_m22575_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485220);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t2 * V_0 = {0};
	List_1_t2 * V_1 = {0};
	Object_t* V_2 = {0};
	Enumerator_t4877  V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t1430_il2cpp_TypeInfo_var, (Object_t*)L_0, (String_t*)L_1, (Object_t **)(&___obj));
		if (!L_2)
		{
			goto IL_0076;
		}
	}
	{
		Object_t * L_3 = ___obj;
		V_0 = (List_1_t2 *)((List_1_t2 *)IsInst(L_3, List_1_t2_il2cpp_TypeInfo_var));
		List_1_t2 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0076;
		}
	}
	{
		List_1_t2 * L_5 = (List_1_t2 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		(( void (*) (List_1_t2 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (List_1_t2 *)L_5;
		List_1_t2 * L_6 = V_0;
		NullCheck((List_1_t2 *)L_6);
		Enumerator_t4877  L_7 = List_1_GetEnumerator_m22549((List_1_t2 *)L_6, /*hidden argument*/List_1_GetEnumerator_m22549_MethodInfo_var);
		V_3 = (Enumerator_t4877 )L_7;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_002d:
		{
			Object_t * L_8 = Enumerator_get_Current_m22576((Enumerator_t4877 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m22576_MethodInfo_var);
			V_2 = (Object_t*)((Object_t*)Castclass(L_8, IDictionary_2_t1430_il2cpp_TypeInfo_var));
			Object_t * L_9 = (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			V_4 = (Object_t *)L_9;
			Object_t* L_10 = V_2;
			NullCheck((ResponseBase_t2818 *)(*(&V_4)));
			VirtActionInvoker1< Object_t * >::Invoke(4 /* System.Void UnityEngine.Networking.Match.ResponseBase::Parse(System.Object) */, (ResponseBase_t2818 *)(*(&V_4)), (Object_t *)L_10);
			List_1_t2 * L_11 = V_1;
			Object_t * L_12 = V_4;
			NullCheck((List_1_t2 *)L_11);
			VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, (List_1_t2 *)L_11, (Object_t *)L_12);
		}

IL_0057:
		{
			bool L_13 = Enumerator_MoveNext_m22575((Enumerator_t4877 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m22575_MethodInfo_var);
			if (L_13)
			{
				goto IL_002d;
			}
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		Enumerator_t4877  L_14 = V_3;
		Enumerator_t4877  L_15 = L_14;
		Object_t * L_16 = Box(Enumerator_t4877_il2cpp_TypeInfo_var, &L_15);
		NullCheck((Object_t *)L_16);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_16);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0074:
	{
		List_1_t2 * L_17 = V_1;
		return L_17;
	}

IL_0076:
	{
		String_t* L_18 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m105(NULL /*static, unused*/, (String_t*)L_18, (String_t*)(String_t*) &_stringLiteral3317, /*hidden argument*/NULL);
		FormatException_t1330 * L_20 = (FormatException_t1330 *)il2cpp_codegen_object_new (FormatException_t1330_il2cpp_TypeInfo_var);
		FormatException__ctor_m6577(L_20, (String_t*)L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32)
extern "C" KeyValuePair_2_t6138  Array_InternalArray__get_Item_TisKeyValuePair_2_t6138_m46140_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t6138_m46140(__this, ___index, method) (( KeyValuePair_2_t6138  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t6138_m46140_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t6138  Array_InternalArray__get_Item_TisKeyValuePair_2_t6138_m46140_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t6138  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (KeyValuePair_2_t6138 *)(&V_0));
		KeyValuePair_2_t6138  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6138_m46141_gshared (Array_t * __this, KeyValuePair_2_t6138  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6138_m46141(__this, ___item, method) (( void (*) (Array_t *, KeyValuePair_2_t6138 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6138_m46141_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6138_m46141_gshared (Array_t * __this, KeyValuePair_2_t6138  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.RankException
#include "mscorlib_System_RankException.h"
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6138_m46142_gshared (Array_t * __this, KeyValuePair_2_t6138  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6138_m46142(__this, ___item, method) (( bool (*) (Array_t *, KeyValuePair_2_t6138 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6138_m46142_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6138_m46142_gshared (Array_t * __this, KeyValuePair_2_t6138  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t6138  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (KeyValuePair_2_t6138 *)(&V_2));
		KeyValuePair_2_t6138  L_5 = ___item;
		KeyValuePair_2_t6138  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		KeyValuePair_2_t6138  L_8 = V_2;
		KeyValuePair_2_t6138  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		KeyValuePair_2_t6138  L_11 = V_2;
		KeyValuePair_2_t6138  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T[],System.Int32)
struct Array_t;
struct KeyValuePair_2U5BU5D_t7085;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6138_m46143_gshared (Array_t * __this, KeyValuePair_2U5BU5D_t7085* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6138_m46143(__this, ___array, ___index, method) (( void (*) (Array_t *, KeyValuePair_2U5BU5D_t7085*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6138_m46143_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6138_m46143_gshared (Array_t * __this, KeyValuePair_2U5BU5D_t7085* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		KeyValuePair_2U5BU5D_t7085* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7085* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7085* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		KeyValuePair_2U5BU5D_t7085* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7085* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6138_m46144_gshared (Array_t * __this, KeyValuePair_2_t6138  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6138_m46144(__this, ___item, method) (( bool (*) (Array_t *, KeyValuePair_2_t6138 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6138_m46144_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6138_m46144_gshared (Array_t * __this, KeyValuePair_2_t6138  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_t6138_m46145_gshared (Array_t * __this, KeyValuePair_2_t6138  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisKeyValuePair_2_t6138_m46145(__this, ___item, method) (( int32_t (*) (Array_t *, KeyValuePair_2_t6138 , const MethodInfo*))Array_InternalArray__IndexOf_TisKeyValuePair_2_t6138_m46145_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_t6138_m46145_gshared (Array_t * __this, KeyValuePair_2_t6138  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t6138  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (KeyValuePair_2_t6138 *)(&V_2));
		KeyValuePair_2_t6138  L_5 = ___item;
		KeyValuePair_2_t6138  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		KeyValuePair_2_t6138  L_8 = V_2;
		KeyValuePair_2_t6138  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		KeyValuePair_2_t6138  L_14 = ___item;
		KeyValuePair_2_t6138  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisKeyValuePair_2_t6138_m46146_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6138  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisKeyValuePair_2_t6138_m46146(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, KeyValuePair_2_t6138 , const MethodInfo*))Array_InternalArray__Insert_TisKeyValuePair_2_t6138_m46146_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisKeyValuePair_2_t6138_m46146_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6138  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisKeyValuePair_2_t6138_m46148_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6138  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisKeyValuePair_2_t6138_m46148(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, KeyValuePair_2_t6138 , const MethodInfo*))Array_InternalArray__set_Item_TisKeyValuePair_2_t6138_m46148_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisKeyValuePair_2_t6138_m46148_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6138  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		KeyValuePair_2_t6138  L_6 = ___item;
		KeyValuePair_2_t6138  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (KeyValuePair_2_t6138 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_130.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_130MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>()
struct Array_t;
struct IEnumerator_1_t7086;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6138_m46149_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6138_m46149(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6138_m46149_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6138_m46149_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6139  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6139 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6139  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_59.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_83.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_59MethodDeclarations.h"
struct Dictionary_2_t6137;
struct ObjectU5BU5D_t21;
struct Transform_1_t6143;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m46150_gshared (Dictionary_2_t6137 * __this, ObjectU5BU5D_t21* p0, int32_t p1, Transform_1_t6143 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m46150(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6137 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6143 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m46150_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6137;
struct Array_t;
struct Transform_1_t6143;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m46151_gshared (Dictionary_2_t6137 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6143 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m46151(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6137 *, Array_t *, int32_t, Transform_1_t6143 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m46151_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m46151_gshared (Dictionary_2_t6137 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6143 * ___transform, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Exception_t468 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), /*hidden argument*/NULL);
		V_0 = (Type_t *)L_0;
		Array_t * L_1 = ___array;
		NullCheck((Object_t *)L_1);
		Type_t * L_2 = Object_GetType_m2871((Object_t *)L_1, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, (Type_t *)L_2);
		V_1 = (Type_t *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_4 = V_0;
			NullCheck((Type_t *)L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			Type_t * L_6 = V_1;
			NullCheck((Type_t *)L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			Type_t * L_8 = V_1;
			Type_t * L_9 = V_0;
			NullCheck((Type_t *)L_8);
			bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_8, (Type_t *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			Exception_t468 * L_11 = (Exception_t468 *)il2cpp_codegen_object_new (Exception_t468_il2cpp_TypeInfo_var);
			Exception__ctor_m6564(L_11, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			Array_t * L_12 = ___array;
			int32_t L_13 = ___index;
			Transform_1_t6143 * L_14 = ___transform;
			NullCheck((Dictionary_2_t6137 *)__this);
			(( void (*) (Dictionary_2_t6137 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((Dictionary_2_t6137 *)__this, (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)Castclass(L_12, ObjectU5BU5D_t21_il2cpp_TypeInfo_var)), (int32_t)L_13, (Transform_1_t6143 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		Exception_t468 * L_15 = V_2;
		ArgumentException_t1126 * L_16 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m20816(L_16, (String_t*)(String_t*) &_stringLiteral4527, (String_t*)(String_t*) &_stringLiteral3370, (Exception_t468 *)L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_83MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Object,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Object,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m46150_gshared (Dictionary_2_t6137 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, Transform_1_t6143 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		ObjectU5BU5D_t21* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6143 * L_6 = ___transform;
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		Int64U5BU5D_t2413* L_10 = (Int64U5BU5D_t2413*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6143 *)L_6);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, int64_t >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::Invoke(TKey,TValue) */, (Transform_1_t6143 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		Object_t * L_14 = L_13;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)) = (Object_t *)((Object_t *)Castclass(((Object_t *)L_14), IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_84.h"
struct Dictionary_2_t6137;
struct ObjectU5BU5D_t21;
struct Transform_1_t6146;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t691_TisObject_t_m46152_gshared (Dictionary_2_t6137 * __this, ObjectU5BU5D_t21* p0, int32_t p1, Transform_1_t6146 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt64_t691_TisObject_t_m46152(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6137 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6146 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt64_t691_TisObject_t_m46152_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6137;
struct Array_t;
struct Transform_1_t6146;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt64_t691_m46153_gshared (Dictionary_2_t6137 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6146 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt64_t691_m46153(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6137 *, Array_t *, int32_t, Transform_1_t6146 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt64_t691_m46153_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt64_t691_m46153_gshared (Dictionary_2_t6137 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6146 * ___transform, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Exception_t468 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), /*hidden argument*/NULL);
		V_0 = (Type_t *)L_0;
		Array_t * L_1 = ___array;
		NullCheck((Object_t *)L_1);
		Type_t * L_2 = Object_GetType_m2871((Object_t *)L_1, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, (Type_t *)L_2);
		V_1 = (Type_t *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_4 = V_0;
			NullCheck((Type_t *)L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			Type_t * L_6 = V_1;
			NullCheck((Type_t *)L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			Type_t * L_8 = V_1;
			Type_t * L_9 = V_0;
			NullCheck((Type_t *)L_8);
			bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_8, (Type_t *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			Exception_t468 * L_11 = (Exception_t468 *)il2cpp_codegen_object_new (Exception_t468_il2cpp_TypeInfo_var);
			Exception__ctor_m6564(L_11, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			Array_t * L_12 = ___array;
			int32_t L_13 = ___index;
			Transform_1_t6146 * L_14 = ___transform;
			NullCheck((Dictionary_2_t6137 *)__this);
			(( void (*) (Dictionary_2_t6137 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6146 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((Dictionary_2_t6137 *)__this, (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)Castclass(L_12, ObjectU5BU5D_t21_il2cpp_TypeInfo_var)), (int32_t)L_13, (Transform_1_t6146 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		Exception_t468 * L_15 = V_2;
		ArgumentException_t1126 * L_16 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m20816(L_16, (String_t*)(String_t*) &_stringLiteral4527, (String_t*)(String_t*) &_stringLiteral3370, (Exception_t468 *)L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_84MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t691_TisObject_t_m46152_gshared (Dictionary_2_t6137 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, Transform_1_t6146 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		ObjectU5BU5D_t21* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6146 * L_6 = ___transform;
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		Int64U5BU5D_t2413* L_10 = (Int64U5BU5D_t2413*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6146 *)L_6);
		int64_t L_13 = (int64_t)VirtFuncInvoker2< int64_t, Object_t *, int64_t >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::Invoke(TKey,TValue) */, (Transform_1_t6146 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		int64_t L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)) = (Object_t *)((Object_t *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6137;
struct Int64U5BU5D_t2413;
struct Transform_1_t6146;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t691_TisInt64_t691_m46154_gshared (Dictionary_2_t6137 * __this, Int64U5BU5D_t2413* ___array, int32_t ___index, Transform_1_t6146 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt64_t691_TisInt64_t691_m46154(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6137 *, Int64U5BU5D_t2413*, int32_t, Transform_1_t6146 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt64_t691_TisInt64_t691_m46154_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t691_TisInt64_t691_m46154_gshared (Dictionary_2_t6137 * __this, Int64U5BU5D_t2413* ___array, int32_t ___index, Transform_1_t6146 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		Int64U5BU5D_t2413* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6146 * L_6 = ___transform;
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		Int64U5BU5D_t2413* L_10 = (Int64U5BU5D_t2413*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6146 *)L_6);
		int64_t L_13 = (int64_t)VirtFuncInvoker2< int64_t, Object_t *, int64_t >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::Invoke(TKey,TValue) */, (Transform_1_t6146 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		int64_t L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_3, L_5)) = (int64_t)((*(int64_t*)((int64_t*)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_85.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_85MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6137;
struct DictionaryEntryU5BU5D_t7242;
struct Transform_1_t6136;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46155_gshared (Dictionary_2_t6137 * __this, DictionaryEntryU5BU5D_t7242* ___array, int32_t ___index, Transform_1_t6136 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46155(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6137 *, DictionaryEntryU5BU5D_t7242*, int32_t, Transform_1_t6136 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46155_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46155_gshared (Dictionary_2_t6137 * __this, DictionaryEntryU5BU5D_t7242* ___array, int32_t ___index, Transform_1_t6136 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		DictionaryEntryU5BU5D_t7242* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6136 * L_6 = ___transform;
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		Int64U5BU5D_t2413* L_10 = (Int64U5BU5D_t2413*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6136 *)L_6);
		DictionaryEntry_t660  L_13 = (DictionaryEntry_t660 )VirtFuncInvoker2< DictionaryEntry_t660 , Object_t *, int64_t >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::Invoke(TKey,TValue) */, (Transform_1_t6136 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		DictionaryEntry_t660  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((DictionaryEntry_t660 *)(DictionaryEntry_t660 *)SZArrayLdElema(L_3, L_5)) = (DictionaryEntry_t660 )((*(DictionaryEntry_t660 *)((DictionaryEntry_t660 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_86.h"
struct Dictionary_2_t6137;
struct ObjectU5BU5D_t21;
struct Transform_1_t6147;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6138_TisObject_t_m46156_gshared (Dictionary_2_t6137 * __this, ObjectU5BU5D_t21* p0, int32_t p1, Transform_1_t6147 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6138_TisObject_t_m46156(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6137 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6147 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6138_TisObject_t_m46156_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6137;
struct Array_t;
struct Transform_1_t6147;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6138_m46157_gshared (Dictionary_2_t6137 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6147 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6138_m46157(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6137 *, Array_t *, int32_t, Transform_1_t6147 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6138_m46157_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6138_m46157_gshared (Dictionary_2_t6137 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6147 * ___transform, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Exception_t468 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), /*hidden argument*/NULL);
		V_0 = (Type_t *)L_0;
		Array_t * L_1 = ___array;
		NullCheck((Object_t *)L_1);
		Type_t * L_2 = Object_GetType_m2871((Object_t *)L_1, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, (Type_t *)L_2);
		V_1 = (Type_t *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_4 = V_0;
			NullCheck((Type_t *)L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			Type_t * L_6 = V_1;
			NullCheck((Type_t *)L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			Type_t * L_8 = V_1;
			Type_t * L_9 = V_0;
			NullCheck((Type_t *)L_8);
			bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_8, (Type_t *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			Exception_t468 * L_11 = (Exception_t468 *)il2cpp_codegen_object_new (Exception_t468_il2cpp_TypeInfo_var);
			Exception__ctor_m6564(L_11, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			Array_t * L_12 = ___array;
			int32_t L_13 = ___index;
			Transform_1_t6147 * L_14 = ___transform;
			NullCheck((Dictionary_2_t6137 *)__this);
			(( void (*) (Dictionary_2_t6137 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6147 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((Dictionary_2_t6137 *)__this, (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)Castclass(L_12, ObjectU5BU5D_t21_il2cpp_TypeInfo_var)), (int32_t)L_13, (Transform_1_t6147 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		Exception_t468 * L_15 = V_2;
		ArgumentException_t1126 * L_16 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m20816(L_16, (String_t*)(String_t*) &_stringLiteral4527, (String_t*)(String_t*) &_stringLiteral3370, (Exception_t468 *)L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_86MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6138_TisObject_t_m46156_gshared (Dictionary_2_t6137 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, Transform_1_t6147 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		ObjectU5BU5D_t21* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6147 * L_6 = ___transform;
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		Int64U5BU5D_t2413* L_10 = (Int64U5BU5D_t2413*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6147 *)L_6);
		KeyValuePair_2_t6138  L_13 = (KeyValuePair_2_t6138 )VirtFuncInvoker2< KeyValuePair_2_t6138 , Object_t *, int64_t >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(TKey,TValue) */, (Transform_1_t6147 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		KeyValuePair_2_t6138  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)) = (Object_t *)((Object_t *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6137;
struct KeyValuePair_2U5BU5D_t7085;
struct Transform_1_t6147;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6138_TisKeyValuePair_2_t6138_m46158_gshared (Dictionary_2_t6137 * __this, KeyValuePair_2U5BU5D_t7085* ___array, int32_t ___index, Transform_1_t6147 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6138_TisKeyValuePair_2_t6138_m46158(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6137 *, KeyValuePair_2U5BU5D_t7085*, int32_t, Transform_1_t6147 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6138_TisKeyValuePair_2_t6138_m46158_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6138_TisKeyValuePair_2_t6138_m46158_gshared (Dictionary_2_t6137 * __this, KeyValuePair_2U5BU5D_t7085* ___array, int32_t ___index, Transform_1_t6147 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7085* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6147 * L_6 = ___transform;
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		Int64U5BU5D_t2413* L_10 = (Int64U5BU5D_t2413*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6147 *)L_6);
		KeyValuePair_2_t6138  L_13 = (KeyValuePair_2_t6138 )VirtFuncInvoker2< KeyValuePair_2_t6138 , Object_t *, int64_t >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(TKey,TValue) */, (Transform_1_t6147 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		KeyValuePair_2_t6138  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((KeyValuePair_2_t6138 *)(KeyValuePair_2_t6138 *)SZArrayLdElema(L_3, L_5)) = (KeyValuePair_2_t6138 )((*(KeyValuePair_2_t6138 *)((KeyValuePair_2_t6138 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t6172  Array_InternalArray__get_Item_TisKeyValuePair_2_t6172_m46160_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t6172_m46160(__this, ___index, method) (( KeyValuePair_2_t6172  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t6172_m46160_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t6172  Array_InternalArray__get_Item_TisKeyValuePair_2_t6172_m46160_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t6172  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (KeyValuePair_2_t6172 *)(&V_0));
		KeyValuePair_2_t6172  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6172_m46161_gshared (Array_t * __this, KeyValuePair_2_t6172  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6172_m46161(__this, ___item, method) (( void (*) (Array_t *, KeyValuePair_2_t6172 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6172_m46161_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6172_m46161_gshared (Array_t * __this, KeyValuePair_2_t6172  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6172_m46162_gshared (Array_t * __this, KeyValuePair_2_t6172  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6172_m46162(__this, ___item, method) (( bool (*) (Array_t *, KeyValuePair_2_t6172 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6172_m46162_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6172_m46162_gshared (Array_t * __this, KeyValuePair_2_t6172  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t6172  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (KeyValuePair_2_t6172 *)(&V_2));
		KeyValuePair_2_t6172  L_5 = ___item;
		KeyValuePair_2_t6172  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		KeyValuePair_2_t6172  L_8 = V_2;
		KeyValuePair_2_t6172  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		KeyValuePair_2_t6172  L_11 = V_2;
		KeyValuePair_2_t6172  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T[],System.Int32)
struct Array_t;
struct KeyValuePair_2U5BU5D_t7104;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6172_m46163_gshared (Array_t * __this, KeyValuePair_2U5BU5D_t7104* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6172_m46163(__this, ___array, ___index, method) (( void (*) (Array_t *, KeyValuePair_2U5BU5D_t7104*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6172_m46163_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6172_m46163_gshared (Array_t * __this, KeyValuePair_2U5BU5D_t7104* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		KeyValuePair_2U5BU5D_t7104* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7104* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7104* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		KeyValuePair_2U5BU5D_t7104* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7104* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6172_m46164_gshared (Array_t * __this, KeyValuePair_2_t6172  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6172_m46164(__this, ___item, method) (( bool (*) (Array_t *, KeyValuePair_2_t6172 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6172_m46164_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6172_m46164_gshared (Array_t * __this, KeyValuePair_2_t6172  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_t6172_m46165_gshared (Array_t * __this, KeyValuePair_2_t6172  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisKeyValuePair_2_t6172_m46165(__this, ___item, method) (( int32_t (*) (Array_t *, KeyValuePair_2_t6172 , const MethodInfo*))Array_InternalArray__IndexOf_TisKeyValuePair_2_t6172_m46165_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_t6172_m46165_gshared (Array_t * __this, KeyValuePair_2_t6172  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t6172  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (KeyValuePair_2_t6172 *)(&V_2));
		KeyValuePair_2_t6172  L_5 = ___item;
		KeyValuePair_2_t6172  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		KeyValuePair_2_t6172  L_8 = V_2;
		KeyValuePair_2_t6172  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		KeyValuePair_2_t6172  L_14 = ___item;
		KeyValuePair_2_t6172  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisKeyValuePair_2_t6172_m46166_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6172  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisKeyValuePair_2_t6172_m46166(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, KeyValuePair_2_t6172 , const MethodInfo*))Array_InternalArray__Insert_TisKeyValuePair_2_t6172_m46166_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisKeyValuePair_2_t6172_m46166_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6172  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisKeyValuePair_2_t6172_m46168_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6172  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisKeyValuePair_2_t6172_m46168(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, KeyValuePair_2_t6172 , const MethodInfo*))Array_InternalArray__set_Item_TisKeyValuePair_2_t6172_m46168_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisKeyValuePair_2_t6172_m46168_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6172  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		KeyValuePair_2_t6172  L_6 = ___item;
		KeyValuePair_2_t6172  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (KeyValuePair_2_t6172 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_131.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_131MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>()
struct Array_t;
struct IEnumerator_1_t7105;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6172_m46169_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6172_m46169(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6172_m46169_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6172_m46169_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6173  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6173 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6173  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.UInt64
#include "mscorlib_System_UInt64.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.UInt64>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
// T System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
extern "C" uint64_t Array_InternalArray__get_Item_TisUInt64_t1386_m46171_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt64_t1386_m46171(__this, ___index, method) (( uint64_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUInt64_t1386_m46171_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" uint64_t Array_InternalArray__get_Item_TisUInt64_t1386_m46171_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	uint64_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (uint64_t*)(&V_0));
		uint64_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.UInt64>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.UInt64>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.UInt64>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.UInt64>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisUInt64_t1386_m46172_gshared (Array_t * __this, uint64_t ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisUInt64_t1386_m46172(__this, ___item, method) (( void (*) (Array_t *, uint64_t, const MethodInfo*))Array_InternalArray__ICollection_Add_TisUInt64_t1386_m46172_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.UInt64>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisUInt64_t1386_m46172_gshared (Array_t * __this, uint64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.UInt64>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.UInt64>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.UInt64>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisUInt64_t1386_m46173_gshared (Array_t * __this, uint64_t ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisUInt64_t1386_m46173(__this, ___item, method) (( bool (*) (Array_t *, uint64_t, const MethodInfo*))Array_InternalArray__ICollection_Contains_TisUInt64_t1386_m46173_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.UInt64>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisUInt64_t1386_m46173_gshared (Array_t * __this, uint64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (uint64_t*)(&V_2));
		uint64_t L_5 = ___item;
		uint64_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		uint64_t L_8 = V_2;
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		uint64_t L_11 = V_2;
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.UInt64>(T[],System.Int32)
struct Array_t;
struct UInt64U5BU5D_t4202;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.UInt64>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.UInt64>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisUInt64_t1386_m46174_gshared (Array_t * __this, UInt64U5BU5D_t4202* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisUInt64_t1386_m46174(__this, ___array, ___index, method) (( void (*) (Array_t *, UInt64U5BU5D_t4202*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisUInt64_t1386_m46174_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.UInt64>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisUInt64_t1386_m46174_gshared (Array_t * __this, UInt64U5BU5D_t4202* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		UInt64U5BU5D_t4202* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		UInt64U5BU5D_t4202* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		UInt64U5BU5D_t4202* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		UInt64U5BU5D_t4202* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		UInt64U5BU5D_t4202* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.UInt64>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.UInt64>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.UInt64>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisUInt64_t1386_m46175_gshared (Array_t * __this, uint64_t ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisUInt64_t1386_m46175(__this, ___item, method) (( bool (*) (Array_t *, uint64_t, const MethodInfo*))Array_InternalArray__ICollection_Remove_TisUInt64_t1386_m46175_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.UInt64>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisUInt64_t1386_m46175_gshared (Array_t * __this, uint64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.UInt64>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.UInt64>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.UInt64>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisUInt64_t1386_m46176_gshared (Array_t * __this, uint64_t ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisUInt64_t1386_m46176(__this, ___item, method) (( int32_t (*) (Array_t *, uint64_t, const MethodInfo*))Array_InternalArray__IndexOf_TisUInt64_t1386_m46176_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.UInt64>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisUInt64_t1386_m46176_gshared (Array_t * __this, uint64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (uint64_t*)(&V_2));
		uint64_t L_5 = ___item;
		uint64_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		uint64_t L_8 = V_2;
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		uint64_t L_14 = ___item;
		uint64_t L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.UInt64>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.UInt64>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.UInt64>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisUInt64_t1386_m46177_gshared (Array_t * __this, int32_t ___index, uint64_t ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisUInt64_t1386_m46177(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, uint64_t, const MethodInfo*))Array_InternalArray__Insert_TisUInt64_t1386_m46177_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.UInt64>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisUInt64_t1386_m46177_gshared (Array_t * __this, int32_t ___index, uint64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.UInt64>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.UInt64>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.UInt64>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.UInt64>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisUInt64_t1386_m46179_gshared (Array_t * __this, int32_t ___index, uint64_t ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisUInt64_t1386_m46179(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, uint64_t, const MethodInfo*))Array_InternalArray__set_Item_TisUInt64_t1386_m46179_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.UInt64>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisUInt64_t1386_m46179_gshared (Array_t * __this, int32_t ___index, uint64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		uint64_t L_6 = ___item;
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (uint64_t*)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.UInt64>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_132.h"
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_132MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.UInt64>()
struct Array_t;
struct IEnumerator_1_t7106;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.UInt64>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.UInt64>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisUInt64_t1386_m46180_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisUInt64_t1386_m46180(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisUInt64_t1386_m46180_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.UInt64>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisUInt64_t1386_m46180_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6174  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6174 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6174  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_60.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_88.h"
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_60MethodDeclarations.h"
struct Dictionary_2_t6171;
struct ObjectU5BU5D_t21;
struct Transform_1_t6178;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisUInt64_t1386_TisObject_t_m46181_gshared (Dictionary_2_t6171 * __this, ObjectU5BU5D_t21* p0, int32_t p1, Transform_1_t6178 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisUInt64_t1386_TisObject_t_m46181(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6171 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6178 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisUInt64_t1386_TisObject_t_m46181_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.UInt64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6171;
struct Array_t;
struct Transform_1_t6178;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.UInt64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.UInt64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t1386_m46182_gshared (Dictionary_2_t6171 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6178 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t1386_m46182(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6171 *, Array_t *, int32_t, Transform_1_t6178 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t1386_m46182_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.UInt64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisUInt64_t1386_m46182_gshared (Dictionary_2_t6171 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6178 * ___transform, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Exception_t468 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), /*hidden argument*/NULL);
		V_0 = (Type_t *)L_0;
		Array_t * L_1 = ___array;
		NullCheck((Object_t *)L_1);
		Type_t * L_2 = Object_GetType_m2871((Object_t *)L_1, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, (Type_t *)L_2);
		V_1 = (Type_t *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_4 = V_0;
			NullCheck((Type_t *)L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			Type_t * L_6 = V_1;
			NullCheck((Type_t *)L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			Type_t * L_8 = V_1;
			Type_t * L_9 = V_0;
			NullCheck((Type_t *)L_8);
			bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_8, (Type_t *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			Exception_t468 * L_11 = (Exception_t468 *)il2cpp_codegen_object_new (Exception_t468_il2cpp_TypeInfo_var);
			Exception__ctor_m6564(L_11, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			Array_t * L_12 = ___array;
			int32_t L_13 = ___index;
			Transform_1_t6178 * L_14 = ___transform;
			NullCheck((Dictionary_2_t6171 *)__this);
			(( void (*) (Dictionary_2_t6171 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6178 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((Dictionary_2_t6171 *)__this, (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)Castclass(L_12, ObjectU5BU5D_t21_il2cpp_TypeInfo_var)), (int32_t)L_13, (Transform_1_t6178 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		Exception_t468 * L_15 = V_2;
		ArgumentException_t1126 * L_16 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m20816(L_16, (String_t*)(String_t*) &_stringLiteral4527, (String_t*)(String_t*) &_stringLiteral3370, (Exception_t468 *)L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_88MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisUInt64_t1386_TisObject_t_m46181_gshared (Dictionary_2_t6171 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, Transform_1_t6178 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		ObjectU5BU5D_t21* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6178 * L_6 = ___transform;
		UInt64U5BU5D_t4202* L_7 = (UInt64U5BU5D_t4202*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		ObjectU5BU5D_t21* L_10 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6178 *)L_6);
		uint64_t L_13 = (uint64_t)VirtFuncInvoker2< uint64_t, uint64_t, Object_t * >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::Invoke(TKey,TValue) */, (Transform_1_t6178 *)L_6, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_7, L_9)), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		uint64_t L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)) = (Object_t *)((Object_t *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.UInt64>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6171;
struct UInt64U5BU5D_t4202;
struct Transform_1_t6178;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.UInt64>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.UInt64>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisUInt64_t1386_TisUInt64_t1386_m46183_gshared (Dictionary_2_t6171 * __this, UInt64U5BU5D_t4202* ___array, int32_t ___index, Transform_1_t6178 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisUInt64_t1386_TisUInt64_t1386_m46183(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6171 *, UInt64U5BU5D_t4202*, int32_t, Transform_1_t6178 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisUInt64_t1386_TisUInt64_t1386_m46183_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.UInt64,System.UInt64>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisUInt64_t1386_TisUInt64_t1386_m46183_gshared (Dictionary_2_t6171 * __this, UInt64U5BU5D_t4202* ___array, int32_t ___index, Transform_1_t6178 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		UInt64U5BU5D_t4202* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6178 * L_6 = ___transform;
		UInt64U5BU5D_t4202* L_7 = (UInt64U5BU5D_t4202*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		ObjectU5BU5D_t21* L_10 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6178 *)L_6);
		uint64_t L_13 = (uint64_t)VirtFuncInvoker2< uint64_t, uint64_t, Object_t * >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::Invoke(TKey,TValue) */, (Transform_1_t6178 *)L_6, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_7, L_9)), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		uint64_t L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((uint64_t*)(uint64_t*)SZArrayLdElema(L_3, L_5)) = (uint64_t)((*(uint64_t*)((uint64_t*)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_89.h"
struct Dictionary_2_t6171;
struct ObjectU5BU5D_t21;
struct Transform_1_t6181;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m46184_gshared (Dictionary_2_t6171 * __this, ObjectU5BU5D_t21* p0, int32_t p1, Transform_1_t6181 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m46184(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6171 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6181 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m46184_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6171;
struct Array_t;
struct Transform_1_t6181;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m46185_gshared (Dictionary_2_t6171 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6181 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m46185(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6171 *, Array_t *, int32_t, Transform_1_t6181 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m46185_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m46185_gshared (Dictionary_2_t6171 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6181 * ___transform, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Exception_t468 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), /*hidden argument*/NULL);
		V_0 = (Type_t *)L_0;
		Array_t * L_1 = ___array;
		NullCheck((Object_t *)L_1);
		Type_t * L_2 = Object_GetType_m2871((Object_t *)L_1, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, (Type_t *)L_2);
		V_1 = (Type_t *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_4 = V_0;
			NullCheck((Type_t *)L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			Type_t * L_6 = V_1;
			NullCheck((Type_t *)L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			Type_t * L_8 = V_1;
			Type_t * L_9 = V_0;
			NullCheck((Type_t *)L_8);
			bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_8, (Type_t *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			Exception_t468 * L_11 = (Exception_t468 *)il2cpp_codegen_object_new (Exception_t468_il2cpp_TypeInfo_var);
			Exception__ctor_m6564(L_11, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			Array_t * L_12 = ___array;
			int32_t L_13 = ___index;
			Transform_1_t6181 * L_14 = ___transform;
			NullCheck((Dictionary_2_t6171 *)__this);
			(( void (*) (Dictionary_2_t6171 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6181 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((Dictionary_2_t6171 *)__this, (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)Castclass(L_12, ObjectU5BU5D_t21_il2cpp_TypeInfo_var)), (int32_t)L_13, (Transform_1_t6181 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		Exception_t468 * L_15 = V_2;
		ArgumentException_t1126 * L_16 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m20816(L_16, (String_t*)(String_t*) &_stringLiteral4527, (String_t*)(String_t*) &_stringLiteral3370, (Exception_t468 *)L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_89MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Object,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Object,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m46184_gshared (Dictionary_2_t6171 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, Transform_1_t6181 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		ObjectU5BU5D_t21* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6181 * L_6 = ___transform;
		UInt64U5BU5D_t4202* L_7 = (UInt64U5BU5D_t4202*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		ObjectU5BU5D_t21* L_10 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6181 *)L_6);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker2< Object_t *, uint64_t, Object_t * >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::Invoke(TKey,TValue) */, (Transform_1_t6181 *)L_6, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_7, L_9)), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		Object_t * L_14 = L_13;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)) = (Object_t *)((Object_t *)Castclass(((Object_t *)L_14), IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_90.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_90MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6171;
struct DictionaryEntryU5BU5D_t7242;
struct Transform_1_t6170;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46186_gshared (Dictionary_2_t6171 * __this, DictionaryEntryU5BU5D_t7242* ___array, int32_t ___index, Transform_1_t6170 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46186(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6171 *, DictionaryEntryU5BU5D_t7242*, int32_t, Transform_1_t6170 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46186_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46186_gshared (Dictionary_2_t6171 * __this, DictionaryEntryU5BU5D_t7242* ___array, int32_t ___index, Transform_1_t6170 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		DictionaryEntryU5BU5D_t7242* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6170 * L_6 = ___transform;
		UInt64U5BU5D_t4202* L_7 = (UInt64U5BU5D_t4202*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		ObjectU5BU5D_t21* L_10 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6170 *)L_6);
		DictionaryEntry_t660  L_13 = (DictionaryEntry_t660 )VirtFuncInvoker2< DictionaryEntry_t660 , uint64_t, Object_t * >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue) */, (Transform_1_t6170 *)L_6, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_7, L_9)), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		DictionaryEntry_t660  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((DictionaryEntry_t660 *)(DictionaryEntry_t660 *)SZArrayLdElema(L_3, L_5)) = (DictionaryEntry_t660 )((*(DictionaryEntry_t660 *)((DictionaryEntry_t660 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_91.h"
struct Dictionary_2_t6171;
struct ObjectU5BU5D_t21;
struct Transform_1_t6182;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6172_TisObject_t_m46187_gshared (Dictionary_2_t6171 * __this, ObjectU5BU5D_t21* p0, int32_t p1, Transform_1_t6182 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6172_TisObject_t_m46187(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6171 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6182 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6172_TisObject_t_m46187_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6171;
struct Array_t;
struct Transform_1_t6182;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6172_m46188_gshared (Dictionary_2_t6171 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6182 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6172_m46188(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6171 *, Array_t *, int32_t, Transform_1_t6182 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6172_m46188_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6172_m46188_gshared (Dictionary_2_t6171 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6182 * ___transform, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Exception_t468 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), /*hidden argument*/NULL);
		V_0 = (Type_t *)L_0;
		Array_t * L_1 = ___array;
		NullCheck((Object_t *)L_1);
		Type_t * L_2 = Object_GetType_m2871((Object_t *)L_1, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, (Type_t *)L_2);
		V_1 = (Type_t *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_4 = V_0;
			NullCheck((Type_t *)L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			Type_t * L_6 = V_1;
			NullCheck((Type_t *)L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			Type_t * L_8 = V_1;
			Type_t * L_9 = V_0;
			NullCheck((Type_t *)L_8);
			bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_8, (Type_t *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			Exception_t468 * L_11 = (Exception_t468 *)il2cpp_codegen_object_new (Exception_t468_il2cpp_TypeInfo_var);
			Exception__ctor_m6564(L_11, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			Array_t * L_12 = ___array;
			int32_t L_13 = ___index;
			Transform_1_t6182 * L_14 = ___transform;
			NullCheck((Dictionary_2_t6171 *)__this);
			(( void (*) (Dictionary_2_t6171 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6182 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((Dictionary_2_t6171 *)__this, (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)Castclass(L_12, ObjectU5BU5D_t21_il2cpp_TypeInfo_var)), (int32_t)L_13, (Transform_1_t6182 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		Exception_t468 * L_15 = V_2;
		ArgumentException_t1126 * L_16 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m20816(L_16, (String_t*)(String_t*) &_stringLiteral4527, (String_t*)(String_t*) &_stringLiteral3370, (Exception_t468 *)L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_91MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6172_TisObject_t_m46187_gshared (Dictionary_2_t6171 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, Transform_1_t6182 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		ObjectU5BU5D_t21* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6182 * L_6 = ___transform;
		UInt64U5BU5D_t4202* L_7 = (UInt64U5BU5D_t4202*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		ObjectU5BU5D_t21* L_10 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6182 *)L_6);
		KeyValuePair_2_t6172  L_13 = (KeyValuePair_2_t6172 )VirtFuncInvoker2< KeyValuePair_2_t6172 , uint64_t, Object_t * >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Invoke(TKey,TValue) */, (Transform_1_t6182 *)L_6, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_7, L_9)), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		KeyValuePair_2_t6172  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)) = (Object_t *)((Object_t *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6171;
struct KeyValuePair_2U5BU5D_t7104;
struct Transform_1_t6182;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6172_TisKeyValuePair_2_t6172_m46189_gshared (Dictionary_2_t6171 * __this, KeyValuePair_2U5BU5D_t7104* ___array, int32_t ___index, Transform_1_t6182 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6172_TisKeyValuePair_2_t6172_m46189(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6171 *, KeyValuePair_2U5BU5D_t7104*, int32_t, Transform_1_t6182 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6172_TisKeyValuePair_2_t6172_m46189_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6172_TisKeyValuePair_2_t6172_m46189_gshared (Dictionary_2_t6171 * __this, KeyValuePair_2U5BU5D_t7104* ___array, int32_t ___index, Transform_1_t6182 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7104* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6182 * L_6 = ___transform;
		UInt64U5BU5D_t4202* L_7 = (UInt64U5BU5D_t4202*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		ObjectU5BU5D_t21* L_10 = (ObjectU5BU5D_t21*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6182 *)L_6);
		KeyValuePair_2_t6172  L_13 = (KeyValuePair_2_t6172 )VirtFuncInvoker2< KeyValuePair_2_t6172 , uint64_t, Object_t * >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Invoke(TKey,TValue) */, (Transform_1_t6182 *)L_6, (uint64_t)(*(uint64_t*)(uint64_t*)SZArrayLdElema(L_7, L_9)), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		KeyValuePair_2_t6172  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((KeyValuePair_2_t6172 *)(KeyValuePair_2_t6172 *)SZArrayLdElema(L_3, L_5)) = (KeyValuePair_2_t6172 )((*(KeyValuePair_2_t6172 *)((KeyValuePair_2_t6172 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3.h"
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro.h"
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CProMethodDeclarations.h"
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<JSONRESPONSE>)
struct NetworkMatch_t2841;
struct IEnumerator_t74;
struct WWW_t899;
struct ResponseDelegate_1_t2949;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<JSONRESPONSE>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<JSONRESPONSE>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisObject_t_m13732_gshared (NetworkMatch_t2841 * __this, WWW_t899 * ___client, ResponseDelegate_1_t2949 * ___callback, const MethodInfo* method);
#define NetworkMatch_ProcessMatchResponse_TisObject_t_m13732(__this, ___client, ___callback, method) (( Object_t * (*) (NetworkMatch_t2841 *, WWW_t899 *, ResponseDelegate_1_t2949 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m13732_gshared)(__this, ___client, ___callback, method)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<JSONRESPONSE>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisObject_t_m13732_gshared (NetworkMatch_t2841 * __this, WWW_t899 * ___client, ResponseDelegate_1_t2949 * ___callback, const MethodInfo* method)
{
	U3CProcessMatchResponseU3Ec__Iterator0_1_t6191 * V_0 = {0};
	{
		U3CProcessMatchResponseU3Ec__Iterator0_1_t6191 * L_0 = (U3CProcessMatchResponseU3Ec__Iterator0_1_t6191 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		(( void (*) (U3CProcessMatchResponseU3Ec__Iterator0_1_t6191 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CProcessMatchResponseU3Ec__Iterator0_1_t6191 *)L_0;
		U3CProcessMatchResponseU3Ec__Iterator0_1_t6191 * L_1 = V_0;
		WWW_t899 * L_2 = ___client;
		NullCheck(L_1);
		L_1->___client_0 = L_2;
		U3CProcessMatchResponseU3Ec__Iterator0_1_t6191 * L_3 = V_0;
		ResponseDelegate_1_t2949 * L_4 = ___callback;
		NullCheck(L_3);
		L_3->___callback_5 = L_4;
		U3CProcessMatchResponseU3Ec__Iterator0_1_t6191 * L_5 = V_0;
		WWW_t899 * L_6 = ___client;
		NullCheck(L_5);
		L_5->___U3CU24U3Eclient_8 = L_6;
		U3CProcessMatchResponseU3Ec__Iterator0_1_t6191 * L_7 = V_0;
		ResponseDelegate_1_t2949 * L_8 = ___callback;
		NullCheck(L_7);
		L_7->___U3CU24U3Ecallback_9 = L_8;
		U3CProcessMatchResponseU3Ec__Iterator0_1_t6191 * L_9 = V_0;
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32)
extern "C" KeyValuePair_2_t6192  Array_InternalArray__get_Item_TisKeyValuePair_2_t6192_m46191_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t6192_m46191(__this, ___index, method) (( KeyValuePair_2_t6192  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t6192_m46191_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t6192  Array_InternalArray__get_Item_TisKeyValuePair_2_t6192_m46191_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t6192  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (KeyValuePair_2_t6192 *)(&V_0));
		KeyValuePair_2_t6192  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6192_m46192_gshared (Array_t * __this, KeyValuePair_2_t6192  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6192_m46192(__this, ___item, method) (( void (*) (Array_t *, KeyValuePair_2_t6192 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6192_m46192_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6192_m46192_gshared (Array_t * __this, KeyValuePair_2_t6192  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6192_m46193_gshared (Array_t * __this, KeyValuePair_2_t6192  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6192_m46193(__this, ___item, method) (( bool (*) (Array_t *, KeyValuePair_2_t6192 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6192_m46193_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6192_m46193_gshared (Array_t * __this, KeyValuePair_2_t6192  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t6192  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (KeyValuePair_2_t6192 *)(&V_2));
		KeyValuePair_2_t6192  L_5 = ___item;
		KeyValuePair_2_t6192  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		KeyValuePair_2_t6192  L_8 = V_2;
		KeyValuePair_2_t6192  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		KeyValuePair_2_t6192  L_11 = V_2;
		KeyValuePair_2_t6192  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T[],System.Int32)
struct Array_t;
struct KeyValuePair_2U5BU5D_t7138;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6192_m46194_gshared (Array_t * __this, KeyValuePair_2U5BU5D_t7138* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6192_m46194(__this, ___array, ___index, method) (( void (*) (Array_t *, KeyValuePair_2U5BU5D_t7138*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6192_m46194_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6192_m46194_gshared (Array_t * __this, KeyValuePair_2U5BU5D_t7138* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		KeyValuePair_2U5BU5D_t7138* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7138* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7138* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		KeyValuePair_2U5BU5D_t7138* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7138* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6192_m46195_gshared (Array_t * __this, KeyValuePair_2_t6192  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6192_m46195(__this, ___item, method) (( bool (*) (Array_t *, KeyValuePair_2_t6192 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6192_m46195_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6192_m46195_gshared (Array_t * __this, KeyValuePair_2_t6192  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_t6192_m46196_gshared (Array_t * __this, KeyValuePair_2_t6192  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisKeyValuePair_2_t6192_m46196(__this, ___item, method) (( int32_t (*) (Array_t *, KeyValuePair_2_t6192 , const MethodInfo*))Array_InternalArray__IndexOf_TisKeyValuePair_2_t6192_m46196_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_t6192_m46196_gshared (Array_t * __this, KeyValuePair_2_t6192  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t6192  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (KeyValuePair_2_t6192 *)(&V_2));
		KeyValuePair_2_t6192  L_5 = ___item;
		KeyValuePair_2_t6192  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		KeyValuePair_2_t6192  L_8 = V_2;
		KeyValuePair_2_t6192  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		KeyValuePair_2_t6192  L_14 = ___item;
		KeyValuePair_2_t6192  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisKeyValuePair_2_t6192_m46197_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6192  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisKeyValuePair_2_t6192_m46197(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, KeyValuePair_2_t6192 , const MethodInfo*))Array_InternalArray__Insert_TisKeyValuePair_2_t6192_m46197_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisKeyValuePair_2_t6192_m46197_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6192  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisKeyValuePair_2_t6192_m46199_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6192  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisKeyValuePair_2_t6192_m46199(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, KeyValuePair_2_t6192 , const MethodInfo*))Array_InternalArray__set_Item_TisKeyValuePair_2_t6192_m46199_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisKeyValuePair_2_t6192_m46199_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6192  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		KeyValuePair_2_t6192  L_6 = ___item;
		KeyValuePair_2_t6192  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (KeyValuePair_2_t6192 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_133.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_133MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>()
struct Array_t;
struct IEnumerator_1_t7139;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6192_m46200_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6192_m46200(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6192_m46200_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6192_m46200_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6193  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6193 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6193  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_64.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_97.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_64MethodDeclarations.h"
struct Dictionary_2_t6216;
struct ObjectU5BU5D_t21;
struct Transform_1_t6220;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m46201_gshared (Dictionary_2_t6216 * __this, ObjectU5BU5D_t21* p0, int32_t p1, Transform_1_t6220 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m46201(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6216 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6220 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m46201_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6216;
struct Array_t;
struct Transform_1_t6220;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m46202_gshared (Dictionary_2_t6216 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6220 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m46202(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6216 *, Array_t *, int32_t, Transform_1_t6220 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m46202_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m46202_gshared (Dictionary_2_t6216 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6220 * ___transform, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Exception_t468 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), /*hidden argument*/NULL);
		V_0 = (Type_t *)L_0;
		Array_t * L_1 = ___array;
		NullCheck((Object_t *)L_1);
		Type_t * L_2 = Object_GetType_m2871((Object_t *)L_1, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, (Type_t *)L_2);
		V_1 = (Type_t *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_4 = V_0;
			NullCheck((Type_t *)L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			Type_t * L_6 = V_1;
			NullCheck((Type_t *)L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			Type_t * L_8 = V_1;
			Type_t * L_9 = V_0;
			NullCheck((Type_t *)L_8);
			bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_8, (Type_t *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			Exception_t468 * L_11 = (Exception_t468 *)il2cpp_codegen_object_new (Exception_t468_il2cpp_TypeInfo_var);
			Exception__ctor_m6564(L_11, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			Array_t * L_12 = ___array;
			int32_t L_13 = ___index;
			Transform_1_t6220 * L_14 = ___transform;
			NullCheck((Dictionary_2_t6216 *)__this);
			(( void (*) (Dictionary_2_t6216 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6220 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((Dictionary_2_t6216 *)__this, (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)Castclass(L_12, ObjectU5BU5D_t21_il2cpp_TypeInfo_var)), (int32_t)L_13, (Transform_1_t6220 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		Exception_t468 * L_15 = V_2;
		ArgumentException_t1126 * L_16 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m20816(L_16, (String_t*)(String_t*) &_stringLiteral4527, (String_t*)(String_t*) &_stringLiteral3370, (Exception_t468 *)L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_97MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Object,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Object,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m46201_gshared (Dictionary_2_t6216 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, Transform_1_t6220 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		ObjectU5BU5D_t21* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6220 * L_6 = ___transform;
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		KeyValuePair_2U5BU5D_t5601* L_10 = (KeyValuePair_2U5BU5D_t5601*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6220 *)L_6);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, KeyValuePair_2_t1591  >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(TKey,TValue) */, (Transform_1_t6220 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), (KeyValuePair_2_t1591 )(*(KeyValuePair_2_t1591 *)(KeyValuePair_2_t1591 *)SZArrayLdElema(L_10, L_12)));
		Object_t * L_14 = L_13;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)) = (Object_t *)((Object_t *)Castclass(((Object_t *)L_14), IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_98.h"
struct Dictionary_2_t6216;
struct ObjectU5BU5D_t21;
struct Transform_1_t6223;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1591_TisObject_t_m46203_gshared (Dictionary_2_t6216 * __this, ObjectU5BU5D_t21* p0, int32_t p1, Transform_1_t6223 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1591_TisObject_t_m46203(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6216 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6223 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1591_TisObject_t_m46203_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6216;
struct Array_t;
struct Transform_1_t6223;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1591_m46204_gshared (Dictionary_2_t6216 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6223 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1591_m46204(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6216 *, Array_t *, int32_t, Transform_1_t6223 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1591_m46204_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t1591_m46204_gshared (Dictionary_2_t6216 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6223 * ___transform, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Exception_t468 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), /*hidden argument*/NULL);
		V_0 = (Type_t *)L_0;
		Array_t * L_1 = ___array;
		NullCheck((Object_t *)L_1);
		Type_t * L_2 = Object_GetType_m2871((Object_t *)L_1, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, (Type_t *)L_2);
		V_1 = (Type_t *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_4 = V_0;
			NullCheck((Type_t *)L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			Type_t * L_6 = V_1;
			NullCheck((Type_t *)L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			Type_t * L_8 = V_1;
			Type_t * L_9 = V_0;
			NullCheck((Type_t *)L_8);
			bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_8, (Type_t *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			Exception_t468 * L_11 = (Exception_t468 *)il2cpp_codegen_object_new (Exception_t468_il2cpp_TypeInfo_var);
			Exception__ctor_m6564(L_11, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			Array_t * L_12 = ___array;
			int32_t L_13 = ___index;
			Transform_1_t6223 * L_14 = ___transform;
			NullCheck((Dictionary_2_t6216 *)__this);
			(( void (*) (Dictionary_2_t6216 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6223 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((Dictionary_2_t6216 *)__this, (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)Castclass(L_12, ObjectU5BU5D_t21_il2cpp_TypeInfo_var)), (int32_t)L_13, (Transform_1_t6223 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		Exception_t468 * L_15 = V_2;
		ArgumentException_t1126 * L_16 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m20816(L_16, (String_t*)(String_t*) &_stringLiteral4527, (String_t*)(String_t*) &_stringLiteral3370, (Exception_t468 *)L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_98MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1591_TisObject_t_m46203_gshared (Dictionary_2_t6216 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, Transform_1_t6223 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		ObjectU5BU5D_t21* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6223 * L_6 = ___transform;
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		KeyValuePair_2U5BU5D_t5601* L_10 = (KeyValuePair_2U5BU5D_t5601*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6223 *)L_6);
		KeyValuePair_2_t1591  L_13 = (KeyValuePair_2_t1591 )VirtFuncInvoker2< KeyValuePair_2_t1591 , Object_t *, KeyValuePair_2_t1591  >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue) */, (Transform_1_t6223 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), (KeyValuePair_2_t1591 )(*(KeyValuePair_2_t1591 *)(KeyValuePair_2_t1591 *)SZArrayLdElema(L_10, L_12)));
		KeyValuePair_2_t1591  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)) = (Object_t *)((Object_t *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6216;
struct KeyValuePair_2U5BU5D_t5601;
struct Transform_1_t6223;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1591_TisKeyValuePair_2_t1591_m46205_gshared (Dictionary_2_t6216 * __this, KeyValuePair_2U5BU5D_t5601* ___array, int32_t ___index, Transform_1_t6223 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1591_TisKeyValuePair_2_t1591_m46205(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6216 *, KeyValuePair_2U5BU5D_t5601*, int32_t, Transform_1_t6223 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1591_TisKeyValuePair_2_t1591_m46205_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t1591_TisKeyValuePair_2_t1591_m46205_gshared (Dictionary_2_t6216 * __this, KeyValuePair_2U5BU5D_t5601* ___array, int32_t ___index, Transform_1_t6223 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		KeyValuePair_2U5BU5D_t5601* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6223 * L_6 = ___transform;
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		KeyValuePair_2U5BU5D_t5601* L_10 = (KeyValuePair_2U5BU5D_t5601*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6223 *)L_6);
		KeyValuePair_2_t1591  L_13 = (KeyValuePair_2_t1591 )VirtFuncInvoker2< KeyValuePair_2_t1591 , Object_t *, KeyValuePair_2_t1591  >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue) */, (Transform_1_t6223 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), (KeyValuePair_2_t1591 )(*(KeyValuePair_2_t1591 *)(KeyValuePair_2_t1591 *)SZArrayLdElema(L_10, L_12)));
		KeyValuePair_2_t1591  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((KeyValuePair_2_t1591 *)(KeyValuePair_2_t1591 *)SZArrayLdElema(L_3, L_5)) = (KeyValuePair_2_t1591 )((*(KeyValuePair_2_t1591 *)((KeyValuePair_2_t1591 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_99.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_99MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6216;
struct DictionaryEntryU5BU5D_t7242;
struct Transform_1_t6215;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46206_gshared (Dictionary_2_t6216 * __this, DictionaryEntryU5BU5D_t7242* ___array, int32_t ___index, Transform_1_t6215 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46206(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6216 *, DictionaryEntryU5BU5D_t7242*, int32_t, Transform_1_t6215 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46206_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46206_gshared (Dictionary_2_t6216 * __this, DictionaryEntryU5BU5D_t7242* ___array, int32_t ___index, Transform_1_t6215 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		DictionaryEntryU5BU5D_t7242* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6215 * L_6 = ___transform;
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		KeyValuePair_2U5BU5D_t5601* L_10 = (KeyValuePair_2U5BU5D_t5601*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6215 *)L_6);
		DictionaryEntry_t660  L_13 = (DictionaryEntry_t660 )VirtFuncInvoker2< DictionaryEntry_t660 , Object_t *, KeyValuePair_2_t1591  >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue) */, (Transform_1_t6215 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), (KeyValuePair_2_t1591 )(*(KeyValuePair_2_t1591 *)(KeyValuePair_2_t1591 *)SZArrayLdElema(L_10, L_12)));
		DictionaryEntry_t660  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((DictionaryEntry_t660 *)(DictionaryEntry_t660 *)SZArrayLdElema(L_3, L_5)) = (DictionaryEntry_t660 )((*(DictionaryEntry_t660 *)((DictionaryEntry_t660 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_100.h"
struct Dictionary_2_t6216;
struct ObjectU5BU5D_t21;
struct Transform_1_t6224;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6192_TisObject_t_m46207_gshared (Dictionary_2_t6216 * __this, ObjectU5BU5D_t21* p0, int32_t p1, Transform_1_t6224 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6192_TisObject_t_m46207(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6216 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6224 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6192_TisObject_t_m46207_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6216;
struct Array_t;
struct Transform_1_t6224;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6192_m46208_gshared (Dictionary_2_t6216 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6224 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6192_m46208(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6216 *, Array_t *, int32_t, Transform_1_t6224 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6192_m46208_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6192_m46208_gshared (Dictionary_2_t6216 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6224 * ___transform, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Exception_t468 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), /*hidden argument*/NULL);
		V_0 = (Type_t *)L_0;
		Array_t * L_1 = ___array;
		NullCheck((Object_t *)L_1);
		Type_t * L_2 = Object_GetType_m2871((Object_t *)L_1, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, (Type_t *)L_2);
		V_1 = (Type_t *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_4 = V_0;
			NullCheck((Type_t *)L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			Type_t * L_6 = V_1;
			NullCheck((Type_t *)L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			Type_t * L_8 = V_1;
			Type_t * L_9 = V_0;
			NullCheck((Type_t *)L_8);
			bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_8, (Type_t *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			Exception_t468 * L_11 = (Exception_t468 *)il2cpp_codegen_object_new (Exception_t468_il2cpp_TypeInfo_var);
			Exception__ctor_m6564(L_11, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			Array_t * L_12 = ___array;
			int32_t L_13 = ___index;
			Transform_1_t6224 * L_14 = ___transform;
			NullCheck((Dictionary_2_t6216 *)__this);
			(( void (*) (Dictionary_2_t6216 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6224 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((Dictionary_2_t6216 *)__this, (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)Castclass(L_12, ObjectU5BU5D_t21_il2cpp_TypeInfo_var)), (int32_t)L_13, (Transform_1_t6224 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		Exception_t468 * L_15 = V_2;
		ArgumentException_t1126 * L_16 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m20816(L_16, (String_t*)(String_t*) &_stringLiteral4527, (String_t*)(String_t*) &_stringLiteral3370, (Exception_t468 *)L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_100MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6192_TisObject_t_m46207_gshared (Dictionary_2_t6216 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, Transform_1_t6224 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		ObjectU5BU5D_t21* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6224 * L_6 = ___transform;
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		KeyValuePair_2U5BU5D_t5601* L_10 = (KeyValuePair_2U5BU5D_t5601*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6224 *)L_6);
		KeyValuePair_2_t6192  L_13 = (KeyValuePair_2_t6192 )VirtFuncInvoker2< KeyValuePair_2_t6192 , Object_t *, KeyValuePair_2_t1591  >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Invoke(TKey,TValue) */, (Transform_1_t6224 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), (KeyValuePair_2_t1591 )(*(KeyValuePair_2_t1591 *)(KeyValuePair_2_t1591 *)SZArrayLdElema(L_10, L_12)));
		KeyValuePair_2_t6192  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)) = (Object_t *)((Object_t *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t6216;
struct KeyValuePair_2U5BU5D_t7138;
struct Transform_1_t6224;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6192_TisKeyValuePair_2_t6192_m46209_gshared (Dictionary_2_t6216 * __this, KeyValuePair_2U5BU5D_t7138* ___array, int32_t ___index, Transform_1_t6224 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6192_TisKeyValuePair_2_t6192_m46209(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t6216 *, KeyValuePair_2U5BU5D_t7138*, int32_t, Transform_1_t6224 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6192_TisKeyValuePair_2_t6192_m46209_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6192_TisKeyValuePair_2_t6192_m46209_gshared (Dictionary_2_t6216 * __this, KeyValuePair_2U5BU5D_t7138* ___array, int32_t ___index, Transform_1_t6224 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7138* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6224 * L_6 = ___transform;
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		KeyValuePair_2U5BU5D_t5601* L_10 = (KeyValuePair_2U5BU5D_t5601*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6224 *)L_6);
		KeyValuePair_2_t6192  L_13 = (KeyValuePair_2_t6192 )VirtFuncInvoker2< KeyValuePair_2_t6192 , Object_t *, KeyValuePair_2_t1591  >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Invoke(TKey,TValue) */, (Transform_1_t6224 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), (KeyValuePair_2_t1591 )(*(KeyValuePair_2_t1591 *)(KeyValuePair_2_t1591 *)SZArrayLdElema(L_10, L_12)));
		KeyValuePair_2_t6192  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((KeyValuePair_2_t6192 *)(KeyValuePair_2_t6192 *)SZArrayLdElema(L_3, L_5)) = (KeyValuePair_2_t6192 )((*(KeyValuePair_2_t6192 *)((KeyValuePair_2_t6192 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<UnityEngine.SendMouseEvents/HitInfo>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
// T System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
extern "C" HitInfo_t2887  Array_InternalArray__get_Item_TisHitInfo_t2887_m46211_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisHitInfo_t2887_m46211(__this, ___index, method) (( HitInfo_t2887  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisHitInfo_t2887_m46211_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" HitInfo_t2887  Array_InternalArray__get_Item_TisHitInfo_t2887_m46211_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	HitInfo_t2887  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (HitInfo_t2887 *)(&V_0));
		HitInfo_t2887  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<UnityEngine.SendMouseEvents/HitInfo>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.SendMouseEvents/HitInfo>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.SendMouseEvents/HitInfo>(T)
// System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.SendMouseEvents/HitInfo>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisHitInfo_t2887_m46212_gshared (Array_t * __this, HitInfo_t2887  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisHitInfo_t2887_m46212(__this, ___item, method) (( void (*) (Array_t *, HitInfo_t2887 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisHitInfo_t2887_m46212_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<UnityEngine.SendMouseEvents/HitInfo>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisHitInfo_t2887_m46212_gshared (Array_t * __this, HitInfo_t2887  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.SendMouseEvents/HitInfo>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.SendMouseEvents/HitInfo>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.SendMouseEvents/HitInfo>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisHitInfo_t2887_m46213_gshared (Array_t * __this, HitInfo_t2887  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisHitInfo_t2887_m46213(__this, ___item, method) (( bool (*) (Array_t *, HitInfo_t2887 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisHitInfo_t2887_m46213_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<UnityEngine.SendMouseEvents/HitInfo>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisHitInfo_t2887_m46213_gshared (Array_t * __this, HitInfo_t2887  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HitInfo_t2887  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (HitInfo_t2887 *)(&V_2));
		HitInfo_t2887  L_5 = ___item;
		HitInfo_t2887  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		HitInfo_t2887  L_8 = V_2;
		HitInfo_t2887  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		HitInfo_t2887  L_11 = V_2;
		HitInfo_t2887  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.SendMouseEvents/HitInfo>(T[],System.Int32)
struct Array_t;
struct HitInfoU5BU5D_t2888;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.SendMouseEvents/HitInfo>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.SendMouseEvents/HitInfo>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisHitInfo_t2887_m46214_gshared (Array_t * __this, HitInfoU5BU5D_t2888* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisHitInfo_t2887_m46214(__this, ___array, ___index, method) (( void (*) (Array_t *, HitInfoU5BU5D_t2888*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisHitInfo_t2887_m46214_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<UnityEngine.SendMouseEvents/HitInfo>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisHitInfo_t2887_m46214_gshared (Array_t * __this, HitInfoU5BU5D_t2888* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		HitInfoU5BU5D_t2888* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		HitInfoU5BU5D_t2888* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		HitInfoU5BU5D_t2888* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		HitInfoU5BU5D_t2888* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		HitInfoU5BU5D_t2888* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.SendMouseEvents/HitInfo>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.SendMouseEvents/HitInfo>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.SendMouseEvents/HitInfo>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisHitInfo_t2887_m46215_gshared (Array_t * __this, HitInfo_t2887  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisHitInfo_t2887_m46215(__this, ___item, method) (( bool (*) (Array_t *, HitInfo_t2887 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisHitInfo_t2887_m46215_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<UnityEngine.SendMouseEvents/HitInfo>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisHitInfo_t2887_m46215_gshared (Array_t * __this, HitInfo_t2887  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.SendMouseEvents/HitInfo>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.SendMouseEvents/HitInfo>(T)
// System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.SendMouseEvents/HitInfo>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisHitInfo_t2887_m46216_gshared (Array_t * __this, HitInfo_t2887  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisHitInfo_t2887_m46216(__this, ___item, method) (( int32_t (*) (Array_t *, HitInfo_t2887 , const MethodInfo*))Array_InternalArray__IndexOf_TisHitInfo_t2887_m46216_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<UnityEngine.SendMouseEvents/HitInfo>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisHitInfo_t2887_m46216_gshared (Array_t * __this, HitInfo_t2887  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HitInfo_t2887  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (HitInfo_t2887 *)(&V_2));
		HitInfo_t2887  L_5 = ___item;
		HitInfo_t2887  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		HitInfo_t2887  L_8 = V_2;
		HitInfo_t2887  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		HitInfo_t2887  L_14 = ___item;
		HitInfo_t2887  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<UnityEngine.SendMouseEvents/HitInfo>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<UnityEngine.SendMouseEvents/HitInfo>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<UnityEngine.SendMouseEvents/HitInfo>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisHitInfo_t2887_m46217_gshared (Array_t * __this, int32_t ___index, HitInfo_t2887  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisHitInfo_t2887_m46217(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, HitInfo_t2887 , const MethodInfo*))Array_InternalArray__Insert_TisHitInfo_t2887_m46217_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<UnityEngine.SendMouseEvents/HitInfo>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisHitInfo_t2887_m46217_gshared (Array_t * __this, int32_t ___index, HitInfo_t2887  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<UnityEngine.SendMouseEvents/HitInfo>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisHitInfo_t2887_m46219_gshared (Array_t * __this, int32_t ___index, HitInfo_t2887  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisHitInfo_t2887_m46219(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, HitInfo_t2887 , const MethodInfo*))Array_InternalArray__set_Item_TisHitInfo_t2887_m46219_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisHitInfo_t2887_m46219_gshared (Array_t * __this, int32_t ___index, HitInfo_t2887  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		HitInfo_t2887  L_6 = ___item;
		HitInfo_t2887  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (HitInfo_t2887 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<UnityEngine.SendMouseEvents/HitInfo>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_138.h"
// System.Array/InternalEnumerator`1<UnityEngine.SendMouseEvents/HitInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_138MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.SendMouseEvents/HitInfo>()
struct Array_t;
struct IEnumerator_1_t7331;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.SendMouseEvents/HitInfo>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.SendMouseEvents/HitInfo>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisHitInfo_t2887_m46220_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisHitInfo_t2887_m46220(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisHitInfo_t2887_m46220_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<UnityEngine.SendMouseEvents/HitInfo>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisHitInfo_t2887_m46220_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6240  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6240 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6240  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
struct BaseInvokableCall_t2905;
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t29_m46221_gshared (Object_t * __this /* static, unused */, Object_t * ___arg, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t29_m46221(__this /* static, unused */, ___arg, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t29_m46221_gshared)(__this /* static, unused */, ___arg, method)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t29_m46221_gshared (Object_t * __this /* static, unused */, Object_t * ___arg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___arg;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		Object_t * L_1 = ___arg;
		if (((Object_t *)IsInst(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003d;
		}
	}
	{
		ObjectU5BU5D_t21* L_2 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		Object_t * L_3 = ___arg;
		NullCheck((Object_t *)L_3);
		Type_t * L_4 = Object_GetType_m2871((Object_t *)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_4;
		ObjectU5BU5D_t21* L_5 = (ObjectU5BU5D_t21*)L_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m12893(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3433, (ObjectU5BU5D_t21*)L_5, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_8 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_8, (String_t*)L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Linq.Expressions.ExpressionVisitor
#include "System_Core_System_Linq_Expressions_ExpressionVisitor.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_5.h"
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_20.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_5MethodDeclarations.h"
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_20MethodDeclarations.h"
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitList<System.Object>(System.Collections.ObjectModel.ReadOnlyCollection`1<T>,System.Action`1<T>)
struct ExpressionVisitor_t3192;
struct ReadOnlyCollection_1_t3233;
struct Action_1_t3237;
// Declaration System.Void System.Linq.Expressions.ExpressionVisitor::VisitList<System.Object>(System.Collections.ObjectModel.ReadOnlyCollection`1<T>,System.Action`1<T>)
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitList<System.Object>(System.Collections.ObjectModel.ReadOnlyCollection`1<T>,System.Action`1<T>)
extern "C" void ExpressionVisitor_VisitList_TisObject_t_m14674_gshared (ExpressionVisitor_t3192 * __this, ReadOnlyCollection_1_t3233 * ___list, Action_1_t3237 * ___visitor, const MethodInfo* method);
#define ExpressionVisitor_VisitList_TisObject_t_m14674(__this, ___list, ___visitor, method) (( void (*) (ExpressionVisitor_t3192 *, ReadOnlyCollection_1_t3233 *, Action_1_t3237 *, const MethodInfo*))ExpressionVisitor_VisitList_TisObject_t_m14674_gshared)(__this, ___list, ___visitor, method)
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitList<System.Object>(System.Collections.ObjectModel.ReadOnlyCollection`1<T>,System.Action`1<T>)
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void ExpressionVisitor_VisitList_TisObject_t_m14674_gshared (ExpressionVisitor_t3192 * __this, ReadOnlyCollection_1_t3233 * ___list, Action_1_t3237 * ___visitor, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ReadOnlyCollection_1_t3233 * L_0 = ___list;
		NullCheck((ReadOnlyCollection_1_t3233 *)L_0);
		Object_t* L_1 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(32 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator() */, (ReadOnlyCollection_1_t3233 *)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000c:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (Object_t*)L_2);
			V_0 = (Object_t *)L_3;
			Action_1_t3237 * L_4 = ___visitor;
			Object_t * L_5 = V_0;
			NullCheck((Action_1_t3237 *)L_4);
			VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<System.Object>::Invoke(!0) */, (Action_1_t3237 *)L_4, (Object_t *)L_5);
		}

IL_001a:
		{
			Object_t* L_6 = V_1;
			NullCheck((Object_t *)L_6);
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_6);
			if (L_7)
			{
				goto IL_000c;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_8 = V_1;
			if (L_8)
			{
				goto IL_002e;
			}
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(42)
		}

IL_002e:
		{
			Object_t* L_9 = V_1;
			NullCheck((Object_t *)L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_9);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0035:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Linq.Expressions.ExpressionPrinter
#include "System_Core_System_Linq_Expressions_ExpressionPrinter.h"
// System.Linq.Expressions.ExpressionPrinter
#include "System_Core_System_Linq_Expressions_ExpressionPrinterMethodDeclarations.h"
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitList<System.Object>(System.Collections.ObjectModel.ReadOnlyCollection`1<T>,System.Action`1<T>)
struct ExpressionPrinter_t3191;
struct ReadOnlyCollection_1_t3233;
struct Action_1_t3237;
// Declaration System.Void System.Linq.Expressions.ExpressionPrinter::VisitList<System.Object>(System.Collections.ObjectModel.ReadOnlyCollection`1<T>,System.Action`1<T>)
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitList<System.Object>(System.Collections.ObjectModel.ReadOnlyCollection`1<T>,System.Action`1<T>)
extern "C" void ExpressionPrinter_VisitList_TisObject_t_m46222_gshared (ExpressionPrinter_t3191 * __this, ReadOnlyCollection_1_t3233 * ___list, Action_1_t3237 * ___visitor, const MethodInfo* method);
#define ExpressionPrinter_VisitList_TisObject_t_m46222(__this, ___list, ___visitor, method) (( void (*) (ExpressionPrinter_t3191 *, ReadOnlyCollection_1_t3233 *, Action_1_t3237 *, const MethodInfo*))ExpressionPrinter_VisitList_TisObject_t_m46222_gshared)(__this, ___list, ___visitor, method)
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitList<System.Object>(System.Collections.ObjectModel.ReadOnlyCollection`1<T>,System.Action`1<T>)
extern "C" void ExpressionPrinter_VisitList_TisObject_t_m46222_gshared (ExpressionPrinter_t3191 * __this, ReadOnlyCollection_1_t3233 * ___list, Action_1_t3237 * ___visitor, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_002a;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		NullCheck((ExpressionPrinter_t3191 *)__this);
		ExpressionPrinter_Print_m14499((ExpressionPrinter_t3191 *)__this, (String_t*)(String_t*) &_stringLiteral251, /*hidden argument*/NULL);
	}

IL_0019:
	{
		Action_1_t3237 * L_1 = ___visitor;
		ReadOnlyCollection_1_t3233 * L_2 = ___list;
		int32_t L_3 = V_0;
		NullCheck((ReadOnlyCollection_1_t3233 *)L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(33 /* !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t3233 *)L_2, (int32_t)L_3);
		NullCheck((Action_1_t3237 *)L_1);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<System.Object>::Invoke(!0) */, (Action_1_t3237 *)L_1, (Object_t *)L_4);
		int32_t L_5 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_6 = V_0;
		ReadOnlyCollection_1_t3233 * L_7 = ___list;
		NullCheck((ReadOnlyCollection_1_t3233 *)L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count() */, (ReadOnlyCollection_1_t3233 *)L_7);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
// System.Func`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Func_3_gen_2.h"
// System.Func`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Func_3_gen_2MethodDeclarations.h"
// U System.Linq.Enumerable::Iterate<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
struct Enumerable_t1134;
struct Object_t;
struct IEnumerable_1_t1072;
struct Func_3_t1610;
// Declaration U System.Linq.Enumerable::Iterate<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
// U System.Linq.Enumerable::Iterate<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
extern "C" Object_t * Enumerable_Iterate_TisObject_t_TisObject_t_m46223_gshared (Object_t * __this /* static, unused */, Object_t* ___source, Object_t * ___initValue, Func_3_t1610 * ___selector, const MethodInfo* method);
#define Enumerable_Iterate_TisObject_t_TisObject_t_m46223(__this /* static, unused */, ___source, ___initValue, ___selector, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t*, Object_t *, Func_3_t1610 *, const MethodInfo*))Enumerable_Iterate_TisObject_t_TisObject_t_m46223_gshared)(__this /* static, unused */, ___source, ___initValue, ___selector, method)
// U System.Linq.Enumerable::Iterate<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<T>,U,System.Func`3<T,U,U>)
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerable_Iterate_TisObject_t_TisObject_t_m46223_gshared (Object_t * __this /* static, unused */, Object_t* ___source, Object_t * ___initValue, Func_3_t1610 * ___selector, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		Object_t* L_0 = ___source;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (Object_t*)L_0);
		V_2 = (Object_t*)L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000e:
		{
			Object_t* L_2 = V_2;
			NullCheck((Object_t*)L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (Object_t*)L_2);
			V_1 = (Object_t *)L_3;
			Func_3_t1610 * L_4 = ___selector;
			Object_t * L_5 = V_1;
			Object_t * L_6 = ___initValue;
			NullCheck((Func_3_t1610 *)L_4);
			Object_t * L_7 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, Object_t * >::Invoke(11 /* TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2) */, (Func_3_t1610 *)L_4, (Object_t *)L_5, (Object_t *)L_6);
			___initValue = (Object_t *)L_7;
			V_0 = (bool)0;
		}

IL_0021:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t *)L_8);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_8);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			Object_t* L_10 = V_2;
			if (L_10)
			{
				goto IL_0035;
			}
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(49)
		}

IL_0035:
		{
			Object_t* L_11 = V_2;
			NullCheck((Object_t *)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_11);
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_003c:
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		InvalidOperationException_t1086 * L_13 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11581(L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0048:
	{
		Object_t * L_14 = ___initValue;
		return L_14;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32)
extern "C" KeyValuePair_2_t6316  Array_InternalArray__get_Item_TisKeyValuePair_2_t6316_m46225_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t6316_m46225(__this, ___index, method) (( KeyValuePair_2_t6316  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t6316_m46225_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t6316  Array_InternalArray__get_Item_TisKeyValuePair_2_t6316_m46225_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t6316  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (KeyValuePair_2_t6316 *)(&V_0));
		KeyValuePair_2_t6316  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6316_m46226_gshared (Array_t * __this, KeyValuePair_2_t6316  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6316_m46226(__this, ___item, method) (( void (*) (Array_t *, KeyValuePair_2_t6316 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6316_m46226_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t6316_m46226_gshared (Array_t * __this, KeyValuePair_2_t6316  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6316_m46227_gshared (Array_t * __this, KeyValuePair_2_t6316  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6316_m46227(__this, ___item, method) (( bool (*) (Array_t *, KeyValuePair_2_t6316 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6316_m46227_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t6316_m46227_gshared (Array_t * __this, KeyValuePair_2_t6316  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t6316  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (KeyValuePair_2_t6316 *)(&V_2));
		KeyValuePair_2_t6316  L_5 = ___item;
		KeyValuePair_2_t6316  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		KeyValuePair_2_t6316  L_8 = V_2;
		KeyValuePair_2_t6316  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		KeyValuePair_2_t6316  L_11 = V_2;
		KeyValuePair_2_t6316  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T[],System.Int32)
struct Array_t;
struct KeyValuePair_2U5BU5D_t7208;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6316_m46228_gshared (Array_t * __this, KeyValuePair_2U5BU5D_t7208* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6316_m46228(__this, ___array, ___index, method) (( void (*) (Array_t *, KeyValuePair_2U5BU5D_t7208*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6316_m46228_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t6316_m46228_gshared (Array_t * __this, KeyValuePair_2U5BU5D_t7208* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		KeyValuePair_2U5BU5D_t7208* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7208* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7208* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		KeyValuePair_2U5BU5D_t7208* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t7208* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6316_m46229_gshared (Array_t * __this, KeyValuePair_2_t6316  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6316_m46229(__this, ___item, method) (( bool (*) (Array_t *, KeyValuePair_2_t6316 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6316_m46229_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t6316_m46229_gshared (Array_t * __this, KeyValuePair_2_t6316  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_t6316_m46230_gshared (Array_t * __this, KeyValuePair_2_t6316  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisKeyValuePair_2_t6316_m46230(__this, ___item, method) (( int32_t (*) (Array_t *, KeyValuePair_2_t6316 , const MethodInfo*))Array_InternalArray__IndexOf_TisKeyValuePair_2_t6316_m46230_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_t6316_m46230_gshared (Array_t * __this, KeyValuePair_2_t6316  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t6316  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (KeyValuePair_2_t6316 *)(&V_2));
		KeyValuePair_2_t6316  L_5 = ___item;
		KeyValuePair_2_t6316  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		KeyValuePair_2_t6316  L_8 = V_2;
		KeyValuePair_2_t6316  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		KeyValuePair_2_t6316  L_14 = ___item;
		KeyValuePair_2_t6316  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisKeyValuePair_2_t6316_m46231_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6316  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisKeyValuePair_2_t6316_m46231(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, KeyValuePair_2_t6316 , const MethodInfo*))Array_InternalArray__Insert_TisKeyValuePair_2_t6316_m46231_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisKeyValuePair_2_t6316_m46231_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6316  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisKeyValuePair_2_t6316_m46233_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6316  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisKeyValuePair_2_t6316_m46233(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, KeyValuePair_2_t6316 , const MethodInfo*))Array_InternalArray__set_Item_TisKeyValuePair_2_t6316_m46233_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisKeyValuePair_2_t6316_m46233_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t6316  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		KeyValuePair_2_t6316  L_6 = ___item;
		KeyValuePair_2_t6316  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (KeyValuePair_2_t6316 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_141.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_141MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>()
struct Array_t;
struct IEnumerator_1_t7209;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6316_m46234_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6316_m46234(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6316_m46234_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t6316_m46234_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6317  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6317 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6317  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.TimeZoneInfo/TimeType>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.TimeZoneInfo/TimeType>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.TimeZoneInfo/TimeType>(System.Int32)
// T System.Array::InternalArray__get_Item<System.TimeZoneInfo/TimeType>(System.Int32)
extern "C" TimeType_t3222  Array_InternalArray__get_Item_TisTimeType_t3222_m46236_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTimeType_t3222_m46236(__this, ___index, method) (( TimeType_t3222  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTimeType_t3222_m46236_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.TimeZoneInfo/TimeType>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" TimeType_t3222  Array_InternalArray__get_Item_TisTimeType_t3222_m46236_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	TimeType_t3222  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (TimeType_t3222 *)(&V_0));
		TimeType_t3222  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.TimeZoneInfo/TimeType>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.TimeZoneInfo/TimeType>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.TimeZoneInfo/TimeType>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.TimeZoneInfo/TimeType>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisTimeType_t3222_m46237_gshared (Array_t * __this, TimeType_t3222  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisTimeType_t3222_m46237(__this, ___item, method) (( void (*) (Array_t *, TimeType_t3222 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisTimeType_t3222_m46237_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.TimeZoneInfo/TimeType>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisTimeType_t3222_m46237_gshared (Array_t * __this, TimeType_t3222  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeZoneInfo/TimeType>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeZoneInfo/TimeType>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeZoneInfo/TimeType>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisTimeType_t3222_m46238_gshared (Array_t * __this, TimeType_t3222  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisTimeType_t3222_m46238(__this, ___item, method) (( bool (*) (Array_t *, TimeType_t3222 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisTimeType_t3222_m46238_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeZoneInfo/TimeType>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisTimeType_t3222_m46238_gshared (Array_t * __this, TimeType_t3222  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeType_t3222  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (TimeType_t3222 *)(&V_2));
		TimeType_t3222  L_5 = ___item;
		TimeType_t3222  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		TimeType_t3222  L_8 = V_2;
		TimeType_t3222  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		TimeType_t3222  L_11 = V_2;
		TimeType_t3222  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "System.Core_ArrayTypes.h"
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeZoneInfo/TimeType>(T[],System.Int32)
struct Array_t;
struct TimeTypeU5BU5D_t6314;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeZoneInfo/TimeType>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeZoneInfo/TimeType>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTimeType_t3222_m46239_gshared (Array_t * __this, TimeTypeU5BU5D_t6314* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisTimeType_t3222_m46239(__this, ___array, ___index, method) (( void (*) (Array_t *, TimeTypeU5BU5D_t6314*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisTimeType_t3222_m46239_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeZoneInfo/TimeType>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTimeType_t3222_m46239_gshared (Array_t * __this, TimeTypeU5BU5D_t6314* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeTypeU5BU5D_t6314* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		TimeTypeU5BU5D_t6314* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		TimeTypeU5BU5D_t6314* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		TimeTypeU5BU5D_t6314* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		TimeTypeU5BU5D_t6314* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeZoneInfo/TimeType>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeZoneInfo/TimeType>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeZoneInfo/TimeType>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisTimeType_t3222_m46240_gshared (Array_t * __this, TimeType_t3222  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisTimeType_t3222_m46240(__this, ___item, method) (( bool (*) (Array_t *, TimeType_t3222 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisTimeType_t3222_m46240_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeZoneInfo/TimeType>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisTimeType_t3222_m46240_gshared (Array_t * __this, TimeType_t3222  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.TimeZoneInfo/TimeType>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.TimeZoneInfo/TimeType>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.TimeZoneInfo/TimeType>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisTimeType_t3222_m46241_gshared (Array_t * __this, TimeType_t3222  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisTimeType_t3222_m46241(__this, ___item, method) (( int32_t (*) (Array_t *, TimeType_t3222 , const MethodInfo*))Array_InternalArray__IndexOf_TisTimeType_t3222_m46241_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.TimeZoneInfo/TimeType>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisTimeType_t3222_m46241_gshared (Array_t * __this, TimeType_t3222  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeType_t3222  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (TimeType_t3222 *)(&V_2));
		TimeType_t3222  L_5 = ___item;
		TimeType_t3222  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		TimeType_t3222  L_8 = V_2;
		TimeType_t3222  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		TimeType_t3222  L_14 = ___item;
		TimeType_t3222  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.TimeZoneInfo/TimeType>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.TimeZoneInfo/TimeType>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.TimeZoneInfo/TimeType>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisTimeType_t3222_m46242_gshared (Array_t * __this, int32_t ___index, TimeType_t3222  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisTimeType_t3222_m46242(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TimeType_t3222 , const MethodInfo*))Array_InternalArray__Insert_TisTimeType_t3222_m46242_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.TimeZoneInfo/TimeType>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisTimeType_t3222_m46242_gshared (Array_t * __this, int32_t ___index, TimeType_t3222  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.TimeZoneInfo/TimeType>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.TimeZoneInfo/TimeType>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.TimeZoneInfo/TimeType>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.TimeZoneInfo/TimeType>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisTimeType_t3222_m46244_gshared (Array_t * __this, int32_t ___index, TimeType_t3222  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisTimeType_t3222_m46244(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TimeType_t3222 , const MethodInfo*))Array_InternalArray__set_Item_TisTimeType_t3222_m46244_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.TimeZoneInfo/TimeType>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisTimeType_t3222_m46244_gshared (Array_t * __this, int32_t ___index, TimeType_t3222  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		TimeType_t3222  L_6 = ___item;
		TimeType_t3222  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (TimeType_t3222 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.TimeZoneInfo/TimeType>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_142.h"
// System.Array/InternalEnumerator`1<System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_142MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeZoneInfo/TimeType>()
struct Array_t;
struct IEnumerator_1_t7210;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeZoneInfo/TimeType>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeZoneInfo/TimeType>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTimeType_t3222_m46245_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisTimeType_t3222_m46245(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisTimeType_t3222_m46245_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeZoneInfo/TimeType>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTimeType_t3222_m46245_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6318  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6318 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6318  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_49.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_108.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_49MethodDeclarations.h"
struct Dictionary_2_t3231;
struct ObjectU5BU5D_t21;
struct Transform_1_t6322;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Int32,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Int32,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t29_TisObject_t_m46246_gshared (Dictionary_2_t3231 * __this, ObjectU5BU5D_t21* p0, int32_t p1, Transform_1_t6322 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt32_t29_TisObject_t_m46246(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3231 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6322 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt32_t29_TisObject_t_m46246_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t3231;
struct Array_t;
struct Transform_1_t6322;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t29_m46247_gshared (Dictionary_2_t3231 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6322 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t29_m46247(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t3231 *, Array_t *, int32_t, Transform_1_t6322 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t29_m46247_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t29_m46247_gshared (Dictionary_2_t3231 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6322 * ___transform, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Exception_t468 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), /*hidden argument*/NULL);
		V_0 = (Type_t *)L_0;
		Array_t * L_1 = ___array;
		NullCheck((Object_t *)L_1);
		Type_t * L_2 = Object_GetType_m2871((Object_t *)L_1, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, (Type_t *)L_2);
		V_1 = (Type_t *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_4 = V_0;
			NullCheck((Type_t *)L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			Type_t * L_6 = V_1;
			NullCheck((Type_t *)L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			Type_t * L_8 = V_1;
			Type_t * L_9 = V_0;
			NullCheck((Type_t *)L_8);
			bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_8, (Type_t *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			Exception_t468 * L_11 = (Exception_t468 *)il2cpp_codegen_object_new (Exception_t468_il2cpp_TypeInfo_var);
			Exception__ctor_m6564(L_11, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			Array_t * L_12 = ___array;
			int32_t L_13 = ___index;
			Transform_1_t6322 * L_14 = ___transform;
			NullCheck((Dictionary_2_t3231 *)__this);
			(( void (*) (Dictionary_2_t3231 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6322 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((Dictionary_2_t3231 *)__this, (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)Castclass(L_12, ObjectU5BU5D_t21_il2cpp_TypeInfo_var)), (int32_t)L_13, (Transform_1_t6322 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		Exception_t468 * L_15 = V_2;
		ArgumentException_t1126 * L_16 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m20816(L_16, (String_t*)(String_t*) &_stringLiteral4527, (String_t*)(String_t*) &_stringLiteral3370, (Exception_t468 *)L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_108MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Int32,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Int32,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t29_TisObject_t_m46246_gshared (Dictionary_2_t3231 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, Transform_1_t6322 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		ObjectU5BU5D_t21* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6322 * L_6 = ___transform;
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		TimeTypeU5BU5D_t6314* L_10 = (TimeTypeU5BU5D_t6314*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6322 *)L_6);
		int32_t L_13 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, TimeType_t3222  >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::Invoke(TKey,TValue) */, (Transform_1_t6322 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (TimeType_t3222 )(*(TimeType_t3222 *)(TimeType_t3222 *)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)) = (Object_t *)((Object_t *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Int32,System.Int32>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t3231;
struct Int32U5BU5D_t119;
struct Transform_1_t6322;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Int32,System.Int32>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Int32,System.Int32>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t29_TisInt32_t29_m46248_gshared (Dictionary_2_t3231 * __this, Int32U5BU5D_t119* ___array, int32_t ___index, Transform_1_t6322 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt32_t29_TisInt32_t29_m46248(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t3231 *, Int32U5BU5D_t119*, int32_t, Transform_1_t6322 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt32_t29_TisInt32_t29_m46248_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Int32,System.Int32>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t29_TisInt32_t29_m46248_gshared (Dictionary_2_t3231 * __this, Int32U5BU5D_t119* ___array, int32_t ___index, Transform_1_t6322 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		Int32U5BU5D_t119* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6322 * L_6 = ___transform;
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		TimeTypeU5BU5D_t6314* L_10 = (TimeTypeU5BU5D_t6314*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6322 *)L_6);
		int32_t L_13 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, TimeType_t3222  >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::Invoke(TKey,TValue) */, (Transform_1_t6322 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (TimeType_t3222 )(*(TimeType_t3222 *)(TimeType_t3222 *)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_5)) = (int32_t)((*(int32_t*)((int32_t*)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_109.h"
struct Dictionary_2_t3231;
struct ObjectU5BU5D_t21;
struct Transform_1_t6325;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.TimeZoneInfo/TimeType,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.TimeZoneInfo/TimeType,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisTimeType_t3222_TisObject_t_m46249_gshared (Dictionary_2_t3231 * __this, ObjectU5BU5D_t21* p0, int32_t p1, Transform_1_t6325 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisTimeType_t3222_TisObject_t_m46249(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3231 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6325 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisTimeType_t3222_TisObject_t_m46249_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.TimeZoneInfo/TimeType>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t3231;
struct Array_t;
struct Transform_1_t6325;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.TimeZoneInfo/TimeType>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.TimeZoneInfo/TimeType>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisTimeType_t3222_m46250_gshared (Dictionary_2_t3231 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6325 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisTimeType_t3222_m46250(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t3231 *, Array_t *, int32_t, Transform_1_t6325 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisTimeType_t3222_m46250_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.TimeZoneInfo/TimeType>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisTimeType_t3222_m46250_gshared (Dictionary_2_t3231 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6325 * ___transform, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Exception_t468 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), /*hidden argument*/NULL);
		V_0 = (Type_t *)L_0;
		Array_t * L_1 = ___array;
		NullCheck((Object_t *)L_1);
		Type_t * L_2 = Object_GetType_m2871((Object_t *)L_1, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, (Type_t *)L_2);
		V_1 = (Type_t *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_4 = V_0;
			NullCheck((Type_t *)L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			Type_t * L_6 = V_1;
			NullCheck((Type_t *)L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			Type_t * L_8 = V_1;
			Type_t * L_9 = V_0;
			NullCheck((Type_t *)L_8);
			bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_8, (Type_t *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			Exception_t468 * L_11 = (Exception_t468 *)il2cpp_codegen_object_new (Exception_t468_il2cpp_TypeInfo_var);
			Exception__ctor_m6564(L_11, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			Array_t * L_12 = ___array;
			int32_t L_13 = ___index;
			Transform_1_t6325 * L_14 = ___transform;
			NullCheck((Dictionary_2_t3231 *)__this);
			(( void (*) (Dictionary_2_t3231 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6325 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((Dictionary_2_t3231 *)__this, (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)Castclass(L_12, ObjectU5BU5D_t21_il2cpp_TypeInfo_var)), (int32_t)L_13, (Transform_1_t6325 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		Exception_t468 * L_15 = V_2;
		ArgumentException_t1126 * L_16 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m20816(L_16, (String_t*)(String_t*) &_stringLiteral4527, (String_t*)(String_t*) &_stringLiteral3370, (Exception_t468 *)L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_109MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.TimeZoneInfo/TimeType,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.TimeZoneInfo/TimeType,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisTimeType_t3222_TisObject_t_m46249_gshared (Dictionary_2_t3231 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, Transform_1_t6325 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		ObjectU5BU5D_t21* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6325 * L_6 = ___transform;
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		TimeTypeU5BU5D_t6314* L_10 = (TimeTypeU5BU5D_t6314*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6325 *)L_6);
		TimeType_t3222  L_13 = (TimeType_t3222 )VirtFuncInvoker2< TimeType_t3222 , int32_t, TimeType_t3222  >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>::Invoke(TKey,TValue) */, (Transform_1_t6325 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (TimeType_t3222 )(*(TimeType_t3222 *)(TimeType_t3222 *)SZArrayLdElema(L_10, L_12)));
		TimeType_t3222  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)) = (Object_t *)((Object_t *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t3231;
struct TimeTypeU5BU5D_t6314;
struct Transform_1_t6325;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisTimeType_t3222_TisTimeType_t3222_m46251_gshared (Dictionary_2_t3231 * __this, TimeTypeU5BU5D_t6314* ___array, int32_t ___index, Transform_1_t6325 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisTimeType_t3222_TisTimeType_t3222_m46251(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t3231 *, TimeTypeU5BU5D_t6314*, int32_t, Transform_1_t6325 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisTimeType_t3222_TisTimeType_t3222_m46251_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisTimeType_t3222_TisTimeType_t3222_m46251_gshared (Dictionary_2_t3231 * __this, TimeTypeU5BU5D_t6314* ___array, int32_t ___index, Transform_1_t6325 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		TimeTypeU5BU5D_t6314* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6325 * L_6 = ___transform;
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		TimeTypeU5BU5D_t6314* L_10 = (TimeTypeU5BU5D_t6314*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6325 *)L_6);
		TimeType_t3222  L_13 = (TimeType_t3222 )VirtFuncInvoker2< TimeType_t3222 , int32_t, TimeType_t3222  >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>::Invoke(TKey,TValue) */, (Transform_1_t6325 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (TimeType_t3222 )(*(TimeType_t3222 *)(TimeType_t3222 *)SZArrayLdElema(L_10, L_12)));
		TimeType_t3222  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((TimeType_t3222 *)(TimeType_t3222 *)SZArrayLdElema(L_3, L_5)) = (TimeType_t3222 )((*(TimeType_t3222 *)((TimeType_t3222 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_110.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_110MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t3231;
struct DictionaryEntryU5BU5D_t7242;
struct Transform_1_t6315;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46252_gshared (Dictionary_2_t3231 * __this, DictionaryEntryU5BU5D_t7242* ___array, int32_t ___index, Transform_1_t6315 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46252(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t3231 *, DictionaryEntryU5BU5D_t7242*, int32_t, Transform_1_t6315 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46252_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m46252_gshared (Dictionary_2_t3231 * __this, DictionaryEntryU5BU5D_t7242* ___array, int32_t ___index, Transform_1_t6315 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		DictionaryEntryU5BU5D_t7242* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6315 * L_6 = ___transform;
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		TimeTypeU5BU5D_t6314* L_10 = (TimeTypeU5BU5D_t6314*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6315 *)L_6);
		DictionaryEntry_t660  L_13 = (DictionaryEntry_t660 )VirtFuncInvoker2< DictionaryEntry_t660 , int32_t, TimeType_t3222  >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>::Invoke(TKey,TValue) */, (Transform_1_t6315 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (TimeType_t3222 )(*(TimeType_t3222 *)(TimeType_t3222 *)SZArrayLdElema(L_10, L_12)));
		DictionaryEntry_t660  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((DictionaryEntry_t660 *)(DictionaryEntry_t660 *)SZArrayLdElema(L_3, L_5)) = (DictionaryEntry_t660 )((*(DictionaryEntry_t660 *)((DictionaryEntry_t660 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_111.h"
struct Dictionary_2_t3231;
struct ObjectU5BU5D_t21;
struct Transform_1_t6326;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6316_TisObject_t_m46253_gshared (Dictionary_2_t3231 * __this, ObjectU5BU5D_t21* p0, int32_t p1, Transform_1_t6326 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6316_TisObject_t_m46253(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3231 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6326 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6316_TisObject_t_m46253_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t3231;
struct Array_t;
struct Transform_1_t6326;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6316_m46254_gshared (Dictionary_2_t3231 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6326 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6316_m46254(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t3231 *, Array_t *, int32_t, Transform_1_t6326 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6316_m46254_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6316_m46254_gshared (Dictionary_2_t3231 * __this, Array_t * ___array, int32_t ___index, Transform_1_t6326 * ___transform, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Exception_t468 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)), /*hidden argument*/NULL);
		V_0 = (Type_t *)L_0;
		Array_t * L_1 = ___array;
		NullCheck((Object_t *)L_1);
		Type_t * L_2 = Object_GetType_m2871((Object_t *)L_1, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, (Type_t *)L_2);
		V_1 = (Type_t *)L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_4 = V_0;
			NullCheck((Type_t *)L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_4);
			if (L_5)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			Type_t * L_6 = V_1;
			NullCheck((Type_t *)L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsPrimitive() */, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0027:
		{
			Type_t * L_8 = V_1;
			Type_t * L_9 = V_0;
			NullCheck((Type_t *)L_8);
			bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_8, (Type_t *)L_9);
			if (L_10)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			Exception_t468 * L_11 = (Exception_t468 *)il2cpp_codegen_object_new (Exception_t468_il2cpp_TypeInfo_var);
			Exception__ctor_m6564(L_11, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_11);
		}

IL_0036:
		{
			Array_t * L_12 = ___array;
			int32_t L_13 = ___index;
			Transform_1_t6326 * L_14 = ___transform;
			NullCheck((Dictionary_2_t3231 *)__this);
			(( void (*) (Dictionary_2_t3231 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t6326 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)((Dictionary_2_t3231 *)__this, (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)Castclass(L_12, ObjectU5BU5D_t21_il2cpp_TypeInfo_var)), (int32_t)L_13, (Transform_1_t6326 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			goto IL_005a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		V_2 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		Exception_t468 * L_15 = V_2;
		ArgumentException_t1126 * L_16 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m20816(L_16, (String_t*)(String_t*) &_stringLiteral4527, (String_t*)(String_t*) &_stringLiteral3370, (Exception_t468 *)L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
		goto IL_005a;
	} // end catch (depth: 1)

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_111MethodDeclarations.h"
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>,System.Object>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6316_TisObject_t_m46253_gshared (Dictionary_2_t3231 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, Transform_1_t6326 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		ObjectU5BU5D_t21* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6326 * L_6 = ___transform;
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		TimeTypeU5BU5D_t6314* L_10 = (TimeTypeU5BU5D_t6314*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6326 *)L_6);
		KeyValuePair_2_t6316  L_13 = (KeyValuePair_2_t6316 )VirtFuncInvoker2< KeyValuePair_2_t6316 , int32_t, TimeType_t3222  >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::Invoke(TKey,TValue) */, (Transform_1_t6326 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (TimeType_t3222 )(*(TimeType_t3222 *)(TimeType_t3222 *)SZArrayLdElema(L_10, L_12)));
		KeyValuePair_2_t6316  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)) = (Object_t *)((Object_t *)Castclass(L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
struct Dictionary_2_t3231;
struct KeyValuePair_2U5BU5D_t7208;
struct Transform_1_t6326;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6316_TisKeyValuePair_2_t6316_m46255_gshared (Dictionary_2_t3231 * __this, KeyValuePair_2U5BU5D_t7208* ___array, int32_t ___index, Transform_1_t6326 * ___transform, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6316_TisKeyValuePair_2_t6316_m46255(__this, ___array, ___index, ___transform, method) (( void (*) (Dictionary_2_t3231 *, KeyValuePair_2U5BU5D_t7208*, int32_t, Transform_1_t6326 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6316_TisKeyValuePair_2_t6316_m46255_gshared)(__this, ___array, ___index, ___transform, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>(TElem[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,TRet>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6316_TisKeyValuePair_2_t6316_m46255_gshared (Dictionary_2_t3231 * __this, KeyValuePair_2U5BU5D_t7208* ___array, int32_t ___index, Transform_1_t6326 * ___transform, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0057;
	}

IL_0004:
	{
		LinkU5BU5D_t4893* L_0 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0053;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7208* L_3 = ___array;
		int32_t L_4 = ___index;
		int32_t L_5 = (int32_t)L_4;
		___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		Transform_1_t6326 * L_6 = ___transform;
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___keySlots_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		TimeTypeU5BU5D_t6314* L_10 = (TimeTypeU5BU5D_t6314*)(__this->___valueSlots_7);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Transform_1_t6326 *)L_6);
		KeyValuePair_2_t6316  L_13 = (KeyValuePair_2_t6316 )VirtFuncInvoker2< KeyValuePair_2_t6316 , int32_t, TimeType_t3222  >::Invoke(11 /* TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::Invoke(TKey,TValue) */, (Transform_1_t6326 *)L_6, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9)), (TimeType_t3222 )(*(TimeType_t3222 *)(TimeType_t3222 *)SZArrayLdElema(L_10, L_12)));
		KeyValuePair_2_t6316  L_14 = L_13;
		Object_t * L_15 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_14);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		*((KeyValuePair_2_t6316 *)(KeyValuePair_2_t6316 *)SZArrayLdElema(L_3, L_5)) = (KeyValuePair_2_t6316 )((*(KeyValuePair_2_t6316 *)((KeyValuePair_2_t6316 *)UnBox (L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))));
	}

IL_0053:
	{
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)(__this->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32)
extern "C" KeyValuePair_2_t3245  Array_InternalArray__get_Item_TisKeyValuePair_2_t3245_m46257_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3245_m46257(__this, ___index, method) (( KeyValuePair_2_t3245  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3245_m46257_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t3245  Array_InternalArray__get_Item_TisKeyValuePair_2_t3245_m46257_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t3245  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (KeyValuePair_2_t3245 *)(&V_0));
		KeyValuePair_2_t3245  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t3245_m46258_gshared (Array_t * __this, KeyValuePair_2_t3245  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t3245_m46258(__this, ___item, method) (( void (*) (Array_t *, KeyValuePair_2_t3245 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t3245_m46258_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t3245_m46258_gshared (Array_t * __this, KeyValuePair_2_t3245  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t3245_m46259_gshared (Array_t * __this, KeyValuePair_2_t3245  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t3245_m46259(__this, ___item, method) (( bool (*) (Array_t *, KeyValuePair_2_t3245 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t3245_m46259_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisKeyValuePair_2_t3245_m46259_gshared (Array_t * __this, KeyValuePair_2_t3245  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t3245  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (KeyValuePair_2_t3245 *)(&V_2));
		KeyValuePair_2_t3245  L_5 = ___item;
		KeyValuePair_2_t3245  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		KeyValuePair_2_t3245  L_8 = V_2;
		KeyValuePair_2_t3245  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		KeyValuePair_2_t3245  L_11 = V_2;
		KeyValuePair_2_t3245  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32)
struct Array_t;
struct KeyValuePair_2U5BU5D_t6330;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t3245_m46260_gshared (Array_t * __this, KeyValuePair_2U5BU5D_t6330* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t3245_m46260(__this, ___array, ___index, method) (( void (*) (Array_t *, KeyValuePair_2U5BU5D_t6330*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t3245_m46260_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisKeyValuePair_2_t3245_m46260_gshared (Array_t * __this, KeyValuePair_2U5BU5D_t6330* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t6330* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t6330* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		KeyValuePair_2U5BU5D_t6330* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t6330* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t3245_m46261_gshared (Array_t * __this, KeyValuePair_2_t3245  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t3245_m46261(__this, ___item, method) (( bool (*) (Array_t *, KeyValuePair_2_t3245 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t3245_m46261_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisKeyValuePair_2_t3245_m46261_gshared (Array_t * __this, KeyValuePair_2_t3245  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_t3245_m46262_gshared (Array_t * __this, KeyValuePair_2_t3245  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisKeyValuePair_2_t3245_m46262(__this, ___item, method) (( int32_t (*) (Array_t *, KeyValuePair_2_t3245 , const MethodInfo*))Array_InternalArray__IndexOf_TisKeyValuePair_2_t3245_m46262_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisKeyValuePair_2_t3245_m46262_gshared (Array_t * __this, KeyValuePair_2_t3245  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_t3245  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (KeyValuePair_2_t3245 *)(&V_2));
		KeyValuePair_2_t3245  L_5 = ___item;
		KeyValuePair_2_t3245  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		KeyValuePair_2_t3245  L_8 = V_2;
		KeyValuePair_2_t3245  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		KeyValuePair_2_t3245  L_14 = ___item;
		KeyValuePair_2_t3245  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisKeyValuePair_2_t3245_m46263_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t3245  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisKeyValuePair_2_t3245_m46263(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, KeyValuePair_2_t3245 , const MethodInfo*))Array_InternalArray__Insert_TisKeyValuePair_2_t3245_m46263_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisKeyValuePair_2_t3245_m46263_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t3245  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisKeyValuePair_2_t3245_m46265_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t3245  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisKeyValuePair_2_t3245_m46265(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, KeyValuePair_2_t3245 , const MethodInfo*))Array_InternalArray__set_Item_TisKeyValuePair_2_t3245_m46265_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisKeyValuePair_2_t3245_m46265_gshared (Array_t * __this, int32_t ___index, KeyValuePair_2_t3245  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		KeyValuePair_2_t3245  L_6 = ___item;
		KeyValuePair_2_t3245  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (KeyValuePair_2_t3245 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_143.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_143MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>()
struct Array_t;
struct IEnumerator_1_t7212;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t3245_m46266_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t3245_m46266(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t3245_m46266_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisKeyValuePair_2_t3245_m46266_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6331  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6331 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6331  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct KeyValuePair_2U5BU5D_t6330;
// Declaration System.Void System.Array::Resize<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[]&,System.Int32,System.Int32)
// System.Void System.Array::Resize<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[]&,System.Int32,System.Int32)
extern "C" void Array_Resize_TisKeyValuePair_2_t3245_m46267_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330** p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define Array_Resize_TisKeyValuePair_2_t3245_m46267(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330**, int32_t, int32_t, const MethodInfo*))Array_Resize_TisKeyValuePair_2_t3245_m46267_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void System.Array::Resize<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[]&,System.Int32)
struct Array_t;
struct KeyValuePair_2U5BU5D_t6330;
// Declaration System.Void System.Array::Resize<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[]&,System.Int32)
// System.Void System.Array::Resize<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[]&,System.Int32)
extern "C" void Array_Resize_TisKeyValuePair_2_t3245_m46268_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330** ___array, int32_t ___newSize, const MethodInfo* method);
#define Array_Resize_TisKeyValuePair_2_t3245_m46268(__this /* static, unused */, ___array, ___newSize, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330**, int32_t, const MethodInfo*))Array_Resize_TisKeyValuePair_2_t3245_m46268_gshared)(__this /* static, unused */, ___array, ___newSize, method)
// System.Void System.Array::Resize<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[]&,System.Int32)
extern "C" void Array_Resize_TisKeyValuePair_2_t3245_m46268_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330** ___array, int32_t ___newSize, const MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t6330** G_B2_0 = {0};
	KeyValuePair_2U5BU5D_t6330** G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	KeyValuePair_2U5BU5D_t6330** G_B3_1 = {0};
	{
		KeyValuePair_2U5BU5D_t6330** L_0 = ___array;
		KeyValuePair_2U5BU5D_t6330** L_1 = ___array;
		G_B1_0 = L_0;
		if ((*((KeyValuePair_2U5BU5D_t6330**)L_1)))
		{
			G_B2_0 = L_0;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000c;
	}

IL_0008:
	{
		KeyValuePair_2U5BU5D_t6330** L_2 = ___array;
		NullCheck((*((KeyValuePair_2U5BU5D_t6330**)L_2)));
		G_B3_0 = (((int32_t)(((Array_t *)(*((KeyValuePair_2U5BU5D_t6330**)L_2)))->max_length)));
		G_B3_1 = G_B2_0;
	}

IL_000c:
	{
		int32_t L_3 = ___newSize;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330**, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t6330**)G_B3_1, (int32_t)G_B3_0, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Resize<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[]&,System.Int32,System.Int32)
// System.Void System.Array::Resize<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[]&,System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_Resize_TisKeyValuePair_2_t3245_m46267_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330** ___array, int32_t ___length, int32_t ___newSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t6330* V_0 = {0};
	{
		int32_t L_0 = ___newSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_1 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11582(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000a:
	{
		KeyValuePair_2U5BU5D_t6330** L_2 = ___array;
		if ((*((KeyValuePair_2U5BU5D_t6330**)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330** L_3 = ___array;
		int32_t L_4 = ___newSize;
		*((Object_t **)(L_3)) = (Object_t *)((KeyValuePair_2U5BU5D_t6330*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_4));
		return;
	}

IL_0017:
	{
		KeyValuePair_2U5BU5D_t6330** L_5 = ___array;
		NullCheck((*((KeyValuePair_2U5BU5D_t6330**)L_5)));
		int32_t L_6 = ___newSize;
		if ((!(((uint32_t)(((int32_t)(((Array_t *)(*((KeyValuePair_2U5BU5D_t6330**)L_5)))->max_length)))) == ((uint32_t)L_6))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		int32_t L_7 = ___newSize;
		V_0 = (KeyValuePair_2U5BU5D_t6330*)((KeyValuePair_2U5BU5D_t6330*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), L_7));
		KeyValuePair_2U5BU5D_t6330** L_8 = ___array;
		KeyValuePair_2U5BU5D_t6330* L_9 = V_0;
		int32_t L_10 = ___newSize;
		int32_t L_11 = ___length;
		int32_t L_12 = Math_Min_m11572(NULL /*static, unused*/, (int32_t)L_10, (int32_t)L_11, /*hidden argument*/NULL);
		Array_Copy_m11497(NULL /*static, unused*/, (Array_t *)(Array_t *)(*((KeyValuePair_2U5BU5D_t6330**)L_8)), (Array_t *)(Array_t *)L_9, (int32_t)L_12, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t6330** L_13 = ___array;
		KeyValuePair_2U5BU5D_t6330* L_14 = V_0;
		*((Object_t **)(L_13)) = (Object_t *)L_14;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_17.h"
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_17MethodDeclarations.h"
// System.Int32 System.Array::IndexOf<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],T,System.Int32,System.Int32)
struct Array_t;
struct KeyValuePair_2U5BU5D_t6330;
// Declaration System.Int32 System.Array::IndexOf<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],T,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],T,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisKeyValuePair_2_t3245_m46269_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* ___array, KeyValuePair_2_t3245  ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method);
#define Array_IndexOf_TisKeyValuePair_2_t3245_m46269(__this /* static, unused */, ___array, ___value, ___startIndex, ___count, method) (( int32_t (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, KeyValuePair_2_t3245 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisKeyValuePair_2_t3245_m46269_gshared)(__this /* static, unused */, ___array, ___value, ___startIndex, ___count, method)
// System.Int32 System.Array::IndexOf<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],T,System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t6336_il2cpp_TypeInfo_var;
extern "C" int32_t Array_IndexOf_TisKeyValuePair_2_t3245_m46269_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* ___array, KeyValuePair_2_t3245  ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		EqualityComparer_1_t6336_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13207);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	EqualityComparer_1_t6336 * V_1 = {0};
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t6330* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = ___startIndex;
		KeyValuePair_2U5BU5D_t6330* L_4 = ___array;
		NullCheck((Array_t *)L_4);
		int32_t L_5 = Array_GetLowerBound_m17642((Array_t *)L_4, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = ___startIndex;
		KeyValuePair_2U5BU5D_t6330* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetUpperBound_m17654((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		int32_t L_9 = ___count;
		if ((((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))) <= ((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9)))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		ArgumentOutOfRangeException_t1123 * L_10 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11582(L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0030:
	{
		int32_t L_11 = ___startIndex;
		int32_t L_12 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12));
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6336_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6336 * L_13 = (( EqualityComparer_1_t6336 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (EqualityComparer_1_t6336 *)L_13;
		int32_t L_14 = ___startIndex;
		V_2 = (int32_t)L_14;
		goto IL_0054;
	}

IL_003e:
	{
		EqualityComparer_1_t6336 * L_15 = V_1;
		KeyValuePair_2U5BU5D_t6330* L_16 = ___array;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		KeyValuePair_2_t3245  L_19 = ___value;
		NullCheck((EqualityComparer_1_t6336 *)L_15);
		bool L_20 = (bool)VirtFuncInvoker2< bool, KeyValuePair_2_t3245 , KeyValuePair_2_t3245  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Equals(T,T) */, (EqualityComparer_1_t6336 *)L_15, (KeyValuePair_2_t3245 )(*(KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_16, L_18)), (KeyValuePair_2_t3245 )L_19);
		if (!L_20)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_21 = V_2;
		return L_21;
	}

IL_0050:
	{
		int32_t L_22 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_003e;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct KeyValuePair_2U5BU5D_t6330;
struct IComparer_1_t7214;
// Declaration System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisKeyValuePair_2_t3245_TisKeyValuePair_2_t3245_m46270_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* p0, KeyValuePair_2U5BU5D_t6330* p1, int32_t p2, int32_t p3, Object_t* p4, const MethodInfo* method);
#define Array_Sort_TisKeyValuePair_2_t3245_TisKeyValuePair_2_t3245_m46270(__this /* static, unused */, p0, p1, p2, p3, p4, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisKeyValuePair_2_t3245_TisKeyValuePair_2_t3245_m46270_gshared)(__this /* static, unused */, p0, p1, p2, p3, p4, method)
// System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
struct Array_t;
struct KeyValuePair_2U5BU5D_t6330;
struct IComparer_1_t7214;
// Declaration System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
// System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern "C" void Array_Sort_TisKeyValuePair_2_t3245_m46271_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* ___array, int32_t ___index, int32_t ___length, Object_t* ___comparer, const MethodInfo* method);
#define Array_Sort_TisKeyValuePair_2_t3245_m46271(__this /* static, unused */, ___array, ___index, ___length, ___comparer, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisKeyValuePair_2_t3245_m46271_gshared)(__this /* static, unused */, ___array, ___index, ___length, ___comparer, method)
// System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisKeyValuePair_2_t3245_m46271_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* ___array, int32_t ___index, int32_t ___length, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		KeyValuePair_2U5BU5D_t6330* L_2 = ___array;
		int32_t L_3 = ___index;
		int32_t L_4 = ___length;
		Object_t* L_5 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t6330*)L_2, (KeyValuePair_2U5BU5D_t6330*)(KeyValuePair_2U5BU5D_t6330*)NULL, (int32_t)L_3, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct Swapper_t3828;
struct KeyValuePair_2U5BU5D_t6330;
// Declaration System.Array/Swapper System.Array::get_swapper<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[])
// System.Array/Swapper System.Array::get_swapper<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[])
extern "C" Swapper_t3828 * Array_get_swapper_TisKeyValuePair_2_t3245_m46272_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* p0, const MethodInfo* method);
#define Array_get_swapper_TisKeyValuePair_2_t3245_m46272(__this /* static, unused */, p0, method) (( Swapper_t3828 * (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, const MethodInfo*))Array_get_swapper_TisKeyValuePair_2_t3245_m46272_gshared)(__this /* static, unused */, p0, method)
struct Array_t;
struct KeyValuePair_2U5BU5D_t6330;
struct IComparer_1_t7214;
// Declaration System.Void System.Array::qsort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::qsort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_qsort_TisKeyValuePair_2_t3245_TisKeyValuePair_2_t3245_m46273_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* p0, KeyValuePair_2U5BU5D_t6330* p1, int32_t p2, int32_t p3, Object_t* p4, const MethodInfo* method);
#define Array_qsort_TisKeyValuePair_2_t3245_TisKeyValuePair_2_t3245_m46273(__this /* static, unused */, p0, p1, p2, p3, p4, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_qsort_TisKeyValuePair_2_t3245_TisKeyValuePair_2_t3245_m46273_gshared)(__this /* static, unused */, p0, p1, p2, p3, p4, method)
// System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
// System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* DoubleU5BU5D_t3153_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisKeyValuePair_2_t3245_TisKeyValuePair_2_t3245_m46270_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* ___keys, KeyValuePair_2U5BU5D_t6330* ___items, int32_t ___index, int32_t ___length, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		DoubleU5BU5D_t3153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6693);
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	Swapper_t3828 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Exception_t468 * V_3 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		KeyValuePair_2U5BU5D_t6330* L_0 = ___keys;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral4408, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_3 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_3, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___length;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_5 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_5, (String_t*)(String_t*) &_stringLiteral2538, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002c:
	{
		KeyValuePair_2U5BU5D_t6330* L_6 = ___keys;
		NullCheck(L_6);
		int32_t L_7 = ___index;
		int32_t L_8 = ___length;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))-(int32_t)L_7))) < ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_9 = ___items;
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_10 = ___index;
		KeyValuePair_2U5BU5D_t6330* L_11 = ___items;
		NullCheck(L_11);
		int32_t L_12 = ___length;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_0045;
		}
	}

IL_003f:
	{
		ArgumentException_t1126 * L_13 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11580(L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0045:
	{
		int32_t L_14 = ___length;
		if ((((int32_t)L_14) > ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_004a:
	{
		Object_t* L_15 = ___comparer;
		if (L_15)
		{
			goto IL_00b0;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_16 = ___items;
		if (L_16)
		{
			goto IL_0055;
		}
	}
	{
		V_0 = (Swapper_t3828 *)NULL;
		goto IL_005c;
	}

IL_0055:
	{
		KeyValuePair_2U5BU5D_t6330* L_17 = ___items;
		Swapper_t3828 * L_18 = (( Swapper_t3828 * (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t6330*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Swapper_t3828 *)L_18;
	}

IL_005c:
	{
		KeyValuePair_2U5BU5D_t6330* L_19 = ___keys;
		if (!((DoubleU5BU5D_t3153*)IsInst(L_19, DoubleU5BU5D_t3153_il2cpp_TypeInfo_var)))
		{
			goto IL_0078;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_20 = ___keys;
		KeyValuePair_2U5BU5D_t6330* L_21 = L_20;
		int32_t L_22 = ___index;
		int32_t L_23 = ___length;
		Swapper_t3828 * L_24 = V_0;
		Array_combsort_m17702(NULL /*static, unused*/, (DoubleU5BU5D_t3153*)((DoubleU5BU5D_t3153*)IsInst(((KeyValuePair_2U5BU5D_t6330*)L_21), DoubleU5BU5D_t3153_il2cpp_TypeInfo_var)), (int32_t)L_22, (int32_t)L_23, (Swapper_t3828 *)L_24, /*hidden argument*/NULL);
		return;
	}

IL_0078:
	{
		KeyValuePair_2U5BU5D_t6330* L_25 = ___keys;
		if (!((Int32U5BU5D_t119*)IsInst(L_25, Int32U5BU5D_t119_il2cpp_TypeInfo_var)))
		{
			goto IL_0094;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_26 = ___keys;
		KeyValuePair_2U5BU5D_t6330* L_27 = L_26;
		int32_t L_28 = ___index;
		int32_t L_29 = ___length;
		Swapper_t3828 * L_30 = V_0;
		Array_combsort_m17703(NULL /*static, unused*/, (Int32U5BU5D_t119*)((Int32U5BU5D_t119*)IsInst(((KeyValuePair_2U5BU5D_t6330*)L_27), Int32U5BU5D_t119_il2cpp_TypeInfo_var)), (int32_t)L_28, (int32_t)L_29, (Swapper_t3828 *)L_30, /*hidden argument*/NULL);
		return;
	}

IL_0094:
	{
		KeyValuePair_2U5BU5D_t6330* L_31 = ___keys;
		if (!((CharU5BU5D_t646*)IsInst(L_31, CharU5BU5D_t646_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_32 = ___keys;
		KeyValuePair_2U5BU5D_t6330* L_33 = L_32;
		int32_t L_34 = ___index;
		int32_t L_35 = ___length;
		Swapper_t3828 * L_36 = V_0;
		Array_combsort_m17704(NULL /*static, unused*/, (CharU5BU5D_t646*)((CharU5BU5D_t646*)IsInst(((KeyValuePair_2U5BU5D_t6330*)L_33), CharU5BU5D_t646_il2cpp_TypeInfo_var)), (int32_t)L_34, (int32_t)L_35, (Swapper_t3828 *)L_36, /*hidden argument*/NULL);
		return;
	}

IL_00b0:
	try
	{ // begin try (depth: 1)
		int32_t L_37 = ___index;
		V_1 = (int32_t)L_37;
		int32_t L_38 = ___index;
		int32_t L_39 = ___length;
		V_2 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_38+(int32_t)L_39))-(int32_t)1));
		KeyValuePair_2U5BU5D_t6330* L_40 = ___keys;
		KeyValuePair_2U5BU5D_t6330* L_41 = ___items;
		int32_t L_42 = V_1;
		int32_t L_43 = V_2;
		Object_t* L_44 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t6330*)L_40, (KeyValuePair_2U5BU5D_t6330*)L_41, (int32_t)L_42, (int32_t)L_43, (Object_t*)L_44, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		goto IL_00d9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00c5;
		throw e;
	}

CATCH_00c5:
	{ // begin catch(System.Exception)
		V_3 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		String_t* L_45 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4409, /*hidden argument*/NULL);
		Exception_t468 * L_46 = V_3;
		InvalidOperationException_t1086 * L_47 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11492(L_47, (String_t*)L_45, (Exception_t468 *)L_46, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_47);
		goto IL_00d9;
	} // end catch (depth: 1)

IL_00d9:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Array/Swapper System.Array::get_swapper<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[])
// System.Array/Swapper System.Array::get_swapper<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[])
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern TypeInfo* Swapper_t3828_il2cpp_TypeInfo_var;
extern TypeInfo* DoubleU5BU5D_t3153_il2cpp_TypeInfo_var;
extern const MethodInfo* Array_int_swapper_m17697_MethodInfo_var;
extern const MethodInfo* Array_double_swapper_m17700_MethodInfo_var;
extern const MethodInfo* Array_slow_swapper_m17699_MethodInfo_var;
extern "C" Swapper_t3828 * Array_get_swapper_TisKeyValuePair_2_t3245_m46272_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* ___array, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		Swapper_t3828_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8172);
		DoubleU5BU5D_t3153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6693);
		Array_int_swapper_m17697_MethodInfo_var = il2cpp_codegen_method_info_from_index(1528);
		Array_double_swapper_m17700_MethodInfo_var = il2cpp_codegen_method_info_from_index(1529);
		Array_slow_swapper_m17699_MethodInfo_var = il2cpp_codegen_method_info_from_index(1531);
		s_Il2CppMethodIntialized = true;
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_0 = ___array;
		if (!((Int32U5BU5D_t119*)IsInst(L_0, Int32U5BU5D_t119_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_1 = ___array;
		IntPtr_t L_2 = { (void*)Array_int_swapper_m17697_MethodInfo_var };
		Swapper_t3828 * L_3 = (Swapper_t3828 *)il2cpp_codegen_object_new (Swapper_t3828_il2cpp_TypeInfo_var);
		Swapper__ctor_m17619(L_3, (Object_t *)(Object_t *)L_1, (IntPtr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		KeyValuePair_2U5BU5D_t6330* L_4 = ___array;
		if (!((DoubleU5BU5D_t3153*)IsInst(L_4, DoubleU5BU5D_t3153_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_5 = ___array;
		IntPtr_t L_6 = { (void*)Array_double_swapper_m17700_MethodInfo_var };
		Swapper_t3828 * L_7 = (Swapper_t3828 *)il2cpp_codegen_object_new (Swapper_t3828_il2cpp_TypeInfo_var);
		Swapper__ctor_m17619(L_7, (Object_t *)(Object_t *)L_5, (IntPtr_t)L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_002a:
	{
		KeyValuePair_2U5BU5D_t6330* L_8 = ___array;
		IntPtr_t L_9 = { (void*)Array_slow_swapper_m17699_MethodInfo_var };
		Swapper_t3828 * L_10 = (Swapper_t3828 *)il2cpp_codegen_object_new (Swapper_t3828_il2cpp_TypeInfo_var);
		Swapper__ctor_m17619(L_10, (Object_t *)(Object_t *)L_8, (IntPtr_t)L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct IComparer_1_t7214;
// Declaration System.Int32 System.Array::compare<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0,!!0,System.Collections.Generic.IComparer`1<!!0>)
// System.Int32 System.Array::compare<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0,!!0,System.Collections.Generic.IComparer`1<!!0>)
extern "C" int32_t Array_compare_TisKeyValuePair_2_t3245_m46274_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t3245  p0, KeyValuePair_2_t3245  p1, Object_t* p2, const MethodInfo* method);
#define Array_compare_TisKeyValuePair_2_t3245_m46274(__this /* static, unused */, p0, p1, p2, method) (( int32_t (*) (Object_t * /* static, unused */, KeyValuePair_2_t3245 , KeyValuePair_2_t3245 , Object_t*, const MethodInfo*))Array_compare_TisKeyValuePair_2_t3245_m46274_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct Array_t;
struct KeyValuePair_2U5BU5D_t6330;
// Declaration System.Void System.Array::swap<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],!!1[],System.Int32,System.Int32)
// System.Void System.Array::swap<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],!!1[],System.Int32,System.Int32)
extern "C" void Array_swap_TisKeyValuePair_2_t3245_TisKeyValuePair_2_t3245_m46275_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* p0, KeyValuePair_2U5BU5D_t6330* p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_swap_TisKeyValuePair_2_t3245_TisKeyValuePair_2_t3245_m46275(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, const MethodInfo*))Array_swap_TisKeyValuePair_2_t3245_TisKeyValuePair_2_t3245_m46275_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Void System.Array::qsort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
// System.Void System.Array::qsort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(K[],V[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<K>)
extern "C" void Array_qsort_TisKeyValuePair_2_t3245_TisKeyValuePair_2_t3245_m46273_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* ___keys, KeyValuePair_2U5BU5D_t6330* ___items, int32_t ___low0, int32_t ___high0, Object_t* ___comparer, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2_t3245  V_3 = {0};
	{
		int32_t L_0 = ___low0;
		int32_t L_1 = ___high0;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = ___low0;
		V_0 = (int32_t)L_2;
		int32_t L_3 = ___high0;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		KeyValuePair_2U5BU5D_t6330* L_7 = ___keys;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_3 = (KeyValuePair_2_t3245 )(*(KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___high0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0035;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_13 = ___keys;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t3245  L_16 = V_3;
		Object_t* L_17 = ___comparer;
		int32_t L_18 = (( int32_t (*) (Object_t * /* static, unused */, KeyValuePair_2_t3245 , KeyValuePair_2_t3245 , Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (KeyValuePair_2_t3245 )(*(KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_13, L_15)), (KeyValuePair_2_t3245 )L_16, (Object_t*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0035:
	{
		goto IL_003b;
	}

IL_0037:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003b:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___low0;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_0051;
		}
	}
	{
		KeyValuePair_2_t3245  L_22 = V_3;
		KeyValuePair_2U5BU5D_t6330* L_23 = ___keys;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		Object_t* L_26 = ___comparer;
		int32_t L_27 = (( int32_t (*) (Object_t * /* static, unused */, KeyValuePair_2_t3245 , KeyValuePair_2_t3245 , Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (KeyValuePair_2_t3245 )L_22, (KeyValuePair_2_t3245 )(*(KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_23, L_25)), (Object_t*)L_26, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}

IL_0051:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0068;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_30 = ___keys;
		KeyValuePair_2U5BU5D_t6330* L_31 = ___items;
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t6330*)L_30, (KeyValuePair_2U5BU5D_t6330*)L_31, (int32_t)L_32, (int32_t)L_33, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_34 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_35-(int32_t)1));
		goto IL_006a;
	}

IL_0068:
	{
		goto IL_006c;
	}

IL_006a:
	{
		goto IL_0019;
	}

IL_006c:
	{
		int32_t L_36 = ___low0;
		int32_t L_37 = V_1;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_007b;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_38 = ___keys;
		KeyValuePair_2U5BU5D_t6330* L_39 = ___items;
		int32_t L_40 = ___low0;
		int32_t L_41 = V_1;
		Object_t* L_42 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t6330*)L_38, (KeyValuePair_2U5BU5D_t6330*)L_39, (int32_t)L_40, (int32_t)L_41, (Object_t*)L_42, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007b:
	{
		int32_t L_43 = V_0;
		int32_t L_44 = ___high0;
		if ((((int32_t)L_43) >= ((int32_t)L_44)))
		{
			goto IL_008a;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_45 = ___keys;
		KeyValuePair_2U5BU5D_t6330* L_46 = ___items;
		int32_t L_47 = V_0;
		int32_t L_48 = ___high0;
		Object_t* L_49 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t6330*)L_45, (KeyValuePair_2U5BU5D_t6330*)L_46, (int32_t)L_47, (int32_t)L_48, (Object_t*)L_49, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_008a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::compare<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T,T,System.Collections.Generic.IComparer`1<T>)
// System.Int32 System.Array::compare<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo* IComparable_t43_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" int32_t Array_compare_TisKeyValuePair_2_t3245_m46274_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t3245  ___value1, KeyValuePair_2_t3245  ___value2, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t* L_0 = ___comparer;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Object_t* L_1 = ___comparer;
		KeyValuePair_2_t3245  L_2 = ___value1;
		KeyValuePair_2_t3245  L_3 = ___value2;
		NullCheck((Object_t*)L_1);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker2< int32_t, KeyValuePair_2_t3245 , KeyValuePair_2_t3245  >::Invoke(0 /* System.Int32 System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Compare(T,T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (Object_t*)L_1, (KeyValuePair_2_t3245 )L_2, (KeyValuePair_2_t3245 )L_3);
		return L_4;
	}

IL_000c:
	{
		KeyValuePair_2_t3245  L_5 = ___value1;
		KeyValuePair_2_t3245  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_6);
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		KeyValuePair_2_t3245  L_8 = ___value2;
		KeyValuePair_2_t3245  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_9);
		if (L_10)
		{
			goto IL_001f;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B6_0 = (-1);
	}

IL_0020:
	{
		return G_B6_0;
	}

IL_0021:
	{
		KeyValuePair_2_t3245  L_11 = ___value2;
		KeyValuePair_2_t3245  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_12);
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		KeyValuePair_2_t3245  L_14 = ___value1;
		KeyValuePair_2_t3245  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_15);
		if (!((Object_t*)IsInst(L_16, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))
		{
			goto IL_004a;
		}
	}
	{
		KeyValuePair_2_t3245  L_17 = ___value1;
		KeyValuePair_2_t3245  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_18);
		KeyValuePair_2_t3245  L_20 = ___value2;
		NullCheck((Object_t*)((Object_t*)Castclass(L_19, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
		int32_t L_21 = (int32_t)InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t3245  >::Invoke(0 /* System.Int32 System.IComparable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CompareTo(T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_19, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), (KeyValuePair_2_t3245 )L_20);
		return L_21;
	}

IL_004a:
	{
		KeyValuePair_2_t3245  L_22 = ___value1;
		KeyValuePair_2_t3245  L_23 = L_22;
		Object_t * L_24 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_23);
		if (!((Object_t *)IsInst(L_24, IComparable_t43_il2cpp_TypeInfo_var)))
		{
			goto IL_006e;
		}
	}
	{
		KeyValuePair_2_t3245  L_25 = ___value1;
		KeyValuePair_2_t3245  L_26 = L_25;
		Object_t * L_27 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_26);
		KeyValuePair_2_t3245  L_28 = ___value2;
		KeyValuePair_2_t3245  L_29 = L_28;
		Object_t * L_30 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), &L_29);
		NullCheck((Object_t *)((Object_t *)Castclass(L_27, IComparable_t43_il2cpp_TypeInfo_var)));
		int32_t L_31 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t43_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_27, IComparable_t43_il2cpp_TypeInfo_var)), (Object_t *)L_30);
		return L_31;
	}

IL_006e:
	{
		String_t* L_32 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4412, /*hidden argument*/NULL);
		V_0 = (String_t*)L_32;
		String_t* L_33 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Format_m2680(NULL /*static, unused*/, (String_t*)L_33, (Object_t *)L_34, /*hidden argument*/NULL);
		InvalidOperationException_t1086 * L_36 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_36, (String_t*)L_35, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_36);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::swap<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(K[],V[],System.Int32,System.Int32)
// System.Void System.Array::swap<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>,System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(K[],V[],System.Int32,System.Int32)
extern "C" void Array_swap_TisKeyValuePair_2_t3245_TisKeyValuePair_2_t3245_m46275_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* ___keys, KeyValuePair_2U5BU5D_t6330* ___items, int32_t ___i, int32_t ___j, const MethodInfo* method)
{
	KeyValuePair_2_t3245  V_0 = {0};
	KeyValuePair_2_t3245  V_1 = {0};
	{
		KeyValuePair_2U5BU5D_t6330* L_0 = ___keys;
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (KeyValuePair_2_t3245 )(*(KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_0, L_2));
		KeyValuePair_2U5BU5D_t6330* L_3 = ___keys;
		int32_t L_4 = ___i;
		KeyValuePair_2U5BU5D_t6330* L_5 = ___keys;
		int32_t L_6 = ___j;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		*((KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_3, L_4)) = (KeyValuePair_2_t3245 )(*(KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_5, L_7));
		KeyValuePair_2U5BU5D_t6330* L_8 = ___keys;
		int32_t L_9 = ___j;
		KeyValuePair_2_t3245  L_10 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_8, L_9)) = (KeyValuePair_2_t3245 )L_10;
		KeyValuePair_2U5BU5D_t6330* L_11 = ___items;
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_12 = ___items;
		int32_t L_13 = ___i;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_1 = (KeyValuePair_2_t3245 )(*(KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_12, L_14));
		KeyValuePair_2U5BU5D_t6330* L_15 = ___items;
		int32_t L_16 = ___i;
		KeyValuePair_2U5BU5D_t6330* L_17 = ___items;
		int32_t L_18 = ___j;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		*((KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_15, L_16)) = (KeyValuePair_2_t3245 )(*(KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_17, L_19));
		KeyValuePair_2U5BU5D_t6330* L_20 = ___items;
		int32_t L_21 = ___j;
		KeyValuePair_2_t3245  L_22 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		*((KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_20, L_21)) = (KeyValuePair_2_t3245 )L_22;
	}

IL_003f:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Comparison_1_gen_111.h"
struct Array_t;
struct KeyValuePair_2U5BU5D_t6330;
struct Comparison_1_t6341;
// Declaration System.Void System.Array::qsort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],System.Int32,System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::qsort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],System.Int32,System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_qsort_TisKeyValuePair_2_t3245_m46276_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* p0, int32_t p1, int32_t p2, Comparison_1_t6341 * p3, const MethodInfo* method);
#define Array_qsort_TisKeyValuePair_2_t3245_m46276(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, Comparison_1_t6341 *, const MethodInfo*))Array_qsort_TisKeyValuePair_2_t3245_m46276_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32,System.Comparison`1<T>)
struct Array_t;
struct KeyValuePair_2U5BU5D_t6330;
struct Comparison_1_t6341;
// Declaration System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32,System.Comparison`1<T>)
// System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32,System.Comparison`1<T>)
extern "C" void Array_Sort_TisKeyValuePair_2_t3245_m46277_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* ___array, int32_t ___length, Comparison_1_t6341 * ___comparison, const MethodInfo* method);
#define Array_Sort_TisKeyValuePair_2_t3245_m46277(__this /* static, unused */, ___array, ___length, ___comparison, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, int32_t, Comparison_1_t6341 *, const MethodInfo*))Array_Sort_TisKeyValuePair_2_t3245_m46277_gshared)(__this /* static, unused */, ___array, ___length, ___comparison, method)
// System.Void System.Array::Sort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32,System.Comparison`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisKeyValuePair_2_t3245_m46277_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* ___array, int32_t ___length, Comparison_1_t6341 * ___comparison, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t468 * V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Comparison_1_t6341 * L_0 = ___comparison;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral4410, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___length;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_3 = ___array;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) > ((int32_t)1)))
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		V_0 = (int32_t)0;
		int32_t L_4 = ___length;
		V_1 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		KeyValuePair_2U5BU5D_t6330* L_5 = ___array;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		Comparison_1_t6341 * L_8 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, Comparison_1_t6341 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t6330*)L_5, (int32_t)L_6, (int32_t)L_7, (Comparison_1_t6341 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Exception)
		V_2 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		String_t* L_9 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4411, /*hidden argument*/NULL);
		Exception_t468 * L_10 = V_2;
		InvalidOperationException_t1086 * L_11 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11492(L_11, (String_t*)L_9, (Exception_t468 *)L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
		goto IL_003e;
	} // end catch (depth: 1)

IL_003e:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Comparison_1_gen_111MethodDeclarations.h"
struct Array_t;
struct KeyValuePair_2U5BU5D_t6330;
// Declaration System.Void System.Array::swap<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],System.Int32,System.Int32)
// System.Void System.Array::swap<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(!!0[],System.Int32,System.Int32)
extern "C" void Array_swap_TisKeyValuePair_2_t3245_m46278_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* p0, int32_t p1, int32_t p2, const MethodInfo* method);
#define Array_swap_TisKeyValuePair_2_t3245_m46278(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, const MethodInfo*))Array_swap_TisKeyValuePair_2_t3245_m46278_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void System.Array::qsort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
// System.Void System.Array::qsort<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32,System.Int32,System.Comparison`1<T>)
extern "C" void Array_qsort_TisKeyValuePair_2_t3245_m46276_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* ___array, int32_t ___low0, int32_t ___high0, Comparison_1_t6341 * ___comparison, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2_t3245  V_3 = {0};
	{
		int32_t L_0 = ___low0;
		int32_t L_1 = ___high0;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = ___low0;
		V_0 = (int32_t)L_2;
		int32_t L_3 = ___high0;
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))/(int32_t)2))));
		KeyValuePair_2U5BU5D_t6330* L_7 = ___array;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_3 = (KeyValuePair_2_t3245 )(*(KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_7, L_9));
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___high0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		Comparison_1_t6341 * L_13 = ___comparison;
		KeyValuePair_2U5BU5D_t6330* L_14 = ___array;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		KeyValuePair_2_t3245  L_17 = V_3;
		NullCheck((Comparison_1_t6341 *)L_13);
		int32_t L_18 = (int32_t)VirtFuncInvoker2< int32_t, KeyValuePair_2_t3245 , KeyValuePair_2_t3245  >::Invoke(11 /* System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Invoke(T,T) */, (Comparison_1_t6341 *)L_13, (KeyValuePair_2_t3245 )(*(KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_14, L_16)), (KeyValuePair_2_t3245 )L_17);
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_0034:
	{
		goto IL_003a;
	}

IL_0036:
	{
		int32_t L_19 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_003a:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___low0;
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_004f;
		}
	}
	{
		Comparison_1_t6341 * L_22 = ___comparison;
		KeyValuePair_2_t3245  L_23 = V_3;
		KeyValuePair_2U5BU5D_t6330* L_24 = ___array;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = L_25;
		NullCheck((Comparison_1_t6341 *)L_22);
		int32_t L_27 = (int32_t)VirtFuncInvoker2< int32_t, KeyValuePair_2_t3245 , KeyValuePair_2_t3245  >::Invoke(11 /* System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Invoke(T,T) */, (Comparison_1_t6341 *)L_22, (KeyValuePair_2_t3245 )L_23, (KeyValuePair_2_t3245 )(*(KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_24, L_26)));
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}

IL_004f:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_0065;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_30 = ___array;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t6330*)L_30, (int32_t)L_31, (int32_t)L_32, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_33 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		int32_t L_34 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_34-(int32_t)1));
		goto IL_0067;
	}

IL_0065:
	{
		goto IL_0069;
	}

IL_0067:
	{
		goto IL_0019;
	}

IL_0069:
	{
		int32_t L_35 = ___low0;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_0076;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_37 = ___array;
		int32_t L_38 = ___low0;
		int32_t L_39 = V_1;
		Comparison_1_t6341 * L_40 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, Comparison_1_t6341 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t6330*)L_37, (int32_t)L_38, (int32_t)L_39, (Comparison_1_t6341 *)L_40, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0076:
	{
		int32_t L_41 = V_0;
		int32_t L_42 = ___high0;
		if ((((int32_t)L_41) >= ((int32_t)L_42)))
		{
			goto IL_0083;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6330* L_43 = ___array;
		int32_t L_44 = V_0;
		int32_t L_45 = ___high0;
		Comparison_1_t6341 * L_46 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, KeyValuePair_2U5BU5D_t6330*, int32_t, int32_t, Comparison_1_t6341 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (KeyValuePair_2U5BU5D_t6330*)L_43, (int32_t)L_44, (int32_t)L_45, (Comparison_1_t6341 *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0083:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::swap<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32,System.Int32)
// System.Void System.Array::swap<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>(T[],System.Int32,System.Int32)
extern "C" void Array_swap_TisKeyValuePair_2_t3245_m46278_gshared (Object_t * __this /* static, unused */, KeyValuePair_2U5BU5D_t6330* ___array, int32_t ___i, int32_t ___j, const MethodInfo* method)
{
	KeyValuePair_2_t3245  V_0 = {0};
	{
		KeyValuePair_2U5BU5D_t6330* L_0 = ___array;
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (KeyValuePair_2_t3245 )(*(KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_0, L_2));
		KeyValuePair_2U5BU5D_t6330* L_3 = ___array;
		int32_t L_4 = ___i;
		KeyValuePair_2U5BU5D_t6330* L_5 = ___array;
		int32_t L_6 = ___j;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		*((KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_3, L_4)) = (KeyValuePair_2_t3245 )(*(KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_5, L_7));
		KeyValuePair_2U5BU5D_t6330* L_8 = ___array;
		int32_t L_9 = ___j;
		KeyValuePair_2_t3245  L_10 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((KeyValuePair_2_t3245 *)(KeyValuePair_2_t3245 *)SZArrayLdElema(L_8, L_9)) = (KeyValuePair_2_t3245 )L_10;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatus
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_5.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
extern "C" X509ChainStatus_t3667  Array_InternalArray__get_Item_TisX509ChainStatus_t3667_m46280_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisX509ChainStatus_t3667_m46280(__this, ___index, method) (( X509ChainStatus_t3667  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisX509ChainStatus_t3667_m46280_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" X509ChainStatus_t3667  Array_InternalArray__get_Item_TisX509ChainStatus_t3667_m46280_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	X509ChainStatus_t3667  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (X509ChainStatus_t3667 *)(&V_0));
		X509ChainStatus_t3667  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisX509ChainStatus_t3667_m46281_gshared (Array_t * __this, X509ChainStatus_t3667  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisX509ChainStatus_t3667_m46281(__this, ___item, method) (( void (*) (Array_t *, X509ChainStatus_t3667 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisX509ChainStatus_t3667_m46281_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisX509ChainStatus_t3667_m46281_gshared (Array_t * __this, X509ChainStatus_t3667  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisX509ChainStatus_t3667_m46282_gshared (Array_t * __this, X509ChainStatus_t3667  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisX509ChainStatus_t3667_m46282(__this, ___item, method) (( bool (*) (Array_t *, X509ChainStatus_t3667 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisX509ChainStatus_t3667_m46282_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisX509ChainStatus_t3667_m46282_gshared (Array_t * __this, X509ChainStatus_t3667  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	X509ChainStatus_t3667  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (X509ChainStatus_t3667 *)(&V_2));
		X509ChainStatus_t3667  L_5 = ___item;
		X509ChainStatus_t3667  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		X509ChainStatus_t3667  L_8 = V_2;
		X509ChainStatus_t3667  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		X509ChainStatus_t3667  L_11 = V_2;
		X509ChainStatus_t3667  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "System_ArrayTypes.h"
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T[],System.Int32)
struct Array_t;
struct X509ChainStatusU5BU5D_t3666;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisX509ChainStatus_t3667_m46283_gshared (Array_t * __this, X509ChainStatusU5BU5D_t3666* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisX509ChainStatus_t3667_m46283(__this, ___array, ___index, method) (( void (*) (Array_t *, X509ChainStatusU5BU5D_t3666*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisX509ChainStatus_t3667_m46283_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisX509ChainStatus_t3667_m46283_gshared (Array_t * __this, X509ChainStatusU5BU5D_t3666* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		X509ChainStatusU5BU5D_t3666* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		X509ChainStatusU5BU5D_t3666* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		X509ChainStatusU5BU5D_t3666* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		X509ChainStatusU5BU5D_t3666* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		X509ChainStatusU5BU5D_t3666* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisX509ChainStatus_t3667_m46284_gshared (Array_t * __this, X509ChainStatus_t3667  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisX509ChainStatus_t3667_m46284(__this, ___item, method) (( bool (*) (Array_t *, X509ChainStatus_t3667 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisX509ChainStatus_t3667_m46284_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisX509ChainStatus_t3667_m46284_gshared (Array_t * __this, X509ChainStatus_t3667  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisX509ChainStatus_t3667_m46285_gshared (Array_t * __this, X509ChainStatus_t3667  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisX509ChainStatus_t3667_m46285(__this, ___item, method) (( int32_t (*) (Array_t *, X509ChainStatus_t3667 , const MethodInfo*))Array_InternalArray__IndexOf_TisX509ChainStatus_t3667_m46285_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Security.Cryptography.X509Certificates.X509ChainStatus>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisX509ChainStatus_t3667_m46285_gshared (Array_t * __this, X509ChainStatus_t3667  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	X509ChainStatus_t3667  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (X509ChainStatus_t3667 *)(&V_2));
		X509ChainStatus_t3667  L_5 = ___item;
		X509ChainStatus_t3667  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		X509ChainStatus_t3667  L_8 = V_2;
		X509ChainStatus_t3667  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		X509ChainStatus_t3667  L_14 = ___item;
		X509ChainStatus_t3667  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisX509ChainStatus_t3667_m46286_gshared (Array_t * __this, int32_t ___index, X509ChainStatus_t3667  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisX509ChainStatus_t3667_m46286(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, X509ChainStatus_t3667 , const MethodInfo*))Array_InternalArray__Insert_TisX509ChainStatus_t3667_m46286_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisX509ChainStatus_t3667_m46286_gshared (Array_t * __this, int32_t ___index, X509ChainStatus_t3667  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisX509ChainStatus_t3667_m46288_gshared (Array_t * __this, int32_t ___index, X509ChainStatus_t3667  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisX509ChainStatus_t3667_m46288(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, X509ChainStatus_t3667 , const MethodInfo*))Array_InternalArray__set_Item_TisX509ChainStatus_t3667_m46288_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisX509ChainStatus_t3667_m46288_gshared (Array_t * __this, int32_t ___index, X509ChainStatus_t3667  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		X509ChainStatus_t3667  L_6 = ___item;
		X509ChainStatus_t3667  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (X509ChainStatus_t3667 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_144.h"
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_144MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Cryptography.X509Certificates.X509ChainStatus>()
struct Array_t;
struct IEnumerator_1_t7332;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Cryptography.X509Certificates.X509ChainStatus>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Cryptography.X509Certificates.X509ChainStatus>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisX509ChainStatus_t3667_m46289_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisX509ChainStatus_t3667_m46289(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisX509ChainStatus_t3667_m46289_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Security.Cryptography.X509Certificates.X509ChainStatus>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisX509ChainStatus_t3667_m46289_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6347  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6347 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6347  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ArraySegment`1<System.Byte>
#include "mscorlib_System_ArraySegment_1_gen.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.ArraySegment`1<System.Byte>>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.ArraySegment`1<System.Byte>>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.ArraySegment`1<System.Byte>>(System.Int32)
// T System.Array::InternalArray__get_Item<System.ArraySegment`1<System.Byte>>(System.Int32)
extern "C" ArraySegment_1_t6348  Array_InternalArray__get_Item_TisArraySegment_1_t6348_m46291_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisArraySegment_1_t6348_m46291(__this, ___index, method) (( ArraySegment_1_t6348  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisArraySegment_1_t6348_m46291_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.ArraySegment`1<System.Byte>>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" ArraySegment_1_t6348  Array_InternalArray__get_Item_TisArraySegment_1_t6348_m46291_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	ArraySegment_1_t6348  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (ArraySegment_1_t6348 *)(&V_0));
		ArraySegment_1_t6348  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.ArraySegment`1<System.Byte>>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.ArraySegment`1<System.Byte>>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.ArraySegment`1<System.Byte>>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.ArraySegment`1<System.Byte>>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisArraySegment_1_t6348_m46292_gshared (Array_t * __this, ArraySegment_1_t6348  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisArraySegment_1_t6348_m46292(__this, ___item, method) (( void (*) (Array_t *, ArraySegment_1_t6348 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisArraySegment_1_t6348_m46292_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.ArraySegment`1<System.Byte>>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisArraySegment_1_t6348_m46292_gshared (Array_t * __this, ArraySegment_1_t6348  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.ArraySegment`1<System.Byte>>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.ArraySegment`1<System.Byte>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.ArraySegment`1<System.Byte>>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisArraySegment_1_t6348_m46293_gshared (Array_t * __this, ArraySegment_1_t6348  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisArraySegment_1_t6348_m46293(__this, ___item, method) (( bool (*) (Array_t *, ArraySegment_1_t6348 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisArraySegment_1_t6348_m46293_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.ArraySegment`1<System.Byte>>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisArraySegment_1_t6348_m46293_gshared (Array_t * __this, ArraySegment_1_t6348  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ArraySegment_1_t6348  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (ArraySegment_1_t6348 *)(&V_2));
		ArraySegment_1_t6348  L_5 = ___item;
		ArraySegment_1_t6348  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		ArraySegment_1_t6348  L_8 = V_2;
		ArraySegment_1_t6348  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		ArraySegment_1_t6348  L_11 = V_2;
		ArraySegment_1_t6348  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.ArraySegment`1<System.Byte>>(T[],System.Int32)
struct Array_t;
struct ArraySegment_1U5BU5D_t7273;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.ArraySegment`1<System.Byte>>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.ArraySegment`1<System.Byte>>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisArraySegment_1_t6348_m46294_gshared (Array_t * __this, ArraySegment_1U5BU5D_t7273* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisArraySegment_1_t6348_m46294(__this, ___array, ___index, method) (( void (*) (Array_t *, ArraySegment_1U5BU5D_t7273*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisArraySegment_1_t6348_m46294_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.ArraySegment`1<System.Byte>>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisArraySegment_1_t6348_m46294_gshared (Array_t * __this, ArraySegment_1U5BU5D_t7273* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArraySegment_1U5BU5D_t7273* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		ArraySegment_1U5BU5D_t7273* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		ArraySegment_1U5BU5D_t7273* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		ArraySegment_1U5BU5D_t7273* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		ArraySegment_1U5BU5D_t7273* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.ArraySegment`1<System.Byte>>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.ArraySegment`1<System.Byte>>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.ArraySegment`1<System.Byte>>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisArraySegment_1_t6348_m46295_gshared (Array_t * __this, ArraySegment_1_t6348  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisArraySegment_1_t6348_m46295(__this, ___item, method) (( bool (*) (Array_t *, ArraySegment_1_t6348 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisArraySegment_1_t6348_m46295_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.ArraySegment`1<System.Byte>>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisArraySegment_1_t6348_m46295_gshared (Array_t * __this, ArraySegment_1_t6348  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.ArraySegment`1<System.Byte>>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.ArraySegment`1<System.Byte>>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.ArraySegment`1<System.Byte>>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisArraySegment_1_t6348_m46296_gshared (Array_t * __this, ArraySegment_1_t6348  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisArraySegment_1_t6348_m46296(__this, ___item, method) (( int32_t (*) (Array_t *, ArraySegment_1_t6348 , const MethodInfo*))Array_InternalArray__IndexOf_TisArraySegment_1_t6348_m46296_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.ArraySegment`1<System.Byte>>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisArraySegment_1_t6348_m46296_gshared (Array_t * __this, ArraySegment_1_t6348  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ArraySegment_1_t6348  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (ArraySegment_1_t6348 *)(&V_2));
		ArraySegment_1_t6348  L_5 = ___item;
		ArraySegment_1_t6348  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		ArraySegment_1_t6348  L_8 = V_2;
		ArraySegment_1_t6348  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		ArraySegment_1_t6348  L_14 = ___item;
		ArraySegment_1_t6348  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.ArraySegment`1<System.Byte>>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.ArraySegment`1<System.Byte>>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.ArraySegment`1<System.Byte>>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisArraySegment_1_t6348_m46297_gshared (Array_t * __this, int32_t ___index, ArraySegment_1_t6348  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisArraySegment_1_t6348_m46297(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, ArraySegment_1_t6348 , const MethodInfo*))Array_InternalArray__Insert_TisArraySegment_1_t6348_m46297_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.ArraySegment`1<System.Byte>>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisArraySegment_1_t6348_m46297_gshared (Array_t * __this, int32_t ___index, ArraySegment_1_t6348  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.ArraySegment`1<System.Byte>>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.ArraySegment`1<System.Byte>>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.ArraySegment`1<System.Byte>>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.ArraySegment`1<System.Byte>>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisArraySegment_1_t6348_m46299_gshared (Array_t * __this, int32_t ___index, ArraySegment_1_t6348  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisArraySegment_1_t6348_m46299(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, ArraySegment_1_t6348 , const MethodInfo*))Array_InternalArray__set_Item_TisArraySegment_1_t6348_m46299_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.ArraySegment`1<System.Byte>>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisArraySegment_1_t6348_m46299_gshared (Array_t * __this, int32_t ___index, ArraySegment_1_t6348  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		ArraySegment_1_t6348  L_6 = ___item;
		ArraySegment_1_t6348  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (ArraySegment_1_t6348 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.ArraySegment`1<System.Byte>>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_145.h"
// System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_145MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.ArraySegment`1<System.Byte>>()
struct Array_t;
struct IEnumerator_1_t7333;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.ArraySegment`1<System.Byte>>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.ArraySegment`1<System.Byte>>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisArraySegment_1_t6348_m46300_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisArraySegment_1_t6348_m46300(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisArraySegment_1_t6348_m46300_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.ArraySegment`1<System.Byte>>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisArraySegment_1_t6348_m46300_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6349  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6349 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6349  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct Int32U5BU5D_t119;
// Declaration System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisInt32_t29_m45376_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t119* p0, int32_t p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisInt32_t29_m45376(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t119*, int32_t, int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisInt32_t29_m45376_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Int32 System.Array::IndexOf<System.Int32>(T[],T)
struct Array_t;
struct Int32U5BU5D_t119;
// Declaration System.Int32 System.Array::IndexOf<System.Int32>(T[],T)
// System.Int32 System.Array::IndexOf<System.Int32>(T[],T)
extern "C" int32_t Array_IndexOf_TisInt32_t29_m16796_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t119* ___array, int32_t ___value, const MethodInfo* method);
#define Array_IndexOf_TisInt32_t29_m16796(__this /* static, unused */, ___array, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t119*, int32_t, const MethodInfo*))Array_IndexOf_TisInt32_t29_m16796_gshared)(__this /* static, unused */, ___array, ___value, method)
// System.Int32 System.Array::IndexOf<System.Int32>(T[],T)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" int32_t Array_IndexOf_TisInt32_t29_m16796_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t119* ___array, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		Int32U5BU5D_t119* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Int32U5BU5D_t119* L_2 = ___array;
		int32_t L_3 = ___value;
		Int32U5BU5D_t119* L_4 = ___array;
		NullCheck(L_4);
		int32_t L_5 = (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t119*, int32_t, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (Int32U5BU5D_t119*)L_2, (int32_t)L_3, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_4)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t21;
struct Object_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m21635_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* p0, Object_t * p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisObject_t_m21635(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t *, int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisObject_t_m21635_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Int32 System.Array::IndexOf<System.Object>(T[],T)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Object_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(T[],T)
// System.Int32 System.Array::IndexOf<System.Object>(T[],T)
extern "C" int32_t Array_IndexOf_TisObject_t_m16800_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Object_t * ___value, const MethodInfo* method);
#define Array_IndexOf_TisObject_t_m16800(__this /* static, unused */, ___array, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t *, const MethodInfo*))Array_IndexOf_TisObject_t_m16800_gshared)(__this /* static, unused */, ___array, ___value, method)
// System.Int32 System.Array::IndexOf<System.Object>(T[],T)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" int32_t Array_IndexOf_TisObject_t_m16800_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		Object_t * L_3 = ___value;
		ObjectU5BU5D_t21* L_4 = ___array;
		NullCheck(L_4);
		int32_t L_5 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (Object_t *)L_3, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_4)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct Int32U5BU5D_t119;
struct IComparer_1_t4851;
// Declaration System.Int32 System.Array::BinarySearch<System.Int32>(!!0[],System.Int32,System.Int32,!!0,System.Collections.Generic.IComparer`1<!!0>)
// System.Int32 System.Array::BinarySearch<System.Int32>(!!0[],System.Int32,System.Int32,!!0,System.Collections.Generic.IComparer`1<!!0>)
extern "C" int32_t Array_BinarySearch_TisInt32_t29_m46301_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t119* p0, int32_t p1, int32_t p2, int32_t p3, Object_t* p4, const MethodInfo* method);
#define Array_BinarySearch_TisInt32_t29_m46301(__this /* static, unused */, p0, p1, p2, p3, p4, method) (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t119*, int32_t, int32_t, int32_t, Object_t*, const MethodInfo*))Array_BinarySearch_TisInt32_t29_m46301_gshared)(__this /* static, unused */, p0, p1, p2, p3, p4, method)
// System.Int32 System.Array::BinarySearch<System.Int32>(T[],System.Int32,System.Int32,T)
struct Array_t;
struct Int32U5BU5D_t119;
// Declaration System.Int32 System.Array::BinarySearch<System.Int32>(T[],System.Int32,System.Int32,T)
// System.Int32 System.Array::BinarySearch<System.Int32>(T[],System.Int32,System.Int32,T)
extern "C" int32_t Array_BinarySearch_TisInt32_t29_m16856_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t119* ___array, int32_t ___index, int32_t ___length, int32_t ___value, const MethodInfo* method);
#define Array_BinarySearch_TisInt32_t29_m16856(__this /* static, unused */, ___array, ___index, ___length, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t119*, int32_t, int32_t, int32_t, const MethodInfo*))Array_BinarySearch_TisInt32_t29_m16856_gshared)(__this /* static, unused */, ___array, ___index, ___length, ___value, method)
// System.Int32 System.Array::BinarySearch<System.Int32>(T[],System.Int32,System.Int32,T)
extern "C" int32_t Array_BinarySearch_TisInt32_t29_m16856_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t119* ___array, int32_t ___index, int32_t ___length, int32_t ___value, const MethodInfo* method)
{
	{
		Int32U5BU5D_t119* L_0 = ___array;
		int32_t L_1 = ___index;
		int32_t L_2 = ___length;
		int32_t L_3 = ___value;
		int32_t L_4 = (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t119*, int32_t, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (Int32U5BU5D_t119*)L_0, (int32_t)L_1, (int32_t)L_2, (int32_t)L_3, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0.h"
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0MethodDeclarations.h"
// System.Int32 System.Array::BinarySearch<System.Int32>(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
// System.Int32 System.Array::BinarySearch<System.Int32>(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* Comparer_1_t4957_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" int32_t Array_BinarySearch_TisInt32_t29_m46301_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t119* ___array, int32_t ___index, int32_t ___length, int32_t ___value, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		Comparer_1_t4957_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10750);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t468 * V_4 = {0};
	int32_t V_5 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Int32U5BU5D_t119* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4396, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_4 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_4, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___length;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_6 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_7 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_7, (String_t*)(String_t*) &_stringLiteral2538, (String_t*)L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0040:
	{
		int32_t L_8 = ___index;
		Int32U5BU5D_t119* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = ___length;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_11 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4397, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_12 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_12, (String_t*)L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0058:
	{
		Object_t* L_13 = ___comparer;
		if (L_13)
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t4957_il2cpp_TypeInfo_var);
		Comparer_1_t4957 * L_14 = (( Comparer_1_t4957 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		___comparer = (Object_t*)L_14;
	}

IL_0065:
	{
		int32_t L_15 = ___index;
		V_0 = (int32_t)L_15;
		int32_t L_16 = ___index;
		int32_t L_17 = ___length;
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16+(int32_t)L_17))-(int32_t)1));
		V_2 = (int32_t)0;
	}

IL_006f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009f;
		}

IL_0071:
		{
			int32_t L_18 = V_0;
			int32_t L_19 = V_1;
			int32_t L_20 = V_0;
			V_3 = (int32_t)((int32_t)((int32_t)L_18+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_19-(int32_t)L_20))/(int32_t)2))));
			Object_t* L_21 = ___comparer;
			int32_t L_22 = ___value;
			Int32U5BU5D_t119* L_23 = ___array;
			int32_t L_24 = V_3;
			NullCheck(L_23);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
			int32_t L_25 = L_24;
			NullCheck((Object_t*)L_21);
			int32_t L_26 = (int32_t)InterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IComparer`1<System.Int32>::Compare(T,T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (Object_t*)L_21, (int32_t)L_22, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25)));
			V_2 = (int32_t)L_26;
			int32_t L_27 = V_2;
			if (L_27)
			{
				goto IL_0091;
			}
		}

IL_008c:
		{
			int32_t L_28 = V_3;
			V_5 = (int32_t)L_28;
			goto IL_00be;
		}

IL_0091:
		{
			int32_t L_29 = V_2;
			if ((((int32_t)L_29) >= ((int32_t)0)))
			{
				goto IL_009b;
			}
		}

IL_0095:
		{
			int32_t L_30 = V_3;
			V_1 = (int32_t)((int32_t)((int32_t)L_30-(int32_t)1));
			goto IL_009f;
		}

IL_009b:
		{
			int32_t L_31 = V_3;
			V_0 = (int32_t)((int32_t)((int32_t)L_31+(int32_t)1));
		}

IL_009f:
		{
			int32_t L_32 = V_0;
			int32_t L_33 = V_1;
			if ((((int32_t)L_32) <= ((int32_t)L_33)))
			{
				goto IL_0071;
			}
		}

IL_00a3:
		{
			goto IL_00bb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00a5;
		throw e;
	}

CATCH_00a5:
	{ // begin catch(System.Exception)
		V_4 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		String_t* L_34 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4399, /*hidden argument*/NULL);
		Exception_t468 * L_35 = V_4;
		InvalidOperationException_t1086 * L_36 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11492(L_36, (String_t*)L_34, (Exception_t468 *)L_35, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_36);
		goto IL_00bb;
	} // end catch (depth: 1)

IL_00bb:
	{
		int32_t L_37 = V_0;
		return ((~L_37));
	}

IL_00be:
	{
		int32_t L_38 = V_5;
		return L_38;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Text.RegularExpressions.Mark>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
extern "C" Mark_t3710  Array_InternalArray__get_Item_TisMark_t3710_m46303_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisMark_t3710_m46303(__this, ___index, method) (( Mark_t3710  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisMark_t3710_m46303_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" Mark_t3710  Array_InternalArray__get_Item_TisMark_t3710_m46303_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	Mark_t3710  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (Mark_t3710 *)(&V_0));
		Mark_t3710  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Text.RegularExpressions.Mark>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Text.RegularExpressions.Mark>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Text.RegularExpressions.Mark>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Text.RegularExpressions.Mark>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisMark_t3710_m46304_gshared (Array_t * __this, Mark_t3710  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisMark_t3710_m46304(__this, ___item, method) (( void (*) (Array_t *, Mark_t3710 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisMark_t3710_m46304_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Text.RegularExpressions.Mark>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisMark_t3710_m46304_gshared (Array_t * __this, Mark_t3710  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Text.RegularExpressions.Mark>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Text.RegularExpressions.Mark>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Text.RegularExpressions.Mark>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisMark_t3710_m46305_gshared (Array_t * __this, Mark_t3710  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisMark_t3710_m46305(__this, ___item, method) (( bool (*) (Array_t *, Mark_t3710 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisMark_t3710_m46305_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Text.RegularExpressions.Mark>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisMark_t3710_m46305_gshared (Array_t * __this, Mark_t3710  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Mark_t3710  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Mark_t3710 *)(&V_2));
		Mark_t3710  L_5 = ___item;
		Mark_t3710  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		Mark_t3710  L_8 = V_2;
		Mark_t3710  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		Mark_t3710  L_11 = V_2;
		Mark_t3710  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Text.RegularExpressions.Mark>(T[],System.Int32)
struct Array_t;
struct MarkU5BU5D_t3715;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Text.RegularExpressions.Mark>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Text.RegularExpressions.Mark>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisMark_t3710_m46306_gshared (Array_t * __this, MarkU5BU5D_t3715* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisMark_t3710_m46306(__this, ___array, ___index, method) (( void (*) (Array_t *, MarkU5BU5D_t3715*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisMark_t3710_m46306_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Text.RegularExpressions.Mark>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisMark_t3710_m46306_gshared (Array_t * __this, MarkU5BU5D_t3715* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		MarkU5BU5D_t3715* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		MarkU5BU5D_t3715* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		MarkU5BU5D_t3715* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		MarkU5BU5D_t3715* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		MarkU5BU5D_t3715* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Text.RegularExpressions.Mark>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Text.RegularExpressions.Mark>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Text.RegularExpressions.Mark>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisMark_t3710_m46307_gshared (Array_t * __this, Mark_t3710  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisMark_t3710_m46307(__this, ___item, method) (( bool (*) (Array_t *, Mark_t3710 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisMark_t3710_m46307_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Text.RegularExpressions.Mark>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisMark_t3710_m46307_gshared (Array_t * __this, Mark_t3710  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Text.RegularExpressions.Mark>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Text.RegularExpressions.Mark>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Text.RegularExpressions.Mark>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisMark_t3710_m46308_gshared (Array_t * __this, Mark_t3710  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisMark_t3710_m46308(__this, ___item, method) (( int32_t (*) (Array_t *, Mark_t3710 , const MethodInfo*))Array_InternalArray__IndexOf_TisMark_t3710_m46308_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Text.RegularExpressions.Mark>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisMark_t3710_m46308_gshared (Array_t * __this, Mark_t3710  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Mark_t3710  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Mark_t3710 *)(&V_2));
		Mark_t3710  L_5 = ___item;
		Mark_t3710  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		Mark_t3710  L_8 = V_2;
		Mark_t3710  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		Mark_t3710  L_14 = ___item;
		Mark_t3710  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Text.RegularExpressions.Mark>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Text.RegularExpressions.Mark>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Text.RegularExpressions.Mark>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisMark_t3710_m46309_gshared (Array_t * __this, int32_t ___index, Mark_t3710  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisMark_t3710_m46309(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Mark_t3710 , const MethodInfo*))Array_InternalArray__Insert_TisMark_t3710_m46309_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Text.RegularExpressions.Mark>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisMark_t3710_m46309_gshared (Array_t * __this, int32_t ___index, Mark_t3710  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Text.RegularExpressions.Mark>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Text.RegularExpressions.Mark>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Text.RegularExpressions.Mark>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Text.RegularExpressions.Mark>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisMark_t3710_m46311_gshared (Array_t * __this, int32_t ___index, Mark_t3710  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisMark_t3710_m46311(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Mark_t3710 , const MethodInfo*))Array_InternalArray__set_Item_TisMark_t3710_m46311_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Text.RegularExpressions.Mark>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisMark_t3710_m46311_gshared (Array_t * __this, int32_t ___index, Mark_t3710  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		Mark_t3710  L_6 = ___item;
		Mark_t3710  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (Mark_t3710 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Text.RegularExpressions.Mark>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_148.h"
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_148MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Text.RegularExpressions.Mark>()
struct Array_t;
struct IEnumerator_1_t7334;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Text.RegularExpressions.Mark>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Text.RegularExpressions.Mark>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisMark_t3710_m46312_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisMark_t3710_m46312(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisMark_t3710_m46312_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Text.RegularExpressions.Mark>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisMark_t3710_m46312_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6356  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6356 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6356  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Uri/UriScheme>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
extern "C" UriScheme_t3746  Array_InternalArray__get_Item_TisUriScheme_t3746_m46314_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUriScheme_t3746_m46314(__this, ___index, method) (( UriScheme_t3746  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUriScheme_t3746_m46314_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" UriScheme_t3746  Array_InternalArray__get_Item_TisUriScheme_t3746_m46314_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	UriScheme_t3746  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (UriScheme_t3746 *)(&V_0));
		UriScheme_t3746  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Uri/UriScheme>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Uri/UriScheme>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Uri/UriScheme>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Uri/UriScheme>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisUriScheme_t3746_m46315_gshared (Array_t * __this, UriScheme_t3746  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisUriScheme_t3746_m46315(__this, ___item, method) (( void (*) (Array_t *, UriScheme_t3746 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisUriScheme_t3746_m46315_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Uri/UriScheme>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisUriScheme_t3746_m46315_gshared (Array_t * __this, UriScheme_t3746  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Uri/UriScheme>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Uri/UriScheme>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Uri/UriScheme>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisUriScheme_t3746_m46316_gshared (Array_t * __this, UriScheme_t3746  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisUriScheme_t3746_m46316(__this, ___item, method) (( bool (*) (Array_t *, UriScheme_t3746 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisUriScheme_t3746_m46316_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Uri/UriScheme>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisUriScheme_t3746_m46316_gshared (Array_t * __this, UriScheme_t3746  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UriScheme_t3746  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (UriScheme_t3746 *)(&V_2));
		UriScheme_t3746  L_5 = ___item;
		UriScheme_t3746  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		UriScheme_t3746  L_8 = V_2;
		UriScheme_t3746  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		UriScheme_t3746  L_11 = V_2;
		UriScheme_t3746  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Uri/UriScheme>(T[],System.Int32)
struct Array_t;
struct UriSchemeU5BU5D_t3747;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Uri/UriScheme>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Uri/UriScheme>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisUriScheme_t3746_m46317_gshared (Array_t * __this, UriSchemeU5BU5D_t3747* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisUriScheme_t3746_m46317(__this, ___array, ___index, method) (( void (*) (Array_t *, UriSchemeU5BU5D_t3747*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisUriScheme_t3746_m46317_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Uri/UriScheme>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisUriScheme_t3746_m46317_gshared (Array_t * __this, UriSchemeU5BU5D_t3747* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		UriSchemeU5BU5D_t3747* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		UriSchemeU5BU5D_t3747* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		UriSchemeU5BU5D_t3747* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		UriSchemeU5BU5D_t3747* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		UriSchemeU5BU5D_t3747* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Uri/UriScheme>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Uri/UriScheme>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Uri/UriScheme>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisUriScheme_t3746_m46318_gshared (Array_t * __this, UriScheme_t3746  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisUriScheme_t3746_m46318(__this, ___item, method) (( bool (*) (Array_t *, UriScheme_t3746 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisUriScheme_t3746_m46318_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Uri/UriScheme>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisUriScheme_t3746_m46318_gshared (Array_t * __this, UriScheme_t3746  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Uri/UriScheme>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Uri/UriScheme>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Uri/UriScheme>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisUriScheme_t3746_m46319_gshared (Array_t * __this, UriScheme_t3746  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisUriScheme_t3746_m46319(__this, ___item, method) (( int32_t (*) (Array_t *, UriScheme_t3746 , const MethodInfo*))Array_InternalArray__IndexOf_TisUriScheme_t3746_m46319_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Uri/UriScheme>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisUriScheme_t3746_m46319_gshared (Array_t * __this, UriScheme_t3746  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UriScheme_t3746  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (UriScheme_t3746 *)(&V_2));
		UriScheme_t3746  L_5 = ___item;
		UriScheme_t3746  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		UriScheme_t3746  L_8 = V_2;
		UriScheme_t3746  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		UriScheme_t3746  L_14 = ___item;
		UriScheme_t3746  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Uri/UriScheme>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Uri/UriScheme>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Uri/UriScheme>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisUriScheme_t3746_m46320_gshared (Array_t * __this, int32_t ___index, UriScheme_t3746  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisUriScheme_t3746_m46320(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, UriScheme_t3746 , const MethodInfo*))Array_InternalArray__Insert_TisUriScheme_t3746_m46320_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Uri/UriScheme>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisUriScheme_t3746_m46320_gshared (Array_t * __this, int32_t ___index, UriScheme_t3746  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Uri/UriScheme>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Uri/UriScheme>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Uri/UriScheme>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Uri/UriScheme>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisUriScheme_t3746_m46322_gshared (Array_t * __this, int32_t ___index, UriScheme_t3746  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisUriScheme_t3746_m46322(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, UriScheme_t3746 , const MethodInfo*))Array_InternalArray__set_Item_TisUriScheme_t3746_m46322_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Uri/UriScheme>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisUriScheme_t3746_m46322_gshared (Array_t * __this, int32_t ___index, UriScheme_t3746  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		UriScheme_t3746  L_6 = ___item;
		UriScheme_t3746  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (UriScheme_t3746 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Uri/UriScheme>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_149.h"
// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_149MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Uri/UriScheme>()
struct Array_t;
struct IEnumerator_1_t7335;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Uri/UriScheme>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Uri/UriScheme>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisUriScheme_t3746_m46323_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisUriScheme_t3746_m46323(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisUriScheme_t3746_m46323_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Uri/UriScheme>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisUriScheme_t3746_m46323_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6357  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6357 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6357  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int16
#include "mscorlib_System_Int16.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Int16>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
extern "C" int16_t Array_InternalArray__get_Item_TisInt16_t27_m46325_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt16_t27_m46325(__this, ___index, method) (( int16_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisInt16_t27_m46325_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" int16_t Array_InternalArray__get_Item_TisInt16_t27_m46325_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	int16_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (int16_t*)(&V_0));
		int16_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Int16>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Int16>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Int16>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Int16>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisInt16_t27_m46326_gshared (Array_t * __this, int16_t ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisInt16_t27_m46326(__this, ___item, method) (( void (*) (Array_t *, int16_t, const MethodInfo*))Array_InternalArray__ICollection_Add_TisInt16_t27_m46326_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Int16>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisInt16_t27_m46326_gshared (Array_t * __this, int16_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Int16>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Int16>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Int16>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisInt16_t27_m46327_gshared (Array_t * __this, int16_t ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisInt16_t27_m46327(__this, ___item, method) (( bool (*) (Array_t *, int16_t, const MethodInfo*))Array_InternalArray__ICollection_Contains_TisInt16_t27_m46327_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Int16>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisInt16_t27_m46327_gshared (Array_t * __this, int16_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (int16_t*)(&V_2));
		int16_t L_5 = ___item;
		int16_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		int16_t L_8 = V_2;
		int16_t L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int16_t L_11 = V_2;
		int16_t L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Int16>(T[],System.Int32)
struct Array_t;
struct Int16U5BU5D_t4376;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Int16>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Int16>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisInt16_t27_m46328_gshared (Array_t * __this, Int16U5BU5D_t4376* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisInt16_t27_m46328(__this, ___array, ___index, method) (( void (*) (Array_t *, Int16U5BU5D_t4376*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisInt16_t27_m46328_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Int16>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisInt16_t27_m46328_gshared (Array_t * __this, Int16U5BU5D_t4376* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		Int16U5BU5D_t4376* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Int16U5BU5D_t4376* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		Int16U5BU5D_t4376* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		Int16U5BU5D_t4376* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Int16U5BU5D_t4376* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Int16>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Int16>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Int16>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisInt16_t27_m46329_gshared (Array_t * __this, int16_t ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisInt16_t27_m46329(__this, ___item, method) (( bool (*) (Array_t *, int16_t, const MethodInfo*))Array_InternalArray__ICollection_Remove_TisInt16_t27_m46329_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Int16>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisInt16_t27_m46329_gshared (Array_t * __this, int16_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Int16>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Int16>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Int16>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisInt16_t27_m46330_gshared (Array_t * __this, int16_t ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisInt16_t27_m46330(__this, ___item, method) (( int32_t (*) (Array_t *, int16_t, const MethodInfo*))Array_InternalArray__IndexOf_TisInt16_t27_m46330_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Int16>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisInt16_t27_m46330_gshared (Array_t * __this, int16_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (int16_t*)(&V_2));
		int16_t L_5 = ___item;
		int16_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		int16_t L_8 = V_2;
		int16_t L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		int16_t L_14 = ___item;
		int16_t L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Int16>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Int16>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Int16>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisInt16_t27_m46331_gshared (Array_t * __this, int32_t ___index, int16_t ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisInt16_t27_m46331(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, int16_t, const MethodInfo*))Array_InternalArray__Insert_TisInt16_t27_m46331_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Int16>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisInt16_t27_m46331_gshared (Array_t * __this, int32_t ___index, int16_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Int16>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Int16>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Int16>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Int16>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisInt16_t27_m46333_gshared (Array_t * __this, int32_t ___index, int16_t ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisInt16_t27_m46333(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, int16_t, const MethodInfo*))Array_InternalArray__set_Item_TisInt16_t27_m46333_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Int16>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisInt16_t27_m46333_gshared (Array_t * __this, int32_t ___index, int16_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		int16_t L_6 = ___item;
		int16_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (int16_t*)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Int16>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_151.h"
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_151MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Int16>()
struct Array_t;
struct IEnumerator_1_t7336;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Int16>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Int16>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisInt16_t27_m46334_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisInt16_t27_m46334(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisInt16_t27_m46334_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Int16>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisInt16_t27_m46334_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6359  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6359 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6359  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.SByte
#include "mscorlib_System_SByte.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.SByte>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
// T System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
extern "C" int8_t Array_InternalArray__get_Item_TisSByte_t36_m46336_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSByte_t36_m46336(__this, ___index, method) (( int8_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSByte_t36_m46336_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" int8_t Array_InternalArray__get_Item_TisSByte_t36_m46336_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	int8_t V_0 = 0x0;
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (int8_t*)(&V_0));
		int8_t L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.SByte>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.SByte>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.SByte>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.SByte>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisSByte_t36_m46337_gshared (Array_t * __this, int8_t ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisSByte_t36_m46337(__this, ___item, method) (( void (*) (Array_t *, int8_t, const MethodInfo*))Array_InternalArray__ICollection_Add_TisSByte_t36_m46337_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.SByte>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisSByte_t36_m46337_gshared (Array_t * __this, int8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.SByte>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.SByte>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.SByte>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisSByte_t36_m46338_gshared (Array_t * __this, int8_t ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisSByte_t36_m46338(__this, ___item, method) (( bool (*) (Array_t *, int8_t, const MethodInfo*))Array_InternalArray__ICollection_Contains_TisSByte_t36_m46338_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.SByte>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisSByte_t36_m46338_gshared (Array_t * __this, int8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (int8_t*)(&V_2));
		int8_t L_5 = ___item;
		int8_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		int8_t L_8 = V_2;
		int8_t L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		int8_t L_11 = V_2;
		int8_t L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.SByte>(T[],System.Int32)
struct Array_t;
struct SByteU5BU5D_t4254;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.SByte>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.SByte>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSByte_t36_m46339_gshared (Array_t * __this, SByteU5BU5D_t4254* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisSByte_t36_m46339(__this, ___array, ___index, method) (( void (*) (Array_t *, SByteU5BU5D_t4254*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisSByte_t36_m46339_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.SByte>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSByte_t36_m46339_gshared (Array_t * __this, SByteU5BU5D_t4254* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		SByteU5BU5D_t4254* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		SByteU5BU5D_t4254* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		SByteU5BU5D_t4254* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		SByteU5BU5D_t4254* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		SByteU5BU5D_t4254* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.SByte>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.SByte>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.SByte>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisSByte_t36_m46340_gshared (Array_t * __this, int8_t ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisSByte_t36_m46340(__this, ___item, method) (( bool (*) (Array_t *, int8_t, const MethodInfo*))Array_InternalArray__ICollection_Remove_TisSByte_t36_m46340_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.SByte>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisSByte_t36_m46340_gshared (Array_t * __this, int8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.SByte>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.SByte>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.SByte>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisSByte_t36_m46341_gshared (Array_t * __this, int8_t ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisSByte_t36_m46341(__this, ___item, method) (( int32_t (*) (Array_t *, int8_t, const MethodInfo*))Array_InternalArray__IndexOf_TisSByte_t36_m46341_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.SByte>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisSByte_t36_m46341_gshared (Array_t * __this, int8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (int8_t*)(&V_2));
		int8_t L_5 = ___item;
		int8_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		int8_t L_8 = V_2;
		int8_t L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		int8_t L_14 = ___item;
		int8_t L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.SByte>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.SByte>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.SByte>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisSByte_t36_m46342_gshared (Array_t * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisSByte_t36_m46342(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, int8_t, const MethodInfo*))Array_InternalArray__Insert_TisSByte_t36_m46342_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.SByte>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisSByte_t36_m46342_gshared (Array_t * __this, int32_t ___index, int8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.SByte>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.SByte>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.SByte>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.SByte>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisSByte_t36_m46344_gshared (Array_t * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisSByte_t36_m46344(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, int8_t, const MethodInfo*))Array_InternalArray__set_Item_TisSByte_t36_m46344_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.SByte>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisSByte_t36_m46344_gshared (Array_t * __this, int32_t ___index, int8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		int8_t L_6 = ___item;
		int8_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (int8_t*)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.SByte>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_152.h"
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_152MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.SByte>()
struct Array_t;
struct IEnumerator_1_t7337;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.SByte>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.SByte>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSByte_t36_m46345_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisSByte_t36_m46345(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisSByte_t36_m46345_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.SByte>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSByte_t36_m46345_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6360  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6360 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6360  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t21;
struct IComparer_1_t5634;
// Declaration System.Void System.Array::Sort<System.Object,System.Object>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object,System.Object>(!!0[],!!1[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_TisObject_t_m45241_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* p0, ObjectU5BU5D_t21* p1, int32_t p2, int32_t p3, Object_t* p4, const MethodInfo* method);
#define Array_Sort_TisObject_t_TisObject_t_m45241(__this /* static, unused */, p0, p1, p2, p3, p4, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, ObjectU5BU5D_t21*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisObject_t_TisObject_t_m45241_gshared)(__this /* static, unused */, p0, p1, p2, p3, p4, method)
// System.Void System.Array::Sort<System.Object>(T[])
struct Array_t;
struct ObjectU5BU5D_t21;
// Declaration System.Void System.Array::Sort<System.Object>(T[])
// System.Void System.Array::Sort<System.Object>(T[])
extern "C" void Array_Sort_TisObject_t_m46346_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, const MethodInfo* method);
#define Array_Sort_TisObject_t_m46346(__this /* static, unused */, ___array, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, const MethodInfo*))Array_Sort_TisObject_t_m46346_gshared)(__this /* static, unused */, ___array, method)
// System.Void System.Array::Sort<System.Object>(T[])
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisObject_t_m46346_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		ObjectU5BU5D_t21* L_3 = ___array;
		NullCheck(L_3);
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, ObjectU5BU5D_t21*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (ObjectU5BU5D_t21*)(ObjectU5BU5D_t21*)NULL, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[])
struct Array_t;
struct ObjectU5BU5D_t21;
// Declaration System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[])
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[])
extern "C" void Array_Sort_TisObject_t_TisObject_t_m46347_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___keys, ObjectU5BU5D_t21* ___items, const MethodInfo* method);
#define Array_Sort_TisObject_t_TisObject_t_m46347(__this /* static, unused */, ___keys, ___items, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, ObjectU5BU5D_t21*, const MethodInfo*))Array_Sort_TisObject_t_TisObject_t_m46347_gshared)(__this /* static, unused */, ___keys, ___items, method)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[])
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisObject_t_TisObject_t_m46347_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___keys, ObjectU5BU5D_t21* ___items, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___keys;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral4408, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___keys;
		ObjectU5BU5D_t21* L_3 = ___items;
		ObjectU5BU5D_t21* L_4 = ___keys;
		NullCheck(L_4);
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, ObjectU5BU5D_t21*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (ObjectU5BU5D_t21*)L_3, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_4)->max_length))), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object>(T[],System.Collections.Generic.IComparer`1<T>)
struct Array_t;
struct ObjectU5BU5D_t21;
struct IComparer_1_t5634;
// Declaration System.Void System.Array::Sort<System.Object>(T[],System.Collections.Generic.IComparer`1<T>)
// System.Void System.Array::Sort<System.Object>(T[],System.Collections.Generic.IComparer`1<T>)
extern "C" void Array_Sort_TisObject_t_m46348_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Object_t* ___comparer, const MethodInfo* method);
#define Array_Sort_TisObject_t_m46348(__this /* static, unused */, ___array, ___comparer, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t*, const MethodInfo*))Array_Sort_TisObject_t_m46348_gshared)(__this /* static, unused */, ___array, ___comparer, method)
// System.Void System.Array::Sort<System.Object>(T[],System.Collections.Generic.IComparer`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisObject_t_m46348_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		ObjectU5BU5D_t21* L_3 = ___array;
		NullCheck(L_3);
		Object_t* L_4 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, ObjectU5BU5D_t21*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (ObjectU5BU5D_t21*)(ObjectU5BU5D_t21*)NULL, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
struct Array_t;
struct ObjectU5BU5D_t21;
struct IComparer_1_t5634;
// Declaration System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
extern "C" void Array_Sort_TisObject_t_TisObject_t_m46349_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___keys, ObjectU5BU5D_t21* ___items, Object_t* ___comparer, const MethodInfo* method);
#define Array_Sort_TisObject_t_TisObject_t_m46349(__this /* static, unused */, ___keys, ___items, ___comparer, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, ObjectU5BU5D_t21*, Object_t*, const MethodInfo*))Array_Sort_TisObject_t_TisObject_t_m46349_gshared)(__this /* static, unused */, ___keys, ___items, ___comparer, method)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisObject_t_TisObject_t_m46349_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___keys, ObjectU5BU5D_t21* ___items, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___keys;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral4408, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___keys;
		ObjectU5BU5D_t21* L_3 = ___items;
		ObjectU5BU5D_t21* L_4 = ___keys;
		NullCheck(L_4);
		Object_t* L_5 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, ObjectU5BU5D_t21*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (ObjectU5BU5D_t21*)L_3, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_4)->max_length))), (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32)
struct Array_t;
struct ObjectU5BU5D_t21;
// Declaration System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32)
// System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32)
extern "C" void Array_Sort_TisObject_t_m21636_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, int32_t ___index, int32_t ___length, const MethodInfo* method);
#define Array_Sort_TisObject_t_m21636(__this /* static, unused */, ___array, ___index, ___length, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, int32_t, const MethodInfo*))Array_Sort_TisObject_t_m21636_gshared)(__this /* static, unused */, ___array, ___index, ___length, method)
// System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisObject_t_m21636_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, int32_t ___index, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		int32_t L_3 = ___index;
		int32_t L_4 = ___length;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, ObjectU5BU5D_t21*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (ObjectU5BU5D_t21*)(ObjectU5BU5D_t21*)NULL, (int32_t)L_3, (int32_t)L_4, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Int32,System.Int32)
struct Array_t;
struct ObjectU5BU5D_t21;
// Declaration System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Int32,System.Int32)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Int32,System.Int32)
extern "C" void Array_Sort_TisObject_t_TisObject_t_m46350_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___keys, ObjectU5BU5D_t21* ___items, int32_t ___index, int32_t ___length, const MethodInfo* method);
#define Array_Sort_TisObject_t_TisObject_t_m46350(__this /* static, unused */, ___keys, ___items, ___index, ___length, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, ObjectU5BU5D_t21*, int32_t, int32_t, const MethodInfo*))Array_Sort_TisObject_t_TisObject_t_m46350_gshared)(__this /* static, unused */, ___keys, ___items, ___index, ___length, method)
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Int32,System.Int32)
extern "C" void Array_Sort_TisObject_t_TisObject_t_m46350_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___keys, ObjectU5BU5D_t21* ___items, int32_t ___index, int32_t ___length, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t21* L_0 = ___keys;
		ObjectU5BU5D_t21* L_1 = ___items;
		int32_t L_2 = ___index;
		int32_t L_3 = ___length;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, ObjectU5BU5D_t21*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_0, (ObjectU5BU5D_t21*)L_1, (int32_t)L_2, (int32_t)L_3, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_5.h"
struct Array_t;
struct ObjectU5BU5D_t21;
struct Comparison_1_t4889;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m45281_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* p0, int32_t p1, Comparison_1_t4889 * p2, const MethodInfo* method);
#define Array_Sort_TisObject_t_m45281(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, Comparison_1_t4889 *, const MethodInfo*))Array_Sort_TisObject_t_m45281_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void System.Array::Sort<System.Object>(T[],System.Comparison`1<T>)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Comparison_1_t4889;
// Declaration System.Void System.Array::Sort<System.Object>(T[],System.Comparison`1<T>)
// System.Void System.Array::Sort<System.Object>(T[],System.Comparison`1<T>)
extern "C" void Array_Sort_TisObject_t_m46351_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Comparison_1_t4889 * ___comparison, const MethodInfo* method);
#define Array_Sort_TisObject_t_m46351(__this /* static, unused */, ___array, ___comparison, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Comparison_1_t4889 *, const MethodInfo*))Array_Sort_TisObject_t_m46351_gshared)(__this /* static, unused */, ___array, ___comparison, method)
// System.Void System.Array::Sort<System.Object>(T[],System.Comparison`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Array_Sort_TisObject_t_m46351_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Comparison_1_t4889 * ___comparison, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		ObjectU5BU5D_t21* L_3 = ___array;
		NullCheck(L_3);
		Comparison_1_t4889 * L_4 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, Comparison_1_t4889 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), (Comparison_1_t4889 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
// System.Boolean System.Array::TrueForAll<System.Object>(T[],System.Predicate`1<T>)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Predicate_1_t4882;
// Declaration System.Boolean System.Array::TrueForAll<System.Object>(T[],System.Predicate`1<T>)
// System.Boolean System.Array::TrueForAll<System.Object>(T[],System.Predicate`1<T>)
extern "C" bool Array_TrueForAll_TisObject_t_m46352_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define Array_TrueForAll_TisObject_t_m46352(__this /* static, unused */, ___array, ___match, method) (( bool (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Predicate_1_t4882 *, const MethodInfo*))Array_TrueForAll_TisObject_t_m46352_gshared)(__this /* static, unused */, ___array, ___match, method)
// System.Boolean System.Array::TrueForAll<System.Object>(T[],System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" bool Array_TrueForAll_TisObject_t_m46352_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Predicate_1_t4882 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t21* V_1 = {0};
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Predicate_1_t4882 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral4413, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t21* L_4 = ___array;
		V_1 = (ObjectU5BU5D_t21*)L_4;
		V_2 = (int32_t)0;
		goto IL_0039;
	}

IL_0022:
	{
		ObjectU5BU5D_t21* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		Predicate_1_t4882 * L_8 = ___match;
		Object_t * L_9 = V_0;
		NullCheck((Predicate_1_t4882 *)L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (Predicate_1_t4882 *)L_8, (Object_t *)L_9);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		ObjectU5BU5D_t21* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::ForEach<System.Object>(T[],System.Action`1<T>)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Action_1_t3237;
// Declaration System.Void System.Array::ForEach<System.Object>(T[],System.Action`1<T>)
// System.Void System.Array::ForEach<System.Object>(T[],System.Action`1<T>)
extern "C" void Array_ForEach_TisObject_t_m46353_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Action_1_t3237 * ___action, const MethodInfo* method);
#define Array_ForEach_TisObject_t_m46353(__this /* static, unused */, ___array, ___action, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Action_1_t3237 *, const MethodInfo*))Array_ForEach_TisObject_t_m46353_gshared)(__this /* static, unused */, ___array, ___action, method)
// System.Void System.Array::ForEach<System.Object>(T[],System.Action`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Array_ForEach_TisObject_t_m46353_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Action_1_t3237 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t21* V_1 = {0};
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Action_1_t3237 * L_2 = ___action;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral4414, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t21* L_4 = ___array;
		V_1 = (ObjectU5BU5D_t21*)L_4;
		V_2 = (int32_t)0;
		goto IL_0035;
	}

IL_0022:
	{
		ObjectU5BU5D_t21* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		Action_1_t3237 * L_8 = ___action;
		Object_t * L_9 = V_0;
		NullCheck((Action_1_t3237 *)L_8);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<System.Object>::Invoke(T) */, (Action_1_t3237 *)L_8, (Object_t *)L_9);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		ObjectU5BU5D_t21* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_gen.h"
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_genMethodDeclarations.h"
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Converter_2_t6361;
// Declaration TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
extern "C" ObjectU5BU5D_t21* Array_ConvertAll_TisObject_t_TisObject_t_m46354_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Converter_2_t6361 * ___converter, const MethodInfo* method);
#define Array_ConvertAll_TisObject_t_TisObject_t_m46354(__this /* static, unused */, ___array, ___converter, method) (( ObjectU5BU5D_t21* (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Converter_2_t6361 *, const MethodInfo*))Array_ConvertAll_TisObject_t_TisObject_t_m46354_gshared)(__this /* static, unused */, ___array, ___converter, method)
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t21* Array_ConvertAll_TisObject_t_TisObject_t_m46354_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Converter_2_t6361 * ___converter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Converter_2_t6361 * L_2 = ___converter;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral4415, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t21* L_4 = ___array;
		NullCheck(L_4);
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = (int32_t)0;
		goto IL_0041;
	}

IL_0029:
	{
		ObjectU5BU5D_t21* L_5 = V_0;
		int32_t L_6 = V_1;
		Converter_2_t6361 * L_7 = ___converter;
		ObjectU5BU5D_t21* L_8 = ___array;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		NullCheck((Converter_2_t6361 *)L_7);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(11 /* TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput) */, (Converter_2_t6361 *)L_7, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_8, L_10)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, L_6)) = (Object_t *)L_11;
		int32_t L_12 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_13 = V_1;
		ObjectU5BU5D_t21* L_14 = ___array;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t21* L_15 = V_0;
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t21;
struct Predicate_1_t4882;
// Declaration System.Int32 System.Array::FindLastIndex<System.Object>(!!0[],System.Int32,System.Int32,System.Predicate`1<!!0>)
// System.Int32 System.Array::FindLastIndex<System.Object>(!!0[],System.Int32,System.Int32,System.Predicate`1<!!0>)
extern "C" int32_t Array_FindLastIndex_TisObject_t_m46355_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* p0, int32_t p1, int32_t p2, Predicate_1_t4882 * p3, const MethodInfo* method);
#define Array_FindLastIndex_TisObject_t_m46355(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, int32_t, Predicate_1_t4882 *, const MethodInfo*))Array_FindLastIndex_TisObject_t_m46355_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Predicate`1<T>)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Predicate_1_t4882;
// Declaration System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Predicate`1<T>)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Predicate`1<T>)
extern "C" int32_t Array_FindLastIndex_TisObject_t_m46356_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define Array_FindLastIndex_TisObject_t_m46356(__this /* static, unused */, ___array, ___match, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Predicate_1_t4882 *, const MethodInfo*))Array_FindLastIndex_TisObject_t_m46356_gshared)(__this /* static, unused */, ___array, ___match, method)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" int32_t Array_FindLastIndex_TisObject_t_m46356_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Predicate_1_t4882 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		ObjectU5BU5D_t21* L_3 = ___array;
		NullCheck(L_3);
		Predicate_1_t4882 * L_4 = ___match;
		int32_t L_5 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, int32_t, Predicate_1_t4882 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), (Predicate_1_t4882 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Int32,System.Predicate`1<T>)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Int32,System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" int32_t Array_FindLastIndex_TisObject_t_m46355_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, int32_t ___startIndex, int32_t ___count, Predicate_1_t4882 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Predicate_1_t4882 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral4413, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = ___startIndex;
		ObjectU5BU5D_t21* L_5 = ___array;
		NullCheck(L_5);
		if ((((int32_t)L_4) > ((int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = ___startIndex;
		int32_t L_7 = ___count;
		ObjectU5BU5D_t21* L_8 = ___array;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)((int32_t)L_6+(int32_t)L_7))) <= ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		ArgumentOutOfRangeException_t1123 * L_9 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11582(L_9, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0030:
	{
		int32_t L_10 = ___startIndex;
		int32_t L_11 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_10+(int32_t)L_11))-(int32_t)1));
		goto IL_004d;
	}

IL_0038:
	{
		Predicate_1_t4882 * L_12 = ___match;
		ObjectU5BU5D_t21* L_13 = ___array;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		NullCheck((Predicate_1_t4882 *)L_12);
		bool L_16 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (Predicate_1_t4882 *)L_12, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)));
		if (!L_16)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}

IL_0049:
	{
		int32_t L_18 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_18-(int32_t)1));
	}

IL_004d:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = ___startIndex;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_0038;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Predicate_1_t4882;
// Declaration System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
extern "C" int32_t Array_FindLastIndex_TisObject_t_m46357_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, int32_t ___startIndex, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define Array_FindLastIndex_TisObject_t_m46357(__this /* static, unused */, ___array, ___startIndex, ___match, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, Predicate_1_t4882 *, const MethodInfo*))Array_FindLastIndex_TisObject_t_m46357_gshared)(__this /* static, unused */, ___array, ___startIndex, ___match, method)
// System.Int32 System.Array::FindLastIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" int32_t Array_FindLastIndex_TisObject_t_m46357_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, int32_t ___startIndex, Predicate_1_t4882 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7364(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		int32_t L_3 = ___startIndex;
		ObjectU5BU5D_t21* L_4 = ___array;
		NullCheck(L_4);
		int32_t L_5 = ___startIndex;
		Predicate_1_t4882 * L_6 = ___match;
		int32_t L_7 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, int32_t, Predicate_1_t4882 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (int32_t)L_3, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)L_5)), (Predicate_1_t4882 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t21;
struct Predicate_1_t4882;
// Declaration System.Int32 System.Array::FindIndex<System.Object>(!!0[],System.Int32,System.Int32,System.Predicate`1<!!0>)
// System.Int32 System.Array::FindIndex<System.Object>(!!0[],System.Int32,System.Int32,System.Predicate`1<!!0>)
extern "C" int32_t Array_FindIndex_TisObject_t_m46358_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* p0, int32_t p1, int32_t p2, Predicate_1_t4882 * p3, const MethodInfo* method);
#define Array_FindIndex_TisObject_t_m46358(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, int32_t, Predicate_1_t4882 *, const MethodInfo*))Array_FindIndex_TisObject_t_m46358_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Predicate`1<T>)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Predicate_1_t4882;
// Declaration System.Int32 System.Array::FindIndex<System.Object>(T[],System.Predicate`1<T>)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Predicate`1<T>)
extern "C" int32_t Array_FindIndex_TisObject_t_m46359_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define Array_FindIndex_TisObject_t_m46359(__this /* static, unused */, ___array, ___match, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Predicate_1_t4882 *, const MethodInfo*))Array_FindIndex_TisObject_t_m46359_gshared)(__this /* static, unused */, ___array, ___match, method)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" int32_t Array_FindIndex_TisObject_t_m46359_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Predicate_1_t4882 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		ObjectU5BU5D_t21* L_3 = ___array;
		NullCheck(L_3);
		Predicate_1_t4882 * L_4 = ___match;
		int32_t L_5 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, int32_t, Predicate_1_t4882 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), (Predicate_1_t4882 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Int32,System.Predicate`1<T>)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Int32,System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" int32_t Array_FindIndex_TisObject_t_m46358_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, int32_t ___startIndex, int32_t ___count, Predicate_1_t4882 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Predicate_1_t4882 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral4413, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = ___startIndex;
		ObjectU5BU5D_t21* L_5 = ___array;
		NullCheck(L_5);
		if ((((int32_t)L_4) > ((int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = ___startIndex;
		int32_t L_7 = ___count;
		ObjectU5BU5D_t21* L_8 = ___array;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)((int32_t)L_6+(int32_t)L_7))) <= ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		ArgumentOutOfRangeException_t1123 * L_9 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11582(L_9, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0030:
	{
		int32_t L_10 = ___startIndex;
		V_0 = (int32_t)L_10;
		goto IL_0049;
	}

IL_0034:
	{
		Predicate_1_t4882 * L_11 = ___match;
		ObjectU5BU5D_t21* L_12 = ___array;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck((Predicate_1_t4882 *)L_11);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (Predicate_1_t4882 *)L_11, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14)));
		if (!L_15)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_0045:
	{
		int32_t L_17 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = ___startIndex;
		int32_t L_20 = ___count;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)L_19+(int32_t)L_20)))))
		{
			goto IL_0034;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Predicate_1_t4882;
// Declaration System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
extern "C" int32_t Array_FindIndex_TisObject_t_m46360_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, int32_t ___startIndex, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define Array_FindIndex_TisObject_t_m46360(__this /* static, unused */, ___array, ___startIndex, ___match, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, Predicate_1_t4882 *, const MethodInfo*))Array_FindIndex_TisObject_t_m46360_gshared)(__this /* static, unused */, ___array, ___startIndex, ___match, method)
// System.Int32 System.Array::FindIndex<System.Object>(T[],System.Int32,System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" int32_t Array_FindIndex_TisObject_t_m46360_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, int32_t ___startIndex, Predicate_1_t4882 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		int32_t L_3 = ___startIndex;
		ObjectU5BU5D_t21* L_4 = ___array;
		NullCheck(L_4);
		int32_t L_5 = ___startIndex;
		Predicate_1_t4882 * L_6 = ___match;
		int32_t L_7 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, int32_t, Predicate_1_t4882 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (int32_t)L_3, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)L_5)), (Predicate_1_t4882 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t21;
struct Object_t;
struct IComparer_1_t5634;
// Declaration System.Int32 System.Array::BinarySearch<System.Object>(!!0[],System.Int32,System.Int32,!!0,System.Collections.Generic.IComparer`1<!!0>)
// System.Int32 System.Array::BinarySearch<System.Object>(!!0[],System.Int32,System.Int32,!!0,System.Collections.Generic.IComparer`1<!!0>)
extern "C" int32_t Array_BinarySearch_TisObject_t_m46361_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* p0, int32_t p1, int32_t p2, Object_t * p3, Object_t* p4, const MethodInfo* method);
#define Array_BinarySearch_TisObject_t_m46361(__this /* static, unused */, p0, p1, p2, p3, p4, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, int32_t, Object_t *, Object_t*, const MethodInfo*))Array_BinarySearch_TisObject_t_m46361_gshared)(__this /* static, unused */, p0, p1, p2, p3, p4, method)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Object_t;
// Declaration System.Int32 System.Array::BinarySearch<System.Object>(T[],T)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T)
extern "C" int32_t Array_BinarySearch_TisObject_t_m46362_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Object_t * ___value, const MethodInfo* method);
#define Array_BinarySearch_TisObject_t_m46362(__this /* static, unused */, ___array, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t *, const MethodInfo*))Array_BinarySearch_TisObject_t_m46362_gshared)(__this /* static, unused */, ___array, ___value, method)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" int32_t Array_BinarySearch_TisObject_t_m46362_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		ObjectU5BU5D_t21* L_3 = ___array;
		NullCheck(L_3);
		Object_t * L_4 = ___value;
		int32_t L_5 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, int32_t, Object_t *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), (Object_t *)L_4, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"
// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* Comparer_1_t4883_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" int32_t Array_BinarySearch_TisObject_t_m46361_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		Comparer_1_t4883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10559);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t468 * V_4 = {0};
	int32_t V_5 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4396, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_4 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_4, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___length;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_6 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_7 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_7, (String_t*)(String_t*) &_stringLiteral2538, (String_t*)L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0040:
	{
		int32_t L_8 = ___index;
		ObjectU5BU5D_t21* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = ___length;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_11 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4397, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_12 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_12, (String_t*)L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0058:
	{
		Object_t* L_13 = ___comparer;
		if (L_13)
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t4883_il2cpp_TypeInfo_var);
		Comparer_1_t4883 * L_14 = (( Comparer_1_t4883 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		___comparer = (Object_t*)L_14;
	}

IL_0065:
	{
		int32_t L_15 = ___index;
		V_0 = (int32_t)L_15;
		int32_t L_16 = ___index;
		int32_t L_17 = ___length;
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16+(int32_t)L_17))-(int32_t)1));
		V_2 = (int32_t)0;
	}

IL_006f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009f;
		}

IL_0071:
		{
			int32_t L_18 = V_0;
			int32_t L_19 = V_1;
			int32_t L_20 = V_0;
			V_3 = (int32_t)((int32_t)((int32_t)L_18+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_19-(int32_t)L_20))/(int32_t)2))));
			Object_t* L_21 = ___comparer;
			Object_t * L_22 = ___value;
			ObjectU5BU5D_t21* L_23 = ___array;
			int32_t L_24 = V_3;
			NullCheck(L_23);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
			int32_t L_25 = L_24;
			NullCheck((Object_t*)L_21);
			int32_t L_26 = (int32_t)InterfaceFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(0 /* System.Int32 System.Collections.Generic.IComparer`1<System.Object>::Compare(T,T) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (Object_t*)L_21, (Object_t *)L_22, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_23, L_25)));
			V_2 = (int32_t)L_26;
			int32_t L_27 = V_2;
			if (L_27)
			{
				goto IL_0091;
			}
		}

IL_008c:
		{
			int32_t L_28 = V_3;
			V_5 = (int32_t)L_28;
			goto IL_00be;
		}

IL_0091:
		{
			int32_t L_29 = V_2;
			if ((((int32_t)L_29) >= ((int32_t)0)))
			{
				goto IL_009b;
			}
		}

IL_0095:
		{
			int32_t L_30 = V_3;
			V_1 = (int32_t)((int32_t)((int32_t)L_30-(int32_t)1));
			goto IL_009f;
		}

IL_009b:
		{
			int32_t L_31 = V_3;
			V_0 = (int32_t)((int32_t)((int32_t)L_31+(int32_t)1));
		}

IL_009f:
		{
			int32_t L_32 = V_0;
			int32_t L_33 = V_1;
			if ((((int32_t)L_32) <= ((int32_t)L_33)))
			{
				goto IL_0071;
			}
		}

IL_00a3:
		{
			goto IL_00bb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00a5;
		throw e;
	}

CATCH_00a5:
	{ // begin catch(System.Exception)
		V_4 = (Exception_t468 *)((Exception_t468 *)__exception_local);
		String_t* L_34 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4399, /*hidden argument*/NULL);
		Exception_t468 * L_35 = V_4;
		InvalidOperationException_t1086 * L_36 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11492(L_36, (String_t*)L_34, (Exception_t468 *)L_35, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_36);
		goto IL_00bb;
	} // end catch (depth: 1)

IL_00bb:
	{
		int32_t L_37 = V_0;
		return ((~L_37));
	}

IL_00be:
	{
		int32_t L_38 = V_5;
		return L_38;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::BinarySearch<System.Object>(T[],T,System.Collections.Generic.IComparer`1<T>)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Object_t;
struct IComparer_1_t5634;
// Declaration System.Int32 System.Array::BinarySearch<System.Object>(T[],T,System.Collections.Generic.IComparer`1<T>)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T,System.Collections.Generic.IComparer`1<T>)
extern "C" int32_t Array_BinarySearch_TisObject_t_m46363_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Object_t * ___value, Object_t* ___comparer, const MethodInfo* method);
#define Array_BinarySearch_TisObject_t_m46363(__this /* static, unused */, ___array, ___value, ___comparer, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t *, Object_t*, const MethodInfo*))Array_BinarySearch_TisObject_t_m46363_gshared)(__this /* static, unused */, ___array, ___value, ___comparer, method)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],T,System.Collections.Generic.IComparer`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" int32_t Array_BinarySearch_TisObject_t_m46363_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Object_t * ___value, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		ObjectU5BU5D_t21* L_3 = ___array;
		NullCheck(L_3);
		Object_t * L_4 = ___value;
		Object_t* L_5 = ___comparer;
		int32_t L_6 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, int32_t, Object_t *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), (Object_t *)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Object_t;
// Declaration System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T)
extern "C" int32_t Array_BinarySearch_TisObject_t_m46364_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, int32_t ___index, int32_t ___length, Object_t * ___value, const MethodInfo* method);
#define Array_BinarySearch_TisObject_t_m46364(__this /* static, unused */, ___array, ___index, ___length, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, int32_t, Object_t *, const MethodInfo*))Array_BinarySearch_TisObject_t_m46364_gshared)(__this /* static, unused */, ___array, ___index, ___length, ___value, method)
// System.Int32 System.Array::BinarySearch<System.Object>(T[],System.Int32,System.Int32,T)
extern "C" int32_t Array_BinarySearch_TisObject_t_m46364_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, int32_t ___index, int32_t ___length, Object_t * ___value, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		int32_t L_1 = ___index;
		int32_t L_2 = ___length;
		Object_t * L_3 = ___value;
		int32_t L_4 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, int32_t, int32_t, Object_t *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_0, (int32_t)L_1, (int32_t)L_2, (Object_t *)L_3, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Object_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m46365_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method);
#define Array_IndexOf_TisObject_t_m46365(__this /* static, unused */, ___array, ___value, ___startIndex, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t *, int32_t, const MethodInfo*))Array_IndexOf_TisObject_t_m46365_gshared)(__this /* static, unused */, ___array, ___value, ___startIndex, method)
// System.Int32 System.Array::IndexOf<System.Object>(T[],T,System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" int32_t Array_IndexOf_TisObject_t_m46365_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		Object_t * L_3 = ___value;
		int32_t L_4 = ___startIndex;
		ObjectU5BU5D_t21* L_5 = ___array;
		NullCheck(L_5);
		int32_t L_6 = ___startIndex;
		int32_t L_7 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (Object_t *)L_3, (int32_t)L_4, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))-(int32_t)L_6)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t21;
struct Object_t;
// Declaration System.Int32 System.Array::LastIndexOf<System.Object>(!!0[],!!0,System.Int32)
// System.Int32 System.Array::LastIndexOf<System.Object>(!!0[],!!0,System.Int32)
extern "C" int32_t Array_LastIndexOf_TisObject_t_m46366_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* p0, Object_t * p1, int32_t p2, const MethodInfo* method);
#define Array_LastIndexOf_TisObject_t_m46366(__this /* static, unused */, p0, p1, p2, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t *, int32_t, const MethodInfo*))Array_LastIndexOf_TisObject_t_m46366_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Object_t;
// Declaration System.Int32 System.Array::LastIndexOf<System.Object>(T[],T)
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T)
extern "C" int32_t Array_LastIndexOf_TisObject_t_m46367_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Object_t * ___value, const MethodInfo* method);
#define Array_LastIndexOf_TisObject_t_m46367(__this /* static, unused */, ___array, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t *, const MethodInfo*))Array_LastIndexOf_TisObject_t_m46367_gshared)(__this /* static, unused */, ___array, ___value, method)
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" int32_t Array_LastIndexOf_TisObject_t_m46367_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_0015;
		}
	}
	{
		return (-1);
	}

IL_0015:
	{
		ObjectU5BU5D_t21* L_3 = ___array;
		Object_t * L_4 = ___value;
		ObjectU5BU5D_t21* L_5 = ___array;
		NullCheck(L_5);
		int32_t L_6 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_3, (Object_t *)L_4, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t21;
struct Object_t;
// Declaration System.Int32 System.Array::LastIndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::LastIndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_LastIndexOf_TisObject_t_m46368_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* p0, Object_t * p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_LastIndexOf_TisObject_t_m46368(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t *, int32_t, int32_t, const MethodInfo*))Array_LastIndexOf_TisObject_t_m46368_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T,System.Int32)
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T,System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" int32_t Array_LastIndexOf_TisObject_t_m46366_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		Object_t * L_3 = ___value;
		int32_t L_4 = ___startIndex;
		int32_t L_5 = ___startIndex;
		int32_t L_6 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_2, (Object_t *)L_3, (int32_t)L_4, (int32_t)((int32_t)((int32_t)L_5+(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T,System.Int32,System.Int32)
// System.Int32 System.Array::LastIndexOf<System.Object>(T[],T,System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t4879_il2cpp_TypeInfo_var;
extern "C" int32_t Array_LastIndexOf_TisObject_t_m46368_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		EqualityComparer_1_t4879_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10529);
		s_Il2CppMethodIntialized = true;
	}
	EqualityComparer_1_t4879 * V_0 = {0};
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = ___startIndex;
		ObjectU5BU5D_t21* L_4 = ___array;
		NullCheck((Array_t *)L_4);
		int32_t L_5 = Array_GetLowerBound_m17642((Array_t *)L_4, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = ___startIndex;
		ObjectU5BU5D_t21* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetUpperBound_m17654((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)L_6) > ((int32_t)L_8)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_9 = ___startIndex;
		int32_t L_10 = ___count;
		ObjectU5BU5D_t21* L_11 = ___array;
		NullCheck((Array_t *)L_11);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)L_11, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))+(int32_t)1))) >= ((int32_t)L_12)))
		{
			goto IL_003a;
		}
	}

IL_0034:
	{
		ArgumentOutOfRangeException_t1123 * L_13 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11582(L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4879_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4879 * L_14 = (( EqualityComparer_1_t4879 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (EqualityComparer_1_t4879 *)L_14;
		int32_t L_15 = ___startIndex;
		V_1 = (int32_t)L_15;
		goto IL_005a;
	}

IL_0044:
	{
		EqualityComparer_1_t4879 * L_16 = V_0;
		ObjectU5BU5D_t21* L_17 = ___array;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___value;
		NullCheck((EqualityComparer_1_t4879 *)L_16);
		bool L_21 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t4879 *)L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), (Object_t *)L_20);
		if (!L_21)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_22 = V_1;
		return L_22;
	}

IL_0056:
	{
		int32_t L_23 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_23-(int32_t)1));
	}

IL_005a:
	{
		int32_t L_24 = V_1;
		int32_t L_25 = ___startIndex;
		int32_t L_26 = ___count;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_25-(int32_t)L_26))+(int32_t)1)))))
		{
			goto IL_0044;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
struct ObjectU5BU5D_t21;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m14684_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisObject_t_m14684(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21**, int32_t, const MethodInfo*))Array_Resize_TisObject_t_m14684_gshared)(__this /* static, unused */, p0, p1, method)
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Predicate_1_t4882;
// Declaration T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern "C" ObjectU5BU5D_t21* Array_FindAll_TisObject_t_m46369_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define Array_FindAll_TisObject_t_m46369(__this /* static, unused */, ___array, ___match, method) (( ObjectU5BU5D_t21* (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Predicate_1_t4882 *, const MethodInfo*))Array_FindAll_TisObject_t_m46369_gshared)(__this /* static, unused */, ___array, ___match, method)
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t21* Array_FindAll_TisObject_t_m46369_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Predicate_1_t4882 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t21* V_1 = {0};
	Object_t * V_2 = {0};
	ObjectU5BU5D_t21* V_3 = {0};
	int32_t V_4 = 0;
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Predicate_1_t4882 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral4413, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t21* L_4 = ___array;
		NullCheck(L_4);
		V_1 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (((int32_t)(((Array_t *)L_4)->max_length)))));
		ObjectU5BU5D_t21* L_5 = ___array;
		V_3 = (ObjectU5BU5D_t21*)L_5;
		V_4 = (int32_t)0;
		goto IL_0052;
	}

IL_002e:
	{
		ObjectU5BU5D_t21* L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_2 = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_8));
		Predicate_1_t4882 * L_9 = ___match;
		Object_t * L_10 = V_2;
		NullCheck((Predicate_1_t4882 *)L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (Predicate_1_t4882 *)L_9, (Object_t *)L_10);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		ObjectU5BU5D_t21* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = (int32_t)L_13;
		V_0 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		Object_t * L_15 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14)) = (Object_t *)L_15;
	}

IL_004c:
	{
		int32_t L_16 = V_4;
		V_4 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0052:
	{
		int32_t L_17 = V_4;
		ObjectU5BU5D_t21* L_18 = V_3;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_19 = V_0;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21**)(&V_1), (int32_t)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		ObjectU5BU5D_t21* L_20 = V_1;
		return L_20;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::Exists<System.Object>(T[],System.Predicate`1<T>)
struct Array_t;
struct ObjectU5BU5D_t21;
struct Predicate_1_t4882;
// Declaration System.Boolean System.Array::Exists<System.Object>(T[],System.Predicate`1<T>)
// System.Boolean System.Array::Exists<System.Object>(T[],System.Predicate`1<T>)
extern "C" bool Array_Exists_TisObject_t_m46370_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define Array_Exists_TisObject_t_m46370(__this /* static, unused */, ___array, ___match, method) (( bool (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Predicate_1_t4882 *, const MethodInfo*))Array_Exists_TisObject_t_m46370_gshared)(__this /* static, unused */, ___array, ___match, method)
// System.Boolean System.Array::Exists<System.Object>(T[],System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" bool Array_Exists_TisObject_t_m46370_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Predicate_1_t4882 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t21* V_1 = {0};
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Predicate_1_t4882 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral4413, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t21* L_4 = ___array;
		V_1 = (ObjectU5BU5D_t21*)L_4;
		V_2 = (int32_t)0;
		goto IL_0039;
	}

IL_0022:
	{
		ObjectU5BU5D_t21* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		Predicate_1_t4882 * L_8 = ___match;
		Object_t * L_9 = V_0;
		NullCheck((Predicate_1_t4882 *)L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (Predicate_1_t4882 *)L_8, (Object_t *)L_9);
		if (!L_10)
		{
			goto IL_0035;
		}
	}
	{
		return 1;
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		ObjectU5BU5D_t21* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_gen.h"
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_genMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Array::AsReadOnly<System.Object>(T[])
struct Array_t;
struct ReadOnlyCollection_1_t3233;
struct ObjectU5BU5D_t21;
// Declaration System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Array::AsReadOnly<System.Object>(T[])
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Array::AsReadOnly<System.Object>(T[])
extern "C" ReadOnlyCollection_1_t3233 * Array_AsReadOnly_TisObject_t_m46371_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, const MethodInfo* method);
#define Array_AsReadOnly_TisObject_t_m46371(__this /* static, unused */, ___array, method) (( ReadOnlyCollection_1_t3233 * (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, const MethodInfo*))Array_AsReadOnly_TisObject_t_m46371_gshared)(__this /* static, unused */, ___array, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Array::AsReadOnly<System.Object>(T[])
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" ReadOnlyCollection_1_t3233 * Array_AsReadOnly_TisObject_t_m46371_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectU5BU5D_t21* L_2 = ___array;
		ArrayReadOnlyList_1_t6362 * L_3 = (ArrayReadOnlyList_1_t6362 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		(( void (*) (ArrayReadOnlyList_1_t6362 *, ObjectU5BU5D_t21*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(L_3, (ObjectU5BU5D_t21*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		ReadOnlyCollection_1_t3233 * L_4 = (ReadOnlyCollection_1_t3233 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		(( void (*) (ReadOnlyCollection_1_t3233 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->method)(L_4, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
struct Array_t;
struct Object_t;
struct ObjectU5BU5D_t21;
struct Predicate_1_t4882;
// Declaration T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
extern "C" Object_t * Array_Find_TisObject_t_m46372_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define Array_Find_TisObject_t_m46372(__this /* static, unused */, ___array, ___match, method) (( Object_t * (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Predicate_1_t4882 *, const MethodInfo*))Array_Find_TisObject_t_m46372_gshared)(__this /* static, unused */, ___array, ___match, method)
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" Object_t * Array_Find_TisObject_t_m46372_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Predicate_1_t4882 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t21* V_1 = {0};
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Predicate_1_t4882 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral4413, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t21* L_4 = ___array;
		V_1 = (ObjectU5BU5D_t21*)L_4;
		V_2 = (int32_t)0;
		goto IL_0039;
	}

IL_0022:
	{
		ObjectU5BU5D_t21* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		Predicate_1_t4882 * L_8 = ___match;
		Object_t * L_9 = V_0;
		NullCheck((Predicate_1_t4882 *)L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (Predicate_1_t4882 *)L_8, (Object_t *)L_9);
		if (!L_10)
		{
			goto IL_0035;
		}
	}
	{
		Object_t * L_11 = V_0;
		return L_11;
	}

IL_0035:
	{
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t21* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_3));
		Object_t * L_15 = V_3;
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif

// T System.Array::FindLast<System.Object>(T[],System.Predicate`1<T>)
struct Array_t;
struct Object_t;
struct ObjectU5BU5D_t21;
struct Predicate_1_t4882;
// Declaration T System.Array::FindLast<System.Object>(T[],System.Predicate`1<T>)
// T System.Array::FindLast<System.Object>(T[],System.Predicate`1<T>)
extern "C" Object_t * Array_FindLast_TisObject_t_m46373_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define Array_FindLast_TisObject_t_m46373(__this /* static, unused */, ___array, ___match, method) (( Object_t * (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Predicate_1_t4882 *, const MethodInfo*))Array_FindLast_TisObject_t_m46373_gshared)(__this /* static, unused */, ___array, ___match, method)
// T System.Array::FindLast<System.Object>(T[],System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" Object_t * Array_FindLast_TisObject_t_m46373_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* ___array, Predicate_1_t4882 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Predicate_1_t4882 * L_2 = ___match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral4413, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ObjectU5BU5D_t21* L_4 = ___array;
		NullCheck(L_4);
		V_0 = (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)1));
		goto IL_003f;
	}

IL_0024:
	{
		Predicate_1_t4882 * L_5 = ___match;
		ObjectU5BU5D_t21* L_6 = ___array;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((Predicate_1_t4882 *)L_5);
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(T) */, (Predicate_1_t4882 *)L_5, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_8)));
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_t21* L_10 = ___array;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12));
	}

IL_003b:
	{
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_003f:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_1));
		Object_t * L_15 = V_1;
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
extern "C" TableRange_t3851  Array_InternalArray__get_Item_TisTableRange_t3851_m46375_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTableRange_t3851_m46375(__this, ___index, method) (( TableRange_t3851  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTableRange_t3851_m46375_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" TableRange_t3851  Array_InternalArray__get_Item_TisTableRange_t3851_m46375_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	TableRange_t3851  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (TableRange_t3851 *)(&V_0));
		TableRange_t3851  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisTableRange_t3851_m46376_gshared (Array_t * __this, TableRange_t3851  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisTableRange_t3851_m46376(__this, ___item, method) (( void (*) (Array_t *, TableRange_t3851 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisTableRange_t3851_m46376_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisTableRange_t3851_m46376_gshared (Array_t * __this, TableRange_t3851  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisTableRange_t3851_m46377_gshared (Array_t * __this, TableRange_t3851  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisTableRange_t3851_m46377(__this, ___item, method) (( bool (*) (Array_t *, TableRange_t3851 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisTableRange_t3851_m46377_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisTableRange_t3851_m46377_gshared (Array_t * __this, TableRange_t3851  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TableRange_t3851  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (TableRange_t3851 *)(&V_2));
		TableRange_t3851  L_5 = ___item;
		TableRange_t3851  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		TableRange_t3851  L_8 = V_2;
		TableRange_t3851  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		TableRange_t3851  L_11 = V_2;
		TableRange_t3851  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T[],System.Int32)
struct Array_t;
struct TableRangeU5BU5D_t3852;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTableRange_t3851_m46378_gshared (Array_t * __this, TableRangeU5BU5D_t3852* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisTableRange_t3851_m46378(__this, ___array, ___index, method) (( void (*) (Array_t *, TableRangeU5BU5D_t3852*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisTableRange_t3851_m46378_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTableRange_t3851_m46378_gshared (Array_t * __this, TableRangeU5BU5D_t3852* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		TableRangeU5BU5D_t3852* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		TableRangeU5BU5D_t3852* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		TableRangeU5BU5D_t3852* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		TableRangeU5BU5D_t3852* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		TableRangeU5BU5D_t3852* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisTableRange_t3851_m46379_gshared (Array_t * __this, TableRange_t3851  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisTableRange_t3851_m46379(__this, ___item, method) (( bool (*) (Array_t *, TableRange_t3851 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisTableRange_t3851_m46379_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisTableRange_t3851_m46379_gshared (Array_t * __this, TableRange_t3851  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisTableRange_t3851_m46380_gshared (Array_t * __this, TableRange_t3851  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisTableRange_t3851_m46380(__this, ___item, method) (( int32_t (*) (Array_t *, TableRange_t3851 , const MethodInfo*))Array_InternalArray__IndexOf_TisTableRange_t3851_m46380_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisTableRange_t3851_m46380_gshared (Array_t * __this, TableRange_t3851  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TableRange_t3851  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (TableRange_t3851 *)(&V_2));
		TableRange_t3851  L_5 = ___item;
		TableRange_t3851  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		TableRange_t3851  L_8 = V_2;
		TableRange_t3851  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		TableRange_t3851  L_14 = ___item;
		TableRange_t3851  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisTableRange_t3851_m46381_gshared (Array_t * __this, int32_t ___index, TableRange_t3851  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisTableRange_t3851_m46381(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TableRange_t3851 , const MethodInfo*))Array_InternalArray__Insert_TisTableRange_t3851_m46381_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisTableRange_t3851_m46381_gshared (Array_t * __this, int32_t ___index, TableRange_t3851  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisTableRange_t3851_m46383_gshared (Array_t * __this, int32_t ___index, TableRange_t3851  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisTableRange_t3851_m46383(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TableRange_t3851 , const MethodInfo*))Array_InternalArray__set_Item_TisTableRange_t3851_m46383_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisTableRange_t3851_m46383_gshared (Array_t * __this, int32_t ___index, TableRange_t3851  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		TableRange_t3851  L_6 = ___item;
		TableRange_t3851  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (TableRange_t3851 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_154.h"
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_154MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.CodePointIndexer/TableRange>()
struct Array_t;
struct IEnumerator_1_t7338;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.CodePointIndexer/TableRange>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.CodePointIndexer/TableRange>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTableRange_t3851_m46384_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisTableRange_t3851_m46384(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisTableRange_t3851_m46384_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<Mono.Globalization.Unicode.CodePointIndexer/TableRange>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTableRange_t3851_m46384_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6365  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6365 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6365  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Collections.Hashtable/Slot>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
extern "C" Slot_t3927  Array_InternalArray__get_Item_TisSlot_t3927_m46386_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSlot_t3927_m46386(__this, ___index, method) (( Slot_t3927  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSlot_t3927_m46386_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" Slot_t3927  Array_InternalArray__get_Item_TisSlot_t3927_m46386_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	Slot_t3927  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (Slot_t3927 *)(&V_0));
		Slot_t3927  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Collections.Hashtable/Slot>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Hashtable/Slot>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Hashtable/Slot>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Hashtable/Slot>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisSlot_t3927_m46387_gshared (Array_t * __this, Slot_t3927  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisSlot_t3927_m46387(__this, ___item, method) (( void (*) (Array_t *, Slot_t3927 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisSlot_t3927_m46387_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.Hashtable/Slot>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisSlot_t3927_m46387_gshared (Array_t * __this, Slot_t3927  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Hashtable/Slot>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Hashtable/Slot>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Hashtable/Slot>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisSlot_t3927_m46388_gshared (Array_t * __this, Slot_t3927  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisSlot_t3927_m46388(__this, ___item, method) (( bool (*) (Array_t *, Slot_t3927 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisSlot_t3927_m46388_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.Hashtable/Slot>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisSlot_t3927_m46388_gshared (Array_t * __this, Slot_t3927  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Slot_t3927  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Slot_t3927 *)(&V_2));
		Slot_t3927  L_5 = ___item;
		Slot_t3927  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		Slot_t3927  L_8 = V_2;
		Slot_t3927  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		Slot_t3927  L_11 = V_2;
		Slot_t3927  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Hashtable/Slot>(T[],System.Int32)
struct Array_t;
struct SlotU5BU5D_t3934;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Hashtable/Slot>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Hashtable/Slot>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSlot_t3927_m46389_gshared (Array_t * __this, SlotU5BU5D_t3934* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisSlot_t3927_m46389(__this, ___array, ___index, method) (( void (*) (Array_t *, SlotU5BU5D_t3934*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisSlot_t3927_m46389_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.Hashtable/Slot>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSlot_t3927_m46389_gshared (Array_t * __this, SlotU5BU5D_t3934* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		SlotU5BU5D_t3934* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		SlotU5BU5D_t3934* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		SlotU5BU5D_t3934* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		SlotU5BU5D_t3934* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		SlotU5BU5D_t3934* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Hashtable/Slot>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Hashtable/Slot>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Hashtable/Slot>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisSlot_t3927_m46390_gshared (Array_t * __this, Slot_t3927  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisSlot_t3927_m46390(__this, ___item, method) (( bool (*) (Array_t *, Slot_t3927 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisSlot_t3927_m46390_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.Hashtable/Slot>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisSlot_t3927_m46390_gshared (Array_t * __this, Slot_t3927  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Hashtable/Slot>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Hashtable/Slot>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Hashtable/Slot>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisSlot_t3927_m46391_gshared (Array_t * __this, Slot_t3927  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisSlot_t3927_m46391(__this, ___item, method) (( int32_t (*) (Array_t *, Slot_t3927 , const MethodInfo*))Array_InternalArray__IndexOf_TisSlot_t3927_m46391_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.Hashtable/Slot>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisSlot_t3927_m46391_gshared (Array_t * __this, Slot_t3927  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Slot_t3927  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Slot_t3927 *)(&V_2));
		Slot_t3927  L_5 = ___item;
		Slot_t3927  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		Slot_t3927  L_8 = V_2;
		Slot_t3927  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		Slot_t3927  L_14 = ___item;
		Slot_t3927  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Collections.Hashtable/Slot>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Collections.Hashtable/Slot>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Collections.Hashtable/Slot>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisSlot_t3927_m46392_gshared (Array_t * __this, int32_t ___index, Slot_t3927  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisSlot_t3927_m46392(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Slot_t3927 , const MethodInfo*))Array_InternalArray__Insert_TisSlot_t3927_m46392_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Collections.Hashtable/Slot>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisSlot_t3927_m46392_gshared (Array_t * __this, int32_t ___index, Slot_t3927  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Collections.Hashtable/Slot>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Hashtable/Slot>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Collections.Hashtable/Slot>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Hashtable/Slot>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisSlot_t3927_m46394_gshared (Array_t * __this, int32_t ___index, Slot_t3927  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisSlot_t3927_m46394(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Slot_t3927 , const MethodInfo*))Array_InternalArray__set_Item_TisSlot_t3927_m46394_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Collections.Hashtable/Slot>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisSlot_t3927_m46394_gshared (Array_t * __this, int32_t ___index, Slot_t3927  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		Slot_t3927  L_6 = ___item;
		Slot_t3927  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (Slot_t3927 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Collections.Hashtable/Slot>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_159.h"
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_159MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Hashtable/Slot>()
struct Array_t;
struct IEnumerator_1_t7339;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Hashtable/Slot>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Hashtable/Slot>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t3927_m46395_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t3927_m46395(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t3927_m46395_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.Hashtable/Slot>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t3927_m46395_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6374  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6374 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6374  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.SortedList/Slot
#include "mscorlib_System_Collections_SortedList_Slot.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Collections.SortedList/Slot>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
extern "C" Slot_t3936  Array_InternalArray__get_Item_TisSlot_t3936_m46397_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSlot_t3936_m46397(__this, ___index, method) (( Slot_t3936  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSlot_t3936_m46397_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" Slot_t3936  Array_InternalArray__get_Item_TisSlot_t3936_m46397_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	Slot_t3936  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (Slot_t3936 *)(&V_0));
		Slot_t3936  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Collections.SortedList/Slot>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.SortedList/Slot>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Collections.SortedList/Slot>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.SortedList/Slot>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisSlot_t3936_m46398_gshared (Array_t * __this, Slot_t3936  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisSlot_t3936_m46398(__this, ___item, method) (( void (*) (Array_t *, Slot_t3936 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisSlot_t3936_m46398_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Collections.SortedList/Slot>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisSlot_t3936_m46398_gshared (Array_t * __this, Slot_t3936  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.SortedList/Slot>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.SortedList/Slot>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.SortedList/Slot>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisSlot_t3936_m46399_gshared (Array_t * __this, Slot_t3936  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisSlot_t3936_m46399(__this, ___item, method) (( bool (*) (Array_t *, Slot_t3936 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisSlot_t3936_m46399_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Collections.SortedList/Slot>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisSlot_t3936_m46399_gshared (Array_t * __this, Slot_t3936  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Slot_t3936  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Slot_t3936 *)(&V_2));
		Slot_t3936  L_5 = ___item;
		Slot_t3936  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		Slot_t3936  L_8 = V_2;
		Slot_t3936  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		Slot_t3936  L_11 = V_2;
		Slot_t3936  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.SortedList/Slot>(T[],System.Int32)
struct Array_t;
struct SlotU5BU5D_t3940;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.SortedList/Slot>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.SortedList/Slot>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSlot_t3936_m46400_gshared (Array_t * __this, SlotU5BU5D_t3940* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisSlot_t3936_m46400(__this, ___array, ___index, method) (( void (*) (Array_t *, SlotU5BU5D_t3940*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisSlot_t3936_m46400_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Collections.SortedList/Slot>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisSlot_t3936_m46400_gshared (Array_t * __this, SlotU5BU5D_t3940* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		SlotU5BU5D_t3940* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		SlotU5BU5D_t3940* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		SlotU5BU5D_t3940* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		SlotU5BU5D_t3940* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		SlotU5BU5D_t3940* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.SortedList/Slot>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.SortedList/Slot>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.SortedList/Slot>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisSlot_t3936_m46401_gshared (Array_t * __this, Slot_t3936  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisSlot_t3936_m46401(__this, ___item, method) (( bool (*) (Array_t *, Slot_t3936 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisSlot_t3936_m46401_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Collections.SortedList/Slot>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisSlot_t3936_m46401_gshared (Array_t * __this, Slot_t3936  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.SortedList/Slot>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Collections.SortedList/Slot>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.SortedList/Slot>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisSlot_t3936_m46402_gshared (Array_t * __this, Slot_t3936  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisSlot_t3936_m46402(__this, ___item, method) (( int32_t (*) (Array_t *, Slot_t3936 , const MethodInfo*))Array_InternalArray__IndexOf_TisSlot_t3936_m46402_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Collections.SortedList/Slot>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisSlot_t3936_m46402_gshared (Array_t * __this, Slot_t3936  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Slot_t3936  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Slot_t3936 *)(&V_2));
		Slot_t3936  L_5 = ___item;
		Slot_t3936  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		Slot_t3936  L_8 = V_2;
		Slot_t3936  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		Slot_t3936  L_14 = ___item;
		Slot_t3936  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Collections.SortedList/Slot>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Collections.SortedList/Slot>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Collections.SortedList/Slot>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisSlot_t3936_m46403_gshared (Array_t * __this, int32_t ___index, Slot_t3936  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisSlot_t3936_m46403(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Slot_t3936 , const MethodInfo*))Array_InternalArray__Insert_TisSlot_t3936_m46403_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Collections.SortedList/Slot>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisSlot_t3936_m46403_gshared (Array_t * __this, int32_t ___index, Slot_t3936  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Collections.SortedList/Slot>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Collections.SortedList/Slot>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Collections.SortedList/Slot>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Collections.SortedList/Slot>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisSlot_t3936_m46405_gshared (Array_t * __this, int32_t ___index, Slot_t3936  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisSlot_t3936_m46405(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Slot_t3936 , const MethodInfo*))Array_InternalArray__set_Item_TisSlot_t3936_m46405_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Collections.SortedList/Slot>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisSlot_t3936_m46405_gshared (Array_t * __this, int32_t ___index, Slot_t3936  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		Slot_t3936  L_6 = ___item;
		Slot_t3936  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (Slot_t3936 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Collections.SortedList/Slot>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_160.h"
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_160MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.SortedList/Slot>()
struct Array_t;
struct IEnumerator_1_t7340;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.SortedList/Slot>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.SortedList/Slot>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t3936_m46406_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t3936_m46406(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t3936_m46406_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Collections.SortedList/Slot>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisSlot_t3936_m46406_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6375  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6375 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6375  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoProperty.h"
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_gen.h"
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_genMethodDeclarations.h"
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
struct MonoProperty_t;
struct Object_t;
struct Getter_2_t6386;
// Declaration System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
extern "C" Object_t * MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m46407_gshared (Object_t * __this /* static, unused */, Getter_2_t6386 * ___getter, Object_t * ___obj, const MethodInfo* method);
#define MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m46407(__this /* static, unused */, ___getter, ___obj, method) (( Object_t * (*) (Object_t * /* static, unused */, Getter_2_t6386 *, Object_t *, const MethodInfo*))MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m46407_gshared)(__this /* static, unused */, ___getter, ___obj, method)
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
extern "C" Object_t * MonoProperty_GetterAdapterFrame_TisObject_t_TisObject_t_m46407_gshared (Object_t * __this /* static, unused */, Getter_2_t6386 * ___getter, Object_t * ___obj, const MethodInfo* method)
{
	{
		Getter_2_t6386 * L_0 = ___getter;
		Object_t * L_1 = ___obj;
		NullCheck((Getter_2_t6386 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(11 /* R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T) */, (Getter_2_t6386 *)L_0, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_gen.h"
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_genMethodDeclarations.h"
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
struct MonoProperty_t;
struct Object_t;
struct StaticGetter_1_t6387;
// Declaration System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
extern "C" Object_t * MonoProperty_StaticGetterAdapterFrame_TisObject_t_m46408_gshared (Object_t * __this /* static, unused */, StaticGetter_1_t6387 * ___getter, Object_t * ___obj, const MethodInfo* method);
#define MonoProperty_StaticGetterAdapterFrame_TisObject_t_m46408(__this /* static, unused */, ___getter, ___obj, method) (( Object_t * (*) (Object_t * /* static, unused */, StaticGetter_1_t6387 *, Object_t *, const MethodInfo*))MonoProperty_StaticGetterAdapterFrame_TisObject_t_m46408_gshared)(__this /* static, unused */, ___getter, ___obj, method)
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
extern "C" Object_t * MonoProperty_StaticGetterAdapterFrame_TisObject_t_m46408_gshared (Object_t * __this /* static, unused */, StaticGetter_1_t6387 * ___getter, Object_t * ___obj, const MethodInfo* method)
{
	{
		StaticGetter_1_t6387 * L_0 = ___getter;
		NullCheck((StaticGetter_1_t6387 *)L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke() */, (StaticGetter_1_t6387 *)L_0);
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.DateTime
#include "mscorlib_System_DateTime.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.DateTime>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
// T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
extern "C" DateTime_t1219  Array_InternalArray__get_Item_TisDateTime_t1219_m46410_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisDateTime_t1219_m46410(__this, ___index, method) (( DateTime_t1219  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisDateTime_t1219_m46410_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" DateTime_t1219  Array_InternalArray__get_Item_TisDateTime_t1219_m46410_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t1219  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (DateTime_t1219 *)(&V_0));
		DateTime_t1219  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.DateTime>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.DateTime>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.DateTime>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.DateTime>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisDateTime_t1219_m46411_gshared (Array_t * __this, DateTime_t1219  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisDateTime_t1219_m46411(__this, ___item, method) (( void (*) (Array_t *, DateTime_t1219 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisDateTime_t1219_m46411_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.DateTime>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisDateTime_t1219_m46411_gshared (Array_t * __this, DateTime_t1219  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTime>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTime>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTime>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisDateTime_t1219_m46412_gshared (Array_t * __this, DateTime_t1219  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisDateTime_t1219_m46412(__this, ___item, method) (( bool (*) (Array_t *, DateTime_t1219 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisDateTime_t1219_m46412_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.DateTime>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisDateTime_t1219_m46412_gshared (Array_t * __this, DateTime_t1219  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateTime_t1219  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (DateTime_t1219 *)(&V_2));
		DateTime_t1219  L_5 = ___item;
		DateTime_t1219  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		DateTime_t1219  L_8 = V_2;
		DateTime_t1219  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		DateTime_t1219  L_11 = V_2;
		DateTime_t1219  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTime>(T[],System.Int32)
struct Array_t;
struct DateTimeU5BU5D_t4385;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTime>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTime>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisDateTime_t1219_m46413_gshared (Array_t * __this, DateTimeU5BU5D_t4385* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisDateTime_t1219_m46413(__this, ___array, ___index, method) (( void (*) (Array_t *, DateTimeU5BU5D_t4385*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisDateTime_t1219_m46413_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.DateTime>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisDateTime_t1219_m46413_gshared (Array_t * __this, DateTimeU5BU5D_t4385* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTimeU5BU5D_t4385* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		DateTimeU5BU5D_t4385* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		DateTimeU5BU5D_t4385* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		DateTimeU5BU5D_t4385* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		DateTimeU5BU5D_t4385* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTime>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTime>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTime>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisDateTime_t1219_m46414_gshared (Array_t * __this, DateTime_t1219  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisDateTime_t1219_m46414(__this, ___item, method) (( bool (*) (Array_t *, DateTime_t1219 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisDateTime_t1219_m46414_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.DateTime>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisDateTime_t1219_m46414_gshared (Array_t * __this, DateTime_t1219  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.DateTime>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.DateTime>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.DateTime>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisDateTime_t1219_m46415_gshared (Array_t * __this, DateTime_t1219  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisDateTime_t1219_m46415(__this, ___item, method) (( int32_t (*) (Array_t *, DateTime_t1219 , const MethodInfo*))Array_InternalArray__IndexOf_TisDateTime_t1219_m46415_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.DateTime>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisDateTime_t1219_m46415_gshared (Array_t * __this, DateTime_t1219  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateTime_t1219  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (DateTime_t1219 *)(&V_2));
		DateTime_t1219  L_5 = ___item;
		DateTime_t1219  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		DateTime_t1219  L_8 = V_2;
		DateTime_t1219  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		DateTime_t1219  L_14 = ___item;
		DateTime_t1219  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.DateTime>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.DateTime>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.DateTime>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisDateTime_t1219_m46416_gshared (Array_t * __this, int32_t ___index, DateTime_t1219  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisDateTime_t1219_m46416(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, DateTime_t1219 , const MethodInfo*))Array_InternalArray__Insert_TisDateTime_t1219_m46416_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.DateTime>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisDateTime_t1219_m46416_gshared (Array_t * __this, int32_t ___index, DateTime_t1219  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.DateTime>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.DateTime>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.DateTime>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.DateTime>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisDateTime_t1219_m46418_gshared (Array_t * __this, int32_t ___index, DateTime_t1219  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisDateTime_t1219_m46418(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, DateTime_t1219 , const MethodInfo*))Array_InternalArray__set_Item_TisDateTime_t1219_m46418_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.DateTime>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisDateTime_t1219_m46418_gshared (Array_t * __this, int32_t ___index, DateTime_t1219  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		DateTime_t1219  L_6 = ___item;
		DateTime_t1219  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (DateTime_t1219 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.DateTime>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_174.h"
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_174MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTime>()
struct Array_t;
struct IEnumerator_1_t7341;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTime>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTime>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisDateTime_t1219_m46419_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisDateTime_t1219_m46419(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisDateTime_t1219_m46419_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.DateTime>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisDateTime_t1219_m46419_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6391  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6391 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6391  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Decimal
#include "mscorlib_System_Decimal.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.Decimal>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern "C" Decimal_t2541  Array_InternalArray__get_Item_TisDecimal_t2541_m46421_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisDecimal_t2541_m46421(__this, ___index, method) (( Decimal_t2541  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisDecimal_t2541_m46421_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" Decimal_t2541  Array_InternalArray__get_Item_TisDecimal_t2541_m46421_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	Decimal_t2541  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (Decimal_t2541 *)(&V_0));
		Decimal_t2541  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.Decimal>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisDecimal_t2541_m46422_gshared (Array_t * __this, Decimal_t2541  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisDecimal_t2541_m46422(__this, ___item, method) (( void (*) (Array_t *, Decimal_t2541 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisDecimal_t2541_m46422_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.Decimal>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisDecimal_t2541_m46422_gshared (Array_t * __this, Decimal_t2541  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisDecimal_t2541_m46423_gshared (Array_t * __this, Decimal_t2541  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisDecimal_t2541_m46423(__this, ___item, method) (( bool (*) (Array_t *, Decimal_t2541 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisDecimal_t2541_m46423_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.Decimal>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisDecimal_t2541_m46423_gshared (Array_t * __this, Decimal_t2541  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Decimal_t2541  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Decimal_t2541 *)(&V_2));
		Decimal_t2541  L_5 = ___item;
		Decimal_t2541  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		Decimal_t2541  L_8 = V_2;
		Decimal_t2541  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		Decimal_t2541  L_11 = V_2;
		Decimal_t2541  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
struct Array_t;
struct DecimalU5BU5D_t4386;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisDecimal_t2541_m46424_gshared (Array_t * __this, DecimalU5BU5D_t4386* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisDecimal_t2541_m46424(__this, ___array, ___index, method) (( void (*) (Array_t *, DecimalU5BU5D_t4386*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisDecimal_t2541_m46424_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.Decimal>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisDecimal_t2541_m46424_gshared (Array_t * __this, DecimalU5BU5D_t4386* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		DecimalU5BU5D_t4386* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		DecimalU5BU5D_t4386* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		DecimalU5BU5D_t4386* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		DecimalU5BU5D_t4386* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		DecimalU5BU5D_t4386* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisDecimal_t2541_m46425_gshared (Array_t * __this, Decimal_t2541  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisDecimal_t2541_m46425(__this, ___item, method) (( bool (*) (Array_t *, Decimal_t2541 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisDecimal_t2541_m46425_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.Decimal>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisDecimal_t2541_m46425_gshared (Array_t * __this, Decimal_t2541  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisDecimal_t2541_m46426_gshared (Array_t * __this, Decimal_t2541  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisDecimal_t2541_m46426(__this, ___item, method) (( int32_t (*) (Array_t *, Decimal_t2541 , const MethodInfo*))Array_InternalArray__IndexOf_TisDecimal_t2541_m46426_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.Decimal>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisDecimal_t2541_m46426_gshared (Array_t * __this, Decimal_t2541  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Decimal_t2541  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (Decimal_t2541 *)(&V_2));
		Decimal_t2541  L_5 = ___item;
		Decimal_t2541  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		Decimal_t2541  L_8 = V_2;
		Decimal_t2541  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		Decimal_t2541  L_14 = ___item;
		Decimal_t2541  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisDecimal_t2541_m46427_gshared (Array_t * __this, int32_t ___index, Decimal_t2541  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisDecimal_t2541_m46427(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Decimal_t2541 , const MethodInfo*))Array_InternalArray__Insert_TisDecimal_t2541_m46427_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.Decimal>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisDecimal_t2541_m46427_gshared (Array_t * __this, int32_t ___index, Decimal_t2541  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.Decimal>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisDecimal_t2541_m46429_gshared (Array_t * __this, int32_t ___index, Decimal_t2541  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisDecimal_t2541_m46429(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, Decimal_t2541 , const MethodInfo*))Array_InternalArray__set_Item_TisDecimal_t2541_m46429_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.Decimal>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisDecimal_t2541_m46429_gshared (Array_t * __this, int32_t ___index, Decimal_t2541  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		Decimal_t2541  L_6 = ___item;
		Decimal_t2541  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (Decimal_t2541 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.Decimal>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_175.h"
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_175MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
struct Array_t;
struct IEnumerator_1_t7342;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t2541_m46430_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t2541_m46430(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t2541_m46430_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.Decimal>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisDecimal_t2541_m46430_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6392  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6392 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6392  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
struct Array_t;
// Declaration System.Void System.Array::GetGenericValueImpl<System.TimeSpan>(System.Int32,!!0&)
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
struct Array_t;
// Declaration T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern "C" TimeSpan_t2672  Array_InternalArray__get_Item_TisTimeSpan_t2672_m46432_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTimeSpan_t2672_m46432(__this, ___index, method) (( TimeSpan_t2672  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTimeSpan_t2672_m46432_gshared)(__this, ___index, method)
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t2672  Array_InternalArray__get_Item_TisTimeSpan_t2672_m46432_gshared (Array_t * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t2672  V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___index;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_3, (TimeSpan_t2672 *)(&V_0));
		TimeSpan_t2672  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::GetGenericValueImpl<System.TimeSpan>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
// System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
extern "C" void Array_InternalArray__ICollection_Add_TisTimeSpan_t2672_m46433_gshared (Array_t * __this, TimeSpan_t2672  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Add_TisTimeSpan_t2672_m46433(__this, ___item, method) (( void (*) (Array_t *, TimeSpan_t2672 , const MethodInfo*))Array_InternalArray__ICollection_Add_TisTimeSpan_t2672_m46433_gshared)(__this, ___item, method)
// System.Void System.Array::InternalArray__ICollection_Add<System.TimeSpan>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_Add_TisTimeSpan_t2672_m46433_gshared (Array_t * __this, TimeSpan_t2672  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
extern "C" bool Array_InternalArray__ICollection_Contains_TisTimeSpan_t2672_m46434_gshared (Array_t * __this, TimeSpan_t2672  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Contains_TisTimeSpan_t2672_m46434(__this, ___item, method) (( bool (*) (Array_t *, TimeSpan_t2672 , const MethodInfo*))Array_InternalArray__ICollection_Contains_TisTimeSpan_t2672_m46434_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Contains<System.TimeSpan>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Contains_TisTimeSpan_t2672_m46434_gshared (Array_t * __this, TimeSpan_t2672  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeSpan_t2672  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_005c;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (TimeSpan_t2672 *)(&V_2));
		TimeSpan_t2672  L_5 = ___item;
		TimeSpan_t2672  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		TimeSpan_t2672  L_8 = V_2;
		TimeSpan_t2672  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		return 1;
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		TimeSpan_t2672  L_11 = V_2;
		TimeSpan_t2672  L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_12);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)));
		bool L_14 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___item)), (Object_t *)L_13);
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		return 1;
	}

IL_0058:
	{
		int32_t L_15 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
struct Array_t;
struct TimeSpanU5BU5D_t4387;
// Declaration System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t2672_m46435_gshared (Array_t * __this, TimeSpanU5BU5D_t4387* ___array, int32_t ___index, const MethodInfo* method);
#define Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t2672_m46435(__this, ___array, ___index, method) (( void (*) (Array_t *, TimeSpanU5BU5D_t4387*, int32_t, const MethodInfo*))Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t2672_m46435_gshared)(__this, ___array, ___index, method)
// System.Void System.Array::InternalArray__ICollection_CopyTo<System.TimeSpan>(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__ICollection_CopyTo_TisTimeSpan_t2672_m46435_gshared (Array_t * __this, TimeSpanU5BU5D_t4387* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpanU5BU5D_t4387* L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_2 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_4 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		int32_t L_5 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_6 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		TimeSpanU5BU5D_t4387* L_7 = ___array;
		NullCheck((Array_t *)L_7);
		int32_t L_8 = Array_GetLowerBound_m17642((Array_t *)L_7, (int32_t)0, /*hidden argument*/NULL);
		TimeSpanU5BU5D_t4387* L_9 = ___array;
		NullCheck((Array_t *)L_9);
		int32_t L_10 = Array_GetLength_m17640((Array_t *)L_9, (int32_t)0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))) <= ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_10)))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_11 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_11, (String_t*)(String_t*) &_stringLiteral4373, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		TimeSpanU5BU5D_t4387* L_12 = ___array;
		NullCheck((Array_t *)L_12);
		int32_t L_13 = Array_get_Rank_m16762((Array_t *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_15 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0065:
	{
		int32_t L_16 = ___index;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4374, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_18 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_18, (String_t*)(String_t*) &_stringLiteral2645, (String_t*)L_17, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_007e:
	{
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		TimeSpanU5BU5D_t4387* L_20 = ___array;
		int32_t L_21 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_22 = Array_GetLength_m17640((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)__this, (int32_t)L_19, (Array_t *)(Array_t *)L_20, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
struct Array_t;
// Declaration System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
extern "C" bool Array_InternalArray__ICollection_Remove_TisTimeSpan_t2672_m46436_gshared (Array_t * __this, TimeSpan_t2672  ___item, const MethodInfo* method);
#define Array_InternalArray__ICollection_Remove_TisTimeSpan_t2672_m46436(__this, ___item, method) (( bool (*) (Array_t *, TimeSpan_t2672 , const MethodInfo*))Array_InternalArray__ICollection_Remove_TisTimeSpan_t2672_m46436_gshared)(__this, ___item, method)
// System.Boolean System.Array::InternalArray__ICollection_Remove<System.TimeSpan>(T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool Array_InternalArray__ICollection_Remove_TisTimeSpan_t2672_m46436_gshared (Array_t * __this, TimeSpan_t2672  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
struct Array_t;
// Declaration System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
// System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
extern "C" int32_t Array_InternalArray__IndexOf_TisTimeSpan_t2672_m46437_gshared (Array_t * __this, TimeSpan_t2672  ___item, const MethodInfo* method);
#define Array_InternalArray__IndexOf_TisTimeSpan_t2672_m46437(__this, ___item, method) (( int32_t (*) (Array_t *, TimeSpan_t2672 , const MethodInfo*))Array_InternalArray__IndexOf_TisTimeSpan_t2672_m46437_gshared)(__this, ___item, method)
// System.Int32 System.Array::InternalArray__IndexOf<System.TimeSpan>(T)
extern TypeInfo* RankException_t4324_il2cpp_TypeInfo_var;
extern "C" int32_t Array_InternalArray__IndexOf_TisTimeSpan_t2672_m46437_gshared (Array_t * __this, TimeSpan_t2672  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RankException_t4324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8167);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeSpan_t2672  V_2 = {0};
	{
		NullCheck((Array_t *)__this);
		int32_t L_0 = Array_get_Rank_m16762((Array_t *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4372, /*hidden argument*/NULL);
		RankException_t4324 * L_2 = (RankException_t4324 *)il2cpp_codegen_object_new (RankException_t4324_il2cpp_TypeInfo_var);
		RankException__ctor_m21486(L_2, (String_t*)L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		NullCheck((Array_t *)__this);
		int32_t L_3 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		goto IL_0074;
	}

IL_0024:
	{
		int32_t L_4 = V_1;
		NullCheck((Array_t *)__this);
		ArrayGetGenericValueImpl ((Array_t *)__this, (int32_t)L_4, (TimeSpan_t2672 *)(&V_2));
		TimeSpan_t2672  L_5 = ___item;
		TimeSpan_t2672  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		TimeSpan_t2672  L_8 = V_2;
		TimeSpan_t2672  L_9 = L_8;
		Object_t * L_10 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_9);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		NullCheck((Array_t *)__this);
		int32_t L_13 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0051:
	{
		TimeSpan_t2672  L_14 = ___item;
		TimeSpan_t2672  L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_15);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)));
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&V_2)), (Object_t *)L_16);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = V_1;
		NullCheck((Array_t *)__this);
		int32_t L_19 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_18+(int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0024;
		}
	}
	{
		NullCheck((Array_t *)__this);
		int32_t L_23 = Array_GetLowerBound_m17642((Array_t *)__this, (int32_t)0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_23-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
// System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
extern "C" void Array_InternalArray__Insert_TisTimeSpan_t2672_m46438_gshared (Array_t * __this, int32_t ___index, TimeSpan_t2672  ___item, const MethodInfo* method);
#define Array_InternalArray__Insert_TisTimeSpan_t2672_m46438(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TimeSpan_t2672 , const MethodInfo*))Array_InternalArray__Insert_TisTimeSpan_t2672_m46438_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__Insert<System.TimeSpan>(System.Int32,T)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__Insert_TisTimeSpan_t2672_m46438_gshared (Array_t * __this, int32_t ___index, TimeSpan_t2672  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral3650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Array_t;
// Declaration System.Void System.Array::SetGenericValueImpl<System.TimeSpan>(System.Int32,!!0&)
// System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
struct Array_t;
// Declaration System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
// System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
extern "C" void Array_InternalArray__set_Item_TisTimeSpan_t2672_m46440_gshared (Array_t * __this, int32_t ___index, TimeSpan_t2672  ___item, const MethodInfo* method);
#define Array_InternalArray__set_Item_TisTimeSpan_t2672_m46440(__this, ___index, ___item, method) (( void (*) (Array_t *, int32_t, TimeSpan_t2672 , const MethodInfo*))Array_InternalArray__set_Item_TisTimeSpan_t2672_m46440_gshared)(__this, ___index, ___item, method)
// System.Void System.Array::InternalArray__set_Item<System.TimeSpan>(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void Array_InternalArray__set_Item_TisTimeSpan_t2672_m46440_gshared (Array_t * __this, int32_t ___index, TimeSpan_t2672  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		int32_t L_0 = ___index;
		NullCheck((Array_t *)__this);
		int32_t L_1 = Array_get_Length_m11495((Array_t *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(__this, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t21* L_4 = V_0;
		int32_t L_5 = ___index;
		TimeSpan_t2672  L_6 = ___item;
		TimeSpan_t2672  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_7);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_8;
		return;
	}

IL_0028:
	{
		int32_t L_9 = ___index;
		NullCheck((Array_t *)__this);
		ArraySetGenericValueImpl ((Array_t *)__this, (int32_t)L_9, (TimeSpan_t2672 *)(&___item));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Void System.Array::SetGenericValueImpl<System.TimeSpan>(System.Int32,T&)
#ifndef _MSC_VER
#else
#endif

// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_176.h"
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_176MethodDeclarations.h"
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
struct Array_t;
struct IEnumerator_1_t7343;
// Declaration System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t2672_m46441_gshared (Array_t * __this, const MethodInfo* method);
#define Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t2672_m46441(__this, method) (( Object_t* (*) (Array_t *, const MethodInfo*))Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t2672_m46441_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array::InternalArray__IEnumerable_GetEnumerator<System.TimeSpan>()
extern "C" Object_t* Array_InternalArray__IEnumerable_GetEnumerator_TisTimeSpan_t2672_m46441_gshared (Array_t * __this, const MethodInfo* method)
{
	{
		InternalEnumerator_1_t6393  L_0 = {0};
		(( void (*) (InternalEnumerator_1_t6393 *, Array_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->method)(&L_0, (Array_t *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		InternalEnumerator_1_t6393  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_1);
		return (Object_t*)L_2;
	}
}
