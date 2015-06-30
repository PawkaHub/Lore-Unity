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

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Boolean System.IEquatable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T)
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_9.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_9MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_9MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern TypeInfo* EqualityComparer_1_t5607_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m33618_gshared (DefaultComparer_t5608 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12003);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t5607 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5607_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t5607 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t5607 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m33619_gshared (DefaultComparer_t5608 * __this, KeyValuePair_2_t1591  ___obj, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1591  L_0 = ___obj;
		KeyValuePair_2_t1591  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m33620_gshared (DefaultComparer_t5608 * __this, KeyValuePair_2_t1591  ___x, KeyValuePair_2_t1591  ___y, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1591  L_0 = ___x;
		KeyValuePair_2_t1591  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		KeyValuePair_2_t1591  L_3 = ___y;
		KeyValuePair_2_t1591  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		KeyValuePair_2_t1591  L_6 = ___y;
		KeyValuePair_2_t1591  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Predicate_1_gen_65.h"
#ifndef _MSC_VER
#else
#endif
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Predicate_1_gen_65MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m33621_gshared (Predicate_1_t5609 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m33622_gshared (Predicate_1_t5609 * __this, KeyValuePair_2_t1591  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m33622((Predicate_1_t5609 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, KeyValuePair_2_t1591  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t1591  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t1591_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m33623_gshared (Predicate_1_t5609 * __this, KeyValuePair_2_t1591  ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t1591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6700);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(KeyValuePair_2_t1591_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m33624_gshared (Predicate_1_t5609 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_7.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_7MethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_7.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_7MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Comparer_1__ctor_m33625_gshared (Comparer_1_t5610 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern const Il2CppType* GenericComparer_1_t4415_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t562_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m33626_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t4415_0_0_0_var = il2cpp_codegen_type_from_index(9067);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		TypeU5BU5D_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(GenericComparer_1_t4415_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t562* L_4 = (TypeU5BU5D_t562*)((TypeU5BU5D_t562*)SZArrayNew(TypeU5BU5D_t562_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t562* >::Invoke(93 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t562*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m3233(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t5610_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t5610 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t5611 * L_8 = (DefaultComparer_t5611 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t5611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t5610_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m33627_gshared (Comparer_1_t5610 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
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
		NullCheck((Comparer_1_t5610 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, KeyValuePair_2_t1591 , KeyValuePair_2_t1591  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Compare(T,T) */, (Comparer_1_t5610 *)__this, (KeyValuePair_2_t1591 )((*(KeyValuePair_2_t1591 *)((KeyValuePair_2_t1591 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (KeyValuePair_2_t1591 )((*(KeyValuePair_2_t1591 *)((KeyValuePair_2_t1591 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t1126 * L_8 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11580(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Default()
extern "C" Comparer_1_t5610 * Comparer_1_get_Default_m33628_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t5610 * L_0 = ((Comparer_1_t5610_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_String.h"


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern TypeInfo* Comparer_1_t5610_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m33629_gshared (DefaultComparer_t5611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t5610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12008);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t5610 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t5610_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t5610 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t5610 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Compare(T,T)
extern TypeInfo* IComparable_t43_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m33630_gshared (DefaultComparer_t5611 * __this, KeyValuePair_2_t1591  ___x, KeyValuePair_2_t1591  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		KeyValuePair_2_t1591  L_0 = ___x;
		KeyValuePair_2_t1591  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		KeyValuePair_2_t1591  L_3 = ___y;
		KeyValuePair_2_t1591  L_4 = L_3;
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
		KeyValuePair_2_t1591  L_6 = ___y;
		KeyValuePair_2_t1591  L_7 = L_6;
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
		KeyValuePair_2_t1591  L_9 = ___x;
		KeyValuePair_2_t1591  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		KeyValuePair_2_t1591  L_12 = ___x;
		KeyValuePair_2_t1591  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		KeyValuePair_2_t1591  L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t1591  >::Invoke(0 /* System.Int32 System.IComparable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (KeyValuePair_2_t1591 )L_15);
		return L_16;
	}

IL_003e:
	{
		KeyValuePair_2_t1591  L_17 = ___x;
		KeyValuePair_2_t1591  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t43_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		KeyValuePair_2_t1591  L_20 = ___x;
		KeyValuePair_2_t1591  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		KeyValuePair_2_t1591  L_23 = ___y;
		KeyValuePair_2_t1591  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck((Object_t *)((Object_t *)Castclass(L_22, IComparable_t43_il2cpp_TypeInfo_var)));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t43_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_22, IComparable_t43_il2cpp_TypeInfo_var)), (Object_t *)L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t1126 * L_27 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_27, (String_t*)(String_t*) &_stringLiteral4525, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Comparison_1_gen_67.h"
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Comparison_1_gen_67MethodDeclarations.h"



// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m33631_gshared (Comparison_1_t5612 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m33632_gshared (Comparison_1_t5612 * __this, KeyValuePair_2_t1591  ___x, KeyValuePair_2_t1591  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m33632((Comparison_1_t5612 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, KeyValuePair_2_t1591  ___x, KeyValuePair_2_t1591  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t1591  ___x, KeyValuePair_2_t1591  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t1591_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m33633_gshared (Comparison_1_t5612 * __this, KeyValuePair_2_t1591  ___x, KeyValuePair_2_t1591  ___y, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t1591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6700);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(KeyValuePair_2_t1591_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(KeyValuePair_2_t1591_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m33634_gshared (Comparison_1_t5612 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_U3CGe.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_U3CGeMethodDeclarations.h"

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_gen.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4MethodDeclarations.h"
// Parse.ParseClient
#include "Parse_Unity_Parse_ParseClientMethodDeclarations.h"
struct ParseClient_t1435;
struct Object_t;
// Parse.ParseClient
#include "Parse_Unity_Parse_ParseClient.h"
// Declaration System.Object Parse.ParseClient::ConvertTo<System.Object>(System.Object)
// System.Object Parse.ParseClient::ConvertTo<System.Object>(System.Object)
extern "C" Object_t * ParseClient_ConvertTo_TisObject_t_m7409_gshared (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method);
#define ParseClient_ConvertTo_TisObject_t_m7409(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))ParseClient_ConvertTo_TisObject_t_m7409_gshared)(__this /* static, unused */, ___value, method)


// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>::MoveNext()
extern TypeInfo* ParseClient_t1435_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern "C" bool U3CGetEnumeratorU3Ed__4_MoveNext_m33741_gshared (U3CGetEnumeratorU3Ed__4_t5619 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1435_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3090);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	KeyValuePair_2_t1547  V_2 = {0};
	KeyValuePair_2_t1547  V_3 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
			V_1 = (int32_t)L_0;
			int32_t L_1 = V_1;
			if (L_1 == 0)
			{
				goto IL_001e;
			}
			if (L_1 == 1)
			{
				goto IL_00b0;
			}
			if (L_1 == 2)
			{
				goto IL_0096;
			}
		}

IL_0019:
		{
			goto IL_00b0;
		}

IL_001e:
		{
			__this->___U3CU3E1__state_1 = (-1);
			FlexibleDictionaryWrapper_2_t5596 * L_2 = (FlexibleDictionaryWrapper_2_t5596 *)(__this->___U3CU3E4__this_2);
			NullCheck(L_2);
			Object_t* L_3 = (Object_t*)(L_2->___toWrap_0);
			NullCheck((Object_t*)L_3);
			Object_t* L_4 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), (Object_t*)L_3);
			__this->___U3CU3E7__wrap6_4 = L_4;
			__this->___U3CU3E1__state_1 = 1;
			goto IL_009d;
		}

IL_0044:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU3E7__wrap6_4);
			NullCheck((Object_t*)L_5);
			KeyValuePair_2_t1547  L_6 = (KeyValuePair_2_t1547 )InterfaceFuncInvoker0< KeyValuePair_2_t1547  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (Object_t*)L_5);
			__this->___U3CpairU3E5__5_3 = L_6;
			KeyValuePair_2_t1547  L_7 = (KeyValuePair_2_t1547 )(__this->___U3CpairU3E5__5_3);
			V_2 = (KeyValuePair_2_t1547 )L_7;
			String_t* L_8 = (( String_t* (*) (KeyValuePair_2_t1547 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t1547 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
			KeyValuePair_2_t1547  L_9 = (KeyValuePair_2_t1547 )(__this->___U3CpairU3E5__5_3);
			V_3 = (KeyValuePair_2_t1547 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t1547 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t1547 *)(&V_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			Object_t * L_11 = L_10;
			IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1435_il2cpp_TypeInfo_var);
			Object_t * L_12 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_11), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			KeyValuePair_2_t1547  L_13 = {0};
			(( void (*) (KeyValuePair_2_t1547 *, String_t*, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(&L_13, (String_t*)L_8, (Object_t *)((Object_t *)Castclass(L_12, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
			__this->___U3CU3E2__current_0 = L_13;
			__this->___U3CU3E1__state_1 = 2;
			V_0 = (bool)1;
			goto IL_00bb;
		}

IL_0096:
		{
			__this->___U3CU3E1__state_1 = 1;
		}

IL_009d:
		{
			Object_t* L_14 = (Object_t*)(__this->___U3CU3E7__wrap6_4);
			NullCheck((Object_t *)L_14);
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_14);
			if (L_15)
			{
				goto IL_0044;
			}
		}

IL_00aa:
		{
			NullCheck((U3CGetEnumeratorU3Ed__4_t5619 *)__this);
			(( void (*) (U3CGetEnumeratorU3Ed__4_t5619 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((U3CGetEnumeratorU3Ed__4_t5619 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		}

IL_00b0:
		{
			V_0 = (bool)0;
			goto IL_00bb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FAULT_00b4;
	}

FAULT_00b4:
	{ // begin fault (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__4_t5619 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__4_t5619 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((U3CGetEnumeratorU3Ed__4_t5619 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		IL2CPP_END_FINALLY(180)
	} // end fault
	IL2CPP_CLEANUP(180)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_00bb:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,TOut>>.get_Current()
extern "C" KeyValuePair_2_t1547  U3CGetEnumeratorU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CTOutU3EU3E_get_Current_m33742_gshared (U3CGetEnumeratorU3Ed__4_t5619 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1547  L_0 = (KeyValuePair_2_t1547 )(__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>::System.IDisposable.Dispose()
extern "C" void U3CGetEnumeratorU3Ed__4_System_IDisposable_Dispose_m33743_gshared (U3CGetEnumeratorU3Ed__4_t5619 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0018;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__4_t5619 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__4_t5619 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((U3CGetEnumeratorU3Ed__4_t5619 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x21, IL_0021)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0021:
	{
		return;
	}
}
// System.Object Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__4_System_Collections_IEnumerator_get_Current_m33744_gshared (U3CGetEnumeratorU3Ed__4_t5619 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1547  L_0 = (KeyValuePair_2_t1547 )(__this->___U3CU3E2__current_0);
		KeyValuePair_2_t1547  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return L_2;
	}
}
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void U3CGetEnumeratorU3Ed__4__ctor_m33745_gshared (U3CGetEnumeratorU3Ed__4_t5619 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2/<GetEnumerator>d__4<System.Object,System.Object>::<>m__Finally7()
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally7_m33746_gshared (U3CGetEnumeratorU3Ed__4_t5619 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___U3CU3E1__state_1 = (-1);
		Object_t* L_0 = (Object_t*)(__this->___U3CU3E7__wrap6_4);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_1 = (Object_t*)(__this->___U3CU3E7__wrap6_4);
		NullCheck((Object_t *)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_1);
	}

IL_001a:
	{
		return;
	}
}
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_genMethodDeclarations.h"

// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_8.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume.h"
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_8MethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnumeMethodDeclarations.h"
struct Enumerable_t1134;
struct IEnumerable_1_t1072;
struct Func_2_t1434;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisObject_t_TisObject_t_m7399_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t1434 * p1, const MethodInfo* method);
#define Enumerable_Select_TisObject_t_TisObject_t_m7399(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1434 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m7399_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t1134;
struct List_1_t2;
struct IEnumerable_1_t1072;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" List_1_t2 * Enumerable_ToList_TisObject_t_m7372_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToList_TisObject_t_m7372(__this /* static, unused */, p0, method) (( List_1_t2 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m7372_gshared)(__this /* static, unused */, p0, method)


// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::IndexOf(TOut)
extern TypeInfo* ParseClient_t1435_il2cpp_TypeInfo_var;
extern "C" int32_t FlexibleListWrapper_2_IndexOf_m33747_gshared (FlexibleListWrapper_2_t5620 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1435_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1435_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Insert(System.Int32,TOut)
extern TypeInfo* ParseClient_t1435_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Insert_m33748_gshared (FlexibleListWrapper_2_t5620 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1435_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1435_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Object>::Insert(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (Object_t *)((Object_t *)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::RemoveAt(System.Int32)
extern "C" void FlexibleListWrapper_2_RemoveAt_m33749_gshared (FlexibleListWrapper_2_t5620 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Object>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::get_Item(System.Int32)
extern TypeInfo* ParseClient_t1435_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_get_Item_m33750_gshared (FlexibleListWrapper_2_t5620 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1435_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1435_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::set_Item(System.Int32,TOut)
extern TypeInfo* ParseClient_t1435_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_set_Item_m33751_gshared (FlexibleListWrapper_2_t5620 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1435_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1435_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Object>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (Object_t *)((Object_t *)Castclass(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Add(TOut)
extern TypeInfo* ParseClient_t1435_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Add_m33752_gshared (FlexibleListWrapper_2_t5620 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1435_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1435_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< Object_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::Add(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Clear()
extern "C" void FlexibleListWrapper_2_Clear_m33753_gshared (FlexibleListWrapper_2_t5620 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Contains(TOut)
extern TypeInfo* ParseClient_t1435_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Contains_m33754_gshared (FlexibleListWrapper_2_t5620 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1435_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1435_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::CopyTo(TOut[],System.Int32)
extern "C" void FlexibleListWrapper_2_CopyTo_m33755_gshared (FlexibleListWrapper_2_t5620 * __this, ObjectU5BU5D_t21* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	Object_t* G_B2_0 = {0};
	Object_t* G_B1_0 = {0};
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Func_2_t1434 * L_1 = ((FlexibleListWrapper_2_t5620_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7) };
		Func_2_t1434 * L_3 = (Func_2_t1434 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (Func_2_t1434 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_3, (Object_t *)NULL, (IntPtr_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		((FlexibleListWrapper_2_t5620_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t1434 * L_4 = ((FlexibleListWrapper_2_t5620_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		Object_t* L_5 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1434 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)G_B2_0, (Func_2_t1434 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		List_1_t2 * L_6 = (( List_1_t2 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		ObjectU5BU5D_t21* L_7 = ___array;
		int32_t L_8 = ___arrayIndex;
		NullCheck((List_1_t2 *)L_6);
		VirtActionInvoker2< ObjectU5BU5D_t21*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32) */, (List_1_t2 *)L_6, (ObjectU5BU5D_t21*)L_7, (int32_t)L_8);
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::get_Count()
extern "C" int32_t FlexibleListWrapper_2_get_Count_m33756_gshared (FlexibleListWrapper_2_t5620 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleListWrapper_2_get_IsReadOnly_m33757_gshared (FlexibleListWrapper_2_t5620 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::Remove(TOut)
extern TypeInfo* ParseClient_t1435_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Remove_m33758_gshared (FlexibleListWrapper_2_t5620 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1435_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1435_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return L_4;
	}
}
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleListWrapper_2_GetEnumerator_m33759_gshared (FlexibleListWrapper_2_t5620 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ed__2_t5621 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ed__2_t5621 * L_0 = (U3CGetEnumeratorU3Ed__2_t5621 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		(( void (*) (U3CGetEnumeratorU3Ed__2_t5621 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		V_0 = (U3CGetEnumeratorU3Ed__2_t5621 *)L_0;
		U3CGetEnumeratorU3Ed__2_t5621 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		U3CGetEnumeratorU3Ed__2_t5621 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m33760_gshared (FlexibleListWrapper_2_t5620 * __this, const MethodInfo* method)
{
	{
		NullCheck((FlexibleListWrapper_2_t5620 *)__this);
		Object_t* L_0 = (( Object_t* (*) (FlexibleListWrapper_2_t5620 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((FlexibleListWrapper_2_t5620 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_0;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Object>::<CopyTo>b__0(TIn)
extern TypeInfo* ParseClient_t1435_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_U3CCopyToU3Eb__0_m33761_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1435_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3090);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		Object_t * L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1435_il2cpp_TypeInfo_var);
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>::MoveNext()
extern TypeInfo* IEnumerable_t658_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* ParseClient_t1435_il2cpp_TypeInfo_var;
extern "C" bool U3CGetEnumeratorU3Ed__2_MoveNext_m33762_gshared (U3CGetEnumeratorU3Ed__2_t5621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		ParseClient_t1435_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3090);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
			V_1 = (int32_t)L_0;
			int32_t L_1 = V_1;
			if (L_1 == 0)
			{
				goto IL_001b;
			}
			if (L_1 == 1)
			{
				goto IL_008d;
			}
			if (L_1 == 2)
			{
				goto IL_0073;
			}
		}

IL_0019:
		{
			goto IL_008d;
		}

IL_001b:
		{
			__this->___U3CU3E1__state_1 = (-1);
			FlexibleListWrapper_2_t5620 * L_2 = (FlexibleListWrapper_2_t5620 *)(__this->___U3CU3E4__this_2);
			NullCheck(L_2);
			Object_t* L_3 = (Object_t*)(L_2->___toWrap_0);
			NullCheck((Object_t *)L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t658_il2cpp_TypeInfo_var, (Object_t *)L_3);
			__this->___U3CU3E7__wrap4_4 = L_4;
			__this->___U3CU3E1__state_1 = 1;
			goto IL_007a;
		}

IL_0041:
		{
			Object_t * L_5 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
			NullCheck((Object_t *)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_5);
			__this->___U3CitemU3E5__3_3 = L_6;
			Object_t * L_7 = (Object_t *)(__this->___U3CitemU3E5__3_3);
			IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1435_il2cpp_TypeInfo_var);
			Object_t * L_8 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (Object_t *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			__this->___U3CU3E2__current_0 = ((Object_t *)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
			__this->___U3CU3E1__state_1 = 2;
			V_0 = (bool)1;
			goto IL_0098;
		}

IL_0073:
		{
			__this->___U3CU3E1__state_1 = 1;
		}

IL_007a:
		{
			Object_t * L_9 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
			NullCheck((Object_t *)L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_9);
			if (L_10)
			{
				goto IL_0041;
			}
		}

IL_0087:
		{
			NullCheck((U3CGetEnumeratorU3Ed__2_t5621 *)__this);
			(( void (*) (U3CGetEnumeratorU3Ed__2_t5621 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t5621 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		}

IL_008d:
		{
			V_0 = (bool)0;
			goto IL_0098;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FAULT_0091;
	}

FAULT_0091:
	{ // begin fault (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t5621 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t5621 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((U3CGetEnumeratorU3Ed__2_t5621 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		IL2CPP_END_FINALLY(145)
	} // end fault
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0098:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>::System.Collections.Generic.IEnumerator<TOut>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CTOutU3E_get_Current_m33763_gshared (U3CGetEnumeratorU3Ed__2_t5621 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>::System.IDisposable.Dispose()
extern "C" void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m33764_gshared (U3CGetEnumeratorU3Ed__2_t5621 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0018;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t5621 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t5621 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t5621 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x21, IL_0021)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0021:
	{
		return;
	}
}
// System.Object Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m33765_gshared (U3CGetEnumeratorU3Ed__2_t5621 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void U3CGetEnumeratorU3Ed__2__ctor_m33766_gshared (U3CGetEnumeratorU3Ed__2_t5621 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Object>::<>m__Finally6()
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally6_m33767_gshared (U3CGetEnumeratorU3Ed__2_t5621 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___U3CU3E1__state_1 = (-1);
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
		__this->___U3CU3E7__wrap5_5 = ((Object_t *)IsInst(L_0, IDisposable_t567_il2cpp_TypeInfo_var));
		Object_t * L_1 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_2 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		NullCheck((Object_t *)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_2);
	}

IL_002b:
	{
		return;
	}
}
// Parse.Internal.IdentityEqualityComparer`1<System.Object>
#include "Parse_Unity_Parse_Internal_IdentityEqualityComparer_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.IdentityEqualityComparer`1<System.Object>
#include "Parse_Unity_Parse_Internal_IdentityEqualityComparer_1_genMethodDeclarations.h"

// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"


// System.Boolean Parse.Internal.IdentityEqualityComparer`1<System.Object>::Equals(T,T)
extern "C" bool IdentityEqualityComparer_1_Equals_m33768_gshared (IdentityEqualityComparer_1_t1604 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = L_0;
		Object_t * L_2 = ___y;
		Object_t * L_3 = L_2;
		bool L_4 = Object_ReferenceEquals_m11486(NULL /*static, unused*/, (Object_t *)((Object_t *)L_1), (Object_t *)((Object_t *)L_3), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Parse.Internal.IdentityEqualityComparer`1<System.Object>::GetHashCode(T)
extern "C" int32_t IdentityEqualityComparer_1_GetHashCode_m33769_gshared (IdentityEqualityComparer_1_t1604 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = L_0;
		int32_t L_2 = RuntimeHelpers_GetHashCode_m17821(NULL /*static, unused*/, (Object_t *)((Object_t *)L_1), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Parse.Internal.IdentityEqualityComparer`1<System.Object>::.ctor()
extern "C" void IdentityEqualityComparer_1__ctor_m7431_gshared (IdentityEqualityComparer_1_t1604 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>
#include "Parse_Unity_Parse_Internal_InternalExtensions_PartialAccesso_0.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>
#include "Parse_Unity_Parse_Internal_InternalExtensions_PartialAccesso_0MethodDeclarations.h"



// System.Void Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void PartialAccessor_1__ctor_m33770_gshared (PartialAccessor_1_t5622 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>::Invoke(T&)
extern "C" void PartialAccessor_1_Invoke_m33772_gshared (PartialAccessor_1_t5622 * __this, Object_t ** ___arg, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PartialAccessor_1_Invoke_m33772((PartialAccessor_1_t5622 *)__this->___prev_9,___arg, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t ** ___arg, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t ** ___arg, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>::BeginInvoke(T&,System.AsyncCallback,System.Object)
extern "C" Object_t * PartialAccessor_1_BeginInvoke_m33774_gshared (PartialAccessor_1_t5622 * __this, Object_t ** ___arg, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = (*___arg);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>::EndInvoke(T&,System.IAsyncResult)
extern "C" void PartialAccessor_1_EndInvoke_m33776_gshared (PartialAccessor_1_t5622 * __this, Object_t ** ___arg, Object_t * ___result, const MethodInfo* method)
{
	void* ___out_args[] = {
	___arg,
	};
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, ___out_args);
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_3.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_3MethodDeclarations.h"

// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_Task.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_40.h"
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_40MethodDeclarations.h"


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_2__ctor_m33781_gshared (U3CU3Ec__DisplayClass1_2_t5623 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Object>::<OnSuccess>b__0(System.Threading.Tasks.Task)
extern "C" Object_t * U3CU3Ec__DisplayClass1_2_U3COnSuccessU3Eb__0_m33782_gshared (U3CU3Ec__DisplayClass1_2_t5623 * __this, Task_t1418 * ___t, const MethodInfo* method)
{
	{
		Func_2_t1599 * L_0 = (Func_2_t1599 *)(__this->___continuation_0);
		Task_t1418 * L_1 = ___t;
		NullCheck((Func_2_t1599 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Task_1_t1554 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>::Invoke(!0) */, (Func_2_t1599 *)L_0, (Task_1_t1554 *)((Task_1_t1554 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Object>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_4.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Object>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_4MethodDeclarations.h"

// System.AggregateException
#include "Parse_Unity_System_AggregateException.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
#include "Parse_Unity_System_Runtime_ExceptionServices_ExceptionDispat.h"
// System.Func`2<System.Threading.Tasks.Task,System.Object>
#include "System_Core_System_Func_2_gen_3.h"
// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_TaskMethodDeclarations.h"
// System.AggregateException
#include "Parse_Unity_System_AggregateExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
#include "Parse_Unity_System_Runtime_ExceptionServices_ExceptionDispatMethodDeclarations.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task,System.Object>
#include "System_Core_System_Func_2_gen_3MethodDeclarations.h"
struct Task_t1418;
struct Task_1_t1554;
struct Object_t;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Object>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Object>(T)
extern "C" Task_1_t1554 * Task_FromResult_TisObject_t_m7347_gshared (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method);
#define Task_FromResult_TisObject_t_m7347(__this /* static, unused */, ___result, method) (( Task_1_t1554 * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Task_FromResult_TisObject_t_m7347_gshared)(__this /* static, unused */, ___result, method)


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m33783_gshared (U3CU3Ec__DisplayClass7_1_t5624 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Object>::<OnSuccess>b__6(System.Threading.Tasks.Task)
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1418_il2cpp_TypeInfo_var;
extern "C" Task_1_t1554 * U3CU3Ec__DisplayClass7_1_U3COnSuccessU3Eb__6_m33784_gshared (U3CU3Ec__DisplayClass7_1_t5624 * __this, Task_t1418 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Task_t1418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1516 * V_0 = {0};
	TaskCompletionSource_1_t1508 * V_1 = {0};
	Object_t * V_2 = {0};
	{
		Task_t1418 * L_0 = ___t;
		NullCheck((Task_t1418 *)L_0);
		bool L_1 = Task_get_IsFaulted_m7285((Task_t1418 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Task_t1418 * L_2 = ___t;
		NullCheck((Task_t1418 *)L_2);
		AggregateException_t1516 * L_3 = Task_get_Exception_m7282((Task_t1418 *)L_2, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1516 *)L_3);
		AggregateException_t1516 * L_4 = AggregateException_Flatten_m7260((AggregateException_t1516 *)L_3, /*hidden argument*/NULL);
		V_0 = (AggregateException_t1516 *)L_4;
		AggregateException_t1516 * L_5 = V_0;
		NullCheck((AggregateException_t1516 *)L_5);
		ReadOnlyCollection_1_t1515 * L_6 = AggregateException_get_InnerExceptions_m7258((AggregateException_t1516 *)L_5, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1515 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Count() */, (ReadOnlyCollection_1_t1515 *)L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		AggregateException_t1516 * L_8 = V_0;
		NullCheck((AggregateException_t1516 *)L_8);
		ReadOnlyCollection_1_t1515 * L_9 = AggregateException_get_InnerExceptions_m7258((AggregateException_t1516 *)L_8, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1515 *)L_9);
		Exception_t468 * L_10 = (Exception_t468 *)VirtFuncInvoker1< Exception_t468 *, int32_t >::Invoke(33 /* !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1515 *)L_9, (int32_t)0);
		ExceptionDispatchInfo_t1395 * L_11 = ExceptionDispatchInfo_Capture_m6799(NULL /*static, unused*/, (Exception_t468 *)L_10, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1395 *)L_11);
		ExceptionDispatchInfo_Throw_m6803((ExceptionDispatchInfo_t1395 *)L_11, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_003a:
	{
		AggregateException_t1516 * L_12 = V_0;
		ExceptionDispatchInfo_t1395 * L_13 = ExceptionDispatchInfo_Capture_m6799(NULL /*static, unused*/, (Exception_t468 *)L_12, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1395 *)L_13);
		ExceptionDispatchInfo_Throw_m6803((ExceptionDispatchInfo_t1395 *)L_13, /*hidden argument*/NULL);
	}

IL_0045:
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
		Object_t * L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1418_il2cpp_TypeInfo_var);
		Task_1_t1554 * L_15 = (( Task_1_t1554 * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (Object_t *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_15;
	}

IL_0054:
	{
		Task_t1418 * L_16 = ___t;
		NullCheck((Task_t1418 *)L_16);
		bool L_17 = Task_get_IsCanceled_m7283((Task_t1418 *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006f;
		}
	}
	{
		TaskCompletionSource_1_t1508 * L_18 = (TaskCompletionSource_1_t1508 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (TaskCompletionSource_1_t1508 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_1 = (TaskCompletionSource_1_t1508 *)L_18;
		TaskCompletionSource_1_t1508 * L_19 = V_1;
		NullCheck((TaskCompletionSource_1_t1508 *)L_19);
		(( void (*) (TaskCompletionSource_1_t1508 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t1508 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		TaskCompletionSource_1_t1508 * L_20 = V_1;
		NullCheck((TaskCompletionSource_1_t1508 *)L_20);
		Task_1_t1554 * L_21 = (( Task_1_t1554 * (*) (TaskCompletionSource_1_t1508 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((TaskCompletionSource_1_t1508 *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_21;
	}

IL_006f:
	{
		Func_2_t1583 * L_22 = (Func_2_t1583 *)(__this->___continuation_0);
		Task_t1418 * L_23 = ___t;
		NullCheck((Func_2_t1583 *)L_22);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker1< Object_t *, Task_t1418 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task,System.Object>::Invoke(!0) */, (Func_2_t1583 *)L_22, (Task_t1418 *)L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1418_il2cpp_TypeInfo_var);
		Task_1_t1554 * L_25 = (( Task_1_t1554 * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (Object_t *)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_25;
	}
}
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_1MethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_7.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
#include "mscorlib_System_Action_1_gen_21.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_7MethodDeclarations.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
#include "mscorlib_System_Action_1_gen_21MethodDeclarations.h"
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m33799_gshared (U3CU3Ec__DisplayClass7_1_t5626 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Object>::<Unwrap>b__5(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<T>>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__5_m33800_gshared (U3CU3Ec__DisplayClass7_1_t5626 * __this, Task_1_t1620 * ___t, const MethodInfo* method)
{
	Action_1_t1607 * V_0 = {0};
	Task_1_t1554 * G_B6_0 = {0};
	Task_1_t1554 * G_B5_0 = {0};
	{
		V_0 = (Action_1_t1607 *)NULL;
		Task_1_t1620 * L_0 = ___t;
		NullCheck((Task_t1418 *)L_0);
		bool L_1 = Task_get_IsFaulted_m7285((Task_t1418 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TaskCompletionSource_1_t1508 * L_2 = (TaskCompletionSource_1_t1508 *)(__this->___tcs_0);
		Task_1_t1620 * L_3 = ___t;
		NullCheck((Task_t1418 *)L_3);
		AggregateException_t1516 * L_4 = Task_get_Exception_m7282((Task_t1418 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t1508 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t1508 *, AggregateException_t1516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t1508 *)L_2, (AggregateException_t1516 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001d:
	{
		Task_1_t1620 * L_5 = ___t;
		NullCheck((Task_t1418 *)L_5);
		bool L_6 = Task_get_IsCanceled_m7283((Task_t1418 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		TaskCompletionSource_1_t1508 * L_7 = (TaskCompletionSource_1_t1508 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t1508 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t1508 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t1508 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0032:
	{
		Task_1_t1620 * L_8 = ___t;
		NullCheck((Task_1_t1620 *)L_8);
		Task_1_t1554 * L_9 = (( Task_1_t1554 * (*) (Task_1_t1620 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Task_1_t1620 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Action_1_t1607 * L_10 = V_0;
		G_B5_0 = L_9;
		if (L_10)
		{
			G_B6_0 = L_9;
			goto IL_0048;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Action_1_t1607 * L_12 = (Action_1_t1607 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Action_1_t1607 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_12, (Object_t *)__this, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		V_0 = (Action_1_t1607 *)L_12;
		G_B6_0 = G_B5_0;
	}

IL_0048:
	{
		Action_1_t1607 * L_13 = V_0;
		NullCheck((Task_1_t1554 *)G_B6_0);
		(( Task_t1418 * (*) (Task_1_t1554 *, Action_1_t1607 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1554 *)G_B6_0, (Action_1_t1607 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Object>::<Unwrap>b__6(System.Threading.Tasks.Task`1<T>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__6_m33801_gshared (U3CU3Ec__DisplayClass7_1_t5626 * __this, Task_1_t1554 * ___inner, const MethodInfo* method)
{
	{
		Task_1_t1554 * L_0 = ___inner;
		NullCheck((Task_t1418 *)L_0);
		bool L_1 = Task_get_IsFaulted_m7285((Task_t1418 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		TaskCompletionSource_1_t1508 * L_2 = (TaskCompletionSource_1_t1508 *)(__this->___tcs_0);
		Task_1_t1554 * L_3 = ___inner;
		NullCheck((Task_t1418 *)L_3);
		AggregateException_t1516 * L_4 = Task_get_Exception_m7282((Task_t1418 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t1508 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t1508 *, AggregateException_t1516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t1508 *)L_2, (AggregateException_t1516 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001b:
	{
		Task_1_t1554 * L_5 = ___inner;
		NullCheck((Task_t1418 *)L_5);
		bool L_6 = Task_get_IsCanceled_m7283((Task_t1418 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		TaskCompletionSource_1_t1508 * L_7 = (TaskCompletionSource_1_t1508 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t1508 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t1508 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t1508 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0030:
	{
		TaskCompletionSource_1_t1508 * L_8 = (TaskCompletionSource_1_t1508 *)(__this->___tcs_0);
		Task_1_t1554 * L_9 = ___inner;
		NullCheck((Task_1_t1554 *)L_9);
		Object_t * L_10 = (( Object_t * (*) (Task_1_t1554 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Task_1_t1554 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		NullCheck((TaskCompletionSource_1_t1508 *)L_8);
		(( bool (*) (TaskCompletionSource_1_t1508 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t1508 *)L_8, (Object_t *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass4`1<System.Object>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_5.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass4`1<System.Object>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_5MethodDeclarations.h"



// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass4`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass4_1__ctor_m33802_gshared (U3CU3Ec__DisplayClass4_1_t5627 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Parse.Internal.InternalExtensions/<>c__DisplayClass4`1<System.Object>::<OnSuccess>b__3(System.Threading.Tasks.Task`1<TIn>)
extern "C" Object_t * U3CU3Ec__DisplayClass4_1_U3COnSuccessU3Eb__3_m33803_gshared (U3CU3Ec__DisplayClass4_1_t5627 * __this, Task_1_t1554 * ___t, const MethodInfo* method)
{
	{
		Action_1_t1607 * L_0 = (Action_1_t1607 *)(__this->___continuation_0);
		Task_1_t1554 * L_1 = ___t;
		NullCheck((Action_1_t1607 *)L_0);
		VirtActionInvoker1< Task_1_t1554 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Object>>::Invoke(!0) */, (Action_1_t1607 *)L_0, (Task_1_t1554 *)L_1);
		return NULL;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Byte,System.Object>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_6.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Byte,System.Object>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_6MethodDeclarations.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Byte>,System.Object>
#include "System_Core_System_Func_2_gen_41.h"
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_10.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Byte>,System.Object>
#include "System_Core_System_Func_2_gen_41MethodDeclarations.h"


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Byte,System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_2__ctor_m33811_gshared (U3CU3Ec__DisplayClass1_2_t5628 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Byte,System.Object>::<OnSuccess>b__0(System.Threading.Tasks.Task)
extern "C" Object_t * U3CU3Ec__DisplayClass1_2_U3COnSuccessU3Eb__0_m33812_gshared (U3CU3Ec__DisplayClass1_2_t5628 * __this, Task_t1418 * ___t, const MethodInfo* method)
{
	{
		Func_2_t1581 * L_0 = (Func_2_t1581 *)(__this->___continuation_0);
		Task_t1418 * L_1 = ___t;
		NullCheck((Func_2_t1581 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Task_1_t1573 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Byte>,System.Object>::Invoke(!0) */, (Func_2_t1581 *)L_0, (Task_1_t1573 *)((Task_1_t1573 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
	}
}
// System.Tuple`2<System.Int32,System.Object>
#include "Parse_Unity_System_Tuple_2_gen_6.h"
#ifndef _MSC_VER
#else
#endif
// System.Tuple`2<System.Int32,System.Object>
#include "Parse_Unity_System_Tuple_2_gen_6MethodDeclarations.h"



// T1 System.Tuple`2<System.Int32,System.Object>::get_Item1()
extern "C" int32_t Tuple_2_get_Item1_m33834_gshared (Tuple_2_t5630 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___U3CItem1U3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void System.Tuple`2<System.Int32,System.Object>::set_Item1(T1)
extern "C" void Tuple_2_set_Item1_m33836_gshared (Tuple_2_t5630 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CItem1U3Ek__BackingField_0 = L_0;
		return;
	}
}
// T2 System.Tuple`2<System.Int32,System.Object>::get_Item2()
extern "C" Object_t * Tuple_2_get_Item2_m33837_gshared (Tuple_2_t5630 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CItem2U3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void System.Tuple`2<System.Int32,System.Object>::set_Item2(T2)
extern "C" void Tuple_2_set_Item2_m33839_gshared (Tuple_2_t5630 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___U3CItem2U3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void System.Tuple`2<System.Int32,System.Object>::.ctor(T1,T2)
extern "C" void Tuple_2__ctor_m33840_gshared (Tuple_2_t5630 * __this, int32_t ___item1, Object_t * ___item2, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___item1;
		NullCheck((Tuple_2_t5630 *)__this);
		(( void (*) (Tuple_2_t5630 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Tuple_2_t5630 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___item2;
		NullCheck((Tuple_2_t5630 *)__this);
		(( void (*) (Tuple_2_t5630 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Tuple_2_t5630 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Boolean System.Tuple`2<System.Int32,System.Object>::Equals(System.Object)
extern "C" bool Tuple_2_Equals_m33842_gshared (Tuple_2_t5630 * __this, Object_t * ___obj, const MethodInfo* method)
{
	Tuple_2_t5630 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = (Tuple_2_t5630 *)((Tuple_2_t5630 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Tuple_2_t5630 * L_1 = V_0;
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
		NullCheck((Tuple_2_t5630 *)__this);
		int32_t L_2 = (( int32_t (*) (Tuple_2_t5630 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Tuple_2_t5630 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_3);
		Tuple_2_t5630 * L_5 = V_0;
		NullCheck((Tuple_2_t5630 *)L_5);
		int32_t L_6 = (( int32_t (*) (Tuple_2_t5630 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Tuple_2_t5630 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_7);
		bool L_9 = Object_Equals_m5277(NULL /*static, unused*/, (Object_t *)L_4, (Object_t *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		NullCheck((Tuple_2_t5630 *)__this);
		Object_t * L_10 = (( Object_t * (*) (Tuple_2_t5630 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Tuple_2_t5630 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_11 = L_10;
		Tuple_2_t5630 * L_12 = V_0;
		NullCheck((Tuple_2_t5630 *)L_12);
		Object_t * L_13 = (( Object_t * (*) (Tuple_2_t5630 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Tuple_2_t5630 *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_14 = L_13;
		bool L_15 = Object_Equals_m5277(NULL /*static, unused*/, (Object_t *)((Object_t *)L_11), (Object_t *)((Object_t *)L_14), /*hidden argument*/NULL);
		return L_15;
	}

IL_0045:
	{
		return 0;
	}
}
// System.Int32 System.Tuple`2<System.Int32,System.Object>::GetHashCode()
extern "C" int32_t Tuple_2_GetHashCode_m33844_gshared (Tuple_2_t5630 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		NullCheck((Tuple_2_t5630 *)__this);
		int32_t L_0 = (( int32_t (*) (Tuple_2_t5630 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Tuple_2_t5630 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
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
		NullCheck((Tuple_2_t5630 *)__this);
		int32_t L_3 = (( int32_t (*) (Tuple_2_t5630 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Tuple_2_t5630 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_2 = (int32_t)L_3;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (&V_2)));
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (&V_2)));
		G_B3_0 = L_4;
	}

IL_0024:
	{
		V_0 = (int32_t)G_B3_0;
		NullCheck((Tuple_2_t5630 *)__this);
		Object_t * L_5 = (( Object_t * (*) (Tuple_2_t5630 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Tuple_2_t5630 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
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
		NullCheck((Tuple_2_t5630 *)__this);
		Object_t * L_7 = (( Object_t * (*) (Tuple_2_t5630 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Tuple_2_t5630 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
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
#ifndef _MSC_VER
#else
#endif



// System.Linq.OrderedSequence`2<System.Object,System.Object>
#include "System_Core_System_Linq_OrderedSequence_2_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.OrderedSequence`2<System.Object,System.Object>
#include "System_Core_System_Linq_OrderedSequence_2_genMethodDeclarations.h"

// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen.h"
// System.Linq.SortContext`1<System.Object>
#include "System_Core_System_Linq_SortContext_1_gen.h"
// System.Linq.SortSequenceContext`2<System.Object,System.Object>
#include "System_Core_System_Linq_SortSequenceContext_2_gen.h"
// System.Linq.OrderedEnumerable`1<System.Object>
#include "System_Core_System_Linq_OrderedEnumerable_1_gen.h"
// System.Linq.OrderedEnumerable`1<System.Object>
#include "System_Core_System_Linq_OrderedEnumerable_1_genMethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"
// System.Linq.SortSequenceContext`2<System.Object,System.Object>
#include "System_Core_System_Linq_SortSequenceContext_2_genMethodDeclarations.h"
// System.Linq.QuickSort`1<System.Object>
#include "System_Core_System_Linq_QuickSort_1_genMethodDeclarations.h"


// System.Void System.Linq.OrderedSequence`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern TypeInfo* Comparer_1_t4883_il2cpp_TypeInfo_var;
extern "C" void OrderedSequence_2__ctor_m33861_gshared (OrderedSequence_2_t5635 * __this, Object_t* ___source, Func_2_t1434 * ___key_selector, Object_t* ___comparer, int32_t ___direction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t4883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10559);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* G_B2_0 = {0};
	OrderedSequence_2_t5635 * G_B2_1 = {0};
	Object_t* G_B1_0 = {0};
	OrderedSequence_2_t5635 * G_B1_1 = {0};
	{
		Object_t* L_0 = ___source;
		NullCheck((OrderedEnumerable_1_t5633 *)__this);
		(( void (*) (OrderedEnumerable_1_t5633 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((OrderedEnumerable_1_t5633 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Func_2_t1434 * L_1 = ___key_selector;
		__this->___selector_2 = L_1;
		Object_t* L_2 = ___comparer;
		Object_t* L_3 = (Object_t*)L_2;
		G_B1_0 = L_3;
		G_B1_1 = ((OrderedSequence_2_t5635 *)(__this));
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = ((OrderedSequence_2_t5635 *)(__this));
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t4883_il2cpp_TypeInfo_var);
		Comparer_1_t4883 * L_4 = (( Comparer_1_t4883 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		G_B2_0 = ((Object_t*)(L_4));
		G_B2_1 = ((OrderedSequence_2_t5635 *)(G_B1_1));
	}

IL_001c:
	{
		NullCheck(G_B2_1);
		G_B2_1->___comparer_3 = G_B2_0;
		int32_t L_5 = ___direction;
		__this->___direction_4 = L_5;
		return;
	}
}
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C" SortContext_1_t5636 * OrderedSequence_2_CreateContext_m33862_gshared (OrderedSequence_2_t5635 * __this, SortContext_1_t5636 * ___current, const MethodInfo* method)
{
	SortContext_1_t5636 * V_0 = {0};
	{
		Func_2_t1434 * L_0 = (Func_2_t1434 *)(__this->___selector_2);
		Object_t* L_1 = (Object_t*)(__this->___comparer_3);
		int32_t L_2 = (int32_t)(__this->___direction_4);
		SortContext_1_t5636 * L_3 = ___current;
		SortSequenceContext_2_t5637 * L_4 = (SortSequenceContext_2_t5637 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (SortSequenceContext_2_t5637 *, Func_2_t1434 *, Object_t*, int32_t, SortContext_1_t5636 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_4, (Func_2_t1434 *)L_0, (Object_t*)L_1, (int32_t)L_2, (SortContext_1_t5636 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (SortContext_1_t5636 *)L_4;
		OrderedEnumerable_1_t5633 * L_5 = (OrderedEnumerable_1_t5633 *)(__this->___parent_1);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		OrderedEnumerable_1_t5633 * L_6 = (OrderedEnumerable_1_t5633 *)(__this->___parent_1);
		SortContext_1_t5636 * L_7 = V_0;
		NullCheck((OrderedEnumerable_1_t5633 *)L_6);
		SortContext_1_t5636 * L_8 = (SortContext_1_t5636 *)VirtFuncInvoker1< SortContext_1_t5636 *, SortContext_1_t5636 * >::Invoke(6 /* System.Linq.SortContext`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::CreateContext(System.Linq.SortContext`1<TElement>) */, (OrderedEnumerable_1_t5633 *)L_6, (SortContext_1_t5636 *)L_7);
		return L_8;
	}

IL_0031:
	{
		SortContext_1_t5636 * L_9 = V_0;
		return L_9;
	}
}
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C" Object_t* OrderedSequence_2_Sort_m33863_gshared (OrderedSequence_2_t5635 * __this, Object_t* ___source, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___source;
		NullCheck((OrderedSequence_2_t5635 *)__this);
		SortContext_1_t5636 * L_1 = (SortContext_1_t5636 *)VirtFuncInvoker1< SortContext_1_t5636 *, SortContext_1_t5636 * >::Invoke(6 /* System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::CreateContext(System.Linq.SortContext`1<TElement>) */, (OrderedSequence_2_t5635 *)__this, (SortContext_1_t5636 *)NULL);
		Object_t* L_2 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, SortContext_1_t5636 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t*)L_0, (SortContext_1_t5636 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Linq.OrderedEnumerable`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C" void OrderedEnumerable_1__ctor_m33864_gshared (OrderedEnumerable_1_t5633 * __this, Object_t* ___source, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___source;
		__this->___source_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Linq.OrderedEnumerable`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * OrderedEnumerable_1_System_Collections_IEnumerable_GetEnumerator_m33865_gshared (OrderedEnumerable_1_t5633 * __this, const MethodInfo* method)
{
	{
		NullCheck((OrderedEnumerable_1_t5633 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(5 /* System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::GetEnumerator() */, (OrderedEnumerable_1_t5633 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::GetEnumerator()
extern "C" Object_t* OrderedEnumerable_1_GetEnumerator_m33866_gshared (OrderedEnumerable_1_t5633 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___source_0);
		NullCheck((OrderedEnumerable_1_t5633 *)__this);
		Object_t* L_1 = (Object_t*)VirtFuncInvoker1< Object_t*, Object_t* >::Invoke(7 /* System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>) */, (OrderedEnumerable_1_t5633 *)__this, (Object_t*)L_0);
		NullCheck((Object_t*)L_1);
		Object_t* L_2 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_1);
		return L_2;
	}
}
// System.Linq.SortContext`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::CreateContext(System.Linq.SortContext`1<TElement>)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
#ifndef _MSC_VER
#else
#endif
// System.Linq.SortContext`1<System.Object>
#include "System_Core_System_Linq_SortContext_1_genMethodDeclarations.h"



// System.Void System.Linq.SortContext`1<System.Object>::.ctor(System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C" void SortContext_1__ctor_m33867_gshared (SortContext_1_t5636 * __this, int32_t ___direction, SortContext_1_t5636 * ___child_context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___direction;
		__this->___direction_0 = L_0;
		SortContext_1_t5636 * L_1 = ___child_context;
		__this->___child_context_1 = L_1;
		return;
	}
}
// System.Void System.Linq.SortContext`1<System.Object>::Initialize(TElement[])
// System.Int32 System.Linq.SortContext`1<System.Object>::Compare(System.Int32,System.Int32)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C" void SortSequenceContext_2__ctor_m33868_gshared (SortSequenceContext_2_t5637 * __this, Func_2_t1434 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t5636 * ___child_context, const MethodInfo* method)
{
	{
		int32_t L_0 = ___direction;
		SortContext_1_t5636 * L_1 = ___child_context;
		NullCheck((SortContext_1_t5636 *)__this);
		(( void (*) (SortContext_1_t5636 *, int32_t, SortContext_1_t5636 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((SortContext_1_t5636 *)__this, (int32_t)L_0, (SortContext_1_t5636 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Func_2_t1434 * L_2 = ___selector;
		__this->___selector_2 = L_2;
		Object_t* L_3 = ___comparer;
		__this->___comparer_3 = L_3;
		return;
	}
}
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::Initialize(TElement[])
extern "C" void SortSequenceContext_2_Initialize_m33869_gshared (SortSequenceContext_2_t5637 * __this, ObjectU5BU5D_t21* ___elements, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		SortContext_1_t5636 * L_0 = (SortContext_1_t5636 *)(((SortContext_1_t5636 *)__this)->___child_context_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		SortContext_1_t5636 * L_1 = (SortContext_1_t5636 *)(((SortContext_1_t5636 *)__this)->___child_context_1);
		ObjectU5BU5D_t21* L_2 = ___elements;
		NullCheck((SortContext_1_t5636 *)L_1);
		VirtActionInvoker1< ObjectU5BU5D_t21* >::Invoke(4 /* System.Void System.Linq.SortContext`1<System.Object>::Initialize(TElement[]) */, (SortContext_1_t5636 *)L_1, (ObjectU5BU5D_t21*)L_2);
	}

IL_0017:
	{
		ObjectU5BU5D_t21* L_3 = ___elements;
		NullCheck(L_3);
		__this->___keys_4 = ((ObjectU5BU5D_t21*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (((int32_t)(((Array_t *)L_3)->max_length)))));
		V_0 = (int32_t)0;
		goto IL_004e;
	}

IL_002c:
	{
		ObjectU5BU5D_t21* L_4 = (ObjectU5BU5D_t21*)(__this->___keys_4);
		int32_t L_5 = V_0;
		Func_2_t1434 * L_6 = (Func_2_t1434 *)(__this->___selector_2);
		ObjectU5BU5D_t21* L_7 = ___elements;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((Func_2_t1434 *)L_6);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(11 /* TResult System.Func`2<System.Object,System.Object>::Invoke(T) */, (Func_2_t1434 *)L_6, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_10;
		int32_t L_11 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_12 = V_0;
		ObjectU5BU5D_t21* L_13 = (ObjectU5BU5D_t21*)(__this->___keys_4);
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Object>::Compare(System.Int32,System.Int32)
extern "C" int32_t SortSequenceContext_2_Compare_m33870_gshared (SortSequenceContext_2_t5637 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___comparer_3);
		ObjectU5BU5D_t21* L_1 = (ObjectU5BU5D_t21*)(__this->___keys_4);
		int32_t L_2 = ___first_index;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		ObjectU5BU5D_t21* L_4 = (ObjectU5BU5D_t21*)(__this->___keys_4);
		int32_t L_5 = ___second_index;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Object_t*)L_0);
		int32_t L_7 = (int32_t)InterfaceFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(0 /* System.Int32 System.Collections.Generic.IComparer`1<System.Object>::Compare(!0,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_3)), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_6)));
		V_0 = (int32_t)L_7;
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_005b;
		}
	}
	{
		SortContext_1_t5636 * L_9 = (SortContext_1_t5636 *)(((SortContext_1_t5636 *)__this)->___child_context_1);
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		SortContext_1_t5636 * L_10 = (SortContext_1_t5636 *)(((SortContext_1_t5636 *)__this)->___child_context_1);
		int32_t L_11 = ___first_index;
		int32_t L_12 = ___second_index;
		NullCheck((SortContext_1_t5636 *)L_10);
		int32_t L_13 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Linq.SortContext`1<System.Object>::Compare(System.Int32,System.Int32) */, (SortContext_1_t5636 *)L_10, (int32_t)L_11, (int32_t)L_12);
		return L_13;
	}

IL_0043:
	{
		int32_t L_14 = (int32_t)(((SortContext_1_t5636 *)__this)->___direction_0);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_15 = ___second_index;
		int32_t L_16 = ___first_index;
		G_B6_0 = ((int32_t)((int32_t)L_15-(int32_t)L_16));
		goto IL_005a;
	}

IL_0057:
	{
		int32_t L_17 = ___first_index;
		int32_t L_18 = ___second_index;
		G_B6_0 = ((int32_t)((int32_t)L_17-(int32_t)L_18));
	}

IL_005a:
	{
		V_0 = (int32_t)G_B6_0;
	}

IL_005b:
	{
		int32_t L_19 = (int32_t)(((SortContext_1_t5636 *)__this)->___direction_0);
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_20 = V_0;
		G_B10_0 = ((-L_20));
		goto IL_006f;
	}

IL_006e:
	{
		int32_t L_21 = V_0;
		G_B10_0 = L_21;
	}

IL_006f:
	{
		return G_B10_0;
	}
}
// System.Linq.QuickSort`1<System.Object>
#include "System_Core_System_Linq_QuickSort_1_gen.h"
#ifndef _MSC_VER
#else
#endif

// System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>
#include "System_Core_System_Linq_QuickSort_1_U3CSortU3Ec__Iterator21_.h"
// System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>
#include "System_Core_System_Linq_QuickSort_1_U3CSortU3Ec__Iterator21_MethodDeclarations.h"
struct Enumerable_t1134;
struct ObjectU5BU5D_t21;
struct IEnumerable_1_t1072;
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" ObjectU5BU5D_t21* Enumerable_ToArray_TisObject_t_m7499_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToArray_TisObject_t_m7499(__this /* static, unused */, p0, method) (( ObjectU5BU5D_t21* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToArray_TisObject_t_m7499_gshared)(__this /* static, unused */, p0, method)


// System.Void System.Linq.QuickSort`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" void QuickSort_1__ctor_m33871_gshared (QuickSort_1_t5638 * __this, Object_t* ___source, SortContext_1_t5636 * ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___source;
		ObjectU5BU5D_t21* L_1 = (( ObjectU5BU5D_t21* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___elements_0 = L_1;
		ObjectU5BU5D_t21* L_2 = (ObjectU5BU5D_t21*)(__this->___elements_0);
		NullCheck(L_2);
		Int32U5BU5D_t119* L_3 = (( Int32U5BU5D_t119* (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (int32_t)(((int32_t)(((Array_t *)L_2)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___indexes_1 = L_3;
		SortContext_1_t5636 * L_4 = ___context;
		__this->___context_2 = L_4;
		return;
	}
}
// System.Int32[] System.Linq.QuickSort`1<System.Object>::CreateIndexes(System.Int32)
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern "C" Int32U5BU5D_t119* QuickSort_1_CreateIndexes_m33872_gshared (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		s_Il2CppMethodIntialized = true;
	}
	Int32U5BU5D_t119* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___length;
		V_0 = (Int32U5BU5D_t119*)((Int32U5BU5D_t119*)SZArrayNew(Int32U5BU5D_t119_il2cpp_TypeInfo_var, L_0));
		V_1 = (int32_t)0;
		goto IL_0016;
	}

IL_000e:
	{
		Int32U5BU5D_t119* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2)) = (int32_t)L_3;
		int32_t L_4 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0016:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = ___length;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t119* L_7 = V_0;
		return L_7;
	}
}
// System.Void System.Linq.QuickSort`1<System.Object>::PerformSort()
extern "C" void QuickSort_1_PerformSort_m33873_gshared (QuickSort_1_t5638 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t21* L_0 = (ObjectU5BU5D_t21*)(__this->___elements_0);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) > ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		SortContext_1_t5636 * L_1 = (SortContext_1_t5636 *)(__this->___context_2);
		ObjectU5BU5D_t21* L_2 = (ObjectU5BU5D_t21*)(__this->___elements_0);
		NullCheck((SortContext_1_t5636 *)L_1);
		VirtActionInvoker1< ObjectU5BU5D_t21* >::Invoke(4 /* System.Void System.Linq.SortContext`1<System.Object>::Initialize(TElement[]) */, (SortContext_1_t5636 *)L_1, (ObjectU5BU5D_t21*)L_2);
		Int32U5BU5D_t119* L_3 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		NullCheck(L_3);
		NullCheck((QuickSort_1_t5638 *)__this);
		(( void (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((QuickSort_1_t5638 *)__this, (int32_t)0, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Int32 System.Linq.QuickSort`1<System.Object>::CompareItems(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_CompareItems_m33874_gshared (QuickSort_1_t5638 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method)
{
	{
		SortContext_1_t5636 * L_0 = (SortContext_1_t5636 *)(__this->___context_2);
		int32_t L_1 = ___first_index;
		int32_t L_2 = ___second_index;
		NullCheck((SortContext_1_t5636 *)L_0);
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Linq.SortContext`1<System.Object>::Compare(System.Int32,System.Int32) */, (SortContext_1_t5636 *)L_0, (int32_t)L_1, (int32_t)L_2);
		return L_3;
	}
}
// System.Int32 System.Linq.QuickSort`1<System.Object>::MedianOfThree(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_MedianOfThree_m33875_gshared (QuickSort_1_t5638 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___left;
		int32_t L_1 = ___right;
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1))/(int32_t)2));
		Int32U5BU5D_t119* L_2 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		Int32U5BU5D_t119* L_5 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_6 = ___left;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((QuickSort_1_t5638 *)__this);
		int32_t L_8 = (( int32_t (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((QuickSort_1_t5638 *)__this, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_9 = ___left;
		int32_t L_10 = V_0;
		NullCheck((QuickSort_1_t5638 *)__this);
		(( void (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuickSort_1_t5638 *)__this, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_002a:
	{
		Int32U5BU5D_t119* L_11 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_12 = ___right;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		Int32U5BU5D_t119* L_14 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_15 = ___left;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((QuickSort_1_t5638 *)__this);
		int32_t L_17 = (( int32_t (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((QuickSort_1_t5638 *)__this, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_13)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_18 = ___left;
		int32_t L_19 = ___right;
		NullCheck((QuickSort_1_t5638 *)__this);
		(( void (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuickSort_1_t5638 *)__this, (int32_t)L_18, (int32_t)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_004e:
	{
		Int32U5BU5D_t119* L_20 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_21 = ___right;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		Int32U5BU5D_t119* L_23 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_24 = V_0;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((QuickSort_1_t5638 *)__this);
		int32_t L_26 = (( int32_t (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((QuickSort_1_t5638 *)__this, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_27 = V_0;
		int32_t L_28 = ___right;
		NullCheck((QuickSort_1_t5638 *)__this);
		(( void (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuickSort_1_t5638 *)__this, (int32_t)L_27, (int32_t)L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_0072:
	{
		int32_t L_29 = V_0;
		int32_t L_30 = ___right;
		NullCheck((QuickSort_1_t5638 *)__this);
		(( void (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuickSort_1_t5638 *)__this, (int32_t)L_29, (int32_t)((int32_t)((int32_t)L_30-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Int32U5BU5D_t119* L_31 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_32 = ___right;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)((int32_t)L_32-(int32_t)1)));
		int32_t L_33 = ((int32_t)((int32_t)L_32-(int32_t)1));
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_31, L_33));
	}
}
// System.Void System.Linq.QuickSort`1<System.Object>::Sort(System.Int32,System.Int32)
extern "C" void QuickSort_1_Sort_m33876_gshared (QuickSort_1_t5638 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___left;
		int32_t L_1 = ___right;
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)3))) > ((int32_t)L_1)))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = ___left;
		V_0 = (int32_t)L_2;
		int32_t L_3 = ___right;
		V_1 = (int32_t)((int32_t)((int32_t)L_3-(int32_t)1));
		int32_t L_4 = ___left;
		int32_t L_5 = ___right;
		NullCheck((QuickSort_1_t5638 *)__this);
		int32_t L_6 = (( int32_t (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((QuickSort_1_t5638 *)__this, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		V_2 = (int32_t)L_6;
	}

IL_0018:
	{
		goto IL_001d;
	}

IL_001d:
	{
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_8 = V_0;
		int32_t L_9 = (int32_t)((int32_t)((int32_t)L_8+(int32_t)1));
		V_0 = (int32_t)L_9;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_9);
		int32_t L_10 = L_9;
		int32_t L_11 = V_2;
		NullCheck((QuickSort_1_t5638 *)__this);
		int32_t L_12 = (( int32_t (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((QuickSort_1_t5638 *)__this, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10)), (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		Int32U5BU5D_t119* L_13 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_14 = V_1;
		int32_t L_15 = (int32_t)((int32_t)((int32_t)L_14-(int32_t)1));
		V_1 = (int32_t)L_15;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_15);
		int32_t L_16 = L_15;
		int32_t L_17 = V_2;
		NullCheck((QuickSort_1_t5638 *)__this);
		int32_t L_18 = (( int32_t (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((QuickSort_1_t5638 *)__this, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_16)), (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck((QuickSort_1_t5638 *)__this);
		(( void (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuickSort_1_t5638 *)__this, (int32_t)L_21, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		goto IL_006d;
	}

IL_0068:
	{
		goto IL_0072;
	}

IL_006d:
	{
		goto IL_0018;
	}

IL_0072:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___right;
		NullCheck((QuickSort_1_t5638 *)__this);
		(( void (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuickSort_1_t5638 *)__this, (int32_t)L_23, (int32_t)((int32_t)((int32_t)L_24-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_25 = ___left;
		int32_t L_26 = V_0;
		NullCheck((QuickSort_1_t5638 *)__this);
		(( void (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((QuickSort_1_t5638 *)__this, (int32_t)L_25, (int32_t)((int32_t)((int32_t)L_26-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int32_t L_27 = V_0;
		int32_t L_28 = ___right;
		NullCheck((QuickSort_1_t5638 *)__this);
		(( void (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((QuickSort_1_t5638 *)__this, (int32_t)((int32_t)((int32_t)L_27+(int32_t)1)), (int32_t)L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_009d;
	}

IL_0095:
	{
		int32_t L_29 = ___left;
		int32_t L_30 = ___right;
		NullCheck((QuickSort_1_t5638 *)__this);
		(( void (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((QuickSort_1_t5638 *)__this, (int32_t)L_29, (int32_t)L_30, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
	}

IL_009d:
	{
		return;
	}
}
// System.Void System.Linq.QuickSort`1<System.Object>::InsertionSort(System.Int32,System.Int32)
extern "C" void QuickSort_1_InsertionSort_m33877_gshared (QuickSort_1_t5638 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___left;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)1));
		goto IL_005a;
	}

IL_0009:
	{
		Int32U5BU5D_t119* L_1 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3));
		int32_t L_4 = V_0;
		V_1 = (int32_t)L_4;
		goto IL_002f;
	}

IL_0019:
	{
		Int32U5BU5D_t119* L_5 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_6 = V_1;
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)L_8-(int32_t)1)));
		int32_t L_9 = ((int32_t)((int32_t)L_8-(int32_t)1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9));
		int32_t L_10 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_10-(int32_t)1));
	}

IL_002f:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___left;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_13 = V_2;
		Int32U5BU5D_t119* L_14 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, ((int32_t)((int32_t)L_15-(int32_t)1)));
		int32_t L_16 = ((int32_t)((int32_t)L_15-(int32_t)1));
		NullCheck((QuickSort_1_t5638 *)__this);
		int32_t L_17 = (( int32_t (*) (QuickSort_1_t5638 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((QuickSort_1_t5638 *)__this, (int32_t)L_13, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}

IL_004d:
	{
		Int32U5BU5D_t119* L_18 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_18, L_19)) = (int32_t)L_20;
		int32_t L_21 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_22 = V_0;
		int32_t L_23 = ___right;
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
// System.Void System.Linq.QuickSort`1<System.Object>::Swap(System.Int32,System.Int32)
extern "C" void QuickSort_1_Swap_m33878_gshared (QuickSort_1_t5638 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t119* L_0 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_1 = ___right;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2));
		Int32U5BU5D_t119* L_3 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_4 = ___right;
		Int32U5BU5D_t119* L_5 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_6 = ___left;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_4)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7));
		Int32U5BU5D_t119* L_8 = (Int32U5BU5D_t119*)(__this->___indexes_1);
		int32_t L_9 = ___left;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9)) = (int32_t)L_10;
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QuickSort`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" Object_t* QuickSort_1_Sort_m33879_gshared (Object_t * __this /* static, unused */, Object_t* ___source, SortContext_1_t5636 * ___context, const MethodInfo* method)
{
	U3CSortU3Ec__Iterator21_t5639 * V_0 = {0};
	{
		U3CSortU3Ec__Iterator21_t5639 * L_0 = (U3CSortU3Ec__Iterator21_t5639 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		(( void (*) (U3CSortU3Ec__Iterator21_t5639 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		V_0 = (U3CSortU3Ec__Iterator21_t5639 *)L_0;
		U3CSortU3Ec__Iterator21_t5639 * L_1 = V_0;
		Object_t* L_2 = ___source;
		NullCheck(L_1);
		L_1->___source_0 = L_2;
		U3CSortU3Ec__Iterator21_t5639 * L_3 = V_0;
		SortContext_1_t5636 * L_4 = ___context;
		NullCheck(L_3);
		L_3->___context_1 = L_4;
		U3CSortU3Ec__Iterator21_t5639 * L_5 = V_0;
		Object_t* L_6 = ___source;
		NullCheck(L_5);
		L_5->___U3CU24U3Esource_6 = L_6;
		U3CSortU3Ec__Iterator21_t5639 * L_7 = V_0;
		SortContext_1_t5636 * L_8 = ___context;
		NullCheck(L_7);
		L_7->___U3CU24U3Econtext_7 = L_8;
		U3CSortU3Ec__Iterator21_t5639 * L_9 = V_0;
		U3CSortU3Ec__Iterator21_t5639 * L_10 = (U3CSortU3Ec__Iterator21_t5639 *)L_9;
		NullCheck(L_10);
		L_10->___U24PC_4 = ((int32_t)-2);
		return L_10;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"


// System.Void System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::.ctor()
extern "C" void U3CSortU3Ec__Iterator21__ctor_m33880_gshared (U3CSortU3Ec__Iterator21_t5639 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TElement System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::System.Collections.Generic.IEnumerator<TElement>.get_Current()
extern "C" Object_t * U3CSortU3Ec__Iterator21_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m33881_gshared (U3CSortU3Ec__Iterator21_t5639 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CSortU3Ec__Iterator21_System_Collections_IEnumerator_get_Current_m33882_gshared (U3CSortU3Ec__Iterator21_t5639 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CSortU3Ec__Iterator21_System_Collections_IEnumerable_GetEnumerator_m33883_gshared (U3CSortU3Ec__Iterator21_t5639 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CSortU3Ec__Iterator21_t5639 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(8 /* System.Collections.Generic.IEnumerator`1<TElement> System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::System.Collections.Generic.IEnumerable<TElement>.GetEnumerator() */, (U3CSortU3Ec__Iterator21_t5639 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TElement> System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::System.Collections.Generic.IEnumerable<TElement>.GetEnumerator()
extern "C" Object_t* U3CSortU3Ec__Iterator21_System_Collections_Generic_IEnumerableU3CTElementU3E_GetEnumerator_m33884_gshared (U3CSortU3Ec__Iterator21_t5639 * __this, const MethodInfo* method)
{
	U3CSortU3Ec__Iterator21_t5639 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m5242(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
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
		U3CSortU3Ec__Iterator21_t5639 * L_2 = (U3CSortU3Ec__Iterator21_t5639 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CSortU3Ec__Iterator21_t5639 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CSortU3Ec__Iterator21_t5639 *)L_2;
		U3CSortU3Ec__Iterator21_t5639 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CSortU3Ec__Iterator21_t5639 * L_5 = V_0;
		SortContext_1_t5636 * L_6 = (SortContext_1_t5636 *)(__this->___U3CU24U3Econtext_7);
		NullCheck(L_5);
		L_5->___context_1 = L_6;
		U3CSortU3Ec__Iterator21_t5639 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::MoveNext()
extern "C" bool U3CSortU3Ec__Iterator21_MoveNext_m33885_gshared (U3CSortU3Ec__Iterator21_t5639 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0083;
		}
	}
	{
		goto IL_00b0;
	}

IL_0021:
	{
		Object_t* L_2 = (Object_t*)(__this->___source_0);
		SortContext_1_t5636 * L_3 = (SortContext_1_t5636 *)(__this->___context_1);
		QuickSort_1_t5638 * L_4 = (QuickSort_1_t5638 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (QuickSort_1_t5638 *, Object_t*, SortContext_1_t5636 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, (Object_t*)L_2, (SortContext_1_t5636 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		__this->___U3CsorterU3E__0_2 = L_4;
		QuickSort_1_t5638 * L_5 = (QuickSort_1_t5638 *)(__this->___U3CsorterU3E__0_2);
		NullCheck((QuickSort_1_t5638 *)L_5);
		(( void (*) (QuickSort_1_t5638 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((QuickSort_1_t5638 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		__this->___U3CiU3E__1_3 = 0;
		goto IL_0091;
	}

IL_004f:
	{
		QuickSort_1_t5638 * L_6 = (QuickSort_1_t5638 *)(__this->___U3CsorterU3E__0_2);
		NullCheck(L_6);
		ObjectU5BU5D_t21* L_7 = (ObjectU5BU5D_t21*)(L_6->___elements_0);
		QuickSort_1_t5638 * L_8 = (QuickSort_1_t5638 *)(__this->___U3CsorterU3E__0_2);
		NullCheck(L_8);
		Int32U5BU5D_t119* L_9 = (Int32U5BU5D_t119*)(L_8->___indexes_1);
		int32_t L_10 = (int32_t)(__this->___U3CiU3E__1_3);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11)));
		int32_t L_12 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11));
		__this->___U24current_5 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_12));
		__this->___U24PC_4 = 1;
		goto IL_00b2;
	}

IL_0083:
	{
		int32_t L_13 = (int32_t)(__this->___U3CiU3E__1_3);
		__this->___U3CiU3E__1_3 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0091:
	{
		int32_t L_14 = (int32_t)(__this->___U3CiU3E__1_3);
		QuickSort_1_t5638 * L_15 = (QuickSort_1_t5638 *)(__this->___U3CsorterU3E__0_2);
		NullCheck(L_15);
		Int32U5BU5D_t119* L_16 = (Int32U5BU5D_t119*)(L_15->___indexes_1);
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_004f;
		}
	}
	{
		__this->___U24PC_4 = (-1);
	}

IL_00b0:
	{
		return 0;
	}

IL_00b2:
	{
		return 1;
	}
	// Dead block : IL_00b4: ldloc.1
}
// System.Void System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::Dispose()
extern "C" void U3CSortU3Ec__Iterator21_Dispose_m33886_gshared (U3CSortU3Ec__Iterator21_t5639 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_4 = (-1);
		return;
	}
}
// Parse.Internal.SynchronizedEventHandler`1<System.Object>
#include "Parse_Unity_Parse_Internal_SynchronizedEventHandler_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.SynchronizedEventHandler`1<System.Object>
#include "Parse_Unity_Parse_Internal_SynchronizedEventHandler_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
#include "mscorlib_System_Collections_Generic_List_1_gen_63.h"
// Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2<System.Object>
#include "Parse_Unity_Parse_Internal_SynchronizedEventHandler_1_U3CU3E.h"
#include "Parse.Unity_ArrayTypes.h"
// System.Threading.Tasks.Task`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_0.h"
// System.Collections.Generic.LinkedList`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
#include "System_System_Collections_Generic_LinkedList_1_gen_2.h"
// System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
#include "mscorlib_System_Collections_Generic_List_1_gen_113.h"
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>
#include "Parse_Unity_System_Tuple_2_gen_7.h"
// System.Func`2<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>,System.Threading.Tasks.Task>
#include "System_Core_System_Func_2_gen_42.h"
// Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2<System.Object>
#include "Parse_Unity_Parse_Internal_SynchronizedEventHandler_1_U3CU3EMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Func`2<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>,System.Threading.Tasks.Task>
#include "System_Core_System_Func_2_gen_42MethodDeclarations.h"
// System.Collections.Generic.LinkedList`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
#include "System_System_Collections_Generic_LinkedList_1_gen_2MethodDeclarations.h"
struct Task_t1418;
struct Task_1_t1543;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Int32>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Int32>(T)
extern "C" Task_1_t1543 * Task_FromResult_TisInt32_t29_m7341_gshared (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method);
#define Task_FromResult_TisInt32_t29_m7341(__this /* static, unused */, ___result, method) (( Task_1_t1543 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))Task_FromResult_TisInt32_t29_m7341_gshared)(__this /* static, unused */, ___result, method)
struct Enumerable_t1134;
struct List_1_t5655;
struct IEnumerable_1_t6804;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisTuple_2_t1848_m46444(__this /* static, unused */, p0, method) (( List_1_t5655 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m7372_gshared)(__this /* static, unused */, p0, method)
struct Enumerable_t1134;
struct IEnumerable_1_t1569;
struct IEnumerable_1_t6804;
struct Func_2_t5656;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>,System.Threading.Tasks.Task>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>,System.Threading.Tasks.Task>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisTuple_2_t1848_TisTask_t1418_m46445(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t5656 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m7399_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t1134;
struct List_1_t1629;
struct IEnumerable_1_t1569;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Threading.Tasks.Task>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Threading.Tasks.Task>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisTask_t1418_m7508(__this /* static, unused */, p0, method) (( List_1_t1629 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m7372_gshared)(__this /* static, unused */, p0, method)


// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern TypeInfo* Task_1U5BU5D_t5650_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1418_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t5656_il2cpp_TypeInfo_var;
extern const MethodInfo* Task_FromResult_TisInt32_t29_m7341_MethodInfo_var;
extern const MethodInfo* Enumerable_ToList_TisTuple_2_t1848_m46444_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m34145_MethodInfo_var;
extern const MethodInfo* Enumerable_Select_TisTuple_2_t1848_TisTask_t1418_m46445_MethodInfo_var;
extern const MethodInfo* Enumerable_ToList_TisTask_t1418_m7508_MethodInfo_var;
extern "C" Task_t1418 * SynchronizedEventHandler_1_Invoke_m33887_gshared (SynchronizedEventHandler_1_t5641 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_1U5BU5D_t5650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13533);
		Task_t1418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3055);
		Func_2_t5656_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12068);
		Task_FromResult_TisInt32_t29_m7341_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484252);
		Enumerable_ToList_TisTuple_2_t1848_m46444_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485222);
		Func_2__ctor_m34145_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485223);
		Enumerable_Select_TisTuple_2_t1848_TisTask_t1418_m46445_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485224);
		Enumerable_ToList_TisTask_t1418_m7508_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484440);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	List_1_t1629 * V_1 = {0};
	U3CU3Ec__DisplayClass2_t5651 * V_2 = {0};
	Task_1U5BU5D_t5650* V_3 = {0};
	LinkedList_1_t5640 * V_4 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CU3Ec__DisplayClass2_t5651 * L_0 = (U3CU3Ec__DisplayClass2_t5651 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass2_t5651 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_2 = (U3CU3Ec__DisplayClass2_t5651 *)L_0;
		U3CU3Ec__DisplayClass2_t5651 * L_1 = V_2;
		Object_t * L_2 = ___sender;
		NullCheck(L_1);
		L_1->___sender_1 = L_2;
		U3CU3Ec__DisplayClass2_t5651 * L_3 = V_2;
		Object_t * L_4 = ___args;
		NullCheck(L_3);
		L_3->___args_2 = L_4;
		U3CU3Ec__DisplayClass2_t5651 * L_5 = V_2;
		V_3 = (Task_1U5BU5D_t5650*)((Task_1U5BU5D_t5650*)SZArrayNew(Task_1U5BU5D_t5650_il2cpp_TypeInfo_var, 1));
		Task_1U5BU5D_t5650* L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1418_il2cpp_TypeInfo_var);
		Task_1_t1543 * L_7 = Task_FromResult_TisInt32_t29_m7341(NULL /*static, unused*/, (int32_t)0, /*hidden argument*/Task_FromResult_TisInt32_t29_m7341_MethodInfo_var);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Task_1_t1543 **)(Task_1_t1543 **)SZArrayLdElema(L_6, 0)) = (Task_1_t1543 *)L_7;
		Task_1U5BU5D_t5650* L_8 = V_3;
		NullCheck(L_5);
		L_5->___toContinue_0 = L_8;
		LinkedList_1_t5640 * L_9 = (LinkedList_1_t5640 *)(__this->___delegates_0);
		LinkedList_1_t5640 * L_10 = (LinkedList_1_t5640 *)L_9;
		V_4 = (LinkedList_1_t5640 *)L_10;
		Monitor_Enter_m2469(NULL /*static, unused*/, (Object_t *)L_10, /*hidden argument*/NULL);
	}

IL_0039:
	try
	{ // begin try (depth: 1)
		LinkedList_1_t5640 * L_11 = (LinkedList_1_t5640 *)(__this->___delegates_0);
		List_1_t5655 * L_12 = Enumerable_ToList_TisTuple_2_t1848_m46444(NULL /*static, unused*/, (Object_t*)L_11, /*hidden argument*/Enumerable_ToList_TisTuple_2_t1848_m46444_MethodInfo_var);
		V_0 = (Object_t*)L_12;
		IL2CPP_LEAVE(0x4F, FINALLY_0047);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		LinkedList_1_t5640 * L_13 = V_4;
		Monitor_Exit_m2472(NULL /*static, unused*/, (Object_t *)L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_004f:
	{
		Object_t* L_14 = V_0;
		U3CU3Ec__DisplayClass2_t5651 * L_15 = V_2;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Func_2_t5656 * L_17 = (Func_2_t5656 *)il2cpp_codegen_object_new (Func_2_t5656_il2cpp_TypeInfo_var);
		Func_2__ctor_m34145(L_17, (Object_t *)L_15, (IntPtr_t)L_16, /*hidden argument*/Func_2__ctor_m34145_MethodInfo_var);
		Object_t* L_18 = Enumerable_Select_TisTuple_2_t1848_TisTask_t1418_m46445(NULL /*static, unused*/, (Object_t*)L_14, (Func_2_t5656 *)L_17, /*hidden argument*/Enumerable_Select_TisTuple_2_t1848_TisTask_t1418_m46445_MethodInfo_var);
		List_1_t1629 * L_19 = Enumerable_ToList_TisTask_t1418_m7508(NULL /*static, unused*/, (Object_t*)L_18, /*hidden argument*/Enumerable_ToList_TisTask_t1418_m7508_MethodInfo_var);
		V_1 = (List_1_t1629 *)L_19;
		List_1_t1629 * L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1418_il2cpp_TypeInfo_var);
		Task_t1418 * L_21 = Task_WhenAll_m7290(NULL /*static, unused*/, (Object_t*)L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern TypeInfo* LinkedList_1_t5640_il2cpp_TypeInfo_var;
extern const MethodInfo* LinkedList_1__ctor_m33889_MethodInfo_var;
extern "C" void SynchronizedEventHandler_1__ctor_m33888_gshared (SynchronizedEventHandler_1_t5641 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LinkedList_1_t5640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12045);
		LinkedList_1__ctor_m33889_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485225);
		s_Il2CppMethodIntialized = true;
	}
	{
		LinkedList_1_t5640 * L_0 = (LinkedList_1_t5640 *)il2cpp_codegen_object_new (LinkedList_1_t5640_il2cpp_TypeInfo_var);
		LinkedList_1__ctor_m33889(L_0, /*hidden argument*/LinkedList_1__ctor_m33889_MethodInfo_var);
		__this->___delegates_0 = L_0;
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.LinkedList`1<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.LinkedList`1<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_gen_0MethodDeclarations.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
#include "System_System_Collections_Generic_LinkedListNode_1_gen_0.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_1.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.LinkedListNode`1<System.Object>
#include "System_System_Collections_Generic_LinkedListNode_1_gen_0MethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_1MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"


// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void LinkedList_1__ctor_m12156_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m85(L_0, /*hidden argument*/NULL);
		__this->___syncRoot_4 = L_0;
		__this->___first_5 = (LinkedListNode_1_t2661 *)NULL;
		int32_t L_1 = (int32_t)0;
		V_0 = (uint32_t)L_1;
		__this->___version_3 = L_1;
		uint32_t L_2 = V_0;
		__this->___count_2 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void LinkedList_1__ctor_m33891_gshared (LinkedList_1_t2611 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((LinkedList_1_t2611 *)__this);
		(( void (*) (LinkedList_1_t2611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((LinkedList_1_t2611 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		SerializationInfo_t1322 * L_0 = ___info;
		__this->___si_6 = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m85(L_1, /*hidden argument*/NULL);
		__this->___syncRoot_4 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m33893_gshared (LinkedList_1_t2611 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		NullCheck((LinkedList_1_t2611 *)__this);
		(( LinkedListNode_1_t2661 * (*) (LinkedList_1_t2611 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((LinkedList_1_t2611 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m33895_gshared (LinkedList_1_t2611 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		ObjectU5BU5D_t21* L_1 = V_0;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t1126 * L_2 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_2, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		ObjectU5BU5D_t21* L_3 = V_0;
		int32_t L_4 = ___index;
		NullCheck((LinkedList_1_t2611 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t21*, int32_t >::Invoke(16 /* System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32) */, (LinkedList_1_t2611 *)__this, (ObjectU5BU5D_t21*)L_3, (int32_t)L_4);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33897_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method)
{
	{
		NullCheck((LinkedList_1_t2611 *)__this);
		Enumerator_t5643  L_0 = (( Enumerator_t5643  (*) (LinkedList_1_t2611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((LinkedList_1_t2611 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Enumerator_t5643  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m33899_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method)
{
	{
		NullCheck((LinkedList_1_t2611 *)__this);
		Enumerator_t5643  L_0 = (( Enumerator_t5643  (*) (LinkedList_1_t2611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((LinkedList_1_t2611 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Enumerator_t5643  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33901_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m33903_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m33905_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_4);
		return L_0;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" void LinkedList_1_VerifyReferencedNode_m33907_gshared (LinkedList_1_t2611 * __this, LinkedListNode_1_t2661 * ___node, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	{
		LinkedListNode_1_t2661 * L_0 = ___node;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		LinkedListNode_1_t2661 * L_2 = ___node;
		NullCheck((LinkedListNode_1_t2661 *)L_2);
		LinkedList_1_t2611 * L_3 = (( LinkedList_1_t2611 * (*) (LinkedListNode_1_t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((LinkedListNode_1_t2661 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if ((((Object_t*)(LinkedList_1_t2611 *)L_3) == ((Object_t*)(LinkedList_1_t2611 *)__this)))
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t1086 * L_4 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11581(L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		return;
	}
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddBefore(System.Collections.Generic.LinkedListNode`1<T>,T)
extern "C" LinkedListNode_1_t2661 * LinkedList_1_AddBefore_m33909_gshared (LinkedList_1_t2611 * __this, LinkedListNode_1_t2661 * ___node, Object_t * ___value, const MethodInfo* method)
{
	LinkedListNode_1_t2661 * V_0 = {0};
	{
		LinkedListNode_1_t2661 * L_0 = ___node;
		NullCheck((LinkedList_1_t2611 *)__this);
		(( void (*) (LinkedList_1_t2611 *, LinkedListNode_1_t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((LinkedList_1_t2611 *)__this, (LinkedListNode_1_t2661 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_1 = ___value;
		LinkedListNode_1_t2661 * L_2 = ___node;
		NullCheck(L_2);
		LinkedListNode_1_t2661 * L_3 = (LinkedListNode_1_t2661 *)(L_2->___back_3);
		LinkedListNode_1_t2661 * L_4 = ___node;
		LinkedListNode_1_t2661 * L_5 = (LinkedListNode_1_t2661 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (LinkedListNode_1_t2661 *, LinkedList_1_t2611 *, Object_t *, LinkedListNode_1_t2661 *, LinkedListNode_1_t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_5, (LinkedList_1_t2611 *)__this, (Object_t *)L_1, (LinkedListNode_1_t2661 *)L_3, (LinkedListNode_1_t2661 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		V_0 = (LinkedListNode_1_t2661 *)L_5;
		uint32_t L_6 = (uint32_t)(__this->___count_2);
		__this->___count_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
		uint32_t L_7 = (uint32_t)(__this->___version_3);
		__this->___version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		LinkedListNode_1_t2661 * L_8 = ___node;
		LinkedListNode_1_t2661 * L_9 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		if ((!(((Object_t*)(LinkedListNode_1_t2661 *)L_8) == ((Object_t*)(LinkedListNode_1_t2661 *)L_9))))
		{
			goto IL_0045;
		}
	}
	{
		LinkedListNode_1_t2661 * L_10 = V_0;
		__this->___first_5 = L_10;
	}

IL_0045:
	{
		LinkedListNode_1_t2661 * L_11 = V_0;
		return L_11;
	}
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t2661 * LinkedList_1_AddLast_m12157_gshared (LinkedList_1_t2611 * __this, Object_t * ___value, const MethodInfo* method)
{
	LinkedListNode_1_t2661 * V_0 = {0};
	{
		LinkedListNode_1_t2661 * L_0 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		Object_t * L_1 = ___value;
		LinkedListNode_1_t2661 * L_2 = (LinkedListNode_1_t2661 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (LinkedListNode_1_t2661 *, LinkedList_1_t2611 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_2, (LinkedList_1_t2611 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		V_0 = (LinkedListNode_1_t2661 *)L_2;
		LinkedListNode_1_t2661 * L_3 = V_0;
		__this->___first_5 = L_3;
		goto IL_0038;
	}

IL_001f:
	{
		Object_t * L_4 = ___value;
		LinkedListNode_1_t2661 * L_5 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		NullCheck(L_5);
		LinkedListNode_1_t2661 * L_6 = (LinkedListNode_1_t2661 *)(L_5->___back_3);
		LinkedListNode_1_t2661 * L_7 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		LinkedListNode_1_t2661 * L_8 = (LinkedListNode_1_t2661 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (LinkedListNode_1_t2661 *, LinkedList_1_t2611 *, Object_t *, LinkedListNode_1_t2661 *, LinkedListNode_1_t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_8, (LinkedList_1_t2611 *)__this, (Object_t *)L_4, (LinkedListNode_1_t2661 *)L_6, (LinkedListNode_1_t2661 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		V_0 = (LinkedListNode_1_t2661 *)L_8;
	}

IL_0038:
	{
		uint32_t L_9 = (uint32_t)(__this->___count_2);
		__this->___count_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		uint32_t L_10 = (uint32_t)(__this->___version_3);
		__this->___version_3 = ((int32_t)((int32_t)L_10+(int32_t)1));
		LinkedListNode_1_t2661 * L_11 = V_0;
		return L_11;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m33912_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method)
{
	{
		goto IL_000b;
	}

IL_0005:
	{
		NullCheck((LinkedList_1_t2611 *)__this);
		(( void (*) (LinkedList_1_t2611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((LinkedList_1_t2611 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
	}

IL_000b:
	{
		LinkedListNode_1_t2661 * L_0 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m33914_gshared (LinkedList_1_t2611 * __this, Object_t * ___value, const MethodInfo* method)
{
	LinkedListNode_1_t2661 * V_0 = {0};
	{
		LinkedListNode_1_t2661 * L_0 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		V_0 = (LinkedListNode_1_t2661 *)L_0;
		LinkedListNode_1_t2661 * L_1 = V_0;
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
		LinkedListNode_1_t2661 * L_2 = V_0;
		NullCheck((LinkedListNode_1_t2661 *)L_2);
		Object_t * L_3 = (( Object_t * (*) (LinkedListNode_1_t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((LinkedListNode_1_t2661 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_4 = L_3;
		NullCheck((Object_t *)(*(&___value)));
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)(*(&___value)), (Object_t *)((Object_t *)L_4));
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkedListNode_1_t2661 * L_6 = V_0;
		NullCheck(L_6);
		LinkedListNode_1_t2661 * L_7 = (LinkedListNode_1_t2661 *)(L_6->___forward_2);
		V_0 = (LinkedListNode_1_t2661 *)L_7;
		LinkedListNode_1_t2661 * L_8 = V_0;
		LinkedListNode_1_t2661 * L_9 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		if ((!(((Object_t*)(LinkedListNode_1_t2661 *)L_8) == ((Object_t*)(LinkedListNode_1_t2661 *)L_9))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void LinkedList_1_CopyTo_m33916_gshared (LinkedList_1_t2611 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	LinkedListNode_1_t2661 * V_0 = {0};
	{
		ObjectU5BU5D_t21* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral3370, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		ObjectU5BU5D_t21* L_3 = ___array;
		NullCheck((Array_t *)L_3);
		int32_t L_4 = Array_GetLowerBound_m17642((Array_t *)L_3, (int32_t)0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) < ((uint32_t)L_4))))
		{
			goto IL_0029;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_5 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_5, (String_t*)(String_t*) &_stringLiteral2645, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		ObjectU5BU5D_t21* L_6 = ___array;
		NullCheck((Array_t *)L_6);
		int32_t L_7 = Array_get_Rank_m16762((Array_t *)L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentException_t1126 * L_8 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_8, (String_t*)(String_t*) &_stringLiteral3370, (String_t*)(String_t*) &_stringLiteral3627, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0045:
	{
		ObjectU5BU5D_t21* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = ___index;
		ObjectU5BU5D_t21* L_11 = ___array;
		NullCheck((Array_t *)L_11);
		int32_t L_12 = Array_GetLowerBound_m17642((Array_t *)L_11, (int32_t)0, /*hidden argument*/NULL);
		uint32_t L_13 = (uint32_t)(__this->___count_2);
		if ((((int64_t)(((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10))+(int32_t)L_12))))) >= ((int64_t)(((uint64_t)L_13)))))
		{
			goto IL_006a;
		}
	}
	{
		ArgumentException_t1126 * L_14 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_14, (String_t*)(String_t*) &_stringLiteral3628, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_006a:
	{
		LinkedListNode_1_t2661 * L_15 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		V_0 = (LinkedListNode_1_t2661 *)L_15;
		LinkedListNode_1_t2661 * L_16 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		if (L_16)
		{
			goto IL_007d;
		}
	}
	{
		return;
	}

IL_007d:
	{
		ObjectU5BU5D_t21* L_17 = ___array;
		int32_t L_18 = ___index;
		LinkedListNode_1_t2661 * L_19 = V_0;
		NullCheck((LinkedListNode_1_t2661 *)L_19);
		Object_t * L_20 = (( Object_t * (*) (LinkedListNode_1_t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((LinkedListNode_1_t2661 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, L_18)) = (Object_t *)L_20;
		int32_t L_21 = ___index;
		___index = (int32_t)((int32_t)((int32_t)L_21+(int32_t)1));
		LinkedListNode_1_t2661 * L_22 = V_0;
		NullCheck(L_22);
		LinkedListNode_1_t2661 * L_23 = (LinkedListNode_1_t2661 *)(L_22->___forward_2);
		V_0 = (LinkedListNode_1_t2661 *)L_23;
		LinkedListNode_1_t2661 * L_24 = V_0;
		LinkedListNode_1_t2661 * L_25 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		if ((!(((Object_t*)(LinkedListNode_1_t2661 *)L_24) == ((Object_t*)(LinkedListNode_1_t2661 *)L_25))))
		{
			goto IL_007d;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t2661 * LinkedList_1_Find_m33918_gshared (LinkedList_1_t2611 * __this, Object_t * ___value, const MethodInfo* method)
{
	LinkedListNode_1_t2661 * V_0 = {0};
	{
		LinkedListNode_1_t2661 * L_0 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		V_0 = (LinkedListNode_1_t2661 *)L_0;
		LinkedListNode_1_t2661 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (LinkedListNode_1_t2661 *)NULL;
	}

IL_000f:
	{
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		if (((Object_t *)L_3))
		{
			goto IL_002a;
		}
	}
	{
		LinkedListNode_1_t2661 * L_4 = V_0;
		NullCheck((LinkedListNode_1_t2661 *)L_4);
		Object_t * L_5 = (( Object_t * (*) (LinkedListNode_1_t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((LinkedListNode_1_t2661 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_6 = L_5;
		if (!((Object_t *)L_6))
		{
			goto IL_0052;
		}
	}

IL_002a:
	{
		Object_t * L_7 = ___value;
		Object_t * L_8 = L_7;
		if (!((Object_t *)L_8))
		{
			goto IL_0054;
		}
	}
	{
		LinkedListNode_1_t2661 * L_9 = V_0;
		NullCheck((LinkedListNode_1_t2661 *)L_9);
		Object_t * L_10 = (( Object_t * (*) (LinkedListNode_1_t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((LinkedListNode_1_t2661 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_11 = L_10;
		NullCheck((Object_t *)(*(&___value)));
		bool L_12 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)(*(&___value)), (Object_t *)((Object_t *)L_11));
		if (!L_12)
		{
			goto IL_0054;
		}
	}

IL_0052:
	{
		LinkedListNode_1_t2661 * L_13 = V_0;
		return L_13;
	}

IL_0054:
	{
		LinkedListNode_1_t2661 * L_14 = V_0;
		NullCheck(L_14);
		LinkedListNode_1_t2661 * L_15 = (LinkedListNode_1_t2661 *)(L_14->___forward_2);
		V_0 = (LinkedListNode_1_t2661 *)L_15;
		LinkedListNode_1_t2661 * L_16 = V_0;
		LinkedListNode_1_t2661 * L_17 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		if ((!(((Object_t*)(LinkedListNode_1_t2661 *)L_16) == ((Object_t*)(LinkedListNode_1_t2661 *)L_17))))
		{
			goto IL_000f;
		}
	}
	{
		return (LinkedListNode_1_t2661 *)NULL;
	}
}
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5643  LinkedList_1_GetEnumerator_m33920_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5643  L_0 = {0};
		(( void (*) (Enumerator_t5643 *, LinkedList_1_t2611 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(&L_0, (LinkedList_1_t2611 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_0;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void LinkedList_1_GetObjectData_m33922_gshared (LinkedList_1_t2611 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		uint32_t L_0 = (uint32_t)(__this->___count_2);
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), (((uintptr_t)L_0))));
		ObjectU5BU5D_t21* L_1 = V_0;
		NullCheck((LinkedList_1_t2611 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t21*, int32_t >::Invoke(16 /* System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32) */, (LinkedList_1_t2611 *)__this, (ObjectU5BU5D_t21*)L_1, (int32_t)0);
		SerializationInfo_t1322 * L_2 = ___info;
		ObjectU5BU5D_t21* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t1322 *)L_2);
		SerializationInfo_AddValue_m16764((SerializationInfo_t1322 *)L_2, (String_t*)(String_t*) &_stringLiteral3629, (Object_t *)(Object_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_5 = ___info;
		uint32_t L_6 = (uint32_t)(__this->___version_3);
		NullCheck((SerializationInfo_t1322 *)L_5);
		SerializationInfo_AddValue_m20046((SerializationInfo_t1322 *)L_5, (String_t*)(String_t*) &_stringLiteral1822, (uint32_t)L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void LinkedList_1_OnDeserialization_m33924_gshared (LinkedList_1_t2611 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	Object_t * V_1 = {0};
	ObjectU5BU5D_t21* V_2 = {0};
	int32_t V_3 = 0;
	{
		SerializationInfo_t1322 * L_0 = (SerializationInfo_t1322 *)(__this->___si_6);
		if (!L_0)
		{
			goto IL_0074;
		}
	}
	{
		SerializationInfo_t1322 * L_1 = (SerializationInfo_t1322 *)(__this->___si_6);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t1322 *)L_1);
		Object_t * L_3 = SerializationInfo_GetValue_m11566((SerializationInfo_t1322 *)L_1, (String_t*)(String_t*) &_stringLiteral3629, (Type_t *)L_2, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		ObjectU5BU5D_t21* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t21* L_5 = V_0;
		V_2 = (ObjectU5BU5D_t21*)L_5;
		V_3 = (int32_t)0;
		goto IL_004e;
	}

IL_003a:
	{
		ObjectU5BU5D_t21* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_1 = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_8));
		Object_t * L_9 = V_1;
		NullCheck((LinkedList_1_t2611 *)__this);
		(( LinkedListNode_1_t2661 * (*) (LinkedList_1_t2611 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((LinkedList_1_t2611 *)__this, (Object_t *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_10 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_t21* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_003a;
		}
	}

IL_0057:
	{
		SerializationInfo_t1322 * L_13 = (SerializationInfo_t1322 *)(__this->___si_6);
		NullCheck((SerializationInfo_t1322 *)L_13);
		uint32_t L_14 = SerializationInfo_GetUInt32_m20049((SerializationInfo_t1322 *)L_13, (String_t*)(String_t*) &_stringLiteral1822, /*hidden argument*/NULL);
		__this->___version_3 = L_14;
		__this->___si_6 = (SerializationInfo_t1322 *)NULL;
	}

IL_0074:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m33926_gshared (LinkedList_1_t2611 * __this, Object_t * ___value, const MethodInfo* method)
{
	LinkedListNode_1_t2661 * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		NullCheck((LinkedList_1_t2611 *)__this);
		LinkedListNode_1_t2661 * L_1 = (( LinkedListNode_1_t2661 * (*) (LinkedList_1_t2611 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((LinkedList_1_t2611 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		V_0 = (LinkedListNode_1_t2661 *)L_1;
		LinkedListNode_1_t2661 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		LinkedListNode_1_t2661 * L_3 = V_0;
		NullCheck((LinkedList_1_t2611 *)__this);
		(( void (*) (LinkedList_1_t2611 *, LinkedListNode_1_t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((LinkedList_1_t2611 *)__this, (LinkedListNode_1_t2661 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return 1;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m33928_gshared (LinkedList_1_t2611 * __this, LinkedListNode_1_t2661 * ___node, const MethodInfo* method)
{
	{
		LinkedListNode_1_t2661 * L_0 = ___node;
		NullCheck((LinkedList_1_t2611 *)__this);
		(( void (*) (LinkedList_1_t2611 *, LinkedListNode_1_t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((LinkedList_1_t2611 *)__this, (LinkedListNode_1_t2661 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		uint32_t L_1 = (uint32_t)(__this->___count_2);
		__this->___count_2 = ((int32_t)((int32_t)L_1-(int32_t)1));
		uint32_t L_2 = (uint32_t)(__this->___count_2);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		__this->___first_5 = (LinkedListNode_1_t2661 *)NULL;
	}

IL_0027:
	{
		LinkedListNode_1_t2661 * L_3 = ___node;
		LinkedListNode_1_t2661 * L_4 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		if ((!(((Object_t*)(LinkedListNode_1_t2661 *)L_3) == ((Object_t*)(LinkedListNode_1_t2661 *)L_4))))
		{
			goto IL_0044;
		}
	}
	{
		LinkedListNode_1_t2661 * L_5 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		NullCheck(L_5);
		LinkedListNode_1_t2661 * L_6 = (LinkedListNode_1_t2661 *)(L_5->___forward_2);
		__this->___first_5 = L_6;
	}

IL_0044:
	{
		uint32_t L_7 = (uint32_t)(__this->___version_3);
		__this->___version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		LinkedListNode_1_t2661 * L_8 = ___node;
		NullCheck((LinkedListNode_1_t2661 *)L_8);
		(( void (*) (LinkedListNode_1_t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((LinkedListNode_1_t2661 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m33930_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method)
{
	{
		LinkedListNode_1_t2661 * L_0 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		LinkedListNode_1_t2661 * L_1 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		NullCheck((LinkedList_1_t2611 *)__this);
		(( void (*) (LinkedList_1_t2611 *, LinkedListNode_1_t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((LinkedList_1_t2611 *)__this, (LinkedListNode_1_t2661 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_0017:
	{
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m33932_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method)
{
	{
		LinkedListNode_1_t2661 * L_0 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		LinkedListNode_1_t2661 * L_1 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		NullCheck(L_1);
		LinkedListNode_1_t2661 * L_2 = (LinkedListNode_1_t2661 *)(L_1->___back_3);
		NullCheck((LinkedList_1_t2611 *)__this);
		(( void (*) (LinkedList_1_t2611 *, LinkedListNode_1_t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((LinkedList_1_t2611 *)__this, (LinkedListNode_1_t2661 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_001c:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m33934_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (uint32_t)(__this->___count_2);
		return L_0;
	}
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t2661 * LinkedList_1_get_First_m12158_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method)
{
	{
		LinkedListNode_1_t2661 * L_0 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		return L_0;
	}
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t2661 * LinkedList_1_get_Last_m33937_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method)
{
	LinkedListNode_1_t2661 * G_B3_0 = {0};
	{
		LinkedListNode_1_t2661 * L_0 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LinkedListNode_1_t2661 * L_1 = (LinkedListNode_1_t2661 *)(__this->___first_5);
		NullCheck(L_1);
		LinkedListNode_1_t2661 * L_2 = (LinkedListNode_1_t2661 *)(L_1->___back_3);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = ((LinkedListNode_1_t2661 *)(NULL));
	}

IL_001c:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m33938_gshared (LinkedListNode_1_t2661 * __this, LinkedList_1_t2611 * ___list, Object_t * ___value, const MethodInfo* method)
{
	LinkedListNode_1_t2661 * V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		LinkedList_1_t2611 * L_0 = ___list;
		__this->___container_1 = L_0;
		Object_t * L_1 = ___value;
		__this->___item_0 = L_1;
		V_0 = (LinkedListNode_1_t2661 *)__this;
		__this->___forward_2 = __this;
		LinkedListNode_1_t2661 * L_2 = V_0;
		__this->___back_3 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m33939_gshared (LinkedListNode_1_t2661 * __this, LinkedList_1_t2611 * ___list, Object_t * ___value, LinkedListNode_1_t2661 * ___previousNode, LinkedListNode_1_t2661 * ___nextNode, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		LinkedList_1_t2611 * L_0 = ___list;
		__this->___container_1 = L_0;
		Object_t * L_1 = ___value;
		__this->___item_0 = L_1;
		LinkedListNode_1_t2661 * L_2 = ___previousNode;
		__this->___back_3 = L_2;
		LinkedListNode_1_t2661 * L_3 = ___nextNode;
		__this->___forward_2 = L_3;
		LinkedListNode_1_t2661 * L_4 = ___previousNode;
		NullCheck(L_4);
		L_4->___forward_2 = __this;
		LinkedListNode_1_t2661 * L_5 = ___nextNode;
		NullCheck(L_5);
		L_5->___back_3 = __this;
		return;
	}
}
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m33940_gshared (LinkedListNode_1_t2661 * __this, const MethodInfo* method)
{
	LinkedListNode_1_t2661 * V_0 = {0};
	{
		LinkedListNode_1_t2661 * L_0 = (LinkedListNode_1_t2661 *)(__this->___back_3);
		LinkedListNode_1_t2661 * L_1 = (LinkedListNode_1_t2661 *)(__this->___forward_2);
		NullCheck(L_0);
		L_0->___forward_2 = L_1;
		LinkedListNode_1_t2661 * L_2 = (LinkedListNode_1_t2661 *)(__this->___forward_2);
		LinkedListNode_1_t2661 * L_3 = (LinkedListNode_1_t2661 *)(__this->___back_3);
		NullCheck(L_2);
		L_2->___back_3 = L_3;
		V_0 = (LinkedListNode_1_t2661 *)NULL;
		__this->___back_3 = (LinkedListNode_1_t2661 *)NULL;
		LinkedListNode_1_t2661 * L_4 = V_0;
		__this->___forward_2 = L_4;
		__this->___container_1 = (LinkedList_1_t2611 *)NULL;
		return;
	}
}
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t2611 * LinkedListNode_1_get_List_m33941_gshared (LinkedListNode_1_t2661 * __this, const MethodInfo* method)
{
	{
		LinkedList_1_t2611 * L_0 = (LinkedList_1_t2611 *)(__this->___container_1);
		return L_0;
	}
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t2661 * LinkedListNode_1_get_Next_m12160_gshared (LinkedListNode_1_t2661 * __this, const MethodInfo* method)
{
	LinkedListNode_1_t2661 * G_B4_0 = {0};
	{
		LinkedList_1_t2611 * L_0 = (LinkedList_1_t2611 *)(__this->___container_1);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		LinkedListNode_1_t2661 * L_1 = (LinkedListNode_1_t2661 *)(__this->___forward_2);
		LinkedList_1_t2611 * L_2 = (LinkedList_1_t2611 *)(__this->___container_1);
		NullCheck(L_2);
		LinkedListNode_1_t2661 * L_3 = (LinkedListNode_1_t2661 *)(L_2->___first_5);
		if ((((Object_t*)(LinkedListNode_1_t2661 *)L_1) == ((Object_t*)(LinkedListNode_1_t2661 *)L_3)))
		{
			goto IL_002c;
		}
	}
	{
		LinkedListNode_1_t2661 * L_4 = (LinkedListNode_1_t2661 *)(__this->___forward_2);
		G_B4_0 = L_4;
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = ((LinkedListNode_1_t2661 *)(NULL));
	}

IL_002d:
	{
		return G_B4_0;
	}
}
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m12159_gshared (LinkedListNode_1_t2661 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___item_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>)
extern "C" void Enumerator__ctor_m33942_gshared (Enumerator_t5643 * __this, LinkedList_1_t2611 * ___parent, const MethodInfo* method)
{
	{
		LinkedList_1_t2611 * L_0 = ___parent;
		__this->___list_0 = L_0;
		__this->___current_1 = (LinkedListNode_1_t2661 *)NULL;
		__this->___index_2 = (-1);
		LinkedList_1_t2611 * L_1 = ___parent;
		NullCheck(L_1);
		uint32_t L_2 = (uint32_t)(L_1->___version_3);
		__this->___version_3 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m33943_gshared (Enumerator_t5643 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t5643 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5643 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// T System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::get_Current()
extern TypeInfo* ObjectDisposedException_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_get_Current_m33944_gshared (Enumerator_t5643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2644);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	{
		LinkedList_1_t2611 * L_0 = (LinkedList_1_t2611 *)(__this->___list_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t1338 * L_1 = (ObjectDisposedException_t1338 *)il2cpp_codegen_object_new (ObjectDisposedException_t1338_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m6605(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		LinkedListNode_1_t2661 * L_2 = (LinkedListNode_1_t2661 *)(__this->___current_1);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t1086 * L_3 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11581(L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0023:
	{
		LinkedListNode_1_t2661 * L_4 = (LinkedListNode_1_t2661 *)(__this->___current_1);
		NullCheck((LinkedListNode_1_t2661 *)L_4);
		Object_t * L_5 = (( Object_t * (*) (LinkedListNode_1_t2661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((LinkedListNode_1_t2661 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_5;
	}
}
// System.Boolean System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::MoveNext()
extern TypeInfo* ObjectDisposedException_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" bool Enumerator_MoveNext_m33945_gshared (Enumerator_t5643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2644);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	{
		LinkedList_1_t2611 * L_0 = (LinkedList_1_t2611 *)(__this->___list_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t1338 * L_1 = (ObjectDisposedException_t1338 *)il2cpp_codegen_object_new (ObjectDisposedException_t1338_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m6605(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		uint32_t L_2 = (uint32_t)(__this->___version_3);
		LinkedList_1_t2611 * L_3 = (LinkedList_1_t2611 *)(__this->___list_0);
		NullCheck(L_3);
		uint32_t L_4 = (uint32_t)(L_3->___version_3);
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t1086 * L_5 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_5, (String_t*)(String_t*) &_stringLiteral3630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0033:
	{
		LinkedListNode_1_t2661 * L_6 = (LinkedListNode_1_t2661 *)(__this->___current_1);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		LinkedList_1_t2611 * L_7 = (LinkedList_1_t2611 *)(__this->___list_0);
		NullCheck(L_7);
		LinkedListNode_1_t2661 * L_8 = (LinkedListNode_1_t2661 *)(L_7->___first_5);
		__this->___current_1 = L_8;
		goto IL_0082;
	}

IL_0054:
	{
		LinkedListNode_1_t2661 * L_9 = (LinkedListNode_1_t2661 *)(__this->___current_1);
		NullCheck(L_9);
		LinkedListNode_1_t2661 * L_10 = (LinkedListNode_1_t2661 *)(L_9->___forward_2);
		__this->___current_1 = L_10;
		LinkedListNode_1_t2661 * L_11 = (LinkedListNode_1_t2661 *)(__this->___current_1);
		LinkedList_1_t2611 * L_12 = (LinkedList_1_t2611 *)(__this->___list_0);
		NullCheck(L_12);
		LinkedListNode_1_t2661 * L_13 = (LinkedListNode_1_t2661 *)(L_12->___first_5);
		if ((!(((Object_t*)(LinkedListNode_1_t2661 *)L_11) == ((Object_t*)(LinkedListNode_1_t2661 *)L_13))))
		{
			goto IL_0082;
		}
	}
	{
		__this->___current_1 = (LinkedListNode_1_t2661 *)NULL;
	}

IL_0082:
	{
		LinkedListNode_1_t2661 * L_14 = (LinkedListNode_1_t2661 *)(__this->___current_1);
		if (L_14)
		{
			goto IL_0096;
		}
	}
	{
		__this->___index_2 = (-1);
		return 0;
	}

IL_0096:
	{
		int32_t L_15 = (int32_t)(__this->___index_2);
		__this->___index_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
		return 1;
	}
}
// System.Void System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::Dispose()
extern TypeInfo* ObjectDisposedException_t1338_il2cpp_TypeInfo_var;
extern "C" void Enumerator_Dispose_m33946_gshared (Enumerator_t5643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2644);
		s_Il2CppMethodIntialized = true;
	}
	{
		LinkedList_1_t2611 * L_0 = (LinkedList_1_t2611 *)(__this->___list_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t1338 * L_1 = (ObjectDisposedException_t1338 *)il2cpp_codegen_object_new (ObjectDisposedException_t1338_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m6605(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		__this->___current_1 = (LinkedListNode_1_t2661 *)NULL;
		__this->___list_0 = (LinkedList_1_t2611 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2/<>c__DisplayClass4<System.Object>
#include "Parse_Unity_Parse_Internal_SynchronizedEventHandler_1_U3CU3E_0.h"
// System.Threading.Tasks.TaskFactory
#include "Parse_Unity_System_Threading_Tasks_TaskFactory.h"
// System.Action`1<System.Threading.Tasks.Task[]>
#include "mscorlib_System_Action_1_gen_6.h"
// Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2/<>c__DisplayClass4<System.Object>
#include "Parse_Unity_Parse_Internal_SynchronizedEventHandler_1_U3CU3E_0MethodDeclarations.h"
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>
#include "Parse_Unity_System_Tuple_2_gen_7MethodDeclarations.h"
// System.Action`1<System.Threading.Tasks.Task[]>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"
// System.Threading.Tasks.TaskFactory
#include "Parse_Unity_System_Threading_Tasks_TaskFactoryMethodDeclarations.h"


// System.Void Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass2__ctor_m34071_gshared (U3CU3Ec__DisplayClass2_t5651 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2<System.Object>::<Invoke>b__0(System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>)
extern TypeInfo* Action_1_t1536_il2cpp_TypeInfo_var;
extern const MethodInfo* Tuple_2_get_Item2_m33955_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m7677_MethodInfo_var;
extern "C" Task_t1418 * U3CU3Ec__DisplayClass2_U3CInvokeU3Eb__0_m34072_gshared (U3CU3Ec__DisplayClass2_t5651 * __this, Tuple_2_t1848 * ___p, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t1536_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3274);
		Tuple_2_get_Item2_m33955_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485226);
		Action_1__ctor_m7677_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484562);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass4_t5653 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass4_t5653 * L_0 = (U3CU3Ec__DisplayClass4_t5653 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass4_t5653 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass4_t5653 *)L_0;
		U3CU3Ec__DisplayClass4_t5653 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals3_0 = __this;
		U3CU3Ec__DisplayClass4_t5653 * L_2 = V_0;
		Tuple_2_t1848 * L_3 = ___p;
		NullCheck(L_2);
		L_2->___p_1 = L_3;
		U3CU3Ec__DisplayClass4_t5653 * L_4 = V_0;
		NullCheck(L_4);
		Tuple_2_t1848 * L_5 = (Tuple_2_t1848 *)(L_4->___p_1);
		NullCheck((Tuple_2_t1848 *)L_5);
		TaskFactory_t1539 * L_6 = Tuple_2_get_Item2_m33955((Tuple_2_t1848 *)L_5, /*hidden argument*/Tuple_2_get_Item2_m33955_MethodInfo_var);
		Task_1U5BU5D_t5650* L_7 = (Task_1U5BU5D_t5650*)(__this->___toContinue_0);
		U3CU3Ec__DisplayClass4_t5653 * L_8 = V_0;
		IntPtr_t L_9 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t1536 * L_10 = (Action_1_t1536 *)il2cpp_codegen_object_new (Action_1_t1536_il2cpp_TypeInfo_var);
		Action_1__ctor_m7677(L_10, (Object_t *)L_8, (IntPtr_t)L_9, /*hidden argument*/Action_1__ctor_m7677_MethodInfo_var);
		NullCheck((TaskFactory_t1539 *)L_6);
		Task_t1418 * L_11 = TaskFactory_ContinueWhenAll_m7308((TaskFactory_t1539 *)L_6, (TaskU5BU5D_t1520*)(TaskU5BU5D_t1520*)L_7, (Action_1_t1536 *)L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2/<>c__DisplayClass4<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass4__ctor_m34078_gshared (U3CU3Ec__DisplayClass4_t5653 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2/<>c__DisplayClass4<System.Object>::<Invoke>b__1(System.Threading.Tasks.Task[])
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern const MethodInfo* Tuple_2_get_Item1_m33953_MethodInfo_var;
extern "C" void U3CU3Ec__DisplayClass4_U3CInvokeU3Eb__1_m34079_gshared (U3CU3Ec__DisplayClass4_t5653 * __this, TaskU5BU5D_t1520* ____, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Tuple_2_get_Item1_m33953_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485227);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	{
		Tuple_2_t1848 * L_0 = (Tuple_2_t1848 *)(__this->___p_1);
		NullCheck((Tuple_2_t1848 *)L_0);
		Delegate_t572 * L_1 = Tuple_2_get_Item1_m33953((Tuple_2_t1848 *)L_0, /*hidden argument*/Tuple_2_get_Item1_m33953_MethodInfo_var);
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 2));
		ObjectU5BU5D_t21* L_2 = V_0;
		U3CU3Ec__DisplayClass2_t5651 * L_3 = (U3CU3Ec__DisplayClass2_t5651 *)(__this->___CSU24U3CU3E8__locals3_0);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)(L_3->___sender_1);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_4;
		ObjectU5BU5D_t21* L_5 = V_0;
		U3CU3Ec__DisplayClass2_t5651 * L_6 = (U3CU3Ec__DisplayClass2_t5651 *)(__this->___CSU24U3CU3E8__locals3_0);
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)(L_6->___args_2);
		Object_t * L_8 = L_7;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, ((Object_t *)L_8));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)((Object_t *)L_8);
		ObjectU5BU5D_t21* L_9 = V_0;
		NullCheck((Delegate_t572 *)L_1);
		Delegate_DynamicInvoke_m17586((Delegate_t572 *)L_1, (ObjectU5BU5D_t21*)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>
#include "System_Core_System_Func_2_gen_43.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>
#include "System_Core_System_Func_2_gen_43MethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"


// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m34149_gshared (Func_2_t5657 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::Invoke(T)
extern "C" uint8_t Func_2_Invoke_m34151_gshared (Func_2_t5657 * __this, KeyValuePair_2_t1591  ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m34151((Func_2_t5657 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, KeyValuePair_2_t1591  ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t1591  ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t1591_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_2_BeginInvoke_m34153_gshared (Func_2_t5657 * __this, KeyValuePair_2_t1591  ___arg1, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t1591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6700);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(KeyValuePair_2_t1591_il2cpp_TypeInfo_var, &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_2_EndInvoke_m34155_gshared (Func_2_t5657 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_44.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_44MethodDeclarations.h"



// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m34156_gshared (Func_2_t1594 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m34158_gshared (Func_2_t1594 * __this, KeyValuePair_2_t1591  ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m34158((Func_2_t1594 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, KeyValuePair_2_t1591  ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t1591  ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* KeyValuePair_2_t1591_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_2_BeginInvoke_m34160_gshared (Func_2_t1594 * __this, KeyValuePair_2_t1591  ___arg1, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_t1591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6700);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(KeyValuePair_2_t1591_il2cpp_TypeInfo_var, &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m34162_gshared (Func_2_t1594 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3EMethodDeclarations.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
#include "System_Core_System_Func_2_gen_45.h"
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
#include "System_Core_System_Func_2_gen_45MethodDeclarations.h"


// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m34197_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" KeyValuePair_2_t1591  U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m34198_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1591  L_0 = (KeyValuePair_2_t1591 )(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m34199_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t1591  L_0 = (KeyValuePair_2_t1591 )(__this->___U24current_5);
		KeyValuePair_2_t1591  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), &L_1);
		return L_2;
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m34200_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(8 /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator() */, (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" Object_t* U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m34201_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 * __this, const MethodInfo* method)
{
	U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m5242(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
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
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 * L_2 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 *)L_2;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 * L_5 = V_0;
		Func_2_t1593 * L_6 = (Func_2_t1593 *)(__this->___U3CU24U3Epredicate_7);
		NullCheck(L_5);
		L_5->___predicate_3 = L_6;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m34202_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
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
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
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
			KeyValuePair_2_t1591  L_6 = (KeyValuePair_2_t1591 )InterfaceFuncInvoker0< KeyValuePair_2_t1591  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t1593 * L_7 = (Func_2_t1593 *)(__this->___predicate_3);
			KeyValuePair_2_t1591  L_8 = (KeyValuePair_2_t1591 )(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t1593 *)L_7);
			bool L_9 = (bool)VirtFuncInvoker1< bool, KeyValuePair_2_t1591  >::Invoke(11 /* TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Invoke(T) */, (Func_2_t1593 *)L_7, (KeyValuePair_2_t1591 )L_8);
			if (!L_9)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			KeyValuePair_2_t1591  L_10 = (KeyValuePair_2_t1591 )(__this->___U3CelementU3E__1_2);
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
		__last_unhandled_exception = (Exception_t468 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xC0, IL_00c0)
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
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
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m34203_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5661 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
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
		__last_unhandled_exception = (Exception_t468 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_1MethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor()
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2__ctor_m34204_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m34205_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerator_get_Current_m34206_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerable_GetEnumerator_m34207_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(8 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m34208_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 * __this, const MethodInfo* method)
{
	U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m5242(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
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
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 * L_2 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 *)L_2;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 * L_5 = V_0;
		Func_2_t1594 * L_6 = (Func_2_t1594 *)(__this->___U3CU24U3Eselector_7);
		NullCheck(L_5);
		L_5->___selector_3 = L_6;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m34209_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
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
		goto IL_00b3;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___source_0);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
		__this->___U3CU24s_70U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_007e;
			}
		}

IL_0043:
		{
			goto IL_007e;
		}

IL_0048:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t*)L_5);
			KeyValuePair_2_t1591  L_6 = (KeyValuePair_2_t1591 )InterfaceFuncInvoker0< KeyValuePair_2_t1591  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t1594 * L_7 = (Func_2_t1594 *)(__this->___selector_3);
			KeyValuePair_2_t1591  L_8 = (KeyValuePair_2_t1591 )(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t1594 *)L_7);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, KeyValuePair_2_t1591  >::Invoke(11 /* TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(T) */, (Func_2_t1594 *)L_7, (KeyValuePair_2_t1591 )L_8);
			__this->___U24current_5 = L_9;
			__this->___U24PC_4 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB5, FINALLY_0093);
		}

IL_007e:
		{
			Object_t* L_10 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_10);
			if (L_11)
			{
				goto IL_0048;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0097;
			}
		}

IL_0096:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_0097:
		{
			Object_t* L_13 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_13)
			{
				goto IL_00a0;
			}
		}

IL_009f:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_00a0:
		{
			Object_t* L_14 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_14);
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_00ac:
	{
		__this->___U24PC_4 = (-1);
	}

IL_00b3:
	{
		return 0;
	}

IL_00b5:
	{
		return 1;
	}
	// Dead block : IL_00b7: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Dispose()
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m34210_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5662 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
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
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
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
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateUnionIteratorU3E.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateUnionIteratorU3EMethodDeclarations.h"

// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_4.h"
// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_4MethodDeclarations.h"
struct Enumerable_t1134;
struct IEnumerable_1_t1072;
struct Object_t;
struct IEqualityComparer_1_t4896;
// Declaration System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,!!0,System.Collections.Generic.IEqualityComparer`1<!!0>)
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,!!0,System.Collections.Generic.IEqualityComparer`1<!!0>)
extern "C" bool Enumerable_Contains_TisObject_t_m45789_gshared (Object_t * __this /* static, unused */, Object_t* p0, Object_t * p1, Object_t* p2, const MethodInfo* method);
#define Enumerable_Contains_TisObject_t_m45789(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, Object_t *, Object_t*, const MethodInfo*))Enumerable_Contains_TisObject_t_m45789_gshared)(__this /* static, unused */, p0, p1, p2, method)


// System.Void System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::.ctor()
extern "C" void U3CCreateUnionIteratorU3Ec__Iterator1C_1__ctor_m34211_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" Object_t * U3CCreateUnionIteratorU3Ec__Iterator1C_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m34212_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_9);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateUnionIteratorU3Ec__Iterator1C_1_System_Collections_IEnumerator_get_Current_m34213_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_9);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateUnionIteratorU3Ec__Iterator1C_1_System_Collections_IEnumerable_GetEnumerator_m34214_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(8 /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator() */, (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" Object_t* U3CCreateUnionIteratorU3Ec__Iterator1C_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m34215_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 * __this, const MethodInfo* method)
{
	U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_8);
		int32_t L_1 = Interlocked_CompareExchange_m5242(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
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
		U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 * L_2 = (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 *)L_2;
		U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Ecomparer_10);
		NullCheck(L_3);
		L_3->___comparer_0 = L_4;
		U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 * L_5 = V_0;
		Object_t* L_6 = (Object_t*)(__this->___U3CU24U3Efirst_11);
		NullCheck(L_5);
		L_5->___first_2 = L_6;
		U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 * L_7 = V_0;
		Object_t* L_8 = (Object_t*)(__this->___U3CU24U3Esecond_12);
		NullCheck(L_7);
		L_7->___second_5 = L_8;
		U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 * L_9 = V_0;
		return L_9;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateUnionIteratorU3Ec__Iterator1C_1_MoveNext_m34216_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_8);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_8 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0027;
		}
		if (L_1 == 1)
		{
			goto IL_004c;
		}
		if (L_1 == 2)
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_0191;
	}

IL_0027:
	{
		Object_t* L_2 = (Object_t*)(__this->___comparer_0);
		HashSet_1_t1605 * L_3 = (HashSet_1_t1605 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (HashSet_1_t1605 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_3, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		__this->___U3CitemsU3E__0_1 = L_3;
		Object_t* L_4 = (Object_t*)(__this->___first_2);
		NullCheck((Object_t*)L_4);
		Object_t* L_5 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_4);
		__this->___U3CU24s_95U3E__1_3 = L_5;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_004c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_6 = V_0;
			if (((int32_t)((int32_t)L_6-(int32_t)1)) == 0)
			{
				goto IL_00b0;
			}
		}

IL_0058:
		{
			goto IL_00b0;
		}

IL_005d:
		{
			Object_t* L_7 = (Object_t*)(__this->___U3CU24s_95U3E__1_3);
			NullCheck((Object_t*)L_7);
			Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), (Object_t*)L_7);
			__this->___U3CelementU3E__2_4 = L_8;
			HashSet_1_t1605 * L_9 = (HashSet_1_t1605 *)(__this->___U3CitemsU3E__0_1);
			Object_t * L_10 = (Object_t *)(__this->___U3CelementU3E__2_4);
			NullCheck((HashSet_1_t1605 *)L_9);
			bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(8 /* System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T) */, (HashSet_1_t1605 *)L_9, (Object_t *)L_10);
			if (L_11)
			{
				goto IL_00b0;
			}
		}

IL_0084:
		{
			HashSet_1_t1605 * L_12 = (HashSet_1_t1605 *)(__this->___U3CitemsU3E__0_1);
			Object_t * L_13 = (Object_t *)(__this->___U3CelementU3E__2_4);
			NullCheck((HashSet_1_t1605 *)L_12);
			(( bool (*) (HashSet_1_t1605 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((HashSet_1_t1605 *)L_12, (Object_t *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
			Object_t * L_14 = (Object_t *)(__this->___U3CelementU3E__2_4);
			__this->___U24current_9 = L_14;
			__this->___U24PC_8 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x193, FINALLY_00c5);
		}

IL_00b0:
		{
			Object_t* L_15 = (Object_t*)(__this->___U3CU24s_95U3E__1_3);
			NullCheck((Object_t *)L_15);
			bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_15);
			if (L_16)
			{
				goto IL_005d;
			}
		}

IL_00c0:
		{
			IL2CPP_LEAVE(0xDE, FINALLY_00c5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_00c5;
	}

FINALLY_00c5:
	{ // begin finally (depth: 1)
		{
			bool L_17 = V_1;
			if (!L_17)
			{
				goto IL_00c9;
			}
		}

IL_00c8:
		{
			IL2CPP_END_FINALLY(197)
		}

IL_00c9:
		{
			Object_t* L_18 = (Object_t*)(__this->___U3CU24s_95U3E__1_3);
			if (L_18)
			{
				goto IL_00d2;
			}
		}

IL_00d1:
		{
			IL2CPP_END_FINALLY(197)
		}

IL_00d2:
		{
			Object_t* L_19 = (Object_t*)(__this->___U3CU24s_95U3E__1_3);
			NullCheck((Object_t *)L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_19);
			IL2CPP_END_FINALLY(197)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(197)
	{
		IL2CPP_JUMP_TBL(0x193, IL_0193)
		IL2CPP_JUMP_TBL(0xDE, IL_00de)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_00de:
	{
		Object_t* L_20 = (Object_t*)(__this->___second_5);
		NullCheck((Object_t*)L_20);
		Object_t* L_21 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_20);
		__this->___U3CU24s_96U3E__3_6 = L_21;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_00f2:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_22 = V_0;
			if (((int32_t)((int32_t)L_22-(int32_t)2)) == 0)
			{
				goto IL_015c;
			}
		}

IL_00fe:
		{
			goto IL_015c;
		}

IL_0103:
		{
			Object_t* L_23 = (Object_t*)(__this->___U3CU24s_96U3E__3_6);
			NullCheck((Object_t*)L_23);
			Object_t * L_24 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), (Object_t*)L_23);
			__this->___U3CelementU3E__4_7 = L_24;
			HashSet_1_t1605 * L_25 = (HashSet_1_t1605 *)(__this->___U3CitemsU3E__0_1);
			Object_t * L_26 = (Object_t *)(__this->___U3CelementU3E__4_7);
			Object_t* L_27 = (Object_t*)(__this->___comparer_0);
			bool L_28 = (( bool (*) (Object_t * /* static, unused */, Object_t*, Object_t *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_25, (Object_t *)L_26, (Object_t*)L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
			if (L_28)
			{
				goto IL_015c;
			}
		}

IL_0130:
		{
			HashSet_1_t1605 * L_29 = (HashSet_1_t1605 *)(__this->___U3CitemsU3E__0_1);
			Object_t * L_30 = (Object_t *)(__this->___U3CelementU3E__4_7);
			NullCheck((HashSet_1_t1605 *)L_29);
			(( bool (*) (HashSet_1_t1605 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((HashSet_1_t1605 *)L_29, (Object_t *)L_30, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
			Object_t * L_31 = (Object_t *)(__this->___U3CelementU3E__4_7);
			__this->___U24current_9 = L_31;
			__this->___U24PC_8 = 2;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x193, FINALLY_0171);
		}

IL_015c:
		{
			Object_t* L_32 = (Object_t*)(__this->___U3CU24s_96U3E__3_6);
			NullCheck((Object_t *)L_32);
			bool L_33 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_32);
			if (L_33)
			{
				goto IL_0103;
			}
		}

IL_016c:
		{
			IL2CPP_LEAVE(0x18A, FINALLY_0171);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0171;
	}

FINALLY_0171:
	{ // begin finally (depth: 1)
		{
			bool L_34 = V_1;
			if (!L_34)
			{
				goto IL_0175;
			}
		}

IL_0174:
		{
			IL2CPP_END_FINALLY(369)
		}

IL_0175:
		{
			Object_t* L_35 = (Object_t*)(__this->___U3CU24s_96U3E__3_6);
			if (L_35)
			{
				goto IL_017e;
			}
		}

IL_017d:
		{
			IL2CPP_END_FINALLY(369)
		}

IL_017e:
		{
			Object_t* L_36 = (Object_t*)(__this->___U3CU24s_96U3E__3_6);
			NullCheck((Object_t *)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_36);
			IL2CPP_END_FINALLY(369)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(369)
	{
		IL2CPP_JUMP_TBL(0x193, IL_0193)
		IL2CPP_JUMP_TBL(0x18A, IL_018a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_018a:
	{
		__this->___U24PC_8 = (-1);
	}

IL_0191:
	{
		return 0;
	}

IL_0193:
	{
		return 1;
	}
	// Dead block : IL_0195: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateUnionIterator>c__Iterator1C`1<System.Object>::Dispose()
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void U3CCreateUnionIteratorU3Ec__Iterator1C_1_Dispose_m34217_gshared (U3CCreateUnionIteratorU3Ec__Iterator1C_1_t5663 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_8);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_8 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_005e;
		}
		if (L_1 == 1)
		{
			goto IL_0025;
		}
		if (L_1 == 2)
		{
			goto IL_0044;
		}
	}
	{
		goto IL_005e;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3F, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_95U3E__1_3);
			if (L_2)
			{
				goto IL_0033;
			}
		}

IL_0032:
		{
			IL2CPP_END_FINALLY(42)
		}

IL_0033:
		{
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_95U3E__1_3);
			NullCheck((Object_t *)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_003f:
	{
		goto IL_005e;
	}

IL_0044:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x5E, FINALLY_0049);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		{
			Object_t* L_4 = (Object_t*)(__this->___U3CU24s_96U3E__3_6);
			if (L_4)
			{
				goto IL_0052;
			}
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(73)
		}

IL_0052:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_96U3E__3_6);
			NullCheck((Object_t *)L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_5);
			IL2CPP_END_FINALLY(73)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_005e:
	{
		return;
	}
}
// System.Nullable`1<System.Guid>
#include "mscorlib_System_Nullable_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Nullable`1<System.Guid>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"

// System.Guid
#include "mscorlib_System_Guid.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void System.Nullable`1<System.Guid>::.ctor(T)
extern "C" void Nullable_1__ctor_m7421_gshared (Nullable_1_t1436 * __this, Guid_t1562  ___value, const MethodInfo* method)
{
	{
		__this->___has_value_1 = 1;
		Guid_t1562  L_0 = ___value;
		__this->___value_0 = L_0;
		return;
	}
}
// System.Boolean System.Nullable`1<System.Guid>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7419_gshared (Nullable_1_t1436 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		return L_0;
	}
}
// T System.Nullable`1<System.Guid>::get_Value()
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" Guid_t1562  Nullable_1_get_Value_m7578_gshared (Nullable_1_t1436 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
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
		InvalidOperationException_t1086 * L_1 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_1, (String_t*)(String_t*) &_stringLiteral4454, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Guid_t1562  L_2 = (Guid_t1562 )(__this->___value_0);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.Guid>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m34218_gshared (Nullable_1_t1436 * __this, Object_t * ___other, const MethodInfo* method)
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
		void* L_4 = alloca(sizeof(Nullable_1_t1436 ));
		UnBoxNullable(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_4);
		bool L_5 = (( bool (*) (Nullable_1_t1436 *, Nullable_1_t1436 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Nullable_1_t1436 *)__this, (Nullable_1_t1436 )((*(Nullable_1_t1436 *)((Nullable_1_t1436 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_5;
	}
}
// System.Boolean System.Nullable`1<System.Guid>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m34219_gshared (Nullable_1_t1436 * __this, Nullable_1_t1436  ___other, const MethodInfo* method)
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
		Guid_t1562 * L_3 = (Guid_t1562 *)&((&___other)->___value_0);
		Guid_t1562  L_4 = (Guid_t1562 )(__this->___value_0);
		Guid_t1562  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((ValueType_t724 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (ValueType_t724 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3), (Object_t *)L_6);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.Guid>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m34220_gshared (Nullable_1_t1436 * __this, const MethodInfo* method)
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
		Guid_t1562 * L_1 = (Guid_t1562 *)&(__this->___value_0);
		NullCheck((ValueType_t724 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.ValueType::GetHashCode() */, (ValueType_t724 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}
}
// System.String System.Nullable`1<System.Guid>::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Nullable_1_ToString_m34221_gshared (Nullable_1_t1436 * __this, const MethodInfo* method)
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
		Guid_t1562 * L_1 = (Guid_t1562 *)&(__this->___value_0);
		NullCheck((ValueType_t724 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.ValueType::ToString() */, (ValueType_t724 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_3;
	}
}
// System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateConcatIteratorU3.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateConcatIteratorU3MethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::.ctor()
extern "C" void U3CCreateConcatIteratorU3Ec__Iterator1_1__ctor_m34457_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" Object_t * U3CCreateConcatIteratorU3Ec__Iterator1_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m34458_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_7);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateConcatIteratorU3Ec__Iterator1_1_System_Collections_IEnumerator_get_Current_m34459_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_7);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateConcatIteratorU3Ec__Iterator1_1_System_Collections_IEnumerable_GetEnumerator_m34460_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(8 /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator() */, (U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" Object_t* U3CCreateConcatIteratorU3Ec__Iterator1_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m34461_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 * __this, const MethodInfo* method)
{
	U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_6);
		int32_t L_1 = Interlocked_CompareExchange_m5242(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
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
		U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 * L_2 = (U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 *)L_2;
		U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Efirst_8);
		NullCheck(L_3);
		L_3->___first_0 = L_4;
		U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 * L_5 = V_0;
		Object_t* L_6 = (Object_t*)(__this->___U3CU24U3Esecond_9);
		NullCheck(L_5);
		L_5->___second_3 = L_6;
		U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateConcatIteratorU3Ec__Iterator1_1_MoveNext_m34462_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_6);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_6 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0027;
		}
		if (L_1 == 1)
		{
			goto IL_003b;
		}
		if (L_1 == 2)
		{
			goto IL_00b9;
		}
	}
	{
		goto IL_012a;
	}

IL_0027:
	{
		Object_t* L_2 = (Object_t*)(__this->___first_0);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
		__this->___U3CU24s_42U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_0077;
			}
		}

IL_0047:
		{
			goto IL_0077;
		}

IL_004c:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_42U3E__0_1);
			NullCheck((Object_t*)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Object_t * L_7 = (Object_t *)(__this->___U3CelementU3E__1_2);
			__this->___U24current_7 = L_7;
			__this->___U24PC_6 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x12C, FINALLY_008c);
		}

IL_0077:
		{
			Object_t* L_8 = (Object_t*)(__this->___U3CU24s_42U3E__0_1);
			NullCheck((Object_t *)L_8);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_8);
			if (L_9)
			{
				goto IL_004c;
			}
		}

IL_0087:
		{
			IL2CPP_LEAVE(0xA5, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		{
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_0090;
			}
		}

IL_008f:
		{
			IL2CPP_END_FINALLY(140)
		}

IL_0090:
		{
			Object_t* L_11 = (Object_t*)(__this->___U3CU24s_42U3E__0_1);
			if (L_11)
			{
				goto IL_0099;
			}
		}

IL_0098:
		{
			IL2CPP_END_FINALLY(140)
		}

IL_0099:
		{
			Object_t* L_12 = (Object_t*)(__this->___U3CU24s_42U3E__0_1);
			NullCheck((Object_t *)L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_12);
			IL2CPP_END_FINALLY(140)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0x12C, IL_012c)
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_00a5:
	{
		Object_t* L_13 = (Object_t*)(__this->___second_3);
		NullCheck((Object_t*)L_13);
		Object_t* L_14 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_13);
		__this->___U3CU24s_43U3E__2_4 = L_14;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_00b9:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_15 = V_0;
			if (((int32_t)((int32_t)L_15-(int32_t)2)) == 0)
			{
				goto IL_00f5;
			}
		}

IL_00c5:
		{
			goto IL_00f5;
		}

IL_00ca:
		{
			Object_t* L_16 = (Object_t*)(__this->___U3CU24s_43U3E__2_4);
			NullCheck((Object_t*)L_16);
			Object_t * L_17 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_16);
			__this->___U3CelementU3E__3_5 = L_17;
			Object_t * L_18 = (Object_t *)(__this->___U3CelementU3E__3_5);
			__this->___U24current_7 = L_18;
			__this->___U24PC_6 = 2;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x12C, FINALLY_010a);
		}

IL_00f5:
		{
			Object_t* L_19 = (Object_t*)(__this->___U3CU24s_43U3E__2_4);
			NullCheck((Object_t *)L_19);
			bool L_20 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_19);
			if (L_20)
			{
				goto IL_00ca;
			}
		}

IL_0105:
		{
			IL2CPP_LEAVE(0x123, FINALLY_010a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_010a;
	}

FINALLY_010a:
	{ // begin finally (depth: 1)
		{
			bool L_21 = V_1;
			if (!L_21)
			{
				goto IL_010e;
			}
		}

IL_010d:
		{
			IL2CPP_END_FINALLY(266)
		}

IL_010e:
		{
			Object_t* L_22 = (Object_t*)(__this->___U3CU24s_43U3E__2_4);
			if (L_22)
			{
				goto IL_0117;
			}
		}

IL_0116:
		{
			IL2CPP_END_FINALLY(266)
		}

IL_0117:
		{
			Object_t* L_23 = (Object_t*)(__this->___U3CU24s_43U3E__2_4);
			NullCheck((Object_t *)L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_23);
			IL2CPP_END_FINALLY(266)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(266)
	{
		IL2CPP_JUMP_TBL(0x12C, IL_012c)
		IL2CPP_JUMP_TBL(0x123, IL_0123)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0123:
	{
		__this->___U24PC_6 = (-1);
	}

IL_012a:
	{
		return 0;
	}

IL_012c:
	{
		return 1;
	}
	// Dead block : IL_012e: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateConcatIterator>c__Iterator1`1<System.Object>::Dispose()
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void U3CCreateConcatIteratorU3Ec__Iterator1_1_Dispose_m34463_gshared (U3CCreateConcatIteratorU3Ec__Iterator1_1_t5676 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_6);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_6 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_005e;
		}
		if (L_1 == 1)
		{
			goto IL_0025;
		}
		if (L_1 == 2)
		{
			goto IL_0044;
		}
	}
	{
		goto IL_005e;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3F, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_42U3E__0_1);
			if (L_2)
			{
				goto IL_0033;
			}
		}

IL_0032:
		{
			IL2CPP_END_FINALLY(42)
		}

IL_0033:
		{
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_42U3E__0_1);
			NullCheck((Object_t *)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_003f:
	{
		goto IL_005e;
	}

IL_0044:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x5E, FINALLY_0049);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		{
			Object_t* L_4 = (Object_t*)(__this->___U3CU24s_43U3E__2_4);
			if (L_4)
			{
				goto IL_0052;
			}
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(73)
		}

IL_0052:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_43U3E__2_4);
			NullCheck((Object_t *)L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_5);
			IL2CPP_END_FINALLY(73)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_005e:
	{
		return;
	}
}
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_0MethodDeclarations.h"

// System.DateTime
#include "mscorlib_System_DateTime.h"


// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
extern "C" void Nullable_1__ctor_m7531_gshared (Nullable_1_t1479 * __this, DateTime_t1219  ___value, const MethodInfo* method)
{
	{
		__this->___has_value_1 = 1;
		DateTime_t1219  L_0 = ___value;
		__this->___value_0 = L_0;
		return;
	}
}
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7532_gshared (Nullable_1_t1479 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		return L_0;
	}
}
// T System.Nullable`1<System.DateTime>::get_Value()
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" DateTime_t1219  Nullable_1_get_Value_m7577_gshared (Nullable_1_t1479 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
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
		InvalidOperationException_t1086 * L_1 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_1, (String_t*)(String_t*) &_stringLiteral4454, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		DateTime_t1219  L_2 = (DateTime_t1219 )(__this->___value_0);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m34495_gshared (Nullable_1_t1479 * __this, Object_t * ___other, const MethodInfo* method)
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
		void* L_4 = alloca(sizeof(Nullable_1_t1479 ));
		UnBoxNullable(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_4);
		bool L_5 = (( bool (*) (Nullable_1_t1479 *, Nullable_1_t1479 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Nullable_1_t1479 *)__this, (Nullable_1_t1479 )((*(Nullable_1_t1479 *)((Nullable_1_t1479 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_5;
	}
}
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m34496_gshared (Nullable_1_t1479 * __this, Nullable_1_t1479  ___other, const MethodInfo* method)
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
		DateTime_t1219 * L_3 = (DateTime_t1219 *)&((&___other)->___value_0);
		DateTime_t1219  L_4 = (DateTime_t1219 )(__this->___value_0);
		DateTime_t1219  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((ValueType_t724 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (ValueType_t724 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3), (Object_t *)L_6);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.DateTime>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m34497_gshared (Nullable_1_t1479 * __this, const MethodInfo* method)
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
		DateTime_t1219 * L_1 = (DateTime_t1219 *)&(__this->___value_0);
		NullCheck((ValueType_t724 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.ValueType::GetHashCode() */, (ValueType_t724 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}
}
// System.String System.Nullable`1<System.DateTime>::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Nullable_1_ToString_m34498_gshared (Nullable_1_t1479 * __this, const MethodInfo* method)
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
		DateTime_t1219 * L_1 = (DateTime_t1219 *)&(__this->___value_0);
		NullCheck((ValueType_t724 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.ValueType::ToString() */, (ValueType_t724 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
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



// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_87.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_87MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Int32)
extern "C" KeyValuePair_2_t5678  Array_InternalArray__get_Item_TisKeyValuePair_2_t5678_m45864_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t5678_m45864(__this, p0, method) (( KeyValuePair_2_t5678  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t5678_m45864_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m34510_gshared (InternalEnumerator_1_t5679 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m34511_gshared (InternalEnumerator_1_t5679 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t5678  L_0 = (( KeyValuePair_2_t5678  (*) (InternalEnumerator_1_t5679 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t5679 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5678  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m34512_gshared (InternalEnumerator_1_t5679 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m34513_gshared (InternalEnumerator_1_t5679 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m11495((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current()
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t5678  InternalEnumerator_1_get_Current_m34514_gshared (InternalEnumerator_1_t5679 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
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
		InvalidOperationException_t1086 * L_1 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_1, (String_t*)(String_t*) &_stringLiteral4416, /*hidden argument*/NULL);
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
		InvalidOperationException_t1086 * L_3 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_3, (String_t*)(String_t*) &_stringLiteral4417, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m11495((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t5678  L_8 = (( KeyValuePair_2_t5678  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36MethodDeclarations.h"



// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m34515_gshared (KeyValuePair_2_t5678 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t5678 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t5678 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t5678 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t5678 *)__this, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m34516_gshared (KeyValuePair_2_t5678 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m34517_gshared (KeyValuePair_2_t5678 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::get_Value()
extern "C" uint8_t KeyValuePair_2_get_Value_m34518_gshared (KeyValuePair_2_t5678 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (uint8_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m34519_gshared (KeyValuePair_2_t5678 * __this, uint8_t ___value, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::ToString()
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m34520_gshared (KeyValuePair_2_t5678 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	uint8_t V_1 = 0x0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t20* G_B2_1 = {0};
	StringU5BU5D_t20* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t20* G_B1_1 = {0};
	StringU5BU5D_t20* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t20* G_B3_2 = {0};
	StringU5BU5D_t20* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t20* G_B5_1 = {0};
	StringU5BU5D_t20* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t20* G_B4_1 = {0};
	StringU5BU5D_t20* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t20* G_B6_2 = {0};
	StringU5BU5D_t20* G_B6_3 = {0};
	{
		StringU5BU5D_t20* L_0 = (StringU5BU5D_t20*)((StringU5BU5D_t20*)SZArrayNew(StringU5BU5D_t20_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral887);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral887;
		StringU5BU5D_t20* L_1 = (StringU5BU5D_t20*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t5678 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((Object_t *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t5678 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_4;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t20* L_7 = (StringU5BU5D_t20*)G_B3_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral251;
		StringU5BU5D_t20* L_8 = (StringU5BU5D_t20*)L_7;
		uint8_t L_9 = (( uint8_t (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5678 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint8_t L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_10);
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_11)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		uint8_t L_12 = (( uint8_t (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5678 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (uint8_t)L_12;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t20* L_15 = (StringU5BU5D_t20*)G_B6_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral559);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral559;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3021(NULL /*static, unused*/, (StringU5BU5D_t20*)L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Threading.ThreadLocal`1<System.Byte>
#include "Parse_Unity_System_Threading_ThreadLocal_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ThreadLocal`1<System.Byte>
#include "Parse_Unity_System_Threading_ThreadLocal_1_gen_2MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_56.h"
// System.WeakReference
#include "mscorlib_System_WeakReference.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Func`1<System.Byte>
#include "System_Core_System_Func_1_gen_5.h"
// System.Collections.Generic.List`1<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_gen_110.h"
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_56MethodDeclarations.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"
// System.Func`1<System.Byte>
#include "System_Core_System_Func_1_gen_5MethodDeclarations.h"
// System.Collections.Generic.List`1<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_gen_110MethodDeclarations.h"


// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Byte>::get_ThreadLocalData()
extern TypeInfo* WeakReference_t1729_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t6796_il2cpp_TypeInfo_var;
extern "C" Object_t* ThreadLocal_1_get_ThreadLocalData_m34522_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WeakReference_t1729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3303);
		ICollection_1_t6796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11984);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_0 = ((ThreadLocal_1_t5682_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		Dictionary_2_t5686 * L_1 = (Dictionary_2_t5686 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		((ThreadLocal_1_t5682_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1 = L_1;
		Object_t* L_2 = ((ThreadLocal_1_t5682_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_3 = (Object_t*)L_2;
		V_0 = (Object_t*)L_3;
		Monitor_Enter_m2469(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_4 = ((ThreadLocal_1_t5682_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_5 = ((ThreadLocal_1_t5682_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		WeakReference_t1729 * L_6 = (WeakReference_t1729 *)il2cpp_codegen_object_new (WeakReference_t1729_il2cpp_TypeInfo_var);
		WeakReference__ctor_m16830(L_6, (Object_t *)L_5, /*hidden argument*/NULL);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker1< WeakReference_t1729 * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.WeakReference>::Add(!0) */, ICollection_1_t6796_il2cpp_TypeInfo_var, (Object_t*)L_4, (WeakReference_t1729 *)L_6);
		IL2CPP_LEAVE(0x3A, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Object_t* L_7 = V_0;
		Monitor_Exit_m2472(NULL /*static, unused*/, (Object_t *)L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_8 = ((ThreadLocal_1_t5682_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		return L_8;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::.ctor(System.Func`1<T>)
extern "C" void ThreadLocal_1__ctor_m34523_gshared (ThreadLocal_1_t5682 * __this, Func_1_t5263 * ___valueFactory, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Func_1_t5263 * L_0 = ___valueFactory;
		__this->___valueFactory_5 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = Interlocked_Increment_m20728(NULL /*static, unused*/, (int64_t*)(&((ThreadLocal_1_t5682_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___lastId_0), /*hidden argument*/NULL);
		__this->___id_4 = L_1;
		return;
	}
}
// T System.Threading.ThreadLocal`1<System.Byte>::get_Value()
extern TypeInfo* ThreadLocal_1_t5682_il2cpp_TypeInfo_var;
extern "C" uint8_t ThreadLocal_1_get_Value_m34524_gshared (ThreadLocal_1_t5682 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadLocal_1_t5682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12114);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	{
		NullCheck((ThreadLocal_1_t5682 *)__this);
		(( void (*) (ThreadLocal_1_t5682 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((ThreadLocal_1_t5682 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t5682_il2cpp_TypeInfo_var);
		Object_t* L_0 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_1 = (int64_t)(__this->___id_4);
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, int64_t, uint8_t* >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::TryGetValue(!0,!1&) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int64_t)L_1, (uint8_t*)(&V_0));
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		uint8_t L_3 = V_0;
		return L_3;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t5682_il2cpp_TypeInfo_var);
		Object_t* L_4 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_5 = (int64_t)(__this->___id_4);
		Func_1_t5263 * L_6 = (Func_1_t5263 *)(__this->___valueFactory_5);
		NullCheck((Func_1_t5263 *)L_6);
		uint8_t L_7 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* !0 System.Func`1<System.Byte>::Invoke() */, (Func_1_t5263 *)L_6);
		uint8_t L_8 = (uint8_t)L_7;
		V_1 = (uint8_t)L_8;
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< int64_t, uint8_t >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_4, (int64_t)L_5, (uint8_t)L_8);
		uint8_t L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::set_Value(T)
extern TypeInfo* ThreadLocal_1_t5682_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_set_Value_m34525_gshared (ThreadLocal_1_t5682 * __this, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadLocal_1_t5682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12114);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ThreadLocal_1_t5682 *)__this);
		(( void (*) (ThreadLocal_1_t5682 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((ThreadLocal_1_t5682 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t5682_il2cpp_TypeInfo_var);
		Object_t* L_0 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_1 = (int64_t)(__this->___id_4);
		uint8_t L_2 = ___value;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int64_t, uint8_t >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int64_t)L_1, (uint8_t)L_2);
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::Finalize()
extern "C" void ThreadLocal_1_Finalize_m34527_gshared (ThreadLocal_1_t5682 * __this, const MethodInfo* method)
{
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = (bool)(__this->___disposed_3);
			if (L_0)
			{
				goto IL_000e;
			}
		}

IL_0008:
		{
			NullCheck((ThreadLocal_1_t5682 *)__this);
			(( void (*) (ThreadLocal_1_t5682 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ThreadLocal_1_t5682 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		}

IL_000e:
		{
			IL2CPP_LEAVE(0x17, FINALLY_0010);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		NullCheck((Object_t *)__this);
		Object_Finalize_m127((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x17, IL_0017)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0017:
	{
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::CheckDisposed()
extern TypeInfo* ObjectDisposedException_t1338_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_CheckDisposed_m34529_gshared (ThreadLocal_1_t5682 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2644);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___disposed_3);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1338 * L_1 = (ObjectDisposedException_t1338 *)il2cpp_codegen_object_new (ObjectDisposedException_t1338_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m6605(L_1, (String_t*)(String_t*) &_stringLiteral1668, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::Dispose()
extern TypeInfo* IList_1_t5568_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t691_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t6796_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_Dispose_m34531_gshared (ThreadLocal_1_t5682 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_1_t5568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11968);
		Int64_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		ICollection_1_t6796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11984);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_0 = ((ThreadLocal_1_t5682_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_1 = (Object_t*)L_0;
		V_2 = (Object_t*)L_1;
		Monitor_Enter_m2469(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			V_0 = (int32_t)0;
			goto IL_0050;
		}

IL_0010:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			Object_t* L_2 = ((ThreadLocal_1_t5682_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			int32_t L_3 = V_0;
			NullCheck((Object_t*)L_2);
			WeakReference_t1729 * L_4 = (WeakReference_t1729 *)InterfaceFuncInvoker1< WeakReference_t1729 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.WeakReference>::get_Item(System.Int32) */, IList_1_t5568_il2cpp_TypeInfo_var, (Object_t*)L_2, (int32_t)L_3);
			NullCheck((WeakReference_t1729 *)L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_t1729 *)L_4);
			V_1 = (Object_t*)((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)));
			Object_t* L_6 = V_1;
			if (L_6)
			{
				goto IL_003a;
			}
		}

IL_0029:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			Object_t* L_7 = ((ThreadLocal_1_t5682_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			int32_t L_8 = V_0;
			NullCheck((Object_t*)L_7);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.WeakReference>::RemoveAt(System.Int32) */, IList_1_t5568_il2cpp_TypeInfo_var, (Object_t*)L_7, (int32_t)L_8);
			int32_t L_9 = V_0;
			V_0 = (int32_t)((int32_t)((int32_t)L_9-(int32_t)1));
			goto IL_004c;
		}

IL_003a:
		{
			Object_t* L_10 = V_1;
			int64_t L_11 = (int64_t)(__this->___id_4);
			int64_t L_12 = L_11;
			Object_t * L_13 = Box(Int64_t691_il2cpp_TypeInfo_var, &L_12);
			NullCheck((Object_t*)L_10);
			InterfaceFuncInvoker1< bool, Object_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_10, (Object_t *)L_13);
		}

IL_004c:
		{
			int32_t L_14 = V_0;
			V_0 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		}

IL_0050:
		{
			int32_t L_15 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			Object_t* L_16 = ((ThreadLocal_1_t5682_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			NullCheck((Object_t*)L_16);
			int32_t L_17 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.WeakReference>::get_Count() */, ICollection_1_t6796_il2cpp_TypeInfo_var, (Object_t*)L_16);
			if ((((int32_t)L_15) < ((int32_t)L_17)))
			{
				goto IL_0010;
			}
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		Object_t* L_18 = V_2;
		Monitor_Exit_m2472(NULL /*static, unused*/, (Object_t *)L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0066:
	{
		__this->___disposed_3 = 1;
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::.cctor()
extern TypeInfo* List_1_t5589_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m33325_MethodInfo_var;
extern "C" void ThreadLocal_1__cctor_m34533_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t5589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11985);
		List_1__ctor_m33325_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485221);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ThreadLocal_1_t5682_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___lastId_0 = (((int64_t)(-1)));
		List_1_t5589 * L_0 = (List_1_t5589 *)il2cpp_codegen_object_new (List_1_t5589_il2cpp_TypeInfo_var);
		List_1__ctor_m33325(L_0, /*hidden argument*/List_1__ctor_m33325_MethodInfo_var);
		((ThreadLocal_1_t5682_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_37.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_88.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_88MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>(System.Int32)
extern "C" KeyValuePair_2_t5683  Array_InternalArray__get_Item_TisKeyValuePair_2_t5683_m45875_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t5683_m45875(__this, p0, method) (( KeyValuePair_2_t5683  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t5683_m45875_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m34534_gshared (InternalEnumerator_1_t5684 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m34535_gshared (InternalEnumerator_1_t5684 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t5683  L_0 = (( KeyValuePair_2_t5683  (*) (InternalEnumerator_1_t5684 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t5684 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5683  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m34536_gshared (InternalEnumerator_1_t5684 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m34537_gshared (InternalEnumerator_1_t5684 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m11495((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::get_Current()
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t5683  InternalEnumerator_1_get_Current_m34538_gshared (InternalEnumerator_1_t5684 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
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
		InvalidOperationException_t1086 * L_1 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_1, (String_t*)(String_t*) &_stringLiteral4416, /*hidden argument*/NULL);
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
		InvalidOperationException_t1086 * L_3 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_3, (String_t*)(String_t*) &_stringLiteral4417, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m11495((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t5683  L_8 = (( KeyValuePair_2_t5683  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_37MethodDeclarations.h"



// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m34539_gshared (KeyValuePair_2_t5683 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		(( void (*) (KeyValuePair_2_t5683 *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t5683 *)__this, (int64_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t5683 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t5683 *)__this, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>::get_Key()
extern "C" int64_t KeyValuePair_2_get_Key_m34540_gshared (KeyValuePair_2_t5683 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (int64_t)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m34541_gshared (KeyValuePair_2_t5683 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>::get_Value()
extern "C" uint8_t KeyValuePair_2_get_Value_m34542_gshared (KeyValuePair_2_t5683 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (uint8_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m34543_gshared (KeyValuePair_2_t5683 * __this, uint8_t ___value, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>::ToString()
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m34544_gshared (KeyValuePair_2_t5683 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	uint8_t V_1 = 0x0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t20* G_B2_1 = {0};
	StringU5BU5D_t20* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t20* G_B1_1 = {0};
	StringU5BU5D_t20* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t20* G_B3_2 = {0};
	StringU5BU5D_t20* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t20* G_B5_1 = {0};
	StringU5BU5D_t20* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t20* G_B4_1 = {0};
	StringU5BU5D_t20* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t20* G_B6_2 = {0};
	StringU5BU5D_t20* G_B6_3 = {0};
	{
		StringU5BU5D_t20* L_0 = (StringU5BU5D_t20*)((StringU5BU5D_t20*)SZArrayNew(StringU5BU5D_t20_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral887);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral887;
		StringU5BU5D_t20* L_1 = (StringU5BU5D_t20*)L_0;
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t5683 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		int64_t L_5 = (( int64_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t5683 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int64_t)L_5;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t20* L_8 = (StringU5BU5D_t20*)G_B3_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 2)) = (String_t*)(String_t*) &_stringLiteral251;
		StringU5BU5D_t20* L_9 = (StringU5BU5D_t20*)L_8;
		uint8_t L_10 = (( uint8_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5683 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint8_t L_11 = L_10;
		Object_t * L_12 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_11);
		G_B4_0 = 3;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		if (!L_12)
		{
			G_B5_0 = 3;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			goto IL_0066;
		}
	}
	{
		uint8_t L_13 = (( uint8_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5683 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (uint8_t)L_13;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t20* L_16 = (StringU5BU5D_t20*)G_B6_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral559);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 4)) = (String_t*)(String_t*) &_stringLiteral559;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m3021(NULL /*static, unused*/, (StringU5BU5D_t20*)L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_43.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_47.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_56.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_8.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8.h"
// System.Collections.Generic.EqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_43MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_47MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_56MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_8MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
struct Dictionary_2_t5686;
struct DictionaryEntryU5BU5D_t7242;
struct Transform_1_t5685;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m45891_gshared (Dictionary_2_t5686 * __this, DictionaryEntryU5BU5D_t7242* p0, int32_t p1, Transform_1_t5685 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m45891(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5686 *, DictionaryEntryU5BU5D_t7242*, int32_t, Transform_1_t5685 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m45891_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t5686;
struct Array_t;
struct Transform_1_t5694;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t5683_m45893_gshared (Dictionary_2_t5686 * __this, Array_t * p0, int32_t p1, Transform_1_t5694 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t5683_m45893(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5686 *, Array_t *, int32_t, Transform_1_t5694 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t5683_m45893_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t5686;
struct KeyValuePair_2U5BU5D_t6821;
struct Transform_1_t5694;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t5683_TisKeyValuePair_2_t5683_m45894_gshared (Dictionary_2_t5686 * __this, KeyValuePair_2U5BU5D_t6821* p0, int32_t p1, Transform_1_t5694 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t5683_TisKeyValuePair_2_t5683_m45894(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5686 *, KeyValuePair_2U5BU5D_t6821*, int32_t, Transform_1_t5694 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t5683_TisKeyValuePair_2_t5683_m45894_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m34545_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5686 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m34546_gshared (Dictionary_2_t5686 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5686 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m34547_gshared (Dictionary_2_t5686 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t5686 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m34548_gshared (Dictionary_2_t5686 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5686 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m34549_gshared (Dictionary_2_t5686 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t5683  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral4526, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5686 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t5683  L_9 = (KeyValuePair_2_t5683 )InterfaceFuncInvoker0< KeyValuePair_2_t5683  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t5683 )L_9;
			int64_t L_10 = (( int64_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5683 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			uint8_t L_11 = (( uint8_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5683 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t5686 *)__this);
			VirtActionInvoker2< int64_t, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t5686 *)__this, (int64_t)L_10, (uint8_t)L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			Object_t* L_15 = V_2;
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m34550_gshared (Dictionary_2_t5686 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m34551_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t5686 *)__this);
		KeyCollection_t5687 * L_0 = (( KeyCollection_t5687 * (*) (Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t5686 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m34552_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t5686 *)__this);
		ValueCollection_t5691 * L_0 = (( ValueCollection_t5691 * (*) (Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t5686 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m34553_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t5686 *)__this);
		KeyCollection_t5687 * L_0 = (( KeyCollection_t5687 * (*) (Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t5686 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m34554_gshared (Dictionary_2_t5686 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t5686 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey) */, (Dictionary_2_t5686 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t5686 *)__this);
		int64_t L_4 = (( int64_t (*) (Dictionary_2_t5686 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t5686 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t5686 *)__this);
		uint8_t L_5 = (uint8_t)VirtFuncInvoker1< uint8_t, int64_t >::Invoke(22 /* TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Item(TKey) */, (Dictionary_2_t5686 *)__this, (int64_t)L_4);
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m34555_gshared (Dictionary_2_t5686 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t5686 *)__this);
		int64_t L_1 = (( int64_t (*) (Dictionary_2_t5686 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t5686 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t5686 *)__this);
		uint8_t L_3 = (( uint8_t (*) (Dictionary_2_t5686 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t5686 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t5686 *)__this);
		VirtActionInvoker2< int64_t, uint8_t >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue) */, (Dictionary_2_t5686 *)__this, (int64_t)L_1, (uint8_t)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m34556_gshared (Dictionary_2_t5686 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t5686 *)__this);
		int64_t L_1 = (( int64_t (*) (Dictionary_2_t5686 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t5686 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t5686 *)__this);
		uint8_t L_3 = (( uint8_t (*) (Dictionary_2_t5686 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t5686 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t5686 *)__this);
		VirtActionInvoker2< int64_t, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t5686 *)__this, (int64_t)L_1, (uint8_t)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m34557_gshared (Dictionary_2_t5686 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t5686 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey) */, (Dictionary_2_t5686 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m34558_gshared (Dictionary_2_t5686 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t5686 *)__this);
		VirtFuncInvoker1< bool, int64_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey) */, (Dictionary_2_t5686 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m34559_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34560_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m34561_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m34562_gshared (Dictionary_2_t5686 * __this, KeyValuePair_2_t5683  ___keyValuePair, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5683 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		uint8_t L_1 = (( uint8_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5683 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t5686 *)__this);
		VirtActionInvoker2< int64_t, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t5686 *)__this, (int64_t)L_0, (uint8_t)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m34563_gshared (Dictionary_2_t5686 * __this, KeyValuePair_2_t5683  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t5683  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t5686 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t5686 *, KeyValuePair_2_t5683 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t5686 *)__this, (KeyValuePair_2_t5683 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m34564_gshared (Dictionary_2_t5686 * __this, KeyValuePair_2U5BU5D_t6821* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t6821* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, KeyValuePair_2U5BU5D_t6821*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t5686 *)__this, (KeyValuePair_2U5BU5D_t6821*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m34565_gshared (Dictionary_2_t5686 * __this, KeyValuePair_2_t5683  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t5683  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t5686 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t5686 *, KeyValuePair_2_t5683 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t5686 *)__this, (KeyValuePair_2_t5683 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5683 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t5686 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey) */, (Dictionary_2_t5686 *)__this, (int64_t)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t7242_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m34566_gshared (Dictionary_2_t5686 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t7242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13530);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t6821* V_0 = {0};
	DictionaryEntryU5BU5D_t7242* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t7242* G_B5_1 = {0};
	Dictionary_2_t5686 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t7242* G_B4_1 = {0};
	Dictionary_2_t5686 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t6821*)((KeyValuePair_2U5BU5D_t6821*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t6821* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6821* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, KeyValuePair_2U5BU5D_t6821*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t5686 *)__this, (KeyValuePair_2U5BU5D_t6821*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t5686 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t7242*)((DictionaryEntryU5BU5D_t7242*)IsInst(L_6, DictionaryEntryU5BU5D_t7242_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t7242* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t7242* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t5685 * L_10 = ((Dictionary_2_t5686_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t5686 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t5686 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t5685 * L_12 = (Transform_1_t5685 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t5685 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t5686_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t5686 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t5685 * L_13 = ((Dictionary_2_t5686_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t5686 *)G_B5_2);
		(( void (*) (Dictionary_2_t5686 *, DictionaryEntryU5BU5D_t7242*, int32_t, Transform_1_t5685 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t5686 *)G_B5_2, (DictionaryEntryU5BU5D_t7242*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t5685 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t5694 * L_17 = (Transform_1_t5694 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t5694 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, Array_t *, int32_t, Transform_1_t5694 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t5686 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t5694 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m34567_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5689  L_0 = {0};
		(( void (*) (Enumerator_t5689 *, Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t5686 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t5689  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34568_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5689  L_0 = {0};
		(( void (*) (Enumerator_t5689 *, Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t5686 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t5689  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m34569_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t5695 * L_0 = (ShimEnumerator_t5695 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t5695 *, Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t5686 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m34570_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t3918_il2cpp_TypeInfo_var;
extern "C" uint8_t Dictionary_2_get_Item_m34571_gshared (Dictionary_2_t5686 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		KeyNotFoundException_t3918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9199);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t119* L_9 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t4893* L_11 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t2413* L_16 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_16, L_18)), (int64_t)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ByteU5BU5D_t25* L_21 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23));
	}

IL_007d:
	{
		LinkU5BU5D_t4893* L_24 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = (int32_t)L_26;
	}

IL_008f:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t3918 * L_28 = (KeyNotFoundException_t3918 *)il2cpp_codegen_object_new (KeyNotFoundException_t3918_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m18314(L_28, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m34572_gshared (Dictionary_2_t5686 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t119* L_8 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t119* L_9 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t4893* L_13 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t2413* L_18 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int64_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_18, L_20)), (int64_t)L_21);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_23 = V_2;
		V_3 = (int32_t)L_23;
		LinkU5BU5D_t4893* L_24 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = (int32_t)L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_29 = (int32_t)(__this->___count_10);
		int32_t L_30 = (int32_t)((int32_t)((int32_t)L_29+(int32_t)1));
		V_4 = (int32_t)L_30;
		__this->___count_10 = L_30;
		int32_t L_31 = V_4;
		int32_t L_32 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_00c9;
		}
	}
	{
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t5686 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_33 = V_0;
		Int32U5BU5D_t119* L_34 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_34);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_35 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_35;
		int32_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_37 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_38 = (int32_t)L_37;
		V_4 = (int32_t)L_38;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_38+(int32_t)1));
		int32_t L_39 = V_4;
		V_2 = (int32_t)L_39;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t4893* L_40 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_40, L_41))->___Next_1);
		__this->___emptySlot_9 = L_42;
	}

IL_0101:
	{
		LinkU5BU5D_t4893* L_43 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t119* L_45 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t119* L_48 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		LinkU5BU5D_t4893* L_51 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		int32_t L_53 = V_0;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_51, L_52))->___HashCode_0 = L_53;
		Int64U5BU5D_t2413* L_54 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_55 = V_2;
		int64_t L_56 = ___key;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_54, L_55)) = (int64_t)L_56;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t4893* L_58 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_59 = V_3;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		LinkU5BU5D_t4893* L_60 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		int32_t L_62 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_60, L_61))->___Next_1);
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_58, L_59))->___Next_1 = L_62;
		LinkU5BU5D_t4893* L_63 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_64 = V_2;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		Int32U5BU5D_t119* L_65 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_63, L_64))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_65, L_67))-(int32_t)1));
		Int32U5BU5D_t119* L_68 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_69);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_68, L_69)) = (int32_t)((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0194:
	{
		ByteU5BU5D_t25* L_71 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		int32_t L_72 = V_2;
		uint8_t L_73 = ___value;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_71, L_72)) = (uint8_t)L_73;
		int32_t L_74 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_74+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t5585_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m34573_gshared (Dictionary_2_t5686 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		EqualityComparer_1_t5585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11981);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t5686 * G_B4_0 = {0};
	Dictionary_2_t5686 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t5686 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_1 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_1, (String_t*)(String_t*) &_stringLiteral3552, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t5686 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t5686 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t5686 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5585_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5585 * L_5 = (( EqualityComparer_1_t5585 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t5686 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t5686 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t4893_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m34574_gshared (Dictionary_2_t5686 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		LinkU5BU5D_t4893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13531);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t119*)SZArrayNew(Int32U5BU5D_t119_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t4893*)SZArrayNew(LinkU5BU5D_t4893_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((Int64U5BU5D_t2413*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ByteU5BU5D_t25*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t119* L_4 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t119* L_6 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m34575_gshared (Dictionary_2_t5686 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
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
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m11495((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t1126 * L_7 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_7, (String_t*)(String_t*) &_stringLiteral3553, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m11495((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t5686 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count() */, (Dictionary_2_t5686 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_12 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_12, (String_t*)(String_t*) &_stringLiteral3554, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5683  Dictionary_2_make_pair_m34576_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		uint8_t L_1 = ___value;
		KeyValuePair_2_t5683  L_2 = {0};
		(( void (*) (KeyValuePair_2_t5683 *, int64_t, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (int64_t)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m34577_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m34578_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m34579_gshared (Dictionary_2_t5686 * __this, KeyValuePair_2U5BU5D_t6821* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t6821* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t5686 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t6821* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t5694 * L_5 = (Transform_1_t5694 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t5694 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, KeyValuePair_2U5BU5D_t6821*, int32_t, Transform_1_t5694 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t5686 *)__this, (KeyValuePair_2U5BU5D_t6821*)L_2, (int32_t)L_3, (Transform_1_t5694 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Resize()
extern TypeInfo* Hashtable_t1256_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t4893_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m34580_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2705);
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		LinkU5BU5D_t4893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13531);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t119* V_1 = {0};
	LinkU5BU5D_t4893* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int64U5BU5D_t2413* V_7 = {0};
	ByteU5BU5D_t25* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t119* L_0 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t1256_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m18505(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t119*)((Int32U5BU5D_t119*)SZArrayNew(Int32U5BU5D_t119_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t4893*)((LinkU5BU5D_t4893*)SZArrayNew(LinkU5BU5D_t4893_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t119* L_4 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t4893* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t2413* L_10 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t4893* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t119* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t119* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t4893* L_26 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t119* L_32 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t119* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t4893* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (Int64U5BU5D_t2413*)((Int64U5BU5D_t2413*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (ByteU5BU5D_t25*)((ByteU5BU5D_t25*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		Int64U5BU5D_t2413* L_37 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		Int64U5BU5D_t2413* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ByteU5BU5D_t25* L_40 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		ByteU5BU5D_t25* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		Int64U5BU5D_t2413* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ByteU5BU5D_t25* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m34581_gshared (Dictionary_2_t5686 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t119* L_8 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t119* L_9 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t4893* L_12 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t2413* L_17 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		int64_t L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_17, L_19)), (int64_t)L_20);
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t1126 * L_22 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_22, (String_t*)(String_t*) &_stringLiteral4528, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007d:
	{
		LinkU5BU5D_t4893* L_23 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_3 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_3;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t5686 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t119* L_32 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_3 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_2 = (int32_t)L_37;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t4893* L_38 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_00f9:
	{
		LinkU5BU5D_t4893* L_41 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = V_0;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_41, L_42))->___HashCode_0 = L_43;
		LinkU5BU5D_t4893* L_44 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		Int32U5BU5D_t119* L_46 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_47 = V_1;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_44, L_45))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_46, L_48))-(int32_t)1));
		Int32U5BU5D_t119* L_49 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		Int64U5BU5D_t2413* L_52 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		int64_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_52, L_53)) = (int64_t)L_54;
		ByteU5BU5D_t25* L_55 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		int32_t L_56 = V_2;
		uint8_t L_57 = ___value;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_55, L_56)) = (uint8_t)L_57;
		int32_t L_58 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_58+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m34582_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t119* L_0 = (Int32U5BU5D_t119*)(__this->___table_4);
		Int32U5BU5D_t119* L_1 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m6585(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		Int64U5BU5D_t2413* L_2 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		Int64U5BU5D_t2413* L_3 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m6585(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_t25* L_4 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		ByteU5BU5D_t25* L_5 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m6585(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t4893* L_6 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		LinkU5BU5D_t4893* L_7 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m6585(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m34583_gshared (Dictionary_2_t5686 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t119* L_9 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t4893* L_11 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t2413* L_16 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_16, L_18)), (int64_t)L_19);
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t4893* L_21 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_21, L_22))->___Next_1);
		V_1 = (int32_t)L_23;
	}

IL_0084:
	{
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t4922_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m34584_gshared (Dictionary_2_t5686 * __this, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t4922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10689);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4922_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4922 * L_0 = (( EqualityComparer_1_t4922 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t119* L_1 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		ByteU5BU5D_t25* L_5 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		uint8_t L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Byte>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (Object_t*)L_4, (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7)), (uint8_t)L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t4893* L_10 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t119* L_16 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m34585_gshared (Dictionary_2_t5686 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t6821* V_0 = {0};
	{
		SerializationInfo_t1322 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral216, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t1322 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t1322 *)L_2);
		SerializationInfo_AddValue_m11568((SerializationInfo_t1322 *)L_2, (String_t*)(String_t*) &_stringLiteral3641, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t1322 *)L_4);
		SerializationInfo_AddValue_m6629((SerializationInfo_t1322 *)L_4, (String_t*)(String_t*) &_stringLiteral3643, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t6821*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t6821*)((KeyValuePair_2U5BU5D_t6821*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t6821* L_8 = V_0;
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, KeyValuePair_2U5BU5D_t6821*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t5686 *)__this, (KeyValuePair_2U5BU5D_t6821*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t1322 * L_9 = ___info;
		Int32U5BU5D_t119* L_10 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t1322 *)L_9);
		SerializationInfo_AddValue_m11568((SerializationInfo_t1322 *)L_9, (String_t*)(String_t*) &_stringLiteral4529, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t6821* L_12 = V_0;
		NullCheck((SerializationInfo_t1322 *)L_11);
		SerializationInfo_AddValue_m6629((SerializationInfo_t1322 *)L_11, (String_t*)(String_t*) &_stringLiteral4530, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m34586_gshared (Dictionary_2_t5686 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t6821* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t1322 * L_0 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t1322 * L_1 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t1322 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m11564((SerializationInfo_t1322 *)L_1, (String_t*)(String_t*) &_stringLiteral3641, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t1322 * L_3 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t1322 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m11566((SerializationInfo_t1322 *)L_3, (String_t*)(String_t*) &_stringLiteral3643, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t1322 * L_6 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t1322 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m11564((SerializationInfo_t1322 *)L_6, (String_t*)(String_t*) &_stringLiteral4529, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t1322 * L_8 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t1322 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m11566((SerializationInfo_t1322 *)L_8, (String_t*)(String_t*) &_stringLiteral4530, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t6821*)((KeyValuePair_2U5BU5D_t6821*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t5686 *)__this);
		(( void (*) (Dictionary_2_t5686 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t5686 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t6821* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t6821* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int64_t L_16 = (( int64_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5683 *)((KeyValuePair_2_t5683 *)(KeyValuePair_2_t5683 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t6821* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		uint8_t L_19 = (( uint8_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5683 *)((KeyValuePair_2_t5683 *)(KeyValuePair_2_t5683 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t5686 *)__this);
		VirtActionInvoker2< int64_t, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t5686 *)__this, (int64_t)L_16, (uint8_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t6821* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t1322 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t691_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m34587_gshared (Dictionary_2_t5686 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Int64_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	uint8_t V_5 = 0x0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t119* L_8 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t119* L_9 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		int32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (int32_t)(-1);
	}

IL_004a:
	{
		LinkU5BU5D_t4893* L_13 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t2413* L_18 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int64_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_18, L_20)), (int64_t)L_21);
		if (!L_22)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_23 = V_2;
		V_3 = (int32_t)L_23;
		LinkU5BU5D_t4893* L_24 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = (int32_t)L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_29 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_29-(int32_t)1));
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t119* L_31 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_32 = V_1;
		LinkU5BU5D_t4893* L_33 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_33, L_34))->___Next_1);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, L_32)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t4893* L_36 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		LinkU5BU5D_t4893* L_38 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_36, L_37))->___Next_1 = L_40;
	}

IL_00e9:
	{
		LinkU5BU5D_t4893* L_41 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = (int32_t)(__this->___emptySlot_9);
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_41, L_42))->___Next_1 = L_43;
		int32_t L_44 = V_2;
		__this->___emptySlot_9 = L_44;
		LinkU5BU5D_t4893* L_45 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_45, L_46))->___HashCode_0 = 0;
		Int64U5BU5D_t2413* L_47 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_48 = V_2;
		Initobj (Int64_t691_il2cpp_TypeInfo_var, (&V_4));
		int64_t L_49 = V_4;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_47, L_48)) = (int64_t)L_49;
		ByteU5BU5D_t25* L_50 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		int32_t L_51 = V_2;
		Initobj (Byte_t26_il2cpp_TypeInfo_var, (&V_5));
		uint8_t L_52 = V_5;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_50, L_51)) = (uint8_t)L_52;
		int32_t L_53 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_53+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m34588_gshared (Dictionary_2_t5686 * __this, int64_t ___key, uint8_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t119* L_9 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t4893* L_11 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t2413* L_16 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_16, L_18)), (int64_t)L_19);
		if (!L_20)
		{
			goto IL_0084;
		}
	}
	{
		uint8_t* L_21 = ___value;
		ByteU5BU5D_t25* L_22 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		*L_21 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_24));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t4893* L_25 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_25, L_26))->___Next_1);
		V_1 = (int32_t)L_27;
	}

IL_0096:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		uint8_t* L_29 = ___value;
		Initobj (Byte_t26_il2cpp_TypeInfo_var, (&V_2));
		uint8_t L_30 = V_2;
		*L_29 = L_30;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Keys()
extern "C" KeyCollection_t5687 * Dictionary_2_get_Keys_m34589_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t5687 * L_0 = (KeyCollection_t5687 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t5687 *, Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t5686 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Values()
extern "C" ValueCollection_t5691 * Dictionary_2_get_Values_m34590_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t5691 * L_0 = (ValueCollection_t5691 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t5691 *, Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t5686 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" int64_t Dictionary_2_ToTKey_m34591_gshared (Dictionary_2_t5686 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m105(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4531, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_6 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((*(int64_t*)((int64_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" uint8_t Dictionary_2_ToTValue_m34592_gshared (Dictionary_2_t5686 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (Byte_t26_il2cpp_TypeInfo_var, (&V_0));
		uint8_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m105(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4531, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_8 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral1338, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(uint8_t*)((uint8_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t4922_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m34593_gshared (Dictionary_2_t5686 * __this, KeyValuePair_2_t5683  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t4922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10689);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		int64_t L_0 = (( int64_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5683 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t5686 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, int64_t, uint8_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t5686 *)__this, (int64_t)L_0, (uint8_t*)(&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4922_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4922 * L_2 = (( EqualityComparer_1_t4922 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		uint8_t L_3 = (( uint8_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5683 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint8_t L_4 = V_0;
		NullCheck((EqualityComparer_1_t4922 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, (EqualityComparer_1_t4922 *)L_2, (uint8_t)L_3, (uint8_t)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t5689  Dictionary_2_GetEnumerator_m34594_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5689  L_0 = {0};
		(( void (*) (Enumerator_t5689 *, Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t5686 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m34595_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		uint8_t L_3 = ___value;
		uint8_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_4);
		DictionaryEntry_t660  L_6 = {0};
		DictionaryEntry__ctor_m16761(&L_6, (Object_t *)L_2, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_44.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_44MethodDeclarations.h"
struct Dictionary_2_t5686;
struct Array_t;
struct Transform_1_t5690;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt64_t691_m45886_gshared (Dictionary_2_t5686 * __this, Array_t * p0, int32_t p1, Transform_1_t5690 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt64_t691_m45886(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5686 *, Array_t *, int32_t, Transform_1_t5690 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt64_t691_m45886_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t5686;
struct Int64U5BU5D_t2413;
struct Transform_1_t5690;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t691_TisInt64_t691_m45887_gshared (Dictionary_2_t5686 * __this, Int64U5BU5D_t2413* p0, int32_t p1, Transform_1_t5690 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt64_t691_TisInt64_t691_m45887(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5686 *, Int64U5BU5D_t2413*, int32_t, Transform_1_t5690 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt64_t691_TisInt64_t691_m45887_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m34596_gshared (KeyCollection_t5687 * __this, Dictionary_2_t5686 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t5686 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral4526, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t5686 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m34597_gshared (KeyCollection_t5687 * __this, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m34598_gshared (KeyCollection_t5687 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m34599_gshared (KeyCollection_t5687 * __this, int64_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t5686 * L_0 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		int64_t L_1 = ___item;
		NullCheck((Dictionary_2_t5686 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey) */, (Dictionary_2_t5686 *)L_0, (int64_t)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m34600_gshared (KeyCollection_t5687 * __this, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m34601_gshared (KeyCollection_t5687 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t5687 *)__this);
		Enumerator_t5688  L_0 = (( Enumerator_t5688  (*) (KeyCollection_t5687 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t5687 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5688  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m34602_gshared (KeyCollection_t5687 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int64U5BU5D_t2413* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int64U5BU5D_t2413*)((Int64U5BU5D_t2413*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int64U5BU5D_t2413* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int64U5BU5D_t2413* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t5687 *)__this);
		VirtActionInvoker2< Int64U5BU5D_t2413*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t5687 *)__this, (Int64U5BU5D_t2413*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t5686 * L_4 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t5686 *)L_4);
		(( void (*) (Dictionary_2_t5686 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t5686 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t5686 * L_7 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t5690 * L_11 = (Transform_1_t5690 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t5690 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t5686 *)L_7);
		(( void (*) (Dictionary_2_t5686 *, Array_t *, int32_t, Transform_1_t5690 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t5686 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t5690 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m34603_gshared (KeyCollection_t5687 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t5687 *)__this);
		Enumerator_t5688  L_0 = (( Enumerator_t5688  (*) (KeyCollection_t5687 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t5687 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5688  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m34604_gshared (KeyCollection_t5687 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m34605_gshared (KeyCollection_t5687 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t661_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m34606_gshared (KeyCollection_t5687 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t5686 * L_0 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t661_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m34607_gshared (KeyCollection_t5687 * __this, Int64U5BU5D_t2413* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t5686 * L_0 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		Int64U5BU5D_t2413* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t5686 *)L_0);
		(( void (*) (Dictionary_2_t5686 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t5686 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t5686 * L_3 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		Int64U5BU5D_t2413* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t5690 * L_7 = (Transform_1_t5690 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t5690 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t5686 *)L_3);
		(( void (*) (Dictionary_2_t5686 *, Int64U5BU5D_t2413*, int32_t, Transform_1_t5690 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t5686 *)L_3, (Int64U5BU5D_t2413*)L_4, (int32_t)L_5, (Transform_1_t5690 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t5688  KeyCollection_GetEnumerator_m34608_gshared (KeyCollection_t5687 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t5686 * L_0 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		Enumerator_t5688  L_1 = {0};
		(( void (*) (Enumerator_t5688 *, Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t5686 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m34609_gshared (KeyCollection_t5687 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t5686 * L_0 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t5686 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count() */, (Dictionary_2_t5686 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m34610_gshared (Enumerator_t5688 * __this, Dictionary_2_t5686 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t5686 * L_0 = ___host;
		NullCheck((Dictionary_2_t5686 *)L_0);
		Enumerator_t5689  L_1 = (( Enumerator_t5689  (*) (Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5686 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m34611_gshared (Enumerator_t5688 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5689 * L_0 = (Enumerator_t5689 *)&(__this->___host_enumerator_0);
		int64_t L_1 = (( int64_t (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t5689 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m34612_gshared (Enumerator_t5688 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5689 * L_0 = (Enumerator_t5689 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t5689 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m34613_gshared (Enumerator_t5688 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5689 * L_0 = (Enumerator_t5689 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t5689 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" int64_t Enumerator_get_Current_m34614_gshared (Enumerator_t5688 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5689 * L_0 = (Enumerator_t5689 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t5683 * L_1 = (KeyValuePair_2_t5683 *)&(L_0->___current_3);
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5683 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m34615_gshared (Enumerator_t5689 * __this, Dictionary_2_t5686 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t5686 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t5686 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m34616_gshared (Enumerator_t5689 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5689 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5683  L_0 = (KeyValuePair_2_t5683 )(__this->___current_3);
		KeyValuePair_2_t5683  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m34617_gshared (Enumerator_t5689 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5689 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5683 * L_0 = (KeyValuePair_2_t5683 *)&(__this->___current_3);
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t5683 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_2);
		KeyValuePair_2_t5683 * L_4 = (KeyValuePair_2_t5683 *)&(__this->___current_3);
		uint8_t L_5 = (( uint8_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5683 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_6);
		DictionaryEntry_t660  L_8 = {0};
		DictionaryEntry__ctor_m16761(&L_8, (Object_t *)L_3, (Object_t *)L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m34618_gshared (Enumerator_t5689 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t5689 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m34619_gshared (Enumerator_t5689 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t5689 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m34620_gshared (Enumerator_t5689 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t5689 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t5686 * L_4 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t4893* L_5 = (LinkU5BU5D_t4893*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t5686 * L_8 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		NullCheck(L_8);
		Int64U5BU5D_t2413* L_9 = (Int64U5BU5D_t2413*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t5686 * L_12 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		NullCheck(L_12);
		ByteU5BU5D_t25* L_13 = (ByteU5BU5D_t25*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t5683  L_16 = {0};
		(( void (*) (KeyValuePair_2_t5683 *, int64_t, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_9, L_11)), (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t5686 * L_18 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t5683  Enumerator_get_Current_m34621_gshared (Enumerator_t5689 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t5683  L_0 = (KeyValuePair_2_t5683 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m34622_gshared (Enumerator_t5689 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5689 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5683 * L_0 = (KeyValuePair_2_t5683 *)&(__this->___current_3);
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t5683 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m34623_gshared (Enumerator_t5689 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5689 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5683 * L_0 = (KeyValuePair_2_t5683 *)&(__this->___current_3);
		uint8_t L_1 = (( uint8_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5683 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern TypeInfo* ObjectDisposedException_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m34624_gshared (Enumerator_t5689 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2644);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t5686 * L_0 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1338 * L_1 = (ObjectDisposedException_t1338 *)il2cpp_codegen_object_new (ObjectDisposedException_t1338_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m6605(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t5686 * L_2 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1086 * L_5 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_5, (String_t*)(String_t*) &_stringLiteral4532, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m34625_gshared (Enumerator_t5689 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t5689 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1086 * L_1 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_1, (String_t*)(String_t*) &_stringLiteral3555, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m34626_gshared (Enumerator_t5689 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t5686 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m34627_gshared (Transform_1_t5690 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>::Invoke(TKey,TValue)
extern "C" int64_t Transform_1_Invoke_m34628_gshared (Transform_1_t5690 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m34628((Transform_1_t5690 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int64_t (*FunctionPointerType) (Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t691_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m34629_gshared (Transform_1_t5690 * __this, int64_t ___key, uint8_t ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t691_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Byte_t26_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Transform_1_EndInvoke_m34630_gshared (Transform_1_t5690 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int64_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_48.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_48MethodDeclarations.h"
struct Dictionary_2_t5686;
struct Array_t;
struct Transform_1_t5693;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisByte_t26_m45889_gshared (Dictionary_2_t5686 * __this, Array_t * p0, int32_t p1, Transform_1_t5693 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisByte_t26_m45889(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5686 *, Array_t *, int32_t, Transform_1_t5693 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisByte_t26_m45889_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t5686;
struct ByteU5BU5D_t25;
struct Transform_1_t5693;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Byte,System.Byte>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Byte,System.Byte>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisByte_t26_TisByte_t26_m45890_gshared (Dictionary_2_t5686 * __this, ByteU5BU5D_t25* p0, int32_t p1, Transform_1_t5693 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisByte_t26_TisByte_t26_m45890(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5686 *, ByteU5BU5D_t25*, int32_t, Transform_1_t5693 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisByte_t26_TisByte_t26_m45890_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void ValueCollection__ctor_m34631_gshared (ValueCollection_t5691 * __this, Dictionary_2_t5686 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t5686 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral4526, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t5686 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m34632_gshared (ValueCollection_t5691 * __this, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m34633_gshared (ValueCollection_t5691 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m34634_gshared (ValueCollection_t5691 * __this, uint8_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t5686 * L_0 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		uint8_t L_1 = ___item;
		NullCheck((Dictionary_2_t5686 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t5686 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5686 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m34635_gshared (ValueCollection_t5691 * __this, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m34636_gshared (ValueCollection_t5691 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t5691 *)__this);
		Enumerator_t5692  L_0 = (( Enumerator_t5692  (*) (ValueCollection_t5691 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t5691 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5692  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m34637_gshared (ValueCollection_t5691 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ByteU5BU5D_t25* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ByteU5BU5D_t25*)((ByteU5BU5D_t25*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ByteU5BU5D_t25* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_t25* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t5691 *)__this);
		VirtActionInvoker2< ByteU5BU5D_t25*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::CopyTo(TValue[],System.Int32) */, (ValueCollection_t5691 *)__this, (ByteU5BU5D_t25*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t5686 * L_4 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t5686 *)L_4);
		(( void (*) (Dictionary_2_t5686 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t5686 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t5686 * L_7 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t5693 * L_11 = (Transform_1_t5693 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t5693 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t5686 *)L_7);
		(( void (*) (Dictionary_2_t5686 *, Array_t *, int32_t, Transform_1_t5693 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t5686 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t5693 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m34638_gshared (ValueCollection_t5691 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t5691 *)__this);
		Enumerator_t5692  L_0 = (( Enumerator_t5692  (*) (ValueCollection_t5691 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t5691 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5692  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m34639_gshared (ValueCollection_t5691 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m34640_gshared (ValueCollection_t5691 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t661_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m34641_gshared (ValueCollection_t5691 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t5686 * L_0 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t661_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m34642_gshared (ValueCollection_t5691 * __this, ByteU5BU5D_t25* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t5686 * L_0 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		ByteU5BU5D_t25* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t5686 *)L_0);
		(( void (*) (Dictionary_2_t5686 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t5686 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t5686 * L_3 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		ByteU5BU5D_t25* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t5693 * L_7 = (Transform_1_t5693 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t5693 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t5686 *)L_3);
		(( void (*) (Dictionary_2_t5686 *, ByteU5BU5D_t25*, int32_t, Transform_1_t5693 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t5686 *)L_3, (ByteU5BU5D_t25*)L_4, (int32_t)L_5, (Transform_1_t5693 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t5692  ValueCollection_GetEnumerator_m34643_gshared (ValueCollection_t5691 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t5686 * L_0 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		Enumerator_t5692  L_1 = {0};
		(( void (*) (Enumerator_t5692 *, Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t5686 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m34644_gshared (ValueCollection_t5691 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t5686 * L_0 = (Dictionary_2_t5686 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t5686 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count() */, (Dictionary_2_t5686 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m34645_gshared (Enumerator_t5692 * __this, Dictionary_2_t5686 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t5686 * L_0 = ___host;
		NullCheck((Dictionary_2_t5686 *)L_0);
		Enumerator_t5689  L_1 = (( Enumerator_t5689  (*) (Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5686 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m34646_gshared (Enumerator_t5692 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5689 * L_0 = (Enumerator_t5689 *)&(__this->___host_enumerator_0);
		uint8_t L_1 = (( uint8_t (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t5689 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m34647_gshared (Enumerator_t5692 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5689 * L_0 = (Enumerator_t5689 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t5689 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m34648_gshared (Enumerator_t5692 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5689 * L_0 = (Enumerator_t5689 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t5689 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" uint8_t Enumerator_get_Current_m34649_gshared (Enumerator_t5692 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5689 * L_0 = (Enumerator_t5689 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t5683 * L_1 = (KeyValuePair_2_t5683 *)&(L_0->___current_3);
		uint8_t L_2 = (( uint8_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5683 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m34650_gshared (Transform_1_t5693 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m34651_gshared (Transform_1_t5693 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m34651((Transform_1_t5693 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t691_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m34652_gshared (Transform_1_t5693 * __this, int64_t ___key, uint8_t ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t691_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Byte_t26_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m34653_gshared (Transform_1_t5693 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m34654_gshared (Transform_1_t5685 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t660  Transform_1_Invoke_m34655_gshared (Transform_1_t5685 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m34655((Transform_1_t5685 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t660  (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t660  (*FunctionPointerType) (Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t691_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m34656_gshared (Transform_1_t5685 * __this, int64_t ___key, uint8_t ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t691_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Byte_t26_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t660  Transform_1_EndInvoke_m34657_gshared (Transform_1_t5685 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t660 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m34658_gshared (Transform_1_t5694 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t5683  Transform_1_Invoke_m34659_gshared (Transform_1_t5694 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m34659((Transform_1_t5694 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t5683  (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t5683  (*FunctionPointerType) (Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t691_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m34660_gshared (Transform_1_t5694 * __this, int64_t ___key, uint8_t ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t691_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Byte_t26_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t5683  Transform_1_EndInvoke_m34661_gshared (Transform_1_t5694 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t5683 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m34662_gshared (ShimEnumerator_t5695 * __this, Dictionary_2_t5686 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t5686 * L_0 = ___host;
		NullCheck((Dictionary_2_t5686 *)L_0);
		Enumerator_t5689  L_1 = (( Enumerator_t5689  (*) (Dictionary_2_t5686 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5686 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m34663_gshared (ShimEnumerator_t5695 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5689 * L_0 = (Enumerator_t5689 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t5689 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t3115_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m34664_gshared (ShimEnumerator_t5695 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t3115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6706);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t5689  L_0 = (Enumerator_t5689 )(__this->___host_enumerator_0);
		Enumerator_t5689  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t660  L_3 = (DictionaryEntry_t660 )InterfaceFuncInvoker0< DictionaryEntry_t660  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t3115_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m34665_gshared (ShimEnumerator_t5695 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t5683  V_0 = {0};
	{
		Enumerator_t5689 * L_0 = (Enumerator_t5689 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t5683  L_1 = (( KeyValuePair_2_t5683  (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t5689 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t5683 )L_1;
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5683 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m34666_gshared (ShimEnumerator_t5695 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t5683  V_0 = {0};
	{
		Enumerator_t5689 * L_0 = (Enumerator_t5689 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t5683  L_1 = (( KeyValuePair_2_t5683  (*) (Enumerator_t5689 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t5689 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t5683 )L_1;
		uint8_t L_2 = (( uint8_t (*) (KeyValuePair_2_t5683 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5683 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern TypeInfo* DictionaryEntry_t660_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m34667_gshared (ShimEnumerator_t5695 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t660_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t5695 *)__this);
		DictionaryEntry_t660  L_0 = (DictionaryEntry_t660 )VirtFuncInvoker0< DictionaryEntry_t660  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry() */, (ShimEnumerator_t5695 *)__this);
		DictionaryEntry_t660  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t660_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_57.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_57MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_45.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_49.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_59.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_60.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__31.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_9.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_45MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_49MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_59MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_60MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__31MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_9MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
struct Dictionary_2_t5698;
struct DictionaryEntryU5BU5D_t7242;
struct Transform_1_t5697;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m45900_gshared (Dictionary_2_t5698 * __this, DictionaryEntryU5BU5D_t7242* p0, int32_t p1, Transform_1_t5697 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m45900(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5698 *, DictionaryEntryU5BU5D_t7242*, int32_t, Transform_1_t5697 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m45900_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t5698;
struct Array_t;
struct Transform_1_t5706;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t5678_m45902_gshared (Dictionary_2_t5698 * __this, Array_t * p0, int32_t p1, Transform_1_t5706 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t5678_m45902(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5698 *, Array_t *, int32_t, Transform_1_t5706 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t5678_m45902_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t5698;
struct KeyValuePair_2U5BU5D_t6827;
struct Transform_1_t5706;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t5678_TisKeyValuePair_2_t5678_m45903_gshared (Dictionary_2_t5698 * __this, KeyValuePair_2U5BU5D_t6827* p0, int32_t p1, Transform_1_t5706 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t5678_TisKeyValuePair_2_t5678_m45903(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5698 *, KeyValuePair_2U5BU5D_t6827*, int32_t, Transform_1_t5706 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t5678_TisKeyValuePair_2_t5678_m45903_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m34680_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5698 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m34681_gshared (Dictionary_2_t5698 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5698 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m34683_gshared (Dictionary_2_t5698 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t5698 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m34685_gshared (Dictionary_2_t5698 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5698 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m34687_gshared (Dictionary_2_t5698 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t5678  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral4526, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5698 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t5678  L_9 = (KeyValuePair_2_t5678 )InterfaceFuncInvoker0< KeyValuePair_2_t5678  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t5678 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5678 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			uint8_t L_11 = (( uint8_t (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5678 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t5698 *)__this);
			VirtActionInvoker2< Object_t *, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t5698 *)__this, (Object_t *)L_10, (uint8_t)L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			Object_t* L_15 = V_2;
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m34689_gshared (Dictionary_2_t5698 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m34691_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t5698 *)__this);
		KeyCollection_t5699 * L_0 = (( KeyCollection_t5699 * (*) (Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t5698 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m34693_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t5698 *)__this);
		ValueCollection_t5703 * L_0 = (( ValueCollection_t5703 * (*) (Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t5698 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m34695_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t5698 *)__this);
		KeyCollection_t5699 * L_0 = (( KeyCollection_t5699 * (*) (Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t5698 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m34697_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t5698 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey) */, (Dictionary_2_t5698 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t5698 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t5698 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t5698 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t5698 *)__this);
		uint8_t L_5 = (uint8_t)VirtFuncInvoker1< uint8_t, Object_t * >::Invoke(22 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey) */, (Dictionary_2_t5698 *)__this, (Object_t *)L_4);
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m34699_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t5698 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t5698 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t5698 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t5698 *)__this);
		uint8_t L_3 = (( uint8_t (*) (Dictionary_2_t5698 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t5698 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t5698 *)__this);
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue) */, (Dictionary_2_t5698 *)__this, (Object_t *)L_1, (uint8_t)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m34701_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t5698 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t5698 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t5698 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t5698 *)__this);
		uint8_t L_3 = (( uint8_t (*) (Dictionary_2_t5698 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t5698 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t5698 *)__this);
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t5698 *)__this, (Object_t *)L_1, (uint8_t)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m34703_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t5698 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey) */, (Dictionary_2_t5698 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m34705_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t5698 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey) */, (Dictionary_2_t5698 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m34707_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34709_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m34711_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m34713_gshared (Dictionary_2_t5698 * __this, KeyValuePair_2_t5678  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5678 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		uint8_t L_1 = (( uint8_t (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5678 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t5698 *)__this);
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t5698 *)__this, (Object_t *)L_0, (uint8_t)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m34715_gshared (Dictionary_2_t5698 * __this, KeyValuePair_2_t5678  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t5678  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t5698 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t5698 *, KeyValuePair_2_t5678 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t5698 *)__this, (KeyValuePair_2_t5678 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m34717_gshared (Dictionary_2_t5698 * __this, KeyValuePair_2U5BU5D_t6827* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t6827* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, KeyValuePair_2U5BU5D_t6827*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t5698 *)__this, (KeyValuePair_2U5BU5D_t6827*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m34719_gshared (Dictionary_2_t5698 * __this, KeyValuePair_2_t5678  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t5678  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t5698 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t5698 *, KeyValuePair_2_t5678 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t5698 *)__this, (KeyValuePair_2_t5678 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5678 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t5698 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey) */, (Dictionary_2_t5698 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t7242_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m34721_gshared (Dictionary_2_t5698 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t7242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13530);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t6827* V_0 = {0};
	DictionaryEntryU5BU5D_t7242* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t7242* G_B5_1 = {0};
	Dictionary_2_t5698 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t7242* G_B4_1 = {0};
	Dictionary_2_t5698 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t6827*)((KeyValuePair_2U5BU5D_t6827*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t6827* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6827* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, KeyValuePair_2U5BU5D_t6827*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t5698 *)__this, (KeyValuePair_2U5BU5D_t6827*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t5698 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t7242*)((DictionaryEntryU5BU5D_t7242*)IsInst(L_6, DictionaryEntryU5BU5D_t7242_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t7242* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t7242* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t5697 * L_10 = ((Dictionary_2_t5698_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t5698 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t5698 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t5697 * L_12 = (Transform_1_t5697 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t5697 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t5698_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t5698 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t5697 * L_13 = ((Dictionary_2_t5698_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t5698 *)G_B5_2);
		(( void (*) (Dictionary_2_t5698 *, DictionaryEntryU5BU5D_t7242*, int32_t, Transform_1_t5697 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t5698 *)G_B5_2, (DictionaryEntryU5BU5D_t7242*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t5697 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t5706 * L_17 = (Transform_1_t5706 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t5706 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, Array_t *, int32_t, Transform_1_t5706 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t5698 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t5706 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m34723_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5701  L_0 = {0};
		(( void (*) (Enumerator_t5701 *, Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t5698 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t5701  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34725_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5701  L_0 = {0};
		(( void (*) (Enumerator_t5701 *, Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t5698 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t5701  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m34727_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t5707 * L_0 = (ShimEnumerator_t5707 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t5707 *, Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t5698 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m34729_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t3918_il2cpp_TypeInfo_var;
extern "C" uint8_t Dictionary_2_get_Item_m34731_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		KeyNotFoundException_t3918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9199);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_2 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_2, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t119* L_6 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t119* L_8 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t4893* L_10 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t21* L_15 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		ByteU5BU5D_t25* L_20 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_22));
	}

IL_007d:
	{
		LinkU5BU5D_t4893* L_23 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t3918 * L_27 = (KeyNotFoundException_t3918 *)il2cpp_codegen_object_new (KeyNotFoundException_t3918_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m18314(L_27, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m34733_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_2 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_2, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t119* L_8 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t4893* L_12 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t21* L_17 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), (Object_t *)L_20);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		LinkU5BU5D_t4893* L_23 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_28 = (int32_t)(__this->___count_10);
		int32_t L_29 = (int32_t)((int32_t)((int32_t)L_28+(int32_t)1));
		V_4 = (int32_t)L_29;
		__this->___count_10 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c9;
		}
	}
	{
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t5698 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_32 = V_0;
		Int32U5BU5D_t119* L_33 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_33);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_33)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_34 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_34;
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_36 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_37 = (int32_t)L_36;
		V_4 = (int32_t)L_37;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_4;
		V_2 = (int32_t)L_38;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t4893* L_39 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_39, L_40))->___Next_1);
		__this->___emptySlot_9 = L_41;
	}

IL_0101:
	{
		LinkU5BU5D_t4893* L_42 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t119* L_44 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t119* L_47 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		LinkU5BU5D_t4893* L_50 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_51 = V_2;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = V_0;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_50, L_51))->___HashCode_0 = L_52;
		ObjectU5BU5D_t21* L_53 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___key;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t4893* L_57 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_58 = V_3;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		LinkU5BU5D_t4893* L_59 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_60 = V_2;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		int32_t L_61 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_59, L_60))->___Next_1);
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_57, L_58))->___Next_1 = L_61;
		LinkU5BU5D_t4893* L_62 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_63 = V_2;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		Int32U5BU5D_t119* L_64 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_65 = V_1;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_65);
		int32_t L_66 = L_65;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_62, L_63))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_64, L_66))-(int32_t)1));
		Int32U5BU5D_t119* L_67 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, L_68)) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0194:
	{
		ByteU5BU5D_t25* L_70 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		int32_t L_71 = V_2;
		uint8_t L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_70, L_71)) = (uint8_t)L_72;
		int32_t L_73 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t4879_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m34735_gshared (Dictionary_2_t5698 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		EqualityComparer_1_t4879_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10529);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t5698 * G_B4_0 = {0};
	Dictionary_2_t5698 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t5698 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_1 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_1, (String_t*)(String_t*) &_stringLiteral3552, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t5698 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t5698 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t5698 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4879_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4879 * L_5 = (( EqualityComparer_1_t4879 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t5698 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t5698 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t4893_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m34737_gshared (Dictionary_2_t5698 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		LinkU5BU5D_t4893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13531);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t119*)SZArrayNew(Int32U5BU5D_t119_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t4893*)SZArrayNew(LinkU5BU5D_t4893_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t21*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ByteU5BU5D_t25*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t119* L_4 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t119* L_6 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m34739_gshared (Dictionary_2_t5698 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
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
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m11495((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t1126 * L_7 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_7, (String_t*)(String_t*) &_stringLiteral3553, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m11495((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t5698 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count() */, (Dictionary_2_t5698 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_12 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_12, (String_t*)(String_t*) &_stringLiteral3554, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5678  Dictionary_2_make_pair_m34741_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		uint8_t L_1 = ___value;
		KeyValuePair_2_t5678  L_2 = {0};
		(( void (*) (KeyValuePair_2_t5678 *, Object_t *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (Object_t *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m34743_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m34745_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m34747_gshared (Dictionary_2_t5698 * __this, KeyValuePair_2U5BU5D_t6827* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t6827* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t5698 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t6827* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t5706 * L_5 = (Transform_1_t5706 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t5706 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, KeyValuePair_2U5BU5D_t6827*, int32_t, Transform_1_t5706 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t5698 *)__this, (KeyValuePair_2U5BU5D_t6827*)L_2, (int32_t)L_3, (Transform_1_t5706 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern TypeInfo* Hashtable_t1256_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t4893_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m34749_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2705);
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		LinkU5BU5D_t4893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13531);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t119* V_1 = {0};
	LinkU5BU5D_t4893* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t21* V_7 = {0};
	ByteU5BU5D_t25* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t119* L_0 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t1256_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m18505(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t119*)((Int32U5BU5D_t119*)SZArrayNew(Int32U5BU5D_t119_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t4893*)((LinkU5BU5D_t4893*)SZArrayNew(LinkU5BU5D_t4893_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t119* L_4 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t4893* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t21* L_10 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t4893* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t119* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t119* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t4893* L_26 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t119* L_32 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t119* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t4893* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (ByteU5BU5D_t25*)((ByteU5BU5D_t25*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		ObjectU5BU5D_t21* L_37 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		ObjectU5BU5D_t21* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ByteU5BU5D_t25* L_40 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		ByteU5BU5D_t25* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ByteU5BU5D_t25* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m34751_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_2 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_2, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t119* L_8 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t4893* L_11 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t21* L_16 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t1126 * L_21 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_21, (String_t*)(String_t*) &_stringLiteral4528, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_007d:
	{
		LinkU5BU5D_t4893* L_22 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = (int32_t)L_24;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_26 = (int32_t)(__this->___count_10);
		int32_t L_27 = (int32_t)((int32_t)((int32_t)L_26+(int32_t)1));
		V_3 = (int32_t)L_27;
		__this->___count_10 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t5698 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_30 = V_0;
		Int32U5BU5D_t119* L_31 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_31);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_32 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_34 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_35 = (int32_t)L_34;
		V_3 = (int32_t)L_35;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		V_2 = (int32_t)L_36;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t4893* L_37 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		__this->___emptySlot_9 = L_39;
	}

IL_00f9:
	{
		LinkU5BU5D_t4893* L_40 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = V_0;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_40, L_41))->___HashCode_0 = L_42;
		LinkU5BU5D_t4893* L_43 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t119* L_45 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t119* L_48 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		ObjectU5BU5D_t21* L_51 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_52 = V_2;
		Object_t * L_53 = ___key;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, L_52)) = (Object_t *)L_53;
		ByteU5BU5D_t25* L_54 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		int32_t L_55 = V_2;
		uint8_t L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_55)) = (uint8_t)L_56;
		int32_t L_57 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m34753_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t119* L_0 = (Int32U5BU5D_t119*)(__this->___table_4);
		Int32U5BU5D_t119* L_1 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m6585(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_2 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		ObjectU5BU5D_t21* L_3 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m6585(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_t25* L_4 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		ByteU5BU5D_t25* L_5 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m6585(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t4893* L_6 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		LinkU5BU5D_t4893* L_7 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m6585(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m34755_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_2 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_2, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t119* L_6 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t119* L_8 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t4893* L_10 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t21* L_15 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t4893* L_20 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_20, L_21))->___Next_1);
		V_1 = (int32_t)L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t4922_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m34757_gshared (Dictionary_2_t5698 * __this, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t4922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10689);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4922_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4922 * L_0 = (( EqualityComparer_1_t4922 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t119* L_1 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		ByteU5BU5D_t25* L_5 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		uint8_t L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Byte>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (Object_t*)L_4, (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7)), (uint8_t)L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t4893* L_10 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t119* L_16 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m34759_gshared (Dictionary_2_t5698 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t6827* V_0 = {0};
	{
		SerializationInfo_t1322 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral216, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t1322 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t1322 *)L_2);
		SerializationInfo_AddValue_m11568((SerializationInfo_t1322 *)L_2, (String_t*)(String_t*) &_stringLiteral3641, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t1322 *)L_4);
		SerializationInfo_AddValue_m6629((SerializationInfo_t1322 *)L_4, (String_t*)(String_t*) &_stringLiteral3643, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t6827*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t6827*)((KeyValuePair_2U5BU5D_t6827*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t6827* L_8 = V_0;
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, KeyValuePair_2U5BU5D_t6827*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t5698 *)__this, (KeyValuePair_2U5BU5D_t6827*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t1322 * L_9 = ___info;
		Int32U5BU5D_t119* L_10 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t1322 *)L_9);
		SerializationInfo_AddValue_m11568((SerializationInfo_t1322 *)L_9, (String_t*)(String_t*) &_stringLiteral4529, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t6827* L_12 = V_0;
		NullCheck((SerializationInfo_t1322 *)L_11);
		SerializationInfo_AddValue_m6629((SerializationInfo_t1322 *)L_11, (String_t*)(String_t*) &_stringLiteral4530, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m34761_gshared (Dictionary_2_t5698 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t6827* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t1322 * L_0 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t1322 * L_1 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t1322 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m11564((SerializationInfo_t1322 *)L_1, (String_t*)(String_t*) &_stringLiteral3641, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t1322 * L_3 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t1322 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m11566((SerializationInfo_t1322 *)L_3, (String_t*)(String_t*) &_stringLiteral3643, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t1322 * L_6 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t1322 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m11564((SerializationInfo_t1322 *)L_6, (String_t*)(String_t*) &_stringLiteral4529, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t1322 * L_8 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t1322 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m11566((SerializationInfo_t1322 *)L_8, (String_t*)(String_t*) &_stringLiteral4530, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t6827*)((KeyValuePair_2U5BU5D_t6827*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t5698 *)__this);
		(( void (*) (Dictionary_2_t5698 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t5698 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t6827* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t6827* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5678 *)((KeyValuePair_2_t5678 *)(KeyValuePair_2_t5678 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t6827* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		uint8_t L_19 = (( uint8_t (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5678 *)((KeyValuePair_2_t5678 *)(KeyValuePair_2_t5678 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t5698 *)__this);
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t5698 *)__this, (Object_t *)L_16, (uint8_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t6827* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t1322 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m34763_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	uint8_t V_5 = 0x0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_2 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_2, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t119* L_8 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (int32_t)(-1);
	}

IL_004a:
	{
		LinkU5BU5D_t4893* L_12 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t21* L_17 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), (Object_t *)L_20);
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		LinkU5BU5D_t4893* L_23 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_28 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_28-(int32_t)1));
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t119* L_30 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_31 = V_1;
		LinkU5BU5D_t4893* L_32 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_32, L_33))->___Next_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t4893* L_35 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		LinkU5BU5D_t4893* L_37 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_35, L_36))->___Next_1 = L_39;
	}

IL_00e9:
	{
		LinkU5BU5D_t4893* L_40 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(__this->___emptySlot_9);
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_40, L_41))->___Next_1 = L_42;
		int32_t L_43 = V_2;
		__this->___emptySlot_9 = L_43;
		LinkU5BU5D_t4893* L_44 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_44, L_45))->___HashCode_0 = 0;
		ObjectU5BU5D_t21* L_46 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_47 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_48 = V_4;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, L_47)) = (Object_t *)L_48;
		ByteU5BU5D_t25* L_49 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (Byte_t26_il2cpp_TypeInfo_var, (&V_5));
		uint8_t L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_49, L_50)) = (uint8_t)L_51;
		int32_t L_52 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m34765_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_2 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_2, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t119* L_6 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t119* L_8 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t4893* L_10 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t21* L_15 = (ObjectU5BU5D_t21*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		uint8_t* L_20 = ___value;
		ByteU5BU5D_t25* L_21 = (ByteU5BU5D_t25*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t4893* L_24 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = (int32_t)L_26;
	}

IL_0096:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		uint8_t* L_28 = ___value;
		Initobj (Byte_t26_il2cpp_TypeInfo_var, (&V_2));
		uint8_t L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t5699 * Dictionary_2_get_Keys_m34767_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t5699 * L_0 = (KeyCollection_t5699 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t5699 *, Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t5698 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t5703 * Dictionary_2_get_Values_m34769_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t5703 * L_0 = (ValueCollection_t5703 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t5703 *, Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t5698 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" Object_t * Dictionary_2_ToTKey_m34771_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m105(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4531, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_6 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" uint8_t Dictionary_2_ToTValue_m34773_gshared (Dictionary_2_t5698 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (Byte_t26_il2cpp_TypeInfo_var, (&V_0));
		uint8_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m105(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4531, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_8 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral1338, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(uint8_t*)((uint8_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t4922_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m34775_gshared (Dictionary_2_t5698 * __this, KeyValuePair_2_t5678  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t4922_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10689);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5678 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t5698 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, uint8_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t5698 *)__this, (Object_t *)L_0, (uint8_t*)(&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4922_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4922 * L_2 = (( EqualityComparer_1_t4922 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		uint8_t L_3 = (( uint8_t (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5678 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint8_t L_4 = V_0;
		NullCheck((EqualityComparer_1_t4922 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, (EqualityComparer_1_t4922 *)L_2, (uint8_t)L_3, (uint8_t)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t5701  Dictionary_2_GetEnumerator_m34777_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5701  L_0 = {0};
		(( void (*) (Enumerator_t5701 *, Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t5698 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m34779_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		uint8_t L_2 = ___value;
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_3);
		DictionaryEntry_t660  L_5 = {0};
		DictionaryEntry__ctor_m16761(&L_5, (Object_t *)((Object_t *)L_1), (Object_t *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_46.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_57.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_57MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_46MethodDeclarations.h"
struct Dictionary_2_t5698;
struct Array_t;
struct Transform_1_t5702;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m45896_gshared (Dictionary_2_t5698 * __this, Array_t * p0, int32_t p1, Transform_1_t5702 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m45896(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5698 *, Array_t *, int32_t, Transform_1_t5702 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m45896_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t5698;
struct ObjectU5BU5D_t21;
struct Transform_1_t5702;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m45895_gshared (Dictionary_2_t5698 * __this, ObjectU5BU5D_t21* p0, int32_t p1, Transform_1_t5702 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m45895(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5698 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t5702 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m45895_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m34780_gshared (KeyCollection_t5699 * __this, Dictionary_2_t5698 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t5698 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral4526, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t5698 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m34781_gshared (KeyCollection_t5699 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m34782_gshared (KeyCollection_t5699 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m34783_gshared (KeyCollection_t5699 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t5698 * L_0 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t5698 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey) */, (Dictionary_2_t5698 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m34784_gshared (KeyCollection_t5699 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m34785_gshared (KeyCollection_t5699 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t5699 *)__this);
		Enumerator_t5700  L_0 = (( Enumerator_t5700  (*) (KeyCollection_t5699 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t5699 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5700  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m34786_gshared (KeyCollection_t5699 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t21* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t21*)((ObjectU5BU5D_t21*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t21* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t21* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t5699 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t21*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t5699 *)__this, (ObjectU5BU5D_t21*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t5698 * L_4 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t5698 *)L_4);
		(( void (*) (Dictionary_2_t5698 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t5698 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t5698 * L_7 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t5702 * L_11 = (Transform_1_t5702 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t5702 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t5698 *)L_7);
		(( void (*) (Dictionary_2_t5698 *, Array_t *, int32_t, Transform_1_t5702 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t5698 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t5702 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m34787_gshared (KeyCollection_t5699 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t5699 *)__this);
		Enumerator_t5700  L_0 = (( Enumerator_t5700  (*) (KeyCollection_t5699 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t5699 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5700  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m34788_gshared (KeyCollection_t5699 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m34789_gshared (KeyCollection_t5699 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t661_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m34790_gshared (KeyCollection_t5699 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t5698 * L_0 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t661_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m34791_gshared (KeyCollection_t5699 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t5698 * L_0 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		ObjectU5BU5D_t21* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t5698 *)L_0);
		(( void (*) (Dictionary_2_t5698 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t5698 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t5698 * L_3 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		ObjectU5BU5D_t21* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t5702 * L_7 = (Transform_1_t5702 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t5702 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t5698 *)L_3);
		(( void (*) (Dictionary_2_t5698 *, ObjectU5BU5D_t21*, int32_t, Transform_1_t5702 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t5698 *)L_3, (ObjectU5BU5D_t21*)L_4, (int32_t)L_5, (Transform_1_t5702 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t5700  KeyCollection_GetEnumerator_m34792_gshared (KeyCollection_t5699 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t5698 * L_0 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		Enumerator_t5700  L_1 = {0};
		(( void (*) (Enumerator_t5700 *, Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t5698 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m34793_gshared (KeyCollection_t5699 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t5698 * L_0 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t5698 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count() */, (Dictionary_2_t5698 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m34794_gshared (Enumerator_t5700 * __this, Dictionary_2_t5698 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t5698 * L_0 = ___host;
		NullCheck((Dictionary_2_t5698 *)L_0);
		Enumerator_t5701  L_1 = (( Enumerator_t5701  (*) (Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5698 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m34795_gshared (Enumerator_t5700 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5701 * L_0 = (Enumerator_t5701 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t5701 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m34796_gshared (Enumerator_t5700 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5701 * L_0 = (Enumerator_t5701 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t5701 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m34797_gshared (Enumerator_t5700 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5701 * L_0 = (Enumerator_t5701 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t5701 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m34798_gshared (Enumerator_t5700 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5701 * L_0 = (Enumerator_t5701 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t5678 * L_1 = (KeyValuePair_2_t5678 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5678 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m34799_gshared (Enumerator_t5701 * __this, Dictionary_2_t5698 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t5698 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t5698 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m34800_gshared (Enumerator_t5701 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5701 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5678  L_0 = (KeyValuePair_2_t5678 )(__this->___current_3);
		KeyValuePair_2_t5678  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t660  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m34801_gshared (Enumerator_t5701 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5701 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5678 * L_0 = (KeyValuePair_2_t5678 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t5678 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t5678 * L_3 = (KeyValuePair_2_t5678 *)&(__this->___current_3);
		uint8_t L_4 = (( uint8_t (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5678 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint8_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t660  L_7 = {0};
		DictionaryEntry__ctor_m16761(&L_7, (Object_t *)((Object_t *)L_2), (Object_t *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m34802_gshared (Enumerator_t5701 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t5701 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m34803_gshared (Enumerator_t5701 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t5701 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m34804_gshared (Enumerator_t5701 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t5701 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t5698 * L_4 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t4893* L_5 = (LinkU5BU5D_t4893*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t5698 * L_8 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t21* L_9 = (ObjectU5BU5D_t21*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t5698 * L_12 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		NullCheck(L_12);
		ByteU5BU5D_t25* L_13 = (ByteU5BU5D_t25*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t5678  L_16 = {0};
		(( void (*) (KeyValuePair_2_t5678 *, Object_t *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t5698 * L_18 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t5678  Enumerator_get_Current_m34805_gshared (Enumerator_t5701 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t5678  L_0 = (KeyValuePair_2_t5678 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m34806_gshared (Enumerator_t5701 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5701 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5678 * L_0 = (KeyValuePair_2_t5678 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t5678 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m34807_gshared (Enumerator_t5701 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5701 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5678 * L_0 = (KeyValuePair_2_t5678 *)&(__this->___current_3);
		uint8_t L_1 = (( uint8_t (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5678 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern TypeInfo* ObjectDisposedException_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m34808_gshared (Enumerator_t5701 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2644);
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t5698 * L_0 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1338 * L_1 = (ObjectDisposedException_t1338 *)il2cpp_codegen_object_new (ObjectDisposedException_t1338_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m6605(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t5698 * L_2 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1086 * L_5 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_5, (String_t*)(String_t*) &_stringLiteral4532, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m34809_gshared (Enumerator_t5701 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t5701 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1086 * L_1 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_1, (String_t*)(String_t*) &_stringLiteral3555, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m34810_gshared (Enumerator_t5701 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t5698 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m34811_gshared (Transform_1_t5702 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m34812_gshared (Transform_1_t5702 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m34812((Transform_1_t5702 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m34813_gshared (Transform_1_t5702 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Byte_t26_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m34814_gshared (Transform_1_t5702 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_50.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_58.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_58MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_50MethodDeclarations.h"
struct Dictionary_2_t5698;
struct Array_t;
struct Transform_1_t5705;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisByte_t26_m45898_gshared (Dictionary_2_t5698 * __this, Array_t * p0, int32_t p1, Transform_1_t5705 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisByte_t26_m45898(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5698 *, Array_t *, int32_t, Transform_1_t5705 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisByte_t26_m45898_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t5698;
struct ByteU5BU5D_t25;
struct Transform_1_t5705;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Byte,System.Byte>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Byte,System.Byte>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisByte_t26_TisByte_t26_m45899_gshared (Dictionary_2_t5698 * __this, ByteU5BU5D_t25* p0, int32_t p1, Transform_1_t5705 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisByte_t26_TisByte_t26_m45899(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5698 *, ByteU5BU5D_t25*, int32_t, Transform_1_t5705 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisByte_t26_TisByte_t26_m45899_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void ValueCollection__ctor_m34815_gshared (ValueCollection_t5703 * __this, Dictionary_2_t5698 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t5698 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral4526, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t5698 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m34816_gshared (ValueCollection_t5703 * __this, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m34817_gshared (ValueCollection_t5703 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m34818_gshared (ValueCollection_t5703 * __this, uint8_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t5698 * L_0 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		uint8_t L_1 = ___item;
		NullCheck((Dictionary_2_t5698 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t5698 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5698 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m34819_gshared (ValueCollection_t5703 * __this, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m34820_gshared (ValueCollection_t5703 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t5703 *)__this);
		Enumerator_t5704  L_0 = (( Enumerator_t5704  (*) (ValueCollection_t5703 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t5703 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5704  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m34821_gshared (ValueCollection_t5703 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ByteU5BU5D_t25* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ByteU5BU5D_t25*)((ByteU5BU5D_t25*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ByteU5BU5D_t25* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_t25* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t5703 *)__this);
		VirtActionInvoker2< ByteU5BU5D_t25*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::CopyTo(TValue[],System.Int32) */, (ValueCollection_t5703 *)__this, (ByteU5BU5D_t25*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t5698 * L_4 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t5698 *)L_4);
		(( void (*) (Dictionary_2_t5698 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t5698 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t5698 * L_7 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t5705 * L_11 = (Transform_1_t5705 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t5705 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t5698 *)L_7);
		(( void (*) (Dictionary_2_t5698 *, Array_t *, int32_t, Transform_1_t5705 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t5698 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t5705 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m34822_gshared (ValueCollection_t5703 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t5703 *)__this);
		Enumerator_t5704  L_0 = (( Enumerator_t5704  (*) (ValueCollection_t5703 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t5703 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5704  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m34823_gshared (ValueCollection_t5703 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m34824_gshared (ValueCollection_t5703 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t661_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m34825_gshared (ValueCollection_t5703 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t5698 * L_0 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t661_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m34826_gshared (ValueCollection_t5703 * __this, ByteU5BU5D_t25* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t5698 * L_0 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		ByteU5BU5D_t25* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t5698 *)L_0);
		(( void (*) (Dictionary_2_t5698 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t5698 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t5698 * L_3 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		ByteU5BU5D_t25* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t5705 * L_7 = (Transform_1_t5705 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t5705 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t5698 *)L_3);
		(( void (*) (Dictionary_2_t5698 *, ByteU5BU5D_t25*, int32_t, Transform_1_t5705 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t5698 *)L_3, (ByteU5BU5D_t25*)L_4, (int32_t)L_5, (Transform_1_t5705 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t5704  ValueCollection_GetEnumerator_m34827_gshared (ValueCollection_t5703 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t5698 * L_0 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		Enumerator_t5704  L_1 = {0};
		(( void (*) (Enumerator_t5704 *, Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t5698 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m34828_gshared (ValueCollection_t5703 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t5698 * L_0 = (Dictionary_2_t5698 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t5698 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count() */, (Dictionary_2_t5698 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m34829_gshared (Enumerator_t5704 * __this, Dictionary_2_t5698 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t5698 * L_0 = ___host;
		NullCheck((Dictionary_2_t5698 *)L_0);
		Enumerator_t5701  L_1 = (( Enumerator_t5701  (*) (Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5698 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m34830_gshared (Enumerator_t5704 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5701 * L_0 = (Enumerator_t5701 *)&(__this->___host_enumerator_0);
		uint8_t L_1 = (( uint8_t (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t5701 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m34831_gshared (Enumerator_t5704 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5701 * L_0 = (Enumerator_t5701 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t5701 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m34832_gshared (Enumerator_t5704 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5701 * L_0 = (Enumerator_t5701 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t5701 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" uint8_t Enumerator_get_Current_m34833_gshared (Enumerator_t5704 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5701 * L_0 = (Enumerator_t5701 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t5678 * L_1 = (KeyValuePair_2_t5678 *)&(L_0->___current_3);
		uint8_t L_2 = (( uint8_t (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5678 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m34834_gshared (Transform_1_t5705 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m34835_gshared (Transform_1_t5705 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m34835((Transform_1_t5705 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m34836_gshared (Transform_1_t5705 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Byte_t26_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m34837_gshared (Transform_1_t5705 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m34838_gshared (Transform_1_t5697 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t660  Transform_1_Invoke_m34839_gshared (Transform_1_t5697 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m34839((Transform_1_t5697 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t660  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t660  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t660  (*FunctionPointerType) (Object_t * __this, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m34840_gshared (Transform_1_t5697 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Byte_t26_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t660  Transform_1_EndInvoke_m34841_gshared (Transform_1_t5697 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t660 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m34842_gshared (Transform_1_t5706 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t5678  Transform_1_Invoke_m34843_gshared (Transform_1_t5706 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m34843((Transform_1_t5706 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t5678  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t5678  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t5678  (*FunctionPointerType) (Object_t * __this, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m34844_gshared (Transform_1_t5706 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Byte_t26_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t5678  Transform_1_EndInvoke_m34845_gshared (Transform_1_t5706 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t5678 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m34846_gshared (ShimEnumerator_t5707 * __this, Dictionary_2_t5698 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t5698 * L_0 = ___host;
		NullCheck((Dictionary_2_t5698 *)L_0);
		Enumerator_t5701  L_1 = (( Enumerator_t5701  (*) (Dictionary_2_t5698 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5698 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m34847_gshared (ShimEnumerator_t5707 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5701 * L_0 = (Enumerator_t5701 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t5701 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t3115_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t660  ShimEnumerator_get_Entry_m34848_gshared (ShimEnumerator_t5707 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t3115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6706);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t5701  L_0 = (Enumerator_t5701 )(__this->___host_enumerator_0);
		Enumerator_t5701  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t660  L_3 = (DictionaryEntry_t660 )InterfaceFuncInvoker0< DictionaryEntry_t660  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t3115_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m34849_gshared (ShimEnumerator_t5707 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t5678  V_0 = {0};
	{
		Enumerator_t5701 * L_0 = (Enumerator_t5701 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t5678  L_1 = (( KeyValuePair_2_t5678  (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t5701 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t5678 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5678 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m34850_gshared (ShimEnumerator_t5707 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t5678  V_0 = {0};
	{
		Enumerator_t5701 * L_0 = (Enumerator_t5701 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t5678  L_1 = (( KeyValuePair_2_t5678  (*) (Enumerator_t5701 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t5701 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t5678 )L_1;
		uint8_t L_2 = (( uint8_t (*) (KeyValuePair_2_t5678 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5678 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern TypeInfo* DictionaryEntry_t660_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m34851_gshared (ShimEnumerator_t5707 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t660_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t5707 *)__this);
		DictionaryEntry_t660  L_0 = (DictionaryEntry_t660 )VirtFuncInvoker0< DictionaryEntry_t660  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry() */, (ShimEnumerator_t5707 *)__this);
		DictionaryEntry_t660  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t660_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// Parse.ParseRelation`1<System.Object>
#include "Parse_Unity_Parse_ParseRelation_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// Parse.ParseRelation`1<System.Object>
#include "Parse_Unity_Parse_ParseRelation_1_gen_2MethodDeclarations.h"

// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObject.h"
// Parse.ParseRelationBase
#include "Parse_Unity_Parse_ParseRelationBaseMethodDeclarations.h"


// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String)
extern "C" void ParseRelation_1__ctor_m35100_gshared (ParseRelation_1_t1654 * __this, ParseObject_t1427 * ___parent, String_t* ___key, const MethodInfo* method)
{
	{
		ParseObject_t1427 * L_0 = ___parent;
		String_t* L_1 = ___key;
		NullCheck((ParseRelationBase_t1488 *)__this);
		ParseRelationBase__ctor_m7119((ParseRelationBase_t1488 *)__this, (ParseObject_t1427 *)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String,System.String)
extern "C" void ParseRelation_1__ctor_m35101_gshared (ParseRelation_1_t1654 * __this, ParseObject_t1427 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method)
{
	{
		ParseObject_t1427 * L_0 = ___parent;
		String_t* L_1 = ___key;
		String_t* L_2 = ___targetClassName;
		NullCheck((ParseRelationBase_t1488 *)__this);
		ParseRelationBase__ctor_m7120((ParseRelationBase_t1488 *)__this, (ParseObject_t1427 *)L_0, (String_t*)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateExceptIteratorU3.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateExceptIteratorU3MethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::.ctor()
extern "C" void U3CCreateExceptIteratorU3Ec__Iterator4_1__ctor_m35102_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" Object_t * U3CCreateExceptIteratorU3Ec__Iterator4_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m35103_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_7);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateExceptIteratorU3Ec__Iterator4_1_System_Collections_IEnumerator_get_Current_m35104_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_7);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateExceptIteratorU3Ec__Iterator4_1_System_Collections_IEnumerable_GetEnumerator_m35105_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(8 /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator() */, (U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" Object_t* U3CCreateExceptIteratorU3Ec__Iterator4_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m35106_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 * __this, const MethodInfo* method)
{
	U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_6);
		int32_t L_1 = Interlocked_CompareExchange_m5242(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
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
		U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 * L_2 = (U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 *)L_2;
		U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esecond_8);
		NullCheck(L_3);
		L_3->___second_0 = L_4;
		U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 * L_5 = V_0;
		Object_t* L_6 = (Object_t*)(__this->___U3CU24U3Ecomparer_9);
		NullCheck(L_5);
		L_5->___comparer_1 = L_6;
		U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 * L_7 = V_0;
		Object_t* L_8 = (Object_t*)(__this->___U3CU24U3Efirst_10);
		NullCheck(L_7);
		L_7->___first_3 = L_8;
		U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 * L_9 = V_0;
		return L_9;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateExceptIteratorU3Ec__Iterator4_1_MoveNext_m35107_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_6);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_6 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_00db;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___second_0);
		Object_t* L_3 = (Object_t*)(__this->___comparer_1);
		HashSet_1_t1605 * L_4 = (HashSet_1_t1605 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (HashSet_1_t1605 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, (Object_t*)L_2, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		__this->___U3CitemsU3E__0_2 = L_4;
		Object_t* L_5 = (Object_t*)(__this->___first_3);
		NullCheck((Object_t*)L_5);
		Object_t* L_6 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_5);
		__this->___U3CU24s_49U3E__1_4 = L_6;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_004e:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_7 = V_0;
			if (((int32_t)((int32_t)L_7-(int32_t)1)) == 0)
			{
				goto IL_00a6;
			}
		}

IL_005a:
		{
			goto IL_00a6;
		}

IL_005f:
		{
			Object_t* L_8 = (Object_t*)(__this->___U3CU24s_49U3E__1_4);
			NullCheck((Object_t*)L_8);
			Object_t * L_9 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), (Object_t*)L_8);
			__this->___U3CelementU3E__2_5 = L_9;
			HashSet_1_t1605 * L_10 = (HashSet_1_t1605 *)(__this->___U3CitemsU3E__0_2);
			Object_t * L_11 = (Object_t *)(__this->___U3CelementU3E__2_5);
			Object_t* L_12 = (Object_t*)(__this->___comparer_1);
			bool L_13 = (( bool (*) (Object_t * /* static, unused */, Object_t*, Object_t *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, (Object_t*)L_10, (Object_t *)L_11, (Object_t*)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
			if (L_13)
			{
				goto IL_00a6;
			}
		}

IL_008c:
		{
			Object_t * L_14 = (Object_t *)(__this->___U3CelementU3E__2_5);
			__this->___U24current_7 = L_14;
			__this->___U24PC_6 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xDD, FINALLY_00bb);
		}

IL_00a6:
		{
			Object_t* L_15 = (Object_t*)(__this->___U3CU24s_49U3E__1_4);
			NullCheck((Object_t *)L_15);
			bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_15);
			if (L_16)
			{
				goto IL_005f;
			}
		}

IL_00b6:
		{
			IL2CPP_LEAVE(0xD4, FINALLY_00bb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_00bb;
	}

FINALLY_00bb:
	{ // begin finally (depth: 1)
		{
			bool L_17 = V_1;
			if (!L_17)
			{
				goto IL_00bf;
			}
		}

IL_00be:
		{
			IL2CPP_END_FINALLY(187)
		}

IL_00bf:
		{
			Object_t* L_18 = (Object_t*)(__this->___U3CU24s_49U3E__1_4);
			if (L_18)
			{
				goto IL_00c8;
			}
		}

IL_00c7:
		{
			IL2CPP_END_FINALLY(187)
		}

IL_00c8:
		{
			Object_t* L_19 = (Object_t*)(__this->___U3CU24s_49U3E__1_4);
			NullCheck((Object_t *)L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_19);
			IL2CPP_END_FINALLY(187)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(187)
	{
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
		IL2CPP_JUMP_TBL(0xD4, IL_00d4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_00d4:
	{
		__this->___U24PC_6 = (-1);
	}

IL_00db:
	{
		return 0;
	}

IL_00dd:
	{
		return 1;
	}
	// Dead block : IL_00df: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateExceptIterator>c__Iterator4`1<System.Object>::Dispose()
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void U3CCreateExceptIteratorU3Ec__Iterator4_1_Dispose_m35108_gshared (U3CCreateExceptIteratorU3Ec__Iterator4_1_t5723 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_6);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_6 = (-1);
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
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_49U3E__1_4);
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
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_49U3E__1_4);
			NullCheck((Object_t *)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateOfTypeIteratorU3.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateOfTypeIteratorU3MethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::.ctor()
extern "C" void U3CCreateOfTypeIteratorU3Ec__IteratorC_1__ctor_m35109_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateOfTypeIteratorU3Ec__IteratorC_1_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m35110_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateOfTypeIteratorU3Ec__IteratorC_1_System_Collections_IEnumerator_get_Current_m35111_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateOfTypeIteratorU3Ec__IteratorC_1_System_Collections_IEnumerable_GetEnumerator_m35112_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(8 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateOfTypeIteratorU3Ec__IteratorC_1_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m35113_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 * __this, const MethodInfo* method)
{
	U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_3);
		int32_t L_1 = Interlocked_CompareExchange_m5242(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
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
		U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 * L_2 = (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 *)L_2;
		U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 * L_3 = V_0;
		Object_t * L_4 = (Object_t *)(__this->___U3CU24U3Esource_5);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerable_t658_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateOfTypeIteratorU3Ec__IteratorC_1_MoveNext_m35114_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Object_t * V_2 = {0};
	bool V_3 = false;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
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
		goto IL_00bf;
	}

IL_0023:
	{
		Object_t * L_2 = (Object_t *)(__this->___source_0);
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t658_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___U3CU24s_69U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_0088;
			}
		}

IL_0043:
		{
			goto IL_0088;
		}

IL_0048:
		{
			Object_t * L_5 = (Object_t *)(__this->___U3CU24s_69U3E__0_1);
			NullCheck((Object_t *)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Object_t * L_7 = (Object_t *)(__this->___U3CelementU3E__1_2);
			if (!((Object_t *)IsInst(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))))
			{
				goto IL_0088;
			}
		}

IL_0069:
		{
			Object_t * L_8 = (Object_t *)(__this->___U3CelementU3E__1_2);
			__this->___U24current_4 = ((Object_t *)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
			__this->___U24PC_3 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xC1, FINALLY_009d);
		}

IL_0088:
		{
			Object_t * L_9 = (Object_t *)(__this->___U3CU24s_69U3E__0_1);
			NullCheck((Object_t *)L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_9);
			if (L_10)
			{
				goto IL_0048;
			}
		}

IL_0098:
		{
			IL2CPP_LEAVE(0xB8, FINALLY_009d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_009d;
	}

FINALLY_009d:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_00a1;
			}
		}

IL_00a0:
		{
			IL2CPP_END_FINALLY(157)
		}

IL_00a1:
		{
			Object_t * L_12 = (Object_t *)(__this->___U3CU24s_69U3E__0_1);
			V_2 = (Object_t *)((Object_t *)IsInst(L_12, IDisposable_t567_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_2;
			if (L_13)
			{
				goto IL_00b1;
			}
		}

IL_00b0:
		{
			IL2CPP_END_FINALLY(157)
		}

IL_00b1:
		{
			Object_t * L_14 = V_2;
			NullCheck((Object_t *)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_14);
			IL2CPP_END_FINALLY(157)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(157)
	{
		IL2CPP_JUMP_TBL(0xC1, IL_00c1)
		IL2CPP_JUMP_TBL(0xB8, IL_00b8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_00b8:
	{
		__this->___U24PC_3 = (-1);
	}

IL_00bf:
	{
		return 0;
	}

IL_00c1:
	{
		return 1;
	}
	// Dead block : IL_00c3: ldloc.3
}
// System.Void System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::Dispose()
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void U3CCreateOfTypeIteratorU3Ec__IteratorC_1_Dispose_m35115_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t5724 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Object_t * V_1 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
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
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t * L_2 = (Object_t *)(__this->___U3CU24s_69U3E__0_1);
			V_1 = (Object_t *)((Object_t *)IsInst(L_2, IDisposable_t567_il2cpp_TypeInfo_var));
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_4);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_003d:
	{
		return;
	}
}
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_0MethodDeclarations.h"

// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_32.h"
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_32MethodDeclarations.h"


// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::.ctor()
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m35116_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m35117_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m35118_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m35119_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(8 /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator() */, (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" Object_t* U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m35120_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 * __this, const MethodInfo* method)
{
	U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m5242(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
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
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 * L_2 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 *)L_2;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 * L_5 = V_0;
		Func_2_t1622 * L_6 = (Func_2_t1622 *)(__this->___U3CU24U3Epredicate_7);
		NullCheck(L_5);
		L_5->___predicate_3 = L_6;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m35121_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
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
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
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
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t1622 * L_7 = (Func_2_t1622 *)(__this->___predicate_3);
			Object_t * L_8 = (Object_t *)(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t1622 *)L_7);
			bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* TResult System.Func`2<System.Object,System.Boolean>::Invoke(T) */, (Func_2_t1622 *)L_7, (Object_t *)L_8);
			if (!L_9)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			Object_t * L_10 = (Object_t *)(__this->___U3CelementU3E__1_2);
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
		__last_unhandled_exception = (Exception_t468 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xC0, IL_00c0)
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
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
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::Dispose()
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m35122_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5725 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
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
		__last_unhandled_exception = (Exception_t468 *)e.ex;
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1/<>c__DisplayClass4`1<System.Object,System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task`1/<>c__DisplayClass4`1<System.Object,System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_2MethodDeclarations.h"



// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass4`1<System.Object,System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass4_1__ctor_m35190_gshared (U3CU3Ec__DisplayClass4_1_t5728 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Threading.Tasks.Task`1/<>c__DisplayClass4`1<System.Object,System.Object>::<ContinueWith>b__3(System.Threading.Tasks.Task)
extern "C" Object_t * U3CU3Ec__DisplayClass4_1_U3CContinueWithU3Eb__3_m35191_gshared (U3CU3Ec__DisplayClass4_1_t5728 * __this, Task_t1418 * ___t, const MethodInfo* method)
{
	{
		Func_2_t1599 * L_0 = (Func_2_t1599 *)(__this->___continuation_0);
		Task_t1418 * L_1 = ___t;
		NullCheck((Func_2_t1599 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Task_1_t1554 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>::Invoke(!0) */, (Func_2_t1599 *)L_0, (Task_1_t1554 *)((Task_1_t1554 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
	}
}
// Parse.ParseObject/<>c__DisplayClass89`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass89_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// Parse.ParseObject/<>c__DisplayClass89`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass89_1_genMethodDeclarations.h"

// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
#include "mscorlib_System_Collections_Generic_List_1_gen_63MethodDeclarations.h"


// System.Void Parse.ParseObject/<>c__DisplayClass89`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass89_1__ctor_m35329_gshared (U3CU3Ec__DisplayClass89_1_t5738 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<T> Parse.ParseObject/<>c__DisplayClass89`1<System.Object>::<EnqueueForAll>b__83(System.Threading.Tasks.Task)
extern "C" Task_1_t1554 * U3CU3Ec__DisplayClass89_1_U3CEnqueueForAllU3Eb__83_m35330_gshared (U3CU3Ec__DisplayClass89_1_t5738 * __this, Task_t1418 * ___task, const MethodInfo* method)
{
	{
		List_1_t1629 * L_0 = (List_1_t1629 *)(__this->___childTasks_2);
		Task_t1418 * L_1 = ___task;
		NullCheck((List_1_t1629 *)L_0);
		VirtActionInvoker1< Task_t1418 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(!0) */, (List_1_t1629 *)L_0, (Task_t1418 *)L_1);
		Task_1_t1554 * L_2 = (Task_1_t1554 *)(__this->___fullTask_1);
		return L_2;
	}
}
// Parse.ParseObject/<>c__DisplayClass86`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass86_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// Parse.ParseObject/<>c__DisplayClass86`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass86_1_genMethodDeclarations.h"



// System.Void Parse.ParseObject/<>c__DisplayClass86`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass86_1__ctor_m35331_gshared (U3CU3Ec__DisplayClass86_1_t5737 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Parse.ParseObject/<>c__DisplayClass86`1<System.Object>::<EnqueueForAll>b__84(System.Threading.Tasks.Task)
extern const MethodInfo* TaskCompletionSource_1_SetResult_m7625_MethodInfo_var;
extern "C" void U3CU3Ec__DisplayClass86_1_U3CEnqueueForAllU3Eb__84_m35332_gshared (U3CU3Ec__DisplayClass86_1_t5737 * __this, Task_t1418 * ___task, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskCompletionSource_1_SetResult_m7625_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484509);
		s_Il2CppMethodIntialized = true;
	}
	{
		TaskCompletionSource_1_t1508 * L_0 = (TaskCompletionSource_1_t1508 *)(__this->___readyToStart_0);
		NullCheck((TaskCompletionSource_1_t1508 *)L_0);
		TaskCompletionSource_1_SetResult_m7625((TaskCompletionSource_1_t1508 *)L_0, (Object_t *)NULL, /*hidden argument*/TaskCompletionSource_1_SetResult_m7625_MethodInfo_var);
		return;
	}
}
// <>f__AnonymousType3`2<System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType3_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// <>f__AnonymousType3`2<System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType3_2_gen_0MethodDeclarations.h"

// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"


// System.Void <>f__AnonymousType3`2<System.Object,System.Object>::.ctor(<item>j__TPar,<ops>j__TPar)
extern "C" void U3CU3Ef__AnonymousType3_2__ctor_m35752_gshared (U3CU3Ef__AnonymousType3_2_t5765 * __this, Object_t * ___item, Object_t * ___ops, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___item;
		__this->___U3CitemU3Ei__Field_0 = L_0;
		Object_t * L_1 = ___ops;
		__this->___U3CopsU3Ei__Field_1 = L_1;
		return;
	}
}
// <item>j__TPar <>f__AnonymousType3`2<System.Object,System.Object>::get_item()
extern "C" Object_t * U3CU3Ef__AnonymousType3_2_get_item_m35753_gshared (U3CU3Ef__AnonymousType3_2_t5765 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CitemU3Ei__Field_0);
		return L_0;
	}
}
// <ops>j__TPar <>f__AnonymousType3`2<System.Object,System.Object>::get_ops()
extern "C" Object_t * U3CU3Ef__AnonymousType3_2_get_ops_m35754_gshared (U3CU3Ef__AnonymousType3_2_t5765 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CopsU3Ei__Field_1);
		return L_0;
	}
}
// System.String <>f__AnonymousType3`2<System.Object,System.Object>::ToString()
extern TypeInfo* StringBuilder_t619_il2cpp_TypeInfo_var;
extern "C" String_t* U3CU3Ef__AnonymousType3_2_ToString_m35756_gshared (U3CU3Ef__AnonymousType3_2_t5765 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t619 * V_0 = {0};
	{
		StringBuilder_t619 * L_0 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2789(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t619 *)L_0;
		StringBuilder_t619 * L_1 = V_0;
		NullCheck((StringBuilder_t619 *)L_1);
		StringBuilder_Append_m2790((StringBuilder_t619 *)L_1, (String_t*)(String_t*) &_stringLiteral2072, /*hidden argument*/NULL);
		StringBuilder_t619 * L_2 = V_0;
		Object_t * L_3 = (Object_t *)(__this->___U3CitemU3Ei__Field_0);
		Object_t * L_4 = L_3;
		NullCheck((StringBuilder_t619 *)L_2);
		StringBuilder_Append_m14677((StringBuilder_t619 *)L_2, (Object_t *)((Object_t *)L_4), /*hidden argument*/NULL);
		StringBuilder_t619 * L_5 = V_0;
		NullCheck((StringBuilder_t619 *)L_5);
		StringBuilder_Append_m2790((StringBuilder_t619 *)L_5, (String_t*)(String_t*) &_stringLiteral2073, /*hidden argument*/NULL);
		StringBuilder_t619 * L_6 = V_0;
		Object_t * L_7 = (Object_t *)(__this->___U3CopsU3Ei__Field_1);
		Object_t * L_8 = L_7;
		NullCheck((StringBuilder_t619 *)L_6);
		StringBuilder_Append_m14677((StringBuilder_t619 *)L_6, (Object_t *)((Object_t *)L_8), /*hidden argument*/NULL);
		StringBuilder_t619 * L_9 = V_0;
		NullCheck((StringBuilder_t619 *)L_9);
		StringBuilder_Append_m2790((StringBuilder_t619 *)L_9, (String_t*)(String_t*) &_stringLiteral2074, /*hidden argument*/NULL);
		StringBuilder_t619 * L_10 = V_0;
		NullCheck((Object_t *)L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)L_10);
		return L_11;
	}
}
// System.Boolean <>f__AnonymousType3`2<System.Object,System.Object>::Equals(System.Object)
extern TypeInfo* EqualityComparer_1_t4879_il2cpp_TypeInfo_var;
extern "C" bool U3CU3Ef__AnonymousType3_2_Equals_m35758_gshared (U3CU3Ef__AnonymousType3_2_t5765 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t4879_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10529);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ef__AnonymousType3_2_t5765 * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		V_0 = (U3CU3Ef__AnonymousType3_2_t5765 *)((U3CU3Ef__AnonymousType3_2_t5765 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		U3CU3Ef__AnonymousType3_2_t5765 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4879_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4879 * L_2 = (( EqualityComparer_1_t4879 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_3 = (Object_t *)(__this->___U3CitemU3Ei__Field_0);
		U3CU3Ef__AnonymousType3_2_t5765 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)(L_4->___U3CitemU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t4879 *)L_2);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t4879 *)L_2, (Object_t *)L_3, (Object_t *)L_5);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4879_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4879 * L_7 = (( EqualityComparer_1_t4879 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_8 = (Object_t *)(__this->___U3CopsU3Ei__Field_1);
		U3CU3Ef__AnonymousType3_2_t5765 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)(L_9->___U3CopsU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t4879 *)L_7);
		bool L_11 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t4879 *)L_7, (Object_t *)L_8, (Object_t *)L_10);
		return L_11;
	}

IL_0039:
	{
		return 0;
	}
}
// System.Int32 <>f__AnonymousType3`2<System.Object,System.Object>::GetHashCode()
extern TypeInfo* EqualityComparer_1_t4879_il2cpp_TypeInfo_var;
extern "C" int32_t U3CU3Ef__AnonymousType3_2_GetHashCode_m35760_gshared (U3CU3Ef__AnonymousType3_2_t5765 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t4879_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10529);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)-450822121);
		int32_t L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4879_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4879 * L_1 = (( EqualityComparer_1_t4879 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = (Object_t *)(__this->___U3CitemU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t4879 *)L_1);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t4879 *)L_1, (Object_t *)L_2);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_0))+(int32_t)L_3));
		int32_t L_4 = V_0;
		EqualityComparer_1_t4879 * L_5 = (( EqualityComparer_1_t4879 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_6 = (Object_t *)(__this->___U3CopsU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t4879 *)L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t4879 *)L_5, (Object_t *)L_6);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_4))+(int32_t)L_7));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// <>f__AnonymousType4`3<System.Object,System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType4_3_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// <>f__AnonymousType4`3<System.Object,System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType4_3_gen_0MethodDeclarations.h"



// System.Void <>f__AnonymousType4`3<System.Object,System.Object,System.Object>::.ctor(<Obj>j__TPar,<Result>j__TPar,<Operation>j__TPar)
extern "C" void U3CU3Ef__AnonymousType4_3__ctor_m35764_gshared (U3CU3Ef__AnonymousType4_3_t5766 * __this, Object_t * ___Obj, Object_t * ___Result, Object_t * ___Operation, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___Obj;
		__this->___U3CObjU3Ei__Field_0 = L_0;
		Object_t * L_1 = ___Result;
		__this->___U3CResultU3Ei__Field_1 = L_1;
		Object_t * L_2 = ___Operation;
		__this->___U3COperationU3Ei__Field_2 = L_2;
		return;
	}
}
// <Obj>j__TPar <>f__AnonymousType4`3<System.Object,System.Object,System.Object>::get_Obj()
extern "C" Object_t * U3CU3Ef__AnonymousType4_3_get_Obj_m35765_gshared (U3CU3Ef__AnonymousType4_3_t5766 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CObjU3Ei__Field_0);
		return L_0;
	}
}
// <Result>j__TPar <>f__AnonymousType4`3<System.Object,System.Object,System.Object>::get_Result()
extern "C" Object_t * U3CU3Ef__AnonymousType4_3_get_Result_m35766_gshared (U3CU3Ef__AnonymousType4_3_t5766 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CResultU3Ei__Field_1);
		return L_0;
	}
}
// <Operation>j__TPar <>f__AnonymousType4`3<System.Object,System.Object,System.Object>::get_Operation()
extern "C" Object_t * U3CU3Ef__AnonymousType4_3_get_Operation_m35767_gshared (U3CU3Ef__AnonymousType4_3_t5766 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3COperationU3Ei__Field_2);
		return L_0;
	}
}
// System.String <>f__AnonymousType4`3<System.Object,System.Object,System.Object>::ToString()
extern TypeInfo* StringBuilder_t619_il2cpp_TypeInfo_var;
extern "C" String_t* U3CU3Ef__AnonymousType4_3_ToString_m35769_gshared (U3CU3Ef__AnonymousType4_3_t5766 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t619 * V_0 = {0};
	{
		StringBuilder_t619 * L_0 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2789(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t619 *)L_0;
		StringBuilder_t619 * L_1 = V_0;
		NullCheck((StringBuilder_t619 *)L_1);
		StringBuilder_Append_m2790((StringBuilder_t619 *)L_1, (String_t*)(String_t*) &_stringLiteral2075, /*hidden argument*/NULL);
		StringBuilder_t619 * L_2 = V_0;
		Object_t * L_3 = (Object_t *)(__this->___U3CObjU3Ei__Field_0);
		Object_t * L_4 = L_3;
		NullCheck((StringBuilder_t619 *)L_2);
		StringBuilder_Append_m14677((StringBuilder_t619 *)L_2, (Object_t *)((Object_t *)L_4), /*hidden argument*/NULL);
		StringBuilder_t619 * L_5 = V_0;
		NullCheck((StringBuilder_t619 *)L_5);
		StringBuilder_Append_m2790((StringBuilder_t619 *)L_5, (String_t*)(String_t*) &_stringLiteral2076, /*hidden argument*/NULL);
		StringBuilder_t619 * L_6 = V_0;
		Object_t * L_7 = (Object_t *)(__this->___U3CResultU3Ei__Field_1);
		Object_t * L_8 = L_7;
		NullCheck((StringBuilder_t619 *)L_6);
		StringBuilder_Append_m14677((StringBuilder_t619 *)L_6, (Object_t *)((Object_t *)L_8), /*hidden argument*/NULL);
		StringBuilder_t619 * L_9 = V_0;
		NullCheck((StringBuilder_t619 *)L_9);
		StringBuilder_Append_m2790((StringBuilder_t619 *)L_9, (String_t*)(String_t*) &_stringLiteral2077, /*hidden argument*/NULL);
		StringBuilder_t619 * L_10 = V_0;
		Object_t * L_11 = (Object_t *)(__this->___U3COperationU3Ei__Field_2);
		Object_t * L_12 = L_11;
		NullCheck((StringBuilder_t619 *)L_10);
		StringBuilder_Append_m14677((StringBuilder_t619 *)L_10, (Object_t *)((Object_t *)L_12), /*hidden argument*/NULL);
		StringBuilder_t619 * L_13 = V_0;
		NullCheck((StringBuilder_t619 *)L_13);
		StringBuilder_Append_m2790((StringBuilder_t619 *)L_13, (String_t*)(String_t*) &_stringLiteral2074, /*hidden argument*/NULL);
		StringBuilder_t619 * L_14 = V_0;
		NullCheck((Object_t *)L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)L_14);
		return L_15;
	}
}
// System.Boolean <>f__AnonymousType4`3<System.Object,System.Object,System.Object>::Equals(System.Object)
extern TypeInfo* EqualityComparer_1_t4879_il2cpp_TypeInfo_var;
extern "C" bool U3CU3Ef__AnonymousType4_3_Equals_m35771_gshared (U3CU3Ef__AnonymousType4_3_t5766 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t4879_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10529);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ef__AnonymousType4_3_t5766 * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		V_0 = (U3CU3Ef__AnonymousType4_3_t5766 *)((U3CU3Ef__AnonymousType4_3_t5766 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		U3CU3Ef__AnonymousType4_3_t5766 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4879_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4879 * L_2 = (( EqualityComparer_1_t4879 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = (Object_t *)(__this->___U3CObjU3Ei__Field_0);
		U3CU3Ef__AnonymousType4_3_t5766 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)(L_4->___U3CObjU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t4879 *)L_2);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t4879 *)L_2, (Object_t *)L_3, (Object_t *)L_5);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4879_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4879 * L_7 = (( EqualityComparer_1_t4879 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_8 = (Object_t *)(__this->___U3CResultU3Ei__Field_1);
		U3CU3Ef__AnonymousType4_3_t5766 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)(L_9->___U3CResultU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t4879 *)L_7);
		bool L_11 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t4879 *)L_7, (Object_t *)L_8, (Object_t *)L_10);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4879_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4879 * L_12 = (( EqualityComparer_1_t4879 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		Object_t * L_13 = (Object_t *)(__this->___U3COperationU3Ei__Field_2);
		U3CU3Ef__AnonymousType4_3_t5766 * L_14 = V_0;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)(L_14->___U3COperationU3Ei__Field_2);
		NullCheck((EqualityComparer_1_t4879 *)L_12);
		bool L_16 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t4879 *)L_12, (Object_t *)L_13, (Object_t *)L_15);
		return L_16;
	}

IL_0051:
	{
		return 0;
	}
}
// System.Int32 <>f__AnonymousType4`3<System.Object,System.Object,System.Object>::GetHashCode()
extern TypeInfo* EqualityComparer_1_t4879_il2cpp_TypeInfo_var;
extern "C" int32_t U3CU3Ef__AnonymousType4_3_GetHashCode_m35773_gshared (U3CU3Ef__AnonymousType4_3_t5766 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t4879_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10529);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)-783070452);
		int32_t L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4879_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4879 * L_1 = (( EqualityComparer_1_t4879 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_2 = (Object_t *)(__this->___U3CObjU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t4879 *)L_1);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t4879 *)L_1, (Object_t *)L_2);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_0))+(int32_t)L_3));
		int32_t L_4 = V_0;
		EqualityComparer_1_t4879 * L_5 = (( EqualityComparer_1_t4879 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_6 = (Object_t *)(__this->___U3CResultU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t4879 *)L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t4879 *)L_5, (Object_t *)L_6);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_4))+(int32_t)L_7));
		int32_t L_8 = V_0;
		EqualityComparer_1_t4879 * L_9 = (( EqualityComparer_1_t4879 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		Object_t * L_10 = (Object_t *)(__this->___U3COperationU3Ei__Field_2);
		NullCheck((EqualityComparer_1_t4879 *)L_9);
		int32_t L_11 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t4879 *)L_9, (Object_t *)L_10);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_8))+(int32_t)L_11));
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Func`2<System.Int32,System.Object>
#include "System_Core_System_Func_2_gen_47.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`2<System.Int32,System.Object>
#include "System_Core_System_Func_2_gen_47MethodDeclarations.h"



// System.Void System.Func`2<System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m35774_gshared (Func_2_t1614 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Int32,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m35776_gshared (Func_2_t1614 * __this, int32_t ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m35776((Func_2_t1614 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int32_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Int32,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_2_BeginInvoke_m35778_gshared (Func_2_t1614 * __this, int32_t ___arg1, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t29_il2cpp_TypeInfo_var, &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m35780_gshared (Func_2_t1614 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_2MethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::.ctor()
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2__ctor_m35781_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m35782_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerator_get_Current_m35783_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerable_GetEnumerator_m35784_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(8 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m35785_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 * __this, const MethodInfo* method)
{
	U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m5242(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
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
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 * L_2 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 *)L_2;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 * L_5 = V_0;
		Func_2_t1614 * L_6 = (Func_2_t1614 *)(__this->___U3CU24U3Eselector_7);
		NullCheck(L_5);
		L_5->___selector_3 = L_6;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m35786_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
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
		goto IL_00b3;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___source_0);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
		__this->___U3CU24s_70U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_007e;
			}
		}

IL_0043:
		{
			goto IL_007e;
		}

IL_0048:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t*)L_5);
			int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t1614 * L_7 = (Func_2_t1614 *)(__this->___selector_3);
			int32_t L_8 = (int32_t)(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t1614 *)L_7);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(11 /* TResult System.Func`2<System.Int32,System.Object>::Invoke(T) */, (Func_2_t1614 *)L_7, (int32_t)L_8);
			__this->___U24current_5 = L_9;
			__this->___U24PC_4 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB5, FINALLY_0093);
		}

IL_007e:
		{
			Object_t* L_10 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_10);
			if (L_11)
			{
				goto IL_0048;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0097;
			}
		}

IL_0096:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_0097:
		{
			Object_t* L_13 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_13)
			{
				goto IL_00a0;
			}
		}

IL_009f:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_00a0:
		{
			Object_t* L_14 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_14);
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_00ac:
	{
		__this->___U24PC_4 = (-1);
	}

IL_00b3:
	{
		return 0;
	}

IL_00b5:
	{
		return 1;
	}
	// Dead block : IL_00b7: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::Dispose()
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m35787_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t5767 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
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
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
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
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateCastIteratorU3Ec.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateCastIteratorU3EcMethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::.ctor()
extern "C" void U3CCreateCastIteratorU3Ec__Iterator0_1__ctor_m35788_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateCastIteratorU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m35789_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateCastIteratorU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m35790_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateCastIteratorU3Ec__Iterator0_1_System_Collections_IEnumerable_GetEnumerator_m35791_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(8 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateCastIteratorU3Ec__Iterator0_1_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m35792_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 * __this, const MethodInfo* method)
{
	U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_3);
		int32_t L_1 = Interlocked_CompareExchange_m5242(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
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
		U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 * L_2 = (U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 *)L_2;
		U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 * L_3 = V_0;
		Object_t * L_4 = (Object_t *)(__this->___U3CU24U3Esource_5);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerable_t658_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateCastIteratorU3Ec__Iterator0_1_MoveNext_m35793_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Object_t * V_2 = {0};
	bool V_3 = false;
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
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
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t658_il2cpp_TypeInfo_var, (Object_t *)L_2);
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
		__last_unhandled_exception = (Exception_t468 *)e.ex;
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
			V_2 = (Object_t *)((Object_t *)IsInst(L_11, IDisposable_t567_il2cpp_TypeInfo_var));
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_13);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0xB1, IL_00b1)
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
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
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void U3CCreateCastIteratorU3Ec__Iterator0_1_Dispose_m35794_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t5768 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Object_t * V_1 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
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
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t * L_2 = (Object_t *)(__this->___U3CU24s_41U3E__0_1);
			V_1 = (Object_t *)((Object_t *)IsInst(L_2, IDisposable_t567_il2cpp_TypeInfo_var));
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_4);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_003d:
	{
		return;
	}
}
// System.Threading.ThreadLocal`1<System.Int32>
#include "Parse_Unity_System_Threading_ThreadLocal_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ThreadLocal`1<System.Int32>
#include "Parse_Unity_System_Threading_ThreadLocal_1_gen_0MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_58.h"
// System.Func`1<System.Int32>
#include "System_Core_System_Func_1_gen_4.h"
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_58MethodDeclarations.h"
// System.Func`1<System.Int32>
#include "System_Core_System_Func_1_gen_4MethodDeclarations.h"


// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Int32>::get_ThreadLocalData()
extern TypeInfo* WeakReference_t1729_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t6796_il2cpp_TypeInfo_var;
extern "C" Object_t* ThreadLocal_1_get_ThreadLocalData_m36123_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WeakReference_t1729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3303);
		ICollection_1_t6796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11984);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_0 = ((ThreadLocal_1_t1526_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		Dictionary_2_t5789 * L_1 = (Dictionary_2_t5789 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Dictionary_2_t5789 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		((ThreadLocal_1_t1526_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1 = L_1;
		Object_t* L_2 = ((ThreadLocal_1_t1526_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_3 = (Object_t*)L_2;
		V_0 = (Object_t*)L_3;
		Monitor_Enter_m2469(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_4 = ((ThreadLocal_1_t1526_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_5 = ((ThreadLocal_1_t1526_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		WeakReference_t1729 * L_6 = (WeakReference_t1729 *)il2cpp_codegen_object_new (WeakReference_t1729_il2cpp_TypeInfo_var);
		WeakReference__ctor_m16830(L_6, (Object_t *)L_5, /*hidden argument*/NULL);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker1< WeakReference_t1729 * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.WeakReference>::Add(!0) */, ICollection_1_t6796_il2cpp_TypeInfo_var, (Object_t*)L_4, (WeakReference_t1729 *)L_6);
		IL2CPP_LEAVE(0x3A, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Object_t* L_7 = V_0;
		Monitor_Exit_m2472(NULL /*static, unused*/, (Object_t *)L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_8 = ((ThreadLocal_1_t1526_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		return L_8;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::.ctor(System.Func`1<T>)
extern "C" void ThreadLocal_1__ctor_m7679_gshared (ThreadLocal_1_t1526 * __this, Func_1_t1529 * ___valueFactory, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Func_1_t1529 * L_0 = ___valueFactory;
		__this->___valueFactory_5 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = Interlocked_Increment_m20728(NULL /*static, unused*/, (int64_t*)(&((ThreadLocal_1_t1526_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___lastId_0), /*hidden argument*/NULL);
		__this->___id_4 = L_1;
		return;
	}
}
// T System.Threading.ThreadLocal`1<System.Int32>::get_Value()
extern TypeInfo* ThreadLocal_1_t1526_il2cpp_TypeInfo_var;
extern "C" int32_t ThreadLocal_1_get_Value_m7681_gshared (ThreadLocal_1_t1526 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadLocal_1_t1526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3277);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		NullCheck((ThreadLocal_1_t1526 *)__this);
		(( void (*) (ThreadLocal_1_t1526 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((ThreadLocal_1_t1526 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t1526_il2cpp_TypeInfo_var);
		Object_t* L_0 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_1 = (int64_t)(__this->___id_4);
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, int64_t, int32_t* >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::TryGetValue(!0,!1&) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int64_t)L_1, (int32_t*)(&V_0));
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t1526_il2cpp_TypeInfo_var);
		Object_t* L_4 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_5 = (int64_t)(__this->___id_4);
		Func_1_t1529 * L_6 = (Func_1_t1529 *)(__this->___valueFactory_5);
		NullCheck((Func_1_t1529 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(11 /* !0 System.Func`1<System.Int32>::Invoke() */, (Func_1_t1529 *)L_6);
		int32_t L_8 = (int32_t)L_7;
		V_1 = (int32_t)L_8;
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< int64_t, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_4, (int64_t)L_5, (int32_t)L_8);
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::set_Value(T)
extern TypeInfo* ThreadLocal_1_t1526_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_set_Value_m7682_gshared (ThreadLocal_1_t1526 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadLocal_1_t1526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3277);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ThreadLocal_1_t1526 *)__this);
		(( void (*) (ThreadLocal_1_t1526 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((ThreadLocal_1_t1526 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t1526_il2cpp_TypeInfo_var);
		Object_t* L_0 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_1 = (int64_t)(__this->___id_4);
		int32_t L_2 = ___value;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int64_t, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int64_t)L_1, (int32_t)L_2);
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::Finalize()
extern "C" void ThreadLocal_1_Finalize_m36124_gshared (ThreadLocal_1_t1526 * __this, const MethodInfo* method)
{
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = (bool)(__this->___disposed_3);
			if (L_0)
			{
				goto IL_000e;
			}
		}

IL_0008:
		{
			NullCheck((ThreadLocal_1_t1526 *)__this);
			(( void (*) (ThreadLocal_1_t1526 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ThreadLocal_1_t1526 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		}

IL_000e:
		{
			IL2CPP_LEAVE(0x17, FINALLY_0010);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		NullCheck((Object_t *)__this);
		Object_Finalize_m127((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x17, IL_0017)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0017:
	{
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::CheckDisposed()
extern TypeInfo* ObjectDisposedException_t1338_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_CheckDisposed_m36125_gshared (ThreadLocal_1_t1526 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2644);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___disposed_3);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1338 * L_1 = (ObjectDisposedException_t1338 *)il2cpp_codegen_object_new (ObjectDisposedException_t1338_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m6605(L_1, (String_t*)(String_t*) &_stringLiteral1668, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::Dispose()
extern TypeInfo* IList_1_t5568_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t691_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t6796_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_Dispose_m36126_gshared (ThreadLocal_1_t1526 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_1_t5568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11968);
		Int64_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		ICollection_1_t6796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11984);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_0 = ((ThreadLocal_1_t1526_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_1 = (Object_t*)L_0;
		V_2 = (Object_t*)L_1;
		Monitor_Enter_m2469(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			V_0 = (int32_t)0;
			goto IL_0050;
		}

IL_0010:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			Object_t* L_2 = ((ThreadLocal_1_t1526_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			int32_t L_3 = V_0;
			NullCheck((Object_t*)L_2);
			WeakReference_t1729 * L_4 = (WeakReference_t1729 *)InterfaceFuncInvoker1< WeakReference_t1729 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.WeakReference>::get_Item(System.Int32) */, IList_1_t5568_il2cpp_TypeInfo_var, (Object_t*)L_2, (int32_t)L_3);
			NullCheck((WeakReference_t1729 *)L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_t1729 *)L_4);
			V_1 = (Object_t*)((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)));
			Object_t* L_6 = V_1;
			if (L_6)
			{
				goto IL_003a;
			}
		}

IL_0029:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			Object_t* L_7 = ((ThreadLocal_1_t1526_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			int32_t L_8 = V_0;
			NullCheck((Object_t*)L_7);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.WeakReference>::RemoveAt(System.Int32) */, IList_1_t5568_il2cpp_TypeInfo_var, (Object_t*)L_7, (int32_t)L_8);
			int32_t L_9 = V_0;
			V_0 = (int32_t)((int32_t)((int32_t)L_9-(int32_t)1));
			goto IL_004c;
		}

IL_003a:
		{
			Object_t* L_10 = V_1;
			int64_t L_11 = (int64_t)(__this->___id_4);
			int64_t L_12 = L_11;
			Object_t * L_13 = Box(Int64_t691_il2cpp_TypeInfo_var, &L_12);
			NullCheck((Object_t*)L_10);
			InterfaceFuncInvoker1< bool, Object_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_10, (Object_t *)L_13);
		}

IL_004c:
		{
			int32_t L_14 = V_0;
			V_0 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		}

IL_0050:
		{
			int32_t L_15 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			Object_t* L_16 = ((ThreadLocal_1_t1526_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			NullCheck((Object_t*)L_16);
			int32_t L_17 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.WeakReference>::get_Count() */, ICollection_1_t6796_il2cpp_TypeInfo_var, (Object_t*)L_16);
			if ((((int32_t)L_15) < ((int32_t)L_17)))
			{
				goto IL_0010;
			}
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		Object_t* L_18 = V_2;
		Monitor_Exit_m2472(NULL /*static, unused*/, (Object_t *)L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0066:
	{
		__this->___disposed_3 = 1;
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::.cctor()
extern TypeInfo* List_1_t5589_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m33325_MethodInfo_var;
extern "C" void ThreadLocal_1__cctor_m36127_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t5589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11985);
		List_1__ctor_m33325_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485221);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ThreadLocal_1_t1526_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___lastId_0 = (((int64_t)(-1)));
		List_1_t5589 * L_0 = (List_1_t5589 *)il2cpp_codegen_object_new (List_1_t5589_il2cpp_TypeInfo_var);
		List_1__ctor_m33325(L_0, /*hidden argument*/List_1__ctor_m33325_MethodInfo_var);
		((ThreadLocal_1_t1526_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_89.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_89MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t5786  Array_InternalArray__get_Item_TisKeyValuePair_2_t5786_m45921_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t5786_m45921(__this, p0, method) (( KeyValuePair_2_t5786  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t5786_m45921_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m36128_gshared (InternalEnumerator_1_t5787 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m36129_gshared (InternalEnumerator_1_t5787 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t5786  L_0 = (( KeyValuePair_2_t5786  (*) (InternalEnumerator_1_t5787 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t5787 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t5786  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m36130_gshared (InternalEnumerator_1_t5787 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m36131_gshared (InternalEnumerator_1_t5787 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m11495((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_Current()
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t5786  InternalEnumerator_1_get_Current_m36132_gshared (InternalEnumerator_1_t5787 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
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
		InvalidOperationException_t1086 * L_1 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_1, (String_t*)(String_t*) &_stringLiteral4416, /*hidden argument*/NULL);
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
		InvalidOperationException_t1086 * L_3 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6655(L_3, (String_t*)(String_t*) &_stringLiteral4417, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m11495((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t5786  L_8 = (( KeyValuePair_2_t5786  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44MethodDeclarations.h"



// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m36133_gshared (KeyValuePair_2_t5786 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		(( void (*) (KeyValuePair_2_t5786 *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t5786 *)__this, (int64_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t5786 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t5786 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::get_Key()
extern "C" int64_t KeyValuePair_2_get_Key_m36134_gshared (KeyValuePair_2_t5786 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (int64_t)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m36135_gshared (KeyValuePair_2_t5786 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m36136_gshared (KeyValuePair_2_t5786 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m36137_gshared (KeyValuePair_2_t5786 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>::ToString()
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m36138_gshared (KeyValuePair_2_t5786 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t20* G_B2_1 = {0};
	StringU5BU5D_t20* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t20* G_B1_1 = {0};
	StringU5BU5D_t20* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t20* G_B3_2 = {0};
	StringU5BU5D_t20* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t20* G_B5_1 = {0};
	StringU5BU5D_t20* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t20* G_B4_1 = {0};
	StringU5BU5D_t20* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t20* G_B6_2 = {0};
	StringU5BU5D_t20* G_B6_3 = {0};
	{
		StringU5BU5D_t20* L_0 = (StringU5BU5D_t20*)((StringU5BU5D_t20*)SZArrayNew(StringU5BU5D_t20_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral887);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral887;
		StringU5BU5D_t20* L_1 = (StringU5BU5D_t20*)L_0;
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t5786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t5786 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		int64_t L_5 = (( int64_t (*) (KeyValuePair_2_t5786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t5786 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int64_t)L_5;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t20* L_8 = (StringU5BU5D_t20*)G_B3_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral251);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 2)) = (String_t*)(String_t*) &_stringLiteral251;
		StringU5BU5D_t20* L_9 = (StringU5BU5D_t20*)L_8;
		int32_t L_10 = (( int32_t (*) (KeyValuePair_2_t5786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5786 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_11);
		G_B4_0 = 3;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		if (!L_12)
		{
			G_B5_0 = 3;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = (( int32_t (*) (KeyValuePair_2_t5786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t5786 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_13;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t20* L_16 = (StringU5BU5D_t20*)G_B6_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral559);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 4)) = (String_t*)(String_t*) &_stringLiteral559;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m3021(NULL /*static, unused*/, (StringU5BU5D_t20*)L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_55.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_59.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_72.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_73.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_10.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_55MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_59MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_72MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_73MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_10MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1MethodDeclarations.h"
struct Dictionary_2_t5789;
struct DictionaryEntryU5BU5D_t7242;
struct Transform_1_t5788;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m45937_gshared (Dictionary_2_t5789 * __this, DictionaryEntryU5BU5D_t7242* p0, int32_t p1, Transform_1_t5788 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m45937(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5789 *, DictionaryEntryU5BU5D_t7242*, int32_t, Transform_1_t5788 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t660_TisDictionaryEntry_t660_m45937_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t5789;
struct Array_t;
struct Transform_1_t5797;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t5786_m45939_gshared (Dictionary_2_t5789 * __this, Array_t * p0, int32_t p1, Transform_1_t5797 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t5786_m45939(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5789 *, Array_t *, int32_t, Transform_1_t5797 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t5786_m45939_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t5789;
struct KeyValuePair_2U5BU5D_t6886;
struct Transform_1_t5797;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t5786_TisKeyValuePair_2_t5786_m45940_gshared (Dictionary_2_t5789 * __this, KeyValuePair_2U5BU5D_t6886* p0, int32_t p1, Transform_1_t5797 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t5786_TisKeyValuePair_2_t5786_m45940(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5789 *, KeyValuePair_2U5BU5D_t6886*, int32_t, Transform_1_t5797 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t5786_TisKeyValuePair_2_t5786_m45940_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m36139_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5789 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m36140_gshared (Dictionary_2_t5789 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5789 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m36141_gshared (Dictionary_2_t5789 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t5789 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m36142_gshared (Dictionary_2_t5789 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5789 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t74_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m36143_gshared (Dictionary_2_t5789 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		IEnumerator_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t5786  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral4526, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5789 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t5786  L_9 = (KeyValuePair_2_t5786 )InterfaceFuncInvoker0< KeyValuePair_2_t5786  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t5786 )L_9;
			int64_t L_10 = (( int64_t (*) (KeyValuePair_2_t5786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5786 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int32_t L_11 = (( int32_t (*) (KeyValuePair_2_t5786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5786 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t5789 *)__this);
			VirtActionInvoker2< int64_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t5789 *)__this, (int64_t)L_10, (int32_t)L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t74_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			Object_t* L_15 = V_2;
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m36144_gshared (Dictionary_2_t5789 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m36145_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t5789 *)__this);
		KeyCollection_t5790 * L_0 = (( KeyCollection_t5790 * (*) (Dictionary_2_t5789 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t5789 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m36146_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t5789 *)__this);
		ValueCollection_t5794 * L_0 = (( ValueCollection_t5794 * (*) (Dictionary_2_t5789 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t5789 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m36147_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t5789 *)__this);
		KeyCollection_t5790 * L_0 = (( KeyCollection_t5790 * (*) (Dictionary_2_t5789 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t5789 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m36148_gshared (Dictionary_2_t5789 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t5789 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey) */, (Dictionary_2_t5789 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t5789 *)__this);
		int64_t L_4 = (( int64_t (*) (Dictionary_2_t5789 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t5789 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t5789 *)__this);
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, int64_t >::Invoke(22 /* TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Item(TKey) */, (Dictionary_2_t5789 *)__this, (int64_t)L_4);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m36149_gshared (Dictionary_2_t5789 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t5789 *)__this);
		int64_t L_1 = (( int64_t (*) (Dictionary_2_t5789 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t5789 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t5789 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t5789 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t5789 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t5789 *)__this);
		VirtActionInvoker2< int64_t, int32_t >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue) */, (Dictionary_2_t5789 *)__this, (int64_t)L_1, (int32_t)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m36150_gshared (Dictionary_2_t5789 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t5789 *)__this);
		int64_t L_1 = (( int64_t (*) (Dictionary_2_t5789 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t5789 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t5789 *)__this);
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t5789 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t5789 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t5789 *)__this);
		VirtActionInvoker2< int64_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t5789 *)__this, (int64_t)L_1, (int32_t)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m36151_gshared (Dictionary_2_t5789 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t5789 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey) */, (Dictionary_2_t5789 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m36152_gshared (Dictionary_2_t5789 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t5789 *)__this);
		VirtFuncInvoker1< bool, int64_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey) */, (Dictionary_2_t5789 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m36153_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m36154_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m36155_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m36156_gshared (Dictionary_2_t5789 * __this, KeyValuePair_2_t5786  ___keyValuePair, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (KeyValuePair_2_t5786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5786 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t5786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5786 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t5789 *)__this);
		VirtActionInvoker2< int64_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t5789 *)__this, (int64_t)L_0, (int32_t)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m36157_gshared (Dictionary_2_t5789 * __this, KeyValuePair_2_t5786  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t5786  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t5789 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t5789 *, KeyValuePair_2_t5786 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t5789 *)__this, (KeyValuePair_2_t5786 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m36158_gshared (Dictionary_2_t5789 * __this, KeyValuePair_2U5BU5D_t6886* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t6886* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, KeyValuePair_2U5BU5D_t6886*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t5789 *)__this, (KeyValuePair_2U5BU5D_t6886*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m36159_gshared (Dictionary_2_t5789 * __this, KeyValuePair_2_t5786  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t5786  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t5789 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t5789 *, KeyValuePair_2_t5786 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t5789 *)__this, (KeyValuePair_2_t5786 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t5786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5786 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t5789 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey) */, (Dictionary_2_t5789 *)__this, (int64_t)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t7242_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m36160_gshared (Dictionary_2_t5789 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t7242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13530);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t6886* V_0 = {0};
	DictionaryEntryU5BU5D_t7242* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t7242* G_B5_1 = {0};
	Dictionary_2_t5789 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t7242* G_B4_1 = {0};
	Dictionary_2_t5789 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t6886*)((KeyValuePair_2U5BU5D_t6886*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t6886* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6886* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, KeyValuePair_2U5BU5D_t6886*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t5789 *)__this, (KeyValuePair_2U5BU5D_t6886*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t5789 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t7242*)((DictionaryEntryU5BU5D_t7242*)IsInst(L_6, DictionaryEntryU5BU5D_t7242_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t7242* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t7242* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t5788 * L_10 = ((Dictionary_2_t5789_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t5789 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t5789 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t5788 * L_12 = (Transform_1_t5788 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t5788 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t5789_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t5789 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t5788 * L_13 = ((Dictionary_2_t5789_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t5789 *)G_B5_2);
		(( void (*) (Dictionary_2_t5789 *, DictionaryEntryU5BU5D_t7242*, int32_t, Transform_1_t5788 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t5789 *)G_B5_2, (DictionaryEntryU5BU5D_t7242*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t5788 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t5797 * L_17 = (Transform_1_t5797 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t5797 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, Array_t *, int32_t, Transform_1_t5797 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t5789 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t5797 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m36161_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5792  L_0 = {0};
		(( void (*) (Enumerator_t5792 *, Dictionary_2_t5789 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t5789 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t5792  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m36162_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5792  L_0 = {0};
		(( void (*) (Enumerator_t5792 *, Dictionary_2_t5789 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t5789 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t5792  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m36163_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t5798 * L_0 = (ShimEnumerator_t5798 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t5798 *, Dictionary_2_t5789 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t5789 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m36164_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t3918_il2cpp_TypeInfo_var;
extern "C" int32_t Dictionary_2_get_Item_m36165_gshared (Dictionary_2_t5789 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		KeyNotFoundException_t3918_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9199);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t119* L_9 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t4893* L_11 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t2413* L_16 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_16, L_18)), (int64_t)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		Int32U5BU5D_t119* L_21 = (Int32U5BU5D_t119*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_21, L_23));
	}

IL_007d:
	{
		LinkU5BU5D_t4893* L_24 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = (int32_t)L_26;
	}

IL_008f:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t3918 * L_28 = (KeyNotFoundException_t3918 *)il2cpp_codegen_object_new (KeyNotFoundException_t3918_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m18314(L_28, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m36166_gshared (Dictionary_2_t5789 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t119* L_8 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t119* L_9 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t4893* L_13 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t2413* L_18 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int64_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_18, L_20)), (int64_t)L_21);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_23 = V_2;
		V_3 = (int32_t)L_23;
		LinkU5BU5D_t4893* L_24 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = (int32_t)L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_29 = (int32_t)(__this->___count_10);
		int32_t L_30 = (int32_t)((int32_t)((int32_t)L_29+(int32_t)1));
		V_4 = (int32_t)L_30;
		__this->___count_10 = L_30;
		int32_t L_31 = V_4;
		int32_t L_32 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_00c9;
		}
	}
	{
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t5789 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_33 = V_0;
		Int32U5BU5D_t119* L_34 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_34);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_35 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_35;
		int32_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_37 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_38 = (int32_t)L_37;
		V_4 = (int32_t)L_38;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_38+(int32_t)1));
		int32_t L_39 = V_4;
		V_2 = (int32_t)L_39;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t4893* L_40 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_40, L_41))->___Next_1);
		__this->___emptySlot_9 = L_42;
	}

IL_0101:
	{
		LinkU5BU5D_t4893* L_43 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t119* L_45 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t119* L_48 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		LinkU5BU5D_t4893* L_51 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		int32_t L_53 = V_0;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_51, L_52))->___HashCode_0 = L_53;
		Int64U5BU5D_t2413* L_54 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_55 = V_2;
		int64_t L_56 = ___key;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_54, L_55)) = (int64_t)L_56;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t4893* L_58 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_59 = V_3;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		LinkU5BU5D_t4893* L_60 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		int32_t L_62 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_60, L_61))->___Next_1);
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_58, L_59))->___Next_1 = L_62;
		LinkU5BU5D_t4893* L_63 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_64 = V_2;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		Int32U5BU5D_t119* L_65 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_63, L_64))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_65, L_67))-(int32_t)1));
		Int32U5BU5D_t119* L_68 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_69);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_68, L_69)) = (int32_t)((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0194:
	{
		Int32U5BU5D_t119* L_71 = (Int32U5BU5D_t119*)(__this->___valueSlots_7);
		int32_t L_72 = V_2;
		int32_t L_73 = ___value;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_71, L_72)) = (int32_t)L_73;
		int32_t L_74 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_74+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t5585_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m36167_gshared (Dictionary_2_t5789 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		EqualityComparer_1_t5585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11981);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t5789 * G_B4_0 = {0};
	Dictionary_2_t5789 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t5789 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_1 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_1, (String_t*)(String_t*) &_stringLiteral3552, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t5789 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t5789 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t5789 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5585_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5585 * L_5 = (( EqualityComparer_1_t5585 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t5789 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t5789 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t4893_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m36168_gshared (Dictionary_2_t5789 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		LinkU5BU5D_t4893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13531);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t119*)SZArrayNew(Int32U5BU5D_t119_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t4893*)SZArrayNew(LinkU5BU5D_t4893_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((Int64U5BU5D_t2413*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((Int32U5BU5D_t119*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t119* L_4 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t119* L_6 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m36169_gshared (Dictionary_2_t5789 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
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
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m11495((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t1126 * L_7 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_7, (String_t*)(String_t*) &_stringLiteral3553, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m11495((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t5789 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count() */, (Dictionary_2_t5789 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t1126 * L_12 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_12, (String_t*)(String_t*) &_stringLiteral3554, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5786  Dictionary_2_make_pair_m36170_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		int32_t L_1 = ___value;
		KeyValuePair_2_t5786  L_2 = {0};
		(( void (*) (KeyValuePair_2_t5786 *, int64_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (int64_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m36171_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m36172_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m36173_gshared (Dictionary_2_t5789 * __this, KeyValuePair_2U5BU5D_t6886* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t6886* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t5789 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t6886* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t5797 * L_5 = (Transform_1_t5797 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t5797 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, KeyValuePair_2U5BU5D_t6886*, int32_t, Transform_1_t5797 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t5789 *)__this, (KeyValuePair_2U5BU5D_t6886*)L_2, (int32_t)L_3, (Transform_1_t5797 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Resize()
extern TypeInfo* Hashtable_t1256_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t4893_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m36174_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2705);
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		LinkU5BU5D_t4893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13531);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t119* V_1 = {0};
	LinkU5BU5D_t4893* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int64U5BU5D_t2413* V_7 = {0};
	Int32U5BU5D_t119* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t119* L_0 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t1256_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m18505(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t119*)((Int32U5BU5D_t119*)SZArrayNew(Int32U5BU5D_t119_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t4893*)((LinkU5BU5D_t4893*)SZArrayNew(LinkU5BU5D_t4893_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t119* L_4 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t4893* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t2413* L_10 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t4893* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t119* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t119* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t4893* L_26 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t119* L_32 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t119* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t4893* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (Int64U5BU5D_t2413*)((Int64U5BU5D_t2413*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (Int32U5BU5D_t119*)((Int32U5BU5D_t119*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		Int64U5BU5D_t2413* L_37 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		Int64U5BU5D_t2413* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		Int32U5BU5D_t119* L_40 = (Int32U5BU5D_t119*)(__this->___valueSlots_7);
		Int32U5BU5D_t119* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		Int64U5BU5D_t2413* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		Int32U5BU5D_t119* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m36175_gshared (Dictionary_2_t5789 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t119* L_8 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t119* L_9 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t4893* L_12 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t2413* L_17 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		int64_t L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_17, L_19)), (int64_t)L_20);
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t1126 * L_22 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_22, (String_t*)(String_t*) &_stringLiteral4528, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007d:
	{
		LinkU5BU5D_t4893* L_23 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_3 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_3;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t5789 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t119* L_32 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_3 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_2 = (int32_t)L_37;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t4893* L_38 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_00f9:
	{
		LinkU5BU5D_t4893* L_41 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = V_0;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_41, L_42))->___HashCode_0 = L_43;
		LinkU5BU5D_t4893* L_44 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		Int32U5BU5D_t119* L_46 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_47 = V_1;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_44, L_45))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_46, L_48))-(int32_t)1));
		Int32U5BU5D_t119* L_49 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		Int64U5BU5D_t2413* L_52 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		int64_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_52, L_53)) = (int64_t)L_54;
		Int32U5BU5D_t119* L_55 = (Int32U5BU5D_t119*)(__this->___valueSlots_7);
		int32_t L_56 = V_2;
		int32_t L_57 = ___value;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_55, L_56)) = (int32_t)L_57;
		int32_t L_58 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_58+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m36176_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t119* L_0 = (Int32U5BU5D_t119*)(__this->___table_4);
		Int32U5BU5D_t119* L_1 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m6585(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		Int64U5BU5D_t2413* L_2 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		Int64U5BU5D_t2413* L_3 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m6585(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		Int32U5BU5D_t119* L_4 = (Int32U5BU5D_t119*)(__this->___valueSlots_7);
		Int32U5BU5D_t119* L_5 = (Int32U5BU5D_t119*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m6585(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t4893* L_6 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		LinkU5BU5D_t4893* L_7 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m6585(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m36177_gshared (Dictionary_2_t5789 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t119* L_9 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t4893* L_11 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t2413* L_16 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_16, L_18)), (int64_t)L_19);
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t4893* L_21 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_21, L_22))->___Next_1);
		V_1 = (int32_t)L_23;
	}

IL_0084:
	{
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t4942_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m36178_gshared (Dictionary_2_t5789 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t4942_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10724);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4942_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4942 * L_0 = (( EqualityComparer_1_t4942 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t119* L_1 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		Int32U5BU5D_t119* L_5 = (Int32U5BU5D_t119*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		int32_t L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (Object_t*)L_4, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)), (int32_t)L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t4893* L_10 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t119* L_16 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m36179_gshared (Dictionary_2_t5789 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t6886* V_0 = {0};
	{
		SerializationInfo_t1322 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral216, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t1322 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t1322 *)L_2);
		SerializationInfo_AddValue_m11568((SerializationInfo_t1322 *)L_2, (String_t*)(String_t*) &_stringLiteral3641, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t1322 *)L_4);
		SerializationInfo_AddValue_m6629((SerializationInfo_t1322 *)L_4, (String_t*)(String_t*) &_stringLiteral3643, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t6886*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t6886*)((KeyValuePair_2U5BU5D_t6886*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t6886* L_8 = V_0;
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, KeyValuePair_2U5BU5D_t6886*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t5789 *)__this, (KeyValuePair_2U5BU5D_t6886*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t1322 * L_9 = ___info;
		Int32U5BU5D_t119* L_10 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t1322 *)L_9);
		SerializationInfo_AddValue_m11568((SerializationInfo_t1322 *)L_9, (String_t*)(String_t*) &_stringLiteral4529, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t6886* L_12 = V_0;
		NullCheck((SerializationInfo_t1322 *)L_11);
		SerializationInfo_AddValue_m6629((SerializationInfo_t1322 *)L_11, (String_t*)(String_t*) &_stringLiteral4530, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m36180_gshared (Dictionary_2_t5789 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t6886* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t1322 * L_0 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t1322 * L_1 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t1322 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m11564((SerializationInfo_t1322 *)L_1, (String_t*)(String_t*) &_stringLiteral3641, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t1322 * L_3 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t1322 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m11566((SerializationInfo_t1322 *)L_3, (String_t*)(String_t*) &_stringLiteral3643, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t1322 * L_6 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t1322 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m11564((SerializationInfo_t1322 *)L_6, (String_t*)(String_t*) &_stringLiteral4529, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t1322 * L_8 = (SerializationInfo_t1322 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t1322 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m11566((SerializationInfo_t1322 *)L_8, (String_t*)(String_t*) &_stringLiteral4530, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t6886*)((KeyValuePair_2U5BU5D_t6886*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t5789 *)__this);
		(( void (*) (Dictionary_2_t5789 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t5789 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t6886* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t6886* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int64_t L_16 = (( int64_t (*) (KeyValuePair_2_t5786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5786 *)((KeyValuePair_2_t5786 *)(KeyValuePair_2_t5786 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t6886* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = (( int32_t (*) (KeyValuePair_2_t5786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5786 *)((KeyValuePair_2_t5786 *)(KeyValuePair_2_t5786 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t5789 *)__this);
		VirtActionInvoker2< int64_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue) */, (Dictionary_2_t5789 *)__this, (int64_t)L_16, (int32_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t6886* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t1322 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t691_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m36181_gshared (Dictionary_2_t5789 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Int64_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t119* L_8 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t119* L_9 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		int32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (int32_t)(-1);
	}

IL_004a:
	{
		LinkU5BU5D_t4893* L_13 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t2413* L_18 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int64_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_18, L_20)), (int64_t)L_21);
		if (!L_22)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_23 = V_2;
		V_3 = (int32_t)L_23;
		LinkU5BU5D_t4893* L_24 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = (int32_t)L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_29 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_29-(int32_t)1));
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t119* L_31 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_32 = V_1;
		LinkU5BU5D_t4893* L_33 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_33, L_34))->___Next_1);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, L_32)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t4893* L_36 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		LinkU5BU5D_t4893* L_38 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_36, L_37))->___Next_1 = L_40;
	}

IL_00e9:
	{
		LinkU5BU5D_t4893* L_41 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = (int32_t)(__this->___emptySlot_9);
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_41, L_42))->___Next_1 = L_43;
		int32_t L_44 = V_2;
		__this->___emptySlot_9 = L_44;
		LinkU5BU5D_t4893* L_45 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_45, L_46))->___HashCode_0 = 0;
		Int64U5BU5D_t2413* L_47 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_48 = V_2;
		Initobj (Int64_t691_il2cpp_TypeInfo_var, (&V_4));
		int64_t L_49 = V_4;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_47, L_48)) = (int64_t)L_49;
		Int32U5BU5D_t119* L_50 = (Int32U5BU5D_t119*)(__this->___valueSlots_7);
		int32_t L_51 = V_2;
		Initobj (Int32_t29_il2cpp_TypeInfo_var, (&V_5));
		int32_t L_52 = V_5;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_50, L_51)) = (int32_t)L_52;
		int32_t L_53 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_53+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m36182_gshared (Dictionary_2_t5789 * __this, int64_t ___key, int32_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t119* L_7 = (Int32U5BU5D_t119*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t119* L_9 = (Int32U5BU5D_t119*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t4893* L_11 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t2413* L_16 = (Int64U5BU5D_t2413*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_16, L_18)), (int64_t)L_19);
		if (!L_20)
		{
			goto IL_0084;
		}
	}
	{
		int32_t* L_21 = ___value;
		Int32U5BU5D_t119* L_22 = (Int32U5BU5D_t119*)(__this->___valueSlots_7);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		*L_21 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_22, L_24));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t4893* L_25 = (LinkU5BU5D_t4893*)(__this->___linkSlots_5);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (int32_t)(((Link_t3917 *)(Link_t3917 *)SZArrayLdElema(L_25, L_26))->___Next_1);
		V_1 = (int32_t)L_27;
	}

IL_0096:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_29 = ___value;
		Initobj (Int32_t29_il2cpp_TypeInfo_var, (&V_2));
		int32_t L_30 = V_2;
		*L_29 = L_30;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Keys()
extern "C" KeyCollection_t5790 * Dictionary_2_get_Keys_m36183_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t5790 * L_0 = (KeyCollection_t5790 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t5790 *, Dictionary_2_t5789 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t5789 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Values()
extern "C" ValueCollection_t5794 * Dictionary_2_get_Values_m36184_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t5794 * L_0 = (ValueCollection_t5794 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t5794 *, Dictionary_2_t5789 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t5789 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" int64_t Dictionary_2_ToTKey_m36185_gshared (Dictionary_2_t5789 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m105(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4531, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_6 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral1774, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((*(int64_t*)((int64_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" int32_t Dictionary_2_ToTValue_m36186_gshared (Dictionary_2_t5789 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (Int32_t29_il2cpp_TypeInfo_var, (&V_0));
		int32_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, (RuntimeTypeHandle_t3830 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m105(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral4531, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_8 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral1338, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(int32_t*)((int32_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t4942_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m36187_gshared (Dictionary_2_t5789 * __this, KeyValuePair_2_t5786  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t4942_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10724);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int64_t L_0 = (( int64_t (*) (KeyValuePair_2_t5786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5786 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t5789 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, int64_t, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t5789 *)__this, (int64_t)L_0, (int32_t*)(&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4942_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4942 * L_2 = (( EqualityComparer_1_t4942 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t5786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t5786 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_4 = V_0;
		NullCheck((EqualityComparer_1_t4942 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, (EqualityComparer_1_t4942 *)L_2, (int32_t)L_3, (int32_t)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t5792  Dictionary_2_GetEnumerator_m36188_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5792  L_0 = {0};
		(( void (*) (Enumerator_t5792 *, Dictionary_2_t5789 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t5789 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m36189_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		int32_t L_3 = ___value;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_4);
		DictionaryEntry_t660  L_6 = {0};
		DictionaryEntry__ctor_m16761(&L_6, (Object_t *)L_2, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_56.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_70.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_70MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_56MethodDeclarations.h"
struct Dictionary_2_t5789;
struct Array_t;
struct Transform_1_t5793;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt64_t691_m45932_gshared (Dictionary_2_t5789 * __this, Array_t * p0, int32_t p1, Transform_1_t5793 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt64_t691_m45932(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5789 *, Array_t *, int32_t, Transform_1_t5793 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt64_t691_m45932_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t5789;
struct Int64U5BU5D_t2413;
struct Transform_1_t5793;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t691_TisInt64_t691_m45933_gshared (Dictionary_2_t5789 * __this, Int64U5BU5D_t2413* p0, int32_t p1, Transform_1_t5793 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt64_t691_TisInt64_t691_m45933(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t5789 *, Int64U5BU5D_t2413*, int32_t, Transform_1_t5793 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt64_t691_TisInt64_t691_m45933_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m36190_gshared (KeyCollection_t5790 * __this, Dictionary_2_t5789 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m85((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t5789 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*)(String_t*) &_stringLiteral4526, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t5789 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m36191_gshared (KeyCollection_t5790 * __this, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m36192_gshared (KeyCollection_t5790 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m36193_gshared (KeyCollection_t5790 * __this, int64_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t5789 * L_0 = (Dictionary_2_t5789 *)(__this->___dictionary_0);
		int64_t L_1 = ___item;
		NullCheck((Dictionary_2_t5789 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey) */, (Dictionary_2_t5789 *)L_0, (int64_t)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m36194_gshared (KeyCollection_t5790 * __this, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_0, (String_t*)(String_t*) &_stringLiteral4533, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m36195_gshared (KeyCollection_t5790 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t5790 *)__this);
		Enumerator_t5791  L_0 = (( Enumerator_t5791  (*) (KeyCollection_t5790 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t5790 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5791  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m36196_gshared (KeyCollection_t5790 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int64U5BU5D_t2413* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int64U5BU5D_t2413*)((Int64U5BU5D_t2413*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int64U5BU5D_t2413* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int64U5BU5D_t2413* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t5790 *)__this);
		VirtActionInvoker2< Int64U5BU5D_t2413*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t5790 *)__this, (Int64U5BU5D_t2413*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t5789 * L_4 = (Dictionary_2_t5789 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t5789 *)L_4);
		(( void (*) (Dictionary_2_t5789 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t5789 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t5789 * L_7 = (Dictionary_2_t5789 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t5793 * L_11 = (Transform_1_t5793 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t5793 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t5789 *)L_7);
		(( void (*) (Dictionary_2_t5789 *, Array_t *, int32_t, Transform_1_t5793 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t5789 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t5793 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m36197_gshared (KeyCollection_t5790 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t5790 *)__this);
		Enumerator_t5791  L_0 = (( Enumerator_t5791  (*) (KeyCollection_t5790 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t5790 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t5791  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m36198_gshared (KeyCollection_t5790 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m36199_gshared (KeyCollection_t5790 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t661_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m36200_gshared (KeyCollection_t5790 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t5789 * L_0 = (Dictionary_2_t5789 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t661_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m36201_gshared (KeyCollection_t5790 * __this, Int64U5BU5D_t2413* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t5789 * L_0 = (Dictionary_2_t5789 *)(__this->___dictionary_0);
		Int64U5BU5D_t2413* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t5789 *)L_0);
		(( void (*) (Dictionary_2_t5789 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t5789 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t5789 * L_3 = (Dictionary_2_t5789 *)(__this->___dictionary_0);
		Int64U5BU5D_t2413* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t5793 * L_7 = (Transform_1_t5793 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t5793 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t5789 *)L_3);
		(( void (*) (Dictionary_2_t5789 *, Int64U5BU5D_t2413*, int32_t, Transform_1_t5793 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t5789 *)L_3, (Int64U5BU5D_t2413*)L_4, (int32_t)L_5, (Transform_1_t5793 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t5791  KeyCollection_GetEnumerator_m36202_gshared (KeyCollection_t5790 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t5789 * L_0 = (Dictionary_2_t5789 *)(__this->___dictionary_0);
		Enumerator_t5791  L_1 = {0};
		(( void (*) (Enumerator_t5791 *, Dictionary_2_t5789 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t5789 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m36203_gshared (KeyCollection_t5790 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t5789 * L_0 = (Dictionary_2_t5789 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t5789 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count() */, (Dictionary_2_t5789 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m36204_gshared (Enumerator_t5791 * __this, Dictionary_2_t5789 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t5789 * L_0 = ___host;
		NullCheck((Dictionary_2_t5789 *)L_0);
		Enumerator_t5792  L_1 = (( Enumerator_t5792  (*) (Dictionary_2_t5789 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t5789 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m36205_gshared (Enumerator_t5791 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5792 * L_0 = (Enumerator_t5792 *)&(__this->___host_enumerator_0);
		int64_t L_1 = (( int64_t (*) (Enumerator_t5792 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t5792 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m36206_gshared (Enumerator_t5791 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5792 * L_0 = (Enumerator_t5792 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t5792 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t5792 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m36207_gshared (Enumerator_t5791 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5792 * L_0 = (Enumerator_t5792 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t5792 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t5792 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C" int64_t Enumerator_get_Current_m36208_gshared (Enumerator_t5791 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5792 * L_0 = (Enumerator_t5792 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t5786 * L_1 = (KeyValuePair_2_t5786 *)&(L_0->___current_3);
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t5786 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t5786 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
