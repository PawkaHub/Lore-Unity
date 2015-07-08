#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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


// System.Array
#include "mscorlib_System_Array.h"

// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.GradientColorKey>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif

// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKey.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"


// System.Int32 System.Collections.Generic.IList`1<UnityEngine.GradientColorKey>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GradientColorKey>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GradientColorKey>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.GradientColorKey>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GradientColorKey>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKey.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.GradientAlphaKey>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.GradientAlphaKey>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.GradientAlphaKey>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_25MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.GradientAlphaKey>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.GradientAlphaKey>(System.Int32)
extern "C" GradientAlphaKey_t4704  Array_InternalArray__get_Item_TisGradientAlphaKey_t4704_m73728_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisGradientAlphaKey_t4704_m73728(__this, p0, method) (( GradientAlphaKey_t4704  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisGradientAlphaKey_t4704_m73728_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.GradientAlphaKey>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m27078_gshared (InternalEnumerator_1_t6392 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.GradientAlphaKey>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m27079_gshared (InternalEnumerator_1_t6392 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.GradientAlphaKey>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m27080_gshared (InternalEnumerator_1_t6392 * __this, const MethodInfo* method)
{
	{
		GradientAlphaKey_t4704  L_0 = (( GradientAlphaKey_t4704  (*) (InternalEnumerator_1_t6392 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t6392 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		GradientAlphaKey_t4704  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.GradientAlphaKey>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m27081_gshared (InternalEnumerator_1_t6392 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.GradientAlphaKey>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m27082_gshared (InternalEnumerator_1_t6392 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m13206((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.GradientAlphaKey>::get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" GradientAlphaKey_t4704  InternalEnumerator_1_get_Current_m27083_gshared (InternalEnumerator_1_t6392 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4617, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1668 * L_3 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_3, (String_t*)(String_t*) &_stringLiteral4618, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m13206((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		GradientAlphaKey_t4704  L_8 = (( GradientAlphaKey_t4704  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.GradientAlphaKey>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GradientAlphaKey>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GradientAlphaKey>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GradientAlphaKey>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GradientAlphaKey>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GradientAlphaKey>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GradientAlphaKey>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.GradientAlphaKey>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.GradientAlphaKey>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GradientAlphaKey>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GradientAlphaKey>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.GradientAlphaKey>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GradientAlphaKey>::set_Item(System.Int32,T)
// System.Linq.Expressions.Expression`1<System.Object>
#include "System_Core_System_Linq_Expressions_Expression_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Expressions.Expression`1<System.Object>
#include "System_Core_System_Linq_Expressions_Expression_1_gen_1MethodDeclarations.h"

// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_2.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Linq.Expressions.LambdaExpression
#include "System_Core_System_Linq_Expressions_LambdaExpressionMethodDeclarations.h"


// System.Void System.Linq.Expressions.Expression`1<System.Object>::.ctor(System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Expression_1__ctor_m27420_gshared (Expression_1_t669 * __this, Expression_t630 * ___body, ReadOnlyCollection_1_t3251 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Expression_t630 * L_1 = ___body;
		ReadOnlyCollection_1_t3251 * L_2 = ___parameters;
		NullCheck((LambdaExpression_t1659 *)__this);
		LambdaExpression__ctor_m10256((LambdaExpression_t1659 *)__this, (Type_t *)L_0, (Expression_t630 *)L_1, (ReadOnlyCollection_1_t3251 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Linq.Enumerable/ReadOnlyCollectionOf`1<System.Object>
#include "System_Core_System_Linq_Enumerable_ReadOnlyCollectionOf_1_ge.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/ReadOnlyCollectionOf`1<System.Object>
#include "System_Core_System_Linq_Enumerable_ReadOnlyCollectionOf_1_geMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"


// System.Void System.Linq.Enumerable/ReadOnlyCollectionOf`1<System.Object>::.cctor()
extern "C" void ReadOnlyCollectionOf_1__cctor_m27451_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t1773 * L_0 = (ReadOnlyCollection_1_t1773 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (ReadOnlyCollection_1_t1773 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, (Object_t*)(Object_t*)((ObjectU5BU5D_t21*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), 0)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		((ReadOnlyCollectionOf_1_t6415_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->___Empty_0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// PixelCrushers.DialogueSystem.Emphasis
#include "DialogueSystem_PixelCrushers_DialogueSystem_Emphasis.h"


// T System.Collections.Generic.IEnumerator`1<PixelCrushers.DialogueSystem.Emphasis>::get_Current()
// System.Array/InternalEnumerator`1<PixelCrushers.DialogueSystem.Emphasis>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_33.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<PixelCrushers.DialogueSystem.Emphasis>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_33MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<PixelCrushers.DialogueSystem.Emphasis>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<PixelCrushers.DialogueSystem.Emphasis>(System.Int32)
extern "C" Emphasis_t692  Array_InternalArray__get_Item_TisEmphasis_t692_m73742_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisEmphasis_t692_m73742(__this, p0, method) (( Emphasis_t692  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisEmphasis_t692_m73742_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<PixelCrushers.DialogueSystem.Emphasis>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m27477_gshared (InternalEnumerator_1_t6420 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<PixelCrushers.DialogueSystem.Emphasis>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m27478_gshared (InternalEnumerator_1_t6420 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<PixelCrushers.DialogueSystem.Emphasis>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m27479_gshared (InternalEnumerator_1_t6420 * __this, const MethodInfo* method)
{
	{
		Emphasis_t692  L_0 = (( Emphasis_t692  (*) (InternalEnumerator_1_t6420 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t6420 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Emphasis_t692  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<PixelCrushers.DialogueSystem.Emphasis>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m27480_gshared (InternalEnumerator_1_t6420 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<PixelCrushers.DialogueSystem.Emphasis>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m27481_gshared (InternalEnumerator_1_t6420 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m13206((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<PixelCrushers.DialogueSystem.Emphasis>::get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" Emphasis_t692  InternalEnumerator_1_get_Current_m27482_gshared (InternalEnumerator_1_t6420 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4617, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1668 * L_3 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_3, (String_t*)(String_t*) &_stringLiteral4618, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m13206((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Emphasis_t692  L_8 = (( Emphasis_t692  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "DialogueSystem_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.Emphasis>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.Emphasis>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.Emphasis>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.Emphasis>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.Emphasis>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.Emphasis>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.Emphasis>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<PixelCrushers.DialogueSystem.Emphasis>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<PixelCrushers.DialogueSystem.Emphasis>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<PixelCrushers.DialogueSystem.Emphasis>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<PixelCrushers.DialogueSystem.Emphasis>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<PixelCrushers.DialogueSystem.Emphasis>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<PixelCrushers.DialogueSystem.Emphasis>::set_Item(System.Int32,T)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m27610_gshared (EventFunction_1_t708 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m27612_gshared (EventFunction_1_t708 * __this, Object_t * ___handler, BaseEventData_t637 * ___eventData, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventFunction_1_Invoke_m27612((EventFunction_1_t708 *)__this->___prev_9,___handler, ___eventData, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___handler, BaseEventData_t637 * ___eventData, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___handler, ___eventData,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___handler, BaseEventData_t637 * ___eventData, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___handler, ___eventData,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, BaseEventData_t637 * ___eventData, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___handler, ___eventData,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m27614_gshared (EventFunction_1_t708 * __this, Object_t * ___handler, BaseEventData_t637 * ___eventData, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___handler;
	__d_args[1] = ___eventData;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m27616_gshared (EventFunction_1_t708 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"

// System.Collections.Generic.Stack`1<System.Object>
#include "System_System_Collections_Generic_Stack_1_gen_2.h"
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6.h"
// System.Collections.Generic.Stack`1<System.Object>
#include "System_System_Collections_Generic_Stack_1_gen_2MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
struct Activator_t5599;
struct Object_t;
// System.Activator
#include "mscorlib_System_Activator.h"
// Declaration !!0 System.Activator::CreateInstance<System.Object>()
// !!0 System.Activator::CreateInstance<System.Object>()
extern "C" Object_t * Activator_CreateInstance_TisObject_t_m73755_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Activator_CreateInstance_TisObject_t_m73755(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Activator_CreateInstance_TisObject_t_m73755_gshared)(__this /* static, unused */, method)


// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m27724_gshared (ObjectPool_1_t6437 * __this, UnityAction_1_t6436 * ___actionOnGet, UnityAction_1_t6436 * ___actionOnRelease, const MethodInfo* method)
{
	{
		Stack_1_t6435 * L_0 = (Stack_1_t6435 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Stack_1_t6435 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___m_Stack_0 = L_0;
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		UnityAction_1_t6436 * L_1 = ___actionOnGet;
		__this->___m_ActionOnGet_1 = L_1;
		UnityAction_1_t6436 * L_2 = ___actionOnRelease;
		__this->___m_ActionOnRelease_2 = L_2;
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m27726_gshared (ObjectPool_1_t6437 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___U3CcountAllU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m27728_gshared (ObjectPool_1_t6437 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcountAllU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m27730_gshared (ObjectPool_1_t6437 * __this, const MethodInfo* method)
{
	{
		NullCheck((ObjectPool_1_t6437 *)__this);
		int32_t L_0 = (( int32_t (*) (ObjectPool_1_t6437 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ObjectPool_1_t6437 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		NullCheck((ObjectPool_1_t6437 *)__this);
		int32_t L_1 = (( int32_t (*) (ObjectPool_1_t6437 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((ObjectPool_1_t6437 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return ((int32_t)((int32_t)L_0-(int32_t)L_1));
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m27732_gshared (ObjectPool_1_t6437 * __this, const MethodInfo* method)
{
	{
		Stack_1_t6435 * L_0 = (Stack_1_t6435 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t6435 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count() */, (Stack_1_t6435 *)L_0);
		return L_1;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjectPool_1_Get_m27734_gshared (ObjectPool_1_t6437 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * G_B4_0 = {0};
	{
		Stack_1_t6435 * L_0 = (Stack_1_t6435 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t6435 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count() */, (Stack_1_t6435 *)L_0);
		if (L_1)
		{
			goto IL_0047;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_1));
		Object_t * L_2 = V_1;
		Object_t * L_3 = L_2;
		if (!((Object_t *)L_3))
		{
			goto IL_002e;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_1));
		Object_t * L_4 = V_1;
		G_B4_0 = L_4;
		goto IL_0033;
	}

IL_002e:
	{
		Object_t * L_5 = (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		G_B4_0 = L_5;
	}

IL_0033:
	{
		V_0 = (Object_t *)G_B4_0;
		NullCheck((ObjectPool_1_t6437 *)__this);
		int32_t L_6 = (( int32_t (*) (ObjectPool_1_t6437 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ObjectPool_1_t6437 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		NullCheck((ObjectPool_1_t6437 *)__this);
		(( void (*) (ObjectPool_1_t6437 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ObjectPool_1_t6437 *)__this, (int32_t)((int32_t)((int32_t)L_6+(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		goto IL_0053;
	}

IL_0047:
	{
		Stack_1_t6435 * L_7 = (Stack_1_t6435 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t6435 *)L_7);
		Object_t * L_8 = (( Object_t * (*) (Stack_1_t6435 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Stack_1_t6435 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		V_0 = (Object_t *)L_8;
	}

IL_0053:
	{
		UnityAction_1_t6436 * L_9 = (UnityAction_1_t6436 *)(__this->___m_ActionOnGet_1);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		UnityAction_1_t6436 * L_10 = (UnityAction_1_t6436 *)(__this->___m_ActionOnGet_1);
		Object_t * L_11 = V_0;
		NullCheck((UnityAction_1_t6436 *)L_10);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(!0) */, (UnityAction_1_t6436 *)L_10, (Object_t *)L_11);
	}

IL_006a:
	{
		Object_t * L_12 = V_0;
		return L_12;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m27736_gshared (ObjectPool_1_t6437 * __this, Object_t * ___element, const MethodInfo* method)
{
	{
		Stack_1_t6435 * L_0 = (Stack_1_t6435 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t6435 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count() */, (Stack_1_t6435 *)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		Stack_1_t6435 * L_2 = (Stack_1_t6435 *)(__this->___m_Stack_0);
		NullCheck((Stack_1_t6435 *)L_2);
		Object_t * L_3 = (( Object_t * (*) (Stack_1_t6435 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Stack_1_t6435 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_4 = L_3;
		Object_t * L_5 = ___element;
		Object_t * L_6 = L_5;
		bool L_7 = Object_ReferenceEquals_m11423(NULL /*static, unused*/, (Object_t *)((Object_t *)L_4), (Object_t *)((Object_t *)L_6), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		Debug_LogError_m2987(NULL /*static, unused*/, (Object_t *)(String_t*) &_stringLiteral959, /*hidden argument*/NULL);
	}

IL_003b:
	{
		UnityAction_1_t6436 * L_8 = (UnityAction_1_t6436 *)(__this->___m_ActionOnRelease_2);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		UnityAction_1_t6436 * L_9 = (UnityAction_1_t6436 *)(__this->___m_ActionOnRelease_2);
		Object_t * L_10 = ___element;
		NullCheck((UnityAction_1_t6436 *)L_9);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(!0) */, (UnityAction_1_t6436 *)L_9, (Object_t *)L_10);
	}

IL_0052:
	{
		Stack_1_t6435 * L_11 = (Stack_1_t6435 *)(__this->___m_Stack_0);
		Object_t * L_12 = ___element;
		NullCheck((Stack_1_t6435 *)L_11);
		(( void (*) (Stack_1_t6435 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((Stack_1_t6435 *)L_11, (Object_t *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_genMethodDeclarations.h"
struct Array_t;
struct ObjectU5BU5D_t21;
struct Object_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m23380_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21* p0, Object_t * p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisObject_t_m23380(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t *, int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisObject_t_m23380_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct ObjectU5BU5D_t21;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m10473_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t21** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisObject_t_m10473(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21**, int32_t, const MethodInfo*))Array_Resize_TisObject_t_m10473_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m27737_gshared (Stack_1_t6435 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m27738_gshared (Stack_1_t6435 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m27739_gshared (Stack_1_t6435 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ArrayTypeMismatchException_t5607_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m27740_gshared (Stack_1_t6435 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayTypeMismatchException_t5607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9866);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t21* L_0 = (ObjectU5BU5D_t21*)(__this->____array_1);
			if (!L_0)
			{
				goto IL_0025;
			}
		}

IL_000b:
		{
			ObjectU5BU5D_t21* L_1 = (ObjectU5BU5D_t21*)(__this->____array_1);
			Array_t * L_2 = ___dest;
			int32_t L_3 = ___idx;
			NullCheck((Array_t *)L_1);
			VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, (Array_t *)L_1, (Array_t *)L_2, (int32_t)L_3);
			Array_t * L_4 = ___dest;
			int32_t L_5 = ___idx;
			int32_t L_6 = (int32_t)(__this->____size_2);
			Array_Reverse_m16491(NULL /*static, unused*/, (Array_t *)L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		}

IL_0025:
		{
			goto IL_0036;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t496 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArrayTypeMismatchException_t5607_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t725 * L_7 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m10458(L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
		goto IL_0036;
	} // end catch (depth: 1)

IL_0036:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27741_gshared (Stack_1_t6435 * __this, const MethodInfo* method)
{
	{
		NullCheck((Stack_1_t6435 *)__this);
		Enumerator_t6438  L_0 = (( Enumerator_t6438  (*) (Stack_1_t6435 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Stack_1_t6435 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t6438  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m27742_gshared (Stack_1_t6435 * __this, const MethodInfo* method)
{
	{
		NullCheck((Stack_1_t6435 *)__this);
		Enumerator_t6438  L_0 = (( Enumerator_t6438  (*) (Stack_1_t6435 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Stack_1_t6435 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Enumerator_t6438  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::Contains(T)
extern "C" bool Stack_1_Contains_m27743_gshared (Stack_1_t6435 * __this, Object_t * ___t, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t21* L_0 = (ObjectU5BU5D_t21*)(__this->____array_1);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		ObjectU5BU5D_t21* L_1 = (ObjectU5BU5D_t21*)(__this->____array_1);
		Object_t * L_2 = ___t;
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21*, Object_t *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21*)L_1, (Object_t *)L_2, (int32_t)0, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B3_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" Object_t * Stack_1_Peek_m27744_gshared (Stack_1_t6435 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11414(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		ObjectU5BU5D_t21* L_2 = (ObjectU5BU5D_t21*)(__this->____array_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)((int32_t)L_3-(int32_t)1)));
		int32_t L_4 = ((int32_t)((int32_t)L_3-(int32_t)1));
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4));
	}
}
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" Object_t * Stack_1_Pop_m27745_gshared (Stack_1_t6435 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11414(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		ObjectU5BU5D_t21* L_3 = (ObjectU5BU5D_t21*)(__this->____array_1);
		int32_t L_4 = (int32_t)(__this->____size_2);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_1 = (int32_t)L_5;
		__this->____size_2 = L_5;
		int32_t L_6 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		int32_t L_7 = L_6;
		V_0 = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7));
		ObjectU5BU5D_t21* L_8 = (ObjectU5BU5D_t21*)(__this->____array_1);
		int32_t L_9 = (int32_t)(__this->____size_2);
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
		Object_t * L_10 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, L_9)) = (Object_t *)L_10;
		Object_t * L_11 = V_0;
		return L_11;
	}
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m27746_gshared (Stack_1_t6435 * __this, Object_t * ___t, const MethodInfo* method)
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t21** G_B4_0 = {0};
	ObjectU5BU5D_t21** G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t21** G_B5_1 = {0};
	{
		ObjectU5BU5D_t21* L_0 = (ObjectU5BU5D_t21*)(__this->____array_1);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->____size_2);
		ObjectU5BU5D_t21* L_2 = (ObjectU5BU5D_t21*)(__this->____array_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0043;
		}
	}

IL_001e:
	{
		ObjectU5BU5D_t21** L_3 = (ObjectU5BU5D_t21**)&(__this->____array_1);
		int32_t L_4 = (int32_t)(__this->____size_2);
		G_B3_0 = L_3;
		if (L_4)
		{
			G_B4_0 = L_3;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((int32_t)16);
		G_B5_1 = G_B3_0;
		goto IL_003e;
	}

IL_0036:
	{
		int32_t L_5 = (int32_t)(__this->____size_2);
		G_B5_0 = ((int32_t)((int32_t)2*(int32_t)L_5));
		G_B5_1 = G_B4_0;
	}

IL_003e:
	{
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t21**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t21**)G_B5_1, (int32_t)G_B5_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0043:
	{
		int32_t L_6 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_6+(int32_t)1));
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(__this->____array_1);
		int32_t L_8 = (int32_t)(__this->____size_2);
		int32_t L_9 = (int32_t)L_8;
		V_0 = (int32_t)L_9;
		__this->____size_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_0;
		Object_t * L_11 = ___t;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, L_10)) = (Object_t *)L_11;
		return;
	}
}
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m27747_gshared (Stack_1_t6435 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6438  Stack_1_GetEnumerator_m27748_gshared (Stack_1_t6435 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6438  L_0 = {0};
		(( void (*) (Enumerator_t6438 *, Stack_1_t6435 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(&L_0, (Stack_1_t6435 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Stack`1<T>)
extern "C" void Enumerator__ctor_m27749_gshared (Enumerator_t6438 * __this, Stack_1_t6435 * ___t, const MethodInfo* method)
{
	{
		Stack_1_t6435 * L_0 = ___t;
		__this->___parent_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		Stack_1_t6435 * L_1 = ___t;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->____version_2 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::System.Collections.IEnumerator.Reset()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m27750_gshared (Enumerator_t6438 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->____version_2);
		Stack_1_t6435 * L_1 = (Stack_1_t6435 *)(__this->___parent_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t1668 * L_3 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11414(L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m27751_gshared (Enumerator_t6438 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t6438 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t6438 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m27752_gshared (Enumerator_t6438 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Object>::MoveNext()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" bool Enumerator_MoveNext_m27753_gshared (Enumerator_t6438 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____version_2);
		Stack_1_t6435 * L_1 = (Stack_1_t6435 *)(__this->___parent_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t1668 * L_3 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11414(L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_003a;
		}
	}
	{
		Stack_1_t6435 * L_5 = (Stack_1_t6435 *)(__this->___parent_0);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)(L_5->____size_2);
		__this->___idx_1 = L_6;
	}

IL_003a:
	{
		int32_t L_7 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = (int32_t)(__this->___idx_1);
		int32_t L_9 = (int32_t)((int32_t)((int32_t)L_8-(int32_t)1));
		V_0 = (int32_t)L_9;
		__this->___idx_1 = L_9;
		int32_t L_10 = V_0;
		G_B7_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 0;
	}

IL_0060:
	{
		return G_B7_0;
	}
}
// T System.Collections.Generic.Stack`1/Enumerator<System.Object>::get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_get_Current_m27754_gshared (Enumerator_t6438 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11414(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Stack_1_t6435 * L_2 = (Stack_1_t6435 *)(__this->___parent_0);
		NullCheck(L_2);
		ObjectU5BU5D_t21* L_3 = (ObjectU5BU5D_t21*)(L_2->____array_1);
		int32_t L_4 = (int32_t)(__this->___idx_1);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m27755_gshared (UnityAction_1_t6436 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m27756_gshared (UnityAction_1_t6436 * __this, Object_t * ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m27756((UnityAction_1_t6436 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m27757_gshared (UnityAction_1_t6436 * __this, Object_t * ___arg0, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg0;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m27758_gshared (UnityAction_1_t6436 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Touch>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Touch>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_39.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.Touch>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_39MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Touch>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Touch>(System.Int32)
extern "C" Touch_t710  Array_InternalArray__get_Item_TisTouch_t710_m73760_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTouch_t710_m73760(__this, p0, method) (( Touch_t710  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTouch_t710_m73760_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Touch>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m27991_gshared (InternalEnumerator_1_t6451 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Touch>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m27992_gshared (InternalEnumerator_1_t6451 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Touch>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m27993_gshared (InternalEnumerator_1_t6451 * __this, const MethodInfo* method)
{
	{
		Touch_t710  L_0 = (( Touch_t710  (*) (InternalEnumerator_1_t6451 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t6451 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Touch_t710  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Touch>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m27994_gshared (InternalEnumerator_1_t6451 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Touch>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m27995_gshared (InternalEnumerator_1_t6451 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m13206((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Touch>::get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" Touch_t710  InternalEnumerator_1_get_Current_m27996_gshared (InternalEnumerator_1_t6451 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4617, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1668 * L_3 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_3, (String_t*)(String_t*) &_stringLiteral4618, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m13206((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Touch_t710  L_8 = (( Touch_t710  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Touch>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Touch>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Touch>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Touch>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Touch>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Touch>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Touch>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Touch>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Touch>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Touch>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Touch>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Touch>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Touch>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_41.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_41MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
extern "C" RaycastHit_t318  Array_InternalArray__get_Item_TisRaycastHit_t318_m73771_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastHit_t318_m73771(__this, p0, method) (( RaycastHit_t318  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisRaycastHit_t318_m73771_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m28106_gshared (InternalEnumerator_1_t6458 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28107_gshared (InternalEnumerator_1_t6458 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28108_gshared (InternalEnumerator_1_t6458 * __this, const MethodInfo* method)
{
	{
		RaycastHit_t318  L_0 = (( RaycastHit_t318  (*) (InternalEnumerator_1_t6458 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t6458 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastHit_t318  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m28109_gshared (InternalEnumerator_1_t6458 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m28110_gshared (InternalEnumerator_1_t6458 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m13206((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" RaycastHit_t318  InternalEnumerator_1_get_Current_m28111_gshared (InternalEnumerator_1_t6458 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4617, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1668 * L_3 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_3, (String_t*)(String_t*) &_stringLiteral4618, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m13206((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		RaycastHit_t318  L_8 = (( RaycastHit_t318  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit2D>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_42.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_42MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit2D>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit2D>(System.Int32)
extern "C" RaycastHit2D_t654  Array_InternalArray__get_Item_TisRaycastHit2D_t654_m73782_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastHit2D_t654_m73782(__this, p0, method) (( RaycastHit2D_t654  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisRaycastHit2D_t654_m73782_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m28112_gshared (InternalEnumerator_1_t6459 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28113_gshared (InternalEnumerator_1_t6459 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28114_gshared (InternalEnumerator_1_t6459 * __this, const MethodInfo* method)
{
	{
		RaycastHit2D_t654  L_0 = (( RaycastHit2D_t654  (*) (InternalEnumerator_1_t6459 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t6459 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastHit2D_t654  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m28115_gshared (InternalEnumerator_1_t6459 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m28116_gshared (InternalEnumerator_1_t6459 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m13206((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t654  InternalEnumerator_1_get_Current_m28117_gshared (InternalEnumerator_1_t6459 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4617, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1668 * L_3 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_3, (String_t*)(String_t*) &_stringLiteral4618, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m13206((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		RaycastHit2D_t654  L_8 = (( RaycastHit2D_t654  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit2D>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"

// UnityParseHelpers.Loom/DelayedQueueItem
#include "AssemblyU2DCSharp_UnityParseHelpers_Loom_DelayedQueueItem.h"
#include "Assembly-CSharp_ArrayTypes.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_32.h"
// System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Predicate_1_gen_43.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_3.h"
// System.Comparison`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Comparison_1_gen_32.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_32MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Predicate_1_gen_43MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_3MethodDeclarations.h"
struct Array_t;
struct DelayedQueueItemU5BU5D_t6465;
// Declaration System.Void System.Array::Resize<UnityParseHelpers.Loom/DelayedQueueItem>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityParseHelpers.Loom/DelayedQueueItem>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisDelayedQueueItem_t323_m73804_gshared (Object_t * __this /* static, unused */, DelayedQueueItemU5BU5D_t6465** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisDelayedQueueItem_t323_m73804(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, DelayedQueueItemU5BU5D_t6465**, int32_t, const MethodInfo*))Array_Resize_TisDelayedQueueItem_t323_m73804_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
struct DelayedQueueItemU5BU5D_t6465;
// Declaration System.Int32 System.Array::IndexOf<UnityParseHelpers.Loom/DelayedQueueItem>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityParseHelpers.Loom/DelayedQueueItem>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisDelayedQueueItem_t323_m73805_gshared (Object_t * __this /* static, unused */, DelayedQueueItemU5BU5D_t6465* p0, DelayedQueueItem_t323  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisDelayedQueueItem_t323_m73805(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, DelayedQueueItemU5BU5D_t6465*, DelayedQueueItem_t323 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisDelayedQueueItem_t323_m73805_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct DelayedQueueItemU5BU5D_t6465;
struct IComparer_1_t9993;
// Declaration System.Void System.Array::Sort<UnityParseHelpers.Loom/DelayedQueueItem>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityParseHelpers.Loom/DelayedQueueItem>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisDelayedQueueItem_t323_m73807_gshared (Object_t * __this /* static, unused */, DelayedQueueItemU5BU5D_t6465* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisDelayedQueueItem_t323_m73807(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, DelayedQueueItemU5BU5D_t6465*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisDelayedQueueItem_t323_m73807_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct DelayedQueueItemU5BU5D_t6465;
struct Comparison_1_t6475;
// Declaration System.Void System.Array::Sort<UnityParseHelpers.Loom/DelayedQueueItem>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityParseHelpers.Loom/DelayedQueueItem>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisDelayedQueueItem_t323_m73813_gshared (Object_t * __this /* static, unused */, DelayedQueueItemU5BU5D_t6465* p0, int32_t p1, Comparison_1_t6475 * p2, const MethodInfo* method);
#define Array_Sort_TisDelayedQueueItem_t323_m73813(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, DelayedQueueItemU5BU5D_t6465*, int32_t, Comparison_1_t6475 *, const MethodInfo*))Array_Sort_TisDelayedQueueItem_t323_m73813_gshared)(__this /* static, unused */, p0, p1, p2, method)


// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor()
extern "C" void List_1__ctor_m3209_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DelayedQueueItemU5BU5D_t6465* L_0 = ((List_1_t329_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m28220_gshared (List_1_t329 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t329 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DelayedQueueItemU5BU5D_t6465* L_3 = ((List_1_t329_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t329 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((DelayedQueueItemU5BU5D_t6465*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t329 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1__ctor_m28221_gshared (List_1_t329 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_1 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_1, (String_t*)(String_t*) &_stringLiteral2014, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((DelayedQueueItemU5BU5D_t6465*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m28222_gshared (List_1_t329 * __this, DelayedQueueItemU5BU5D_t6465* ___data, int32_t ___size, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		DelayedQueueItemU5BU5D_t6465* L_0 = ___data;
		__this->____items_1 = L_0;
		int32_t L_1 = ___size;
		__this->____size_2 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::.cctor()
extern "C" void List_1__cctor_m28223_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t329_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((DelayedQueueItemU5BU5D_t6465*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28224_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t329 *)__this);
		Enumerator_t721  L_0 = (( Enumerator_t721  (*) (List_1_t329 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t329 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t721  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m28225_gshared (List_1_t329 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		DelayedQueueItemU5BU5D_t6465* L_0 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28226_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t329 *)__this);
		Enumerator_t721  L_0 = (( Enumerator_t721  (*) (List_1_t329 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t329 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t721  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_Add_m28227_gshared (List_1_t329 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2843);
		InvalidCastException_t2024_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3772);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t329 *)__this);
			VirtActionInvoker1< DelayedQueueItem_t323  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Add(T) */, (List_1_t329 *)__this, (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t496 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1698_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t2024_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t725 * L_2 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_2, (String_t*)(String_t*) &_stringLiteral4734, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m28228_gshared (List_1_t329 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2843);
		InvalidCastException_t2024_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3772);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t329 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, DelayedQueueItem_t323  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Contains(T) */, (List_1_t329 *)__this, (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (bool)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t496 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1698_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t2024_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m28229_gshared (List_1_t329 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2843);
		InvalidCastException_t2024_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3772);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t329 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, DelayedQueueItem_t323  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::IndexOf(T) */, (List_1_t329 *)__this, (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (int32_t)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t496 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1698_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t2024_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Insert_m28230_gshared (List_1_t329 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2843);
		InvalidCastException_t2024_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3772);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t329 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t329 *)__this);
			VirtActionInvoker2< int32_t, DelayedQueueItem_t323  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Insert(System.Int32,T) */, (List_1_t329 *)__this, (int32_t)L_1, (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t496 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1698_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t2024_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t725 * L_3 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_3, (String_t*)(String_t*) &_stringLiteral4734, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m28231_gshared (List_1_t329 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2843);
		InvalidCastException_t2024_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3772);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t329 *)__this);
			VirtFuncInvoker1< bool, DelayedQueueItem_t323  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Remove(T) */, (List_1_t329 *)__this, (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t496 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1698_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t2024_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28232_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m28233_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m28234_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m28235_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m28236_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m28237_gshared (List_1_t329 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t329 *)__this);
		DelayedQueueItem_t323  L_1 = (DelayedQueueItem_t323 )VirtFuncInvoker1< DelayedQueueItem_t323 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Item(System.Int32) */, (List_1_t329 *)__this, (int32_t)L_0);
		DelayedQueueItem_t323  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_set_Item_m28238_gshared (List_1_t329 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2843);
		InvalidCastException_t2024_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3772);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t329 *)__this);
			VirtActionInvoker2< int32_t, DelayedQueueItem_t323  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::set_Item(System.Int32,T) */, (List_1_t329 *)__this, (int32_t)L_0, (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t496 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1698_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t2024_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t725 * L_2 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_2, (String_t*)(String_t*) &_stringLiteral1582, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Add(T)
extern "C" void List_1_Add_m28239_gshared (List_1_t329 * __this, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		DelayedQueueItemU5BU5D_t6465* L_1 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t329 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0017:
	{
		DelayedQueueItemU5BU5D_t6465* L_2 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		DelayedQueueItem_t323  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_2, L_5)) = (DelayedQueueItem_t323 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m28240_gshared (List_1_t329 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		DelayedQueueItemU5BU5D_t6465* L_3 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		NullCheck((List_1_t329 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t329 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t329 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m13294(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m13294(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t329 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::CheckRange(System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckRange_m28241_gshared (List_1_t329 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___idx;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_1 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_1, (String_t*)(String_t*) &_stringLiteral2016, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_3 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_3, (String_t*)(String_t*) &_stringLiteral1913, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int32_t L_4 = ___idx;
		int32_t L_5 = ___count;
		int32_t L_6 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))) > ((uint32_t)L_6))))
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_t725 * L_7 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_7, (String_t*)(String_t*) &_stringLiteral4735, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m28242_gshared (List_1_t329 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t329 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		DelayedQueueItemU5BU5D_t6465* L_5 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< DelayedQueueItemU5BU5D_t6465*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (DelayedQueueItemU5BU5D_t6465*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m28243_gshared (List_1_t329 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	DelayedQueueItem_t323  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			DelayedQueueItem_t323  L_3 = (DelayedQueueItem_t323 )InterfaceFuncInvoker0< DelayedQueueItem_t323  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (DelayedQueueItem_t323 )L_3;
			DelayedQueueItem_t323  L_4 = V_0;
			NullCheck((List_1_t329 *)__this);
			VirtActionInvoker1< DelayedQueueItem_t323  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Add(T) */, (List_1_t329 *)__this, (DelayedQueueItem_t323 )L_4);
		}

IL_0017:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(33)
		}

IL_0025:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3220_gshared (List_1_t329 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t329 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_3 = V_0;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t329 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t329 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6468 * List_1_AsReadOnly_m28244_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t6468 * L_0 = (ReadOnlyCollection_1_t6468 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t6468 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Clear()
extern "C" void List_1_Clear_m28245_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		DelayedQueueItemU5BU5D_t6465* L_0 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		DelayedQueueItemU5BU5D_t6465* L_1 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Contains(T)
extern "C" bool List_1_Contains_m28246_gshared (List_1_t329 * __this, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	{
		DelayedQueueItemU5BU5D_t6465* L_0 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		DelayedQueueItem_t323  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, DelayedQueueItemU5BU5D_t6465*, DelayedQueueItem_t323 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (DelayedQueueItemU5BU5D_t6465*)L_0, (DelayedQueueItem_t323 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m28247_gshared (List_1_t329 * __this, DelayedQueueItemU5BU5D_t6465* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		DelayedQueueItemU5BU5D_t6465* L_0 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		DelayedQueueItemU5BU5D_t6465* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Find(System.Predicate`1<T>)
extern TypeInfo* List_1_t329_il2cpp_TypeInfo_var;
extern TypeInfo* DelayedQueueItem_t323_il2cpp_TypeInfo_var;
extern "C" DelayedQueueItem_t323  List_1_Find_m28248_gshared (List_1_t329 * __this, Predicate_1_t6472 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		DelayedQueueItem_t323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	DelayedQueueItem_t323  V_1 = {0};
	DelayedQueueItem_t323  G_B3_0 = {0};
	{
		Predicate_1_t6472 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t329_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t6472 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t6472 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t6472 * L_2 = ___match;
		NullCheck((List_1_t329 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t329 *, int32_t, int32_t, Predicate_1_t6472 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t329 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t6472 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		DelayedQueueItemU5BU5D_t6465* L_5 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (DelayedQueueItem_t323_il2cpp_TypeInfo_var, (&V_1));
		DelayedQueueItem_t323  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::CheckMatch(System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckMatch_m28249_gshared (Object_t * __this /* static, unused */, Predicate_1_t6472 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t6472 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral4614, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::FindAll(System.Predicate`1<T>)
extern TypeInfo* List_1_t329_il2cpp_TypeInfo_var;
extern "C" List_1_t329 * List_1_FindAll_m28250_gshared (List_1_t329 * __this, Predicate_1_t6472 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t6472 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t329_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t6472 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t6472 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_1) > ((int32_t)((int32_t)65536))))
		{
			goto IL_001b;
		}
	}
	{
		Predicate_1_t6472 * L_2 = ___match;
		NullCheck((List_1_t329 *)__this);
		List_1_t329 * L_3 = (( List_1_t329 * (*) (List_1_t329 *, Predicate_1_t6472 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((List_1_t329 *)__this, (Predicate_1_t6472 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		return L_3;
	}

IL_001b:
	{
		Predicate_1_t6472 * L_4 = ___match;
		NullCheck((List_1_t329 *)__this);
		List_1_t329 * L_5 = (( List_1_t329 * (*) (List_1_t329 *, Predicate_1_t6472 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)((List_1_t329 *)__this, (Predicate_1_t6472 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_5;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t329 * List_1_FindAllStackBits_m28251_gshared (List_1_t329 * __this, Predicate_1_t6472 * ___match, const MethodInfo* method)
{
	uint32_t* V_0 = {0};
	uint32_t* V_1 = {0};
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	DelayedQueueItemU5BU5D_t6465* V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		if ((uint64_t)(uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1)) * (uint64_t)(uint32_t)4 > (uint64_t)(uint32_t)4294967295U)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
		int8_t* L_1 = (int8_t*) alloca(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1))*(int32_t)4)));
		memset(L_1,0,((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1))*(int32_t)4)));
		V_0 = (uint32_t*)(L_1);
		uint32_t* L_2 = V_0;
		V_1 = (uint32_t*)L_2;
		V_2 = (int32_t)0;
		V_3 = (uint32_t)((int32_t)-2147483648);
		V_4 = (int32_t)0;
		goto IL_0056;
	}

IL_001f:
	{
		Predicate_1_t6472 * L_3 = ___match;
		DelayedQueueItemU5BU5D_t6465* L_4 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_5 = V_4;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t6472 *)L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, DelayedQueueItem_t323  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>::Invoke(T) */, (Predicate_1_t6472 *)L_3, (DelayedQueueItem_t323 )(*(DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_4, L_6)));
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		uint32_t* L_8 = V_1;
		uint32_t* L_9 = V_1;
		uint32_t L_10 = V_3;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)((int32_t)(*((uint32_t*)L_9))|(int32_t)L_10));
		int32_t L_11 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003e:
	{
		uint32_t L_12 = V_3;
		V_3 = (uint32_t)((int32_t)((uint32_t)L_12>>1));
		uint32_t L_13 = V_3;
		if (L_13)
		{
			goto IL_0050;
		}
	}
	{
		uint32_t* L_14 = V_1;
		V_1 = (uint32_t*)((intptr_t)((intptr_t)L_14+(intptr_t)(((intptr_t)4))));
		V_3 = (uint32_t)((int32_t)-2147483648);
	}

IL_0050:
	{
		int32_t L_15 = V_4;
		V_4 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0056:
	{
		int32_t L_16 = V_4;
		int32_t L_17 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_18 = V_2;
		V_5 = (DelayedQueueItemU5BU5D_t6465*)((DelayedQueueItemU5BU5D_t6465*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_18));
		V_3 = (uint32_t)((int32_t)-2147483648);
		uint32_t* L_19 = V_0;
		V_1 = (uint32_t*)L_19;
		V_6 = (int32_t)0;
		V_7 = (int32_t)0;
		goto IL_00b2;
	}

IL_0078:
	{
		uint32_t* L_20 = V_1;
		uint32_t L_21 = V_3;
		uint32_t L_22 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)(*((uint32_t*)L_20))&(int32_t)L_21))) == ((uint32_t)L_22))))
		{
			goto IL_009a;
		}
	}
	{
		DelayedQueueItemU5BU5D_t6465* L_23 = V_5;
		int32_t L_24 = V_6;
		int32_t L_25 = (int32_t)L_24;
		V_6 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		DelayedQueueItemU5BU5D_t6465* L_26 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_27 = V_7;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_25);
		*((DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_23, L_25)) = (DelayedQueueItem_t323 )(*(DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_26, L_28));
	}

IL_009a:
	{
		uint32_t L_29 = V_3;
		V_3 = (uint32_t)((int32_t)((uint32_t)L_29>>1));
		uint32_t L_30 = V_3;
		if (L_30)
		{
			goto IL_00ac;
		}
	}
	{
		uint32_t* L_31 = V_1;
		V_1 = (uint32_t*)((intptr_t)((intptr_t)L_31+(intptr_t)(((intptr_t)4))));
		V_3 = (uint32_t)((int32_t)-2147483648);
	}

IL_00ac:
	{
		int32_t L_32 = V_7;
		V_7 = (int32_t)((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00b2:
	{
		int32_t L_33 = V_7;
		int32_t L_34 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_33) >= ((int32_t)L_34)))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_35 = V_6;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0078;
		}
	}

IL_00c1:
	{
		DelayedQueueItemU5BU5D_t6465* L_37 = V_5;
		int32_t L_38 = V_2;
		List_1_t329 * L_39 = (List_1_t329 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t329 *, DelayedQueueItemU5BU5D_t6465*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(L_39, (DelayedQueueItemU5BU5D_t6465*)L_37, (int32_t)L_38, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		return L_39;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t329 * List_1_FindAllList_m28252_gshared (List_1_t329 * __this, Predicate_1_t6472 * ___match, const MethodInfo* method)
{
	List_1_t329 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t329 * L_0 = (List_1_t329 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t329 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		V_0 = (List_1_t329 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0034;
	}

IL_000a:
	{
		Predicate_1_t6472 * L_1 = ___match;
		DelayedQueueItemU5BU5D_t6465* L_2 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t6472 *)L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, DelayedQueueItem_t323  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>::Invoke(T) */, (Predicate_1_t6472 *)L_1, (DelayedQueueItem_t323 )(*(DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		List_1_t329 * L_6 = V_0;
		DelayedQueueItemU5BU5D_t6465* L_7 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((List_1_t329 *)L_6);
		VirtActionInvoker1< DelayedQueueItem_t323  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Add(T) */, (List_1_t329 *)L_6, (DelayedQueueItem_t323 )(*(DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_7, L_9)));
	}

IL_0030:
	{
		int32_t L_10 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000a;
		}
	}
	{
		List_1_t329 * L_13 = V_0;
		return L_13;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::FindIndex(System.Predicate`1<T>)
extern TypeInfo* List_1_t329_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_FindIndex_m28253_gshared (List_1_t329 * __this, Predicate_1_t6472 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t6472 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t329_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t6472 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t6472 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t6472 * L_2 = ___match;
		NullCheck((List_1_t329 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t329 *, int32_t, int32_t, Predicate_1_t6472 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t329 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t6472 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_3;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m28254_gshared (List_1_t329 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6472 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = (int32_t)L_2;
		goto IL_0022;
	}

IL_0008:
	{
		Predicate_1_t6472 * L_3 = ___match;
		DelayedQueueItemU5BU5D_t6465* L_4 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t6472 *)L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, DelayedQueueItem_t323  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>::Invoke(T) */, (Predicate_1_t6472 *)L_3, (DelayedQueueItem_t323 )(*(DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_4, L_6)));
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetEnumerator()
extern "C" Enumerator_t721  List_1_GetEnumerator_m3221_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		Enumerator_t721  L_0 = {0};
		(( void (*) (Enumerator_t721 *, List_1_t329 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(&L_0, (List_1_t329 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t329 * List_1_GetRange_m28255_gshared (List_1_t329 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	DelayedQueueItemU5BU5D_t6465* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t329 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_2 = ___count;
		V_0 = (DelayedQueueItemU5BU5D_t6465*)((DelayedQueueItemU5BU5D_t6465*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		DelayedQueueItemU5BU5D_t6465* L_3 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_4 = ___index;
		DelayedQueueItemU5BU5D_t6465* L_5 = V_0;
		int32_t L_6 = ___count;
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, (int32_t)L_4, (Array_t *)(Array_t *)L_5, (int32_t)0, (int32_t)L_6, /*hidden argument*/NULL);
		DelayedQueueItemU5BU5D_t6465* L_7 = V_0;
		int32_t L_8 = ___count;
		List_1_t329 * L_9 = (List_1_t329 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t329 *, DelayedQueueItemU5BU5D_t6465*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(L_9, (DelayedQueueItemU5BU5D_t6465*)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		return L_9;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m28256_gshared (List_1_t329 * __this, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	{
		DelayedQueueItemU5BU5D_t6465* L_0 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		DelayedQueueItem_t323  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, DelayedQueueItemU5BU5D_t6465*, DelayedQueueItem_t323 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (DelayedQueueItemU5BU5D_t6465*)L_0, (DelayedQueueItem_t323 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m28257_gshared (List_1_t329 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		DelayedQueueItemU5BU5D_t6465* L_5 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_6 = ___start;
		DelayedQueueItemU5BU5D_t6465* L_7 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0031:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		DelayedQueueItemU5BU5D_t6465* L_15 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckIndex_m28258_gshared (List_1_t329 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1703 * L_3 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_3, (String_t*)(String_t*) &_stringLiteral2016, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m28259_gshared (List_1_t329 * __this, int32_t ___index, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t329 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		DelayedQueueItemU5BU5D_t6465* L_2 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t329 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t329 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		DelayedQueueItemU5BU5D_t6465* L_4 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_5 = ___index;
		DelayedQueueItem_t323  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_4, L_5)) = (DelayedQueueItem_t323 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckCollection_m28260_gshared (List_1_t329 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral2013, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m28261_gshared (List_1_t329 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	DelayedQueueItemU5BU5D_t6465* V_0 = {0};
	Object_t* V_1 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t329 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_1 = ___index;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t329 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t* L_2 = ___collection;
		if ((!(((Object_t*)(Object_t*)L_2) == ((Object_t*)(List_1_t329 *)__this))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->____size_2);
		V_0 = (DelayedQueueItemU5BU5D_t6465*)((DelayedQueueItemU5BU5D_t6465*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_3));
		DelayedQueueItemU5BU5D_t6465* L_4 = V_0;
		NullCheck((List_1_t329 *)__this);
		VirtActionInvoker2< DelayedQueueItemU5BU5D_t6465*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::CopyTo(T[],System.Int32) */, (List_1_t329 *)__this, (DelayedQueueItemU5BU5D_t6465*)L_4, (int32_t)0);
		int32_t L_5 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t329 *)__this, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_6 = ___index;
		DelayedQueueItemU5BU5D_t6465* L_7 = V_0;
		NullCheck(L_7);
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t329 *)__this, (int32_t)L_6, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		DelayedQueueItemU5BU5D_t6465* L_8 = V_0;
		DelayedQueueItemU5BU5D_t6465* L_9 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_10 = ___index;
		DelayedQueueItemU5BU5D_t6465* L_11 = V_0;
		NullCheck(L_11);
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_8, (int32_t)0, (Array_t *)(Array_t *)L_9, (int32_t)L_10, (int32_t)(((int32_t)(((Array_t *)L_11)->max_length))), /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_004f:
	{
		Object_t* L_12 = ___collection;
		V_1 = (Object_t*)((Object_t*)IsInst(L_12, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_13 = V_1;
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_14 = ___index;
		Object_t* L_15 = V_1;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)((List_1_t329 *)__this, (int32_t)L_14, (Object_t*)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		goto IL_006b;
	}

IL_0063:
	{
		int32_t L_16 = ___index;
		Object_t* L_17 = ___collection;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((List_1_t329 *)__this, (int32_t)L_16, (Object_t*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
	}

IL_006b:
	{
		int32_t L_18 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m28262_gshared (List_1_t329 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t329 *)__this, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_3 = ___index;
		int32_t L_4 = V_0;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t329 *)__this, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		Object_t* L_5 = ___collection;
		DelayedQueueItemU5BU5D_t6465* L_6 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_7 = ___index;
		NullCheck((Object_t*)L_5);
		InterfaceActionInvoker2< DelayedQueueItemU5BU5D_t6465*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5, (DelayedQueueItemU5BU5D_t6465*)L_6, (int32_t)L_7);
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void List_1_InsertEnumeration_m28263_gshared (List_1_t329 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	DelayedQueueItem_t323  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			DelayedQueueItem_t323  L_3 = (DelayedQueueItem_t323 )InterfaceFuncInvoker0< DelayedQueueItem_t323  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (DelayedQueueItem_t323 )L_3;
			int32_t L_4 = ___index;
			int32_t L_5 = (int32_t)L_4;
			___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
			DelayedQueueItem_t323  L_6 = V_0;
			NullCheck((List_1_t329 *)__this);
			VirtActionInvoker2< int32_t, DelayedQueueItem_t323  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Insert(System.Int32,T) */, (List_1_t329 *)__this, (int32_t)L_5, (DelayedQueueItem_t323 )L_6);
		}

IL_001f:
		{
			Object_t* L_7 = V_1;
			NullCheck((Object_t *)L_7);
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_7);
			if (L_8)
			{
				goto IL_0009;
			}
		}

IL_0027:
		{
			IL2CPP_LEAVE(0x34, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			Object_t* L_9 = V_1;
			if (L_9)
			{
				goto IL_002d;
			}
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(41)
		}

IL_002d:
		{
			Object_t* L_10 = V_1;
			NullCheck((Object_t *)L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_10);
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0034:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Remove(T)
extern "C" bool List_1_Remove_m28264_gshared (List_1_t329 * __this, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		DelayedQueueItem_t323  L_0 = ___item;
		NullCheck((List_1_t329 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, DelayedQueueItem_t323  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::IndexOf(T) */, (List_1_t329 *)__this, (DelayedQueueItem_t323 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t329 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::RemoveAt(System.Int32) */, (List_1_t329 *)__this, (int32_t)L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::RemoveAll(System.Predicate`1<T>)
extern TypeInfo* List_1_t329_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m28265_gshared (List_1_t329 * __this, Predicate_1_t6472 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t6472 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t329_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t6472 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t6472 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t6472 * L_1 = ___match;
		DelayedQueueItemU5BU5D_t6465* L_2 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t6472 *)L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, DelayedQueueItem_t323  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>::Invoke(T) */, (Predicate_1_t6472 *)L_1, (DelayedQueueItem_t323 )(*(DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_11 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0084;
	}

IL_0050:
	{
		Predicate_1_t6472 * L_13 = ___match;
		DelayedQueueItemU5BU5D_t6465* L_14 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t6472 *)L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, DelayedQueueItem_t323  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>::Invoke(T) */, (Predicate_1_t6472 *)L_13, (DelayedQueueItem_t323 )(*(DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		DelayedQueueItemU5BU5D_t6465* L_18 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		DelayedQueueItemU5BU5D_t6465* L_21 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_18, L_20)) = (DelayedQueueItem_t323 )(*(DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_21, L_23));
	}

IL_0080:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		DelayedQueueItemU5BU5D_t6465* L_29 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00a2:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1_RemoveAt_m28266_gshared (List_1_t329 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1703 * L_3 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_3, (String_t*)(String_t*) &_stringLiteral2016, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t329 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		DelayedQueueItemU5BU5D_t6465* L_5 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m28267_gshared (List_1_t329 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t329 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_3 = ___index;
		int32_t L_4 = ___count;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t329 *)__this, (int32_t)L_3, (int32_t)((-L_4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		DelayedQueueItemU5BU5D_t6465* L_5 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		int32_t L_7 = ___count;
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		int32_t L_8 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Reverse()
extern "C" void List_1_Reverse_m28268_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		DelayedQueueItemU5BU5D_t6465* L_0 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m16491(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Sort()
extern TypeInfo* Comparer_1_t6473_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m28269_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t6473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12883);
		s_Il2CppMethodIntialized = true;
	}
	{
		DelayedQueueItemU5BU5D_t6465* L_0 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t6473_il2cpp_TypeInfo_var);
		Comparer_1_t6473 * L_2 = (( Comparer_1_t6473 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		(( void (*) (Object_t * /* static, unused */, DelayedQueueItemU5BU5D_t6465*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41)->method)(NULL /*static, unused*/, (DelayedQueueItemU5BU5D_t6465*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m28270_gshared (List_1_t329 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		DelayedQueueItemU5BU5D_t6465* L_0 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Object_t* L_2 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, DelayedQueueItemU5BU5D_t6465*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41)->method)(NULL /*static, unused*/, (DelayedQueueItemU5BU5D_t6465*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m28271_gshared (List_1_t329 * __this, Comparison_1_t6475 * ___comparison, const MethodInfo* method)
{
	{
		DelayedQueueItemU5BU5D_t6465* L_0 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t6475 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, DelayedQueueItemU5BU5D_t6465*, int32_t, Comparison_1_t6475 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42)->method)(NULL /*static, unused*/, (DelayedQueueItemU5BU5D_t6465*)L_0, (int32_t)L_1, (Comparison_1_t6475 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::ToArray()
extern "C" DelayedQueueItemU5BU5D_t6465* List_1_ToArray_m28272_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	DelayedQueueItemU5BU5D_t6465* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (DelayedQueueItemU5BU5D_t6465*)((DelayedQueueItemU5BU5D_t6465*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		DelayedQueueItemU5BU5D_t6465* L_1 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		DelayedQueueItemU5BU5D_t6465* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m13208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		DelayedQueueItemU5BU5D_t6465* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::TrimExcess()
extern "C" void List_1_TrimExcess_m28273_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t329 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m28274_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		DelayedQueueItemU5BU5D_t6465* L_0 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m28275_gshared (List_1_t329 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_2 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10470(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		DelayedQueueItemU5BU5D_t6465** L_3 = (DelayedQueueItemU5BU5D_t6465**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, DelayedQueueItemU5BU5D_t6465**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(NULL /*static, unused*/, (DelayedQueueItemU5BU5D_t6465**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Count()
extern "C" int32_t List_1_get_Count_m28276_gshared (List_1_t329 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" DelayedQueueItem_t323  List_1_get_Item_m28277_gshared (List_1_t329 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_2 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_2, (String_t*)(String_t*) &_stringLiteral2016, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		DelayedQueueItemU5BU5D_t6465* L_3 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/DelayedQueueItem>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Item_m28278_gshared (List_1_t329 * __this, int32_t ___index, DelayedQueueItem_t323  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t329 *)__this);
		(( void (*) (List_1_t329 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t329 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_3 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_3, (String_t*)(String_t*) &_stringLiteral2016, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		DelayedQueueItemU5BU5D_t6465* L_4 = (DelayedQueueItemU5BU5D_t6465*)(__this->____items_1);
		int32_t L_5 = ___index;
		DelayedQueueItem_t323  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_4, L_5)) = (DelayedQueueItem_t323 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Current()
// System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_43.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_43MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityParseHelpers.Loom/DelayedQueueItem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityParseHelpers.Loom/DelayedQueueItem>(System.Int32)
extern "C" DelayedQueueItem_t323  Array_InternalArray__get_Item_TisDelayedQueueItem_t323_m73793_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisDelayedQueueItem_t323_m73793(__this, p0, method) (( DelayedQueueItem_t323  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisDelayedQueueItem_t323_m73793_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m28279_gshared (InternalEnumerator_1_t6466 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28280_gshared (InternalEnumerator_1_t6466 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28281_gshared (InternalEnumerator_1_t6466 * __this, const MethodInfo* method)
{
	{
		DelayedQueueItem_t323  L_0 = (( DelayedQueueItem_t323  (*) (InternalEnumerator_1_t6466 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t6466 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DelayedQueueItem_t323  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/DelayedQueueItem>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m28282_gshared (InternalEnumerator_1_t6466 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/DelayedQueueItem>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m28283_gshared (InternalEnumerator_1_t6466 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m13206((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" DelayedQueueItem_t323  InternalEnumerator_1_get_Current_m28284_gshared (InternalEnumerator_1_t6466 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4617, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1668 * L_3 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_3, (String_t*)(String_t*) &_stringLiteral4618, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m13206((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		DelayedQueueItem_t323  L_8 = (( DelayedQueueItem_t323  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m28285_gshared (Enumerator_t721 * __this, List_1_t329 * ___l, const MethodInfo* method)
{
	{
		List_1_t329 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t329 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m28286_gshared (Enumerator_t721 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t721 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t721 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___next_1 = 0;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m28287_gshared (Enumerator_t721 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t721 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t721 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11414(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		DelayedQueueItem_t323  L_2 = (DelayedQueueItem_t323 )(__this->___current_3);
		DelayedQueueItem_t323  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/DelayedQueueItem>::Dispose()
extern "C" void Enumerator_Dispose_m28288_gshared (Enumerator_t721 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t329 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/DelayedQueueItem>::VerifyState()
extern TypeInfo* ObjectDisposedException_t3310_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m28289_gshared (Enumerator_t721 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5695);
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t329 * L_0 = (List_1_t329 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t721  L_1 = (*(Enumerator_t721 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m3130((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t3310 * L_5 = (ObjectDisposedException_t3310 *)il2cpp_codegen_object_new (ObjectDisposedException_t3310_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m10475(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t329 * L_7 = (List_1_t329 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1668 * L_9 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_9, (String_t*)(String_t*) &_stringLiteral4736, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/DelayedQueueItem>::MoveNext()
extern "C" bool Enumerator_MoveNext_m3223_gshared (Enumerator_t721 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t721 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t721 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t329 * L_2 = (List_1_t329 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t329 * L_4 = (List_1_t329 *)(__this->___l_0);
		NullCheck(L_4);
		DelayedQueueItemU5BU5D_t6465* L_5 = (DelayedQueueItemU5BU5D_t6465*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(DelayedQueueItem_t323 *)(DelayedQueueItem_t323 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/DelayedQueueItem>::get_Current()
extern "C" DelayedQueueItem_t323  Enumerator_get_Current_m3222_gshared (Enumerator_t721 * __this, const MethodInfo* method)
{
	{
		DelayedQueueItem_t323  L_0 = (DelayedQueueItem_t323 )(__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_3MethodDeclarations.h"


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1__ctor_m28290_gshared (ReadOnlyCollection_1_t6468 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral4737, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.Generic.ICollection<T>.Add(T)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28291_gshared (ReadOnlyCollection_1_t6468 * __this, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m28292_gshared (ReadOnlyCollection_1_t6468 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m28293_gshared (ReadOnlyCollection_1_t6468 * __this, int32_t ___index, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m28294_gshared (ReadOnlyCollection_1_t6468 * __this, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m28295_gshared (ReadOnlyCollection_1_t6468 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" DelayedQueueItem_t323  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m28296_gshared (ReadOnlyCollection_1_t6468 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t6468 *)__this);
		DelayedQueueItem_t323  L_1 = (DelayedQueueItem_t323 )VirtFuncInvoker1< DelayedQueueItem_t323 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t6468 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m28297_gshared (ReadOnlyCollection_1_t6468 * __this, int32_t ___index, DelayedQueueItem_t323  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28298_gshared (ReadOnlyCollection_1_t6468 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t749_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m28299_gshared (ReadOnlyCollection_1_t6468 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t749_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t749_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t749_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t746_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m28300_gshared (ReadOnlyCollection_1_t6468 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t746_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m28301_gshared (ReadOnlyCollection_1_t6468 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m28302_gshared (ReadOnlyCollection_1_t6468 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m28303_gshared (ReadOnlyCollection_1_t6468 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, DelayedQueueItem_t323  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_2, (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m28304_gshared (ReadOnlyCollection_1_t6468 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, DelayedQueueItem_t323  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m28305_gshared (ReadOnlyCollection_1_t6468 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m28306_gshared (ReadOnlyCollection_1_t6468 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m28307_gshared (ReadOnlyCollection_1_t6468 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m28308_gshared (ReadOnlyCollection_1_t6468 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m28309_gshared (ReadOnlyCollection_1_t6468 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m28310_gshared (ReadOnlyCollection_1_t6468 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m28311_gshared (ReadOnlyCollection_1_t6468 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m28312_gshared (ReadOnlyCollection_1_t6468 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		DelayedQueueItem_t323  L_2 = (DelayedQueueItem_t323 )InterfaceFuncInvoker1< DelayedQueueItem_t323 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		DelayedQueueItem_t323  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m28313_gshared (ReadOnlyCollection_1_t6468 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m28314_gshared (ReadOnlyCollection_1_t6468 * __this, DelayedQueueItem_t323  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		DelayedQueueItem_t323  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, DelayedQueueItem_t323  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (DelayedQueueItem_t323 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m28315_gshared (ReadOnlyCollection_1_t6468 * __this, DelayedQueueItemU5BU5D_t6465* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		DelayedQueueItemU5BU5D_t6465* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< DelayedQueueItemU5BU5D_t6465*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (DelayedQueueItemU5BU5D_t6465*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m28316_gshared (ReadOnlyCollection_1_t6468 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m28317_gshared (ReadOnlyCollection_1_t6468 * __this, DelayedQueueItem_t323  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		DelayedQueueItem_t323  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, DelayedQueueItem_t323  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (DelayedQueueItem_t323 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m28318_gshared (ReadOnlyCollection_1_t6468 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Item(System.Int32)
extern "C" DelayedQueueItem_t323  ReadOnlyCollection_1_get_Item_m28319_gshared (ReadOnlyCollection_1_t6468 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		DelayedQueueItem_t323  L_2 = (DelayedQueueItem_t323 )InterfaceFuncInvoker1< DelayedQueueItem_t323 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor()
extern TypeInfo* ICollection_t749_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m28320_gshared (Collection_1_t6469 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t329 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t329 * L_0 = (List_1_t329 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t329 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t329 *)L_0;
		List_1_t329 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t749_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t329 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28321_gshared (Collection_1_t6469 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t749_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m28322_gshared (Collection_1_t6469 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t749_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t749_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t749_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m28323_gshared (Collection_1_t6469 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m28324_gshared (Collection_1_t6469 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		DelayedQueueItem_t323  L_4 = (( DelayedQueueItem_t323  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t6469 *)__this);
		VirtActionInvoker2< int32_t, DelayedQueueItem_t323  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::InsertItem(System.Int32,T) */, (Collection_1_t6469 *)__this, (int32_t)L_2, (DelayedQueueItem_t323 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m28325_gshared (Collection_1_t6469 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, DelayedQueueItem_t323  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m28326_gshared (Collection_1_t6469 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, DelayedQueueItem_t323  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_2, (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m28327_gshared (Collection_1_t6469 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		DelayedQueueItem_t323  L_2 = (( DelayedQueueItem_t323  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t6469 *)__this);
		VirtActionInvoker2< int32_t, DelayedQueueItem_t323  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::InsertItem(System.Int32,T) */, (Collection_1_t6469 *)__this, (int32_t)L_0, (DelayedQueueItem_t323 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m28328_gshared (Collection_1_t6469 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		Object_t * L_1 = ___value;
		DelayedQueueItem_t323  L_2 = (( DelayedQueueItem_t323  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t6469 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, DelayedQueueItem_t323  >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::IndexOf(T) */, (Collection_1_t6469 *)__this, (DelayedQueueItem_t323 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t6469 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::RemoveItem(System.Int32) */, (Collection_1_t6469 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m28329_gshared (Collection_1_t6469 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m28330_gshared (Collection_1_t6469 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m28331_gshared (Collection_1_t6469 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m28332_gshared (Collection_1_t6469 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m28333_gshared (Collection_1_t6469 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		DelayedQueueItem_t323  L_2 = (DelayedQueueItem_t323 )InterfaceFuncInvoker1< DelayedQueueItem_t323 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		DelayedQueueItem_t323  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m28334_gshared (Collection_1_t6469 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		DelayedQueueItem_t323  L_2 = (( DelayedQueueItem_t323  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t6469 *)__this);
		VirtActionInvoker2< int32_t, DelayedQueueItem_t323  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::SetItem(System.Int32,T) */, (Collection_1_t6469 *)__this, (int32_t)L_0, (DelayedQueueItem_t323 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Add(T)
extern "C" void Collection_1_Add_m28335_gshared (Collection_1_t6469 * __this, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		DelayedQueueItem_t323  L_3 = ___item;
		NullCheck((Collection_1_t6469 *)__this);
		VirtActionInvoker2< int32_t, DelayedQueueItem_t323  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::InsertItem(System.Int32,T) */, (Collection_1_t6469 *)__this, (int32_t)L_2, (DelayedQueueItem_t323 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Clear()
extern "C" void Collection_1_Clear_m28336_gshared (Collection_1_t6469 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t6469 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::ClearItems() */, (Collection_1_t6469 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::ClearItems()
extern "C" void Collection_1_ClearItems_m28337_gshared (Collection_1_t6469 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Contains(T)
extern "C" bool Collection_1_Contains_m28338_gshared (Collection_1_t6469 * __this, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		DelayedQueueItem_t323  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, DelayedQueueItem_t323  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (DelayedQueueItem_t323 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m28339_gshared (Collection_1_t6469 * __this, DelayedQueueItemU5BU5D_t6465* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		DelayedQueueItemU5BU5D_t6465* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< DelayedQueueItemU5BU5D_t6465*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (DelayedQueueItemU5BU5D_t6465*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m28340_gshared (Collection_1_t6469 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m28341_gshared (Collection_1_t6469 * __this, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		DelayedQueueItem_t323  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, DelayedQueueItem_t323  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (DelayedQueueItem_t323 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m28342_gshared (Collection_1_t6469 * __this, int32_t ___index, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		DelayedQueueItem_t323  L_1 = ___item;
		NullCheck((Collection_1_t6469 *)__this);
		VirtActionInvoker2< int32_t, DelayedQueueItem_t323  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::InsertItem(System.Int32,T) */, (Collection_1_t6469 *)__this, (int32_t)L_0, (DelayedQueueItem_t323 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m28343_gshared (Collection_1_t6469 * __this, int32_t ___index, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		DelayedQueueItem_t323  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, DelayedQueueItem_t323  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (DelayedQueueItem_t323 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::Remove(T)
extern "C" bool Collection_1_Remove_m28344_gshared (Collection_1_t6469 * __this, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		DelayedQueueItem_t323  L_0 = ___item;
		NullCheck((Collection_1_t6469 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, DelayedQueueItem_t323  >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::IndexOf(T) */, (Collection_1_t6469 *)__this, (DelayedQueueItem_t323 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t6469 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::RemoveItem(System.Int32) */, (Collection_1_t6469 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m28345_gshared (Collection_1_t6469 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t6469 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::RemoveItem(System.Int32) */, (Collection_1_t6469 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m28346_gshared (Collection_1_t6469 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Count()
extern "C" int32_t Collection_1_get_Count_m28347_gshared (Collection_1_t6469 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Item(System.Int32)
extern "C" DelayedQueueItem_t323  Collection_1_get_Item_m28348_gshared (Collection_1_t6469 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		DelayedQueueItem_t323  L_2 = (DelayedQueueItem_t323 )InterfaceFuncInvoker1< DelayedQueueItem_t323 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m28349_gshared (Collection_1_t6469 * __this, int32_t ___index, DelayedQueueItem_t323  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		DelayedQueueItem_t323  L_1 = ___value;
		NullCheck((Collection_1_t6469 *)__this);
		VirtActionInvoker2< int32_t, DelayedQueueItem_t323  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::SetItem(System.Int32,T) */, (Collection_1_t6469 *)__this, (int32_t)L_0, (DelayedQueueItem_t323 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m28350_gshared (Collection_1_t6469 * __this, int32_t ___index, DelayedQueueItem_t323  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		DelayedQueueItem_t323  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, DelayedQueueItem_t323  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityParseHelpers.Loom/DelayedQueueItem>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (DelayedQueueItem_t323 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::IsValidItem(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m28351_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::ConvertItem(System.Object)
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" DelayedQueueItem_t323  Collection_1_ConvertItem_m28352_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)))));
	}

IL_000f:
	{
		ArgumentException_t725 * L_3 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_3, (String_t*)(String_t*) &_stringLiteral4734, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m28353_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_t650 * L_2 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t749_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m28354_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t749_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t749_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/DelayedQueueItem>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t4165_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m28355_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t4165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6696);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t4165_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t4165_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor()
extern "C" void EqualityComparer_1__ctor_m28356_gshared (EqualityComparer_1_t6470 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t5752_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t636_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m28357_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t5752_0_0_0_var = il2cpp_codegen_type_from_index(10876);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		TypeU5BU5D_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(GenericEqualityComparer_1_t5752_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t636* L_4 = (TypeU5BU5D_t636*)((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t636* >::Invoke(93 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t636*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m3547(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t6470_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t6470 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t6471 * L_8 = (DefaultComparer_t6471 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t6471 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t6470_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m28358_gshared (EqualityComparer_1_t6470 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t6470 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, DelayedQueueItem_t323  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetHashCode(T) */, (EqualityComparer_1_t6470 *)__this, (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m28359_gshared (EqualityComparer_1_t6470 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t6470 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, DelayedQueueItem_t323 , DelayedQueueItem_t323  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::Equals(T,T) */, (EqualityComparer_1_t6470 *)__this, (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Default()
extern "C" EqualityComparer_1_t6470 * EqualityComparer_1_get_Default_m28360_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t6470 * L_0 = ((EqualityComparer_1_t6470_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<UnityParseHelpers.Loom/DelayedQueueItem>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor()
extern TypeInfo* EqualityComparer_1_t6470_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m28361_gshared (DefaultComparer_t6471 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6470_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12878);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t6470 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6470_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t6470 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t6470 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/DelayedQueueItem>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28362_gshared (DefaultComparer_t6471 * __this, DelayedQueueItem_t323  ___obj, const MethodInfo* method)
{
	{
		DelayedQueueItem_t323  L_0 = ___obj;
		DelayedQueueItem_t323  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/DelayedQueueItem>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28363_gshared (DefaultComparer_t6471 * __this, DelayedQueueItem_t323  ___x, DelayedQueueItem_t323  ___y, const MethodInfo* method)
{
	{
		DelayedQueueItem_t323  L_0 = ___x;
		DelayedQueueItem_t323  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		DelayedQueueItem_t323  L_3 = ___y;
		DelayedQueueItem_t323  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		DelayedQueueItem_t323  L_6 = ___y;
		DelayedQueueItem_t323  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m28364_gshared (Predicate_1_t6472 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m28365_gshared (Predicate_1_t6472 * __this, DelayedQueueItem_t323  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m28365((Predicate_1_t6472 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, DelayedQueueItem_t323  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, DelayedQueueItem_t323  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* DelayedQueueItem_t323_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m28366_gshared (Predicate_1_t6472 * __this, DelayedQueueItem_t323  ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DelayedQueueItem_t323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(DelayedQueueItem_t323_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m28367_gshared (Predicate_1_t6472 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_3.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_3MethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor()
extern "C" void Comparer_1__ctor_m28368_gshared (Comparer_1_t6473 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::.cctor()
extern const Il2CppType* GenericComparer_1_t5742_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t636_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m28369_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t5742_0_0_0_var = il2cpp_codegen_type_from_index(10762);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		TypeU5BU5D_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(GenericComparer_1_t5742_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t636* L_4 = (TypeU5BU5D_t636*)((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t636* >::Invoke(93 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t636*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m3547(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t6473_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t6473 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t6474 * L_8 = (DefaultComparer_t6474 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t6474 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t6473_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m28370_gshared (Comparer_1_t6473 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t6473 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, DelayedQueueItem_t323 , DelayedQueueItem_t323  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::Compare(T,T) */, (Comparer_1_t6473 *)__this, (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (DelayedQueueItem_t323 )((*(DelayedQueueItem_t323 *)((DelayedQueueItem_t323 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t725 * L_8 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m10458(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Default()
extern "C" Comparer_1_t6473 * Comparer_1_get_Default_m28371_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t6473 * L_0 = ((Comparer_1_t6473_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<UnityParseHelpers.Loom/DelayedQueueItem>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<UnityParseHelpers.Loom/DelayedQueueItem>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor()
extern TypeInfo* Comparer_1_t6473_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m28372_gshared (DefaultComparer_t6474 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t6473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12883);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t6473 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t6473_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t6473 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t6473 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityParseHelpers.Loom/DelayedQueueItem>::Compare(T,T)
extern TypeInfo* IComparable_t43_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m28373_gshared (DefaultComparer_t6474 * __this, DelayedQueueItem_t323  ___x, DelayedQueueItem_t323  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		DelayedQueueItem_t323  L_0 = ___x;
		DelayedQueueItem_t323  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		DelayedQueueItem_t323  L_3 = ___y;
		DelayedQueueItem_t323  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		DelayedQueueItem_t323  L_6 = ___y;
		DelayedQueueItem_t323  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		DelayedQueueItem_t323  L_9 = ___x;
		DelayedQueueItem_t323  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		DelayedQueueItem_t323  L_12 = ___x;
		DelayedQueueItem_t323  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		DelayedQueueItem_t323  L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, DelayedQueueItem_t323  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityParseHelpers.Loom/DelayedQueueItem>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (DelayedQueueItem_t323 )L_15);
		return L_16;
	}

IL_003e:
	{
		DelayedQueueItem_t323  L_17 = ___x;
		DelayedQueueItem_t323  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t43_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		DelayedQueueItem_t323  L_20 = ___x;
		DelayedQueueItem_t323  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		DelayedQueueItem_t323  L_23 = ___y;
		DelayedQueueItem_t323  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck((Object_t *)((Object_t *)Castclass(L_22, IComparable_t43_il2cpp_TypeInfo_var)));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t43_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_22, IComparable_t43_il2cpp_TypeInfo_var)), (Object_t *)L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t725 * L_27 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_27, (String_t*)(String_t*) &_stringLiteral4724, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "mscorlib_System_Comparison_1_gen_32MethodDeclarations.h"



// System.Void System.Comparison`1<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m28374_gshared (Comparison_1_t6475 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityParseHelpers.Loom/DelayedQueueItem>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m28375_gshared (Comparison_1_t6475 * __this, DelayedQueueItem_t323  ___x, DelayedQueueItem_t323  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m28375((Comparison_1_t6475 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, DelayedQueueItem_t323  ___x, DelayedQueueItem_t323  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, DelayedQueueItem_t323  ___x, DelayedQueueItem_t323  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityParseHelpers.Loom/DelayedQueueItem>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* DelayedQueueItem_t323_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m28376_gshared (Comparison_1_t6475 * __this, DelayedQueueItem_t323  ___x, DelayedQueueItem_t323  ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DelayedQueueItem_t323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(DelayedQueueItem_t323_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(DelayedQueueItem_t323_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityParseHelpers.Loom/DelayedQueueItem>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m28377_gshared (Comparison_1_t6475 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_Generic_List_1_gen_25MethodDeclarations.h"

// UnityParseHelpers.Loom/ConditionalQueueItem
#include "AssemblyU2DCSharp_UnityParseHelpers_Loom_ConditionalQueueIte.h"
// System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_33.h"
// System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Predicate_1_gen_44.h"
// System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_4.h"
// System.Comparison`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Comparison_1_gen_33.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_33MethodDeclarations.h"
// System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Predicate_1_gen_44MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_4MethodDeclarations.h"
struct Array_t;
struct ConditionalQueueItemU5BU5D_t6476;
// Declaration System.Void System.Array::Resize<UnityParseHelpers.Loom/ConditionalQueueItem>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityParseHelpers.Loom/ConditionalQueueItem>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisConditionalQueueItem_t326_m73827_gshared (Object_t * __this /* static, unused */, ConditionalQueueItemU5BU5D_t6476** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisConditionalQueueItem_t326_m73827(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ConditionalQueueItemU5BU5D_t6476**, int32_t, const MethodInfo*))Array_Resize_TisConditionalQueueItem_t326_m73827_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
struct ConditionalQueueItemU5BU5D_t6476;
// Declaration System.Int32 System.Array::IndexOf<UnityParseHelpers.Loom/ConditionalQueueItem>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityParseHelpers.Loom/ConditionalQueueItem>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisConditionalQueueItem_t326_m73828_gshared (Object_t * __this /* static, unused */, ConditionalQueueItemU5BU5D_t6476* p0, ConditionalQueueItem_t326  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisConditionalQueueItem_t326_m73828(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ConditionalQueueItemU5BU5D_t6476*, ConditionalQueueItem_t326 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisConditionalQueueItem_t326_m73828_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct ConditionalQueueItemU5BU5D_t6476;
struct IComparer_1_t9997;
// Declaration System.Void System.Array::Sort<UnityParseHelpers.Loom/ConditionalQueueItem>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityParseHelpers.Loom/ConditionalQueueItem>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisConditionalQueueItem_t326_m73830_gshared (Object_t * __this /* static, unused */, ConditionalQueueItemU5BU5D_t6476* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisConditionalQueueItem_t326_m73830(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ConditionalQueueItemU5BU5D_t6476*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisConditionalQueueItem_t326_m73830_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct ConditionalQueueItemU5BU5D_t6476;
struct Comparison_1_t6486;
// Declaration System.Void System.Array::Sort<UnityParseHelpers.Loom/ConditionalQueueItem>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityParseHelpers.Loom/ConditionalQueueItem>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisConditionalQueueItem_t326_m73836_gshared (Object_t * __this /* static, unused */, ConditionalQueueItemU5BU5D_t6476* p0, int32_t p1, Comparison_1_t6486 * p2, const MethodInfo* method);
#define Array_Sort_TisConditionalQueueItem_t326_m73836(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ConditionalQueueItemU5BU5D_t6476*, int32_t, Comparison_1_t6486 *, const MethodInfo*))Array_Sort_TisConditionalQueueItem_t326_m73836_gshared)(__this /* static, unused */, p0, p1, p2, method)


// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor()
extern "C" void List_1__ctor_m3210_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ConditionalQueueItemU5BU5D_t6476* L_0 = ((List_1_t330_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m28378_gshared (List_1_t330 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t330 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ConditionalQueueItemU5BU5D_t6476* L_3 = ((List_1_t330_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t330 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((ConditionalQueueItemU5BU5D_t6476*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t330 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1__ctor_m28379_gshared (List_1_t330 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_1 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_1, (String_t*)(String_t*) &_stringLiteral2014, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((ConditionalQueueItemU5BU5D_t6476*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m28380_gshared (List_1_t330 * __this, ConditionalQueueItemU5BU5D_t6476* ___data, int32_t ___size, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		ConditionalQueueItemU5BU5D_t6476* L_0 = ___data;
		__this->____items_1 = L_0;
		int32_t L_1 = ___size;
		__this->____size_2 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.cctor()
extern "C" void List_1__cctor_m28381_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t330_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((ConditionalQueueItemU5BU5D_t6476*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28382_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t330 *)__this);
		Enumerator_t723  L_0 = (( Enumerator_t723  (*) (List_1_t330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t330 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t723  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m28383_gshared (List_1_t330 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		ConditionalQueueItemU5BU5D_t6476* L_0 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28384_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t330 *)__this);
		Enumerator_t723  L_0 = (( Enumerator_t723  (*) (List_1_t330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t330 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t723  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_Add_m28385_gshared (List_1_t330 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2843);
		InvalidCastException_t2024_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3772);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t330 *)__this);
			VirtActionInvoker1< ConditionalQueueItem_t326  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Add(T) */, (List_1_t330 *)__this, (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t496 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1698_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t2024_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t725 * L_2 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_2, (String_t*)(String_t*) &_stringLiteral4734, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m28386_gshared (List_1_t330 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2843);
		InvalidCastException_t2024_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3772);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t330 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, ConditionalQueueItem_t326  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Contains(T) */, (List_1_t330 *)__this, (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (bool)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t496 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1698_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t2024_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m28387_gshared (List_1_t330 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2843);
		InvalidCastException_t2024_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3772);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t330 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, ConditionalQueueItem_t326  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IndexOf(T) */, (List_1_t330 *)__this, (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (int32_t)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t496 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1698_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t2024_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Insert_m28388_gshared (List_1_t330 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2843);
		InvalidCastException_t2024_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3772);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t330 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t330 *)__this);
			VirtActionInvoker2< int32_t, ConditionalQueueItem_t326  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Insert(System.Int32,T) */, (List_1_t330 *)__this, (int32_t)L_1, (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t496 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1698_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t2024_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t725 * L_3 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_3, (String_t*)(String_t*) &_stringLiteral4734, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m28389_gshared (List_1_t330 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2843);
		InvalidCastException_t2024_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3772);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t330 *)__this);
			VirtFuncInvoker1< bool, ConditionalQueueItem_t326  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Remove(T) */, (List_1_t330 *)__this, (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t496 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1698_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t2024_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28390_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m28391_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m28392_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m28393_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m28394_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m28395_gshared (List_1_t330 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t330 *)__this);
		ConditionalQueueItem_t326  L_1 = (ConditionalQueueItem_t326 )VirtFuncInvoker1< ConditionalQueueItem_t326 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Item(System.Int32) */, (List_1_t330 *)__this, (int32_t)L_0);
		ConditionalQueueItem_t326  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t2024_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_set_Item_m28396_gshared (List_1_t330 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2843);
		InvalidCastException_t2024_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3772);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t330 *)__this);
			VirtActionInvoker2< int32_t, ConditionalQueueItem_t326  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::set_Item(System.Int32,T) */, (List_1_t330 *)__this, (int32_t)L_0, (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t496 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1698_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t2024_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t725 * L_2 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_2, (String_t*)(String_t*) &_stringLiteral1582, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Add(T)
extern "C" void List_1_Add_m28397_gshared (List_1_t330 * __this, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		ConditionalQueueItemU5BU5D_t6476* L_1 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t330 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0017:
	{
		ConditionalQueueItemU5BU5D_t6476* L_2 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		ConditionalQueueItem_t326  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_2, L_5)) = (ConditionalQueueItem_t326 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m28398_gshared (List_1_t330 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		ConditionalQueueItemU5BU5D_t6476* L_3 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		NullCheck((List_1_t330 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t330 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m13294(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m13294(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t330 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CheckRange(System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckRange_m28399_gshared (List_1_t330 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___idx;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_1 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_1, (String_t*)(String_t*) &_stringLiteral2016, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_3 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_3, (String_t*)(String_t*) &_stringLiteral1913, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int32_t L_4 = ___idx;
		int32_t L_5 = ___count;
		int32_t L_6 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))) > ((uint32_t)L_6))))
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_t725 * L_7 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_7, (String_t*)(String_t*) &_stringLiteral4735, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m28400_gshared (List_1_t330 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t330 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		ConditionalQueueItemU5BU5D_t6476* L_5 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< ConditionalQueueItemU5BU5D_t6476*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (ConditionalQueueItemU5BU5D_t6476*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m28401_gshared (List_1_t330 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	ConditionalQueueItem_t326  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			ConditionalQueueItem_t326  L_3 = (ConditionalQueueItem_t326 )InterfaceFuncInvoker0< ConditionalQueueItem_t326  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (ConditionalQueueItem_t326 )L_3;
			ConditionalQueueItem_t326  L_4 = V_0;
			NullCheck((List_1_t330 *)__this);
			VirtActionInvoker1< ConditionalQueueItem_t326  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Add(T) */, (List_1_t330 *)__this, (ConditionalQueueItem_t326 )L_4);
		}

IL_0017:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(33)
		}

IL_0025:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3228_gshared (List_1_t330 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t330 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_3 = V_0;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t330 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t330 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6479 * List_1_AsReadOnly_m28402_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t6479 * L_0 = (ReadOnlyCollection_1_t6479 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t6479 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Clear()
extern "C" void List_1_Clear_m28403_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		ConditionalQueueItemU5BU5D_t6476* L_0 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		ConditionalQueueItemU5BU5D_t6476* L_1 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Contains(T)
extern "C" bool List_1_Contains_m28404_gshared (List_1_t330 * __this, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	{
		ConditionalQueueItemU5BU5D_t6476* L_0 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		ConditionalQueueItem_t326  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, ConditionalQueueItemU5BU5D_t6476*, ConditionalQueueItem_t326 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (ConditionalQueueItemU5BU5D_t6476*)L_0, (ConditionalQueueItem_t326 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m28405_gshared (List_1_t330 * __this, ConditionalQueueItemU5BU5D_t6476* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		ConditionalQueueItemU5BU5D_t6476* L_0 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		ConditionalQueueItemU5BU5D_t6476* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Find(System.Predicate`1<T>)
extern TypeInfo* List_1_t330_il2cpp_TypeInfo_var;
extern TypeInfo* ConditionalQueueItem_t326_il2cpp_TypeInfo_var;
extern "C" ConditionalQueueItem_t326  List_1_Find_m28406_gshared (List_1_t330 * __this, Predicate_1_t6483 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		ConditionalQueueItem_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ConditionalQueueItem_t326  V_1 = {0};
	ConditionalQueueItem_t326  G_B3_0 = {0};
	{
		Predicate_1_t6483 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t330_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t6483 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t6483 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t6483 * L_2 = ___match;
		NullCheck((List_1_t330 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t330 *, int32_t, int32_t, Predicate_1_t6483 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t330 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t6483 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		ConditionalQueueItemU5BU5D_t6476* L_5 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (ConditionalQueueItem_t326_il2cpp_TypeInfo_var, (&V_1));
		ConditionalQueueItem_t326  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CheckMatch(System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckMatch_m28407_gshared (Object_t * __this /* static, unused */, Predicate_1_t6483 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t6483 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral4614, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::FindAll(System.Predicate`1<T>)
extern TypeInfo* List_1_t330_il2cpp_TypeInfo_var;
extern "C" List_1_t330 * List_1_FindAll_m28408_gshared (List_1_t330 * __this, Predicate_1_t6483 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t6483 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t330_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t6483 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t6483 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_1) > ((int32_t)((int32_t)65536))))
		{
			goto IL_001b;
		}
	}
	{
		Predicate_1_t6483 * L_2 = ___match;
		NullCheck((List_1_t330 *)__this);
		List_1_t330 * L_3 = (( List_1_t330 * (*) (List_1_t330 *, Predicate_1_t6483 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((List_1_t330 *)__this, (Predicate_1_t6483 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		return L_3;
	}

IL_001b:
	{
		Predicate_1_t6483 * L_4 = ___match;
		NullCheck((List_1_t330 *)__this);
		List_1_t330 * L_5 = (( List_1_t330 * (*) (List_1_t330 *, Predicate_1_t6483 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)((List_1_t330 *)__this, (Predicate_1_t6483 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_5;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t330 * List_1_FindAllStackBits_m28409_gshared (List_1_t330 * __this, Predicate_1_t6483 * ___match, const MethodInfo* method)
{
	uint32_t* V_0 = {0};
	uint32_t* V_1 = {0};
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	ConditionalQueueItemU5BU5D_t6476* V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		if ((uint64_t)(uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1)) * (uint64_t)(uint32_t)4 > (uint64_t)(uint32_t)4294967295U)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
		int8_t* L_1 = (int8_t*) alloca(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1))*(int32_t)4)));
		memset(L_1,0,((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)32)))+(int32_t)1))*(int32_t)4)));
		V_0 = (uint32_t*)(L_1);
		uint32_t* L_2 = V_0;
		V_1 = (uint32_t*)L_2;
		V_2 = (int32_t)0;
		V_3 = (uint32_t)((int32_t)-2147483648);
		V_4 = (int32_t)0;
		goto IL_0056;
	}

IL_001f:
	{
		Predicate_1_t6483 * L_3 = ___match;
		ConditionalQueueItemU5BU5D_t6476* L_4 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_5 = V_4;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t6483 *)L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, ConditionalQueueItem_t326  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Invoke(T) */, (Predicate_1_t6483 *)L_3, (ConditionalQueueItem_t326 )(*(ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_4, L_6)));
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		uint32_t* L_8 = V_1;
		uint32_t* L_9 = V_1;
		uint32_t L_10 = V_3;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)((int32_t)(*((uint32_t*)L_9))|(int32_t)L_10));
		int32_t L_11 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003e:
	{
		uint32_t L_12 = V_3;
		V_3 = (uint32_t)((int32_t)((uint32_t)L_12>>1));
		uint32_t L_13 = V_3;
		if (L_13)
		{
			goto IL_0050;
		}
	}
	{
		uint32_t* L_14 = V_1;
		V_1 = (uint32_t*)((intptr_t)((intptr_t)L_14+(intptr_t)(((intptr_t)4))));
		V_3 = (uint32_t)((int32_t)-2147483648);
	}

IL_0050:
	{
		int32_t L_15 = V_4;
		V_4 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0056:
	{
		int32_t L_16 = V_4;
		int32_t L_17 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_18 = V_2;
		V_5 = (ConditionalQueueItemU5BU5D_t6476*)((ConditionalQueueItemU5BU5D_t6476*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_18));
		V_3 = (uint32_t)((int32_t)-2147483648);
		uint32_t* L_19 = V_0;
		V_1 = (uint32_t*)L_19;
		V_6 = (int32_t)0;
		V_7 = (int32_t)0;
		goto IL_00b2;
	}

IL_0078:
	{
		uint32_t* L_20 = V_1;
		uint32_t L_21 = V_3;
		uint32_t L_22 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)(*((uint32_t*)L_20))&(int32_t)L_21))) == ((uint32_t)L_22))))
		{
			goto IL_009a;
		}
	}
	{
		ConditionalQueueItemU5BU5D_t6476* L_23 = V_5;
		int32_t L_24 = V_6;
		int32_t L_25 = (int32_t)L_24;
		V_6 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		ConditionalQueueItemU5BU5D_t6476* L_26 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_27 = V_7;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_25);
		*((ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_23, L_25)) = (ConditionalQueueItem_t326 )(*(ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_26, L_28));
	}

IL_009a:
	{
		uint32_t L_29 = V_3;
		V_3 = (uint32_t)((int32_t)((uint32_t)L_29>>1));
		uint32_t L_30 = V_3;
		if (L_30)
		{
			goto IL_00ac;
		}
	}
	{
		uint32_t* L_31 = V_1;
		V_1 = (uint32_t*)((intptr_t)((intptr_t)L_31+(intptr_t)(((intptr_t)4))));
		V_3 = (uint32_t)((int32_t)-2147483648);
	}

IL_00ac:
	{
		int32_t L_32 = V_7;
		V_7 = (int32_t)((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00b2:
	{
		int32_t L_33 = V_7;
		int32_t L_34 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_33) >= ((int32_t)L_34)))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_35 = V_6;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0078;
		}
	}

IL_00c1:
	{
		ConditionalQueueItemU5BU5D_t6476* L_37 = V_5;
		int32_t L_38 = V_2;
		List_1_t330 * L_39 = (List_1_t330 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t330 *, ConditionalQueueItemU5BU5D_t6476*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(L_39, (ConditionalQueueItemU5BU5D_t6476*)L_37, (int32_t)L_38, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		return L_39;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t330 * List_1_FindAllList_m28410_gshared (List_1_t330 * __this, Predicate_1_t6483 * ___match, const MethodInfo* method)
{
	List_1_t330 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t330 * L_0 = (List_1_t330 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		V_0 = (List_1_t330 *)L_0;
		V_1 = (int32_t)0;
		goto IL_0034;
	}

IL_000a:
	{
		Predicate_1_t6483 * L_1 = ___match;
		ConditionalQueueItemU5BU5D_t6476* L_2 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t6483 *)L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, ConditionalQueueItem_t326  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Invoke(T) */, (Predicate_1_t6483 *)L_1, (ConditionalQueueItem_t326 )(*(ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		List_1_t330 * L_6 = V_0;
		ConditionalQueueItemU5BU5D_t6476* L_7 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((List_1_t330 *)L_6);
		VirtActionInvoker1< ConditionalQueueItem_t326  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Add(T) */, (List_1_t330 *)L_6, (ConditionalQueueItem_t326 )(*(ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_7, L_9)));
	}

IL_0030:
	{
		int32_t L_10 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000a;
		}
	}
	{
		List_1_t330 * L_13 = V_0;
		return L_13;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::FindIndex(System.Predicate`1<T>)
extern TypeInfo* List_1_t330_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_FindIndex_m28411_gshared (List_1_t330 * __this, Predicate_1_t6483 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t6483 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t330_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t6483 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t6483 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t6483 * L_2 = ___match;
		NullCheck((List_1_t330 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t330 *, int32_t, int32_t, Predicate_1_t6483 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t330 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t6483 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_3;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m28412_gshared (List_1_t330 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6483 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = (int32_t)L_2;
		goto IL_0022;
	}

IL_0008:
	{
		Predicate_1_t6483 * L_3 = ___match;
		ConditionalQueueItemU5BU5D_t6476* L_4 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t6483 *)L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, ConditionalQueueItem_t326  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Invoke(T) */, (Predicate_1_t6483 *)L_3, (ConditionalQueueItem_t326 )(*(ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_4, L_6)));
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GetEnumerator()
extern "C" Enumerator_t723  List_1_GetEnumerator_m3229_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		Enumerator_t723  L_0 = {0};
		(( void (*) (Enumerator_t723 *, List_1_t330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(&L_0, (List_1_t330 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t330 * List_1_GetRange_m28413_gshared (List_1_t330 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	ConditionalQueueItemU5BU5D_t6476* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t330 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_2 = ___count;
		V_0 = (ConditionalQueueItemU5BU5D_t6476*)((ConditionalQueueItemU5BU5D_t6476*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		ConditionalQueueItemU5BU5D_t6476* L_3 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_4 = ___index;
		ConditionalQueueItemU5BU5D_t6476* L_5 = V_0;
		int32_t L_6 = ___count;
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, (int32_t)L_4, (Array_t *)(Array_t *)L_5, (int32_t)0, (int32_t)L_6, /*hidden argument*/NULL);
		ConditionalQueueItemU5BU5D_t6476* L_7 = V_0;
		int32_t L_8 = ___count;
		List_1_t330 * L_9 = (List_1_t330 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t330 *, ConditionalQueueItemU5BU5D_t6476*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(L_9, (ConditionalQueueItemU5BU5D_t6476*)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		return L_9;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m28414_gshared (List_1_t330 * __this, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	{
		ConditionalQueueItemU5BU5D_t6476* L_0 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		ConditionalQueueItem_t326  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, ConditionalQueueItemU5BU5D_t6476*, ConditionalQueueItem_t326 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (ConditionalQueueItemU5BU5D_t6476*)L_0, (ConditionalQueueItem_t326 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m28415_gshared (List_1_t330 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		ConditionalQueueItemU5BU5D_t6476* L_5 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_6 = ___start;
		ConditionalQueueItemU5BU5D_t6476* L_7 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0031:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		ConditionalQueueItemU5BU5D_t6476* L_15 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckIndex_m28416_gshared (List_1_t330 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1703 * L_3 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_3, (String_t*)(String_t*) &_stringLiteral2016, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m28417_gshared (List_1_t330 * __this, int32_t ___index, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t330 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		ConditionalQueueItemU5BU5D_t6476* L_2 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t330 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t330 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		ConditionalQueueItemU5BU5D_t6476* L_4 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_5 = ___index;
		ConditionalQueueItem_t326  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_4, L_5)) = (ConditionalQueueItem_t326 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckCollection_m28418_gshared (List_1_t330 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral2013, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m28419_gshared (List_1_t330 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	ConditionalQueueItemU5BU5D_t6476* V_0 = {0};
	Object_t* V_1 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t330 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_1 = ___index;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t330 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t* L_2 = ___collection;
		if ((!(((Object_t*)(Object_t*)L_2) == ((Object_t*)(List_1_t330 *)__this))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->____size_2);
		V_0 = (ConditionalQueueItemU5BU5D_t6476*)((ConditionalQueueItemU5BU5D_t6476*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_3));
		ConditionalQueueItemU5BU5D_t6476* L_4 = V_0;
		NullCheck((List_1_t330 *)__this);
		VirtActionInvoker2< ConditionalQueueItemU5BU5D_t6476*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CopyTo(T[],System.Int32) */, (List_1_t330 *)__this, (ConditionalQueueItemU5BU5D_t6476*)L_4, (int32_t)0);
		int32_t L_5 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t330 *)__this, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_6 = ___index;
		ConditionalQueueItemU5BU5D_t6476* L_7 = V_0;
		NullCheck(L_7);
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t330 *)__this, (int32_t)L_6, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		ConditionalQueueItemU5BU5D_t6476* L_8 = V_0;
		ConditionalQueueItemU5BU5D_t6476* L_9 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_10 = ___index;
		ConditionalQueueItemU5BU5D_t6476* L_11 = V_0;
		NullCheck(L_11);
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_8, (int32_t)0, (Array_t *)(Array_t *)L_9, (int32_t)L_10, (int32_t)(((int32_t)(((Array_t *)L_11)->max_length))), /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_004f:
	{
		Object_t* L_12 = ___collection;
		V_1 = (Object_t*)((Object_t*)IsInst(L_12, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_13 = V_1;
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_14 = ___index;
		Object_t* L_15 = V_1;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)((List_1_t330 *)__this, (int32_t)L_14, (Object_t*)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		goto IL_006b;
	}

IL_0063:
	{
		int32_t L_16 = ___index;
		Object_t* L_17 = ___collection;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((List_1_t330 *)__this, (int32_t)L_16, (Object_t*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
	}

IL_006b:
	{
		int32_t L_18 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m28420_gshared (List_1_t330 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t330 *)__this, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_3 = ___index;
		int32_t L_4 = V_0;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t330 *)__this, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		Object_t* L_5 = ___collection;
		ConditionalQueueItemU5BU5D_t6476* L_6 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_7 = ___index;
		NullCheck((Object_t*)L_5);
		InterfaceActionInvoker2< ConditionalQueueItemU5BU5D_t6476*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5, (ConditionalQueueItemU5BU5D_t6476*)L_6, (int32_t)L_7);
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void List_1_InsertEnumeration_m28421_gshared (List_1_t330 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	ConditionalQueueItem_t326  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			ConditionalQueueItem_t326  L_3 = (ConditionalQueueItem_t326 )InterfaceFuncInvoker0< ConditionalQueueItem_t326  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (ConditionalQueueItem_t326 )L_3;
			int32_t L_4 = ___index;
			int32_t L_5 = (int32_t)L_4;
			___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
			ConditionalQueueItem_t326  L_6 = V_0;
			NullCheck((List_1_t330 *)__this);
			VirtActionInvoker2< int32_t, ConditionalQueueItem_t326  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Insert(System.Int32,T) */, (List_1_t330 *)__this, (int32_t)L_5, (ConditionalQueueItem_t326 )L_6);
		}

IL_001f:
		{
			Object_t* L_7 = V_1;
			NullCheck((Object_t *)L_7);
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_7);
			if (L_8)
			{
				goto IL_0009;
			}
		}

IL_0027:
		{
			IL2CPP_LEAVE(0x34, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			Object_t* L_9 = V_1;
			if (L_9)
			{
				goto IL_002d;
			}
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(41)
		}

IL_002d:
		{
			Object_t* L_10 = V_1;
			NullCheck((Object_t *)L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_10);
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0034:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Remove(T)
extern "C" bool List_1_Remove_m28422_gshared (List_1_t330 * __this, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ConditionalQueueItem_t326  L_0 = ___item;
		NullCheck((List_1_t330 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, ConditionalQueueItem_t326  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IndexOf(T) */, (List_1_t330 *)__this, (ConditionalQueueItem_t326 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t330 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::RemoveAt(System.Int32) */, (List_1_t330 *)__this, (int32_t)L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::RemoveAll(System.Predicate`1<T>)
extern TypeInfo* List_1_t330_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m28423_gshared (List_1_t330 * __this, Predicate_1_t6483 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t6483 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t330_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t6483 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t6483 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t6483 * L_1 = ___match;
		ConditionalQueueItemU5BU5D_t6476* L_2 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t6483 *)L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, ConditionalQueueItem_t326  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Invoke(T) */, (Predicate_1_t6483 *)L_1, (ConditionalQueueItem_t326 )(*(ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_11 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0084;
	}

IL_0050:
	{
		Predicate_1_t6483 * L_13 = ___match;
		ConditionalQueueItemU5BU5D_t6476* L_14 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t6483 *)L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, ConditionalQueueItem_t326  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Invoke(T) */, (Predicate_1_t6483 *)L_13, (ConditionalQueueItem_t326 )(*(ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		ConditionalQueueItemU5BU5D_t6476* L_18 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		ConditionalQueueItemU5BU5D_t6476* L_21 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_18, L_20)) = (ConditionalQueueItem_t326 )(*(ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_21, L_23));
	}

IL_0080:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		ConditionalQueueItemU5BU5D_t6476* L_29 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00a2:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1_RemoveAt_m28424_gshared (List_1_t330 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1703 * L_3 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_3, (String_t*)(String_t*) &_stringLiteral2016, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t330 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		ConditionalQueueItemU5BU5D_t6476* L_5 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m28425_gshared (List_1_t330 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t330 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_3 = ___index;
		int32_t L_4 = ___count;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t330 *)__this, (int32_t)L_3, (int32_t)((-L_4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		ConditionalQueueItemU5BU5D_t6476* L_5 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		int32_t L_7 = ___count;
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		int32_t L_8 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Reverse()
extern "C" void List_1_Reverse_m28426_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		ConditionalQueueItemU5BU5D_t6476* L_0 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m16491(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Sort()
extern TypeInfo* Comparer_1_t6484_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m28427_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t6484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12900);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConditionalQueueItemU5BU5D_t6476* L_0 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t6484_il2cpp_TypeInfo_var);
		Comparer_1_t6484 * L_2 = (( Comparer_1_t6484 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		(( void (*) (Object_t * /* static, unused */, ConditionalQueueItemU5BU5D_t6476*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41)->method)(NULL /*static, unused*/, (ConditionalQueueItemU5BU5D_t6476*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m28428_gshared (List_1_t330 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		ConditionalQueueItemU5BU5D_t6476* L_0 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Object_t* L_2 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, ConditionalQueueItemU5BU5D_t6476*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41)->method)(NULL /*static, unused*/, (ConditionalQueueItemU5BU5D_t6476*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m28429_gshared (List_1_t330 * __this, Comparison_1_t6486 * ___comparison, const MethodInfo* method)
{
	{
		ConditionalQueueItemU5BU5D_t6476* L_0 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t6486 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, ConditionalQueueItemU5BU5D_t6476*, int32_t, Comparison_1_t6486 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42)->method)(NULL /*static, unused*/, (ConditionalQueueItemU5BU5D_t6476*)L_0, (int32_t)L_1, (Comparison_1_t6486 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::ToArray()
extern "C" ConditionalQueueItemU5BU5D_t6476* List_1_ToArray_m28430_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	ConditionalQueueItemU5BU5D_t6476* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (ConditionalQueueItemU5BU5D_t6476*)((ConditionalQueueItemU5BU5D_t6476*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		ConditionalQueueItemU5BU5D_t6476* L_1 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		ConditionalQueueItemU5BU5D_t6476* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m13208(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		ConditionalQueueItemU5BU5D_t6476* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::TrimExcess()
extern "C" void List_1_TrimExcess_m28431_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t330 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m28432_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		ConditionalQueueItemU5BU5D_t6476* L_0 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m28433_gshared (List_1_t330 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_2 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10470(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		ConditionalQueueItemU5BU5D_t6476** L_3 = (ConditionalQueueItemU5BU5D_t6476**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, ConditionalQueueItemU5BU5D_t6476**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(NULL /*static, unused*/, (ConditionalQueueItemU5BU5D_t6476**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Count()
extern "C" int32_t List_1_get_Count_m28434_gshared (List_1_t330 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" ConditionalQueueItem_t326  List_1_get_Item_m28435_gshared (List_1_t330 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_2 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_2, (String_t*)(String_t*) &_stringLiteral2016, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		ConditionalQueueItemU5BU5D_t6476* L_3 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityParseHelpers.Loom/ConditionalQueueItem>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Item_m28436_gshared (List_1_t330 * __this, int32_t ___index, ConditionalQueueItem_t326  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t330 *)__this);
		(( void (*) (List_1_t330 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t330 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_3 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_3, (String_t*)(String_t*) &_stringLiteral2016, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		ConditionalQueueItemU5BU5D_t6476* L_4 = (ConditionalQueueItemU5BU5D_t6476*)(__this->____items_1);
		int32_t L_5 = ___index;
		ConditionalQueueItem_t326  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_4, L_5)) = (ConditionalQueueItem_t326 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Current()
// System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_44.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_44MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityParseHelpers.Loom/ConditionalQueueItem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityParseHelpers.Loom/ConditionalQueueItem>(System.Int32)
extern "C" ConditionalQueueItem_t326  Array_InternalArray__get_Item_TisConditionalQueueItem_t326_m73816_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisConditionalQueueItem_t326_m73816(__this, p0, method) (( ConditionalQueueItem_t326  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisConditionalQueueItem_t326_m73816_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m28437_gshared (InternalEnumerator_1_t6477 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28438_gshared (InternalEnumerator_1_t6477 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28439_gshared (InternalEnumerator_1_t6477 * __this, const MethodInfo* method)
{
	{
		ConditionalQueueItem_t326  L_0 = (( ConditionalQueueItem_t326  (*) (InternalEnumerator_1_t6477 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t6477 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ConditionalQueueItem_t326  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m28440_gshared (InternalEnumerator_1_t6477 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/ConditionalQueueItem>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m28441_gshared (InternalEnumerator_1_t6477 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m13206((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" ConditionalQueueItem_t326  InternalEnumerator_1_get_Current_m28442_gshared (InternalEnumerator_1_t6477 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4617, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1668 * L_3 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_3, (String_t*)(String_t*) &_stringLiteral4618, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m13206((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		ConditionalQueueItem_t326  L_8 = (( ConditionalQueueItem_t326  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m28443_gshared (Enumerator_t723 * __this, List_1_t330 * ___l, const MethodInfo* method)
{
	{
		List_1_t330 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t330 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m28444_gshared (Enumerator_t723 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t723 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t723 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___next_1 = 0;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m28445_gshared (Enumerator_t723 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t723 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t723 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11414(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		ConditionalQueueItem_t326  L_2 = (ConditionalQueueItem_t326 )(__this->___current_3);
		ConditionalQueueItem_t326  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/ConditionalQueueItem>::Dispose()
extern "C" void Enumerator_Dispose_m28446_gshared (Enumerator_t723 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t330 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/ConditionalQueueItem>::VerifyState()
extern TypeInfo* ObjectDisposedException_t3310_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m28447_gshared (Enumerator_t723 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5695);
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t330 * L_0 = (List_1_t330 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t723  L_1 = (*(Enumerator_t723 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m3130((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t3310 * L_5 = (ObjectDisposedException_t3310 *)il2cpp_codegen_object_new (ObjectDisposedException_t3310_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m10475(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t330 * L_7 = (List_1_t330 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1668 * L_9 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_9, (String_t*)(String_t*) &_stringLiteral4736, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/ConditionalQueueItem>::MoveNext()
extern "C" bool Enumerator_MoveNext_m3231_gshared (Enumerator_t723 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t723 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t723 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t330 * L_2 = (List_1_t330 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t330 * L_4 = (List_1_t330 *)(__this->___l_0);
		NullCheck(L_4);
		ConditionalQueueItemU5BU5D_t6476* L_5 = (ConditionalQueueItemU5BU5D_t6476*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(ConditionalQueueItem_t326 *)(ConditionalQueueItem_t326 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Current()
extern "C" ConditionalQueueItem_t326  Enumerator_get_Current_m3230_gshared (Enumerator_t723 * __this, const MethodInfo* method)
{
	{
		ConditionalQueueItem_t326  L_0 = (ConditionalQueueItem_t326 )(__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_4MethodDeclarations.h"


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1__ctor_m28448_gshared (ReadOnlyCollection_1_t6479 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral4737, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.Generic.ICollection<T>.Add(T)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28449_gshared (ReadOnlyCollection_1_t6479 * __this, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m28450_gshared (ReadOnlyCollection_1_t6479 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m28451_gshared (ReadOnlyCollection_1_t6479 * __this, int32_t ___index, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m28452_gshared (ReadOnlyCollection_1_t6479 * __this, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m28453_gshared (ReadOnlyCollection_1_t6479 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" ConditionalQueueItem_t326  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m28454_gshared (ReadOnlyCollection_1_t6479 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t6479 *)__this);
		ConditionalQueueItem_t326  L_1 = (ConditionalQueueItem_t326 )VirtFuncInvoker1< ConditionalQueueItem_t326 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t6479 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m28455_gshared (ReadOnlyCollection_1_t6479 * __this, int32_t ___index, ConditionalQueueItem_t326  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28456_gshared (ReadOnlyCollection_1_t6479 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t749_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m28457_gshared (ReadOnlyCollection_1_t6479 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t749_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t749_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t749_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t746_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m28458_gshared (ReadOnlyCollection_1_t6479 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t746_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m28459_gshared (ReadOnlyCollection_1_t6479 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m28460_gshared (ReadOnlyCollection_1_t6479 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m28461_gshared (ReadOnlyCollection_1_t6479 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, ConditionalQueueItem_t326  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_2, (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m28462_gshared (ReadOnlyCollection_1_t6479 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, ConditionalQueueItem_t326  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m28463_gshared (ReadOnlyCollection_1_t6479 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m28464_gshared (ReadOnlyCollection_1_t6479 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m28465_gshared (ReadOnlyCollection_1_t6479 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m28466_gshared (ReadOnlyCollection_1_t6479 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m28467_gshared (ReadOnlyCollection_1_t6479 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m28468_gshared (ReadOnlyCollection_1_t6479 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m28469_gshared (ReadOnlyCollection_1_t6479 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m28470_gshared (ReadOnlyCollection_1_t6479 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		ConditionalQueueItem_t326  L_2 = (ConditionalQueueItem_t326 )InterfaceFuncInvoker1< ConditionalQueueItem_t326 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		ConditionalQueueItem_t326  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m28471_gshared (ReadOnlyCollection_1_t6479 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m28472_gshared (ReadOnlyCollection_1_t6479 * __this, ConditionalQueueItem_t326  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		ConditionalQueueItem_t326  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, ConditionalQueueItem_t326  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (ConditionalQueueItem_t326 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m28473_gshared (ReadOnlyCollection_1_t6479 * __this, ConditionalQueueItemU5BU5D_t6476* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		ConditionalQueueItemU5BU5D_t6476* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< ConditionalQueueItemU5BU5D_t6476*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (ConditionalQueueItemU5BU5D_t6476*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m28474_gshared (ReadOnlyCollection_1_t6479 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m28475_gshared (ReadOnlyCollection_1_t6479 * __this, ConditionalQueueItem_t326  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		ConditionalQueueItem_t326  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, ConditionalQueueItem_t326  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (ConditionalQueueItem_t326 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m28476_gshared (ReadOnlyCollection_1_t6479 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Item(System.Int32)
extern "C" ConditionalQueueItem_t326  ReadOnlyCollection_1_get_Item_m28477_gshared (ReadOnlyCollection_1_t6479 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		ConditionalQueueItem_t326  L_2 = (ConditionalQueueItem_t326 )InterfaceFuncInvoker1< ConditionalQueueItem_t326 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor()
extern TypeInfo* ICollection_t749_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m28478_gshared (Collection_1_t6480 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t330 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t330 * L_0 = (List_1_t330 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t330 *)L_0;
		List_1_t330 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t749_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t330 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28479_gshared (Collection_1_t6480 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t749_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m28480_gshared (Collection_1_t6480 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t749_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t749_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t749_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m28481_gshared (Collection_1_t6480 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m28482_gshared (Collection_1_t6480 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		ConditionalQueueItem_t326  L_4 = (( ConditionalQueueItem_t326  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t6480 *)__this);
		VirtActionInvoker2< int32_t, ConditionalQueueItem_t326  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::InsertItem(System.Int32,T) */, (Collection_1_t6480 *)__this, (int32_t)L_2, (ConditionalQueueItem_t326 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m28483_gshared (Collection_1_t6480 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, ConditionalQueueItem_t326  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m28484_gshared (Collection_1_t6480 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, ConditionalQueueItem_t326  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_2, (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m28485_gshared (Collection_1_t6480 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		ConditionalQueueItem_t326  L_2 = (( ConditionalQueueItem_t326  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t6480 *)__this);
		VirtActionInvoker2< int32_t, ConditionalQueueItem_t326  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::InsertItem(System.Int32,T) */, (Collection_1_t6480 *)__this, (int32_t)L_0, (ConditionalQueueItem_t326 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m28486_gshared (Collection_1_t6480 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		Object_t * L_1 = ___value;
		ConditionalQueueItem_t326  L_2 = (( ConditionalQueueItem_t326  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t6480 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, ConditionalQueueItem_t326  >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IndexOf(T) */, (Collection_1_t6480 *)__this, (ConditionalQueueItem_t326 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t6480 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::RemoveItem(System.Int32) */, (Collection_1_t6480 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m28487_gshared (Collection_1_t6480 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m28488_gshared (Collection_1_t6480 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m28489_gshared (Collection_1_t6480 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m28490_gshared (Collection_1_t6480 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m28491_gshared (Collection_1_t6480 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		ConditionalQueueItem_t326  L_2 = (ConditionalQueueItem_t326 )InterfaceFuncInvoker1< ConditionalQueueItem_t326 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		ConditionalQueueItem_t326  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m28492_gshared (Collection_1_t6480 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		ConditionalQueueItem_t326  L_2 = (( ConditionalQueueItem_t326  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t6480 *)__this);
		VirtActionInvoker2< int32_t, ConditionalQueueItem_t326  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::SetItem(System.Int32,T) */, (Collection_1_t6480 *)__this, (int32_t)L_0, (ConditionalQueueItem_t326 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Add(T)
extern "C" void Collection_1_Add_m28493_gshared (Collection_1_t6480 * __this, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		ConditionalQueueItem_t326  L_3 = ___item;
		NullCheck((Collection_1_t6480 *)__this);
		VirtActionInvoker2< int32_t, ConditionalQueueItem_t326  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::InsertItem(System.Int32,T) */, (Collection_1_t6480 *)__this, (int32_t)L_2, (ConditionalQueueItem_t326 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Clear()
extern "C" void Collection_1_Clear_m28494_gshared (Collection_1_t6480 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t6480 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::ClearItems() */, (Collection_1_t6480 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::ClearItems()
extern "C" void Collection_1_ClearItems_m28495_gshared (Collection_1_t6480 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Contains(T)
extern "C" bool Collection_1_Contains_m28496_gshared (Collection_1_t6480 * __this, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		ConditionalQueueItem_t326  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, ConditionalQueueItem_t326  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (ConditionalQueueItem_t326 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m28497_gshared (Collection_1_t6480 * __this, ConditionalQueueItemU5BU5D_t6476* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		ConditionalQueueItemU5BU5D_t6476* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< ConditionalQueueItemU5BU5D_t6476*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (ConditionalQueueItemU5BU5D_t6476*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m28498_gshared (Collection_1_t6480 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m28499_gshared (Collection_1_t6480 * __this, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		ConditionalQueueItem_t326  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, ConditionalQueueItem_t326  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (ConditionalQueueItem_t326 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m28500_gshared (Collection_1_t6480 * __this, int32_t ___index, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		ConditionalQueueItem_t326  L_1 = ___item;
		NullCheck((Collection_1_t6480 *)__this);
		VirtActionInvoker2< int32_t, ConditionalQueueItem_t326  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::InsertItem(System.Int32,T) */, (Collection_1_t6480 *)__this, (int32_t)L_0, (ConditionalQueueItem_t326 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m28501_gshared (Collection_1_t6480 * __this, int32_t ___index, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		ConditionalQueueItem_t326  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, ConditionalQueueItem_t326  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (ConditionalQueueItem_t326 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Remove(T)
extern "C" bool Collection_1_Remove_m28502_gshared (Collection_1_t6480 * __this, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ConditionalQueueItem_t326  L_0 = ___item;
		NullCheck((Collection_1_t6480 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, ConditionalQueueItem_t326  >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IndexOf(T) */, (Collection_1_t6480 *)__this, (ConditionalQueueItem_t326 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t6480 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::RemoveItem(System.Int32) */, (Collection_1_t6480 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m28503_gshared (Collection_1_t6480 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t6480 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::RemoveItem(System.Int32) */, (Collection_1_t6480 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m28504_gshared (Collection_1_t6480 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Count()
extern "C" int32_t Collection_1_get_Count_m28505_gshared (Collection_1_t6480 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Item(System.Int32)
extern "C" ConditionalQueueItem_t326  Collection_1_get_Item_m28506_gshared (Collection_1_t6480 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		ConditionalQueueItem_t326  L_2 = (ConditionalQueueItem_t326 )InterfaceFuncInvoker1< ConditionalQueueItem_t326 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m28507_gshared (Collection_1_t6480 * __this, int32_t ___index, ConditionalQueueItem_t326  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		ConditionalQueueItem_t326  L_1 = ___value;
		NullCheck((Collection_1_t6480 *)__this);
		VirtActionInvoker2< int32_t, ConditionalQueueItem_t326  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::SetItem(System.Int32,T) */, (Collection_1_t6480 *)__this, (int32_t)L_0, (ConditionalQueueItem_t326 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m28508_gshared (Collection_1_t6480 * __this, int32_t ___index, ConditionalQueueItem_t326  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		ConditionalQueueItem_t326  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, ConditionalQueueItem_t326  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityParseHelpers.Loom/ConditionalQueueItem>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (ConditionalQueueItem_t326 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IsValidItem(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m28509_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::ConvertItem(System.Object)
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" ConditionalQueueItem_t326  Collection_1_ConvertItem_m28510_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)))));
	}

IL_000f:
	{
		ArgumentException_t725 * L_3 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_3, (String_t*)(String_t*) &_stringLiteral4734, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m28511_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_t650 * L_2 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t749_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m28512_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t749_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t749_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityParseHelpers.Loom/ConditionalQueueItem>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t4165_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m28513_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t4165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6696);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t4165_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t4165_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor()
extern "C" void EqualityComparer_1__ctor_m28514_gshared (EqualityComparer_1_t6481 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t5752_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t636_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m28515_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t5752_0_0_0_var = il2cpp_codegen_type_from_index(10876);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		TypeU5BU5D_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(GenericEqualityComparer_1_t5752_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t636* L_4 = (TypeU5BU5D_t636*)((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t636* >::Invoke(93 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t636*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m3547(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t6481_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t6481 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t6482 * L_8 = (DefaultComparer_t6482 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t6482 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t6481_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m28516_gshared (EqualityComparer_1_t6481 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t6481 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, ConditionalQueueItem_t326  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GetHashCode(T) */, (EqualityComparer_1_t6481 *)__this, (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m28517_gshared (EqualityComparer_1_t6481 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t6481 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, ConditionalQueueItem_t326 , ConditionalQueueItem_t326  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Equals(T,T) */, (EqualityComparer_1_t6481 *)__this, (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Default()
extern "C" EqualityComparer_1_t6481 * EqualityComparer_1_get_Default_m28518_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t6481 * L_0 = ((EqualityComparer_1_t6481_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor()
extern TypeInfo* EqualityComparer_1_t6481_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m28519_gshared (DefaultComparer_t6482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6481_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12895);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t6481 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6481_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t6481 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t6481 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/ConditionalQueueItem>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28520_gshared (DefaultComparer_t6482 * __this, ConditionalQueueItem_t326  ___obj, const MethodInfo* method)
{
	{
		ConditionalQueueItem_t326  L_0 = ___obj;
		ConditionalQueueItem_t326  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/ConditionalQueueItem>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28521_gshared (DefaultComparer_t6482 * __this, ConditionalQueueItem_t326  ___x, ConditionalQueueItem_t326  ___y, const MethodInfo* method)
{
	{
		ConditionalQueueItem_t326  L_0 = ___x;
		ConditionalQueueItem_t326  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		ConditionalQueueItem_t326  L_3 = ___y;
		ConditionalQueueItem_t326  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		ConditionalQueueItem_t326  L_6 = ___y;
		ConditionalQueueItem_t326  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m28522_gshared (Predicate_1_t6483 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m28523_gshared (Predicate_1_t6483 * __this, ConditionalQueueItem_t326  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m28523((Predicate_1_t6483 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, ConditionalQueueItem_t326  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, ConditionalQueueItem_t326  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* ConditionalQueueItem_t326_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m28524_gshared (Predicate_1_t6483 * __this, ConditionalQueueItem_t326  ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConditionalQueueItem_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ConditionalQueueItem_t326_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m28525_gshared (Predicate_1_t6483 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_4.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_4MethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor()
extern "C" void Comparer_1__ctor_m28526_gshared (Comparer_1_t6484 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.cctor()
extern const Il2CppType* GenericComparer_1_t5742_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t636_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m28527_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t5742_0_0_0_var = il2cpp_codegen_type_from_index(10762);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		TypeU5BU5D_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(GenericComparer_1_t5742_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t636* L_4 = (TypeU5BU5D_t636*)((TypeU5BU5D_t636*)SZArrayNew(TypeU5BU5D_t636_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t636* >::Invoke(93 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t636*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m3547(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t6484_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t6484 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t6485 * L_8 = (DefaultComparer_t6485 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t6485 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t6484_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m28528_gshared (Comparer_1_t6484 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t6484 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, ConditionalQueueItem_t326 , ConditionalQueueItem_t326  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Compare(T,T) */, (Comparer_1_t6484 *)__this, (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (ConditionalQueueItem_t326 )((*(ConditionalQueueItem_t326 *)((ConditionalQueueItem_t326 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t725 * L_8 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m10458(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::get_Default()
extern "C" Comparer_1_t6484 * Comparer_1_get_Default_m28529_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t6484 * L_0 = ((Comparer_1_t6484_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor()
extern TypeInfo* Comparer_1_t6484_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m28530_gshared (DefaultComparer_t6485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t6484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12900);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t6484 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t6484_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t6484 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t6484 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityParseHelpers.Loom/ConditionalQueueItem>::Compare(T,T)
extern TypeInfo* IComparable_t43_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m28531_gshared (DefaultComparer_t6485 * __this, ConditionalQueueItem_t326  ___x, ConditionalQueueItem_t326  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		ConditionalQueueItem_t326  L_0 = ___x;
		ConditionalQueueItem_t326  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		ConditionalQueueItem_t326  L_3 = ___y;
		ConditionalQueueItem_t326  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		ConditionalQueueItem_t326  L_6 = ___y;
		ConditionalQueueItem_t326  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		ConditionalQueueItem_t326  L_9 = ___x;
		ConditionalQueueItem_t326  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		ConditionalQueueItem_t326  L_12 = ___x;
		ConditionalQueueItem_t326  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		ConditionalQueueItem_t326  L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, ConditionalQueueItem_t326  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityParseHelpers.Loom/ConditionalQueueItem>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (ConditionalQueueItem_t326 )L_15);
		return L_16;
	}

IL_003e:
	{
		ConditionalQueueItem_t326  L_17 = ___x;
		ConditionalQueueItem_t326  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t43_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		ConditionalQueueItem_t326  L_20 = ___x;
		ConditionalQueueItem_t326  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		ConditionalQueueItem_t326  L_23 = ___y;
		ConditionalQueueItem_t326  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck((Object_t *)((Object_t *)Castclass(L_22, IComparable_t43_il2cpp_TypeInfo_var)));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t43_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_22, IComparable_t43_il2cpp_TypeInfo_var)), (Object_t *)L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t725 * L_27 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_27, (String_t*)(String_t*) &_stringLiteral4724, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<UnityParseHelpers.Loom/ConditionalQueueItem>
#include "mscorlib_System_Comparison_1_gen_33MethodDeclarations.h"



// System.Void System.Comparison`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m28532_gshared (Comparison_1_t6486 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m28533_gshared (Comparison_1_t6486 * __this, ConditionalQueueItem_t326  ___x, ConditionalQueueItem_t326  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m28533((Comparison_1_t6486 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, ConditionalQueueItem_t326  ___x, ConditionalQueueItem_t326  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, ConditionalQueueItem_t326  ___x, ConditionalQueueItem_t326  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityParseHelpers.Loom/ConditionalQueueItem>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* ConditionalQueueItem_t326_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m28534_gshared (Comparison_1_t6486 * __this, ConditionalQueueItem_t326  ___x, ConditionalQueueItem_t326  ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConditionalQueueItem_t326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(ConditionalQueueItem_t326_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(ConditionalQueueItem_t326_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityParseHelpers.Loom/ConditionalQueueItem>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m28535_gshared (Comparison_1_t6486 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Byte>
#include "System_Core_System_Func_2_gen_57.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"


// System.Void System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m28536_gshared (Func_2_t6487 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Byte>::Invoke(T)
extern "C" uint8_t Func_2_Invoke_m28538_gshared (Func_2_t6487 * __this, DelayedQueueItem_t323  ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m28538((Func_2_t6487 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, DelayedQueueItem_t323  ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, DelayedQueueItem_t323  ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* DelayedQueueItem_t323_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_2_BeginInvoke_m28540_gshared (Func_2_t6487 * __this, DelayedQueueItem_t323  ___arg1, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DelayedQueueItem_t323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(DelayedQueueItem_t323_il2cpp_TypeInfo_var, &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_2_EndInvoke_m28542_gshared (Func_2_t6487 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_7.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_7MethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_17.h"
// System.AggregateException
#include "Parse_Unity_System_AggregateException.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_17MethodDeclarations.h"
// System.AggregateException
#include "Parse_Unity_System_AggregateExceptionMethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m28543_gshared (TaskCompletionSource_1_t6488 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Task_1_t1993 * L_0 = (Task_1_t1993 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Task_1_t1993 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((TaskCompletionSource_1_t6488 *)__this);
		(( void (*) (TaskCompletionSource_1_t6488 *, Task_1_t1993 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t6488 *)__this, (Task_1_t1993 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1993 * TaskCompletionSource_1_get_Task_m28544_gshared (TaskCompletionSource_1_t6488 * __this, const MethodInfo* method)
{
	{
		Task_1_t1993 * L_0 = (Task_1_t1993 *)(__this->___U3CTaskU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m28546_gshared (TaskCompletionSource_1_t6488 * __this, Task_1_t1993 * ___value, const MethodInfo* method)
{
	{
		Task_1_t1993 * L_0 = ___value;
		__this->___U3CTaskU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m28548_gshared (TaskCompletionSource_1_t6488 * __this, uint8_t ___result, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t6488 *)__this);
		Task_1_t1993 * L_0 = (( Task_1_t1993 * (*) (TaskCompletionSource_1_t6488 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t6488 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		uint8_t L_1 = ___result;
		NullCheck((Task_1_t1993 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1993 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Task_1_t1993 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m28550_gshared (TaskCompletionSource_1_t6488 * __this, AggregateException_t727 * ___exception, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t6488 *)__this);
		Task_1_t1993 * L_0 = (( Task_1_t1993 * (*) (TaskCompletionSource_1_t6488 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t6488 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t727 * L_1 = ___exception;
		NullCheck((Task_1_t1993 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1993 *, AggregateException_t727 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1993 *)L_0, (AggregateException_t727 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern TypeInfo* AggregateException_t727_il2cpp_TypeInfo_var;
extern TypeInfo* ExceptionU5BU5D_t9393_il2cpp_TypeInfo_var;
extern "C" bool TaskCompletionSource_1_TrySetException_m28552_gshared (TaskCompletionSource_1_t6488 * __this, Exception_t496 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AggregateException_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4613);
		ExceptionU5BU5D_t9393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17609);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t727 * V_0 = {0};
	ExceptionU5BU5D_t9393* V_1 = {0};
	{
		Exception_t496 * L_0 = ___exception;
		V_0 = (AggregateException_t727 *)((AggregateException_t727 *)IsInst(L_0, AggregateException_t727_il2cpp_TypeInfo_var));
		AggregateException_t727 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((TaskCompletionSource_1_t6488 *)__this);
		Task_1_t1993 * L_2 = (( Task_1_t1993 * (*) (TaskCompletionSource_1_t6488 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t6488 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t727 * L_3 = V_0;
		NullCheck((Task_1_t1993 *)L_2);
		bool L_4 = (( bool (*) (Task_1_t1993 *, AggregateException_t727 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1993 *)L_2, (AggregateException_t727 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_4;
	}

IL_0017:
	{
		NullCheck((TaskCompletionSource_1_t6488 *)__this);
		Task_1_t1993 * L_5 = (( Task_1_t1993 * (*) (TaskCompletionSource_1_t6488 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t6488 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_1 = (ExceptionU5BU5D_t9393*)((ExceptionU5BU5D_t9393*)SZArrayNew(ExceptionU5BU5D_t9393_il2cpp_TypeInfo_var, 1));
		ExceptionU5BU5D_t9393* L_6 = V_1;
		Exception_t496 * L_7 = ___exception;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Exception_t496 **)(Exception_t496 **)SZArrayLdElema(L_6, 0)) = (Exception_t496 *)L_7;
		ExceptionU5BU5D_t9393* L_8 = V_1;
		AggregateException_t727 * L_9 = (AggregateException_t727 *)il2cpp_codegen_object_new (AggregateException_t727_il2cpp_TypeInfo_var);
		AggregateException__ctor_m8799(L_9, (Object_t*)(Object_t*)L_8, /*hidden argument*/NULL);
		NullCheck((AggregateException_t727 *)L_9);
		AggregateException_t727 * L_10 = AggregateException_Flatten_m3254((AggregateException_t727 *)L_9, /*hidden argument*/NULL);
		NullCheck((Task_1_t1993 *)L_5);
		bool L_11 = (( bool (*) (Task_1_t1993 *, AggregateException_t727 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1993 *)L_5, (AggregateException_t727 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_11;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m28554_gshared (TaskCompletionSource_1_t6488 * __this, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t6488 *)__this);
		Task_1_t1993 * L_0 = (( Task_1_t1993 * (*) (TaskCompletionSource_1_t6488 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t6488 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Task_1_t1993 *)L_0);
		bool L_1 = (( bool (*) (Task_1_t1993 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1993 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetResult_m28555_gshared (TaskCompletionSource_1_t6488 * __this, uint8_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint8_t L_0 = ___result;
		NullCheck((TaskCompletionSource_1_t6488 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t6488 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((TaskCompletionSource_1_t6488 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1668 * L_2 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_2, (String_t*)(String_t*) &_stringLiteral1980, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m28557_gshared (TaskCompletionSource_1_t6488 * __this, AggregateException_t727 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		AggregateException_t727 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t6488 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t6488 *, AggregateException_t727 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t6488 *)__this, (AggregateException_t727 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1668 * L_2 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_2, (String_t*)(String_t*) &_stringLiteral1981, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m28559_gshared (TaskCompletionSource_1_t6488 * __this, Exception_t496 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t496 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t6488 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t6488 *, Exception_t496 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((TaskCompletionSource_1_t6488 *)__this, (Exception_t496 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1668 * L_2 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_2, (String_t*)(String_t*) &_stringLiteral1981, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetCanceled_m28561_gshared (TaskCompletionSource_1_t6488 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((TaskCompletionSource_1_t6488 *)__this);
		bool L_0 = (( bool (*) (TaskCompletionSource_1_t6488 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((TaskCompletionSource_1_t6488 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral1982, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_Task.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
#include "mscorlib_System_Action_1_gen_24.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl.h"
// System.Action`1<System.Threading.Tasks.Task>
#include "mscorlib_System_Action_1_gen.h"
// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_TaskMethodDeclarations.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayClMethodDeclarations.h"
// System.Action`1<System.Threading.Tasks.Task>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern TypeInfo* Task_t344_il2cpp_TypeInfo_var;
extern "C" void Task_1__ctor_m28562_gshared (Task_1_t1993 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t344_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(322);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Task_t344 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t344_il2cpp_TypeInfo_var);
		Task__ctor_m8829((Task_t344 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m28563_gshared (Task_1_t1993 * __this, const MethodInfo* method)
{
	{
		NullCheck((Task_t344 *)__this);
		Task_Wait_m8832((Task_t344 *)__this, /*hidden argument*/NULL);
		uint8_t L_0 = (uint8_t)(__this->___result_9);
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern TypeInfo* Action_1_t337_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1__ctor_m3250_MethodInfo_var;
extern "C" Task_t344 * Task_1_ContinueWith_m28564_gshared (Task_1_t1993 * __this, Action_1_t6489 * ___continuation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(323);
		Action_1__ctor_m3250_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483819);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1_t6490 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1_t6490 * L_0 = (U3CU3Ec__DisplayClass1_t6490 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass1_t6490 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass1_t6490 *)L_0;
		U3CU3Ec__DisplayClass1_t6490 * L_1 = V_0;
		Action_1_t6489 * L_2 = ___continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		U3CU3Ec__DisplayClass1_t6490 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t337 * L_5 = (Action_1_t337 *)il2cpp_codegen_object_new (Action_1_t337_il2cpp_TypeInfo_var);
		Action_1__ctor_m3250(L_5, (Object_t *)L_3, (IntPtr_t)L_4, /*hidden argument*/Action_1__ctor_m3250_MethodInfo_var);
		NullCheck((Task_t344 *)__this);
		Task_t344 * L_6 = Task_ContinueWith_m3251((Task_t344 *)__this, (Action_1_t337 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern TypeInfo* IEnumerable_1_t10840_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t10841_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void Task_1_RunContinuations_m28565_gshared (Task_1_t1993 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t10840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12913);
		IEnumerator_1_t10841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12911);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t337 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t344 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m2728(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(((Task_t344 *)__this)->___continuations_3);
			NullCheck((Object_t*)L_2);
			Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t10840_il2cpp_TypeInfo_var, (Object_t*)L_2);
			V_2 = (Object_t*)L_3;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0029;
			}

IL_001b:
			{
				Object_t* L_4 = V_2;
				NullCheck((Object_t*)L_4);
				Action_1_t337 * L_5 = (Action_1_t337 *)InterfaceFuncInvoker0< Action_1_t337 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_t10841_il2cpp_TypeInfo_var, (Object_t*)L_4);
				V_0 = (Action_1_t337 *)L_5;
				Action_1_t337 * L_6 = V_0;
				NullCheck((Action_1_t337 *)L_6);
				VirtActionInvoker1< Task_t344 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0) */, (Action_1_t337 *)L_6, (Task_t344 *)__this);
			}

IL_0029:
			{
				Object_t* L_7 = V_2;
				NullCheck((Object_t *)L_7);
				bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_7);
				if (L_8)
				{
					goto IL_001b;
				}
			}

IL_0031:
			{
				IL2CPP_LEAVE(0x3D, FINALLY_0033);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t496 *)e.ex;
			goto FINALLY_0033;
		}

FINALLY_0033:
		{ // begin finally (depth: 2)
			{
				Object_t* L_9 = V_2;
				if (!L_9)
				{
					goto IL_003c;
				}
			}

IL_0036:
			{
				Object_t* L_10 = V_2;
				NullCheck((Object_t *)L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_10);
			}

IL_003c:
			{
				IL2CPP_END_FINALLY(51)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(51)
		{
			IL2CPP_JUMP_TBL(0x3D, IL_003d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
		}

IL_003d:
		{
			((Task_t344 *)__this)->___continuations_3 = (Object_t*)NULL;
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Object_t * L_11 = V_1;
		Monitor_Exit_m2731(NULL /*static, unused*/, (Object_t *)L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m28566_gshared (Task_1_t1993 * __this, uint8_t ___result, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t344 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m2728(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t344 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t344 *)__this)->___isCompleted_6 = 1;
			uint8_t L_3 = ___result;
			__this->___result_9 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t344 *)__this)->___mutex_2);
			Monitor_PulseAll_m22459(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1993 *)__this);
			(( void (*) (Task_1_t1993 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1993 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m2731(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m28567_gshared (Task_1_t1993 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t344 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m2728(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t344 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t344 *)__this)->___isCompleted_6 = 1;
			((Task_t344 *)__this)->___isCanceled_5 = 1;
			Object_t * L_3 = (Object_t *)(((Task_t344 *)__this)->___mutex_2);
			Monitor_PulseAll_m22459(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
			NullCheck((Task_1_t1993 *)__this);
			(( void (*) (Task_1_t1993 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1993 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_1;
		Monitor_Exit_m2731(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0043:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m28568_gshared (Task_1_t1993 * __this, AggregateException_t727 * ___exception, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t344 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m2728(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t344 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t344 *)__this)->___isCompleted_6 = 1;
			AggregateException_t727 * L_3 = ___exception;
			((Task_t344 *)__this)->___exception_4 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t344 *)__this)->___mutex_2);
			Monitor_PulseAll_m22459(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1993 *)__this);
			(( void (*) (Task_1_t1993 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1993 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m2731(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_25MethodDeclarations.h"



// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m28570_gshared (Action_1_t3305 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" void Action_1_Invoke_m28572_gshared (Action_1_t3305 * __this, Object_t * ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_1_Invoke_m28572((Action_1_t3305 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m28574_gshared (Action_1_t3305 * __this, Object_t * ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m28576_gshared (Action_1_t3305 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
#include "mscorlib_System_Action_1_gen_24MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Byte>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1__ctor_m28577_gshared (U3CU3Ec__DisplayClass1_t6490 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Byte>::<ContinueWith>b__0(System.Threading.Tasks.Task)
extern "C" void U3CU3Ec__DisplayClass1_U3CContinueWithU3Eb__0_m28578_gshared (U3CU3Ec__DisplayClass1_t6490 * __this, Task_t344 * ___t, const MethodInfo* method)
{
	{
		Action_1_t6489 * L_0 = (Action_1_t6489 *)(__this->___continuation_0);
		Task_t344 * L_1 = ___t;
		NullCheck((Action_1_t6489 *)L_0);
		VirtActionInvoker1< Task_1_t1993 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>::Invoke(!0) */, (Action_1_t6489 *)L_0, (Task_1_t1993 *)((Task_1_t1993 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return;
	}
}
// System.Func`1<System.Byte>
#include "System_Core_System_Func_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`1<System.Byte>
#include "System_Core_System_Func_1_gen_6MethodDeclarations.h"



// System.Void System.Func`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m28594_gshared (Func_1_t6492 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`1<System.Byte>::Invoke()
extern "C" uint8_t Func_1_Invoke_m28596_gshared (Func_1_t6492 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_1_Invoke_m28596((Func_1_t6492 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`1<System.Byte>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m28598_gshared (Func_1_t6492 * __this, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_1_EndInvoke_m28600_gshared (Func_1_t6492 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityParseHelpers.Loom/DelayedQueueItem>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3EMethodDeclarations.h"

// System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Boolean>
#include "System_Core_System_Func_2_gen.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Boolean>
#include "System_Core_System_Func_2_genMethodDeclarations.h"


// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor()
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m28601_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" DelayedQueueItem_t323  U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m28602_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 * __this, const MethodInfo* method)
{
	{
		DelayedQueueItem_t323  L_0 = (DelayedQueueItem_t323 )(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m28603_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 * __this, const MethodInfo* method)
{
	{
		DelayedQueueItem_t323  L_0 = (DelayedQueueItem_t323 )(__this->___U24current_5);
		DelayedQueueItem_t323  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), &L_1);
		return L_2;
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m28604_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator() */, (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityParseHelpers.Loom/DelayedQueueItem>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" Object_t* U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m28605_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 * __this, const MethodInfo* method)
{
	U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m7543(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 * L_2 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 *)L_2;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 * L_5 = V_0;
		Func_2_t332 * L_6 = (Func_2_t332 *)(__this->___U3CU24U3Epredicate_7);
		NullCheck(L_5);
		L_5->___predicate_3 = L_6;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityParseHelpers.Loom/DelayedQueueItem>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m28606_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00be;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___source_0);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityParseHelpers.Loom/DelayedQueueItem>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
		__this->___U3CU24s_97U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_0089;
			}
		}

IL_0043:
		{
			goto IL_0089;
		}

IL_0048:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			NullCheck((Object_t*)L_5);
			DelayedQueueItem_t323  L_6 = (DelayedQueueItem_t323 )InterfaceFuncInvoker0< DelayedQueueItem_t323  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityParseHelpers.Loom/DelayedQueueItem>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t332 * L_7 = (Func_2_t332 *)(__this->___predicate_3);
			DelayedQueueItem_t323  L_8 = (DelayedQueueItem_t323 )(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t332 *)L_7);
			bool L_9 = (bool)VirtFuncInvoker1< bool, DelayedQueueItem_t323  >::Invoke(11 /* TResult System.Func`2<UnityParseHelpers.Loom/DelayedQueueItem,System.Boolean>::Invoke(T) */, (Func_2_t332 *)L_7, (DelayedQueueItem_t323 )L_8);
			if (!L_9)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			DelayedQueueItem_t323  L_10 = (DelayedQueueItem_t323 )(__this->___U3CelementU3E__1_2);
			__this->___U24current_5 = L_10;
			__this->___U24PC_4 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xC0, FINALLY_009e);
		}

IL_0089:
		{
			Object_t* L_11 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			NullCheck((Object_t *)L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_11);
			if (L_12)
			{
				goto IL_0048;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_00a2;
			}
		}

IL_00a1:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00a2:
		{
			Object_t* L_14 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			if (L_14)
			{
				goto IL_00ab;
			}
		}

IL_00aa:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00ab:
		{
			Object_t* L_15 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xC0, IL_00c0)
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_00b7:
	{
		__this->___U24PC_4 = (-1);
	}

IL_00be:
	{
		return 0;
	}

IL_00c0:
	{
		return 1;
	}
	// Dead block : IL_00c2: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityParseHelpers.Loom/DelayedQueueItem>::Dispose()
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m28607_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			NullCheck((Object_t *)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityParseHelpers.Loom/DelayedQueueItem>::Reset()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Reset_m28608_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t6494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_19.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_19MethodDeclarations.h"



// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m9054_gshared (Func_2_t1814 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m28610_gshared (Func_2_t1814 * __this, Object_t * ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m28610((Func_2_t1814 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m28611_gshared (Func_2_t1814 * __this, Object_t * ___arg1, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m28612_gshared (Func_2_t1814 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateCastIteratorU3Ec.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateCastIteratorU3EcMethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::.ctor()
extern "C" void U3CCreateCastIteratorU3Ec__Iterator0_1__ctor_m28613_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateCastIteratorU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m28614_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateCastIteratorU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m28615_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateCastIteratorU3Ec__Iterator0_1_System_Collections_IEnumerable_GetEnumerator_m28616_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateCastIteratorU3Ec__Iterator0_1_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m28617_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 * __this, const MethodInfo* method)
{
	U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_3);
		int32_t L_1 = Interlocked_CompareExchange_m7543(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 * L_2 = (U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 *)L_2;
		U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 * L_3 = V_0;
		Object_t * L_4 = (Object_t *)(__this->___U3CU24U3Esource_5);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerable_t746_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateCastIteratorU3Ec__Iterator0_1_MoveNext_m28618_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Object_t * V_2 = {0};
	bool V_3 = false;
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_3);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_3 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00af;
	}

IL_0023:
	{
		Object_t * L_2 = (Object_t *)(__this->___source_0);
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t746_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___U3CU24s_41U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_0078;
			}
		}

IL_0043:
		{
			goto IL_0078;
		}

IL_0048:
		{
			Object_t * L_5 = (Object_t *)(__this->___U3CU24s_41U3E__0_1);
			NullCheck((Object_t *)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_5);
			__this->___U3CelementU3E__1_2 = ((Object_t *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
			Object_t * L_7 = (Object_t *)(__this->___U3CelementU3E__1_2);
			__this->___U24current_4 = L_7;
			__this->___U24PC_3 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB1, FINALLY_008d);
		}

IL_0078:
		{
			Object_t * L_8 = (Object_t *)(__this->___U3CU24s_41U3E__0_1);
			NullCheck((Object_t *)L_8);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_8);
			if (L_9)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0xA8, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_0091;
			}
		}

IL_0090:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0091:
		{
			Object_t * L_11 = (Object_t *)(__this->___U3CU24s_41U3E__0_1);
			V_2 = (Object_t *)((Object_t *)IsInst(L_11, IDisposable_t646_il2cpp_TypeInfo_var));
			Object_t * L_12 = V_2;
			if (L_12)
			{
				goto IL_00a1;
			}
		}

IL_00a0:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_00a1:
		{
			Object_t * L_13 = V_2;
			NullCheck((Object_t *)L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_13);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0xB1, IL_00b1)
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_00a8:
	{
		__this->___U24PC_3 = (-1);
	}

IL_00af:
	{
		return 0;
	}

IL_00b1:
	{
		return 1;
	}
	// Dead block : IL_00b3: ldloc.3
}
// System.Void System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::Dispose()
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void U3CCreateCastIteratorU3Ec__Iterator0_1_Dispose_m28619_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Object_t * V_1 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_3);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003d;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003d;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t * L_2 = (Object_t *)(__this->___U3CU24s_41U3E__0_1);
			V_1 = (Object_t *)((Object_t *)IsInst(L_2, IDisposable_t646_il2cpp_TypeInfo_var));
			Object_t * L_3 = V_1;
			if (L_3)
			{
				goto IL_0036;
			}
		}

IL_0035:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_0036:
		{
			Object_t * L_4 = V_1;
			NullCheck((Object_t *)L_4);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_4);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_003d:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::Reset()
extern TypeInfo* NotSupportedException_t650_il2cpp_TypeInfo_var;
extern "C" void U3CCreateCastIteratorU3Ec__Iterator0_1_Reset_m28620_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t650 * L_0 = (NotSupportedException_t650 *)il2cpp_codegen_object_new (NotSupportedException_t650_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2693(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_2MethodDeclarations.h"

// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_2.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.Collections.Generic.HashSet`1<System.String>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_3.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_gen_114.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
#include "Parse.Unity_ArrayTypes.h"
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_29.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_8.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Collections.Generic.IEnumerable`1<System.Object>>
#include "System_Core_System_Func_2_gen_62.h"
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_4.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Object>
#include "System_Core_System_Func_2_gen_29.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_58.h"
// System.Threading.Tasks.Task`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Int32>
#include "System_Core_System_Func_2_gen_59.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>,System.Object>
#include "System_Core_System_Func_2_gen_61.h"
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObject.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "Parse_Unity_System_Tuple_2_gen_2.h"
// Parse.ParseException
#include "Parse_Unity_Parse_ParseException.h"
// Parse.ParseException/ErrorCode
#include "Parse_Unity_Parse_ParseException_ErrorCode.h"
// Parse.ParseClient
#include "Parse_Unity_Parse_ParseClientMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1MethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.HashSet`1<System.String>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_3MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5MethodDeclarations.h"
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObjectMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_gen_114MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// Parse.Internal.MissingExtensions
#include "Parse_Unity_Parse_Internal_MissingExtensionsMethodDeclarations.h"
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistanceMethodDeclarations.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationTokenMethodDeclarations.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// Parse.ParseUser
#include "Parse_Unity_Parse_ParseUserMethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Collections.Generic.IEnumerable`1<System.Object>>
#include "System_Core_System_Func_2_gen_62MethodDeclarations.h"
// Parse.Internal.InternalExtensions
#include "Parse_Unity_Parse_Internal_InternalExtensionsMethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Object>
#include "System_Core_System_Func_2_gen_29MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_58MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.Int32>
#include "System_Core_System_Func_2_gen_59MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>,System.Object>
#include "System_Core_System_Func_2_gen_61MethodDeclarations.h"
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_8MethodDeclarations.h"
// System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "Parse_Unity_System_Tuple_2_gen_2MethodDeclarations.h"
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_4MethodDeclarations.h"
// Parse.ParseException
#include "Parse_Unity_Parse_ParseExceptionMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_29MethodDeclarations.h"
struct Enumerable_t718;
struct List_1_t1;
struct IEnumerable_1_t1654;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
struct Enumerable_t718;
struct List_1_t2;
struct IEnumerable_1_t729;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" List_1_t2 * Enumerable_ToList_TisObject_t_m8948_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToList_TisObject_t_m8948(__this /* static, unused */, p0, method) (( List_1_t2 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m8948_gshared)(__this /* static, unused */, p0, method)
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisString_t_m8982(__this /* static, unused */, p0, method) (( List_1_t1 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m8948_gshared)(__this /* static, unused */, p0, method)
struct InternalExtensions_t1766;
struct Task_1_t6503;
struct Task_1_t1965;
struct Func_2_t6521;
// Parse.Internal.InternalExtensions
#include "Parse_Unity_Parse_Internal_InternalExtensions.h"
struct InternalExtensions_t1766;
struct Task_1_t808;
struct Func_2_t2042;
// Declaration System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Object,System.Object>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Object,System.Object>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
extern "C" Task_1_t808 * InternalExtensions_OnSuccess_TisObject_t_TisObject_t_m9041_gshared (Object_t * __this /* static, unused */, Task_1_t808 * ___task, Func_2_t2042 * ___continuation, const MethodInfo* method);
#define InternalExtensions_OnSuccess_TisObject_t_TisObject_t_m9041(__this /* static, unused */, ___task, ___continuation, method) (( Task_1_t808 * (*) (Object_t * /* static, unused */, Task_1_t808 *, Func_2_t2042 *, const MethodInfo*))InternalExtensions_OnSuccess_TisObject_t_TisObject_t_m9041_gshared)(__this /* static, unused */, ___task, ___continuation, method)
// Declaration System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>,System.Collections.Generic.IEnumerable`1<System.Object>>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>,System.Collections.Generic.IEnumerable`1<System.Object>>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
#define InternalExtensions_OnSuccess_TisTuple_2_t1834_TisIEnumerable_1_t729_m75765(__this /* static, unused */, ___task, ___continuation, method) (( Task_1_t6503 * (*) (Object_t * /* static, unused */, Task_1_t1965 *, Func_2_t6521 *, const MethodInfo*))InternalExtensions_OnSuccess_TisObject_t_TisObject_t_m9041_gshared)(__this /* static, unused */, ___task, ___continuation, method)
struct InternalExtensions_t1766;
struct Task_1_t808;
struct Task_1_t1965;
struct Func_2_t1849;
// Declaration System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>,System.Object>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>,System.Object>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
#define InternalExtensions_OnSuccess_TisTuple_2_t1834_TisObject_t_m9116(__this /* static, unused */, ___task, ___continuation, method) (( Task_1_t808 * (*) (Object_t * /* static, unused */, Task_1_t1965 *, Func_2_t1849 *, const MethodInfo*))InternalExtensions_OnSuccess_TisObject_t_TisObject_t_m9041_gshared)(__this /* static, unused */, ___task, ___continuation, method)
struct InternalExtensions_t1766;
struct Task_1_t1949;
struct Task_1_t1965;
struct Func_2_t6497;
struct InternalExtensions_t1766;
struct Task_1_t1949;
struct Task_1_t808;
struct Func_2_t6531;
// Declaration System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Object,System.Int32>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Object,System.Int32>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
extern "C" Task_1_t1949 * InternalExtensions_OnSuccess_TisObject_t_TisInt32_t29_m73870_gshared (Object_t * __this /* static, unused */, Task_1_t808 * ___task, Func_2_t6531 * ___continuation, const MethodInfo* method);
#define InternalExtensions_OnSuccess_TisObject_t_TisInt32_t29_m73870(__this /* static, unused */, ___task, ___continuation, method) (( Task_1_t1949 * (*) (Object_t * /* static, unused */, Task_1_t808 *, Func_2_t6531 *, const MethodInfo*))InternalExtensions_OnSuccess_TisObject_t_TisInt32_t29_m73870_gshared)(__this /* static, unused */, ___task, ___continuation, method)
// Declaration System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>,System.Int32>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>,System.Int32>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
#define InternalExtensions_OnSuccess_TisTuple_2_t1834_TisInt32_t29_m75334(__this /* static, unused */, ___task, ___continuation, method) (( Task_1_t1949 * (*) (Object_t * /* static, unused */, Task_1_t1965 *, Func_2_t6497 *, const MethodInfo*))InternalExtensions_OnSuccess_TisObject_t_TisInt32_t29_m73870_gshared)(__this /* static, unused */, ___task, ___continuation, method)
struct InternalExtensions_t1766;
struct Task_1_t808;
struct Task_1_t6503;
struct Func_2_t6498;
// Declaration System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Collections.Generic.IEnumerable`1<System.Object>,System.Object>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions::OnSuccess<System.Collections.Generic.IEnumerable`1<System.Object>,System.Object>(System.Threading.Tasks.Task`1<TIn>,System.Func`2<System.Threading.Tasks.Task`1<TIn>,TResult>)
#define InternalExtensions_OnSuccess_TisIEnumerable_1_t729_TisObject_t_m75766(__this /* static, unused */, ___task, ___continuation, method) (( Task_1_t808 * (*) (Object_t * /* static, unused */, Task_1_t6503 *, Func_2_t6498 *, const MethodInfo*))InternalExtensions_OnSuccess_TisObject_t_TisObject_t_m9041_gshared)(__this /* static, unused */, ___task, ___continuation, method)
struct Enumerable_t718;
struct IEnumerable_1_t729;
struct Func_2_t1814;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisObject_t_TisObject_t_m8985_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t1814 * p1, const MethodInfo* method);
#define Enumerable_Select_TisObject_t_TisObject_t_m8985(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1814 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m8985_gshared)(__this /* static, unused */, p0, p1, method)
struct InternalExtensions_t1766;
struct Object_t;
struct IDictionary_2_t1810;
struct String_t;
struct InternalExtensions_t1766;
struct Object_t;
struct IDictionary_2_t2096;
// Declaration TValue Parse.Internal.InternalExtensions::GetOrDefault<System.Object,System.Object>(System.Collections.Generic.IDictionary`2<TKey,TValue>,TKey,TValue)
// TValue Parse.Internal.InternalExtensions::GetOrDefault<System.Object,System.Object>(System.Collections.Generic.IDictionary`2<TKey,TValue>,TKey,TValue)
extern "C" Object_t * InternalExtensions_GetOrDefault_TisObject_t_TisObject_t_m9249_gshared (Object_t * __this /* static, unused */, Object_t* ___self, Object_t * ___key, Object_t * ___defaultValue, const MethodInfo* method);
#define InternalExtensions_GetOrDefault_TisObject_t_TisObject_t_m9249(__this /* static, unused */, ___self, ___key, ___defaultValue, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t*, Object_t *, Object_t *, const MethodInfo*))InternalExtensions_GetOrDefault_TisObject_t_TisObject_t_m9249_gshared)(__this /* static, unused */, ___self, ___key, ___defaultValue, method)
// Declaration TValue Parse.Internal.InternalExtensions::GetOrDefault<System.String,System.Object>(System.Collections.Generic.IDictionary`2<TKey,TValue>,TKey,TValue)
// TValue Parse.Internal.InternalExtensions::GetOrDefault<System.String,System.Object>(System.Collections.Generic.IDictionary`2<TKey,TValue>,TKey,TValue)
#define InternalExtensions_GetOrDefault_TisString_t_TisObject_t_m9248(__this /* static, unused */, ___self, ___key, ___defaultValue, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t*, String_t*, Object_t *, const MethodInfo*))InternalExtensions_GetOrDefault_TisObject_t_TisObject_t_m9249_gshared)(__this /* static, unused */, ___self, ___key, ___defaultValue, method)
struct Enumerable_t718;
struct StringU5BU5D_t20;
struct IEnumerable_1_t1654;
struct Enumerable_t718;
struct ObjectU5BU5D_t21;
struct IEnumerable_1_t729;
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" ObjectU5BU5D_t21* Enumerable_ToArray_TisObject_t_m8905_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToArray_TisObject_t_m8905(__this /* static, unused */, p0, method) (( ObjectU5BU5D_t21* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToArray_TisObject_t_m8905_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisString_t_m8904(__this /* static, unused */, p0, method) (( StringU5BU5D_t20* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToArray_TisObject_t_m8905_gshared)(__this /* static, unused */, p0, method)
struct Enumerable_t718;
struct Object_t;
struct IEnumerable_1_t729;
// Declaration !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" Object_t * Enumerable_FirstOrDefault_TisObject_t_m3253_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_FirstOrDefault_TisObject_t_m3253(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_FirstOrDefault_TisObject_t_m3253_gshared)(__this /* static, unused */, p0, method)


// System.Void Parse.ParseQuery`1<System.Object>::.ctor(Parse.ParseQuery`1<T>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ReadOnlyCollection_1_t2026_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t1_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m9189_MethodInfo_var;
extern const MethodInfo* Enumerable_ToList_TisString_t_m8982_MethodInfo_var;
extern const MethodInfo* ReadOnlyCollection_1__ctor_m8993_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3296_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m86_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m11362_MethodInfo_var;
extern const MethodInfo* Nullable_1_GetValueOrDefault_m28777_MethodInfo_var;
extern const MethodInfo* Nullable_1__ctor_m11365_MethodInfo_var;
extern "C" void ParseQuery_1__ctor_m28621_gshared (ParseQuery_1_t2095 * __this, ParseQuery_1_t2095 * ___source, Object_t* ___where, Object_t* ___replacementOrderBy, Object_t* ___thenBy, Nullable_1_t3072  ___skip, Nullable_1_t3072  ___limit, Object_t* ___includes, Object_t* ___selectedKeys, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		ReadOnlyCollection_1_t2026_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3774);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		List_1_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m9189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484856);
		Enumerable_ToList_TisString_t_m8982_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484669);
		ReadOnlyCollection_1__ctor_m8993_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484670);
		List_1__ctor_m3296_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483839);
		List_1_AddRange_m86_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		Nullable_1_get_HasValue_m11362_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485172);
		Nullable_1_GetValueOrDefault_m28777_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485563);
		Nullable_1__ctor_m11365_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485174);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	List_1_t1 * V_1 = {0};
	HashSet_1_t1873 * V_2 = {0};
	HashSet_1_t1873 * V_3 = {0};
	Nullable_1_t3072  V_4 = {0};
	int32_t V_5 = 0;
	Nullable_1_t3072  V_6 = {0};
	Nullable_1_t3072  V_7 = {0};
	ParseQuery_1_t2095 * G_B13_0 = {0};
	ParseQuery_1_t2095 * G_B12_0 = {0};
	int32_t G_B14_0 = 0;
	ParseQuery_1_t2095 * G_B14_1 = {0};
	ParseQuery_1_t2095 * G_B16_0 = {0};
	ParseQuery_1_t2095 * G_B15_0 = {0};
	Nullable_1_t3072  G_B17_0 = {0};
	ParseQuery_1_t2095 * G_B17_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		ParseQuery_1_t2095 * L_0 = ___source;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral1880, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ParseQuery_1_t2095 * L_2 = ___source;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)(L_2->___className_0);
		__this->___className_0 = L_3;
		ParseQuery_1_t2095 * L_4 = ___source;
		NullCheck(L_4);
		Dictionary_2_t468 * L_5 = (Dictionary_2_t468 *)(L_4->___where_1);
		__this->___where_1 = L_5;
		ParseQuery_1_t2095 * L_6 = ___source;
		NullCheck(L_6);
		ReadOnlyCollection_1_t2026 * L_7 = (ReadOnlyCollection_1_t2026 *)(L_6->___orderBy_2);
		__this->___orderBy_2 = L_7;
		ParseQuery_1_t2095 * L_8 = ___source;
		NullCheck(L_8);
		Nullable_1_t3072  L_9 = (Nullable_1_t3072 )(L_8->___skip_5);
		__this->___skip_5 = L_9;
		ParseQuery_1_t2095 * L_10 = ___source;
		NullCheck(L_10);
		Nullable_1_t3072  L_11 = (Nullable_1_t3072 )(L_10->___limit_6);
		__this->___limit_6 = L_11;
		ParseQuery_1_t2095 * L_12 = ___source;
		NullCheck(L_12);
		ReadOnlyCollection_1_t2026 * L_13 = (ReadOnlyCollection_1_t2026 *)(L_12->___includes_3);
		__this->___includes_3 = L_13;
		ParseQuery_1_t2095 * L_14 = ___source;
		NullCheck(L_14);
		ReadOnlyCollection_1_t2026 * L_15 = (ReadOnlyCollection_1_t2026 *)(L_14->___selectedKeys_4);
		__this->___selectedKeys_4 = L_15;
		Object_t* L_16 = ___where;
		if (!L_16)
		{
			goto IL_007f;
		}
	}
	{
		Object_t* L_17 = ___where;
		NullCheck((ParseQuery_1_t2095 *)__this);
		Object_t* L_18 = (( Object_t* (*) (ParseQuery_1_t2095 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((ParseQuery_1_t2095 *)__this, (Object_t*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_0 = (Object_t*)L_18;
		Object_t* L_19 = V_0;
		Dictionary_2_t468 * L_20 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9189(L_20, (Object_t*)L_19, /*hidden argument*/Dictionary_2__ctor_m9189_MethodInfo_var);
		__this->___where_1 = L_20;
	}

IL_007f:
	{
		Object_t* L_21 = ___replacementOrderBy;
		if (!L_21)
		{
			goto IL_0093;
		}
	}
	{
		Object_t* L_22 = ___replacementOrderBy;
		List_1_t1 * L_23 = Enumerable_ToList_TisString_t_m8982(NULL /*static, unused*/, (Object_t*)L_22, /*hidden argument*/Enumerable_ToList_TisString_t_m8982_MethodInfo_var);
		ReadOnlyCollection_1_t2026 * L_24 = (ReadOnlyCollection_1_t2026 *)il2cpp_codegen_object_new (ReadOnlyCollection_1_t2026_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m8993(L_24, (Object_t*)L_23, /*hidden argument*/ReadOnlyCollection_1__ctor_m8993_MethodInfo_var);
		__this->___orderBy_2 = L_24;
	}

IL_0093:
	{
		Object_t* L_25 = ___thenBy;
		if (!L_25)
		{
			goto IL_00ca;
		}
	}
	{
		ReadOnlyCollection_1_t2026 * L_26 = (ReadOnlyCollection_1_t2026 *)(__this->___orderBy_2);
		if (L_26)
		{
			goto IL_00aa;
		}
	}
	{
		ArgumentException_t725 * L_27 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_27, (String_t*)(String_t*) &_stringLiteral1881, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}

IL_00aa:
	{
		ReadOnlyCollection_1_t2026 * L_28 = (ReadOnlyCollection_1_t2026 *)(__this->___orderBy_2);
		List_1_t1 * L_29 = (List_1_t1 *)il2cpp_codegen_object_new (List_1_t1_il2cpp_TypeInfo_var);
		List_1__ctor_m3296(L_29, (Object_t*)L_28, /*hidden argument*/List_1__ctor_m3296_MethodInfo_var);
		V_1 = (List_1_t1 *)L_29;
		List_1_t1 * L_30 = V_1;
		Object_t* L_31 = ___thenBy;
		NullCheck((List_1_t1 *)L_30);
		List_1_AddRange_m86((List_1_t1 *)L_30, (Object_t*)L_31, /*hidden argument*/List_1_AddRange_m86_MethodInfo_var);
		List_1_t1 * L_32 = V_1;
		ReadOnlyCollection_1_t2026 * L_33 = (ReadOnlyCollection_1_t2026 *)il2cpp_codegen_object_new (ReadOnlyCollection_1_t2026_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m8993(L_33, (Object_t*)L_32, /*hidden argument*/ReadOnlyCollection_1__ctor_m8993_MethodInfo_var);
		__this->___orderBy_2 = L_33;
	}

IL_00ca:
	{
		bool L_34 = Nullable_1_get_HasValue_m11362((Nullable_1_t3072 *)(&___skip), /*hidden argument*/Nullable_1_get_HasValue_m11362_MethodInfo_var);
		if (!L_34)
		{
			goto IL_011e;
		}
	}
	{
		Nullable_1_t3072  L_35 = (Nullable_1_t3072 )(__this->___skip_5);
		V_4 = (Nullable_1_t3072 )L_35;
		bool L_36 = Nullable_1_get_HasValue_m11362((Nullable_1_t3072 *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_m11362_MethodInfo_var);
		G_B12_0 = ((ParseQuery_1_t2095 *)(__this));
		if (L_36)
		{
			G_B13_0 = ((ParseQuery_1_t2095 *)(__this));
			goto IL_00e8;
		}
	}
	{
		G_B14_0 = 0;
		G_B14_1 = ((ParseQuery_1_t2095 *)(G_B12_0));
		goto IL_00ef;
	}

IL_00e8:
	{
		int32_t L_37 = Nullable_1_GetValueOrDefault_m28777((Nullable_1_t3072 *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_m28777_MethodInfo_var);
		G_B14_0 = L_37;
		G_B14_1 = ((ParseQuery_1_t2095 *)(G_B13_0));
	}

IL_00ef:
	{
		V_5 = (int32_t)G_B14_0;
		Nullable_1_t3072  L_38 = ___skip;
		V_6 = (Nullable_1_t3072 )L_38;
		bool L_39 = Nullable_1_get_HasValue_m11362((Nullable_1_t3072 *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_m11362_MethodInfo_var);
		G_B15_0 = ((ParseQuery_1_t2095 *)(G_B14_1));
		if (L_39)
		{
			G_B16_0 = ((ParseQuery_1_t2095 *)(G_B14_1));
			goto IL_010a;
		}
	}
	{
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_7));
		Nullable_1_t3072  L_40 = V_7;
		G_B17_0 = L_40;
		G_B17_1 = ((ParseQuery_1_t2095 *)(G_B15_0));
		goto IL_0119;
	}

IL_010a:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = Nullable_1_GetValueOrDefault_m28777((Nullable_1_t3072 *)(&V_6), /*hidden argument*/Nullable_1_GetValueOrDefault_m28777_MethodInfo_var);
		Nullable_1_t3072  L_43 = {0};
		Nullable_1__ctor_m11365(&L_43, (int32_t)((int32_t)((int32_t)L_41+(int32_t)L_42)), /*hidden argument*/Nullable_1__ctor_m11365_MethodInfo_var);
		G_B17_0 = L_43;
		G_B17_1 = ((ParseQuery_1_t2095 *)(G_B16_0));
	}

IL_0119:
	{
		NullCheck(G_B17_1);
		G_B17_1->___skip_5 = G_B17_0;
	}

IL_011e:
	{
		bool L_44 = Nullable_1_get_HasValue_m11362((Nullable_1_t3072 *)(&___limit), /*hidden argument*/Nullable_1_get_HasValue_m11362_MethodInfo_var);
		if (!L_44)
		{
			goto IL_012f;
		}
	}
	{
		Nullable_1_t3072  L_45 = ___limit;
		__this->___limit_6 = L_45;
	}

IL_012f:
	{
		Object_t* L_46 = ___includes;
		if (!L_46)
		{
			goto IL_014d;
		}
	}
	{
		Object_t* L_47 = ___includes;
		NullCheck((ParseQuery_1_t2095 *)__this);
		HashSet_1_t1873 * L_48 = (( HashSet_1_t1873 * (*) (ParseQuery_1_t2095 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ParseQuery_1_t2095 *)__this, (Object_t*)L_47, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_2 = (HashSet_1_t1873 *)L_48;
		HashSet_1_t1873 * L_49 = V_2;
		List_1_t1 * L_50 = Enumerable_ToList_TisString_t_m8982(NULL /*static, unused*/, (Object_t*)L_49, /*hidden argument*/Enumerable_ToList_TisString_t_m8982_MethodInfo_var);
		ReadOnlyCollection_1_t2026 * L_51 = (ReadOnlyCollection_1_t2026 *)il2cpp_codegen_object_new (ReadOnlyCollection_1_t2026_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m8993(L_51, (Object_t*)L_50, /*hidden argument*/ReadOnlyCollection_1__ctor_m8993_MethodInfo_var);
		__this->___includes_3 = L_51;
	}

IL_014d:
	{
		Object_t* L_52 = ___selectedKeys;
		if (!L_52)
		{
			goto IL_016b;
		}
	}
	{
		Object_t* L_53 = ___selectedKeys;
		NullCheck((ParseQuery_1_t2095 *)__this);
		HashSet_1_t1873 * L_54 = (( HashSet_1_t1873 * (*) (ParseQuery_1_t2095 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((ParseQuery_1_t2095 *)__this, (Object_t*)L_53, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_3 = (HashSet_1_t1873 *)L_54;
		HashSet_1_t1873 * L_55 = V_3;
		List_1_t1 * L_56 = Enumerable_ToList_TisString_t_m8982(NULL /*static, unused*/, (Object_t*)L_55, /*hidden argument*/Enumerable_ToList_TisString_t_m8982_MethodInfo_var);
		ReadOnlyCollection_1_t2026 * L_57 = (ReadOnlyCollection_1_t2026 *)il2cpp_codegen_object_new (ReadOnlyCollection_1_t2026_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m8993(L_57, (Object_t*)L_56, /*hidden argument*/ReadOnlyCollection_1__ctor_m8993_MethodInfo_var);
		__this->___selectedKeys_4 = L_57;
	}

IL_016b:
	{
		return;
	}
}
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeIncludes(System.Collections.Generic.IEnumerable`1<System.String>)
extern TypeInfo* HashSet_1_t1873_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t1654_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t1653_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern const MethodInfo* HashSet_1__ctor_m9026_MethodInfo_var;
extern const MethodInfo* HashSet_1_Add_m9245_MethodInfo_var;
extern "C" HashSet_1_t1873 * ParseQuery_1_MergeIncludes_m28622_gshared (ParseQuery_1_t2095 * __this, Object_t* ___includes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HashSet_1_t1873_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3798);
		IEnumerable_1_t1654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2697);
		IEnumerator_1_t1653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2698);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		HashSet_1__ctor_m9026_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484717);
		HashSet_1_Add_m9245_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484937);
		s_Il2CppMethodIntialized = true;
	}
	HashSet_1_t1873 * V_0 = {0};
	String_t* V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ReadOnlyCollection_1_t2026 * L_0 = (ReadOnlyCollection_1_t2026 *)(__this->___includes_3);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Object_t* L_1 = ___includes;
		HashSet_1_t1873 * L_2 = (HashSet_1_t1873 *)il2cpp_codegen_object_new (HashSet_1_t1873_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m9026(L_2, (Object_t*)L_1, /*hidden argument*/HashSet_1__ctor_m9026_MethodInfo_var);
		return L_2;
	}

IL_000f:
	{
		ReadOnlyCollection_1_t2026 * L_3 = (ReadOnlyCollection_1_t2026 *)(__this->___includes_3);
		HashSet_1_t1873 * L_4 = (HashSet_1_t1873 *)il2cpp_codegen_object_new (HashSet_1_t1873_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m9026(L_4, (Object_t*)L_3, /*hidden argument*/HashSet_1__ctor_m9026_MethodInfo_var);
		V_0 = (HashSet_1_t1873 *)L_4;
		Object_t* L_5 = ___includes;
		NullCheck((Object_t*)L_5);
		Object_t* L_6 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t1654_il2cpp_TypeInfo_var, (Object_t*)L_5);
		V_2 = (Object_t*)L_6;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0024:
		{
			Object_t* L_7 = V_2;
			NullCheck((Object_t*)L_7);
			String_t* L_8 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t1653_il2cpp_TypeInfo_var, (Object_t*)L_7);
			V_1 = (String_t*)L_8;
			HashSet_1_t1873 * L_9 = V_0;
			String_t* L_10 = V_1;
			NullCheck((HashSet_1_t1873 *)L_9);
			HashSet_1_Add_m9245((HashSet_1_t1873 *)L_9, (String_t*)L_10, /*hidden argument*/HashSet_1_Add_m9245_MethodInfo_var);
		}

IL_0033:
		{
			Object_t* L_11 = V_2;
			NullCheck((Object_t *)L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_11);
			if (L_12)
			{
				goto IL_0024;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x47, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_13 = V_2;
			if (!L_13)
			{
				goto IL_0046;
			}
		}

IL_0040:
		{
			Object_t* L_14 = V_2;
			NullCheck((Object_t *)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_14);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(61)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0047:
	{
		HashSet_1_t1873 * L_15 = V_0;
		return L_15;
	}
}
// System.Collections.Generic.HashSet`1<System.String> Parse.ParseQuery`1<System.Object>::MergeSelectedKeys(System.Collections.Generic.IEnumerable`1<System.String>)
extern TypeInfo* HashSet_1_t1873_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t1654_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t1653_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern const MethodInfo* HashSet_1__ctor_m9026_MethodInfo_var;
extern const MethodInfo* HashSet_1_Add_m9245_MethodInfo_var;
extern "C" HashSet_1_t1873 * ParseQuery_1_MergeSelectedKeys_m28623_gshared (ParseQuery_1_t2095 * __this, Object_t* ___selectedKeys, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HashSet_1_t1873_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3798);
		IEnumerable_1_t1654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2697);
		IEnumerator_1_t1653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2698);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		HashSet_1__ctor_m9026_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484717);
		HashSet_1_Add_m9245_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484937);
		s_Il2CppMethodIntialized = true;
	}
	HashSet_1_t1873 * V_0 = {0};
	String_t* V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ReadOnlyCollection_1_t2026 * L_0 = (ReadOnlyCollection_1_t2026 *)(__this->___selectedKeys_4);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Object_t* L_1 = ___selectedKeys;
		HashSet_1_t1873 * L_2 = (HashSet_1_t1873 *)il2cpp_codegen_object_new (HashSet_1_t1873_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m9026(L_2, (Object_t*)L_1, /*hidden argument*/HashSet_1__ctor_m9026_MethodInfo_var);
		return L_2;
	}

IL_000f:
	{
		ReadOnlyCollection_1_t2026 * L_3 = (ReadOnlyCollection_1_t2026 *)(__this->___selectedKeys_4);
		HashSet_1_t1873 * L_4 = (HashSet_1_t1873 *)il2cpp_codegen_object_new (HashSet_1_t1873_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m9026(L_4, (Object_t*)L_3, /*hidden argument*/HashSet_1__ctor_m9026_MethodInfo_var);
		V_0 = (HashSet_1_t1873 *)L_4;
		Object_t* L_5 = ___selectedKeys;
		NullCheck((Object_t*)L_5);
		Object_t* L_6 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t1654_il2cpp_TypeInfo_var, (Object_t*)L_5);
		V_2 = (Object_t*)L_6;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0024:
		{
			Object_t* L_7 = V_2;
			NullCheck((Object_t*)L_7);
			String_t* L_8 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t1653_il2cpp_TypeInfo_var, (Object_t*)L_7);
			V_1 = (String_t*)L_8;
			HashSet_1_t1873 * L_9 = V_0;
			String_t* L_10 = V_1;
			NullCheck((HashSet_1_t1873 *)L_9);
			HashSet_1_Add_m9245((HashSet_1_t1873 *)L_9, (String_t*)L_10, /*hidden argument*/HashSet_1_Add_m9245_MethodInfo_var);
		}

IL_0033:
		{
			Object_t* L_11 = V_2;
			NullCheck((Object_t *)L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_11);
			if (L_12)
			{
				goto IL_0024;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x47, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_13 = V_2;
			if (!L_13)
			{
				goto IL_0046;
			}
		}

IL_0040:
		{
			Object_t* L_14 = V_2;
			NullCheck((Object_t *)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_14);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(61)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0047:
	{
		HashSet_1_t1873 * L_15 = V_0;
		return L_15;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::MergeWhereClauses(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t2014_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t1975_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m9189_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m8941_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m8940_MethodInfo_var;
extern "C" Object_t* ParseQuery_1_MergeWhereClauses_m28624_gshared (ParseQuery_1_t2095 * __this, Object_t* ___where, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		IEnumerable_1_t2014_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3741);
		IEnumerator_1_t1975_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3742);
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		Dictionary_2__ctor_m9189_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484856);
		KeyValuePair_2_get_Value_m8941_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484578);
		KeyValuePair_2_get_Key_m8940_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484577);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	KeyValuePair_2_t1962  V_1 = {0};
	Object_t* V_2 = {0};
	Object_t* V_3 = {0};
	Dictionary_2_t468 * V_4 = {0};
	KeyValuePair_2_t1962  V_5 = {0};
	Object_t* V_6 = {0};
	Object_t* V_7 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)(__this->___where_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		Object_t* L_1 = ___where;
		return L_1;
	}

IL_000a:
	{
		Dictionary_2_t468 * L_2 = (Dictionary_2_t468 *)(__this->___where_1);
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9189(L_3, (Object_t*)L_2, /*hidden argument*/Dictionary_2__ctor_m9189_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_3;
		Object_t* L_4 = ___where;
		NullCheck((Object_t*)L_4);
		Object_t* L_5 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t2014_il2cpp_TypeInfo_var, (Object_t*)L_4);
		V_6 = (Object_t*)L_5;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f5;
		}

IL_0023:
		{
			Object_t* L_6 = V_6;
			NullCheck((Object_t*)L_6);
			KeyValuePair_2_t1962  L_7 = (KeyValuePair_2_t1962 )InterfaceFuncInvoker0< KeyValuePair_2_t1962  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t1975_il2cpp_TypeInfo_var, (Object_t*)L_6);
			V_1 = (KeyValuePair_2_t1962 )L_7;
			Object_t * L_8 = KeyValuePair_2_get_Value_m8941((KeyValuePair_2_t1962 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m8941_MethodInfo_var);
			V_2 = (Object_t*)((Object_t*)IsInst(L_8, IDictionary_2_t1810_il2cpp_TypeInfo_var));
			Dictionary_2_t468 * L_9 = V_0;
			String_t* L_10 = KeyValuePair_2_get_Key_m8940((KeyValuePair_2_t1962 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m8940_MethodInfo_var);
			NullCheck((Dictionary_2_t468 *)L_9);
			bool L_11 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, (Dictionary_2_t468 *)L_9, (String_t*)L_10);
			if (!L_11)
			{
				goto IL_00e1;
			}
		}

IL_004a:
		{
			Dictionary_2_t468 * L_12 = V_0;
			String_t* L_13 = KeyValuePair_2_get_Key_m8940((KeyValuePair_2_t1962 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m8940_MethodInfo_var);
			NullCheck((Dictionary_2_t468 *)L_12);
			Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, (Dictionary_2_t468 *)L_12, (String_t*)L_13);
			V_3 = (Object_t*)((Object_t*)IsInst(L_14, IDictionary_2_t1810_il2cpp_TypeInfo_var));
			Object_t* L_15 = V_3;
			if (!L_15)
			{
				goto IL_0063;
			}
		}

IL_0060:
		{
			Object_t* L_16 = V_2;
			if (L_16)
			{
				goto IL_006e;
			}
		}

IL_0063:
		{
			ArgumentException_t725 * L_17 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3235(L_17, (String_t*)(String_t*) &_stringLiteral1882, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_17);
		}

IL_006e:
		{
			Object_t* L_18 = V_3;
			Dictionary_2_t468 * L_19 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m9189(L_19, (Object_t*)L_18, /*hidden argument*/Dictionary_2__ctor_m9189_MethodInfo_var);
			V_4 = (Dictionary_2_t468 *)L_19;
			Object_t* L_20 = V_2;
			NullCheck((Object_t*)L_20);
			Object_t* L_21 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t2014_il2cpp_TypeInfo_var, (Object_t*)L_20);
			V_7 = (Object_t*)L_21;
		}

IL_007e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00b9;
			}

IL_0080:
			{
				Object_t* L_22 = V_7;
				NullCheck((Object_t*)L_22);
				KeyValuePair_2_t1962  L_23 = (KeyValuePair_2_t1962 )InterfaceFuncInvoker0< KeyValuePair_2_t1962  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t1975_il2cpp_TypeInfo_var, (Object_t*)L_22);
				V_5 = (KeyValuePair_2_t1962 )L_23;
				Dictionary_2_t468 * L_24 = V_4;
				String_t* L_25 = KeyValuePair_2_get_Key_m8940((KeyValuePair_2_t1962 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_m8940_MethodInfo_var);
				NullCheck((Dictionary_2_t468 *)L_24);
				bool L_26 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, (Dictionary_2_t468 *)L_24, (String_t*)L_25);
				if (!L_26)
				{
					goto IL_00a4;
				}
			}

IL_0099:
			{
				ArgumentException_t725 * L_27 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
				ArgumentException__ctor_m3235(L_27, (String_t*)(String_t*) &_stringLiteral1883, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception(L_27);
			}

IL_00a4:
			{
				Dictionary_2_t468 * L_28 = V_4;
				String_t* L_29 = KeyValuePair_2_get_Key_m8940((KeyValuePair_2_t1962 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_m8940_MethodInfo_var);
				Object_t * L_30 = KeyValuePair_2_get_Value_m8941((KeyValuePair_2_t1962 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m8941_MethodInfo_var);
				NullCheck((Dictionary_2_t468 *)L_28);
				VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t468 *)L_28, (String_t*)L_29, (Object_t *)L_30);
			}

IL_00b9:
			{
				Object_t* L_31 = V_7;
				NullCheck((Object_t *)L_31);
				bool L_32 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_31);
				if (L_32)
				{
					goto IL_0080;
				}
			}

IL_00c2:
			{
				IL2CPP_LEAVE(0xD0, FINALLY_00c4);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t496 *)e.ex;
			goto FINALLY_00c4;
		}

FINALLY_00c4:
		{ // begin finally (depth: 2)
			{
				Object_t* L_33 = V_7;
				if (!L_33)
				{
					goto IL_00cf;
				}
			}

IL_00c8:
			{
				Object_t* L_34 = V_7;
				NullCheck((Object_t *)L_34);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_34);
			}

IL_00cf:
			{
				IL2CPP_END_FINALLY(196)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(196)
		{
			IL2CPP_JUMP_TBL(0xD0, IL_00d0)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
		}

IL_00d0:
		{
			Dictionary_2_t468 * L_35 = V_0;
			String_t* L_36 = KeyValuePair_2_get_Key_m8940((KeyValuePair_2_t1962 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m8940_MethodInfo_var);
			Dictionary_2_t468 * L_37 = V_4;
			NullCheck((Dictionary_2_t468 *)L_35);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t468 *)L_35, (String_t*)L_36, (Object_t *)L_37);
			goto IL_00f5;
		}

IL_00e1:
		{
			Dictionary_2_t468 * L_38 = V_0;
			String_t* L_39 = KeyValuePair_2_get_Key_m8940((KeyValuePair_2_t1962 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m8940_MethodInfo_var);
			Object_t * L_40 = KeyValuePair_2_get_Value_m8941((KeyValuePair_2_t1962 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m8941_MethodInfo_var);
			NullCheck((Dictionary_2_t468 *)L_38);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t468 *)L_38, (String_t*)L_39, (Object_t *)L_40);
		}

IL_00f5:
		{
			Object_t* L_41 = V_6;
			NullCheck((Object_t *)L_41);
			bool L_42 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_41);
			if (L_42)
			{
				goto IL_0023;
			}
		}

IL_0101:
		{
			IL2CPP_LEAVE(0x10F, FINALLY_0103);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0103;
	}

FINALLY_0103:
	{ // begin finally (depth: 1)
		{
			Object_t* L_43 = V_6;
			if (!L_43)
			{
				goto IL_010e;
			}
		}

IL_0107:
		{
			Object_t* L_44 = V_6;
			NullCheck((Object_t *)L_44);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_44);
		}

IL_010e:
		{
			IL2CPP_END_FINALLY(259)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(259)
	{
		IL2CPP_JUMP_TBL(0x10F, IL_010f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_010f:
	{
		Dictionary_2_t468 * L_45 = V_0;
		return L_45;
	}
}
// System.Void Parse.ParseQuery`1<System.Object>::.ctor()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ParseObject_t596_il2cpp_TypeInfo_var;
extern "C" void ParseQuery_1__ctor_m28625_gshared (ParseQuery_1_t2095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		ParseObject_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1158);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2606(NULL /*static, unused*/, (RuntimeTypeHandle_t5158 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ParseObject_t596_il2cpp_TypeInfo_var);
		String_t* L_1 = ParseObject_GetClassName_m8415(NULL /*static, unused*/, (Type_t *)L_0, /*hidden argument*/NULL);
		NullCheck((ParseQuery_1_t2095 *)__this);
		(( void (*) (ParseQuery_1_t2095 *, String_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ParseQuery_1_t2095 *)__this, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}
}
// System.Void Parse.ParseQuery`1<System.Object>::.ctor(System.String)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern "C" void ParseQuery_1__ctor_m28626_gshared (ParseQuery_1_t2095 * __this, String_t* ___className, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		String_t* L_0 = ___className;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m13296(L_1, (String_t*)(String_t*) &_stringLiteral1549, (String_t*)(String_t*) &_stringLiteral1884, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0019:
	{
		String_t* L_2 = ___className;
		__this->___className_0 = L_2;
		return;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Or(System.Collections.Generic.IEnumerable`1<Parse.ParseQuery`1<T>>)
extern TypeInfo* List_1_t6514_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t746_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t2013_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m28913_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_Or_m28627_gshared (Object_t * __this /* static, unused */, Object_t* ___queries, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t6514_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12954);
		IEnumerable_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		ICollection_1_t2013_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3739);
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		List_1__ctor_m28913_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485564);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	List_1_t6514 * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	ParseQuery_1_t2095 * V_4 = {0};
	Object_t* V_5 = {0};
	Object_t * V_6 = {0};
	Dictionary_2_t468 * V_7 = {0};
	Object_t * V_8 = {0};
	Object_t * V_9 = {0};
	Nullable_1_t3072  V_10 = {0};
	Nullable_1_t3072  V_11 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*)NULL;
		List_1_t6514 * L_0 = (List_1_t6514 *)il2cpp_codegen_object_new (List_1_t6514_il2cpp_TypeInfo_var);
		List_1__ctor_m28913(L_0, /*hidden argument*/List_1__ctor_m28913_MethodInfo_var);
		V_1 = (List_1_t6514 *)L_0;
		Object_t* L_1 = ___queries;
		V_2 = (Object_t *)L_1;
		Object_t * L_2 = V_2;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t746_il2cpp_TypeInfo_var, (Object_t *)L_2);
		V_8 = (Object_t *)L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008e;
		}

IL_0014:
		{
			Object_t * L_4 = V_8;
			NullCheck((Object_t *)L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_4);
			V_3 = (Object_t *)L_5;
			Object_t * L_6 = V_3;
			V_4 = (ParseQuery_1_t2095 *)((ParseQuery_1_t2095 *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)));
			String_t* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0041;
			}
		}

IL_0027:
		{
			ParseQuery_1_t2095 * L_8 = V_4;
			NullCheck(L_8);
			String_t* L_9 = (String_t*)(L_8->___className_0);
			String_t* L_10 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_11 = String_op_Inequality_m3461(NULL /*static, unused*/, (String_t*)L_9, (String_t*)L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0041;
			}
		}

IL_0036:
		{
			ArgumentException_t725 * L_12 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3235(L_12, (String_t*)(String_t*) &_stringLiteral1885, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_12);
		}

IL_0041:
		{
			ParseQuery_1_t2095 * L_13 = V_4;
			NullCheck(L_13);
			String_t* L_14 = (String_t*)(L_13->___className_0);
			V_0 = (String_t*)L_14;
			ParseQuery_1_t2095 * L_15 = V_4;
			NullCheck((ParseQuery_1_t2095 *)L_15);
			Object_t* L_16 = (( Object_t* (*) (ParseQuery_1_t2095 *, bool, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((ParseQuery_1_t2095 *)L_15, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			V_5 = (Object_t*)L_16;
			Object_t* L_17 = V_5;
			NullCheck((Object_t*)L_17);
			int32_t L_18 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count() */, ICollection_1_t2013_il2cpp_TypeInfo_var, (Object_t*)L_17);
			if (!L_18)
			{
				goto IL_008e;
			}
		}

IL_005c:
		{
			Object_t* L_19 = V_5;
			NullCheck((Object_t*)L_19);
			bool L_20 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t1810_il2cpp_TypeInfo_var, (Object_t*)L_19, (String_t*)(String_t*) &_stringLiteral1875, (Object_t **)(&V_6));
			if (!L_20)
			{
				goto IL_0076;
			}
		}

IL_006c:
		{
			Object_t* L_21 = V_5;
			NullCheck((Object_t*)L_21);
			int32_t L_22 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count() */, ICollection_1_t2013_il2cpp_TypeInfo_var, (Object_t*)L_21);
			if ((((int32_t)L_22) <= ((int32_t)1)))
			{
				goto IL_0081;
			}
		}

IL_0076:
		{
			ArgumentException_t725 * L_23 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3235(L_23, (String_t*)(String_t*) &_stringLiteral1886, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_23);
		}

IL_0081:
		{
			List_1_t6514 * L_24 = V_1;
			Object_t * L_25 = V_6;
			NullCheck((List_1_t6514 *)L_24);
			VirtActionInvoker1< Object_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Add(!0) */, (List_1_t6514 *)L_24, (Object_t*)((Object_t*)IsInst(L_25, IDictionary_2_t1810_il2cpp_TypeInfo_var)));
		}

IL_008e:
		{
			Object_t * L_26 = V_8;
			NullCheck((Object_t *)L_26);
			bool L_27 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_26);
			if (L_27)
			{
				goto IL_0014;
			}
		}

IL_009a:
		{
			IL2CPP_LEAVE(0xB1, FINALLY_009c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_009c;
	}

FINALLY_009c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_28 = V_8;
			V_9 = (Object_t *)((Object_t *)IsInst(L_28, IDisposable_t646_il2cpp_TypeInfo_var));
			Object_t * L_29 = V_9;
			if (!L_29)
			{
				goto IL_00b0;
			}
		}

IL_00a9:
		{
			Object_t * L_30 = V_9;
			NullCheck((Object_t *)L_30);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_30);
		}

IL_00b0:
		{
			IL2CPP_END_FINALLY(156)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(156)
	{
		IL2CPP_JUMP_TBL(0xB1, IL_00b1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_00b1:
	{
		String_t* L_31 = V_0;
		ParseQuery_1_t2095 * L_32 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, String_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_32, (String_t*)L_31, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Dictionary_2_t468 * L_33 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_33, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_7 = (Dictionary_2_t468 *)L_33;
		Dictionary_2_t468 * L_34 = V_7;
		List_1_t6514 * L_35 = V_1;
		NullCheck((Dictionary_2_t468 *)L_34);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_34, (String_t*)(String_t*) &_stringLiteral1887, (Object_t *)L_35);
		Dictionary_2_t468 * L_36 = V_7;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_10));
		Nullable_1_t3072  L_37 = V_10;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_11));
		Nullable_1_t3072  L_38 = V_11;
		ParseQuery_1_t2095 * L_39 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_39, (ParseQuery_1_t2095 *)L_32, (Object_t*)L_36, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_37, (Nullable_1_t3072 )L_38, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_39;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderBy(System.String)
extern TypeInfo* List_1_t1_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m83_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_OrderBy_m28628_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		List_1__ctor_m83_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t1 * V_0 = {0};
	Nullable_1_t3072  V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	{
		List_1_t1 * L_0 = (List_1_t1 *)il2cpp_codegen_object_new (List_1_t1_il2cpp_TypeInfo_var);
		List_1__ctor_m83(L_0, /*hidden argument*/List_1__ctor_m83_MethodInfo_var);
		V_0 = (List_1_t1 *)L_0;
		List_1_t1 * L_1 = V_0;
		String_t* L_2 = ___key;
		NullCheck((List_1_t1 *)L_1);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, (List_1_t1 *)L_1, (String_t*)L_2);
		List_1_t1 * L_3 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_1));
		Nullable_1_t3072  L_4 = V_1;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_5 = V_2;
		ParseQuery_1_t2095 * L_6 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_6, (ParseQuery_1_t2095 *)__this, (Object_t*)NULL, (Object_t*)L_3, (Object_t*)NULL, (Nullable_1_t3072 )L_4, (Nullable_1_t3072 )L_5, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_6;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::OrderByDescending(System.String)
extern TypeInfo* List_1_t1_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m83_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_OrderByDescending_m28629_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		List_1__ctor_m83_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t1 * V_0 = {0};
	Nullable_1_t3072  V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	{
		List_1_t1 * L_0 = (List_1_t1 *)il2cpp_codegen_object_new (List_1_t1_il2cpp_TypeInfo_var);
		List_1__ctor_m83(L_0, /*hidden argument*/List_1__ctor_m83_MethodInfo_var);
		V_0 = (List_1_t1 *)L_0;
		List_1_t1 * L_1 = V_0;
		String_t* L_2 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m105(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1888, (String_t*)L_2, /*hidden argument*/NULL);
		NullCheck((List_1_t1 *)L_1);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, (List_1_t1 *)L_1, (String_t*)L_3);
		List_1_t1 * L_4 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_1));
		Nullable_1_t3072  L_5 = V_1;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_6 = V_2;
		ParseQuery_1_t2095 * L_7 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_7, (ParseQuery_1_t2095 *)__this, (Object_t*)NULL, (Object_t*)L_4, (Object_t*)NULL, (Nullable_1_t3072 )L_5, (Nullable_1_t3072 )L_6, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_7;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenBy(System.String)
extern TypeInfo* List_1_t1_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m83_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_ThenBy_m28630_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		List_1__ctor_m83_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t1 * V_0 = {0};
	Nullable_1_t3072  V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	{
		List_1_t1 * L_0 = (List_1_t1 *)il2cpp_codegen_object_new (List_1_t1_il2cpp_TypeInfo_var);
		List_1__ctor_m83(L_0, /*hidden argument*/List_1__ctor_m83_MethodInfo_var);
		V_0 = (List_1_t1 *)L_0;
		List_1_t1 * L_1 = V_0;
		String_t* L_2 = ___key;
		NullCheck((List_1_t1 *)L_1);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, (List_1_t1 *)L_1, (String_t*)L_2);
		List_1_t1 * L_3 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_1));
		Nullable_1_t3072  L_4 = V_1;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_5 = V_2;
		ParseQuery_1_t2095 * L_6 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_6, (ParseQuery_1_t2095 *)__this, (Object_t*)NULL, (Object_t*)NULL, (Object_t*)L_3, (Nullable_1_t3072 )L_4, (Nullable_1_t3072 )L_5, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_6;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::ThenByDescending(System.String)
extern TypeInfo* List_1_t1_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m83_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_ThenByDescending_m28631_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		List_1__ctor_m83_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t1 * V_0 = {0};
	Nullable_1_t3072  V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	{
		List_1_t1 * L_0 = (List_1_t1 *)il2cpp_codegen_object_new (List_1_t1_il2cpp_TypeInfo_var);
		List_1__ctor_m83(L_0, /*hidden argument*/List_1__ctor_m83_MethodInfo_var);
		V_0 = (List_1_t1 *)L_0;
		List_1_t1 * L_1 = V_0;
		String_t* L_2 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m105(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1888, (String_t*)L_2, /*hidden argument*/NULL);
		NullCheck((List_1_t1 *)L_1);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, (List_1_t1 *)L_1, (String_t*)L_3);
		List_1_t1 * L_4 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_1));
		Nullable_1_t3072  L_5 = V_1;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_6 = V_2;
		ParseQuery_1_t2095 * L_7 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_7, (ParseQuery_1_t2095 *)__this, (Object_t*)NULL, (Object_t*)NULL, (Object_t*)L_4, (Nullable_1_t3072 )L_5, (Nullable_1_t3072 )L_6, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_7;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Include(System.String)
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t1_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m83_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_Include_m28632_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		List_1_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		List_1__ctor_m83_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t1 * V_0 = {0};
	Nullable_1_t3072  V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	{
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_1));
		Nullable_1_t3072  L_0 = V_1;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_1 = V_2;
		List_1_t1 * L_2 = (List_1_t1 *)il2cpp_codegen_object_new (List_1_t1_il2cpp_TypeInfo_var);
		List_1__ctor_m83(L_2, /*hidden argument*/List_1__ctor_m83_MethodInfo_var);
		V_0 = (List_1_t1 *)L_2;
		List_1_t1 * L_3 = V_0;
		String_t* L_4 = ___key;
		NullCheck((List_1_t1 *)L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, (List_1_t1 *)L_3, (String_t*)L_4);
		List_1_t1 * L_5 = V_0;
		ParseQuery_1_t2095 * L_6 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_6, (ParseQuery_1_t2095 *)__this, (Object_t*)NULL, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_0, (Nullable_1_t3072 )L_1, (Object_t*)L_5, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_6;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Select(System.String)
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t1_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m83_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_Select_m28633_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		List_1_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		List_1__ctor_m83_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t1 * V_0 = {0};
	Nullable_1_t3072  V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	{
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_1));
		Nullable_1_t3072  L_0 = V_1;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_1 = V_2;
		List_1_t1 * L_2 = (List_1_t1 *)il2cpp_codegen_object_new (List_1_t1_il2cpp_TypeInfo_var);
		List_1__ctor_m83(L_2, /*hidden argument*/List_1__ctor_m83_MethodInfo_var);
		V_0 = (List_1_t1 *)L_2;
		List_1_t1 * L_3 = V_0;
		String_t* L_4 = ___key;
		NullCheck((List_1_t1 *)L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, (List_1_t1 *)L_3, (String_t*)L_4);
		List_1_t1 * L_5 = V_0;
		ParseQuery_1_t2095 * L_6 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_6, (ParseQuery_1_t2095 *)__this, (Object_t*)NULL, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_0, (Nullable_1_t3072 )L_1, (Object_t*)NULL, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_6;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Skip(System.Int32)
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1__ctor_m11365_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_Skip_m28634_gshared (ParseQuery_1_t2095 * __this, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Nullable_1__ctor_m11365_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485174);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t3072  V_0 = {0};
	{
		int32_t L_0 = ___count;
		Nullable_1_t3072  L_1 = {0};
		Nullable_1__ctor_m11365(&L_1, (int32_t)L_0, /*hidden argument*/Nullable_1__ctor_m11365_MethodInfo_var);
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t3072  L_2 = V_0;
		ParseQuery_1_t2095 * L_3 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_3, (ParseQuery_1_t2095 *)__this, (Object_t*)NULL, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_1, (Nullable_1_t3072 )L_2, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_3;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::Limit(System.Int32)
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1__ctor_m11365_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_Limit_m28635_gshared (ParseQuery_1_t2095 * __this, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Nullable_1__ctor_m11365_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485174);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t3072  V_0 = {0};
	{
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t3072  L_0 = V_0;
		int32_t L_1 = ___count;
		Nullable_1_t3072  L_2 = {0};
		Nullable_1__ctor_m11365(&L_2, (int32_t)L_1, /*hidden argument*/Nullable_1__ctor_m11365_MethodInfo_var);
		ParseQuery_1_t2095 * L_3 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_3, (ParseQuery_1_t2095 *)__this, (Object_t*)NULL, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_0, (Nullable_1_t3072 )L_2, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_3;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereContains(System.String,System.String)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereContains_m28636_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, String_t* ___substring, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = V_0;
		String_t* L_2 = ___key;
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_3, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_3;
		Dictionary_2_t468 * L_4 = V_1;
		String_t* L_5 = ___substring;
		NullCheck((ParseQuery_1_t2095 *)__this);
		String_t* L_6 = (( String_t* (*) (ParseQuery_1_t2095 *, String_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((ParseQuery_1_t2095 *)__this, (String_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t468 *)L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_4, (String_t*)(String_t*) &_stringLiteral1891, (Object_t *)L_6);
		Dictionary_2_t468 * L_7 = V_1;
		NullCheck((Dictionary_2_t468 *)L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_1, (String_t*)L_2, (Object_t *)L_7);
		Dictionary_2_t468 * L_8 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_9 = V_2;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t3072  L_10 = V_3;
		ParseQuery_1_t2095 * L_11 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_11, (ParseQuery_1_t2095 *)__this, (Object_t*)L_8, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_9, (Nullable_1_t3072 )L_10, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_11;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereDoesNotExist(System.String)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereDoesNotExist_m28637_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = V_0;
		String_t* L_2 = ___key;
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_3, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_3;
		Dictionary_2_t468 * L_4 = V_1;
		bool L_5 = 0;
		Object_t * L_6 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_5);
		NullCheck((Dictionary_2_t468 *)L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_4, (String_t*)(String_t*) &_stringLiteral1892, (Object_t *)L_6);
		Dictionary_2_t468 * L_7 = V_1;
		NullCheck((Dictionary_2_t468 *)L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_1, (String_t*)L_2, (Object_t *)L_7);
		Dictionary_2_t468 * L_8 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_9 = V_2;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t3072  L_10 = V_3;
		ParseQuery_1_t2095 * L_11 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_11, (ParseQuery_1_t2095 *)__this, (Object_t*)L_8, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_9, (Nullable_1_t3072 )L_10, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_11;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEndsWith(System.String,System.String)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereEndsWith_m28638_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = V_0;
		String_t* L_2 = ___key;
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_3, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_3;
		Dictionary_2_t468 * L_4 = V_1;
		String_t* L_5 = ___suffix;
		NullCheck((ParseQuery_1_t2095 *)__this);
		String_t* L_6 = (( String_t* (*) (ParseQuery_1_t2095 *, String_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((ParseQuery_1_t2095 *)__this, (String_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m105(NULL /*static, unused*/, (String_t*)L_6, (String_t*)(String_t*) &_stringLiteral1894, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t468 *)L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_4, (String_t*)(String_t*) &_stringLiteral1891, (Object_t *)L_7);
		Dictionary_2_t468 * L_8 = V_1;
		NullCheck((Dictionary_2_t468 *)L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_1, (String_t*)L_2, (Object_t *)L_8);
		Dictionary_2_t468 * L_9 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_10 = V_2;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t3072  L_11 = V_3;
		ParseQuery_1_t2095 * L_12 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_12, (ParseQuery_1_t2095 *)__this, (Object_t*)L_9, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_10, (Nullable_1_t3072 )L_11, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_12;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereEqualTo(System.String,System.Object)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereEqualTo_m28639_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Nullable_1_t3072  V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = V_0;
		String_t* L_2 = ___key;
		Object_t * L_3 = ___value;
		NullCheck((Dictionary_2_t468 *)L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_1, (String_t*)L_2, (Object_t *)L_3);
		Dictionary_2_t468 * L_4 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_1));
		Nullable_1_t3072  L_5 = V_1;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_6 = V_2;
		ParseQuery_1_t2095 * L_7 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_7, (ParseQuery_1_t2095 *)__this, (Object_t*)L_4, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_5, (Nullable_1_t3072 )L_6, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_7;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereExists(System.String)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereExists_m28640_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = V_0;
		String_t* L_2 = ___key;
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_3, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_3;
		Dictionary_2_t468 * L_4 = V_1;
		bool L_5 = 1;
		Object_t * L_6 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_5);
		NullCheck((Dictionary_2_t468 *)L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_4, (String_t*)(String_t*) &_stringLiteral1892, (Object_t *)L_6);
		Dictionary_2_t468 * L_7 = V_1;
		NullCheck((Dictionary_2_t468 *)L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_1, (String_t*)L_2, (Object_t *)L_7);
		Dictionary_2_t468 * L_8 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_9 = V_2;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t3072  L_10 = V_3;
		ParseQuery_1_t2095 * L_11 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_11, (ParseQuery_1_t2095 *)__this, (Object_t*)L_8, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_9, (Nullable_1_t3072 )L_10, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_11;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThan(System.String,System.Object)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereGreaterThan_m28641_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = V_0;
		String_t* L_2 = ___key;
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_3, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_3;
		Dictionary_2_t468 * L_4 = V_1;
		Object_t * L_5 = ___value;
		NullCheck((Dictionary_2_t468 *)L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_4, (String_t*)(String_t*) &_stringLiteral1895, (Object_t *)L_5);
		Dictionary_2_t468 * L_6 = V_1;
		NullCheck((Dictionary_2_t468 *)L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_1, (String_t*)L_2, (Object_t *)L_6);
		Dictionary_2_t468 * L_7 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_8 = V_2;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t3072  L_9 = V_3;
		ParseQuery_1_t2095 * L_10 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_10, (ParseQuery_1_t2095 *)__this, (Object_t*)L_7, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_8, (Nullable_1_t3072 )L_9, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_10;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereGreaterThanOrEqualTo(System.String,System.Object)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereGreaterThanOrEqualTo_m28642_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = V_0;
		String_t* L_2 = ___key;
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_3, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_3;
		Dictionary_2_t468 * L_4 = V_1;
		Object_t * L_5 = ___value;
		NullCheck((Dictionary_2_t468 *)L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_4, (String_t*)(String_t*) &_stringLiteral1896, (Object_t *)L_5);
		Dictionary_2_t468 * L_6 = V_1;
		NullCheck((Dictionary_2_t468 *)L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_1, (String_t*)L_2, (Object_t *)L_6);
		Dictionary_2_t468 * L_7 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_8 = V_2;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t3072  L_9 = V_3;
		ParseQuery_1_t2095 * L_10 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_10, (ParseQuery_1_t2095 *)__this, (Object_t*)L_7, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_8, (Nullable_1_t3072 )L_9, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_10;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThan(System.String,System.Object)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereLessThan_m28643_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = V_0;
		String_t* L_2 = ___key;
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_3, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_3;
		Dictionary_2_t468 * L_4 = V_1;
		Object_t * L_5 = ___value;
		NullCheck((Dictionary_2_t468 *)L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_4, (String_t*)(String_t*) &_stringLiteral1897, (Object_t *)L_5);
		Dictionary_2_t468 * L_6 = V_1;
		NullCheck((Dictionary_2_t468 *)L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_1, (String_t*)L_2, (Object_t *)L_6);
		Dictionary_2_t468 * L_7 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_8 = V_2;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t3072  L_9 = V_3;
		ParseQuery_1_t2095 * L_10 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_10, (ParseQuery_1_t2095 *)__this, (Object_t*)L_7, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_8, (Nullable_1_t3072 )L_9, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_10;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereLessThanOrEqualTo(System.String,System.Object)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereLessThanOrEqualTo_m28644_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = V_0;
		String_t* L_2 = ___key;
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_3, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_3;
		Dictionary_2_t468 * L_4 = V_1;
		Object_t * L_5 = ___value;
		NullCheck((Dictionary_2_t468 *)L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_4, (String_t*)(String_t*) &_stringLiteral1898, (Object_t *)L_5);
		Dictionary_2_t468 * L_6 = V_1;
		NullCheck((Dictionary_2_t468 *)L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_1, (String_t*)L_2, (Object_t *)L_6);
		Dictionary_2_t468 * L_7 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_8 = V_2;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t3072  L_9 = V_3;
		ParseQuery_1_t2095 * L_10 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_10, (ParseQuery_1_t2095 *)__this, (Object_t*)L_7, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_8, (Nullable_1_t3072 )L_9, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_10;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex,System.String)
extern TypeInfo* RegexOptions_t4380_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereMatches_m28645_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, Regex_t789 * ___regex, String_t* ___modifiers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RegexOptions_t4380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7653);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Nullable_1_t3072  V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	{
		Regex_t789 * L_0 = ___regex;
		NullCheck((Regex_t789 *)L_0);
		int32_t L_1 = Regex_get_Options_m14846((Regex_t789 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(RegexOptions_t4380_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = ((int32_t)256);
		Object_t * L_5 = Box(RegexOptions_t4380_il2cpp_TypeInfo_var, &L_4);
		bool L_6 = MissingExtensions_HasFlag_m7990(NULL /*static, unused*/, (Enum_t44 *)L_3, (Enum_t44 *)L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t725 * L_7 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_7, (String_t*)(String_t*) &_stringLiteral1899, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0027:
	{
		Dictionary_2_t468 * L_8 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_8, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_8;
		Dictionary_2_t468 * L_9 = V_0;
		String_t* L_10 = ___key;
		Regex_t789 * L_11 = ___regex;
		String_t* L_12 = ___modifiers;
		NullCheck((ParseQuery_1_t2095 *)__this);
		Object_t* L_13 = (( Object_t* (*) (ParseQuery_1_t2095 *, Regex_t789 *, String_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((ParseQuery_1_t2095 *)__this, (Regex_t789 *)L_11, (String_t*)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		NullCheck((Dictionary_2_t468 *)L_9);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_9, (String_t*)L_10, (Object_t *)L_13);
		Dictionary_2_t468 * L_14 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_1));
		Nullable_1_t3072  L_15 = V_1;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_16 = V_2;
		ParseQuery_1_t2095 * L_17 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_17, (ParseQuery_1_t2095 *)__this, (Object_t*)L_14, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_15, (Nullable_1_t3072 )L_16, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_17;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.Text.RegularExpressions.Regex)
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereMatches_m28646_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, Regex_t789 * ___regex, const MethodInfo* method)
{
	{
		String_t* L_0 = ___key;
		Regex_t789 * L_1 = ___regex;
		NullCheck((ParseQuery_1_t2095 *)__this);
		ParseQuery_1_t2095 * L_2 = (( ParseQuery_1_t2095 * (*) (ParseQuery_1_t2095 *, String_t*, Regex_t789 *, String_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((ParseQuery_1_t2095 *)__this, (String_t*)L_0, (Regex_t789 *)L_1, (String_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return L_2;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String,System.String)
extern TypeInfo* Regex_t789_il2cpp_TypeInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereMatches_m28647_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, String_t* ___pattern, String_t* ___modifiers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Regex_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		String_t* L_1 = ___pattern;
		Regex_t789 * L_2 = (Regex_t789 *)il2cpp_codegen_object_new (Regex_t789_il2cpp_TypeInfo_var);
		Regex__ctor_m8945(L_2, (String_t*)L_1, (int32_t)((int32_t)256), /*hidden argument*/NULL);
		String_t* L_3 = ___modifiers;
		NullCheck((ParseQuery_1_t2095 *)__this);
		ParseQuery_1_t2095 * L_4 = (( ParseQuery_1_t2095 * (*) (ParseQuery_1_t2095 *, String_t*, Regex_t789 *, String_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((ParseQuery_1_t2095 *)__this, (String_t*)L_0, (Regex_t789 *)L_2, (String_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return L_4;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereMatches(System.String,System.String)
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereMatches_m28648_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, String_t* ___pattern, const MethodInfo* method)
{
	{
		String_t* L_0 = ___key;
		String_t* L_1 = ___pattern;
		NullCheck((ParseQuery_1_t2095 *)__this);
		ParseQuery_1_t2095 * L_2 = (( ParseQuery_1_t2095 * (*) (ParseQuery_1_t2095 *, String_t*, String_t*, String_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((ParseQuery_1_t2095 *)__this, (String_t*)L_0, (String_t*)L_1, (String_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_2;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNear(System.String,Parse.ParseGeoPoint)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ParseGeoPoint_t935_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereNear_m28649_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, ParseGeoPoint_t935  ___point, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		ParseGeoPoint_t935_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1270);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = V_0;
		String_t* L_2 = ___key;
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_3, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_3;
		Dictionary_2_t468 * L_4 = V_1;
		ParseGeoPoint_t935  L_5 = ___point;
		ParseGeoPoint_t935  L_6 = L_5;
		Object_t * L_7 = Box(ParseGeoPoint_t935_il2cpp_TypeInfo_var, &L_6);
		NullCheck((Dictionary_2_t468 *)L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_4, (String_t*)(String_t*) &_stringLiteral1904, (Object_t *)L_7);
		Dictionary_2_t468 * L_8 = V_1;
		NullCheck((Dictionary_2_t468 *)L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_1, (String_t*)L_2, (Object_t *)L_8);
		Dictionary_2_t468 * L_9 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_10 = V_2;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t3072  L_11 = V_3;
		ParseQuery_1_t2095 * L_12 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_12, (ParseQuery_1_t2095 *)__this, (Object_t*)L_9, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_10, (Nullable_1_t3072 )L_11, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_12;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereNotEqualTo(System.String,System.Object)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereNotEqualTo_m28650_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = V_0;
		String_t* L_2 = ___key;
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_3, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_3;
		Dictionary_2_t468 * L_4 = V_1;
		Object_t * L_5 = ___value;
		NullCheck((Dictionary_2_t468 *)L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_4, (String_t*)(String_t*) &_stringLiteral1906, (Object_t *)L_5);
		Dictionary_2_t468 * L_6 = V_1;
		NullCheck((Dictionary_2_t468 *)L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_1, (String_t*)L_2, (Object_t *)L_6);
		Dictionary_2_t468 * L_7 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_8 = V_2;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t3072  L_9 = V_3;
		ParseQuery_1_t2095 * L_10 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_10, (ParseQuery_1_t2095 *)__this, (Object_t*)L_7, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_8, (Nullable_1_t3072 )L_9, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_10;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereStartsWith(System.String,System.String)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereStartsWith_m28651_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, String_t* ___suffix, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = V_0;
		String_t* L_2 = ___key;
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_3, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_3;
		Dictionary_2_t468 * L_4 = V_1;
		String_t* L_5 = ___suffix;
		NullCheck((ParseQuery_1_t2095 *)__this);
		String_t* L_6 = (( String_t* (*) (ParseQuery_1_t2095 *, String_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((ParseQuery_1_t2095 *)__this, (String_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m105(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1907, (String_t*)L_6, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t468 *)L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_4, (String_t*)(String_t*) &_stringLiteral1891, (Object_t *)L_7);
		Dictionary_2_t468 * L_8 = V_1;
		NullCheck((Dictionary_2_t468 *)L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_1, (String_t*)L_2, (Object_t *)L_8);
		Dictionary_2_t468 * L_9 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_10 = V_2;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t3072  L_11 = V_3;
		ParseQuery_1_t2095 * L_12 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_12, (ParseQuery_1_t2095 *)__this, (Object_t*)L_9, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_10, (Nullable_1_t3072 )L_11, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_12;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinGeoBox(System.String,Parse.ParseGeoPoint,Parse.ParseGeoPoint)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ParseGeoPointU5BU5D_t7940_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereWithinGeoBox_m28652_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, ParseGeoPoint_t935  ___southwest, ParseGeoPoint_t935  ___northeast, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		ParseGeoPointU5BU5D_t7940_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17610);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	Dictionary_2_t468 * V_2 = {0};
	ParseGeoPointU5BU5D_t7940* V_3 = {0};
	Nullable_1_t3072  V_4 = {0};
	Nullable_1_t3072  V_5 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = V_0;
		String_t* L_2 = ___key;
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_3, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_3;
		Dictionary_2_t468 * L_4 = V_1;
		Dictionary_2_t468 * L_5 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_5, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_2 = (Dictionary_2_t468 *)L_5;
		Dictionary_2_t468 * L_6 = V_2;
		V_3 = (ParseGeoPointU5BU5D_t7940*)((ParseGeoPointU5BU5D_t7940*)SZArrayNew(ParseGeoPointU5BU5D_t7940_il2cpp_TypeInfo_var, 2));
		ParseGeoPointU5BU5D_t7940* L_7 = V_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ParseGeoPoint_t935  L_8 = ___southwest;
		*((ParseGeoPoint_t935 *)(ParseGeoPoint_t935 *)SZArrayLdElema(L_7, 0)) = L_8;
		ParseGeoPointU5BU5D_t7940* L_9 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		ParseGeoPoint_t935  L_10 = ___northeast;
		*((ParseGeoPoint_t935 *)(ParseGeoPoint_t935 *)SZArrayLdElema(L_9, 1)) = L_10;
		ParseGeoPointU5BU5D_t7940* L_11 = V_3;
		NullCheck((Dictionary_2_t468 *)L_6);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_6, (String_t*)(String_t*) &_stringLiteral1909, (Object_t *)(Object_t *)L_11);
		Dictionary_2_t468 * L_12 = V_2;
		NullCheck((Dictionary_2_t468 *)L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_4, (String_t*)(String_t*) &_stringLiteral1908, (Object_t *)L_12);
		Dictionary_2_t468 * L_13 = V_1;
		NullCheck((Dictionary_2_t468 *)L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_1, (String_t*)L_2, (Object_t *)L_13);
		Dictionary_2_t468 * L_14 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_4));
		Nullable_1_t3072  L_15 = V_4;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_5));
		Nullable_1_t3072  L_16 = V_5;
		ParseQuery_1_t2095 * L_17 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_17, (ParseQuery_1_t2095 *)__this, (Object_t*)L_14, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_15, (Nullable_1_t3072 )L_16, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_17;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereWithinDistance(System.String,Parse.ParseGeoPoint,Parse.ParseGeoDistance)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t769_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereWithinDistance_m28653_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, ParseGeoPoint_t935  ___point, ParseGeoDistance_t944  ___maxDistance, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Double_t769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(424);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	{
		String_t* L_0 = ___key;
		ParseGeoPoint_t935  L_1 = ___point;
		NullCheck((ParseQuery_1_t2095 *)__this);
		ParseQuery_1_t2095 * L_2 = (( ParseQuery_1_t2095 * (*) (ParseQuery_1_t2095 *, String_t*, ParseGeoPoint_t935 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((ParseQuery_1_t2095 *)__this, (String_t*)L_0, (ParseGeoPoint_t935 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_3, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_3;
		Dictionary_2_t468 * L_4 = V_0;
		String_t* L_5 = ___key;
		Dictionary_2_t468 * L_6 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_6, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_6;
		Dictionary_2_t468 * L_7 = V_1;
		double L_8 = ParseGeoDistance_get_Radians_m8350((ParseGeoDistance_t944 *)(&___maxDistance), /*hidden argument*/NULL);
		double L_9 = L_8;
		Object_t * L_10 = Box(Double_t769_il2cpp_TypeInfo_var, &L_9);
		NullCheck((Dictionary_2_t468 *)L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_7, (String_t*)(String_t*) &_stringLiteral1910, (Object_t *)L_10);
		Dictionary_2_t468 * L_11 = V_1;
		NullCheck((Dictionary_2_t468 *)L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_4, (String_t*)L_5, (Object_t *)L_11);
		Dictionary_2_t468 * L_12 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_13 = V_2;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t3072  L_14 = V_3;
		ParseQuery_1_t2095 * L_15 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_15, (ParseQuery_1_t2095 *)L_2, (Object_t*)L_12, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_13, (Nullable_1_t3072 )L_14, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_15;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync()
extern "C" Task_1_t6503 * ParseQuery_1_FindAsync_m28654_gshared (ParseQuery_1_t2095 * __this, const MethodInfo* method)
{
	{
		CancellationToken_t1753  L_0 = CancellationToken_get_None_m8803(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((ParseQuery_1_t2095 *)__this);
		Task_1_t6503 * L_1 = (( Task_1_t6503 * (*) (ParseQuery_1_t2095 *, CancellationToken_t1753 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((ParseQuery_1_t2095 *)__this, (CancellationToken_t1753 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseQuery`1<System.Object>::FindAsync(System.Threading.CancellationToken)
extern TypeInfo* Uri_t32_il2cpp_TypeInfo_var;
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ParseUser_t803_il2cpp_TypeInfo_var;
extern "C" Task_1_t6503 * ParseQuery_1_FindAsync_m28655_gshared (ParseQuery_1_t2095 * __this, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ParseUser_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ParseQuery_1_t2095 *)__this);
		(( void (*) (ParseQuery_1_t2095 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)((ParseQuery_1_t2095 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		String_t* L_0 = (String_t*)(__this->___className_0);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t32_il2cpp_TypeInfo_var);
		String_t* L_1 = Uri_EscapeDataString_m112(NULL /*static, unused*/, (String_t*)L_0, /*hidden argument*/NULL);
		NullCheck((ParseQuery_1_t2095 *)__this);
		Object_t* L_2 = (( Object_t* (*) (ParseQuery_1_t2095 *, bool, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((ParseQuery_1_t2095 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		String_t* L_3 = ParseClient_BuildQueryString_m8284(NULL /*static, unused*/, (Object_t*)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m98(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1911, (Object_t *)L_1, (Object_t *)L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ParseUser_t803_il2cpp_TypeInfo_var);
		String_t* L_5 = ParseUser_get_CurrentSessionToken_m8671(NULL /*static, unused*/, /*hidden argument*/NULL);
		CancellationToken_t1753  L_6 = ___cancellationToken;
		Task_1_t1965 * L_7 = ParseClient_RequestAsync_m8280(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1561, (String_t*)L_4, (String_t*)L_5, (Object_t*)NULL, (CancellationToken_t1753 )L_6, /*hidden argument*/NULL);
		IntPtr_t L_8 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15) };
		Func_2_t6521 * L_9 = (Func_2_t6521 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		(( void (*) (Func_2_t6521 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)(L_9, (Object_t *)__this, (IntPtr_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Task_1_t6503 * L_10 = (( Task_1_t6503 * (*) (Object_t * /* static, unused */, Task_1_t1965 *, Func_2_t6521 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(NULL /*static, unused*/, (Task_1_t1965 *)L_7, (Func_2_t6521 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_10;
	}
}
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync()
extern "C" Task_1_t808 * ParseQuery_1_FirstOrDefaultAsync_m28656_gshared (ParseQuery_1_t2095 * __this, const MethodInfo* method)
{
	{
		CancellationToken_t1753  L_0 = CancellationToken_get_None_m8803(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((ParseQuery_1_t2095 *)__this);
		Task_1_t808 * L_1 = (( Task_1_t808 * (*) (ParseQuery_1_t2095 *, CancellationToken_t1753 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((ParseQuery_1_t2095 *)__this, (CancellationToken_t1753 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstOrDefaultAsync(System.Threading.CancellationToken)
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t32_il2cpp_TypeInfo_var;
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ParseUser_t803_il2cpp_TypeInfo_var;
extern "C" Task_1_t808 * ParseQuery_1_FirstOrDefaultAsync_m28657_gshared (ParseQuery_1_t2095 * __this, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		Uri_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ParseUser_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		NullCheck((ParseQuery_1_t2095 *)__this);
		(( void (*) (ParseQuery_1_t2095 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)((ParseQuery_1_t2095 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		NullCheck((ParseQuery_1_t2095 *)__this);
		Object_t* L_0 = (( Object_t* (*) (ParseQuery_1_t2095 *, bool, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((ParseQuery_1_t2095 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		V_0 = (Object_t*)L_0;
		Object_t* L_1 = V_0;
		int32_t L_2 = 1;
		Object_t * L_3 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_2);
		NullCheck((Object_t*)L_1);
		InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t1810_il2cpp_TypeInfo_var, (Object_t*)L_1, (String_t*)(String_t*) &_stringLiteral1912, (Object_t *)L_3);
		String_t* L_4 = (String_t*)(__this->___className_0);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t32_il2cpp_TypeInfo_var);
		String_t* L_5 = Uri_EscapeDataString_m112(NULL /*static, unused*/, (String_t*)L_4, /*hidden argument*/NULL);
		Object_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		String_t* L_7 = ParseClient_BuildQueryString_m8284(NULL /*static, unused*/, (Object_t*)L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Format_m98(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1911, (Object_t *)L_5, (Object_t *)L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ParseUser_t803_il2cpp_TypeInfo_var);
		String_t* L_9 = ParseUser_get_CurrentSessionToken_m8671(NULL /*static, unused*/, /*hidden argument*/NULL);
		CancellationToken_t1753  L_10 = ___cancellationToken;
		Task_1_t1965 * L_11 = ParseClient_RequestAsync_m8280(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1561, (String_t*)L_8, (String_t*)L_9, (Object_t*)NULL, (CancellationToken_t1753 )L_10, /*hidden argument*/NULL);
		IntPtr_t L_12 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20) };
		Func_2_t1849 * L_13 = (Func_2_t1849 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		(( void (*) (Func_2_t1849 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->method)(L_13, (Object_t *)__this, (IntPtr_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		Task_1_t808 * L_14 = (( Task_1_t808 * (*) (Object_t * /* static, unused */, Task_1_t1965 *, Func_2_t1849 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(NULL /*static, unused*/, (Task_1_t1965 *)L_11, (Func_2_t1849 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_14;
	}
}
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync()
extern "C" Task_1_t808 * ParseQuery_1_FirstAsync_m28658_gshared (ParseQuery_1_t2095 * __this, const MethodInfo* method)
{
	{
		CancellationToken_t1753  L_0 = CancellationToken_get_None_m8803(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((ParseQuery_1_t2095 *)__this);
		Task_1_t808 * L_1 = (( Task_1_t808 * (*) (ParseQuery_1_t2095 *, CancellationToken_t1753 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)((ParseQuery_1_t2095 *)__this, (CancellationToken_t1753 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::FirstAsync(System.Threading.CancellationToken)
extern "C" Task_1_t808 * ParseQuery_1_FirstAsync_m28659_gshared (ParseQuery_1_t2095 * __this, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method)
{
	Task_1_t808 * G_B2_0 = {0};
	Task_1_t808 * G_B1_0 = {0};
	{
		CancellationToken_t1753  L_0 = ___cancellationToken;
		NullCheck((ParseQuery_1_t2095 *)__this);
		Task_1_t808 * L_1 = (( Task_1_t808 * (*) (ParseQuery_1_t2095 *, CancellationToken_t1753 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((ParseQuery_1_t2095 *)__this, (CancellationToken_t1753 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		Func_2_t2042 * L_2 = ((ParseQuery_1_t2095_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate37_7;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IntPtr_t L_3 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26) };
		Func_2_t2042 * L_4 = (Func_2_t2042 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		(( void (*) (Func_2_t2042 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(L_4, (Object_t *)NULL, (IntPtr_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		((ParseQuery_1_t2095_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate37_7 = L_4;
		G_B2_0 = G_B1_0;
	}

IL_001f:
	{
		Func_2_t2042 * L_5 = ((ParseQuery_1_t2095_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate37_7;
		Task_1_t808 * L_6 = (( Task_1_t808 * (*) (Object_t * /* static, unused */, Task_1_t808 *, Func_2_t2042 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(NULL /*static, unused*/, (Task_1_t808 *)G_B2_0, (Func_2_t2042 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync()
extern "C" Task_1_t1949 * ParseQuery_1_CountAsync_m28660_gshared (ParseQuery_1_t2095 * __this, const MethodInfo* method)
{
	{
		CancellationToken_t1753  L_0 = CancellationToken_get_None_m8803(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((ParseQuery_1_t2095 *)__this);
		Task_1_t1949 * L_1 = (( Task_1_t1949 * (*) (ParseQuery_1_t2095 *, CancellationToken_t1753 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((ParseQuery_1_t2095 *)__this, (CancellationToken_t1753 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> Parse.ParseQuery`1<System.Object>::CountAsync(System.Threading.CancellationToken)
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t32_il2cpp_TypeInfo_var;
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ParseUser_t803_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t6497_il2cpp_TypeInfo_var;
extern const MethodInfo* Func_2__ctor_m28796_MethodInfo_var;
extern const MethodInfo* InternalExtensions_OnSuccess_TisTuple_2_t1834_TisInt32_t29_m75334_MethodInfo_var;
extern "C" Task_1_t1949 * ParseQuery_1_CountAsync_m28661_gshared (ParseQuery_1_t2095 * __this, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		Uri_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ParseUser_t803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(515);
		Func_2_t6497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12936);
		Func_2__ctor_m28796_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485565);
		InternalExtensions_OnSuccess_TisTuple_2_t1834_TisInt32_t29_m75334_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485566);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Task_1_t1965 * G_B2_0 = {0};
	Task_1_t1965 * G_B1_0 = {0};
	{
		NullCheck((ParseQuery_1_t2095 *)__this);
		(( void (*) (ParseQuery_1_t2095 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)((ParseQuery_1_t2095 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		NullCheck((ParseQuery_1_t2095 *)__this);
		Object_t* L_0 = (( Object_t* (*) (ParseQuery_1_t2095 *, bool, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((ParseQuery_1_t2095 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		V_0 = (Object_t*)L_0;
		Object_t* L_1 = V_0;
		int32_t L_2 = 0;
		Object_t * L_3 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_2);
		NullCheck((Object_t*)L_1);
		InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t1810_il2cpp_TypeInfo_var, (Object_t*)L_1, (String_t*)(String_t*) &_stringLiteral1912, (Object_t *)L_3);
		Object_t* L_4 = V_0;
		int32_t L_5 = 1;
		Object_t * L_6 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_5);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t1810_il2cpp_TypeInfo_var, (Object_t*)L_4, (String_t*)(String_t*) &_stringLiteral1913, (Object_t *)L_6);
		String_t* L_7 = (String_t*)(__this->___className_0);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t32_il2cpp_TypeInfo_var);
		String_t* L_8 = Uri_EscapeDataString_m112(NULL /*static, unused*/, (String_t*)L_7, /*hidden argument*/NULL);
		Object_t* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		String_t* L_10 = ParseClient_BuildQueryString_m8284(NULL /*static, unused*/, (Object_t*)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m98(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1911, (Object_t *)L_8, (Object_t *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ParseUser_t803_il2cpp_TypeInfo_var);
		String_t* L_12 = ParseUser_get_CurrentSessionToken_m8671(NULL /*static, unused*/, /*hidden argument*/NULL);
		CancellationToken_t1753  L_13 = ___cancellationToken;
		Task_1_t1965 * L_14 = ParseClient_RequestAsync_m8280(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1561, (String_t*)L_11, (String_t*)L_12, (Object_t*)NULL, (CancellationToken_t1753 )L_13, /*hidden argument*/NULL);
		Func_2_t6497 * L_15 = ((ParseQuery_1_t2095_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate39_8;
		G_B1_0 = L_14;
		if (L_15)
		{
			G_B2_0 = L_14;
			goto IL_0074;
		}
	}
	{
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31) };
		Func_2_t6497 * L_17 = (Func_2_t6497 *)il2cpp_codegen_object_new (Func_2_t6497_il2cpp_TypeInfo_var);
		Func_2__ctor_m28796(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/Func_2__ctor_m28796_MethodInfo_var);
		((ParseQuery_1_t2095_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate39_8 = L_17;
		G_B2_0 = G_B1_0;
	}

IL_0074:
	{
		Func_2_t6497 * L_18 = ((ParseQuery_1_t2095_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate39_8;
		Task_1_t1949 * L_19 = InternalExtensions_OnSuccess_TisTuple_2_t1834_TisInt32_t29_m75334(NULL /*static, unused*/, (Task_1_t1965 *)G_B2_0, (Func_2_t6497 *)L_18, /*hidden argument*/InternalExtensions_OnSuccess_TisTuple_2_t1834_TisInt32_t29_m75334_MethodInfo_var);
		return L_19;
	}
}
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String)
extern "C" Task_1_t808 * ParseQuery_1_GetAsync_m28662_gshared (ParseQuery_1_t2095 * __this, String_t* ___objectId, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectId;
		CancellationToken_t1753  L_1 = CancellationToken_get_None_m8803(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((ParseQuery_1_t2095 *)__this);
		Task_1_t808 * L_2 = (( Task_1_t808 * (*) (ParseQuery_1_t2095 *, String_t*, CancellationToken_t1753 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((ParseQuery_1_t2095 *)__this, (String_t*)L_0, (CancellationToken_t1753 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<T> Parse.ParseQuery`1<System.Object>::GetAsync(System.String,System.Threading.CancellationToken)
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1__ctor_m11365_MethodInfo_var;
extern "C" Task_1_t808 * ParseQuery_1_GetAsync_m28663_gshared (ParseQuery_1_t2095 * __this, String_t* ___objectId, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Nullable_1__ctor_m11365_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485174);
		s_Il2CppMethodIntialized = true;
	}
	ParseQuery_1_t2095 * V_0 = {0};
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	Task_1_t6503 * G_B2_0 = {0};
	Task_1_t6503 * G_B1_0 = {0};
	{
		String_t* L_0 = (String_t*)(__this->___className_0);
		ParseQuery_1_t2095 * L_1 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, String_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		String_t* L_2 = ___objectId;
		NullCheck((ParseQuery_1_t2095 *)L_1);
		ParseQuery_1_t2095 * L_3 = (( ParseQuery_1_t2095 * (*) (ParseQuery_1_t2095 *, String_t*, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)((ParseQuery_1_t2095 *)L_1, (String_t*)(String_t*) &_stringLiteral1550, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		V_0 = (ParseQuery_1_t2095 *)L_3;
		ParseQuery_1_t2095 * L_4 = V_0;
		ReadOnlyCollection_1_t2026 * L_5 = (ReadOnlyCollection_1_t2026 *)(__this->___includes_3);
		V_1 = (Object_t*)L_5;
		ReadOnlyCollection_1_t2026 * L_6 = (ReadOnlyCollection_1_t2026 *)(__this->___selectedKeys_4);
		V_2 = (Object_t*)L_6;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t3072  L_7 = V_3;
		Nullable_1_t3072  L_8 = {0};
		Nullable_1__ctor_m11365(&L_8, (int32_t)1, /*hidden argument*/Nullable_1__ctor_m11365_MethodInfo_var);
		Object_t* L_9 = V_1;
		Object_t* L_10 = V_2;
		ParseQuery_1_t2095 * L_11 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_11, (ParseQuery_1_t2095 *)L_4, (Object_t*)NULL, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_7, (Nullable_1_t3072 )L_8, (Object_t*)L_9, (Object_t*)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		V_0 = (ParseQuery_1_t2095 *)L_11;
		ParseQuery_1_t2095 * L_12 = V_0;
		CancellationToken_t1753  L_13 = ___cancellationToken;
		NullCheck((ParseQuery_1_t2095 *)L_12);
		Task_1_t6503 * L_14 = (( Task_1_t6503 * (*) (ParseQuery_1_t2095 *, CancellationToken_t1753 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((ParseQuery_1_t2095 *)L_12, (CancellationToken_t1753 )L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		Func_2_t6498 * L_15 = ((ParseQuery_1_t2095_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate3b_9;
		G_B1_0 = L_14;
		if (L_15)
		{
			G_B2_0 = L_14;
			goto IL_005f;
		}
	}
	{
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34) };
		Func_2_t6498 * L_17 = (Func_2_t6498 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		(( void (*) (Func_2_t6498 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		((ParseQuery_1_t2095_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate3b_9 = L_17;
		G_B2_0 = G_B1_0;
	}

IL_005f:
	{
		Func_2_t6498 * L_18 = ((ParseQuery_1_t2095_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate3b_9;
		Task_1_t808 * L_19 = (( Task_1_t808 * (*) (Object_t * /* static, unused */, Task_1_t6503 *, Func_2_t6498 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, (Task_1_t6503 *)G_B2_0, (Func_2_t6498 *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		return L_19;
	}
}
// T Parse.ParseQuery`1<System.Object>::CreateParseObjectFromQueryResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* ParseObject_t596_il2cpp_TypeInfo_var;
extern "C" Object_t * ParseQuery_1_CreateParseObjectFromQueryResult_m28664_gshared (ParseQuery_1_t2095 * __this, Object_t* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseObject_t596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1158);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		String_t* L_0 = (String_t*)(__this->___className_0);
		IL2CPP_RUNTIME_CLASS_INIT(ParseObject_t596_il2cpp_TypeInfo_var);
		ParseObject_t596 * L_1 = ParseObject_CreateWithoutData_m8412(NULL /*static, unused*/, (String_t*)L_0, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)));
		Object_t* L_2 = ___data;
		NullCheck((ParseObject_t596 *)(*(&V_0)));
		VirtActionInvoker1< Object_t* >::Invoke(7 /* System.Void Parse.ParseObject::MergeAfterFetch(System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, (ParseObject_t596 *)(*(&V_0)), (Object_t*)L_2);
		Object_t * L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::PrepareObjectsFromResults(System.Collections.Generic.IList`1<System.Object>)
extern "C" Object_t* ParseQuery_1_PrepareObjectsFromResults_m28665_gshared (ParseQuery_1_t2095 * __this, Object_t* ___results, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___results;
		IntPtr_t L_1 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39) };
		Func_2_t1814 * L_2 = (Func_2_t1814 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		(( void (*) (Func_2_t1814 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41)->method)(L_2, (Object_t *)__this, (IntPtr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41));
		Object_t* L_3 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1814 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42)->method)(NULL /*static, unused*/, (Object_t*)L_0, (Func_2_t1814 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42));
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		List_1_t2 * L_5 = (( List_1_t2 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(NULL /*static, unused*/, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		ReadOnlyCollection_1_t1773 * L_6 = (ReadOnlyCollection_1_t1773 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		(( void (*) (ReadOnlyCollection_1_t1773 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(L_6, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return L_6;
	}
}
// System.Object Parse.ParseQuery`1<System.Object>::GetConstraint(System.String)
extern const MethodInfo* InternalExtensions_GetOrDefault_TisString_t_TisObject_t_m9248_MethodInfo_var;
extern "C" Object_t * ParseQuery_1_GetConstraint_m28666_gshared (ParseQuery_1_t2095 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalExtensions_GetOrDefault_TisString_t_TisObject_t_m9248_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484942);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)(__this->___where_1);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Dictionary_2_t468 * L_1 = (Dictionary_2_t468 *)(__this->___where_1);
		String_t* L_2 = ___key;
		Object_t * L_3 = InternalExtensions_GetOrDefault_TisString_t_TisObject_t_m9248(NULL /*static, unused*/, (Object_t*)L_1, (String_t*)L_2, (Object_t *)NULL, /*hidden argument*/InternalExtensions_GetOrDefault_TisString_t_TisObject_t_m9248_MethodInfo_var);
		return L_3;
	}

IL_0016:
	{
		return NULL;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::BuildParameters(System.Boolean)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern const MethodInfo* Enumerable_ToArray_TisString_t_m8904_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m11362_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m11363_MethodInfo_var;
extern "C" Object_t* ParseQuery_1_BuildParameters_m28667_gshared (ParseQuery_1_t2095 * __this, bool ___includeClassName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		Enumerable_ToArray_TisString_t_m8904_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484559);
		Nullable_1_get_HasValue_m11362_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485172);
		Nullable_1_get_Value_m11363_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485173);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Nullable_1_t3072  V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	Nullable_1_t3072  V_4 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = (Dictionary_2_t468 *)(__this->___where_1);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Dictionary_2_t468 * L_2 = V_0;
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)(__this->___where_1);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		Object_t * L_4 = ParseClient_MaybeEncodeJSONObject_m8276(NULL /*static, unused*/, (Object_t *)L_3, (bool)1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t468 *)L_2);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t468 *)L_2, (String_t*)(String_t*) &_stringLiteral1875, (Object_t *)L_4);
	}

IL_0025:
	{
		ReadOnlyCollection_1_t2026 * L_5 = (ReadOnlyCollection_1_t2026 *)(__this->___orderBy_2);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		Dictionary_2_t468 * L_6 = V_0;
		ReadOnlyCollection_1_t2026 * L_7 = (ReadOnlyCollection_1_t2026 *)(__this->___orderBy_2);
		StringU5BU5D_t20* L_8 = Enumerable_ToArray_TisString_t_m8904(NULL /*static, unused*/, (Object_t*)L_7, /*hidden argument*/Enumerable_ToArray_TisString_t_m8904_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Join_m3315(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1293, (StringU5BU5D_t20*)L_8, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t468 *)L_6);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t468 *)L_6, (String_t*)(String_t*) &_stringLiteral1914, (Object_t *)L_9);
	}

IL_004d:
	{
		Nullable_1_t3072  L_10 = (Nullable_1_t3072 )(__this->___skip_5);
		V_1 = (Nullable_1_t3072 )L_10;
		bool L_11 = Nullable_1_get_HasValue_m11362((Nullable_1_t3072 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m11362_MethodInfo_var);
		if (!L_11)
		{
			goto IL_007b;
		}
	}
	{
		Dictionary_2_t468 * L_12 = V_0;
		Nullable_1_t3072  L_13 = (Nullable_1_t3072 )(__this->___skip_5);
		V_2 = (Nullable_1_t3072 )L_13;
		int32_t L_14 = Nullable_1_get_Value_m11363((Nullable_1_t3072 *)(&V_2), /*hidden argument*/Nullable_1_get_Value_m11363_MethodInfo_var);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_15);
		NullCheck((Dictionary_2_t468 *)L_12);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t468 *)L_12, (String_t*)(String_t*) &_stringLiteral1915, (Object_t *)L_16);
	}

IL_007b:
	{
		Nullable_1_t3072  L_17 = (Nullable_1_t3072 )(__this->___limit_6);
		V_3 = (Nullable_1_t3072 )L_17;
		bool L_18 = Nullable_1_get_HasValue_m11362((Nullable_1_t3072 *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m11362_MethodInfo_var);
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		Dictionary_2_t468 * L_19 = V_0;
		Nullable_1_t3072  L_20 = (Nullable_1_t3072 )(__this->___limit_6);
		V_4 = (Nullable_1_t3072 )L_20;
		int32_t L_21 = Nullable_1_get_Value_m11363((Nullable_1_t3072 *)(&V_4), /*hidden argument*/Nullable_1_get_Value_m11363_MethodInfo_var);
		int32_t L_22 = L_21;
		Object_t * L_23 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_22);
		NullCheck((Dictionary_2_t468 *)L_19);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t468 *)L_19, (String_t*)(String_t*) &_stringLiteral1912, (Object_t *)L_23);
	}

IL_00aa:
	{
		ReadOnlyCollection_1_t2026 * L_24 = (ReadOnlyCollection_1_t2026 *)(__this->___includes_3);
		if (!L_24)
		{
			goto IL_00d2;
		}
	}
	{
		Dictionary_2_t468 * L_25 = V_0;
		ReadOnlyCollection_1_t2026 * L_26 = (ReadOnlyCollection_1_t2026 *)(__this->___includes_3);
		StringU5BU5D_t20* L_27 = Enumerable_ToArray_TisString_t_m8904(NULL /*static, unused*/, (Object_t*)L_26, /*hidden argument*/Enumerable_ToArray_TisString_t_m8904_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Join_m3315(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1293, (StringU5BU5D_t20*)L_27, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t468 *)L_25);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t468 *)L_25, (String_t*)(String_t*) &_stringLiteral1916, (Object_t *)L_28);
	}

IL_00d2:
	{
		ReadOnlyCollection_1_t2026 * L_29 = (ReadOnlyCollection_1_t2026 *)(__this->___selectedKeys_4);
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		Dictionary_2_t468 * L_30 = V_0;
		ReadOnlyCollection_1_t2026 * L_31 = (ReadOnlyCollection_1_t2026 *)(__this->___selectedKeys_4);
		StringU5BU5D_t20* L_32 = Enumerable_ToArray_TisString_t_m8904(NULL /*static, unused*/, (Object_t*)L_31, /*hidden argument*/Enumerable_ToArray_TisString_t_m8904_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Join_m3315(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1293, (StringU5BU5D_t20*)L_32, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t468 *)L_30);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t468 *)L_30, (String_t*)(String_t*) &_stringLiteral1917, (Object_t *)L_33);
	}

IL_00fa:
	{
		bool L_34 = ___includeClassName;
		if (!L_34)
		{
			goto IL_010e;
		}
	}
	{
		Dictionary_2_t468 * L_35 = V_0;
		String_t* L_36 = (String_t*)(__this->___className_0);
		NullCheck((Dictionary_2_t468 *)L_35);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t468 *)L_35, (String_t*)(String_t*) &_stringLiteral1549, (Object_t *)L_36);
	}

IL_010e:
	{
		Dictionary_2_t468 * L_37 = V_0;
		return L_37;
	}
}
// System.String Parse.ParseQuery`1<System.Object>::RegexQuote(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ParseQuery_1_RegexQuote_m28668_gshared (ParseQuery_1_t2095 * __this, String_t* ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___input;
		NullCheck((String_t*)L_0);
		String_t* L_1 = String_Replace_m3757((String_t*)L_0, (String_t*)(String_t*) &_stringLiteral1919, (String_t*)(String_t*) &_stringLiteral1920, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m103(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral1918, (String_t*)L_1, (String_t*)(String_t*) &_stringLiteral1919, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Parse.ParseQuery`1<System.Object>::GetRegexOptions(System.Text.RegularExpressions.Regex,System.String)
extern TypeInfo* RegexOptions_t4380_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ParseQuery_1_GetRegexOptions_m28669_gshared (ParseQuery_1_t2095 * __this, Regex_t789 * ___regex, String_t* ___modifiers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RegexOptions_t4380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7653);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	{
		String_t* L_0 = ___modifiers;
		String_t* L_1 = (String_t*)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		G_B2_0 = (String_t*) &_stringLiteral1501;
	}

IL_000a:
	{
		V_0 = (String_t*)G_B2_0;
		Regex_t789 * L_2 = ___regex;
		NullCheck((Regex_t789 *)L_2);
		int32_t L_3 = Regex_get_Options_m14846((Regex_t789 *)L_2, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(RegexOptions_t4380_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = 1;
		Object_t * L_7 = Box(RegexOptions_t4380_il2cpp_TypeInfo_var, &L_6);
		bool L_8 = MissingExtensions_HasFlag_m7990(NULL /*static, unused*/, (Enum_t44 *)L_5, (Enum_t44 *)L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_9 = ___modifiers;
		NullCheck((String_t*)L_9);
		bool L_10 = String_Contains_m2713((String_t*)L_9, (String_t*)(String_t*) &_stringLiteral1921, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m105(NULL /*static, unused*/, (String_t*)L_11, (String_t*)(String_t*) &_stringLiteral1921, /*hidden argument*/NULL);
		V_0 = (String_t*)L_12;
	}

IL_003c:
	{
		Regex_t789 * L_13 = ___regex;
		NullCheck((Regex_t789 *)L_13);
		int32_t L_14 = Regex_get_Options_m14846((Regex_t789 *)L_13, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(RegexOptions_t4380_il2cpp_TypeInfo_var, &L_15);
		int32_t L_17 = 2;
		Object_t * L_18 = Box(RegexOptions_t4380_il2cpp_TypeInfo_var, &L_17);
		bool L_19 = MissingExtensions_HasFlag_m7990(NULL /*static, unused*/, (Enum_t44 *)L_16, (Enum_t44 *)L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_20 = ___modifiers;
		NullCheck((String_t*)L_20);
		bool L_21 = String_Contains_m2713((String_t*)L_20, (String_t*)(String_t*) &_stringLiteral1922, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m105(NULL /*static, unused*/, (String_t*)L_22, (String_t*)(String_t*) &_stringLiteral1922, /*hidden argument*/NULL);
		V_0 = (String_t*)L_23;
	}

IL_006d:
	{
		String_t* L_24 = V_0;
		return L_24;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseQuery`1<System.Object>::EncodeRegex(System.Text.RegularExpressions.Regex,System.String)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" Object_t* ParseQuery_1_EncodeRegex_m28670_gshared (ParseQuery_1_t2095 * __this, Regex_t789 * ___regex, String_t* ___modifiers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	{
		Regex_t789 * L_0 = ___regex;
		String_t* L_1 = ___modifiers;
		NullCheck((ParseQuery_1_t2095 *)__this);
		String_t* L_2 = (( String_t* (*) (ParseQuery_1_t2095 *, Regex_t789 *, String_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)((ParseQuery_1_t2095 *)__this, (Regex_t789 *)L_0, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		V_0 = (String_t*)L_2;
		Dictionary_2_t468 * L_3 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_3, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_3;
		Dictionary_2_t468 * L_4 = V_1;
		Regex_t789 * L_5 = ___regex;
		NullCheck((Object_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)L_5);
		NullCheck((Dictionary_2_t468 *)L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t468 *)L_4, (String_t*)(String_t*) &_stringLiteral1891, (Object_t *)L_6);
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, (String_t*)L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t468 * L_9 = V_1;
		String_t* L_10 = V_0;
		NullCheck((Dictionary_2_t468 *)L_9);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, (Dictionary_2_t468 *)L_9, (String_t*)(String_t*) &_stringLiteral1923, (Object_t *)L_10);
	}

IL_0034:
	{
		Dictionary_2_t468 * L_11 = V_1;
		return L_11;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseQuery`1<System.Object>::WhereRelatedTo(Parse.ParseObject,System.String)
extern TypeInfo* Dictionary_2_t468_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t3072_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m8892_MethodInfo_var;
extern "C" ParseQuery_1_t2095 * ParseQuery_1_WhereRelatedTo_m28671_gshared (ParseQuery_1_t2095 * __this, ParseObject_t596 * ___parent, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		Nullable_1_t3072_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6388);
		Dictionary_2__ctor_m8892_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484546);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t468 * V_0 = {0};
	Dictionary_2_t468 * V_1 = {0};
	Nullable_1_t3072  V_2 = {0};
	Nullable_1_t3072  V_3 = {0};
	{
		Dictionary_2_t468 * L_0 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_0, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_0 = (Dictionary_2_t468 *)L_0;
		Dictionary_2_t468 * L_1 = V_0;
		Dictionary_2_t468 * L_2 = (Dictionary_2_t468 *)il2cpp_codegen_object_new (Dictionary_2_t468_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8892(L_2, /*hidden argument*/Dictionary_2__ctor_m8892_MethodInfo_var);
		V_1 = (Dictionary_2_t468 *)L_2;
		Dictionary_2_t468 * L_3 = V_1;
		ParseObject_t596 * L_4 = ___parent;
		NullCheck((Dictionary_2_t468 *)L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_3, (String_t*)(String_t*) &_stringLiteral1925, (Object_t *)L_4);
		Dictionary_2_t468 * L_5 = V_1;
		String_t* L_6 = ___key;
		NullCheck((Dictionary_2_t468 *)L_5);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_5, (String_t*)(String_t*) &_stringLiteral1608, (Object_t *)L_6);
		Dictionary_2_t468 * L_7 = V_1;
		NullCheck((Dictionary_2_t468 *)L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, (Dictionary_2_t468 *)L_1, (String_t*)(String_t*) &_stringLiteral1924, (Object_t *)L_7);
		Dictionary_2_t468 * L_8 = V_0;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_2));
		Nullable_1_t3072  L_9 = V_2;
		Initobj (Nullable_1_t3072_il2cpp_TypeInfo_var, (&V_3));
		Nullable_1_t3072  L_10 = V_3;
		ParseQuery_1_t2095 * L_11 = (ParseQuery_1_t2095 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		(( void (*) (ParseQuery_1_t2095 *, ParseQuery_1_t2095 *, Object_t*, Object_t*, Object_t*, Nullable_1_t3072 , Nullable_1_t3072 , Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_11, (ParseQuery_1_t2095 *)__this, (Object_t*)L_8, (Object_t*)NULL, (Object_t*)NULL, (Nullable_1_t3072 )L_9, (Nullable_1_t3072 )L_10, (Object_t*)NULL, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_11;
	}
}
// System.String Parse.ParseQuery`1<System.Object>::get_JsonString()
extern TypeInfo* ParseClient_t1817_il2cpp_TypeInfo_var;
extern "C" String_t* ParseQuery_1_get_JsonString_m28672_gshared (ParseQuery_1_t2095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3722);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ParseQuery_1_t2095 *)__this);
		Object_t* L_0 = (( Object_t* (*) (ParseQuery_1_t2095 *, bool, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((ParseQuery_1_t2095 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1817_il2cpp_TypeInfo_var);
		String_t* L_1 = ParseClient_SerializeJsonString_m8288(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Parse.ParseQuery`1<System.Object>::EnsureNotInstallationQuery()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" void ParseQuery_1_EnsureNotInstallationQuery_m28673_gshared (ParseQuery_1_t2095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (String_t*)(__this->___className_0);
		NullCheck((String_t*)L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, (String_t*)L_0, (String_t*)(String_t*) &_stringLiteral1601);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t1668 * L_2 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_2, (String_t*)(String_t*) &_stringLiteral1926, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<T> Parse.ParseQuery`1<System.Object>::<FindAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t1954_il2cpp_TypeInfo_var;
extern const MethodInfo* Task_1_get_Result_m9080_MethodInfo_var;
extern const MethodInfo* Tuple_2_get_Item2_m9081_MethodInfo_var;
extern "C" Object_t* ParseQuery_1_U3CFindAsyncU3Eb__34_m28674_gshared (ParseQuery_1_t2095 * __this, Task_1_t1965 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		IList_1_t1954_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3744);
		Task_1_get_Result_m9080_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484763);
		Tuple_2_get_Item2_m9081_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484764);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Task_1_t1965 * L_0 = ___t;
		NullCheck((Task_1_t1965 *)L_0);
		Tuple_2_t1834 * L_1 = Task_1_get_Result_m9080((Task_1_t1965 *)L_0, /*hidden argument*/Task_1_get_Result_m9080_MethodInfo_var);
		NullCheck((Tuple_2_t1834 *)L_1);
		Object_t* L_2 = Tuple_2_get_Item2_m9081((Tuple_2_t1834 *)L_1, /*hidden argument*/Tuple_2_get_Item2_m9081_MethodInfo_var);
		NullCheck((Object_t*)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1810_il2cpp_TypeInfo_var, (Object_t*)L_2, (String_t*)(String_t*) &_stringLiteral913);
		V_0 = (Object_t*)((Object_t*)IsInst(L_3, IList_1_t1954_il2cpp_TypeInfo_var));
		Object_t* L_4 = V_0;
		NullCheck((ParseQuery_1_t2095 *)__this);
		Object_t* L_5 = (( Object_t* (*) (ParseQuery_1_t2095 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47)->method)((ParseQuery_1_t2095 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		return L_5;
	}
}
// T Parse.ParseQuery`1<System.Object>::<FirstOrDefaultAsync>b__35(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* IList_1_t1954_il2cpp_TypeInfo_var;
extern const MethodInfo* Task_1_get_Result_m9080_MethodInfo_var;
extern const MethodInfo* Tuple_2_get_Item2_m9081_MethodInfo_var;
extern "C" Object_t * ParseQuery_1_U3CFirstOrDefaultAsyncU3Eb__35_m28675_gshared (ParseQuery_1_t2095 * __this, Task_1_t1965 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		IList_1_t1954_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3744);
		Task_1_get_Result_m9080_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484763);
		Tuple_2_get_Item2_m9081_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484764);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Task_1_t1965 * L_0 = ___t;
		NullCheck((Task_1_t1965 *)L_0);
		Tuple_2_t1834 * L_1 = Task_1_get_Result_m9080((Task_1_t1965 *)L_0, /*hidden argument*/Task_1_get_Result_m9080_MethodInfo_var);
		NullCheck((Tuple_2_t1834 *)L_1);
		Object_t* L_2 = Tuple_2_get_Item2_m9081((Tuple_2_t1834 *)L_1, /*hidden argument*/Tuple_2_get_Item2_m9081_MethodInfo_var);
		NullCheck((Object_t*)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1810_il2cpp_TypeInfo_var, (Object_t*)L_2, (String_t*)(String_t*) &_stringLiteral913);
		NullCheck((ParseQuery_1_t2095 *)__this);
		Object_t* L_4 = (( Object_t* (*) (ParseQuery_1_t2095 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47)->method)((ParseQuery_1_t2095 *)__this, (Object_t*)((Object_t*)IsInst(L_3, IList_1_t1954_il2cpp_TypeInfo_var)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		V_0 = (Object_t*)L_4;
		Object_t* L_5 = V_0;
		Object_t * L_6 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)->method)(NULL /*static, unused*/, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48));
		return L_6;
	}
}
// T Parse.ParseQuery`1<System.Object>::<FirstAsync>b__36(System.Threading.Tasks.Task`1<T>)
extern TypeInfo* ParseException_t804_il2cpp_TypeInfo_var;
extern "C" Object_t * ParseQuery_1_U3CFirstAsyncU3Eb__36_m28676_gshared (Object_t * __this /* static, unused */, Task_1_t808 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseException_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(517);
		s_Il2CppMethodIntialized = true;
	}
	{
		Task_1_t808 * L_0 = ___t;
		NullCheck((Task_1_t808 *)L_0);
		Object_t * L_1 = (( Object_t * (*) (Task_1_t808 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)->method)((Task_1_t808 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49));
		Object_t * L_2 = L_1;
		if (((Object_t *)L_2))
		{
			goto IL_001b;
		}
	}
	{
		ParseException_t804 * L_3 = (ParseException_t804 *)il2cpp_codegen_object_new (ParseException_t804_il2cpp_TypeInfo_var);
		ParseException__ctor_m8314(L_3, (int32_t)((int32_t)101), (String_t*)(String_t*) &_stringLiteral1927, (Exception_t496 *)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		Task_1_t808 * L_4 = ___t;
		NullCheck((Task_1_t808 *)L_4);
		Object_t * L_5 = (( Object_t * (*) (Task_1_t808 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)->method)((Task_1_t808 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49));
		return L_5;
	}
}
// System.Int32 Parse.ParseQuery`1<System.Object>::<CountAsync>b__38(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t2000_il2cpp_TypeInfo_var;
extern const MethodInfo* Task_1_get_Result_m9080_MethodInfo_var;
extern const MethodInfo* Tuple_2_get_Item2_m9081_MethodInfo_var;
extern "C" int32_t ParseQuery_1_U3CCountAsyncU3Eb__38_m28677_gshared (Object_t * __this /* static, unused */, Task_1_t1965 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		Convert_t2000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3704);
		Task_1_get_Result_m9080_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484763);
		Tuple_2_get_Item2_m9081_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484764);
		s_Il2CppMethodIntialized = true;
	}
	{
		Task_1_t1965 * L_0 = ___t;
		NullCheck((Task_1_t1965 *)L_0);
		Tuple_2_t1834 * L_1 = Task_1_get_Result_m9080((Task_1_t1965 *)L_0, /*hidden argument*/Task_1_get_Result_m9080_MethodInfo_var);
		NullCheck((Tuple_2_t1834 *)L_1);
		Object_t* L_2 = Tuple_2_get_Item2_m9081((Tuple_2_t1834 *)L_1, /*hidden argument*/Tuple_2_get_Item2_m9081_MethodInfo_var);
		NullCheck((Object_t*)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1810_il2cpp_TypeInfo_var, (Object_t*)L_2, (String_t*)(String_t*) &_stringLiteral1913);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2000_il2cpp_TypeInfo_var);
		int32_t L_4 = Convert_ToInt32_m18015(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// T Parse.ParseQuery`1<System.Object>::<GetAsync>b__3a(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>>)
extern TypeInfo* ParseException_t804_il2cpp_TypeInfo_var;
extern "C" Object_t * ParseQuery_1_U3CGetAsyncU3Eb__3a_m28678_gshared (Object_t * __this /* static, unused */, Task_1_t6503 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseException_t804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(517);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Task_1_t6503 * L_0 = ___t;
		NullCheck((Task_1_t6503 *)L_0);
		Object_t* L_1 = (( Object_t* (*) (Task_1_t6503 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)->method)((Task_1_t6503 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)->method)(NULL /*static, unused*/, (Object_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48));
		V_0 = (Object_t *)L_2;
		Object_t * L_3 = V_0;
		Object_t * L_4 = L_3;
		if (((Object_t *)L_4))
		{
			goto IL_0022;
		}
	}
	{
		ParseException_t804 * L_5 = (ParseException_t804 *)il2cpp_codegen_object_new (ParseException_t804_il2cpp_TypeInfo_var);
		ParseException__ctor_m8314(L_5, (int32_t)((int32_t)101), (String_t*)(String_t*) &_stringLiteral1928, (Exception_t496 *)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0022:
	{
		Object_t * L_6 = V_0;
		return L_6;
	}
}
// T Parse.ParseQuery`1<System.Object>::<PrepareObjectsFromResults>b__3c(System.Object)
extern TypeInfo* IDictionary_2_t1810_il2cpp_TypeInfo_var;
extern "C" Object_t * ParseQuery_1_U3CPrepareObjectsFromResultsU3Eb__3c_m28679_gshared (ParseQuery_1_t2095 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t1810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3716);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		NullCheck((ParseQuery_1_t2095 *)__this);
		Object_t * L_1 = (( Object_t * (*) (ParseQuery_1_t2095 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)((ParseQuery_1_t2095 *)__this, (Object_t*)((Object_t*)IsInst(L_0, IDictionary_2_t1810_il2cpp_TypeInfo_var)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"


// System.Void System.Nullable`1<System.Int32>::.ctor(T)
extern "C" void Nullable_1__ctor_m11365_gshared (Nullable_1_t3072 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		__this->___has_value_1 = 1;
		int32_t L_0 = ___value;
		__this->___value_0 = L_0;
		return;
	}
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m11362_gshared (Nullable_1_t3072 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		return L_0;
	}
}
// T System.Nullable`1<System.Int32>::get_Value()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" int32_t Nullable_1_get_Value_m11363_gshared (Nullable_1_t3072 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4654, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		int32_t L_2 = (int32_t)(__this->___value_0);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m28774_gshared (Nullable_1_t3072 * __this, Object_t * ___other, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___other;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		bool L_1 = (bool)(__this->___has_value_1);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		Object_t * L_2 = ___other;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		Object_t * L_3 = ___other;
		void* L_4 = alloca(sizeof(Nullable_1_t3072 ));
		UnBoxNullable(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_4);
		bool L_5 = (( bool (*) (Nullable_1_t3072 *, Nullable_1_t3072 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Nullable_1_t3072 *)__this, (Nullable_1_t3072 )((*(Nullable_1_t3072 *)((Nullable_1_t3072 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_5;
	}
}
// System.Boolean System.Nullable`1<System.Int32>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m28775_gshared (Nullable_1_t3072 * __this, Nullable_1_t3072  ___other, const MethodInfo* method)
{
	{
		bool L_0 = (bool)((&___other)->___has_value_1);
		bool L_1 = (bool)(__this->___has_value_1);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		bool L_2 = (bool)(__this->___has_value_1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		int32_t* L_3 = (int32_t*)&((&___other)->___value_0);
		int32_t L_4 = (int32_t)(__this->___value_0);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((ValueType_t843 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (ValueType_t843 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3), (Object_t *)L_6);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.Int32>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m28776_gshared (Nullable_1_t3072 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t* L_1 = (int32_t*)&(__this->___value_0);
		NullCheck((ValueType_t843 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.ValueType::GetHashCode() */, (ValueType_t843 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}
}
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" int32_t Nullable_1_GetValueOrDefault_m28777_gshared (Nullable_1_t3072 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___value_0);
		G_B3_0 = L_1;
		goto IL_0019;
	}

IL_0010:
	{
		Initobj (Int32_t29_il2cpp_TypeInfo_var, (&V_0));
		int32_t L_2 = V_0;
		G_B3_0 = L_2;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.String System.Nullable`1<System.Int32>::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Nullable_1_ToString_m28778_gshared (Nullable_1_t3072 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t* L_1 = (int32_t*)&(__this->___value_0);
		NullCheck((ValueType_t843 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.ValueType::ToString() */, (ValueType_t843 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
#include "mscorlib_System_Action_1_gen_26.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_0.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_0MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern TypeInfo* Task_t344_il2cpp_TypeInfo_var;
extern "C" void Task_1__ctor_m28787_gshared (Task_1_t808 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t344_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(322);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Task_t344 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t344_il2cpp_TypeInfo_var);
		Task__ctor_m8829((Task_t344 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m28788_gshared (Task_1_t808 * __this, const MethodInfo* method)
{
	{
		NullCheck((Task_t344 *)__this);
		Task_Wait_m8832((Task_t344 *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = (Object_t *)(__this->___result_9);
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern TypeInfo* Action_1_t337_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1__ctor_m3250_MethodInfo_var;
extern "C" Task_t344 * Task_1_ContinueWith_m28789_gshared (Task_1_t808 * __this, Action_1_t810 * ___continuation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(323);
		Action_1__ctor_m3250_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483819);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1_t6500 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1_t6500 * L_0 = (U3CU3Ec__DisplayClass1_t6500 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass1_t6500 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass1_t6500 *)L_0;
		U3CU3Ec__DisplayClass1_t6500 * L_1 = V_0;
		Action_1_t810 * L_2 = ___continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		U3CU3Ec__DisplayClass1_t6500 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t337 * L_5 = (Action_1_t337 *)il2cpp_codegen_object_new (Action_1_t337_il2cpp_TypeInfo_var);
		Action_1__ctor_m3250(L_5, (Object_t *)L_3, (IntPtr_t)L_4, /*hidden argument*/Action_1__ctor_m3250_MethodInfo_var);
		NullCheck((Task_t344 *)__this);
		Task_t344 * L_6 = Task_ContinueWith_m3251((Task_t344 *)__this, (Action_1_t337 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern TypeInfo* IEnumerable_1_t10840_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t10841_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void Task_1_RunContinuations_m28790_gshared (Task_1_t808 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t10840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12913);
		IEnumerator_1_t10841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12911);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t337 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t344 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m2728(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(((Task_t344 *)__this)->___continuations_3);
			NullCheck((Object_t*)L_2);
			Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t10840_il2cpp_TypeInfo_var, (Object_t*)L_2);
			V_2 = (Object_t*)L_3;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0029;
			}

IL_001b:
			{
				Object_t* L_4 = V_2;
				NullCheck((Object_t*)L_4);
				Action_1_t337 * L_5 = (Action_1_t337 *)InterfaceFuncInvoker0< Action_1_t337 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_t10841_il2cpp_TypeInfo_var, (Object_t*)L_4);
				V_0 = (Action_1_t337 *)L_5;
				Action_1_t337 * L_6 = V_0;
				NullCheck((Action_1_t337 *)L_6);
				VirtActionInvoker1< Task_t344 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0) */, (Action_1_t337 *)L_6, (Task_t344 *)__this);
			}

IL_0029:
			{
				Object_t* L_7 = V_2;
				NullCheck((Object_t *)L_7);
				bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_7);
				if (L_8)
				{
					goto IL_001b;
				}
			}

IL_0031:
			{
				IL2CPP_LEAVE(0x3D, FINALLY_0033);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t496 *)e.ex;
			goto FINALLY_0033;
		}

FINALLY_0033:
		{ // begin finally (depth: 2)
			{
				Object_t* L_9 = V_2;
				if (!L_9)
				{
					goto IL_003c;
				}
			}

IL_0036:
			{
				Object_t* L_10 = V_2;
				NullCheck((Object_t *)L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_10);
			}

IL_003c:
			{
				IL2CPP_END_FINALLY(51)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(51)
		{
			IL2CPP_JUMP_TBL(0x3D, IL_003d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
		}

IL_003d:
		{
			((Task_t344 *)__this)->___continuations_3 = (Object_t*)NULL;
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Object_t * L_11 = V_1;
		Monitor_Exit_m2731(NULL /*static, unused*/, (Object_t *)L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m28791_gshared (Task_1_t808 * __this, Object_t * ___result, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t344 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m2728(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t344 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t344 *)__this)->___isCompleted_6 = 1;
			Object_t * L_3 = ___result;
			__this->___result_9 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t344 *)__this)->___mutex_2);
			Monitor_PulseAll_m22459(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t808 *)__this);
			(( void (*) (Task_1_t808 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t808 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m2731(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m28792_gshared (Task_1_t808 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t344 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m2728(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t344 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t344 *)__this)->___isCompleted_6 = 1;
			((Task_t344 *)__this)->___isCanceled_5 = 1;
			Object_t * L_3 = (Object_t *)(((Task_t344 *)__this)->___mutex_2);
			Monitor_PulseAll_m22459(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
			NullCheck((Task_1_t808 *)__this);
			(( void (*) (Task_1_t808 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t808 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_1;
		Monitor_Exit_m2731(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0043:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m28793_gshared (Task_1_t808 * __this, AggregateException_t727 * ___exception, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t344 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m2728(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t344 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t344 *)__this)->___isCompleted_6 = 1;
			AggregateException_t727 * L_3 = ___exception;
			((Task_t344 *)__this)->___exception_4 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t344 *)__this)->___mutex_2);
			Monitor_PulseAll_m22459(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t808 *)__this);
			(( void (*) (Task_1_t808 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t808 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m2731(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
#include "mscorlib_System_Action_1_gen_26MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1__ctor_m28794_gshared (U3CU3Ec__DisplayClass1_t6500 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Object>::<ContinueWith>b__0(System.Threading.Tasks.Task)
extern "C" void U3CU3Ec__DisplayClass1_U3CContinueWithU3Eb__0_m28795_gshared (U3CU3Ec__DisplayClass1_t6500 * __this, Task_t344 * ___t, const MethodInfo* method)
{
	{
		Action_1_t810 * L_0 = (Action_1_t810 *)(__this->___continuation_0);
		Task_t344 * L_1 = ___t;
		NullCheck((Action_1_t810 *)L_0);
		VirtActionInvoker1< Task_1_t808 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Object>>::Invoke(!0) */, (Action_1_t810 *)L_0, (Task_1_t808 *)((Task_1_t808 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return;
	}
}
// System.Func`2<System.Object,System.Int32>
#include "System_Core_System_Func_2_gen_60.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`2<System.Object,System.Int32>
#include "System_Core_System_Func_2_gen_60MethodDeclarations.h"



// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m28797_gshared (Func_2_t6501 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Int32>::Invoke(T)
extern "C" int32_t Func_2_Invoke_m28799_gshared (Func_2_t6501 * __this, Object_t * ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m28799((Func_2_t6501 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m28801_gshared (Func_2_t6501 * __this, Object_t * ___arg1, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Func_2_EndInvoke_m28803_gshared (Func_2_t6501 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Tuple`2<System.Int32,System.Object>
#include "Parse_Unity_System_Tuple_2_gen_5.h"
#ifndef _MSC_VER
#else
#endif
// System.Tuple`2<System.Int32,System.Object>
#include "Parse_Unity_System_Tuple_2_gen_5MethodDeclarations.h"



// T1 System.Tuple`2<System.Int32,System.Object>::get_Item1()
extern "C" int32_t Tuple_2_get_Item1_m28813_gshared (Tuple_2_t6502 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___U3CItem1U3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void System.Tuple`2<System.Int32,System.Object>::set_Item1(T1)
extern "C" void Tuple_2_set_Item1_m28815_gshared (Tuple_2_t6502 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CItem1U3Ek__BackingField_0 = L_0;
		return;
	}
}
// T2 System.Tuple`2<System.Int32,System.Object>::get_Item2()
extern "C" Object_t * Tuple_2_get_Item2_m28816_gshared (Tuple_2_t6502 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CItem2U3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void System.Tuple`2<System.Int32,System.Object>::set_Item2(T2)
extern "C" void Tuple_2_set_Item2_m28818_gshared (Tuple_2_t6502 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___U3CItem2U3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void System.Tuple`2<System.Int32,System.Object>::.ctor(T1,T2)
extern "C" void Tuple_2__ctor_m28819_gshared (Tuple_2_t6502 * __this, int32_t ___item1, Object_t * ___item2, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___item1;
		NullCheck((Tuple_2_t6502 *)__this);
		(( void (*) (Tuple_2_t6502 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Tuple_2_t6502 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___item2;
		NullCheck((Tuple_2_t6502 *)__this);
		(( void (*) (Tuple_2_t6502 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Tuple_2_t6502 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Boolean System.Tuple`2<System.Int32,System.Object>::Equals(System.Object)
extern "C" bool Tuple_2_Equals_m28821_gshared (Tuple_2_t6502 * __this, Object_t * ___obj, const MethodInfo* method)
{
	Tuple_2_t6502 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = (Tuple_2_t6502 *)((Tuple_2_t6502 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Tuple_2_t6502 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		NullCheck((Tuple_2_t6502 *)__this);
		int32_t L_2 = (( int32_t (*) (Tuple_2_t6502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Tuple_2_t6502 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_3);
		Tuple_2_t6502 * L_5 = V_0;
		NullCheck((Tuple_2_t6502 *)L_5);
		int32_t L_6 = (( int32_t (*) (Tuple_2_t6502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Tuple_2_t6502 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_7);
		bool L_9 = Object_Equals_m7577(NULL /*static, unused*/, (Object_t *)L_4, (Object_t *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		NullCheck((Tuple_2_t6502 *)__this);
		Object_t * L_10 = (( Object_t * (*) (Tuple_2_t6502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Tuple_2_t6502 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_11 = L_10;
		Tuple_2_t6502 * L_12 = V_0;
		NullCheck((Tuple_2_t6502 *)L_12);
		Object_t * L_13 = (( Object_t * (*) (Tuple_2_t6502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Tuple_2_t6502 *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_14 = L_13;
		bool L_15 = Object_Equals_m7577(NULL /*static, unused*/, (Object_t *)((Object_t *)L_11), (Object_t *)((Object_t *)L_14), /*hidden argument*/NULL);
		return L_15;
	}

IL_0045:
	{
		return 0;
	}
}
// System.Int32 System.Tuple`2<System.Int32,System.Object>::GetHashCode()
extern "C" int32_t Tuple_2_GetHashCode_m28823_gshared (Tuple_2_t6502 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		NullCheck((Tuple_2_t6502 *)__this);
		int32_t L_0 = (( int32_t (*) (Tuple_2_t6502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Tuple_2_t6502 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_1);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0024;
	}

IL_0010:
	{
		NullCheck((Tuple_2_t6502 *)__this);
		int32_t L_3 = (( int32_t (*) (Tuple_2_t6502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Tuple_2_t6502 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_2 = (int32_t)L_3;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (&V_2)));
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (&V_2)));
		G_B3_0 = L_4;
	}

IL_0024:
	{
		V_0 = (int32_t)G_B3_0;
		NullCheck((Tuple_2_t6502 *)__this);
		Object_t * L_5 = (( Object_t * (*) (Tuple_2_t6502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Tuple_2_t6502 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_6 = L_5;
		if (((Object_t *)L_6))
		{
			goto IL_0035;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0049;
	}

IL_0035:
	{
		NullCheck((Tuple_2_t6502 *)__this);
		Object_t * L_7 = (( Object_t * (*) (Tuple_2_t6502 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Tuple_2_t6502 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		V_3 = (Object_t *)L_7;
		NullCheck((Object_t *)(*(&V_3)));
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)(*(&V_3)));
		G_B6_0 = L_8;
	}

IL_0049:
	{
		V_1 = (int32_t)G_B6_0;
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		return ((int32_t)((int32_t)L_9^(int32_t)L_10));
	}
}
// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_4MethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__2.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
#include "System.Core_ArrayTypes.h"
// System.Collections.Generic.HashSet`1/Link<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Link_gen.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__2MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Collections.Generic.HashSet`1/PrimeHelper<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_PrimeHelperMethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m28839_gshared (HashSet_1_t2048 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((HashSet_1_t2048 *)__this);
		(( void (*) (HashSet_1_t2048 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((HashSet_1_t2048 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m9067_gshared (HashSet_1_t2048 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((HashSet_1_t2048 *)__this);
		(( void (*) (HashSet_1_t2048 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((HashSet_1_t2048 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m28841_gshared (HashSet_1_t2048 * __this, Object_t* ___collection, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___collection;
		NullCheck((HashSet_1_t2048 *)__this);
		(( void (*) (HashSet_1_t2048 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((HashSet_1_t2048 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t646_il2cpp_TypeInfo_var;
extern "C" void HashSet_1__ctor_m28843_gshared (HashSet_1_t2048 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t* V_1 = {0};
	Object_t * V_2 = {0};
	Object_t* V_3 = {0};
	Exception_t496 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t496 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral2013, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		V_0 = (int32_t)0;
		Object_t* L_2 = ___collection;
		V_1 = (Object_t*)((Object_t*)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Object_t* L_4 = V_1;
		NullCheck((Object_t*)L_4);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4);
		V_0 = (int32_t)L_5;
	}

IL_002d:
	{
		int32_t L_6 = V_0;
		Object_t* L_7 = ___comparer;
		NullCheck((HashSet_1_t2048 *)__this);
		(( void (*) (HashSet_1_t2048 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((HashSet_1_t2048 *)__this, (int32_t)L_6, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_8 = ___collection;
		NullCheck((Object_t*)L_8);
		Object_t* L_9 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_8);
		V_3 = (Object_t*)L_9;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0050;
		}

IL_0041:
		{
			Object_t* L_10 = V_3;
			NullCheck((Object_t*)L_10);
			Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_10);
			V_2 = (Object_t *)L_11;
			Object_t * L_12 = V_2;
			NullCheck((HashSet_1_t2048 *)__this);
			(( bool (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((HashSet_1_t2048 *)__this, (Object_t *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		}

IL_0050:
		{
			Object_t* L_13 = V_3;
			NullCheck((Object_t *)L_13);
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_13);
			if (L_14)
			{
				goto IL_0041;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t496 *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		{
			Object_t* L_15 = V_3;
			if (L_15)
			{
				goto IL_0064;
			}
		}

IL_0063:
		{
			IL2CPP_END_FINALLY(96)
		}

IL_0064:
		{
			Object_t* L_16 = V_3;
			NullCheck((Object_t *)L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t646_il2cpp_TypeInfo_var, (Object_t *)L_16);
			IL2CPP_END_FINALLY(96)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t496 *)
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m28845_gshared (HashSet_1_t2048 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t3296 * L_0 = ___info;
		__this->___si_12 = L_0;
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28847_gshared (HashSet_1_t2048 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6510  L_0 = {0};
		(( void (*) (Enumerator_t6510 *, HashSet_1_t2048 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(&L_0, (HashSet_1_t2048 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t6510  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28849_gshared (HashSet_1_t2048 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m28851_gshared (HashSet_1_t2048 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((HashSet_1_t2048 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t21*, int32_t >::Invoke(15 /* System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32) */, (HashSet_1_t2048 *)__this, (ObjectU5BU5D_t21*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28853_gshared (HashSet_1_t2048 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___item;
		NullCheck((HashSet_1_t2048 *)__this);
		(( bool (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((HashSet_1_t2048 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m28855_gshared (HashSet_1_t2048 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6510  L_0 = {0};
		(( void (*) (Enumerator_t6510 *, HashSet_1_t2048 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(&L_0, (HashSet_1_t2048 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t6510  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m28857_gshared (HashSet_1_t2048 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_9);
		return L_0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t6207_il2cpp_TypeInfo_var;
extern "C" void HashSet_1_Init_m28859_gshared (HashSet_1_t2048 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		EqualityComparer_1_t6207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12232);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* G_B4_0 = {0};
	HashSet_1_t2048 * G_B4_1 = {0};
	Object_t* G_B3_0 = {0};
	HashSet_1_t2048 * G_B3_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_1 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_1, (String_t*)(String_t*) &_stringLiteral2014, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Object_t* L_2 = ___comparer;
		Object_t* L_3 = (Object_t*)L_2;
		G_B3_0 = L_3;
		G_B3_1 = ((HashSet_1_t2048 *)(__this));
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = ((HashSet_1_t2048 *)(__this));
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6207_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6207 * L_4 = (( EqualityComparer_1_t6207 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		G_B4_0 = ((Object_t*)(L_4));
		G_B4_1 = ((HashSet_1_t2048 *)(G_B3_1));
	}

IL_0020:
	{
		NullCheck(G_B4_1);
		G_B4_1->___comparer_11 = G_B4_0;
		int32_t L_5 = ___capacity;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_002f:
	{
		int32_t L_6 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_6))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_7 = ___capacity;
		NullCheck((HashSet_1_t2048 *)__this);
		(( void (*) (HashSet_1_t2048 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((HashSet_1_t2048 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		__this->___generation_13 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern "C" void HashSet_1_InitArrays_m28861_gshared (HashSet_1_t2048 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t119*)SZArrayNew(Int32U5BU5D_t119_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___links_5 = ((LinkU5BU5D_t6507*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), L_1));
		__this->___empty_slot_8 = (-1);
		int32_t L_2 = ___size;
		__this->___slots_6 = ((ObjectU5BU5D_t21*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_2));
		__this->___touched_7 = 0;
		Int32U5BU5D_t119* L_3 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_3);
		__this->___threshold_10 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_3)->max_length)))))*(float)(0.9f)))));
		int32_t L_4 = (int32_t)(__this->___threshold_10);
		if (L_4)
		{
			goto IL_0068;
		}
	}
	{
		Int32U5BU5D_t119* L_5 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		__this->___threshold_10 = 1;
	}

IL_0068:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m28863_gshared (HashSet_1_t2048 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Link_t6508  V_1 = {0};
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	{
		Int32U5BU5D_t119* L_0 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2))-(int32_t)1));
		goto IL_00a9;
	}

IL_0010:
	{
		LinkU5BU5D_t6507* L_3 = (LinkU5BU5D_t6507*)(__this->___links_5);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		V_1 = (Link_t6508 )(*(Link_t6508 *)((Link_t6508 *)(Link_t6508 *)SZArrayLdElema(L_3, L_4)));
		int32_t L_5 = (int32_t)((&V_1)->___HashCode_0);
		int32_t L_6 = ___hash;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_7 = ___hash;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)-2147483648)))))
		{
			goto IL_0082;
		}
	}
	{
		Object_t * L_8 = ___item;
		Object_t * L_9 = L_8;
		if (!((Object_t *)L_9))
		{
			goto IL_005b;
		}
	}
	{
		ObjectU5BU5D_t21* L_10 = (ObjectU5BU5D_t21*)(__this->___slots_6);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		Object_t * L_13 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12));
		if (((Object_t *)L_13))
		{
			goto IL_0082;
		}
	}

IL_005b:
	{
		Object_t * L_14 = ___item;
		Object_t * L_15 = L_14;
		if (((Object_t *)L_15))
		{
			goto IL_007c;
		}
	}
	{
		ObjectU5BU5D_t21* L_16 = (ObjectU5BU5D_t21*)(__this->___slots_6);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18));
		G_B8_0 = ((((Object_t*)(Object_t *)NULL) == ((Object_t*)(Object_t *)((Object_t *)L_19)))? 1 : 0);
		goto IL_007d;
	}

IL_007c:
	{
		G_B8_0 = 0;
	}

IL_007d:
	{
		G_B10_0 = G_B8_0;
		goto IL_009a;
	}

IL_0082:
	{
		Object_t* L_20 = (Object_t*)(__this->___comparer_11);
		Object_t * L_21 = ___item;
		ObjectU5BU5D_t21* L_22 = (ObjectU5BU5D_t21*)(__this->___slots_6);
		int32_t L_23 = V_0;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		NullCheck((Object_t*)L_20);
		bool L_25 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(!0,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), (Object_t*)L_20, (Object_t *)L_21, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_22, L_24)));
		G_B10_0 = ((int32_t)(L_25));
	}

IL_009a:
	{
		if (!G_B10_0)
		{
			goto IL_00a1;
		}
	}
	{
		return 1;
	}

IL_00a1:
	{
		int32_t L_26 = (int32_t)((&V_1)->___Next_1);
		V_0 = (int32_t)L_26;
	}

IL_00a9:
	{
		int32_t L_27 = V_0;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[])
extern "C" void HashSet_1_CopyTo_m28865_gshared (HashSet_1_t2048 * __this, ObjectU5BU5D_t21* ___array, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		int32_t L_1 = (int32_t)(__this->___count_9);
		NullCheck((HashSet_1_t2048 *)__this);
		(( void (*) (HashSet_1_t2048 *, ObjectU5BU5D_t21*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((HashSet_1_t2048 *)__this, (ObjectU5BU5D_t21*)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m28867_gshared (HashSet_1_t2048 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->___count_9);
		NullCheck((HashSet_1_t2048 *)__this);
		(( void (*) (HashSet_1_t2048 *, ObjectU5BU5D_t21*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((HashSet_1_t2048 *)__this, (ObjectU5BU5D_t21*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t731_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void HashSet_1_CopyTo_m28869_gshared (HashSet_1_t2048 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2865);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(318);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t731 * L_1 = (ArgumentNullException_t731 *)il2cpp_codegen_object_new (ArgumentNullException_t731_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3259(L_1, (String_t*)(String_t*) &_stringLiteral2015, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t1703 * L_3 = (ArgumentOutOfRangeException_t1703 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1703_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m10469(L_3, (String_t*)(String_t*) &_stringLiteral2016, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index;
		ObjectU5BU5D_t21* L_5 = ___array;
		NullCheck(L_5);
		if ((((int32_t)L_4) <= ((int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		ArgumentException_t725 * L_6 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_6, (String_t*)(String_t*) &_stringLiteral2017, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0037:
	{
		ObjectU5BU5D_t21* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = ___index;
		int32_t L_9 = ___count;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))-(int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_004d;
		}
	}
	{
		ArgumentException_t725 * L_10 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3235(L_10, (String_t*)(String_t*) &_stringLiteral2018, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_004d:
	{
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		goto IL_007e;
	}

IL_0056:
	{
		int32_t L_11 = V_0;
		NullCheck((HashSet_1_t2048 *)__this);
		int32_t L_12 = (( int32_t (*) (HashSet_1_t2048 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)((HashSet_1_t2048 *)__this, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		ObjectU5BU5D_t21* L_13 = ___array;
		int32_t L_14 = ___index;
		int32_t L_15 = (int32_t)L_14;
		___index = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
		ObjectU5BU5D_t21* L_16 = (ObjectU5BU5D_t21*)(__this->___slots_6);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18));
	}

IL_007a:
	{
		int32_t L_19 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_007e:
	{
		int32_t L_20 = V_0;
		int32_t L_21 = (int32_t)(__this->___touched_7);
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_22 = V_1;
		int32_t L_23 = ___count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0056;
		}
	}

IL_0091:
	{
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern TypeInfo* PrimeHelper_t6511_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern "C" void HashSet_1_Resize_m28871_gshared (HashSet_1_t2048 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PrimeHelper_t6511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12949);
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t119* V_1 = {0};
	LinkU5BU5D_t6507* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t21* V_7 = {0};
	int32_t V_8 = 0;
	{
		Int32U5BU5D_t119* L_0 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(PrimeHelper_t6511_il2cpp_TypeInfo_var);
		int32_t L_1 = (( int32_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t119*)((Int32U5BU5D_t119*)SZArrayNew(Int32U5BU5D_t119_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t6507*)((LinkU5BU5D_t6507*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), L_3));
		V_3 = (int32_t)0;
		goto IL_00a6;
	}

IL_0027:
	{
		Int32U5BU5D_t119* L_4 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_009a;
	}

IL_0038:
	{
		LinkU5BU5D_t6507* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		ObjectU5BU5D_t21* L_9 = (ObjectU5BU5D_t21*)(__this->___slots_6);
		int32_t L_10 = V_4;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((HashSet_1_t2048 *)__this);
		int32_t L_12 = (( int32_t (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((HashSet_1_t2048 *)__this, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_13 = (int32_t)L_12;
		V_8 = (int32_t)L_13;
		((Link_t6508 *)(Link_t6508 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_13;
		int32_t L_14 = V_8;
		V_5 = (int32_t)L_14;
		int32_t L_15 = V_5;
		int32_t L_16 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)2147483647)))%(int32_t)L_16));
		LinkU5BU5D_t6507* L_17 = V_2;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Int32U5BU5D_t119* L_19 = V_1;
		int32_t L_20 = V_6;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		((Link_t6508 *)(Link_t6508 *)SZArrayLdElema(L_17, L_18))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_19, L_21))-(int32_t)1));
		Int32U5BU5D_t119* L_22 = V_1;
		int32_t L_23 = V_6;
		int32_t L_24 = V_4;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_22, L_23)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		LinkU5BU5D_t6507* L_25 = (LinkU5BU5D_t6507*)(__this->___links_5);
		int32_t L_26 = V_4;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (int32_t)(((Link_t6508 *)(Link_t6508 *)SZArrayLdElema(L_25, L_26))->___Next_1);
		V_4 = (int32_t)L_27;
	}

IL_009a:
	{
		int32_t L_28 = V_4;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_29 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00a6:
	{
		int32_t L_30 = V_3;
		Int32U5BU5D_t119* L_31 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)(((Array_t *)L_31)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t119* L_32 = V_1;
		__this->___table_4 = L_32;
		LinkU5BU5D_t6507* L_33 = V_2;
		__this->___links_5 = L_33;
		int32_t L_34 = V_0;
		V_7 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_34));
		ObjectU5BU5D_t21* L_35 = (ObjectU5BU5D_t21*)(__this->___slots_6);
		ObjectU5BU5D_t21* L_36 = V_7;
		int32_t L_37 = (int32_t)(__this->___touched_7);
		Array_Copy_m13285(NULL /*static, unused*/, (Array_t *)(Array_t *)L_35, (int32_t)0, (Array_t *)(Array_t *)L_36, (int32_t)0, (int32_t)L_37, /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_38 = V_7;
		__this->___slots_6 = L_38;
		int32_t L_39 = V_0;
		__this->___threshold_10 = (((int32_t)((float)((float)(((float)L_39))*(float)(0.9f)))));
		return;
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m28873_gshared (HashSet_1_t2048 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		LinkU5BU5D_t6507* L_0 = (LinkU5BU5D_t6507*)(__this->___links_5);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t6508 *)(Link_t6508 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		return ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648)));
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m28875_gshared (HashSet_1_t2048 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___item;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0011;
		}
	}
	{
		return ((int32_t)-2147483648);
	}

IL_0011:
	{
		Object_t* L_2 = (Object_t*)(__this->___comparer_11);
		Object_t * L_3 = ___item;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), (Object_t*)L_2, (Object_t *)L_3);
		return ((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m28876_gshared (HashSet_1_t2048 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___item;
		NullCheck((HashSet_1_t2048 *)__this);
		int32_t L_1 = (( int32_t (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((HashSet_1_t2048 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t119* L_3 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		Object_t * L_6 = ___item;
		NullCheck((HashSet_1_t2048 *)__this);
		bool L_7 = (( bool (*) (HashSet_1_t2048 *, int32_t, int32_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((HashSet_1_t2048 *)__this, (int32_t)L_4, (int32_t)L_5, (Object_t *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		int32_t L_8 = (int32_t)(__this->___count_9);
		int32_t L_9 = (int32_t)((int32_t)((int32_t)L_8+(int32_t)1));
		V_3 = (int32_t)L_9;
		__this->___count_9 = L_9;
		int32_t L_10 = V_3;
		int32_t L_11 = (int32_t)(__this->___threshold_10);
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_005c;
		}
	}
	{
		NullCheck((HashSet_1_t2048 *)__this);
		(( void (*) (HashSet_1_t2048 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)((HashSet_1_t2048 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		int32_t L_12 = V_0;
		Int32U5BU5D_t119* L_13 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_13);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_13)->max_length)))));
	}

IL_005c:
	{
		int32_t L_14 = (int32_t)(__this->___empty_slot_8);
		V_2 = (int32_t)L_14;
		int32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)(-1)))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_16 = (int32_t)(__this->___touched_7);
		int32_t L_17 = (int32_t)L_16;
		V_3 = (int32_t)L_17;
		__this->___touched_7 = ((int32_t)((int32_t)L_17+(int32_t)1));
		int32_t L_18 = V_3;
		V_2 = (int32_t)L_18;
		goto IL_0098;
	}

IL_0081:
	{
		LinkU5BU5D_t6507* L_19 = (LinkU5BU5D_t6507*)(__this->___links_5);
		int32_t L_20 = V_2;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)(((Link_t6508 *)(Link_t6508 *)SZArrayLdElema(L_19, L_20))->___Next_1);
		__this->___empty_slot_8 = L_21;
	}

IL_0098:
	{
		LinkU5BU5D_t6507* L_22 = (LinkU5BU5D_t6507*)(__this->___links_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = V_0;
		((Link_t6508 *)(Link_t6508 *)SZArrayLdElema(L_22, L_23))->___HashCode_0 = L_24;
		LinkU5BU5D_t6507* L_25 = (LinkU5BU5D_t6507*)(__this->___links_5);
		int32_t L_26 = V_2;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		Int32U5BU5D_t119* L_27 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_28 = V_1;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		int32_t L_29 = L_28;
		((Link_t6508 *)(Link_t6508 *)SZArrayLdElema(L_25, L_26))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_27, L_29))-(int32_t)1));
		Int32U5BU5D_t119* L_30 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_31 = V_1;
		int32_t L_32 = V_2;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_32+(int32_t)1));
		ObjectU5BU5D_t21* L_33 = (ObjectU5BU5D_t21*)(__this->___slots_6);
		int32_t L_34 = V_2;
		Object_t * L_35 = ___item;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, L_34)) = (Object_t *)L_35;
		int32_t L_36 = (int32_t)(__this->___generation_13);
		__this->___generation_13 = ((int32_t)((int32_t)L_36+(int32_t)1));
		return 1;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m28878_gshared (HashSet_1_t2048 * __this, const MethodInfo* method)
{
	{
		__this->___count_9 = 0;
		Int32U5BU5D_t119* L_0 = (Int32U5BU5D_t119*)(__this->___table_4);
		Int32U5BU5D_t119* L_1 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_2 = (ObjectU5BU5D_t21*)(__this->___slots_6);
		ObjectU5BU5D_t21* L_3 = (ObjectU5BU5D_t21*)(__this->___slots_6);
		NullCheck(L_3);
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t6507* L_4 = (LinkU5BU5D_t6507*)(__this->___links_5);
		LinkU5BU5D_t6507* L_5 = (LinkU5BU5D_t6507*)(__this->___links_5);
		NullCheck(L_5);
		Array_Clear_m15320(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		__this->___empty_slot_8 = (-1);
		__this->___touched_7 = 0;
		int32_t L_6 = (int32_t)(__this->___generation_13);
		__this->___generation_13 = ((int32_t)((int32_t)L_6+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m28880_gshared (HashSet_1_t2048 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___item;
		NullCheck((HashSet_1_t2048 *)__this);
		int32_t L_1 = (( int32_t (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((HashSet_1_t2048 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t119* L_3 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		Object_t * L_6 = ___item;
		NullCheck((HashSet_1_t2048 *)__this);
		bool L_7 = (( bool (*) (HashSet_1_t2048 *, int32_t, int32_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((HashSet_1_t2048 *)__this, (int32_t)L_4, (int32_t)L_5, (Object_t *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return L_7;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" bool HashSet_1_Remove_m28882_gshared (HashSet_1_t2048 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Link_t6508  V_4 = {0};
	Object_t * V_5 = {0};
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Object_t * L_0 = ___item;
		NullCheck((HashSet_1_t2048 *)__this);
		int32_t L_1 = (( int32_t (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((HashSet_1_t2048 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t119* L_3 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
		Int32U5BU5D_t119* L_4 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		int32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_002d;
		}
	}
	{
		return 0;
	}

IL_002d:
	{
		V_3 = (int32_t)(-1);
	}

IL_002f:
	{
		LinkU5BU5D_t6507* L_8 = (LinkU5BU5D_t6507*)(__this->___links_5);
		int32_t L_9 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		V_4 = (Link_t6508 )(*(Link_t6508 *)((Link_t6508 *)(Link_t6508 *)SZArrayLdElema(L_8, L_9)));
		int32_t L_10 = (int32_t)((&V_4)->___HashCode_0);
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-2147483648)))))
		{
			goto IL_00a2;
		}
	}
	{
		Object_t * L_13 = ___item;
		Object_t * L_14 = L_13;
		if (!((Object_t *)L_14))
		{
			goto IL_007b;
		}
	}
	{
		ObjectU5BU5D_t21* L_15 = (ObjectU5BU5D_t21*)(__this->___slots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17));
		if (((Object_t *)L_18))
		{
			goto IL_00a2;
		}
	}

IL_007b:
	{
		Object_t * L_19 = ___item;
		Object_t * L_20 = L_19;
		if (((Object_t *)L_20))
		{
			goto IL_009c;
		}
	}
	{
		ObjectU5BU5D_t21* L_21 = (ObjectU5BU5D_t21*)(__this->___slots_6);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		Object_t * L_24 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23));
		G_B10_0 = ((((Object_t*)(Object_t *)NULL) == ((Object_t*)(Object_t *)((Object_t *)L_24)))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B10_0 = 0;
	}

IL_009d:
	{
		G_B12_0 = G_B10_0;
		goto IL_00ba;
	}

IL_00a2:
	{
		Object_t* L_25 = (Object_t*)(__this->___comparer_11);
		ObjectU5BU5D_t21* L_26 = (ObjectU5BU5D_t21*)(__this->___slots_6);
		int32_t L_27 = V_2;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		Object_t * L_29 = ___item;
		NullCheck((Object_t*)L_25);
		bool L_30 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(!0,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), (Object_t*)L_25, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_26, L_28)), (Object_t *)L_29);
		G_B12_0 = ((int32_t)(L_30));
	}

IL_00ba:
	{
		if (!G_B12_0)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_00d5;
	}

IL_00c4:
	{
		int32_t L_31 = V_2;
		V_3 = (int32_t)L_31;
		int32_t L_32 = (int32_t)((&V_4)->___Next_1);
		V_2 = (int32_t)L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}

IL_00d5:
	{
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00de;
		}
	}
	{
		return 0;
	}

IL_00de:
	{
		int32_t L_35 = (int32_t)(__this->___count_9);
		__this->___count_9 = ((int32_t)((int32_t)L_35-(int32_t)1));
		int32_t L_36 = V_3;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_0113;
		}
	}
	{
		Int32U5BU5D_t119* L_37 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_38 = V_1;
		LinkU5BU5D_t6507* L_39 = (LinkU5BU5D_t6507*)(__this->___links_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(((Link_t6508 *)(Link_t6508 *)SZArrayLdElema(L_39, L_40))->___Next_1);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_37, L_38)) = (int32_t)((int32_t)((int32_t)L_41+(int32_t)1));
		goto IL_0135;
	}

IL_0113:
	{
		LinkU5BU5D_t6507* L_42 = (LinkU5BU5D_t6507*)(__this->___links_5);
		int32_t L_43 = V_3;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		LinkU5BU5D_t6507* L_44 = (LinkU5BU5D_t6507*)(__this->___links_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = (int32_t)(((Link_t6508 *)(Link_t6508 *)SZArrayLdElema(L_44, L_45))->___Next_1);
		((Link_t6508 *)(Link_t6508 *)SZArrayLdElema(L_42, L_43))->___Next_1 = L_46;
	}

IL_0135:
	{
		LinkU5BU5D_t6507* L_47 = (LinkU5BU5D_t6507*)(__this->___links_5);
		int32_t L_48 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		int32_t L_49 = (int32_t)(__this->___empty_slot_8);
		((Link_t6508 *)(Link_t6508 *)SZArrayLdElema(L_47, L_48))->___Next_1 = L_49;
		int32_t L_50 = V_2;
		__this->___empty_slot_8 = L_50;
		LinkU5BU5D_t6507* L_51 = (LinkU5BU5D_t6507*)(__this->___links_5);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		((Link_t6508 *)(Link_t6508 *)SZArrayLdElema(L_51, L_52))->___HashCode_0 = 0;
		ObjectU5BU5D_t21* L_53 = (ObjectU5BU5D_t21*)(__this->___slots_6);
		int32_t L_54 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_5));
		Object_t * L_55 = V_5;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		int32_t L_56 = (int32_t)(__this->___generation_13);
		__this->___generation_13 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return 1;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotImplementedException_t774_il2cpp_TypeInfo_var;
extern "C" void HashSet_1_GetObjectData_m28884_gshared (HashSet_1_t2048 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t774_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t774 * L_0 = (NotImplementedException_t774 *)il2cpp_codegen_object_new (NotImplementedException_t774_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8961(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern TypeInfo* NotImplementedException_t774_il2cpp_TypeInfo_var;
extern "C" void HashSet_1_OnDeserialization_m28886_gshared (HashSet_1_t2048 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t774_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t3296 * L_0 = (SerializationInfo_t3296 *)(__this->___si_12);
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
		NotImplementedException_t774 * L_1 = (NotImplementedException_t774 *)il2cpp_codegen_object_new (NotImplementedException_t774_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8961(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6510  HashSet_1_GetEnumerator_m28888_gshared (HashSet_1_t2048 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6510  L_0 = {0};
		(( void (*) (Enumerator_t6510 *, HashSet_1_t2048 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(&L_0, (HashSet_1_t2048 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_46.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_46MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.HashSet`1/Link<System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.HashSet`1/Link<System.Object>>(System.Int32)
extern "C" Link_t6508  Array_InternalArray__get_Item_TisLink_t6508_m73846_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisLink_t6508_m73846(__this, p0, method) (( Link_t6508  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisLink_t6508_m73846_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m28889_gshared (InternalEnumerator_1_t6509 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28890_gshared (InternalEnumerator_1_t6509 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28891_gshared (InternalEnumerator_1_t6509 * __this, const MethodInfo* method)
{
	{
		Link_t6508  L_0 = (( Link_t6508  (*) (InternalEnumerator_1_t6509 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t6509 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Link_t6508  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m28892_gshared (InternalEnumerator_1_t6509 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m28893_gshared (InternalEnumerator_1_t6509 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m13206((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" Link_t6508  InternalEnumerator_1_get_Current_m28894_gshared (InternalEnumerator_1_t6509 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4617, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1668 * L_3 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_3, (String_t*)(String_t*) &_stringLiteral4618, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m13206((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Link_t6508  L_8 = (( Link_t6508  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.HashSet`1/Link<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Link_genMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.HashSet`1<T>)
extern "C" void Enumerator__ctor_m28895_gshared (Enumerator_t6510 * __this, HashSet_1_t2048 * ___hashset, const MethodInfo* method)
{
	{
		HashSet_1_t2048 * L_0 = ___hashset;
		__this->___hashset_0 = L_0;
		HashSet_1_t2048 * L_1 = ___hashset;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_13);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.HashSet`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m28896_gshared (Enumerator_t6510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t6510 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t6510 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral2019, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001d:
	{
		Object_t * L_2 = (Object_t *)(__this->___current_3);
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m28897_gshared (Enumerator_t6510 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t6510 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t6510 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___next_1 = 0;
		return;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m28898_gshared (Enumerator_t6510 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t6510 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t6510 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		goto IL_0055;
	}

IL_0019:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		HashSet_1_t2048 * L_4 = (HashSet_1_t2048 *)(__this->___hashset_0);
		int32_t L_5 = V_0;
		NullCheck((HashSet_1_t2048 *)L_4);
		int32_t L_6 = (( int32_t (*) (HashSet_1_t2048 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((HashSet_1_t2048 *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		HashSet_1_t2048 * L_7 = (HashSet_1_t2048 *)(__this->___hashset_0);
		NullCheck(L_7);
		ObjectU5BU5D_t21* L_8 = (ObjectU5BU5D_t21*)(L_7->___slots_6);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		__this->___current_3 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_8, L_10));
		return 1;
	}

IL_0055:
	{
		int32_t L_11 = (int32_t)(__this->___next_1);
		HashSet_1_t2048 * L_12 = (HashSet_1_t2048 *)(__this->___hashset_0);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)(L_12->___touched_7);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0019;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m28899_gshared (Enumerator_t6510 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___current_3);
		return L_0;
	}
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m28900_gshared (Enumerator_t6510 * __this, const MethodInfo* method)
{
	{
		__this->___hashset_0 = (HashSet_1_t2048 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::CheckState()
extern TypeInfo* ObjectDisposedException_t3310_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" void Enumerator_CheckState_m28901_gshared (Enumerator_t6510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5695);
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		HashSet_1_t2048 * L_0 = (HashSet_1_t2048 *)(__this->___hashset_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t3310 * L_1 = (ObjectDisposedException_t3310 *)il2cpp_codegen_object_new (ObjectDisposedException_t3310_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m10475(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		HashSet_1_t2048 * L_2 = (HashSet_1_t2048 *)(__this->___hashset_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_13);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t1668 * L_5 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_5, (String_t*)(String_t*) &_stringLiteral2020, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Collections.Generic.HashSet`1/PrimeHelper<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_PrimeHelper.h"
#ifndef _MSC_VER
#else
#endif

// <PrivateImplementationDetails>
#include "System_Core_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$136
#include "System_Core_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// <PrivateImplementationDetails>
#include "System_Core_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"


// System.Void System.Collections.Generic.HashSet`1/PrimeHelper<System.Object>::.cctor()
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t3292____U24U24fieldU2D0_0_FieldInfo_var;
extern "C" void PrimeHelper__cctor_m28902_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		U3CPrivateImplementationDetailsU3E_t3292____U24U24fieldU2D0_0_FieldInfo_var = il2cpp_codegen_field_info_from_index(6345, 0);
		s_Il2CppMethodIntialized = true;
	}
	{
		Int32U5BU5D_t119* L_0 = (Int32U5BU5D_t119*)((Int32U5BU5D_t119*)SZArrayNew(Int32U5BU5D_t119_il2cpp_TypeInfo_var, ((int32_t)34)));
		RuntimeHelpers_InitializeArray_m2892(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (RuntimeFieldHandle_t5159 )LoadFieldToken(U3CPrivateImplementationDetailsU3E_t3292____U24U24fieldU2D0_0_FieldInfo_var), /*hidden argument*/NULL);
		((PrimeHelper_t6511_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___primes_table_0 = L_0;
		return;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1/PrimeHelper<System.Object>::TestPrime(System.Int32)
extern "C" bool PrimeHelper_TestPrime_m28903_gshared (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___x;
		if (!((int32_t)((int32_t)L_0&(int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = ___x;
		double L_2 = sqrt((double)(((double)L_1)));
		V_0 = (int32_t)(((int32_t)L_2));
		V_1 = (int32_t)3;
		goto IL_0026;
	}

IL_0018:
	{
		int32_t L_3 = ___x;
		int32_t L_4 = V_1;
		if (((int32_t)((int32_t)L_3%(int32_t)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}

IL_0022:
	{
		int32_t L_5 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)2));
	}

IL_0026:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_002f:
	{
		int32_t L_8 = ___x;
		return ((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.HashSet`1/PrimeHelper<System.Object>::CalcPrime(System.Int32)
extern TypeInfo* PrimeHelper_t6511_il2cpp_TypeInfo_var;
extern "C" int32_t PrimeHelper_CalcPrime_m28904_gshared (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PrimeHelper_t6511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12949);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___x;
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)-2)))-(int32_t)1));
		goto IL_001d;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PrimeHelper_t6511_il2cpp_TypeInfo_var);
		bool L_2 = (( bool (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)2));
	}

IL_001d:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)2147483647))))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_6 = ___x;
		return L_6;
	}
}
// System.Int32 System.Collections.Generic.HashSet`1/PrimeHelper<System.Object>::ToPrime(System.Int32)
extern TypeInfo* PrimeHelper_t6511_il2cpp_TypeInfo_var;
extern "C" int32_t PrimeHelper_ToPrime_m28905_gshared (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PrimeHelper_t6511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12949);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0020;
	}

IL_0007:
	{
		int32_t L_0 = ___x;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Int32U5BU5D_t119* L_1 = ((PrimeHelper_t6511_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___primes_table_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		if ((((int32_t)L_0) > ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3)))))
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Int32U5BU5D_t119* L_4 = ((PrimeHelper_t6511_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___primes_table_0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6));
	}

IL_001c:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Int32U5BU5D_t119* L_9 = ((PrimeHelper_t6511_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___primes_table_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_10 = ___x;
		IL2CPP_RUNTIME_CLASS_INIT(PrimeHelper_t6511_il2cpp_TypeInfo_var);
		int32_t L_11 = (( int32_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_11;
	}
}
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<Parse.ParseGeoPoint>::get_Current()
// System.Array/InternalEnumerator`1<Parse.ParseGeoPoint>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_47.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<Parse.ParseGeoPoint>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_47MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Parse.ParseGeoPoint>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Parse.ParseGeoPoint>(System.Int32)
extern "C" ParseGeoPoint_t935  Array_InternalArray__get_Item_TisParseGeoPoint_t935_m73857_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisParseGeoPoint_t935_m73857(__this, p0, method) (( ParseGeoPoint_t935  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisParseGeoPoint_t935_m73857_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<Parse.ParseGeoPoint>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m29020_gshared (InternalEnumerator_1_t6520 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m29021_gshared (InternalEnumerator_1_t6520 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m29022_gshared (InternalEnumerator_1_t6520 * __this, const MethodInfo* method)
{
	{
		ParseGeoPoint_t935  L_0 = (( ParseGeoPoint_t935  (*) (InternalEnumerator_1_t6520 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t6520 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ParseGeoPoint_t935  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Parse.ParseGeoPoint>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m29023_gshared (InternalEnumerator_1_t6520 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Parse.ParseGeoPoint>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m29024_gshared (InternalEnumerator_1_t6520 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m13206((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Parse.ParseGeoPoint>::get_Current()
extern TypeInfo* InvalidOperationException_t1668_il2cpp_TypeInfo_var;
extern "C" ParseGeoPoint_t935  InternalEnumerator_1_get_Current_m29025_gshared (InternalEnumerator_1_t6520 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1668 * L_1 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_1, (String_t*)(String_t*) &_stringLiteral4617, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1668 * L_3 = (InvalidOperationException_t1668 *)il2cpp_codegen_object_new (InvalidOperationException_t1668_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m8910(L_3, (String_t*)(String_t*) &_stringLiteral4618, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m13206((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		ParseGeoPoint_t935  L_8 = (( ParseGeoPoint_t935  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Parse.ParseGeoPoint>::GetEnumerator()
#ifdef __clang__
#pragma clang diagnostic pop
#endif
