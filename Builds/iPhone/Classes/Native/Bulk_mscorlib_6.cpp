﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"
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
// System.DayOfWeek
#include "mscorlib_System_DayOfWeekMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.DelegateData
#include "mscorlib_System_DelegateData.h"
#ifndef _MSC_VER
#else
#endif
// System.DelegateData
#include "mscorlib_System_DelegateDataMethodDeclarations.h"



// System.DelegateSerializationHolder/DelegateEntry
#include "mscorlib_System_DelegateSerializationHolder_DelegateEntry.h"
#ifndef _MSC_VER
#else
#endif
// System.DelegateSerializationHolder/DelegateEntry
#include "mscorlib_System_DelegateSerializationHolder_DelegateEntryMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"


// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m21165 (DelegateEntry_t4287 * __this, Delegate_t572 * ___del, String_t* ___targetLabel, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		Delegate_t572 * L_0 = ___del;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m2871(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_1);
		__this->___type_0 = L_2;
		Delegate_t572 * L_3 = ___del;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m2871(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Assembly_t1601 * L_5 = (Assembly_t1601 *)VirtFuncInvoker0< Assembly_t1601 * >::Invoke(15 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_4);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.Assembly::get_FullName() */, L_5);
		__this->___assembly_1 = L_6;
		String_t* L_7 = ___targetLabel;
		__this->___target_2 = L_7;
		Delegate_t572 * L_8 = ___del;
		NullCheck(L_8);
		MethodInfo_t * L_9 = Delegate_get_Method_m13775(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_9);
		NullCheck(L_10);
		Assembly_t1601 * L_11 = (Assembly_t1601 *)VirtFuncInvoker0< Assembly_t1601 * >::Invoke(15 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_10);
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.Assembly::get_FullName() */, L_11);
		__this->___targetTypeAssembly_3 = L_12;
		Delegate_t572 * L_13 = ___del;
		NullCheck(L_13);
		MethodInfo_t * L_14 = Delegate_get_Method_m13775(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_14);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_15);
		__this->___targetTypeName_4 = L_16;
		Delegate_t572 * L_17 = ___del;
		NullCheck(L_17);
		MethodInfo_t * L_18 = Delegate_get_Method_m13775(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_18);
		__this->___methodName_5 = L_19;
		return;
	}
}
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t4134_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t4132_il2cpp_TypeInfo_var;
extern "C" Delegate_t572 * DelegateEntry_DeserializeDelegate_m21166 (DelegateEntry_t4287 * __this, SerializationInfo_t1322 * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		RemotingServices_t4134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8325);
		RemotingException_t4132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8322);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Assembly_t1601 * V_1 = {0};
	Type_t * V_2 = {0};
	Delegate_t572 * V_3 = {0};
	Assembly_t1601 * V_4 = {0};
	Type_t * V_5 = {0};
	Assembly_t1601 * V_6 = {0};
	Type_t * V_7 = {0};
	{
		V_0 = NULL;
		Object_t * L_0 = (__this->___target_2);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		SerializationInfo_t1322 * L_1 = ___info;
		Object_t * L_2 = (__this->___target_2);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t * L_5 = SerializationInfo_GetValue_m11566(L_1, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0026:
	{
		String_t* L_6 = (__this->___assembly_1);
		Assembly_t1601 * L_7 = Assembly_Load_m19346(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Assembly_t1601 * L_8 = V_1;
		String_t* L_9 = (__this->___type_0);
		NullCheck(L_8);
		Type_t * L_10 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(13 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_8, L_9);
		V_2 = L_10;
		Object_t * L_11 = V_0;
		if (!L_11)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4134_il2cpp_TypeInfo_var);
		bool L_13 = RemotingServices_IsTransparentProxy_m19893(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_14 = (__this->___targetTypeAssembly_3);
		Assembly_t1601 * L_15 = Assembly_Load_m19346(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		Assembly_t1601 * L_16 = V_4;
		String_t* L_17 = (__this->___targetTypeName_4);
		NullCheck(L_16);
		Type_t * L_18 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(13 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_16, L_17);
		V_5 = L_18;
		Type_t * L_19 = V_5;
		Object_t * L_20 = V_0;
		NullCheck(L_19);
		bool L_21 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(44 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_19, L_20);
		if (L_21)
		{
			goto IL_007b;
		}
	}
	{
		RemotingException_t4132 * L_22 = (RemotingException_t4132 *)il2cpp_codegen_object_new (RemotingException_t4132_il2cpp_TypeInfo_var);
		RemotingException__ctor_m19889(L_22, (String_t*) &_stringLiteral5527, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007b:
	{
		Type_t * L_23 = V_2;
		Object_t * L_24 = V_0;
		String_t* L_25 = (__this->___methodName_5);
		Delegate_t572 * L_26 = Delegate_CreateDelegate_m17580(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		goto IL_00b6;
	}

IL_008b:
	{
		String_t* L_27 = (__this->___targetTypeAssembly_3);
		Assembly_t1601 * L_28 = Assembly_Load_m19346(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		Assembly_t1601 * L_29 = V_6;
		String_t* L_30 = (__this->___targetTypeName_4);
		NullCheck(L_29);
		Type_t * L_31 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(13 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_29, L_30);
		V_7 = L_31;
		Type_t * L_32 = V_2;
		Type_t * L_33 = V_7;
		String_t* L_34 = (__this->___methodName_5);
		Delegate_t572 * L_35 = Delegate_CreateDelegate_m17583(NULL /*static, unused*/, L_32, L_33, L_34, /*hidden argument*/NULL);
		V_3 = L_35;
	}

IL_00b6:
	{
		Delegate_t572 * L_36 = V_3;
		return L_36;
	}
}
// System.DelegateSerializationHolder
#include "mscorlib_System_DelegateSerializationHolder.h"
#ifndef _MSC_VER
#else
#endif
// System.DelegateSerializationHolder
#include "mscorlib_System_DelegateSerializationHolderMethodDeclarations.h"

// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Int32
#include "mscorlib_System_Int32.h"
#include "mscorlib_ArrayTypes.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* DelegateEntry_t4287_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* DelegateEntry_t4287_il2cpp_TypeInfo_var;
extern TypeInfo* DelegateU5BU5D_t4362_il2cpp_TypeInfo_var;
extern "C" void DelegateSerializationHolder__ctor_m21167 (DelegateSerializationHolder_t4288 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DelegateEntry_t4287_0_0_0_var = il2cpp_codegen_type_from_index(8497);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		DelegateEntry_t4287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8497);
		DelegateU5BU5D_t4362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8161);
		s_Il2CppMethodIntialized = true;
	}
	DelegateEntry_t4287 * V_0 = {0};
	int32_t V_1 = 0;
	DelegateEntry_t4287 * V_2 = {0};
	DelegateU5BU5D_t4362* V_3 = {0};
	int32_t V_4 = 0;
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_0 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(DelegateEntry_t4287_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_2 = SerializationInfo_GetValue_m11566(L_0, (String_t*) &_stringLiteral5526, L_1, /*hidden argument*/NULL);
		V_0 = ((DelegateEntry_t4287 *)Castclass(L_2, DelegateEntry_t4287_il2cpp_TypeInfo_var));
		V_1 = 0;
		DelegateEntry_t4287 * L_3 = V_0;
		V_2 = L_3;
		goto IL_0032;
	}

IL_0027:
	{
		DelegateEntry_t4287 * L_4 = V_2;
		NullCheck(L_4);
		DelegateEntry_t4287 * L_5 = (L_4->___delegateEntry_6);
		V_2 = L_5;
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0032:
	{
		DelegateEntry_t4287 * L_7 = V_2;
		if (L_7)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0048;
		}
	}
	{
		DelegateEntry_t4287 * L_9 = V_0;
		SerializationInfo_t1322 * L_10 = ___info;
		NullCheck(L_9);
		Delegate_t572 * L_11 = DelegateEntry_DeserializeDelegate_m21166(L_9, L_10, /*hidden argument*/NULL);
		__this->____delegate_0 = L_11;
		goto IL_007f;
	}

IL_0048:
	{
		int32_t L_12 = V_1;
		V_3 = ((DelegateU5BU5D_t4362*)SZArrayNew(DelegateU5BU5D_t4362_il2cpp_TypeInfo_var, L_12));
		DelegateEntry_t4287 * L_13 = V_0;
		V_2 = L_13;
		V_4 = 0;
		goto IL_006e;
	}

IL_0056:
	{
		DelegateU5BU5D_t4362* L_14 = V_3;
		int32_t L_15 = V_4;
		DelegateEntry_t4287 * L_16 = V_2;
		SerializationInfo_t1322 * L_17 = ___info;
		NullCheck(L_16);
		Delegate_t572 * L_18 = DelegateEntry_DeserializeDelegate_m21166(L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		ArrayElementTypeCheck (L_14, L_18);
		*((Delegate_t572 **)(Delegate_t572 **)SZArrayLdElema(L_14, L_15)) = (Delegate_t572 *)L_18;
		DelegateEntry_t4287 * L_19 = V_2;
		NullCheck(L_19);
		DelegateEntry_t4287 * L_20 = (L_19->___delegateEntry_6);
		V_2 = L_20;
		int32_t L_21 = V_4;
		V_4 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0056;
		}
	}
	{
		DelegateU5BU5D_t4362* L_24 = V_3;
		Delegate_t572 * L_25 = Delegate_Combine_m17592(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		__this->____delegate_0 = L_25;
	}

IL_007f:
	{
		return;
	}
}
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* DelegateSerializationHolder_t4288_0_0_0_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DelegateEntry_t4287_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void DelegateSerializationHolder_GetDelegateData_m21168 (Object_t * __this /* static, unused */, Delegate_t572 * ___instance, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DelegateSerializationHolder_t4288_0_0_0_var = il2cpp_codegen_type_from_index(8498);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		DelegateEntry_t4287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8497);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	DelegateU5BU5D_t4362* V_0 = {0};
	DelegateEntry_t4287 * V_1 = {0};
	int32_t V_2 = 0;
	Delegate_t572 * V_3 = {0};
	String_t* V_4 = {0};
	DelegateEntry_t4287 * V_5 = {0};
	String_t* G_B4_0 = {0};
	{
		Delegate_t572 * L_0 = ___instance;
		NullCheck(L_0);
		DelegateU5BU5D_t4362* L_1 = (DelegateU5BU5D_t4362*)VirtFuncInvoker0< DelegateU5BU5D_t4362* >::Invoke(8 /* System.Delegate[] System.Delegate::GetInvocationList() */, L_0);
		V_0 = L_1;
		V_1 = (DelegateEntry_t4287 *)NULL;
		V_2 = 0;
		goto IL_006f;
	}

IL_000d:
	{
		DelegateU5BU5D_t4362* L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_3 = (*(Delegate_t572 **)(Delegate_t572 **)SZArrayLdElema(L_2, L_4));
		Delegate_t572 * L_5 = V_3;
		NullCheck(L_5);
		Object_t * L_6 = Delegate_get_Target_m13776(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral3432, L_9, /*hidden argument*/NULL);
		G_B4_0 = L_10;
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = ((String_t*)(NULL));
	}

IL_002c:
	{
		V_4 = G_B4_0;
		Delegate_t572 * L_11 = V_3;
		String_t* L_12 = V_4;
		DelegateEntry_t4287 * L_13 = (DelegateEntry_t4287 *)il2cpp_codegen_object_new (DelegateEntry_t4287_il2cpp_TypeInfo_var);
		DelegateEntry__ctor_m21165(L_13, L_11, L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		DelegateEntry_t4287 * L_14 = V_1;
		if (L_14)
		{
			goto IL_004a;
		}
	}
	{
		SerializationInfo_t1322 * L_15 = ___info;
		DelegateEntry_t4287 * L_16 = V_5;
		NullCheck(L_15);
		SerializationInfo_AddValue_m6629(L_15, (String_t*) &_stringLiteral5526, L_16, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_004a:
	{
		DelegateEntry_t4287 * L_17 = V_1;
		DelegateEntry_t4287 * L_18 = V_5;
		NullCheck(L_17);
		L_17->___delegateEntry_6 = L_18;
	}

IL_0052:
	{
		DelegateEntry_t4287 * L_19 = V_5;
		V_1 = L_19;
		Delegate_t572 * L_20 = V_3;
		NullCheck(L_20);
		Object_t * L_21 = Delegate_get_Target_m13776(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_006b;
		}
	}
	{
		SerializationInfo_t1322 * L_22 = ___info;
		String_t* L_23 = V_4;
		Delegate_t572 * L_24 = V_3;
		NullCheck(L_24);
		Object_t * L_25 = Delegate_get_Target_m13776(L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		SerializationInfo_AddValue_m6629(L_22, L_23, L_25, /*hidden argument*/NULL);
	}

IL_006b:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_006f:
	{
		int32_t L_27 = V_2;
		DelegateU5BU5D_t4362* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((Array_t *)L_28)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		SerializationInfo_t1322 * L_29 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(DelegateSerializationHolder_t4288_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_29);
		SerializationInfo_SetType_m20041(L_29, L_30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void DelegateSerializationHolder_GetObjectData_m21169 (DelegateSerializationHolder_t4288 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2434(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * DelegateSerializationHolder_GetRealObject_m21170 (DelegateSerializationHolder_t4288 * __this, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		Delegate_t572 * L_0 = (__this->____delegate_0);
		return L_0;
	}
}
// System.DivideByZeroException
#include "mscorlib_System_DivideByZeroException.h"
#ifndef _MSC_VER
#else
#endif
// System.DivideByZeroException
#include "mscorlib_System_DivideByZeroExceptionMethodDeclarations.h"

// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.ArithmeticException
#include "mscorlib_System_ArithmeticExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"


// System.Void System.DivideByZeroException::.ctor()
extern "C" void DivideByZeroException__ctor_m21171 (DivideByZeroException_t4289 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5528, /*hidden argument*/NULL);
		ArithmeticException__ctor_m6565(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2147352558), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.DivideByZeroException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DivideByZeroException__ctor_m21172 (DivideByZeroException_t4289 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		ArithmeticException__ctor_m20826(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.DllNotFoundException
#include "mscorlib_System_DllNotFoundException.h"
#ifndef _MSC_VER
#else
#endif
// System.DllNotFoundException
#include "mscorlib_System_DllNotFoundExceptionMethodDeclarations.h"

// System.TypeLoadException
#include "mscorlib_System_TypeLoadExceptionMethodDeclarations.h"


// System.Void System.DllNotFoundException::.ctor()
extern "C" void DllNotFoundException__ctor_m21173 (DllNotFoundException_t4290 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5529, /*hidden argument*/NULL);
		TypeLoadException__ctor_m21551(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233052), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.DllNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DllNotFoundException__ctor_m21174 (DllNotFoundException_t4290 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		TypeLoadException__ctor_m21552(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.EntryPointNotFoundException
#include "mscorlib_System_EntryPointNotFoundException.h"
#ifndef _MSC_VER
#else
#endif
// System.EntryPointNotFoundException
#include "mscorlib_System_EntryPointNotFoundExceptionMethodDeclarations.h"



// System.Void System.EntryPointNotFoundException::.ctor()
extern "C" void EntryPointNotFoundException__ctor_m21175 (EntryPointNotFoundException_t4292 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5530, /*hidden argument*/NULL);
		TypeLoadException__ctor_m21551(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233053), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.EntryPointNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void EntryPointNotFoundException__ctor_m21176 (EntryPointNotFoundException_t4292 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		TypeLoadException__ctor_m21552(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.MonoEnumInfo/SByteComparer
#include "mscorlib_System_MonoEnumInfo_SByteComparer.h"
#ifndef _MSC_VER
#else
#endif
// System.MonoEnumInfo/SByteComparer
#include "mscorlib_System_MonoEnumInfo_SByteComparerMethodDeclarations.h"

// System.SByte
#include "mscorlib_System_SByte.h"


// System.Void System.MonoEnumInfo/SByteComparer::.ctor()
extern "C" void SByteComparer__ctor_m21177 (SByteComparer_t4293 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.MonoEnumInfo/SByteComparer::Compare(System.Object,System.Object)
extern TypeInfo* SByte_t36_il2cpp_TypeInfo_var;
extern "C" int32_t SByteComparer_Compare_m21178 (SByteComparer_t4293 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SByte_t36_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4636);
		s_Il2CppMethodIntialized = true;
	}
	int8_t V_0 = 0x0;
	int8_t V_1 = 0x0;
	{
		Object_t * L_0 = ___x;
		V_0 = ((*(int8_t*)((int8_t*)UnBox (L_0, SByte_t36_il2cpp_TypeInfo_var))));
		Object_t * L_1 = ___y;
		V_1 = ((*(int8_t*)((int8_t*)UnBox (L_1, SByte_t36_il2cpp_TypeInfo_var))));
		int8_t L_2 = V_0;
		int8_t L_3 = V_1;
		return ((int32_t)((int32_t)(((uint8_t)L_2))-(int32_t)(((uint8_t)L_3))));
	}
}
// System.Int32 System.MonoEnumInfo/SByteComparer::Compare(System.SByte,System.SByte)
extern "C" int32_t SByteComparer_Compare_m21179 (SByteComparer_t4293 * __this, int8_t ___ix, int8_t ___iy, const MethodInfo* method)
{
	{
		int8_t L_0 = ___ix;
		int8_t L_1 = ___iy;
		return ((int32_t)((int32_t)(((uint8_t)L_0))-(int32_t)(((uint8_t)L_1))));
	}
}
// System.MonoEnumInfo/ShortComparer
#include "mscorlib_System_MonoEnumInfo_ShortComparer.h"
#ifndef _MSC_VER
#else
#endif
// System.MonoEnumInfo/ShortComparer
#include "mscorlib_System_MonoEnumInfo_ShortComparerMethodDeclarations.h"

// System.Int16
#include "mscorlib_System_Int16.h"


// System.Void System.MonoEnumInfo/ShortComparer::.ctor()
extern "C" void ShortComparer__ctor_m21180 (ShortComparer_t4294 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.MonoEnumInfo/ShortComparer::Compare(System.Object,System.Object)
extern TypeInfo* Int16_t27_il2cpp_TypeInfo_var;
extern "C" int32_t ShortComparer_Compare_m21181 (ShortComparer_t4294 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int16_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	int16_t V_0 = 0;
	int16_t V_1 = 0;
	{
		Object_t * L_0 = ___x;
		V_0 = ((*(int16_t*)((int16_t*)UnBox (L_0, Int16_t27_il2cpp_TypeInfo_var))));
		Object_t * L_1 = ___y;
		V_1 = ((*(int16_t*)((int16_t*)UnBox (L_1, Int16_t27_il2cpp_TypeInfo_var))));
		int16_t L_2 = V_0;
		int16_t L_3 = V_1;
		return ((int32_t)((int32_t)(((uint16_t)L_2))-(int32_t)(((uint16_t)L_3))));
	}
}
// System.Int32 System.MonoEnumInfo/ShortComparer::Compare(System.Int16,System.Int16)
extern "C" int32_t ShortComparer_Compare_m21182 (ShortComparer_t4294 * __this, int16_t ___ix, int16_t ___iy, const MethodInfo* method)
{
	{
		int16_t L_0 = ___ix;
		int16_t L_1 = ___iy;
		return ((int32_t)((int32_t)(((uint16_t)L_0))-(int32_t)(((uint16_t)L_1))));
	}
}
// System.MonoEnumInfo/IntComparer
#include "mscorlib_System_MonoEnumInfo_IntComparer.h"
#ifndef _MSC_VER
#else
#endif
// System.MonoEnumInfo/IntComparer
#include "mscorlib_System_MonoEnumInfo_IntComparerMethodDeclarations.h"



// System.Void System.MonoEnumInfo/IntComparer::.ctor()
extern "C" void IntComparer__ctor_m21183 (IntComparer_t4295 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.MonoEnumInfo/IntComparer::Compare(System.Object,System.Object)
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" int32_t IntComparer_Compare_m21184 (IntComparer_t4295 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___x;
		V_0 = ((*(int32_t*)((int32_t*)UnBox (L_0, Int32_t29_il2cpp_TypeInfo_var))));
		Object_t * L_1 = ___y;
		V_1 = ((*(int32_t*)((int32_t*)UnBox (L_1, Int32_t29_il2cpp_TypeInfo_var))));
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		if ((!(((uint32_t)L_4) < ((uint32_t)L_5))))
		{
			goto IL_001a;
		}
	}
	{
		return (-1);
	}

IL_001a:
	{
		return 1;
	}
}
// System.Int32 System.MonoEnumInfo/IntComparer::Compare(System.Int32,System.Int32)
extern "C" int32_t IntComparer_Compare_m21185 (IntComparer_t4295 * __this, int32_t ___ix, int32_t ___iy, const MethodInfo* method)
{
	{
		int32_t L_0 = ___ix;
		int32_t L_1 = ___iy;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		int32_t L_2 = ___ix;
		int32_t L_3 = ___iy;
		if ((!(((uint32_t)L_2) < ((uint32_t)L_3))))
		{
			goto IL_000c;
		}
	}
	{
		return (-1);
	}

IL_000c:
	{
		return 1;
	}
}
// System.MonoEnumInfo/LongComparer
#include "mscorlib_System_MonoEnumInfo_LongComparer.h"
#ifndef _MSC_VER
#else
#endif
// System.MonoEnumInfo/LongComparer
#include "mscorlib_System_MonoEnumInfo_LongComparerMethodDeclarations.h"

// System.Int64
#include "mscorlib_System_Int64.h"


// System.Void System.MonoEnumInfo/LongComparer::.ctor()
extern "C" void LongComparer__ctor_m21186 (LongComparer_t4296 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.MonoEnumInfo/LongComparer::Compare(System.Object,System.Object)
extern TypeInfo* Int64_t691_il2cpp_TypeInfo_var;
extern "C" int32_t LongComparer_Compare_m21187 (LongComparer_t4296 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		Object_t * L_0 = ___x;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_0, Int64_t691_il2cpp_TypeInfo_var))));
		Object_t * L_1 = ___y;
		V_1 = ((*(int64_t*)((int64_t*)UnBox (L_1, Int64_t691_il2cpp_TypeInfo_var))));
		int64_t L_2 = V_0;
		int64_t L_3 = V_1;
		if ((!(((uint64_t)L_2) == ((uint64_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_1;
		if ((!(((uint64_t)L_4) < ((uint64_t)L_5))))
		{
			goto IL_001a;
		}
	}
	{
		return (-1);
	}

IL_001a:
	{
		return 1;
	}
}
// System.Int32 System.MonoEnumInfo/LongComparer::Compare(System.Int64,System.Int64)
extern "C" int32_t LongComparer_Compare_m21188 (LongComparer_t4296 * __this, int64_t ___ix, int64_t ___iy, const MethodInfo* method)
{
	{
		int64_t L_0 = ___ix;
		int64_t L_1 = ___iy;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		int64_t L_2 = ___ix;
		int64_t L_3 = ___iy;
		if ((!(((uint64_t)L_2) < ((uint64_t)L_3))))
		{
			goto IL_000c;
		}
	}
	{
		return (-1);
	}

IL_000c:
	{
		return 1;
	}
}
// System.MonoEnumInfo
#include "mscorlib_System_MonoEnumInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.MonoEnumInfo
#include "mscorlib_System_MonoEnumInfoMethodDeclarations.h"

// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"


// System.Void System.MonoEnumInfo::.ctor(System.MonoEnumInfo)
extern "C" void MonoEnumInfo__ctor_m21189 (MonoEnumInfo_t4297 * __this, MonoEnumInfo_t4297  ___other, const MethodInfo* method)
{
	{
		Type_t * L_0 = ((&___other)->___utype_0);
		__this->___utype_0 = L_0;
		Array_t * L_1 = ((&___other)->___values_1);
		__this->___values_1 = L_1;
		StringU5BU5D_t20* L_2 = ((&___other)->___names_2);
		__this->___names_2 = L_2;
		Hashtable_t1256 * L_3 = ((&___other)->___name_hash_3);
		__this->___name_hash_3 = L_3;
		return;
	}
}
// System.Void System.MonoEnumInfo::.cctor()
extern TypeInfo* SByteComparer_t4293_il2cpp_TypeInfo_var;
extern TypeInfo* MonoEnumInfo_t4297_il2cpp_TypeInfo_var;
extern TypeInfo* ShortComparer_t4294_il2cpp_TypeInfo_var;
extern TypeInfo* IntComparer_t4295_il2cpp_TypeInfo_var;
extern TypeInfo* LongComparer_t4296_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t1256_il2cpp_TypeInfo_var;
extern "C" void MonoEnumInfo__cctor_m21190 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SByteComparer_t4293_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8499);
		MonoEnumInfo_t4297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8163);
		ShortComparer_t4294_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8500);
		IntComparer_t4295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8501);
		LongComparer_t4296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8502);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Hashtable_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2705);
		s_Il2CppMethodIntialized = true;
	}
	{
		SByteComparer_t4293 * L_0 = (SByteComparer_t4293 *)il2cpp_codegen_object_new (SByteComparer_t4293_il2cpp_TypeInfo_var);
		SByteComparer__ctor_m21177(L_0, /*hidden argument*/NULL);
		((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___sbyte_comparer_7 = L_0;
		ShortComparer_t4294 * L_1 = (ShortComparer_t4294 *)il2cpp_codegen_object_new (ShortComparer_t4294_il2cpp_TypeInfo_var);
		ShortComparer__ctor_m21180(L_1, /*hidden argument*/NULL);
		((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___short_comparer_8 = L_1;
		IntComparer_t4295 * L_2 = (IntComparer_t4295 *)il2cpp_codegen_object_new (IntComparer_t4295_il2cpp_TypeInfo_var);
		IntComparer__ctor_m21183(L_2, /*hidden argument*/NULL);
		((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___int_comparer_9 = L_2;
		LongComparer_t4296 * L_3 = (LongComparer_t4296 *)il2cpp_codegen_object_new (LongComparer_t4296_il2cpp_TypeInfo_var);
		LongComparer__ctor_m21186(L_3, /*hidden argument*/NULL);
		((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___long_comparer_10 = L_3;
		Object_t * L_4 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m85(L_4, /*hidden argument*/NULL);
		((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___global_cache_monitor_6 = L_4;
		Hashtable_t1256 * L_5 = (Hashtable_t1256 *)il2cpp_codegen_object_new (Hashtable_t1256_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6660(L_5, /*hidden argument*/NULL);
		((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___global_cache_5 = L_5;
		return;
	}
}
// System.Void System.MonoEnumInfo::get_enum_info(System.Type,System.MonoEnumInfo&)
extern "C" void MonoEnumInfo_get_enum_info_m21191 (Object_t * __this /* static, unused */, Type_t * ___enumType, MonoEnumInfo_t4297 * ___info, const MethodInfo* method)
{
	typedef void (*MonoEnumInfo_get_enum_info_m21191_ftn) (Type_t *, MonoEnumInfo_t4297 *);
	static MonoEnumInfo_get_enum_info_m21191_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoEnumInfo_get_enum_info_m21191_ftn)il2cpp_codegen_resolve_icall ("System.MonoEnumInfo::get_enum_info(System.Type,System.MonoEnumInfo&)");
	_il2cpp_icall_func(___enumType, ___info);
}
// System.Collections.Hashtable System.MonoEnumInfo::get_Cache()
extern TypeInfo* MonoEnumInfo_t4297_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t1256_il2cpp_TypeInfo_var;
extern "C" Hashtable_t1256 * MonoEnumInfo_get_Cache_m21192 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoEnumInfo_t4297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8163);
		Hashtable_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2705);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
		Hashtable_t1256 * L_0 = ((MonoEnumInfo_t4297_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(MonoEnumInfo_t4297_il2cpp_TypeInfo_var))->___cache_4;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Hashtable_t1256 * L_1 = (Hashtable_t1256 *)il2cpp_codegen_object_new (Hashtable_t1256_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6660(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
		((MonoEnumInfo_t4297_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(MonoEnumInfo_t4297_il2cpp_TypeInfo_var))->___cache_4 = L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
		Hashtable_t1256 * L_2 = ((MonoEnumInfo_t4297_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(MonoEnumInfo_t4297_il2cpp_TypeInfo_var))->___cache_4;
		return L_2;
	}
}
// System.Void System.MonoEnumInfo::GetInfo(System.Type,System.MonoEnumInfo&)
extern TypeInfo* MonoEnumInfo_t4297_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t25_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16U5BU5D_t3632_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32U5BU5D_t1182_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64U5BU5D_t4202_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern TypeInfo* Int16U5BU5D_t4376_il2cpp_TypeInfo_var;
extern TypeInfo* SByteU5BU5D_t4254_il2cpp_TypeInfo_var;
extern TypeInfo* Int64U5BU5D_t2413_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t1256_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" void MonoEnumInfo_GetInfo_m21193 (Object_t * __this /* static, unused */, Type_t * ___enumType, MonoEnumInfo_t4297 * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoEnumInfo_t4297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8163);
		ByteU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		UInt16U5BU5D_t3632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7444);
		UInt32U5BU5D_t1182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2618);
		UInt64U5BU5D_t4202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8164);
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		Int16U5BU5D_t4376_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8165);
		SByteU5BU5D_t4254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8166);
		Int64U5BU5D_t2413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4720);
		Hashtable_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2705);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	int32_t V_3 = 0;
	MonoEnumInfo_t4297  V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
		Hashtable_t1256 * L_0 = MonoEnumInfo_get_Cache_m21192(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_1 = ___enumType;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		MonoEnumInfo_t4297 * L_3 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
		Hashtable_t1256 * L_4 = ((MonoEnumInfo_t4297_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(MonoEnumInfo_t4297_il2cpp_TypeInfo_var))->___cache_4;
		Type_t * L_5 = ___enumType;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
		*L_3 = ((*(MonoEnumInfo_t4297 *)((MonoEnumInfo_t4297 *)UnBox (L_6, MonoEnumInfo_t4297_il2cpp_TypeInfo_var))));
		return;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
		Object_t * L_7 = ((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___global_cache_monitor_6;
		V_0 = L_7;
		Object_t * L_8 = V_0;
		Monitor_Enter_m2469(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
			Hashtable_t1256 * L_9 = ((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___global_cache_5;
			Type_t * L_10 = ___enumType;
			NullCheck(L_9);
			bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_9, L_10);
			if (!L_11)
			{
				goto IL_0066;
			}
		}

IL_003d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
			Hashtable_t1256 * L_12 = ((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___global_cache_5;
			Type_t * L_13 = ___enumType;
			NullCheck(L_12);
			Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_12, L_13);
			V_1 = L_14;
			Hashtable_t1256 * L_15 = ((MonoEnumInfo_t4297_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(MonoEnumInfo_t4297_il2cpp_TypeInfo_var))->___cache_4;
			Type_t * L_16 = ___enumType;
			Object_t * L_17 = V_1;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_16, L_17);
			MonoEnumInfo_t4297 * L_18 = ___info;
			Object_t * L_19 = V_1;
			*L_18 = ((*(MonoEnumInfo_t4297 *)((MonoEnumInfo_t4297 *)UnBox (L_19, MonoEnumInfo_t4297_il2cpp_TypeInfo_var))));
			IL2CPP_LEAVE(0x198, FINALLY_0068);
		}

IL_0066:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_0;
		Monitor_Exit_m2472(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x198, IL_0198)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_006f:
	{
		Type_t * L_21 = ___enumType;
		MonoEnumInfo_t4297 * L_22 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
		MonoEnumInfo_get_enum_info_m21191(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_2 = (Object_t *)NULL;
		MonoEnumInfo_t4297 * L_23 = ___info;
		Array_t * L_24 = (L_23->___values_1);
		if (((ByteU5BU5D_t25*)IsInst(L_24, ByteU5BU5D_t25_il2cpp_TypeInfo_var)))
		{
			goto IL_0104;
		}
	}
	{
		MonoEnumInfo_t4297 * L_25 = ___info;
		Array_t * L_26 = (L_25->___values_1);
		if (((UInt16U5BU5D_t3632*)IsInst(L_26, UInt16U5BU5D_t3632_il2cpp_TypeInfo_var)))
		{
			goto IL_0104;
		}
	}
	{
		MonoEnumInfo_t4297 * L_27 = ___info;
		Array_t * L_28 = (L_27->___values_1);
		if (((UInt32U5BU5D_t1182*)IsInst(L_28, UInt32U5BU5D_t1182_il2cpp_TypeInfo_var)))
		{
			goto IL_0104;
		}
	}
	{
		MonoEnumInfo_t4297 * L_29 = ___info;
		Array_t * L_30 = (L_29->___values_1);
		if (((UInt64U5BU5D_t4202*)IsInst(L_30, UInt64U5BU5D_t4202_il2cpp_TypeInfo_var)))
		{
			goto IL_0104;
		}
	}
	{
		MonoEnumInfo_t4297 * L_31 = ___info;
		Array_t * L_32 = (L_31->___values_1);
		if (!((Int32U5BU5D_t119*)IsInst(L_32, Int32U5BU5D_t119_il2cpp_TypeInfo_var)))
		{
			goto IL_00c7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
		IntComparer_t4295 * L_33 = ((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___int_comparer_9;
		V_2 = L_33;
		goto IL_0104;
	}

IL_00c7:
	{
		MonoEnumInfo_t4297 * L_34 = ___info;
		Array_t * L_35 = (L_34->___values_1);
		if (!((Int16U5BU5D_t4376*)IsInst(L_35, Int16U5BU5D_t4376_il2cpp_TypeInfo_var)))
		{
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
		ShortComparer_t4294 * L_36 = ((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___short_comparer_8;
		V_2 = L_36;
		goto IL_0104;
	}

IL_00dc:
	{
		MonoEnumInfo_t4297 * L_37 = ___info;
		Array_t * L_38 = (L_37->___values_1);
		if (!((SByteU5BU5D_t4254*)IsInst(L_38, SByteU5BU5D_t4254_il2cpp_TypeInfo_var)))
		{
			goto IL_00f1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
		SByteComparer_t4293 * L_39 = ((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___sbyte_comparer_7;
		V_2 = L_39;
		goto IL_0104;
	}

IL_00f1:
	{
		MonoEnumInfo_t4297 * L_40 = ___info;
		Array_t * L_41 = (L_40->___values_1);
		if (!((Int64U5BU5D_t2413*)IsInst(L_41, Int64U5BU5D_t2413_il2cpp_TypeInfo_var)))
		{
			goto IL_0104;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
		LongComparer_t4296 * L_42 = ((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___long_comparer_10;
		V_2 = L_42;
	}

IL_0104:
	{
		MonoEnumInfo_t4297 * L_43 = ___info;
		Array_t * L_44 = (L_43->___values_1);
		MonoEnumInfo_t4297 * L_45 = ___info;
		StringU5BU5D_t20* L_46 = (L_45->___names_2);
		Object_t * L_47 = V_2;
		Array_Sort_m17693(NULL /*static, unused*/, L_44, (Array_t *)(Array_t *)L_46, L_47, /*hidden argument*/NULL);
		MonoEnumInfo_t4297 * L_48 = ___info;
		StringU5BU5D_t20* L_49 = (L_48->___names_2);
		NullCheck(L_49);
		if ((((int32_t)(((int32_t)(((Array_t *)L_49)->max_length)))) <= ((int32_t)((int32_t)50))))
		{
			goto IL_0161;
		}
	}
	{
		MonoEnumInfo_t4297 * L_50 = ___info;
		MonoEnumInfo_t4297 * L_51 = ___info;
		StringU5BU5D_t20* L_52 = (L_51->___names_2);
		NullCheck(L_52);
		Hashtable_t1256 * L_53 = (Hashtable_t1256 *)il2cpp_codegen_object_new (Hashtable_t1256_il2cpp_TypeInfo_var);
		Hashtable__ctor_m16857(L_53, (((int32_t)(((Array_t *)L_52)->max_length))), /*hidden argument*/NULL);
		L_50->___name_hash_3 = L_53;
		V_3 = 0;
		goto IL_0156;
	}

IL_0139:
	{
		MonoEnumInfo_t4297 * L_54 = ___info;
		Hashtable_t1256 * L_55 = (L_54->___name_hash_3);
		MonoEnumInfo_t4297 * L_56 = ___info;
		StringU5BU5D_t20* L_57 = (L_56->___names_2);
		int32_t L_58 = V_3;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		int32_t L_59 = L_58;
		int32_t L_60 = V_3;
		int32_t L_61 = L_60;
		Object_t * L_62 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_61);
		NullCheck(L_55);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_55, (*(String_t**)(String_t**)SZArrayLdElema(L_57, L_59)), L_62);
		int32_t L_63 = V_3;
		V_3 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_0156:
	{
		int32_t L_64 = V_3;
		MonoEnumInfo_t4297 * L_65 = ___info;
		StringU5BU5D_t20* L_66 = (L_65->___names_2);
		NullCheck(L_66);
		if ((((int32_t)L_64) < ((int32_t)(((int32_t)(((Array_t *)L_66)->max_length))))))
		{
			goto IL_0139;
		}
	}

IL_0161:
	{
		MonoEnumInfo_t4297 * L_67 = ___info;
		MonoEnumInfo__ctor_m21189((&V_4), (*(MonoEnumInfo_t4297 *)L_67), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
		Object_t * L_68 = ((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___global_cache_monitor_6;
		V_5 = L_68;
		Object_t * L_69 = V_5;
		Monitor_Enter_m2469(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
	}

IL_017c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(MonoEnumInfo_t4297_il2cpp_TypeInfo_var);
		Hashtable_t1256 * L_70 = ((MonoEnumInfo_t4297_StaticFields*)MonoEnumInfo_t4297_il2cpp_TypeInfo_var->static_fields)->___global_cache_5;
		Type_t * L_71 = ___enumType;
		MonoEnumInfo_t4297  L_72 = V_4;
		MonoEnumInfo_t4297  L_73 = L_72;
		Object_t * L_74 = Box(MonoEnumInfo_t4297_il2cpp_TypeInfo_var, &L_73);
		NullCheck(L_70);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_70, L_71, L_74);
		IL2CPP_LEAVE(0x198, FINALLY_0190);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0190;
	}

FINALLY_0190:
	{ // begin finally (depth: 1)
		Object_t * L_75 = V_5;
		Monitor_Exit_m2472(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(400)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(400)
	{
		IL2CPP_JUMP_TBL(0x198, IL_0198)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0198:
	{
		return;
	}
}
// System.Environment/SpecialFolder
#include "mscorlib_System_Environment_SpecialFolder.h"
#ifndef _MSC_VER
#else
#endif
// System.Environment/SpecialFolder
#include "mscorlib_System_Environment_SpecialFolderMethodDeclarations.h"



// System.Environment
#include "mscorlib_System_Environment.h"
#ifndef _MSC_VER
#else
#endif
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"

// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystem.h"
// System.Version
#include "mscorlib_System_Version.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReader.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystemMethodDeclarations.h"
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReaderMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Boolean System.Environment::get_SocketSecurityEnabled()
extern "C" bool Environment_get_SocketSecurityEnabled_m16788 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Environment_get_SocketSecurityEnabled_m16788_ftn) ();
	static Environment_get_SocketSecurityEnabled_m16788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Environment_get_SocketSecurityEnabled_m16788_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_SocketSecurityEnabled()");
	return _il2cpp_icall_func();
}
// System.String System.Environment::get_NewLine()
extern "C" String_t* Environment_get_NewLine_m6573 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Environment_get_NewLine_m6573_ftn) ();
	static Environment_get_NewLine_m6573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Environment_get_NewLine_m6573_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_NewLine()");
	return _il2cpp_icall_func();
}
// System.PlatformID System.Environment::get_Platform()
extern "C" int32_t Environment_get_Platform_m21194 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Environment_get_Platform_m21194_ftn) ();
	static Environment_get_Platform_m21194_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Environment_get_Platform_m21194_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_Platform()");
	return _il2cpp_icall_func();
}
// System.String System.Environment::GetOSVersionString()
extern "C" String_t* Environment_GetOSVersionString_m21195 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Environment_GetOSVersionString_m21195_ftn) ();
	static Environment_GetOSVersionString_m21195_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Environment_GetOSVersionString_m21195_ftn)il2cpp_codegen_resolve_icall ("System.Environment::GetOSVersionString()");
	return _il2cpp_icall_func();
}
// System.OperatingSystem System.Environment::get_OSVersion()
extern TypeInfo* Environment_t4300_il2cpp_TypeInfo_var;
extern TypeInfo* OperatingSystem_t4299_il2cpp_TypeInfo_var;
extern "C" OperatingSystem_t4299 * Environment_get_OSVersion_m21196 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Environment_t4300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8503);
		OperatingSystem_t4299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8504);
		s_Il2CppMethodIntialized = true;
	}
	Version_t1549 * V_0 = {0};
	int32_t V_1 = {0};
	{
		OperatingSystem_t4299 * L_0 = ((Environment_t4300_StaticFields*)Environment_t4300_il2cpp_TypeInfo_var->static_fields)->___os_0;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_1 = Environment_GetOSVersionString_m21195(NULL /*static, unused*/, /*hidden argument*/NULL);
		Version_t1549 * L_2 = Version_CreateFromString_m21578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Environment_get_Platform_m21194(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		Version_t1549 * L_5 = V_0;
		OperatingSystem_t4299 * L_6 = (OperatingSystem_t4299 *)il2cpp_codegen_object_new (OperatingSystem_t4299_il2cpp_TypeInfo_var);
		OperatingSystem__ctor_m21470(L_6, L_4, L_5, /*hidden argument*/NULL);
		((Environment_t4300_StaticFields*)Environment_t4300_il2cpp_TypeInfo_var->static_fields)->___os_0 = L_6;
	}

IL_0024:
	{
		OperatingSystem_t4299 * L_7 = ((Environment_t4300_StaticFields*)Environment_t4300_il2cpp_TypeInfo_var->static_fields)->___os_0;
		return L_7;
	}
}
// System.Int32 System.Environment::get_TickCount()
extern "C" int32_t Environment_get_TickCount_m94 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Environment_get_TickCount_m94_ftn) ();
	static Environment_get_TickCount_m94_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Environment_get_TickCount_m94_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_TickCount()");
	return _il2cpp_icall_func();
}
// System.String System.Environment::internalGetEnvironmentVariable(System.String)
extern "C" String_t* Environment_internalGetEnvironmentVariable_m21197 (Object_t * __this /* static, unused */, String_t* ___variable, const MethodInfo* method)
{
	typedef String_t* (*Environment_internalGetEnvironmentVariable_m21197_ftn) (String_t*);
	static Environment_internalGetEnvironmentVariable_m21197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Environment_internalGetEnvironmentVariable_m21197_ftn)il2cpp_codegen_resolve_icall ("System.Environment::internalGetEnvironmentVariable(System.String)");
	return _il2cpp_icall_func(___variable);
}
// System.String System.Environment::GetEnvironmentVariable(System.String)
extern "C" String_t* Environment_GetEnvironmentVariable_m6658 (Object_t * __this /* static, unused */, String_t* ___variable, const MethodInfo* method)
{
	{
		String_t* L_0 = ___variable;
		String_t* L_1 = Environment_internalGetEnvironmentVariable_m21197(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Environment::GetWindowsFolderPath(System.Int32)
extern "C" String_t* Environment_GetWindowsFolderPath_m21198 (Object_t * __this /* static, unused */, int32_t ___folder, const MethodInfo* method)
{
	typedef String_t* (*Environment_GetWindowsFolderPath_m21198_ftn) (int32_t);
	static Environment_GetWindowsFolderPath_m21198_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Environment_GetWindowsFolderPath_m21198_ftn)il2cpp_codegen_resolve_icall ("System.Environment::GetWindowsFolderPath(System.Int32)");
	return _il2cpp_icall_func(___folder);
}
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
extern "C" String_t* Environment_GetFolderPath_m6642 (Object_t * __this /* static, unused */, int32_t ___folder, const MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		V_0 = (String_t*)NULL;
		bool L_0 = Environment_get_IsRunningOnWindows_m21201(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___folder;
		String_t* L_2 = Environment_GetWindowsFolderPath_m21198(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0012:
	{
		int32_t L_3 = ___folder;
		String_t* L_4 = Environment_InternalGetFolderPath_m21200(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0019:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.String System.Environment::ReadXdgUserDir(System.String,System.String,System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t1349_il2cpp_TypeInfo_var;
extern TypeInfo* StreamReader_t600_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t567_il2cpp_TypeInfo_var;
extern TypeInfo* FileNotFoundException_t3973_il2cpp_TypeInfo_var;
extern "C" String_t* Environment_ReadXdgUserDir_m21199 (Object_t * __this /* static, unused */, String_t* ___config_dir, String_t* ___home_dir, String_t* ___key, String_t* ___fallback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Path_t1349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2669);
		StreamReader_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		IDisposable_t567_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		FileNotFoundException_t3973_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8488);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	StreamReader_t600 * V_2 = {0};
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	bool V_6 = false;
	String_t* V_7 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B16_0 = {0};
	{
		String_t* L_0 = ___key;
		String_t* L_1 = Environment_internalGetEnvironmentVariable_m21197(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_5 = String_op_Inequality_m3147(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_6 = V_0;
		return L_6;
	}

IL_0019:
	{
		String_t* L_7 = ___config_dir;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1349_il2cpp_TypeInfo_var);
		String_t* L_8 = Path_Combine_m6640(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral5531, /*hidden argument*/NULL);
		V_1 = L_8;
		String_t* L_9 = V_1;
		bool L_10 = File_Exists_m14699(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_11 = ___home_dir;
		String_t* L_12 = ___fallback;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1349_il2cpp_TypeInfo_var);
		String_t* L_13 = Path_Combine_m6640(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_14 = V_1;
			StreamReader_t600 * L_15 = (StreamReader_t600 *)il2cpp_codegen_object_new (StreamReader_t600_il2cpp_TypeInfo_var);
			StreamReader__ctor_m2672(L_15, L_14, /*hidden argument*/NULL);
			V_2 = L_15;
		}

IL_003c:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00cc;
			}

IL_0041:
			{
				String_t* L_16 = V_3;
				NullCheck(L_16);
				String_t* L_17 = String_Trim_m2630(L_16, /*hidden argument*/NULL);
				V_3 = L_17;
				String_t* L_18 = V_3;
				NullCheck(L_18);
				int32_t L_19 = String_IndexOf_m3239(L_18, ((int32_t)61), /*hidden argument*/NULL);
				V_4 = L_19;
				int32_t L_20 = V_4;
				if ((((int32_t)L_20) <= ((int32_t)8)))
				{
					goto IL_00cc;
				}
			}

IL_005a:
			{
				String_t* L_21 = V_3;
				int32_t L_22 = V_4;
				NullCheck(L_21);
				String_t* L_23 = String_Substring_m2785(L_21, 0, L_22, /*hidden argument*/NULL);
				String_t* L_24 = ___key;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				bool L_25 = String_op_Equality_m2344(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
				if (!L_25)
				{
					goto IL_00cc;
				}
			}

IL_006b:
			{
				String_t* L_26 = V_3;
				int32_t L_27 = V_4;
				NullCheck(L_26);
				String_t* L_28 = String_Substring_m5270(L_26, ((int32_t)((int32_t)L_27+(int32_t)1)), /*hidden argument*/NULL);
				CharU5BU5D_t646* L_29 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, 1));
				NullCheck(L_29);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 0);
				*((uint16_t*)(uint16_t*)SZArrayLdElema(L_29, 0)) = (uint16_t)((int32_t)34);
				NullCheck(L_28);
				String_t* L_30 = String_Trim_m11525(L_28, L_29, /*hidden argument*/NULL);
				V_5 = L_30;
				V_6 = 0;
				String_t* L_31 = V_5;
				NullCheck(L_31);
				bool L_32 = String_StartsWith_m3141(L_31, (String_t*) &_stringLiteral5532, /*hidden argument*/NULL);
				if (!L_32)
				{
					goto IL_00a7;
				}
			}

IL_0098:
			{
				V_6 = 1;
				String_t* L_33 = V_5;
				NullCheck(L_33);
				String_t* L_34 = String_Substring_m5270(L_33, 6, /*hidden argument*/NULL);
				V_5 = L_34;
				goto IL_00b8;
			}

IL_00a7:
			{
				String_t* L_35 = V_5;
				NullCheck(L_35);
				bool L_36 = String_StartsWith_m3141(L_35, (String_t*) &_stringLiteral380, /*hidden argument*/NULL);
				if (L_36)
				{
					goto IL_00b8;
				}
			}

IL_00b5:
			{
				V_6 = 1;
			}

IL_00b8:
			{
				bool L_37 = V_6;
				if (!L_37)
				{
					goto IL_00c6;
				}
			}

IL_00bc:
			{
				String_t* L_38 = ___home_dir;
				String_t* L_39 = V_5;
				IL2CPP_RUNTIME_CLASS_INIT(Path_t1349_il2cpp_TypeInfo_var);
				String_t* L_40 = Path_Combine_m6640(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
				G_B16_0 = L_40;
				goto IL_00c8;
			}

IL_00c6:
			{
				String_t* L_41 = V_5;
				G_B16_0 = L_41;
			}

IL_00c8:
			{
				V_7 = G_B16_0;
				IL2CPP_LEAVE(0xF2, FINALLY_00db);
			}

IL_00cc:
			{
				StreamReader_t600 * L_42 = V_2;
				NullCheck(L_42);
				String_t* L_43 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.StreamReader::ReadLine() */, L_42);
				String_t* L_44 = L_43;
				V_3 = L_44;
				if (L_44)
				{
					goto IL_0041;
				}
			}

IL_00d9:
			{
				IL2CPP_LEAVE(0xE5, FINALLY_00db);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t468 *)e.ex;
			goto FINALLY_00db;
		}

FINALLY_00db:
		{ // begin finally (depth: 2)
			{
				StreamReader_t600 * L_45 = V_2;
				if (!L_45)
				{
					goto IL_00e4;
				}
			}

IL_00de:
			{
				StreamReader_t600 * L_46 = V_2;
				NullCheck(L_46);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t567_il2cpp_TypeInfo_var, L_46);
			}

IL_00e4:
			{
				IL2CPP_END_FINALLY(219)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(219)
		{
			IL2CPP_JUMP_TBL(0xF2, IL_00f2)
			IL2CPP_JUMP_TBL(0xE5, IL_00e5)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
		}

IL_00e5:
		{
			goto IL_00ea;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FileNotFoundException_t3973_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00e7;
		throw e;
	}

CATCH_00e7:
	{ // begin catch(System.IO.FileNotFoundException)
		goto IL_00ea;
	} // end catch (depth: 1)

IL_00ea:
	{
		String_t* L_47 = ___home_dir;
		String_t* L_48 = ___fallback;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1349_il2cpp_TypeInfo_var);
		String_t* L_49 = Path_Combine_m6640(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		return L_49;
	}

IL_00f2:
	{
		String_t* L_50 = V_7;
		return L_50;
	}
}
// System.String System.Environment::InternalGetFolderPath(System.Environment/SpecialFolder)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t1349_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" String_t* Environment_InternalGetFolderPath_m21200 (Object_t * __this /* static, unused */, int32_t ___folder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Path_t1349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2669);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	int32_t V_3 = {0};
	{
		String_t* L_0 = Environment_internalGetHome_m21202(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Environment_internalGetEnvironmentVariable_m21197(NULL /*static, unused*/, (String_t*) &_stringLiteral5533, /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_5 = String_op_Equality_m2344(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}

IL_0021:
	{
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1349_il2cpp_TypeInfo_var);
		String_t* L_7 = Path_Combine_m6640(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral5534, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8 = V_1;
		String_t* L_9 = Path_Combine_m6640(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral4769, /*hidden argument*/NULL);
		V_1 = L_9;
	}

IL_0039:
	{
		String_t* L_10 = Environment_internalGetEnvironmentVariable_m21197(NULL /*static, unused*/, (String_t*) &_stringLiteral5535, /*hidden argument*/NULL);
		V_2 = L_10;
		String_t* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_14 = String_op_Equality_m2344(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}

IL_0054:
	{
		String_t* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1349_il2cpp_TypeInfo_var);
		String_t* L_16 = Path_Combine_m6640(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral5536, /*hidden argument*/NULL);
		V_2 = L_16;
	}

IL_0060:
	{
		int32_t L_17 = ___folder;
		V_3 = L_17;
		int32_t L_18 = V_3;
		if (L_18 == 0)
		{
			goto IL_0130;
		}
		if (L_18 == 1)
		{
			goto IL_0172;
		}
		if (L_18 == 2)
		{
			goto IL_0166;
		}
		if (L_18 == 3)
		{
			goto IL_0172;
		}
		if (L_18 == 4)
		{
			goto IL_0172;
		}
		if (L_18 == 5)
		{
			goto IL_0120;
		}
		if (L_18 == 6)
		{
			goto IL_0166;
		}
		if (L_18 == 7)
		{
			goto IL_0166;
		}
		if (L_18 == 8)
		{
			goto IL_0166;
		}
		if (L_18 == 9)
		{
			goto IL_0166;
		}
		if (L_18 == 10)
		{
			goto IL_0172;
		}
		if (L_18 == 11)
		{
			goto IL_0166;
		}
		if (L_18 == 12)
		{
			goto IL_0172;
		}
		if (L_18 == 13)
		{
			goto IL_0142;
		}
		if (L_18 == 14)
		{
			goto IL_0172;
		}
		if (L_18 == 15)
		{
			goto IL_0172;
		}
		if (L_18 == 16)
		{
			goto IL_0130;
		}
		if (L_18 == 17)
		{
			goto IL_011a;
		}
		if (L_18 == 18)
		{
			goto IL_0172;
		}
		if (L_18 == 19)
		{
			goto IL_0172;
		}
		if (L_18 == 20)
		{
			goto IL_0172;
		}
		if (L_18 == 21)
		{
			goto IL_0166;
		}
		if (L_18 == 22)
		{
			goto IL_0172;
		}
		if (L_18 == 23)
		{
			goto IL_0172;
		}
		if (L_18 == 24)
		{
			goto IL_0172;
		}
		if (L_18 == 25)
		{
			goto IL_0172;
		}
		if (L_18 == 26)
		{
			goto IL_012c;
		}
		if (L_18 == 27)
		{
			goto IL_0172;
		}
		if (L_18 == 28)
		{
			goto IL_012e;
		}
		if (L_18 == 29)
		{
			goto IL_0172;
		}
		if (L_18 == 30)
		{
			goto IL_0172;
		}
		if (L_18 == 31)
		{
			goto IL_0172;
		}
		if (L_18 == 32)
		{
			goto IL_0166;
		}
		if (L_18 == 33)
		{
			goto IL_0166;
		}
		if (L_18 == 34)
		{
			goto IL_0166;
		}
		if (L_18 == 35)
		{
			goto IL_016c;
		}
		if (L_18 == 36)
		{
			goto IL_0172;
		}
		if (L_18 == 37)
		{
			goto IL_0166;
		}
		if (L_18 == 38)
		{
			goto IL_0166;
		}
		if (L_18 == 39)
		{
			goto IL_0154;
		}
		if (L_18 == 40)
		{
			goto IL_0172;
		}
		if (L_18 == 41)
		{
			goto IL_0172;
		}
		if (L_18 == 42)
		{
			goto IL_0172;
		}
		if (L_18 == 43)
		{
			goto IL_0166;
		}
	}
	{
		goto IL_0172;
	}

IL_011a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_19;
	}

IL_0120:
	{
		String_t* L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1349_il2cpp_TypeInfo_var);
		String_t* L_21 = Path_Combine_m6640(NULL /*static, unused*/, L_20, (String_t*) &_stringLiteral5537, /*hidden argument*/NULL);
		return L_21;
	}

IL_012c:
	{
		String_t* L_22 = V_2;
		return L_22;
	}

IL_012e:
	{
		String_t* L_23 = V_1;
		return L_23;
	}

IL_0130:
	{
		String_t* L_24 = V_2;
		String_t* L_25 = V_0;
		String_t* L_26 = Environment_ReadXdgUserDir_m21199(NULL /*static, unused*/, L_24, L_25, (String_t*) &_stringLiteral5538, (String_t*) &_stringLiteral5539, /*hidden argument*/NULL);
		return L_26;
	}

IL_0142:
	{
		String_t* L_27 = V_2;
		String_t* L_28 = V_0;
		String_t* L_29 = Environment_ReadXdgUserDir_m21199(NULL /*static, unused*/, L_27, L_28, (String_t*) &_stringLiteral5540, (String_t*) &_stringLiteral5541, /*hidden argument*/NULL);
		return L_29;
	}

IL_0154:
	{
		String_t* L_30 = V_2;
		String_t* L_31 = V_0;
		String_t* L_32 = Environment_ReadXdgUserDir_m21199(NULL /*static, unused*/, L_30, L_31, (String_t*) &_stringLiteral5542, (String_t*) &_stringLiteral886, /*hidden argument*/NULL);
		return L_32;
	}

IL_0166:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_33;
	}

IL_016c:
	{
		return (String_t*) &_stringLiteral5543;
	}

IL_0172:
	{
		ArgumentException_t1126 * L_34 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_34, (String_t*) &_stringLiteral5544, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_34);
	}
}
// System.Int32 System.Environment::get_ProcessorCount()
extern "C" int32_t Environment_get_ProcessorCount_m14685 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Environment_get_ProcessorCount_m14685_ftn) ();
	static Environment_get_ProcessorCount_m14685_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Environment_get_ProcessorCount_m14685_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_ProcessorCount()");
	return _il2cpp_icall_func();
}
// System.Boolean System.Environment::get_IsRunningOnWindows()
extern "C" bool Environment_get_IsRunningOnWindows_m21201 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		int32_t L_0 = Environment_get_Platform_m21194(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((((int32_t)L_0) < ((int32_t)4))? 1 : 0);
	}
}
// System.String System.Environment::internalGetHome()
extern "C" String_t* Environment_internalGetHome_m21202 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Environment_internalGetHome_m21202_ftn) ();
	static Environment_internalGetHome_m21202_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Environment_internalGetHome_m21202_ftn)il2cpp_codegen_resolve_icall ("System.Environment::internalGetHome()");
	return _il2cpp_icall_func();
}
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
#ifndef _MSC_VER
#else
#endif
// System.EventArgs
#include "mscorlib_System_EventArgsMethodDeclarations.h"



// System.Void System.EventArgs::.ctor()
extern "C" void EventArgs__ctor_m5429 (EventArgs_t877 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.EventArgs::.cctor()
extern TypeInfo* EventArgs_t877_il2cpp_TypeInfo_var;
extern "C" void EventArgs__cctor_m21203 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t877_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1642);
		s_Il2CppMethodIntialized = true;
	}
	{
		EventArgs_t877 * L_0 = (EventArgs_t877 *)il2cpp_codegen_object_new (EventArgs_t877_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5429(L_0, /*hidden argument*/NULL);
		((EventArgs_t877_StaticFields*)EventArgs_t877_il2cpp_TypeInfo_var->static_fields)->___Empty_0 = L_0;
		return;
	}
}
// System.ExecutionEngineException
#include "mscorlib_System_ExecutionEngineException.h"
#ifndef _MSC_VER
#else
#endif
// System.ExecutionEngineException
#include "mscorlib_System_ExecutionEngineExceptionMethodDeclarations.h"

// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"


// System.Void System.ExecutionEngineException::.ctor()
extern "C" void ExecutionEngineException__ctor_m21204 (ExecutionEngineException_t4301 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5545, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.ExecutionEngineException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionEngineException__ctor_m21205 (ExecutionEngineException_t4301 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.FieldAccessException
#include "mscorlib_System_FieldAccessException.h"
#ifndef _MSC_VER
#else
#endif
// System.FieldAccessException
#include "mscorlib_System_FieldAccessExceptionMethodDeclarations.h"

// System.MemberAccessException
#include "mscorlib_System_MemberAccessExceptionMethodDeclarations.h"


// System.Void System.FieldAccessException::.ctor()
extern "C" void FieldAccessException__ctor_m21206 (FieldAccessException_t4302 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5546, /*hidden argument*/NULL);
		MemberAccessException__ctor_m21270(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233081), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.FieldAccessException::.ctor(System.String)
extern "C" void FieldAccessException__ctor_m21207 (FieldAccessException_t4302 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		MemberAccessException__ctor_m21270(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233081), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.FieldAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FieldAccessException__ctor_m21208 (FieldAccessException_t4302 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		MemberAccessException__ctor_m21271(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void System.FlagsAttribute::.ctor()
extern "C" void FlagsAttribute__ctor_m3315 (FlagsAttribute_t713 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3240(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.FormatException
#include "mscorlib_System_FormatException.h"
#ifndef _MSC_VER
#else
#endif
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_Exception.h"


// System.Void System.FormatException::.ctor()
extern "C" void FormatException__ctor_m11536 (FormatException_t1330 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5547, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233033), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.FormatException::.ctor(System.String)
extern "C" void FormatException__ctor_m6577 (FormatException_t1330 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233033), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.FormatException::.ctor(System.String,System.Exception)
extern "C" void FormatException__ctor_m16797 (FormatException_t1330 * __this, String_t* ___message, Exception_t468 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t468 * L_1 = ___innerException;
		SystemException__ctor_m11562(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233033), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.FormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FormatException__ctor_m16798 (FormatException_t1330 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.GC
#include "mscorlib_System_GC.h"
#ifndef _MSC_VER
#else
#endif
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"



// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" void GC_SuppressFinalize_m6586 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	typedef void (*GC_SuppressFinalize_m6586_ftn) (Object_t *);
	static GC_SuppressFinalize_m6586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GC_SuppressFinalize_m6586_ftn)il2cpp_codegen_resolve_icall ("System.GC::SuppressFinalize(System.Object)");
	_il2cpp_icall_func(___obj);
}
// System.Guid/GuidParser
#include "mscorlib_System_Guid_GuidParser.h"
#ifndef _MSC_VER
#else
#endif
// System.Guid/GuidParser
#include "mscorlib_System_Guid_GuidParserMethodDeclarations.h"

// System.Guid
#include "mscorlib_System_Guid.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"


// System.Void System.Guid/GuidParser::.ctor(System.String)
extern "C" void GuidParser__ctor_m21209 (GuidParser_t4305 * __this, String_t* ___src, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___src;
		__this->____src_0 = L_0;
		GuidParser_Reset_m21210(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Guid/GuidParser::Reset()
extern "C" void GuidParser_Reset_m21210 (GuidParser_t4305 * __this, const MethodInfo* method)
{
	{
		__this->____cur_2 = 0;
		String_t* L_0 = (__this->____src_0);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2782(L_0, /*hidden argument*/NULL);
		__this->____length_1 = L_1;
		return;
	}
}
// System.Boolean System.Guid/GuidParser::AtEnd()
extern "C" bool GuidParser_AtEnd_m21211 (GuidParser_t4305 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____cur_2);
		int32_t L_1 = (__this->____length_1);
		return ((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Guid/GuidParser::ThrowFormatException()
extern TypeInfo* FormatException_t1330_il2cpp_TypeInfo_var;
extern "C" void GuidParser_ThrowFormatException_m21212 (GuidParser_t4305 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormatException_t1330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2627);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5553, /*hidden argument*/NULL);
		FormatException_t1330 * L_1 = (FormatException_t1330 *)il2cpp_codegen_object_new (FormatException_t1330_il2cpp_TypeInfo_var);
		FormatException__ctor_m6577(L_1, L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.UInt64 System.Guid/GuidParser::ParseHex(System.Int32,System.Boolean)
extern TypeInfo* Char_t684_il2cpp_TypeInfo_var;
extern "C" uint64_t GuidParser_ParseHex_m21213 (GuidParser_t4305 * __this, int32_t ___length, bool ___strictLength, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	uint16_t V_3 = 0x0;
	{
		V_0 = (((int64_t)0));
		V_2 = 0;
		V_1 = 0;
		goto IL_00a4;
	}

IL_000c:
	{
		bool L_0 = GuidParser_AtEnd_m21211(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		bool L_1 = ___strictLength;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0022;
		}
	}

IL_001a:
	{
		GuidParser_ThrowFormatException_m21212(__this, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_0022:
	{
		V_2 = 1;
	}

IL_0024:
	{
		goto IL_00a0;
	}

IL_0029:
	{
		String_t* L_3 = (__this->____src_0);
		int32_t L_4 = (__this->____cur_2);
		NullCheck(L_3);
		uint16_t L_5 = String_get_Chars_m2787(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t684_il2cpp_TypeInfo_var);
		uint16_t L_6 = Char_ToLowerInvariant_m17304(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		uint16_t L_7 = V_3;
		bool L_8 = Char_IsDigit_m16806(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		uint64_t L_9 = V_0;
		uint16_t L_10 = V_3;
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_9*(int64_t)(((int64_t)((int32_t)16)))))+(int64_t)(((uint64_t)L_10))))-(int64_t)(((int64_t)((int32_t)48)))));
		int32_t L_11 = (__this->____cur_2);
		__this->____cur_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
		goto IL_00a0;
	}

IL_0065:
	{
		uint16_t L_12 = V_3;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)97))))
		{
			goto IL_0090;
		}
	}
	{
		uint16_t L_13 = V_3;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)102))))
		{
			goto IL_0090;
		}
	}
	{
		uint64_t L_14 = V_0;
		uint16_t L_15 = V_3;
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_14*(int64_t)(((int64_t)((int32_t)16)))))+(int64_t)(((uint64_t)L_15))))-(int64_t)(((int64_t)((int32_t)97)))))+(int64_t)(((int64_t)((int32_t)10)))));
		int32_t L_16 = (__this->____cur_2);
		__this->____cur_2 = ((int32_t)((int32_t)L_16+(int32_t)1));
		goto IL_00a0;
	}

IL_0090:
	{
		bool L_17 = ___strictLength;
		if (L_17)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_18 = V_1;
		if (L_18)
		{
			goto IL_009e;
		}
	}

IL_0096:
	{
		GuidParser_ThrowFormatException_m21212(__this, /*hidden argument*/NULL);
		goto IL_00a0;
	}

IL_009e:
	{
		V_2 = 1;
	}

IL_00a0:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_00a4:
	{
		bool L_20 = V_2;
		if (L_20)
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_21 = V_1;
		int32_t L_22 = ___length;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_000c;
		}
	}

IL_00ae:
	{
		uint64_t L_23 = V_0;
		return L_23;
	}
}
// System.Boolean System.Guid/GuidParser::ParseOptChar(System.Char)
extern "C" bool GuidParser_ParseOptChar_m21214 (GuidParser_t4305 * __this, uint16_t ___c, const MethodInfo* method)
{
	{
		bool L_0 = GuidParser_AtEnd_m21211(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_1 = (__this->____src_0);
		int32_t L_2 = (__this->____cur_2);
		NullCheck(L_1);
		uint16_t L_3 = String_get_Chars_m2787(L_1, L_2, /*hidden argument*/NULL);
		uint16_t L_4 = ___c;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = (__this->____cur_2);
		__this->____cur_2 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return 1;
	}

IL_002c:
	{
		return 0;
	}
}
// System.Void System.Guid/GuidParser::ParseChar(System.Char)
extern "C" void GuidParser_ParseChar_m21215 (GuidParser_t4305 * __this, uint16_t ___c, const MethodInfo* method)
{
	bool V_0 = false;
	{
		uint16_t L_0 = ___c;
		bool L_1 = GuidParser_ParseOptChar_m21214(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		GuidParser_ThrowFormatException_m21212(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Guid System.Guid/GuidParser::ParseGuid1()
extern TypeInfo* ByteU5BU5D_t25_il2cpp_TypeInfo_var;
extern "C" Guid_t1562  GuidParser_ParseGuid1_m21216 (GuidParser_t4305 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	uint16_t V_2 = 0x0;
	int32_t V_3 = 0;
	int16_t V_4 = 0;
	int16_t V_5 = 0;
	ByteU5BU5D_t25* V_6 = {0};
	int32_t V_7 = 0;
	{
		V_1 = 1;
		V_2 = ((int32_t)125);
		V_6 = ((ByteU5BU5D_t25*)SZArrayNew(ByteU5BU5D_t25_il2cpp_TypeInfo_var, 8));
		bool L_0 = GuidParser_ParseOptChar_m21214(__this, ((int32_t)123), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		bool L_2 = GuidParser_ParseOptChar_m21214(__this, ((int32_t)40), /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		V_2 = ((int32_t)41);
	}

IL_0028:
	{
		uint64_t L_4 = GuidParser_ParseHex_m21213(__this, 8, 1, /*hidden argument*/NULL);
		V_3 = (((int32_t)L_4));
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		GuidParser_ParseChar_m21215(__this, ((int32_t)45), /*hidden argument*/NULL);
		goto IL_0048;
	}

IL_003f:
	{
		bool L_6 = GuidParser_ParseOptChar_m21214(__this, ((int32_t)45), /*hidden argument*/NULL);
		V_1 = L_6;
	}

IL_0048:
	{
		uint64_t L_7 = GuidParser_ParseHex_m21213(__this, 4, 1, /*hidden argument*/NULL);
		V_4 = (((int16_t)L_7));
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		GuidParser_ParseChar_m21215(__this, ((int32_t)45), /*hidden argument*/NULL);
	}

IL_005e:
	{
		uint64_t L_9 = GuidParser_ParseHex_m21213(__this, 4, 1, /*hidden argument*/NULL);
		V_5 = (((int16_t)L_9));
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		GuidParser_ParseChar_m21215(__this, ((int32_t)45), /*hidden argument*/NULL);
	}

IL_0074:
	{
		V_7 = 0;
		goto IL_009d;
	}

IL_0079:
	{
		ByteU5BU5D_t25* L_11 = V_6;
		int32_t L_12 = V_7;
		uint64_t L_13 = GuidParser_ParseHex_m21213(__this, 2, 1, /*hidden argument*/NULL);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_12)) = (uint8_t)(((uint8_t)L_13));
		int32_t L_14 = V_7;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0097;
		}
	}
	{
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0097;
		}
	}
	{
		GuidParser_ParseChar_m21215(__this, ((int32_t)45), /*hidden argument*/NULL);
	}

IL_0097:
	{
		int32_t L_16 = V_7;
		V_7 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_009d:
	{
		int32_t L_17 = V_7;
		if ((((int32_t)L_17) < ((int32_t)8)))
		{
			goto IL_0079;
		}
	}
	{
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_00b4;
		}
	}
	{
		uint16_t L_19 = V_2;
		bool L_20 = GuidParser_ParseOptChar_m21214(__this, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00b4;
		}
	}
	{
		GuidParser_ThrowFormatException_m21212(__this, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		int32_t L_21 = V_3;
		int16_t L_22 = V_4;
		int16_t L_23 = V_5;
		ByteU5BU5D_t25* L_24 = V_6;
		Guid_t1562  L_25 = {0};
		Guid__ctor_m21221(&L_25, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Void System.Guid/GuidParser::ParseHexPrefix()
extern "C" void GuidParser_ParseHexPrefix_m21217 (GuidParser_t4305 * __this, const MethodInfo* method)
{
	{
		GuidParser_ParseChar_m21215(__this, ((int32_t)48), /*hidden argument*/NULL);
		GuidParser_ParseChar_m21215(__this, ((int32_t)120), /*hidden argument*/NULL);
		return;
	}
}
// System.Guid System.Guid/GuidParser::ParseGuid2()
extern TypeInfo* ByteU5BU5D_t25_il2cpp_TypeInfo_var;
extern "C" Guid_t1562  GuidParser_ParseGuid2_m21218 (GuidParser_t4305 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	int16_t V_2 = 0;
	ByteU5BU5D_t25* V_3 = {0};
	int32_t V_4 = 0;
	{
		V_3 = ((ByteU5BU5D_t25*)SZArrayNew(ByteU5BU5D_t25_il2cpp_TypeInfo_var, 8));
		GuidParser_ParseChar_m21215(__this, ((int32_t)123), /*hidden argument*/NULL);
		GuidParser_ParseHexPrefix_m21217(__this, /*hidden argument*/NULL);
		uint64_t L_0 = GuidParser_ParseHex_m21213(__this, 8, 0, /*hidden argument*/NULL);
		V_0 = (((int32_t)L_0));
		GuidParser_ParseChar_m21215(__this, ((int32_t)44), /*hidden argument*/NULL);
		GuidParser_ParseHexPrefix_m21217(__this, /*hidden argument*/NULL);
		uint64_t L_1 = GuidParser_ParseHex_m21213(__this, 4, 0, /*hidden argument*/NULL);
		V_1 = (((int16_t)L_1));
		GuidParser_ParseChar_m21215(__this, ((int32_t)44), /*hidden argument*/NULL);
		GuidParser_ParseHexPrefix_m21217(__this, /*hidden argument*/NULL);
		uint64_t L_2 = GuidParser_ParseHex_m21213(__this, 4, 0, /*hidden argument*/NULL);
		V_2 = (((int16_t)L_2));
		GuidParser_ParseChar_m21215(__this, ((int32_t)44), /*hidden argument*/NULL);
		GuidParser_ParseChar_m21215(__this, ((int32_t)123), /*hidden argument*/NULL);
		V_4 = 0;
		goto IL_008a;
	}

IL_0064:
	{
		GuidParser_ParseHexPrefix_m21217(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t25* L_3 = V_3;
		int32_t L_4 = V_4;
		uint64_t L_5 = GuidParser_ParseHex_m21213(__this, 2, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_4)) = (uint8_t)(((uint8_t)L_5));
		int32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)7)))
		{
			goto IL_0084;
		}
	}
	{
		GuidParser_ParseChar_m21215(__this, ((int32_t)44), /*hidden argument*/NULL);
	}

IL_0084:
	{
		int32_t L_7 = V_4;
		V_4 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_008a:
	{
		int32_t L_8 = V_4;
		if ((((int32_t)L_8) < ((int32_t)8)))
		{
			goto IL_0064;
		}
	}
	{
		GuidParser_ParseChar_m21215(__this, ((int32_t)125), /*hidden argument*/NULL);
		GuidParser_ParseChar_m21215(__this, ((int32_t)125), /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		int16_t L_10 = V_1;
		int16_t L_11 = V_2;
		ByteU5BU5D_t25* L_12 = V_3;
		Guid_t1562  L_13 = {0};
		Guid__ctor_m21221(&L_13, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Guid System.Guid/GuidParser::Parse()
extern TypeInfo* FormatException_t1330_il2cpp_TypeInfo_var;
extern "C" Guid_t1562  GuidParser_Parse_m21219 (GuidParser_t4305 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormatException_t1330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2627);
		s_Il2CppMethodIntialized = true;
	}
	Guid_t1562  V_0 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Guid_t1562  L_0 = GuidParser_ParseGuid1_m21216(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0019;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FormatException_t1330_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.FormatException)
		GuidParser_Reset_m21210(__this, /*hidden argument*/NULL);
		Guid_t1562  L_1 = GuidParser_ParseGuid2_m21218(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0019;
	} // end catch (depth: 1)

IL_0019:
	{
		bool L_2 = GuidParser_AtEnd_m21211(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		GuidParser_ThrowFormatException_m21212(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		Guid_t1562  L_3 = V_0;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__1.h"
// System.MonoTouchAOTHelper
#include "mscorlib_System_MonoTouchAOTHelper.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Security.Cryptography.RandomNumberGenerator
#include "mscorlib_System_Security_Cryptography_RandomNumberGenerator.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// Mono.Security.BitConverterLE
#include "mscorlib_Mono_Security_BitConverterLEMethodDeclarations.h"
// System.MonoTouchAOTHelper
#include "mscorlib_System_MonoTouchAOTHelperMethodDeclarations.h"
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__1MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Security.Cryptography.RandomNumberGenerator
#include "mscorlib_System_Security_Cryptography_RandomNumberGeneratorMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"


// System.Void System.Guid::.ctor(System.Byte[])
extern TypeInfo* Guid_t1562_il2cpp_TypeInfo_var;
extern "C" void Guid__ctor_m21220 (Guid_t1562 * __this, ByteU5BU5D_t25* ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3115);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t25* L_0 = ___b;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		Guid_CheckArray_m21226(NULL /*static, unused*/, L_0, ((int32_t)16), /*hidden argument*/NULL);
		ByteU5BU5D_t25* L_1 = ___b;
		int32_t L_2 = BitConverterLE_ToInt32_m18255(NULL /*static, unused*/, L_1, 0, /*hidden argument*/NULL);
		__this->____a_0 = L_2;
		ByteU5BU5D_t25* L_3 = ___b;
		int16_t L_4 = BitConverterLE_ToInt16_m18254(NULL /*static, unused*/, L_3, 4, /*hidden argument*/NULL);
		__this->____b_1 = L_4;
		ByteU5BU5D_t25* L_5 = ___b;
		int16_t L_6 = BitConverterLE_ToInt16_m18254(NULL /*static, unused*/, L_5, 6, /*hidden argument*/NULL);
		__this->____c_2 = L_6;
		ByteU5BU5D_t25* L_7 = ___b;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 8);
		int32_t L_8 = 8;
		__this->____d_3 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_8));
		ByteU5BU5D_t25* L_9 = ___b;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)9));
		int32_t L_10 = ((int32_t)9);
		__this->____e_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10));
		ByteU5BU5D_t25* L_11 = ___b;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, ((int32_t)10));
		int32_t L_12 = ((int32_t)10);
		__this->____f_5 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_12));
		ByteU5BU5D_t25* L_13 = ___b;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)11));
		int32_t L_14 = ((int32_t)11);
		__this->____g_6 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_14));
		ByteU5BU5D_t25* L_15 = ___b;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)12));
		int32_t L_16 = ((int32_t)12);
		__this->____h_7 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_16));
		ByteU5BU5D_t25* L_17 = ___b;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)13));
		int32_t L_18 = ((int32_t)13);
		__this->____i_8 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_17, L_18));
		ByteU5BU5D_t25* L_19 = ___b;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)14));
		int32_t L_20 = ((int32_t)14);
		__this->____j_9 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_19, L_20));
		ByteU5BU5D_t25* L_21 = ___b;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)15));
		int32_t L_22 = ((int32_t)15);
		__this->____k_10 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_22));
		return;
	}
}
// System.Void System.Guid::.ctor(System.String)
extern TypeInfo* Guid_t1562_il2cpp_TypeInfo_var;
extern TypeInfo* GuidParser_t4305_il2cpp_TypeInfo_var;
extern "C" void Guid__ctor_m7422 (Guid_t1562 * __this, String_t* ___g, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3115);
		GuidParser_t4305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8505);
		s_Il2CppMethodIntialized = true;
	}
	GuidParser_t4305 * V_0 = {0};
	Guid_t1562  V_1 = {0};
	{
		String_t* L_0 = ___g;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		Guid_CheckNull_m21224(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___g;
		NullCheck(L_1);
		String_t* L_2 = String_Trim_m2630(L_1, /*hidden argument*/NULL);
		___g = L_2;
		String_t* L_3 = ___g;
		GuidParser_t4305 * L_4 = (GuidParser_t4305 *)il2cpp_codegen_object_new (GuidParser_t4305_il2cpp_TypeInfo_var);
		GuidParser__ctor_m21209(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		GuidParser_t4305 * L_5 = V_0;
		NullCheck(L_5);
		Guid_t1562  L_6 = GuidParser_Parse_m21219(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Guid_t1562  L_7 = V_1;
		*__this = L_7;
		return;
	}
}
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte[])
extern TypeInfo* Guid_t1562_il2cpp_TypeInfo_var;
extern "C" void Guid__ctor_m21221 (Guid_t1562 * __this, int32_t ___a, int16_t ___b, int16_t ___c, ByteU5BU5D_t25* ___d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3115);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t25* L_0 = ___d;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		Guid_CheckArray_m21226(NULL /*static, unused*/, L_0, 8, /*hidden argument*/NULL);
		int32_t L_1 = ___a;
		__this->____a_0 = L_1;
		int16_t L_2 = ___b;
		__this->____b_1 = L_2;
		int16_t L_3 = ___c;
		__this->____c_2 = L_3;
		ByteU5BU5D_t25* L_4 = ___d;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		__this->____d_3 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5));
		ByteU5BU5D_t25* L_6 = ___d;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		int32_t L_7 = 1;
		__this->____e_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7));
		ByteU5BU5D_t25* L_8 = ___d;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		int32_t L_9 = 2;
		__this->____f_5 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_9));
		ByteU5BU5D_t25* L_10 = ___d;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		int32_t L_11 = 3;
		__this->____g_6 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11));
		ByteU5BU5D_t25* L_12 = ___d;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		int32_t L_13 = 4;
		__this->____h_7 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13));
		ByteU5BU5D_t25* L_14 = ___d;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 5);
		int32_t L_15 = 5;
		__this->____i_8 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15));
		ByteU5BU5D_t25* L_16 = ___d;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 6);
		int32_t L_17 = 6;
		__this->____j_9 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_17));
		ByteU5BU5D_t25* L_18 = ___d;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 7);
		int32_t L_19 = 7;
		__this->____k_10 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_18, L_19));
		return;
	}
}
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" void Guid__ctor_m21222 (Guid_t1562 * __this, int32_t ___a, int16_t ___b, int16_t ___c, uint8_t ___d, uint8_t ___e, uint8_t ___f, uint8_t ___g, uint8_t ___h, uint8_t ___i, uint8_t ___j, uint8_t ___k, const MethodInfo* method)
{
	{
		int32_t L_0 = ___a;
		__this->____a_0 = L_0;
		int16_t L_1 = ___b;
		__this->____b_1 = L_1;
		int16_t L_2 = ___c;
		__this->____c_2 = L_2;
		uint8_t L_3 = ___d;
		__this->____d_3 = L_3;
		uint8_t L_4 = ___e;
		__this->____e_4 = L_4;
		uint8_t L_5 = ___f;
		__this->____f_5 = L_5;
		uint8_t L_6 = ___g;
		__this->____g_6 = L_6;
		uint8_t L_7 = ___h;
		__this->____h_7 = L_7;
		uint8_t L_8 = ___i;
		__this->____i_8 = L_8;
		uint8_t L_9 = ___j;
		__this->____j_9 = L_9;
		uint8_t L_10 = ___k;
		__this->____k_10 = L_10;
		return;
	}
}
// System.Void System.Guid::.cctor()
extern TypeInfo* Guid_t1562_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* MonoTouchAOTHelper_t4315_il2cpp_TypeInfo_var;
extern TypeInfo* GenericComparer_1_t4396_il2cpp_TypeInfo_var;
extern TypeInfo* GenericEqualityComparer_1_t4397_il2cpp_TypeInfo_var;
extern const MethodInfo* GenericComparer_1__ctor_m21646_MethodInfo_var;
extern const MethodInfo* GenericEqualityComparer_1__ctor_m21647_MethodInfo_var;
extern "C" void Guid__cctor_m21223 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3115);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		MonoTouchAOTHelper_t4315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8491);
		GenericComparer_1_t4396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8506);
		GenericEqualityComparer_1_t4397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8507);
		GenericComparer_1__ctor_m21646_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485203);
		GenericEqualityComparer_1__ctor_m21647_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485204);
		s_Il2CppMethodIntialized = true;
	}
	GenericComparer_1_t4396 * V_0 = {0};
	GenericEqualityComparer_1_t4397 * V_1 = {0};
	{
		Guid_t1562  L_0 = {0};
		Guid__ctor_m21222(&L_0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*hidden argument*/NULL);
		((Guid_t1562_StaticFields*)Guid_t1562_il2cpp_TypeInfo_var->static_fields)->___Empty_11 = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m85(L_1, /*hidden argument*/NULL);
		((Guid_t1562_StaticFields*)Guid_t1562_il2cpp_TypeInfo_var->static_fields)->____rngAccess_12 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(MonoTouchAOTHelper_t4315_il2cpp_TypeInfo_var);
		bool L_2 = ((MonoTouchAOTHelper_t4315_StaticFields*)MonoTouchAOTHelper_t4315_il2cpp_TypeInfo_var->static_fields)->___FalseFlag_0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		GenericComparer_1_t4396 * L_3 = (GenericComparer_1_t4396 *)il2cpp_codegen_object_new (GenericComparer_1_t4396_il2cpp_TypeInfo_var);
		GenericComparer_1__ctor_m21646(L_3, /*hidden argument*/GenericComparer_1__ctor_m21646_MethodInfo_var);
		V_0 = L_3;
		GenericEqualityComparer_1_t4397 * L_4 = (GenericEqualityComparer_1_t4397 *)il2cpp_codegen_object_new (GenericEqualityComparer_1_t4397_il2cpp_TypeInfo_var);
		GenericEqualityComparer_1__ctor_m21647(L_4, /*hidden argument*/GenericEqualityComparer_1__ctor_m21647_MethodInfo_var);
		V_1 = L_4;
	}

IL_0032:
	{
		return;
	}
}
// System.Void System.Guid::CheckNull(System.Object)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void Guid_CheckNull_m21224 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral2653, /*hidden argument*/NULL);
		ArgumentNullException_t1328 * L_2 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Guid::CheckLength(System.Byte[],System.Int32)
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Guid_CheckLength_m21225 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___o, int32_t ___l, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t25* L_0 = ___o;
		NullCheck(L_0);
		int32_t L_1 = ___l;
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5548, /*hidden argument*/NULL);
		int32_t L_3 = ___l;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m2680(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_7 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0021:
	{
		return;
	}
}
// System.Void System.Guid::CheckArray(System.Byte[],System.Int32)
extern TypeInfo* Guid_t1562_il2cpp_TypeInfo_var;
extern "C" void Guid_CheckArray_m21226 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___o, int32_t ___l, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3115);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t25* L_0 = ___o;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		Guid_CheckNull_m21224(NULL /*static, unused*/, (Object_t *)(Object_t *)L_0, /*hidden argument*/NULL);
		ByteU5BU5D_t25* L_1 = ___o;
		int32_t L_2 = ___l;
		Guid_CheckLength_m21225(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Guid::Compare(System.Int32,System.Int32)
extern "C" int32_t Guid_Compare_m21227 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		int32_t L_1 = ___y;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		return (-1);
	}

IL_0006:
	{
		return 1;
	}
}
// System.Int32 System.Guid::CompareTo(System.Object)
extern TypeInfo* Guid_t1562_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" int32_t Guid_CompareTo_m21228 (Guid_t1562 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3115);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		Object_t * L_1 = ___value;
		if (((Object_t *)IsInst(L_1, Guid_t1562_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5549, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_3 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_3, (String_t*) &_stringLiteral1338, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		Object_t * L_4 = ___value;
		int32_t L_5 = Guid_CompareTo_m21230(__this, ((*(Guid_t1562 *)((Guid_t1562 *)UnBox (L_4, Guid_t1562_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.Guid::Equals(System.Object)
extern TypeInfo* Guid_t1562_il2cpp_TypeInfo_var;
extern "C" bool Guid_Equals_m21229 (Guid_t1562 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3115);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		if (!((Object_t *)IsInst(L_0, Guid_t1562_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_1 = ___o;
		int32_t L_2 = Guid_CompareTo_m21230(__this, ((*(Guid_t1562 *)((Guid_t1562 *)UnBox (L_1, Guid_t1562_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return 0;
	}
}
// System.Int32 System.Guid::CompareTo(System.Guid)
extern TypeInfo* Guid_t1562_il2cpp_TypeInfo_var;
extern "C" int32_t Guid_CompareTo_m21230 (Guid_t1562 * __this, Guid_t1562  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3115);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____a_0);
		int32_t L_1 = ((&___value)->____a_0);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = (__this->____a_0);
		int32_t L_3 = ((&___value)->____a_0);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		int32_t L_4 = Guid_Compare_m21227(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0022:
	{
		int16_t L_5 = (__this->____b_1);
		int16_t L_6 = ((&___value)->____b_1);
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0044;
		}
	}
	{
		int16_t L_7 = (__this->____b_1);
		int16_t L_8 = ((&___value)->____b_1);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		int32_t L_9 = Guid_Compare_m21227(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0044:
	{
		int16_t L_10 = (__this->____c_2);
		int16_t L_11 = ((&___value)->____c_2);
		if ((((int32_t)L_10) == ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		int16_t L_12 = (__this->____c_2);
		int16_t L_13 = ((&___value)->____c_2);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		int32_t L_14 = Guid_Compare_m21227(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0066:
	{
		uint8_t L_15 = (__this->____d_3);
		uint8_t L_16 = ((&___value)->____d_3);
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0088;
		}
	}
	{
		uint8_t L_17 = (__this->____d_3);
		uint8_t L_18 = ((&___value)->____d_3);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		int32_t L_19 = Guid_Compare_m21227(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_0088:
	{
		uint8_t L_20 = (__this->____e_4);
		uint8_t L_21 = ((&___value)->____e_4);
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_00aa;
		}
	}
	{
		uint8_t L_22 = (__this->____e_4);
		uint8_t L_23 = ((&___value)->____e_4);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		int32_t L_24 = Guid_Compare_m21227(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}

IL_00aa:
	{
		uint8_t L_25 = (__this->____f_5);
		uint8_t L_26 = ((&___value)->____f_5);
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00cc;
		}
	}
	{
		uint8_t L_27 = (__this->____f_5);
		uint8_t L_28 = ((&___value)->____f_5);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		int32_t L_29 = Guid_Compare_m21227(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_00cc:
	{
		uint8_t L_30 = (__this->____g_6);
		uint8_t L_31 = ((&___value)->____g_6);
		if ((((int32_t)L_30) == ((int32_t)L_31)))
		{
			goto IL_00ee;
		}
	}
	{
		uint8_t L_32 = (__this->____g_6);
		uint8_t L_33 = ((&___value)->____g_6);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		int32_t L_34 = Guid_Compare_m21227(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		return L_34;
	}

IL_00ee:
	{
		uint8_t L_35 = (__this->____h_7);
		uint8_t L_36 = ((&___value)->____h_7);
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_0110;
		}
	}
	{
		uint8_t L_37 = (__this->____h_7);
		uint8_t L_38 = ((&___value)->____h_7);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		int32_t L_39 = Guid_Compare_m21227(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		return L_39;
	}

IL_0110:
	{
		uint8_t L_40 = (__this->____i_8);
		uint8_t L_41 = ((&___value)->____i_8);
		if ((((int32_t)L_40) == ((int32_t)L_41)))
		{
			goto IL_0132;
		}
	}
	{
		uint8_t L_42 = (__this->____i_8);
		uint8_t L_43 = ((&___value)->____i_8);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		int32_t L_44 = Guid_Compare_m21227(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		return L_44;
	}

IL_0132:
	{
		uint8_t L_45 = (__this->____j_9);
		uint8_t L_46 = ((&___value)->____j_9);
		if ((((int32_t)L_45) == ((int32_t)L_46)))
		{
			goto IL_0154;
		}
	}
	{
		uint8_t L_47 = (__this->____j_9);
		uint8_t L_48 = ((&___value)->____j_9);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		int32_t L_49 = Guid_Compare_m21227(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		return L_49;
	}

IL_0154:
	{
		uint8_t L_50 = (__this->____k_10);
		uint8_t L_51 = ((&___value)->____k_10);
		if ((((int32_t)L_50) == ((int32_t)L_51)))
		{
			goto IL_0176;
		}
	}
	{
		uint8_t L_52 = (__this->____k_10);
		uint8_t L_53 = ((&___value)->____k_10);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		int32_t L_54 = Guid_Compare_m21227(NULL /*static, unused*/, L_52, L_53, /*hidden argument*/NULL);
		return L_54;
	}

IL_0176:
	{
		return 0;
	}
}
// System.Boolean System.Guid::Equals(System.Guid)
extern "C" bool Guid_Equals_m21231 (Guid_t1562 * __this, Guid_t1562  ___g, const MethodInfo* method)
{
	{
		Guid_t1562  L_0 = ___g;
		int32_t L_1 = Guid_CompareTo_m21230(__this, L_0, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Guid::GetHashCode()
extern "C" int32_t Guid_GetHashCode_m21232 (Guid_t1562 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____a_0);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int16_t L_2 = (__this->____b_1);
		int16_t L_3 = (__this->____c_2);
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)16)))|(int32_t)L_3))));
		int32_t L_4 = V_0;
		uint8_t L_5 = (__this->____d_3);
		V_0 = ((int32_t)((int32_t)L_4^(int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)24)))));
		int32_t L_6 = V_0;
		uint8_t L_7 = (__this->____e_4);
		V_0 = ((int32_t)((int32_t)L_6^(int32_t)((int32_t)((int32_t)L_7<<(int32_t)((int32_t)16)))));
		int32_t L_8 = V_0;
		uint8_t L_9 = (__this->____f_5);
		V_0 = ((int32_t)((int32_t)L_8^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)8))));
		int32_t L_10 = V_0;
		uint8_t L_11 = (__this->____g_6);
		V_0 = ((int32_t)((int32_t)L_10^(int32_t)L_11));
		int32_t L_12 = V_0;
		uint8_t L_13 = (__this->____h_7);
		V_0 = ((int32_t)((int32_t)L_12^(int32_t)((int32_t)((int32_t)L_13<<(int32_t)((int32_t)24)))));
		int32_t L_14 = V_0;
		uint8_t L_15 = (__this->____i_8);
		V_0 = ((int32_t)((int32_t)L_14^(int32_t)((int32_t)((int32_t)L_15<<(int32_t)((int32_t)16)))));
		int32_t L_16 = V_0;
		uint8_t L_17 = (__this->____j_9);
		V_0 = ((int32_t)((int32_t)L_16^(int32_t)((int32_t)((int32_t)L_17<<(int32_t)8))));
		int32_t L_18 = V_0;
		uint8_t L_19 = (__this->____k_10);
		V_0 = ((int32_t)((int32_t)L_18^(int32_t)L_19));
		int32_t L_20 = V_0;
		return L_20;
	}
}
// System.Char System.Guid::ToHex(System.Int32)
extern "C" uint16_t Guid_ToHex_m21233 (Object_t * __this /* static, unused */, int32_t ___b, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___b;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___b;
		G_B3_0 = ((int32_t)((int32_t)((int32_t)48)+(int32_t)L_1));
		goto IL_0012;
	}

IL_000b:
	{
		int32_t L_2 = ___b;
		G_B3_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)97)+(int32_t)L_2))-(int32_t)((int32_t)10)));
	}

IL_0012:
	{
		return (((uint16_t)G_B3_0));
	}
}
// System.Guid System.Guid::NewGuid()
extern TypeInfo* ByteU5BU5D_t25_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t1562_il2cpp_TypeInfo_var;
extern "C" Guid_t1562  Guid_NewGuid_m7420 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		Guid_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3115);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t25* V_0 = {0};
	Object_t * V_1 = {0};
	Guid_t1562  V_2 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = ((ByteU5BU5D_t25*)SZArrayNew(ByteU5BU5D_t25_il2cpp_TypeInfo_var, ((int32_t)16)));
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((Guid_t1562_StaticFields*)Guid_t1562_il2cpp_TypeInfo_var->static_fields)->____rngAccess_12;
		V_1 = L_0;
		Object_t * L_1 = V_1;
		Monitor_Enter_m2469(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
			RandomNumberGenerator_t1183 * L_2 = ((Guid_t1562_StaticFields*)Guid_t1562_il2cpp_TypeInfo_var->static_fields)->____rng_13;
			if (L_2)
			{
				goto IL_0025;
			}
		}

IL_001b:
		{
			RandomNumberGenerator_t1183 * L_3 = RandomNumberGenerator_Create_m6566(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
			((Guid_t1562_StaticFields*)Guid_t1562_il2cpp_TypeInfo_var->static_fields)->____rng_13 = L_3;
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
			RandomNumberGenerator_t1183 * L_4 = ((Guid_t1562_StaticFields*)Guid_t1562_il2cpp_TypeInfo_var->static_fields)->____rng_13;
			ByteU5BU5D_t25* L_5 = V_0;
			NullCheck(L_4);
			VirtActionInvoker1< ByteU5BU5D_t25* >::Invoke(4 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_4, L_5);
			IL2CPP_LEAVE(0x39, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		Object_t * L_6 = V_1;
		Monitor_Exit_m2472(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(50)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0039:
	{
		ByteU5BU5D_t25* L_7 = V_0;
		Guid__ctor_m21220((&V_2), L_7, /*hidden argument*/NULL);
		uint8_t L_8 = ((&V_2)->____d_3);
		(&V_2)->____d_3 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)63)))|(int32_t)((int32_t)128)))));
		int16_t L_9 = ((&V_2)->____c_2);
		(&V_2)->____c_2 = (((int16_t)((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_9))&(int64_t)(((int64_t)((int32_t)4095)))))|(int64_t)(((int64_t)((int32_t)16384)))))));
		Guid_t1562  L_10 = V_2;
		return L_10;
	}
}
// System.Byte[] System.Guid::ToByteArray()
extern TypeInfo* ByteU5BU5D_t25_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t25* Guid_ToByteArray_m21234 (Guid_t1562 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t25* V_0 = {0};
	ByteU5BU5D_t25* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = ((ByteU5BU5D_t25*)SZArrayNew(ByteU5BU5D_t25_il2cpp_TypeInfo_var, ((int32_t)16)));
		V_2 = 0;
		int32_t L_0 = (__this->____a_0);
		ByteU5BU5D_t25* L_1 = BitConverterLE_GetBytes_m18250(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		V_3 = 0;
		goto IL_0028;
	}

IL_001a:
	{
		ByteU5BU5D_t25* L_2 = V_0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		ByteU5BU5D_t25* L_5 = V_1;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		int32_t L_8 = V_3;
		V_3 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) < ((int32_t)4)))
		{
			goto IL_001a;
		}
	}
	{
		int16_t L_10 = (__this->____b_1);
		ByteU5BU5D_t25* L_11 = BitConverterLE_GetBytes_m18249(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		V_3 = 0;
		goto IL_004a;
	}

IL_003c:
	{
		ByteU5BU5D_t25* L_12 = V_0;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
		ByteU5BU5D_t25* L_15 = V_1;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_14);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_14)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_17));
		int32_t L_18 = V_3;
		V_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_004a:
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_003c;
		}
	}
	{
		int16_t L_20 = (__this->____c_2);
		ByteU5BU5D_t25* L_21 = BitConverterLE_GetBytes_m18249(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		V_3 = 0;
		goto IL_006c;
	}

IL_005e:
	{
		ByteU5BU5D_t25* L_22 = V_0;
		int32_t L_23 = V_2;
		int32_t L_24 = L_23;
		V_2 = ((int32_t)((int32_t)L_24+(int32_t)1));
		ByteU5BU5D_t25* L_25 = V_1;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = L_26;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_24);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_24)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_25, L_27));
		int32_t L_28 = V_3;
		V_3 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_006c:
	{
		int32_t L_29 = V_3;
		if ((((int32_t)L_29) < ((int32_t)2)))
		{
			goto IL_005e;
		}
	}
	{
		ByteU5BU5D_t25* L_30 = V_0;
		uint8_t L_31 = (__this->____d_3);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 8);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_30, 8)) = (uint8_t)L_31;
		ByteU5BU5D_t25* L_32 = V_0;
		uint8_t L_33 = (__this->____e_4);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, ((int32_t)9));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_32, ((int32_t)9))) = (uint8_t)L_33;
		ByteU5BU5D_t25* L_34 = V_0;
		uint8_t L_35 = (__this->____f_5);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)10));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_34, ((int32_t)10))) = (uint8_t)L_35;
		ByteU5BU5D_t25* L_36 = V_0;
		uint8_t L_37 = (__this->____g_6);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)11));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_36, ((int32_t)11))) = (uint8_t)L_37;
		ByteU5BU5D_t25* L_38 = V_0;
		uint8_t L_39 = (__this->____h_7);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)12));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_38, ((int32_t)12))) = (uint8_t)L_39;
		ByteU5BU5D_t25* L_40 = V_0;
		uint8_t L_41 = (__this->____i_8);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)13));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_40, ((int32_t)13))) = (uint8_t)L_41;
		ByteU5BU5D_t25* L_42 = V_0;
		uint8_t L_43 = (__this->____j_9);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)14));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_42, ((int32_t)14))) = (uint8_t)L_43;
		ByteU5BU5D_t25* L_44 = V_0;
		uint8_t L_45 = (__this->____k_10);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)15));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_44, ((int32_t)15))) = (uint8_t)L_45;
		ByteU5BU5D_t25* L_46 = V_0;
		return L_46;
	}
}
// System.Void System.Guid::AppendInt(System.Text.StringBuilder,System.Int32)
extern TypeInfo* Guid_t1562_il2cpp_TypeInfo_var;
extern "C" void Guid_AppendInt_m21235 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___builder, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3115);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringBuilder_t619 * L_0 = ___builder;
		int32_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		uint16_t L_2 = Guid_ToHex_m21233(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)((int32_t)28)))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_0);
		StringBuilder_Append_m5401(L_0, L_2, /*hidden argument*/NULL);
		StringBuilder_t619 * L_3 = ___builder;
		int32_t L_4 = ___value;
		uint16_t L_5 = Guid_ToHex_m21233(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_4>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_3);
		StringBuilder_Append_m5401(L_3, L_5, /*hidden argument*/NULL);
		StringBuilder_t619 * L_6 = ___builder;
		int32_t L_7 = ___value;
		uint16_t L_8 = Guid_ToHex_m21233(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_7>>(int32_t)((int32_t)20)))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_m5401(L_6, L_8, /*hidden argument*/NULL);
		StringBuilder_t619 * L_9 = ___builder;
		int32_t L_10 = ___value;
		uint16_t L_11 = Guid_ToHex_m21233(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_10>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_9);
		StringBuilder_Append_m5401(L_9, L_11, /*hidden argument*/NULL);
		StringBuilder_t619 * L_12 = ___builder;
		int32_t L_13 = ___value;
		uint16_t L_14 = Guid_ToHex_m21233(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_13>>(int32_t)((int32_t)12)))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_12);
		StringBuilder_Append_m5401(L_12, L_14, /*hidden argument*/NULL);
		StringBuilder_t619 * L_15 = ___builder;
		int32_t L_16 = ___value;
		uint16_t L_17 = Guid_ToHex_m21233(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_16>>(int32_t)8))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_Append_m5401(L_15, L_17, /*hidden argument*/NULL);
		StringBuilder_t619 * L_18 = ___builder;
		int32_t L_19 = ___value;
		uint16_t L_20 = Guid_ToHex_m21233(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_19>>(int32_t)4))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_18);
		StringBuilder_Append_m5401(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t619 * L_21 = ___builder;
		int32_t L_22 = ___value;
		uint16_t L_23 = Guid_ToHex_m21233(NULL /*static, unused*/, ((int32_t)((int32_t)L_22&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_m5401(L_21, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Guid::AppendShort(System.Text.StringBuilder,System.Int16)
extern TypeInfo* Guid_t1562_il2cpp_TypeInfo_var;
extern "C" void Guid_AppendShort_m21236 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___builder, int16_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3115);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringBuilder_t619 * L_0 = ___builder;
		int16_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		uint16_t L_2 = Guid_ToHex_m21233(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)((int32_t)12)))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_0);
		StringBuilder_Append_m5401(L_0, L_2, /*hidden argument*/NULL);
		StringBuilder_t619 * L_3 = ___builder;
		int16_t L_4 = ___value;
		uint16_t L_5 = Guid_ToHex_m21233(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_4>>(int32_t)8))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_3);
		StringBuilder_Append_m5401(L_3, L_5, /*hidden argument*/NULL);
		StringBuilder_t619 * L_6 = ___builder;
		int16_t L_7 = ___value;
		uint16_t L_8 = Guid_ToHex_m21233(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_7>>(int32_t)4))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_m5401(L_6, L_8, /*hidden argument*/NULL);
		StringBuilder_t619 * L_9 = ___builder;
		int16_t L_10 = ___value;
		uint16_t L_11 = Guid_ToHex_m21233(NULL /*static, unused*/, ((int32_t)((int32_t)L_10&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_9);
		StringBuilder_Append_m5401(L_9, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Guid::AppendByte(System.Text.StringBuilder,System.Byte)
extern TypeInfo* Guid_t1562_il2cpp_TypeInfo_var;
extern "C" void Guid_AppendByte_m21237 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___builder, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3115);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringBuilder_t619 * L_0 = ___builder;
		uint8_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		uint16_t L_2 = Guid_ToHex_m21233(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)4))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_0);
		StringBuilder_Append_m5401(L_0, L_2, /*hidden argument*/NULL);
		StringBuilder_t619 * L_3 = ___builder;
		uint8_t L_4 = ___value;
		uint16_t L_5 = Guid_ToHex_m21233(NULL /*static, unused*/, ((int32_t)((int32_t)L_4&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_3);
		StringBuilder_Append_m5401(L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Guid::BaseToString(System.Boolean,System.Boolean,System.Boolean)
extern TypeInfo* StringBuilder_t619_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t1562_il2cpp_TypeInfo_var;
extern "C" String_t* Guid_BaseToString_m21238 (Guid_t1562 * __this, bool ___h, bool ___p, bool ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		Guid_t1562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3115);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t619 * V_0 = {0};
	{
		StringBuilder_t619 * L_0 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m6588(L_0, ((int32_t)40), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = ___p;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		StringBuilder_t619 * L_2 = V_0;
		NullCheck(L_2);
		StringBuilder_Append_m5401(L_2, ((int32_t)40), /*hidden argument*/NULL);
		goto IL_0022;
	}

IL_0016:
	{
		bool L_3 = ___b;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		StringBuilder_t619 * L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_Append_m5401(L_4, ((int32_t)123), /*hidden argument*/NULL);
	}

IL_0022:
	{
		StringBuilder_t619 * L_5 = V_0;
		int32_t L_6 = (__this->____a_0);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		Guid_AppendInt_m21235(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		bool L_7 = ___h;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		StringBuilder_t619 * L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_Append_m5401(L_8, ((int32_t)45), /*hidden argument*/NULL);
	}

IL_003a:
	{
		StringBuilder_t619 * L_9 = V_0;
		int16_t L_10 = (__this->____b_1);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		Guid_AppendShort_m21236(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		bool L_11 = ___h;
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		StringBuilder_t619 * L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_Append_m5401(L_12, ((int32_t)45), /*hidden argument*/NULL);
	}

IL_0052:
	{
		StringBuilder_t619 * L_13 = V_0;
		int16_t L_14 = (__this->____c_2);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		Guid_AppendShort_m21236(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		bool L_15 = ___h;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		StringBuilder_t619 * L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_Append_m5401(L_16, ((int32_t)45), /*hidden argument*/NULL);
	}

IL_006a:
	{
		StringBuilder_t619 * L_17 = V_0;
		uint8_t L_18 = (__this->____d_3);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		Guid_AppendByte_m21237(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		StringBuilder_t619 * L_19 = V_0;
		uint8_t L_20 = (__this->____e_4);
		Guid_AppendByte_m21237(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		bool L_21 = ___h;
		if (!L_21)
		{
			goto IL_008e;
		}
	}
	{
		StringBuilder_t619 * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m5401(L_22, ((int32_t)45), /*hidden argument*/NULL);
	}

IL_008e:
	{
		StringBuilder_t619 * L_23 = V_0;
		uint8_t L_24 = (__this->____f_5);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t1562_il2cpp_TypeInfo_var);
		Guid_AppendByte_m21237(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		StringBuilder_t619 * L_25 = V_0;
		uint8_t L_26 = (__this->____g_6);
		Guid_AppendByte_m21237(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		StringBuilder_t619 * L_27 = V_0;
		uint8_t L_28 = (__this->____h_7);
		Guid_AppendByte_m21237(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		StringBuilder_t619 * L_29 = V_0;
		uint8_t L_30 = (__this->____i_8);
		Guid_AppendByte_m21237(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		StringBuilder_t619 * L_31 = V_0;
		uint8_t L_32 = (__this->____j_9);
		Guid_AppendByte_m21237(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		StringBuilder_t619 * L_33 = V_0;
		uint8_t L_34 = (__this->____k_10);
		Guid_AppendByte_m21237(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		bool L_35 = ___p;
		if (!L_35)
		{
			goto IL_00e4;
		}
	}
	{
		StringBuilder_t619 * L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_Append_m5401(L_36, ((int32_t)41), /*hidden argument*/NULL);
		goto IL_00f0;
	}

IL_00e4:
	{
		bool L_37 = ___b;
		if (!L_37)
		{
			goto IL_00f0;
		}
	}
	{
		StringBuilder_t619 * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m5401(L_38, ((int32_t)125), /*hidden argument*/NULL);
	}

IL_00f0:
	{
		StringBuilder_t619 * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_39);
		return L_40;
	}
}
// System.String System.Guid::ToString()
extern "C" String_t* Guid_ToString_m21239 (Guid_t1562 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Guid_BaseToString_m21238(__this, 1, 0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Guid::ToString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t1330_il2cpp_TypeInfo_var;
extern "C" String_t* Guid_ToString_m13756 (Guid_t1562 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t1330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2627);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = {0};
	{
		V_0 = 1;
		V_1 = 0;
		V_2 = 0;
		String_t* L_0 = ___format;
		if (!L_0)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_1 = ___format;
		NullCheck(L_1);
		String_t* L_2 = String_ToLowerInvariant_m17359(L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		String_t* L_3 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m2344(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral5550, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		V_2 = 1;
		goto IL_006d;
	}

IL_0021:
	{
		String_t* L_5 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m2344(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral5551, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		V_1 = 1;
		goto IL_006d;
	}

IL_0032:
	{
		String_t* L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m2344(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral2313, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		V_0 = 0;
		goto IL_006d;
	}

IL_0043:
	{
		String_t* L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Inequality_m3147(NULL /*static, unused*/, L_9, (String_t*) &_stringLiteral2366, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_13 = String_op_Inequality_m3147(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5552, /*hidden argument*/NULL);
		FormatException_t1330 * L_15 = (FormatException_t1330 *)il2cpp_codegen_object_new (FormatException_t1330_il2cpp_TypeInfo_var);
		FormatException__ctor_m6577(L_15, L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_006d:
	{
		bool L_16 = V_0;
		bool L_17 = V_1;
		bool L_18 = V_2;
		String_t* L_19 = Guid_BaseToString_m21238(__this, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.String System.Guid::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Guid_ToString_m11542 (Guid_t1562 * __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method)
{
	{
		String_t* L_0 = ___format;
		String_t* L_1 = Guid_ToString_m13756(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeException.h"
#ifndef _MSC_VER
#else
#endif
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"



// System.Void System.IndexOutOfRangeException::.ctor()
extern "C" void IndexOutOfRangeException__ctor_m21240 (IndexOutOfRangeException_t1325 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5554, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C" void IndexOutOfRangeException__ctor_m6563 (IndexOutOfRangeException_t1325 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IndexOutOfRangeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IndexOutOfRangeException__ctor_m21241 (IndexOutOfRangeException_t1325 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.InvalidCastException
#include "mscorlib_System_InvalidCastException.h"
#ifndef _MSC_VER
#else
#endif
// System.InvalidCastException
#include "mscorlib_System_InvalidCastExceptionMethodDeclarations.h"



// System.Void System.InvalidCastException::.ctor()
extern "C" void InvalidCastException__ctor_m11508 (InvalidCastException_t2552 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5555, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2147467262), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.InvalidCastException::.ctor(System.String)
extern "C" void InvalidCastException__ctor_m21242 (InvalidCastException_t2552 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2147467262), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.InvalidCastException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidCastException__ctor_m21243 (InvalidCastException_t2552 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
#ifndef _MSC_VER
#else
#endif
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"



// System.Void System.InvalidOperationException::.ctor()
extern "C" void InvalidOperationException__ctor_m11581 (InvalidOperationException_t1086 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5556, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233079), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" void InvalidOperationException__ctor_m6655 (InvalidOperationException_t1086 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233079), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
extern "C" void InvalidOperationException__ctor_m11492 (InvalidOperationException_t1086 * __this, String_t* ___message, Exception_t468 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t468 * L_1 = ___innerException;
		SystemException__ctor_m11562(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233079), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidOperationException__ctor_m16824 (InvalidOperationException_t1086 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.LoaderOptimization
#include "mscorlib_System_LoaderOptimization.h"
#ifndef _MSC_VER
#else
#endif
// System.LoaderOptimization
#include "mscorlib_System_LoaderOptimizationMethodDeclarations.h"



// System.Math
#include "mscorlib_System_Math.h"
#ifndef _MSC_VER
#else
#endif
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.OverflowException
#include "mscorlib_System_OverflowException.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.OverflowException
#include "mscorlib_System_OverflowExceptionMethodDeclarations.h"
// System.BitConverter
#include "mscorlib_System_BitConverterMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"


// System.Double System.Math::Abs(System.Double)
extern "C" double Math_Abs_m21244 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method)
{
	double G_B3_0 = 0.0;
	{
		double L_0 = ___value;
		if ((!(((double)L_0) < ((double)(0.0)))))
		{
			goto IL_0010;
		}
	}
	{
		double L_1 = ___value;
		G_B3_0 = ((-L_1));
		goto IL_0011;
	}

IL_0010:
	{
		double L_2 = ___value;
		G_B3_0 = L_2;
	}

IL_0011:
	{
		return G_B3_0;
	}
}
// System.Single System.Math::Abs(System.Single)
extern "C" float Math_Abs_m21245 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___value;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_000c;
		}
	}
	{
		float L_1 = ___value;
		G_B3_0 = ((-L_1));
		goto IL_000d;
	}

IL_000c:
	{
		float L_2 = ___value;
		G_B3_0 = L_2;
	}

IL_000d:
	{
		return G_B3_0;
	}
}
// System.Int32 System.Math::Abs(System.Int32)
extern TypeInfo* OverflowException_t4322_il2cpp_TypeInfo_var;
extern "C" int32_t Math_Abs_m21246 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OverflowException_t4322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8149);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___value;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2147483648)))))
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5557, /*hidden argument*/NULL);
		OverflowException_t4322 * L_2 = (OverflowException_t4322 *)il2cpp_codegen_object_new (OverflowException_t4322_il2cpp_TypeInfo_var);
		OverflowException__ctor_m21478(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = ___value;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___value;
		G_B5_0 = ((-L_4));
		goto IL_0021;
	}

IL_0020:
	{
		int32_t L_5 = ___value;
		G_B5_0 = L_5;
	}

IL_0021:
	{
		return G_B5_0;
	}
}
// System.Int64 System.Math::Abs(System.Int64)
extern TypeInfo* OverflowException_t4322_il2cpp_TypeInfo_var;
extern "C" int64_t Math_Abs_m21247 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OverflowException_t4322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8149);
		s_Il2CppMethodIntialized = true;
	}
	int64_t G_B5_0 = 0;
	{
		int64_t L_0 = ___value;
		if ((!(((uint64_t)L_0) == ((uint64_t)((int64_t)std::numeric_limits<int64_t>::min())))))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5557, /*hidden argument*/NULL);
		OverflowException_t4322 * L_2 = (OverflowException_t4322 *)il2cpp_codegen_object_new (OverflowException_t4322_il2cpp_TypeInfo_var);
		OverflowException__ctor_m21478(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001c:
	{
		int64_t L_3 = ___value;
		if ((((int64_t)L_3) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0025;
		}
	}
	{
		int64_t L_4 = ___value;
		G_B5_0 = ((-L_4));
		goto IL_0026;
	}

IL_0025:
	{
		int64_t L_5 = ___value;
		G_B5_0 = L_5;
	}

IL_0026:
	{
		return G_B5_0;
	}
}
// System.Double System.Math::Ceiling(System.Double)
extern "C" double Math_Ceiling_m21248 (Object_t * __this /* static, unused */, double ___a, const MethodInfo* method)
{
	double V_0 = 0.0;
	{
		double L_0 = ___a;
		double L_1 = floor(L_0);
		V_0 = L_1;
		double L_2 = V_0;
		double L_3 = ___a;
		if ((((double)L_2) == ((double)L_3)))
		{
			goto IL_0017;
		}
	}
	{
		double L_4 = V_0;
		V_0 = ((double)((double)L_4+(double)(1.0)));
	}

IL_0017:
	{
		double L_5 = V_0;
		return L_5;
	}
}
// System.Double System.Math::Floor(System.Double)
extern "C" double Math_Floor_m21249 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method)
{
	typedef double (*Math_Floor_m21249_ftn) (double);
	static Math_Floor_m21249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Floor_m21249_ftn)il2cpp_codegen_resolve_icall ("System.Math::Floor(System.Double)");
	return _il2cpp_icall_func(___d);
}
// System.Double System.Math::IEEERemainder(System.Double,System.Double)
extern TypeInfo* BitConverter_t1333_il2cpp_TypeInfo_var;
extern "C" double Math_IEEERemainder_m12183 (Object_t * __this /* static, unused */, double ___x, double ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BitConverter_t1333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2631);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	double G_B7_0 = 0.0;
	{
		double L_0 = ___y;
		if ((!(((double)L_0) == ((double)(0.0)))))
		{
			goto IL_0016;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0016:
	{
		double L_1 = ___x;
		double L_2 = ___y;
		double L_3 = ___x;
		double L_4 = ___y;
		double L_5 = round(((double)((double)L_3/(double)L_4)));
		V_0 = ((double)((double)L_1-(double)((double)((double)L_2*(double)L_5))));
		double L_6 = V_0;
		if ((((double)L_6) == ((double)(0.0))))
		{
			goto IL_0031;
		}
	}
	{
		double L_7 = V_0;
		return L_7;
	}

IL_0031:
	{
		double L_8 = ___x;
		if ((!(((double)L_8) > ((double)(0.0)))))
		{
			goto IL_0048;
		}
	}
	{
		G_B7_0 = (0.0);
		goto IL_0056;
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t1333_il2cpp_TypeInfo_var);
		double L_9 = BitConverter_Int64BitsToDouble_m20834(NULL /*static, unused*/, ((int64_t)std::numeric_limits<int64_t>::min()), /*hidden argument*/NULL);
		G_B7_0 = L_9;
	}

IL_0056:
	{
		return G_B7_0;
	}
}
// System.Double System.Math::Log(System.Double,System.Double)
extern "C" double Math_Log_m13711 (Object_t * __this /* static, unused */, double ___a, double ___newBase, const MethodInfo* method)
{
	double V_0 = 0.0;
	double G_B3_0 = 0.0;
	{
		double L_0 = ___a;
		double L_1 = log(L_0);
		double L_2 = ___newBase;
		double L_3 = log(L_2);
		V_0 = ((double)((double)L_1/(double)L_3));
		double L_4 = V_0;
		if ((!(((double)L_4) == ((double)(0.0)))))
		{
			goto IL_0025;
		}
	}
	{
		G_B3_0 = (0.0);
		goto IL_0026;
	}

IL_0025:
	{
		double L_5 = V_0;
		G_B3_0 = L_5;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Double System.Math::Max(System.Double,System.Double)
extern "C" double Math_Max_m21250 (Object_t * __this /* static, unused */, double ___val1, double ___val2, const MethodInfo* method)
{
	double G_B6_0 = 0.0;
	{
		double L_0 = ___val1;
		bool L_1 = Double_IsNaN_m11549(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		double L_2 = ___val2;
		bool L_3 = Double_IsNaN_m11549(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_001a:
	{
		double L_4 = ___val1;
		double L_5 = ___val2;
		if ((!(((double)L_4) > ((double)L_5))))
		{
			goto IL_0021;
		}
	}
	{
		double L_6 = ___val1;
		G_B6_0 = L_6;
		goto IL_0022;
	}

IL_0021:
	{
		double L_7 = ___val2;
		G_B6_0 = L_7;
	}

IL_0022:
	{
		return G_B6_0;
	}
}
// System.Int32 System.Math::Max(System.Int32,System.Int32)
extern "C" int32_t Math_Max_m6594 (Object_t * __this /* static, unused */, int32_t ___val1, int32_t ___val2, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___val1;
		int32_t L_1 = ___val2;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_2 = ___val1;
		G_B3_0 = L_2;
		goto IL_0008;
	}

IL_0007:
	{
		int32_t L_3 = ___val2;
		G_B3_0 = L_3;
	}

IL_0008:
	{
		return G_B3_0;
	}
}
// System.Double System.Math::Min(System.Double,System.Double)
extern "C" double Math_Min_m21251 (Object_t * __this /* static, unused */, double ___val1, double ___val2, const MethodInfo* method)
{
	double G_B6_0 = 0.0;
	{
		double L_0 = ___val1;
		bool L_1 = Double_IsNaN_m11549(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		double L_2 = ___val2;
		bool L_3 = Double_IsNaN_m11549(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_001a:
	{
		double L_4 = ___val1;
		double L_5 = ___val2;
		if ((!(((double)L_4) < ((double)L_5))))
		{
			goto IL_0021;
		}
	}
	{
		double L_6 = ___val1;
		G_B6_0 = L_6;
		goto IL_0022;
	}

IL_0021:
	{
		double L_7 = ___val2;
		G_B6_0 = L_7;
	}

IL_0022:
	{
		return G_B6_0;
	}
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C" int32_t Math_Min_m11572 (Object_t * __this /* static, unused */, int32_t ___val1, int32_t ___val2, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___val1;
		int32_t L_1 = ___val2;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_2 = ___val1;
		G_B3_0 = L_2;
		goto IL_0008;
	}

IL_0007:
	{
		int32_t L_3 = ___val2;
		G_B3_0 = L_3;
	}

IL_0008:
	{
		return G_B3_0;
	}
}
// System.Decimal System.Math::Round(System.Decimal)
extern TypeInfo* Decimal_t2541_il2cpp_TypeInfo_var;
extern "C" Decimal_t2541  Math_Round_m21252 (Object_t * __this /* static, unused */, Decimal_t2541  ___d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Decimal_t2541_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4635);
		s_Il2CppMethodIntialized = true;
	}
	Decimal_t2541  V_0 = {0};
	Decimal_t2541  V_1 = {0};
	{
		Decimal_t2541  L_0 = ___d;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2541_il2cpp_TypeInfo_var);
		Decimal_t2541  L_1 = Decimal_Floor_m17466(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Decimal_t2541  L_2 = ___d;
		Decimal_t2541  L_3 = V_0;
		Decimal_t2541  L_4 = Decimal_op_Subtraction_m17491(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Decimal_t2541  L_5 = V_1;
		Decimal_t2541  L_6 = {0};
		Decimal__ctor_m17434(&L_6, 5, 0, 0, 0, 1, /*hidden argument*/NULL);
		bool L_7 = Decimal_op_Equality_m17515(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		Decimal_t2541  L_8 = {0};
		Decimal__ctor_m17434(&L_8, ((int32_t)20), 0, 0, 0, 1, /*hidden argument*/NULL);
		Decimal_t2541  L_9 = V_0;
		Decimal_t2541  L_10 = {0};
		Decimal__ctor_m17434(&L_10, ((int32_t)20), 0, 0, 0, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2541_il2cpp_TypeInfo_var);
		Decimal_t2541  L_11 = Decimal_op_Division_m17493(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		Decimal_t2541  L_12 = V_0;
		Decimal_t2541  L_13 = {0};
		Decimal__ctor_m17434(&L_13, ((int32_t)20), 0, 0, 0, 1, /*hidden argument*/NULL);
		Decimal_t2541  L_14 = Decimal_op_Division_m17493(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Decimal_t2541  L_15 = Decimal_Floor_m17466(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Decimal_t2541  L_16 = Decimal_op_Subtraction_m17491(NULL /*static, unused*/, L_11, L_15, /*hidden argument*/NULL);
		Decimal_t2541  L_17 = Decimal_op_Multiply_m17492(NULL /*static, unused*/, L_8, L_16, /*hidden argument*/NULL);
		Decimal_t2541  L_18 = {0};
		Decimal__ctor_m17435(&L_18, 0, /*hidden argument*/NULL);
		bool L_19 = Decimal_op_Inequality_m17514(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_007c;
		}
	}

IL_006a:
	{
		Decimal_t2541  L_20 = V_1;
		Decimal_t2541  L_21 = {0};
		Decimal__ctor_m17434(&L_21, 5, 0, 0, 0, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2541_il2cpp_TypeInfo_var);
		bool L_22 = Decimal_op_GreaterThan_m17516(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0083;
		}
	}

IL_007c:
	{
		Decimal_t2541  L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2541_il2cpp_TypeInfo_var);
		Decimal_t2541  L_24 = Decimal_op_Increment_m17490(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		V_0 = L_24;
	}

IL_0083:
	{
		Decimal_t2541  L_25 = V_0;
		return L_25;
	}
}
// System.Double System.Math::Round(System.Double)
extern "C" double Math_Round_m21253 (Object_t * __this /* static, unused */, double ___a, const MethodInfo* method)
{
	typedef double (*Math_Round_m21253_ftn) (double);
	static Math_Round_m21253_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Round_m21253_ftn)il2cpp_codegen_resolve_icall ("System.Math::Round(System.Double)");
	return _il2cpp_icall_func(___a);
}
// System.Double System.Math::Sin(System.Double)
extern "C" double Math_Sin_m21254 (Object_t * __this /* static, unused */, double ___a, const MethodInfo* method)
{
	typedef double (*Math_Sin_m21254_ftn) (double);
	static Math_Sin_m21254_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Sin_m21254_ftn)il2cpp_codegen_resolve_icall ("System.Math::Sin(System.Double)");
	return _il2cpp_icall_func(___a);
}
// System.Double System.Math::Cos(System.Double)
extern "C" double Math_Cos_m21255 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method)
{
	typedef double (*Math_Cos_m21255_ftn) (double);
	static Math_Cos_m21255_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Cos_m21255_ftn)il2cpp_codegen_resolve_icall ("System.Math::Cos(System.Double)");
	return _il2cpp_icall_func(___d);
}
// System.Double System.Math::Tan(System.Double)
extern "C" double Math_Tan_m21256 (Object_t * __this /* static, unused */, double ___a, const MethodInfo* method)
{
	typedef double (*Math_Tan_m21256_ftn) (double);
	static Math_Tan_m21256_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Tan_m21256_ftn)il2cpp_codegen_resolve_icall ("System.Math::Tan(System.Double)");
	return _il2cpp_icall_func(___a);
}
// System.Double System.Math::Sinh(System.Double)
extern "C" double Math_Sinh_m21257 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method)
{
	typedef double (*Math_Sinh_m21257_ftn) (double);
	static Math_Sinh_m21257_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Sinh_m21257_ftn)il2cpp_codegen_resolve_icall ("System.Math::Sinh(System.Double)");
	return _il2cpp_icall_func(___value);
}
// System.Double System.Math::Cosh(System.Double)
extern "C" double Math_Cosh_m21258 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method)
{
	typedef double (*Math_Cosh_m21258_ftn) (double);
	static Math_Cosh_m21258_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Cosh_m21258_ftn)il2cpp_codegen_resolve_icall ("System.Math::Cosh(System.Double)");
	return _il2cpp_icall_func(___value);
}
// System.Double System.Math::Tanh(System.Double)
extern "C" double Math_Tanh_m21259 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method)
{
	typedef double (*Math_Tanh_m21259_ftn) (double);
	static Math_Tanh_m21259_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Tanh_m21259_ftn)il2cpp_codegen_resolve_icall ("System.Math::Tanh(System.Double)");
	return _il2cpp_icall_func(___value);
}
// System.Double System.Math::Acos(System.Double)
extern "C" double Math_Acos_m21260 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method)
{
	typedef double (*Math_Acos_m21260_ftn) (double);
	static Math_Acos_m21260_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Acos_m21260_ftn)il2cpp_codegen_resolve_icall ("System.Math::Acos(System.Double)");
	return _il2cpp_icall_func(___d);
}
// System.Double System.Math::Asin(System.Double)
extern "C" double Math_Asin_m21261 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method)
{
	typedef double (*Math_Asin_m21261_ftn) (double);
	static Math_Asin_m21261_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Asin_m21261_ftn)il2cpp_codegen_resolve_icall ("System.Math::Asin(System.Double)");
	return _il2cpp_icall_func(___d);
}
// System.Double System.Math::Atan(System.Double)
extern "C" double Math_Atan_m21262 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method)
{
	typedef double (*Math_Atan_m21262_ftn) (double);
	static Math_Atan_m21262_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Atan_m21262_ftn)il2cpp_codegen_resolve_icall ("System.Math::Atan(System.Double)");
	return _il2cpp_icall_func(___d);
}
// System.Double System.Math::Atan2(System.Double,System.Double)
extern "C" double Math_Atan2_m21263 (Object_t * __this /* static, unused */, double ___y, double ___x, const MethodInfo* method)
{
	typedef double (*Math_Atan2_m21263_ftn) (double, double);
	static Math_Atan2_m21263_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Atan2_m21263_ftn)il2cpp_codegen_resolve_icall ("System.Math::Atan2(System.Double,System.Double)");
	return _il2cpp_icall_func(___y, ___x);
}
// System.Double System.Math::Exp(System.Double)
extern "C" double Math_Exp_m21264 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method)
{
	typedef double (*Math_Exp_m21264_ftn) (double);
	static Math_Exp_m21264_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Exp_m21264_ftn)il2cpp_codegen_resolve_icall ("System.Math::Exp(System.Double)");
	return _il2cpp_icall_func(___d);
}
// System.Double System.Math::Log(System.Double)
extern "C" double Math_Log_m21265 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method)
{
	typedef double (*Math_Log_m21265_ftn) (double);
	static Math_Log_m21265_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Log_m21265_ftn)il2cpp_codegen_resolve_icall ("System.Math::Log(System.Double)");
	return _il2cpp_icall_func(___d);
}
// System.Double System.Math::Log10(System.Double)
extern "C" double Math_Log10_m21266 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method)
{
	typedef double (*Math_Log10_m21266_ftn) (double);
	static Math_Log10_m21266_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Log10_m21266_ftn)il2cpp_codegen_resolve_icall ("System.Math::Log10(System.Double)");
	return _il2cpp_icall_func(___d);
}
// System.Double System.Math::Pow(System.Double,System.Double)
extern "C" double Math_Pow_m21267 (Object_t * __this /* static, unused */, double ___x, double ___y, const MethodInfo* method)
{
	typedef double (*Math_Pow_m21267_ftn) (double, double);
	static Math_Pow_m21267_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Pow_m21267_ftn)il2cpp_codegen_resolve_icall ("System.Math::Pow(System.Double,System.Double)");
	return _il2cpp_icall_func(___x, ___y);
}
// System.Double System.Math::Sqrt(System.Double)
extern "C" double Math_Sqrt_m21268 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method)
{
	typedef double (*Math_Sqrt_m21268_ftn) (double);
	static Math_Sqrt_m21268_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Math_Sqrt_m21268_ftn)il2cpp_codegen_resolve_icall ("System.Math::Sqrt(System.Double)");
	return _il2cpp_icall_func(___d);
}
// System.MemberAccessException
#include "mscorlib_System_MemberAccessException.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.MemberAccessException::.ctor()
extern "C" void MemberAccessException__ctor_m21269 (MemberAccessException_t4303 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5558, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233062), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MemberAccessException::.ctor(System.String)
extern "C" void MemberAccessException__ctor_m21270 (MemberAccessException_t4303 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233062), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MemberAccessException__ctor_m21271 (MemberAccessException_t4303 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.MethodAccessException
#include "mscorlib_System_MethodAccessException.h"
#ifndef _MSC_VER
#else
#endif
// System.MethodAccessException
#include "mscorlib_System_MethodAccessExceptionMethodDeclarations.h"



// System.Void System.MethodAccessException::.ctor()
extern "C" void MethodAccessException__ctor_m21272 (MethodAccessException_t4308 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5559, /*hidden argument*/NULL);
		MemberAccessException__ctor_m21270(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233072), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MethodAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MethodAccessException__ctor_m21273 (MethodAccessException_t4308 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		MemberAccessException__ctor_m21271(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.MissingFieldException
#include "mscorlib_System_MissingFieldException.h"
#ifndef _MSC_VER
#else
#endif
// System.MissingFieldException
#include "mscorlib_System_MissingFieldExceptionMethodDeclarations.h"

// System.MissingMemberException
#include "mscorlib_System_MissingMemberException.h"
// System.MissingMemberException
#include "mscorlib_System_MissingMemberExceptionMethodDeclarations.h"


// System.Void System.MissingFieldException::.ctor()
extern "C" void MissingFieldException__ctor_m21274 (MissingFieldException_t4309 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5561, /*hidden argument*/NULL);
		MissingMemberException__ctor_m21279(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233071), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MissingFieldException::.ctor(System.String)
extern "C" void MissingFieldException__ctor_m21275 (MissingFieldException_t4309 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		MissingMemberException__ctor_m21279(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233071), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MissingFieldException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingFieldException__ctor_m21276 (MissingFieldException_t4309 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		MissingMemberException__ctor_m21280(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.MissingFieldException::get_Message()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MissingFieldException_get_Message_m21277 (MissingFieldException_t4309 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = (((MissingMemberException_t4310 *)__this)->___ClassName_11);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = MissingMemberException_get_Message_m21283(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5560, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		String_t* L_4 = (((MissingMemberException_t4310 *)__this)->___ClassName_11);
		String_t* L_5 = (((MissingMemberException_t4310 *)__this)->___MemberName_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m98(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.MissingMemberException::.ctor()
extern "C" void MissingMemberException__ctor_m21278 (MissingMemberException_t4310 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5563, /*hidden argument*/NULL);
		MemberAccessException__ctor_m21270(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233070), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MissingMemberException::.ctor(System.String)
extern "C" void MissingMemberException__ctor_m21279 (MissingMemberException_t4310 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		MemberAccessException__ctor_m21270(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233070), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* ByteU5BU5D_t25_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t25_il2cpp_TypeInfo_var;
extern "C" void MissingMemberException__ctor_m21280 (MissingMemberException_t4310 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t25_0_0_0_var = il2cpp_codegen_type_from_index(72);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		ByteU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		MemberAccessException__ctor_m21271(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_2 = ___info;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m11565(L_2, (String_t*) &_stringLiteral5564, /*hidden argument*/NULL);
		__this->___ClassName_11 = L_3;
		SerializationInfo_t1322 * L_4 = ___info;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m11565(L_4, (String_t*) &_stringLiteral5565, /*hidden argument*/NULL);
		__this->___MemberName_12 = L_5;
		SerializationInfo_t1322 * L_6 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(ByteU5BU5D_t25_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		Object_t * L_8 = SerializationInfo_GetValue_m11566(L_6, (String_t*) &_stringLiteral5566, L_7, /*hidden argument*/NULL);
		__this->___Signature_13 = ((ByteU5BU5D_t25*)Castclass(L_8, ByteU5BU5D_t25_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void System.MissingMemberException::.ctor(System.String,System.String)
extern "C" void MissingMemberException__ctor_m21281 (MissingMemberException_t4310 * __this, String_t* ___className, String_t* ___memberName, const MethodInfo* method)
{
	{
		MemberAccessException__ctor_m21269(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___className;
		__this->___ClassName_11 = L_0;
		String_t* L_1 = ___memberName;
		__this->___MemberName_12 = L_1;
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233070), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MissingMemberException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingMemberException_GetObjectData_m21282 (MissingMemberException_t4310 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		Exception_GetObjectData_m6785(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_2 = ___info;
		String_t* L_3 = (__this->___ClassName_11);
		NullCheck(L_2);
		SerializationInfo_AddValue_m6629(L_2, (String_t*) &_stringLiteral5564, L_3, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_4 = ___info;
		String_t* L_5 = (__this->___MemberName_12);
		NullCheck(L_4);
		SerializationInfo_AddValue_m6629(L_4, (String_t*) &_stringLiteral5565, L_5, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_6 = ___info;
		ByteU5BU5D_t25* L_7 = (__this->___Signature_13);
		NullCheck(L_6);
		SerializationInfo_AddValue_m6629(L_6, (String_t*) &_stringLiteral5566, (Object_t *)(Object_t *)L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.MissingMemberException::get_Message()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MissingMemberException_get_Message_m21283 (MissingMemberException_t4310 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = (__this->___ClassName_11);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = Exception_get_Message_m6787(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5562, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		String_t* L_4 = (__this->___ClassName_11);
		String_t* L_5 = (__this->___MemberName_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m98(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.MissingMethodException
#include "mscorlib_System_MissingMethodException.h"
#ifndef _MSC_VER
#else
#endif
// System.MissingMethodException
#include "mscorlib_System_MissingMethodExceptionMethodDeclarations.h"



// System.Void System.MissingMethodException::.ctor()
extern "C" void MissingMethodException__ctor_m21284 (MissingMethodException_t4311 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5568, /*hidden argument*/NULL);
		MissingMemberException__ctor_m21279(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233069), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MissingMethodException::.ctor(System.String)
extern "C" void MissingMethodException__ctor_m21285 (MissingMethodException_t4311 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		MissingMemberException__ctor_m21279(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233069), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MissingMethodException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingMethodException__ctor_m21286 (MissingMethodException_t4311 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		MissingMemberException__ctor_m21280(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MissingMethodException::.ctor(System.String,System.String)
extern "C" void MissingMethodException__ctor_m21287 (MissingMethodException_t4311 * __this, String_t* ___className, String_t* ___methodName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___className;
		String_t* L_1 = ___methodName;
		MissingMemberException__ctor_m21281(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233069), /*hidden argument*/NULL);
		return;
	}
}
// System.String System.MissingMethodException::get_Message()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MissingMethodException_get_Message_m21288 (MissingMethodException_t4311 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = (((MissingMemberException_t4310 *)__this)->___ClassName_11);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = MissingMemberException_get_Message_m21283(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5567, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		String_t* L_4 = (((MissingMemberException_t4310 *)__this)->___ClassName_11);
		String_t* L_5 = (((MissingMemberException_t4310 *)__this)->___MemberName_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m98(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.MonoAsyncCall
#include "mscorlib_System_MonoAsyncCall.h"
#ifndef _MSC_VER
#else
#endif
// System.MonoAsyncCall
#include "mscorlib_System_MonoAsyncCallMethodDeclarations.h"



// System.Void System.MonoAsyncCall::.ctor()
extern "C" void MonoAsyncCall__ctor_m21289 (MonoAsyncCall_t4312 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.MonoCustomAttrs/AttributeInfo
#include "mscorlib_System_MonoCustomAttrs_AttributeInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.MonoCustomAttrs/AttributeInfo
#include "mscorlib_System_MonoCustomAttrs_AttributeInfoMethodDeclarations.h"

// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"


// System.Void System.MonoCustomAttrs/AttributeInfo::.ctor(System.AttributeUsageAttribute,System.Int32)
extern "C" void AttributeInfo__ctor_m21290 (AttributeInfo_t4313 * __this, AttributeUsageAttribute_t1708 * ___usage, int32_t ___inheritanceLevel, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		AttributeUsageAttribute_t1708 * L_0 = ___usage;
		__this->____usage_0 = L_0;
		int32_t L_1 = ___inheritanceLevel;
		__this->____inheritanceLevel_1 = L_1;
		return;
	}
}
// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::get_Usage()
extern "C" AttributeUsageAttribute_t1708 * AttributeInfo_get_Usage_m21291 (AttributeInfo_t4313 * __this, const MethodInfo* method)
{
	{
		AttributeUsageAttribute_t1708 * L_0 = (__this->____usage_0);
		return L_0;
	}
}
// System.Int32 System.MonoCustomAttrs/AttributeInfo::get_InheritanceLevel()
extern "C" int32_t AttributeInfo_get_InheritanceLevel_m21292 (AttributeInfo_t4313 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____inheritanceLevel_1);
		return L_0;
	}
}
// System.MonoCustomAttrs
#include "mscorlib_System_MonoCustomAttrs.h"
#ifndef _MSC_VER
#else
#endif
// System.MonoCustomAttrs
#include "mscorlib_System_MonoCustomAttrsMethodDeclarations.h"

// System.AttributeTargets
#include "mscorlib_System_AttributeTargets.h"
// System.MonoType
#include "mscorlib_System_MonoType.h"
// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilder.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Reflection.AmbiguousMatchException
#include "mscorlib_System_Reflection_AmbiguousMatchException.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoProperty.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Reflection.AmbiguousMatchException
#include "mscorlib_System_Reflection_AmbiguousMatchExceptionMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"


// System.Void System.MonoCustomAttrs::.cctor()
extern const Il2CppType* AttributeUsageAttribute_t1708_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* MonoCustomAttrs_t4314_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
extern "C" void MonoCustomAttrs__cctor_m21293 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_0_0_0_var = il2cpp_codegen_type_from_index(3296);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		MonoCustomAttrs_t4314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8148);
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(AttributeUsageAttribute_t1708_0_0_0_var), /*hidden argument*/NULL);
		((MonoCustomAttrs_t4314_StaticFields*)MonoCustomAttrs_t4314_il2cpp_TypeInfo_var->static_fields)->___AttributeUsageType_1 = L_0;
		AttributeUsageAttribute_t1708 * L_1 = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(L_1, ((int32_t)32767), /*hidden argument*/NULL);
		((MonoCustomAttrs_t4314_StaticFields*)MonoCustomAttrs_t4314_il2cpp_TypeInfo_var->static_fields)->___DefaultAttributeUsage_2 = L_1;
		return;
	}
}
// System.Boolean System.MonoCustomAttrs::IsUserCattrProvider(System.Object)
extern const Il2CppType* Int32_t29_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* MonoType_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeBuilder_t3996_il2cpp_TypeInfo_var;
extern TypeInfo* MonoCustomAttrs_t4314_il2cpp_TypeInfo_var;
extern "C" bool MonoCustomAttrs_IsUserCattrProvider_m21294 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_0_0_0_var = il2cpp_codegen_type_from_index(14);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		MonoType_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8177);
		TypeBuilder_t3996_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8178);
		MonoCustomAttrs_t4314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8148);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Type_t *)IsInst(L_0, Type_t_il2cpp_TypeInfo_var));
		Type_t * L_1 = V_0;
		if (((MonoType_t *)IsInst(L_1, MonoType_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		Type_t * L_2 = V_0;
		if (!((TypeBuilder_t3996 *)IsInst(L_2, TypeBuilder_t3996_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		Object_t * L_3 = ___obj;
		if (!((Type_t *)IsInst(L_3, Type_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		return 1;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		Assembly_t1601 * L_4 = ((MonoCustomAttrs_t4314_StaticFields*)MonoCustomAttrs_t4314_il2cpp_TypeInfo_var->static_fields)->___corlib_0;
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(Int32_t29_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		Assembly_t1601 * L_6 = (Assembly_t1601 *)VirtFuncInvoker0< Assembly_t1601 * >::Invoke(15 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		((MonoCustomAttrs_t4314_StaticFields*)MonoCustomAttrs_t4314_il2cpp_TypeInfo_var->static_fields)->___corlib_0 = L_6;
	}

IL_003e:
	{
		Object_t * L_7 = ___obj;
		NullCheck(L_7);
		Type_t * L_8 = Object_GetType_m2871(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Assembly_t1601 * L_9 = (Assembly_t1601 *)VirtFuncInvoker0< Assembly_t1601 * >::Invoke(15 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		Assembly_t1601 * L_10 = ((MonoCustomAttrs_t4314_StaticFields*)MonoCustomAttrs_t4314_il2cpp_TypeInfo_var->static_fields)->___corlib_0;
		return ((((int32_t)((((Object_t*)(Assembly_t1601 *)L_9) == ((Object_t*)(Assembly_t1601 *)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t21* MonoCustomAttrs_GetCustomAttributesInternal_m21295 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___pseudoAttrs, const MethodInfo* method)
{
	typedef ObjectU5BU5D_t21* (*MonoCustomAttrs_GetCustomAttributesInternal_m21295_ftn) (Object_t *, Type_t *, bool);
	static MonoCustomAttrs_GetCustomAttributesInternal_m21295_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoCustomAttrs_GetCustomAttributesInternal_m21295_ftn)il2cpp_codegen_resolve_icall ("System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)");
	return _il2cpp_icall_func(___obj, ___attributeType, ___pseudoAttrs);
}
// System.Object[] System.MonoCustomAttrs::GetPseudoCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type)
extern TypeInfo* MonoMethod_t_il2cpp_TypeInfo_var;
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterInfo_t676_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t21* MonoCustomAttrs_GetPseudoCustomAttributes_m21296 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoMethod_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8508);
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4672);
		ParameterInfo_t676_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1283);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = (ObjectU5BU5D_t21*)NULL;
		Object_t * L_0 = ___obj;
		if (!((MonoMethod_t *)IsInst(L_0, MonoMethod_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_1 = ___obj;
		NullCheck(((MonoMethod_t *)Castclass(L_1, MonoMethod_t_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t21* L_2 = MonoMethod_GetPseudoCustomAttributes_m19514(((MonoMethod_t *)Castclass(L_1, MonoMethod_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0058;
	}

IL_0018:
	{
		Object_t * L_3 = ___obj;
		if (!((FieldInfo_t *)IsInst(L_3, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		Object_t * L_4 = ___obj;
		NullCheck(((FieldInfo_t *)Castclass(L_4, FieldInfo_t_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t21* L_5 = FieldInfo_GetPseudoCustomAttributes_m19409(((FieldInfo_t *)Castclass(L_4, FieldInfo_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0058;
	}

IL_002e:
	{
		Object_t * L_6 = ___obj;
		if (!((ParameterInfo_t676 *)IsInst(L_6, ParameterInfo_t676_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}
	{
		Object_t * L_7 = ___obj;
		NullCheck(((ParameterInfo_t676 *)Castclass(L_7, ParameterInfo_t676_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t21* L_8 = ParameterInfo_GetPseudoCustomAttributes_m19588(((ParameterInfo_t676 *)Castclass(L_7, ParameterInfo_t676_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0058;
	}

IL_0044:
	{
		Object_t * L_9 = ___obj;
		if (!((Type_t *)IsInst(L_9, Type_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		Object_t * L_10 = ___obj;
		NullCheck(((Type_t *)Castclass(L_10, Type_t_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t21* L_11 = Type_GetPseudoCustomAttributes_m17787(((Type_t *)Castclass(L_10, Type_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0058:
	{
		Type_t * L_12 = ___attributeType;
		if (!L_12)
		{
			goto IL_0098;
		}
	}
	{
		ObjectU5BU5D_t21* L_13 = V_0;
		if (!L_13)
		{
			goto IL_0098;
		}
	}
	{
		V_1 = 0;
		goto IL_008b;
	}

IL_0062:
	{
		Type_t * L_14 = ___attributeType;
		ObjectU5BU5D_t21* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)));
		Type_t * L_18 = Object_GetType_m2871((*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_19 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_14, L_18);
		if (!L_19)
		{
			goto IL_0087;
		}
	}
	{
		ObjectU5BU5D_t21* L_20 = V_0;
		NullCheck(L_20);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_20)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		ObjectU5BU5D_t21* L_21 = V_0;
		return L_21;
	}

IL_007a:
	{
		ObjectU5BU5D_t21* L_22 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t21* L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 0);
		ArrayElementTypeCheck (L_22, (*(Object_t **)(Object_t **)SZArrayLdElema(L_23, L_25)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_22, 0)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_23, L_25));
		return L_22;
	}

IL_0087:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_008b:
	{
		int32_t L_27 = V_1;
		ObjectU5BU5D_t21* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((Array_t *)L_28)->max_length))))))
		{
			goto IL_0062;
		}
	}
	{
		return ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 0));
	}

IL_0098:
	{
		ObjectU5BU5D_t21* L_29 = V_0;
		return L_29;
	}
}
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesBase(System.Reflection.ICustomAttributeProvider,System.Type)
extern TypeInfo* MonoCustomAttrs_t4314_il2cpp_TypeInfo_var;
extern TypeInfo* ICustomAttributeProvider_t2536_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t21* MonoCustomAttrs_GetCustomAttributesBase_m21297 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8148);
		ICustomAttributeProvider_t2536_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	ObjectU5BU5D_t21* V_1 = {0};
	ObjectU5BU5D_t21* V_2 = {0};
	{
		Object_t * L_0 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		bool L_1 = MonoCustomAttrs_IsUserCattrProvider_m21294(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Type_t * L_3 = ___attributeType;
		NullCheck(L_2);
		ObjectU5BU5D_t21* L_4 = (ObjectU5BU5D_t21*)InterfaceFuncInvoker2< ObjectU5BU5D_t21*, Type_t *, bool >::Invoke(1 /* System.Object[] System.Reflection.ICustomAttributeProvider::GetCustomAttributes(System.Type,System.Boolean) */, ICustomAttributeProvider_t2536_il2cpp_TypeInfo_var, L_2, L_3, 1);
		V_0 = L_4;
		goto IL_001c;
	}

IL_0013:
	{
		Object_t * L_5 = ___obj;
		Type_t * L_6 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t21* L_7 = MonoCustomAttrs_GetCustomAttributesInternal_m21295(NULL /*static, unused*/, L_5, L_6, 0, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_001c:
	{
		Object_t * L_8 = ___obj;
		Type_t * L_9 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t21* L_10 = MonoCustomAttrs_GetPseudoCustomAttributes_m21296(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		ObjectU5BU5D_t21* L_11 = V_1;
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		ObjectU5BU5D_t21* L_12 = V_0;
		NullCheck(L_12);
		ObjectU5BU5D_t21* L_13 = V_1;
		NullCheck(L_13);
		V_2 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_12)->max_length)))+(int32_t)(((int32_t)(((Array_t *)L_13)->max_length)))))));
		ObjectU5BU5D_t21* L_14 = V_0;
		ObjectU5BU5D_t21* L_15 = V_2;
		ObjectU5BU5D_t21* L_16 = V_0;
		NullCheck(L_16);
		Array_Copy_m11497(NULL /*static, unused*/, (Array_t *)(Array_t *)L_14, (Array_t *)(Array_t *)L_15, (((int32_t)(((Array_t *)L_16)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_17 = V_1;
		ObjectU5BU5D_t21* L_18 = V_2;
		ObjectU5BU5D_t21* L_19 = V_0;
		NullCheck(L_19);
		ObjectU5BU5D_t21* L_20 = V_1;
		NullCheck(L_20);
		Array_Copy_m11573(NULL /*static, unused*/, (Array_t *)(Array_t *)L_17, 0, (Array_t *)(Array_t *)L_18, (((int32_t)(((Array_t *)L_19)->max_length))), (((int32_t)(((Array_t *)L_20)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t21* L_21 = V_2;
		return L_21;
	}

IL_004e:
	{
		ObjectU5BU5D_t21* L_22 = V_0;
		return L_22;
	}
}
// System.Attribute System.MonoCustomAttrs::GetCustomAttribute(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4314_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* AmbiguousMatchException_t4014_il2cpp_TypeInfo_var;
extern TypeInfo* Attribute_t471_il2cpp_TypeInfo_var;
extern "C" Attribute_t471 * MonoCustomAttrs_GetCustomAttribute_m21298 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8148);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		AmbiguousMatchException_t4014_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8290);
		Attribute_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1414);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___obj;
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t21* L_3 = MonoCustomAttrs_GetCustomAttributes_m21299(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		ObjectU5BU5D_t21* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((Array_t *)L_4)->max_length))))
		{
			goto IL_0010;
		}
	}
	{
		return (Attribute_t471 *)NULL;
	}

IL_0010:
	{
		ObjectU5BU5D_t21* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		V_1 = (String_t*) &_stringLiteral5569;
		String_t* L_6 = V_1;
		Object_t * L_7 = ___obj;
		Type_t * L_8 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m98(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		String_t* L_10 = V_1;
		AmbiguousMatchException_t4014 * L_11 = (AmbiguousMatchException_t4014 *)il2cpp_codegen_object_new (AmbiguousMatchException_t4014_il2cpp_TypeInfo_var);
		AmbiguousMatchException__ctor_m19327(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_002c:
	{
		ObjectU5BU5D_t21* L_12 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		int32_t L_13 = 0;
		return ((Attribute_t471 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_13)), Attribute_t471_il2cpp_TypeInfo_var));
	}
}
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern const Il2CppType* MonoCustomAttrs_t4314_0_0_0_var;
extern const Il2CppType* Attribute_t471_0_0_0_var;
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* MonoCustomAttrs_t4314_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t1256_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t1188_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeInfo_t4313_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t21* MonoCustomAttrs_GetCustomAttributes_m21299 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4314_0_0_0_var = il2cpp_codegen_type_from_index(8148);
		Attribute_t471_0_0_0_var = il2cpp_codegen_type_from_index(1414);
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		MonoCustomAttrs_t4314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8148);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Hashtable_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2705);
		ArrayList_t1188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2623);
		AttributeInfo_t4313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8509);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	ObjectU5BU5D_t21* V_1 = {0};
	AttributeUsageAttribute_t1708 * V_2 = {0};
	int32_t V_3 = 0;
	Hashtable_t1256 * V_4 = {0};
	ArrayList_t1188 * V_5 = {0};
	Object_t * V_6 = {0};
	int32_t V_7 = 0;
	Object_t * V_8 = {0};
	ObjectU5BU5D_t21* V_9 = {0};
	int32_t V_10 = 0;
	AttributeUsageAttribute_t1708 * V_11 = {0};
	Type_t * V_12 = {0};
	AttributeInfo_t4313 * V_13 = {0};
	ObjectU5BU5D_t21* V_14 = {0};
	int32_t G_B23_0 = 0;
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral4558, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Type_t * L_2 = ___attributeType;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*) &_stringLiteral4250, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		Type_t * L_4 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(MonoCustomAttrs_t4314_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5))))
		{
			goto IL_002e;
		}
	}
	{
		___attributeType = (Type_t *)NULL;
	}

IL_002e:
	{
		Object_t * L_6 = ___obj;
		Type_t * L_7 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t21* L_8 = MonoCustomAttrs_GetCustomAttributesBase_m21297(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		bool L_9 = ___inherit;
		if (L_9)
		{
			goto IL_0092;
		}
	}
	{
		ObjectU5BU5D_t21* L_10 = V_1;
		NullCheck(L_10);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_10)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0092;
		}
	}
	{
		Type_t * L_11 = ___attributeType;
		if (!L_11)
		{
			goto IL_0076;
		}
	}
	{
		Type_t * L_12 = ___attributeType;
		ObjectU5BU5D_t21* L_13 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		int32_t L_14 = 0;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)));
		Type_t * L_15 = Object_GetType_m2871((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)), /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_16 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_12, L_15);
		if (!L_16)
		{
			goto IL_0067;
		}
	}
	{
		Type_t * L_17 = ___attributeType;
		Array_t * L_18 = Array_CreateInstance_m11496(NULL /*static, unused*/, L_17, 1, /*hidden argument*/NULL);
		V_0 = ((ObjectU5BU5D_t21*)Castclass(L_18, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_19 = V_0;
		ObjectU5BU5D_t21* L_20 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		int32_t L_21 = 0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		ArrayElementTypeCheck (L_19, (*(Object_t **)(Object_t **)SZArrayLdElema(L_20, L_21)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 0)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_20, L_21));
		goto IL_0074;
	}

IL_0067:
	{
		Type_t * L_22 = ___attributeType;
		Array_t * L_23 = Array_CreateInstance_m11496(NULL /*static, unused*/, L_22, 0, /*hidden argument*/NULL);
		V_0 = ((ObjectU5BU5D_t21*)Castclass(L_23, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
	}

IL_0074:
	{
		goto IL_0090;
	}

IL_0076:
	{
		ObjectU5BU5D_t21* L_24 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		int32_t L_25 = 0;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_24, L_25)));
		Type_t * L_26 = Object_GetType_m2871((*(Object_t **)(Object_t **)SZArrayLdElema(L_24, L_25)), /*hidden argument*/NULL);
		Array_t * L_27 = Array_CreateInstance_m11496(NULL /*static, unused*/, L_26, 1, /*hidden argument*/NULL);
		V_0 = ((ObjectU5BU5D_t21*)Castclass(L_27, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t21* L_28 = V_0;
		ObjectU5BU5D_t21* L_29 = V_1;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 0);
		int32_t L_30 = 0;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 0);
		ArrayElementTypeCheck (L_28, (*(Object_t **)(Object_t **)SZArrayLdElema(L_29, L_30)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 0)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_29, L_30));
	}

IL_0090:
	{
		ObjectU5BU5D_t21* L_31 = V_0;
		return L_31;
	}

IL_0092:
	{
		Type_t * L_32 = ___attributeType;
		if (!L_32)
		{
			goto IL_00b4;
		}
	}
	{
		Type_t * L_33 = ___attributeType;
		NullCheck(L_33);
		bool L_34 = (bool)VirtFuncInvoker0< bool >::Invoke(34 /* System.Boolean System.Type::get_IsSealed() */, L_33);
		if (!L_34)
		{
			goto IL_00b4;
		}
	}
	{
		bool L_35 = ___inherit;
		if (!L_35)
		{
			goto IL_00b4;
		}
	}
	{
		Type_t * L_36 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		AttributeUsageAttribute_t1708 * L_37 = MonoCustomAttrs_RetrieveAttributeUsage_m21305(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		AttributeUsageAttribute_t1708 * L_38 = V_2;
		NullCheck(L_38);
		bool L_39 = AttributeUsageAttribute_get_Inherited_m17101(L_38, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_00b4;
		}
	}
	{
		___inherit = 0;
	}

IL_00b4:
	{
		ObjectU5BU5D_t21* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)(((int32_t)(((Array_t *)L_40)->max_length)))) >= ((int32_t)((int32_t)16))))
		{
			goto IL_00c0;
		}
	}
	{
		ObjectU5BU5D_t21* L_41 = V_1;
		NullCheck(L_41);
		G_B23_0 = (((int32_t)(((Array_t *)L_41)->max_length)));
		goto IL_00c2;
	}

IL_00c0:
	{
		G_B23_0 = ((int32_t)16);
	}

IL_00c2:
	{
		V_3 = G_B23_0;
		int32_t L_42 = V_3;
		Hashtable_t1256 * L_43 = (Hashtable_t1256 *)il2cpp_codegen_object_new (Hashtable_t1256_il2cpp_TypeInfo_var);
		Hashtable__ctor_m16857(L_43, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
		int32_t L_44 = V_3;
		ArrayList_t1188 * L_45 = (ArrayList_t1188 *)il2cpp_codegen_object_new (ArrayList_t1188_il2cpp_TypeInfo_var);
		ArrayList__ctor_m16829(L_45, L_44, /*hidden argument*/NULL);
		V_5 = L_45;
		Object_t * L_46 = ___obj;
		V_6 = L_46;
		V_7 = 0;
	}

IL_00d9:
	{
		ObjectU5BU5D_t21* L_47 = V_1;
		V_9 = L_47;
		V_10 = 0;
		goto IL_017d;
	}

IL_00e4:
	{
		ObjectU5BU5D_t21* L_48 = V_9;
		int32_t L_49 = V_10;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		int32_t L_50 = L_49;
		V_8 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_48, L_50));
		Object_t * L_51 = V_8;
		NullCheck(L_51);
		Type_t * L_52 = Object_GetType_m2871(L_51, /*hidden argument*/NULL);
		V_12 = L_52;
		Type_t * L_53 = ___attributeType;
		if (!L_53)
		{
			goto IL_0106;
		}
	}
	{
		Type_t * L_54 = ___attributeType;
		Type_t * L_55 = V_12;
		NullCheck(L_54);
		bool L_56 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_54, L_55);
		if (L_56)
		{
			goto IL_0106;
		}
	}
	{
		goto IL_0177;
	}

IL_0106:
	{
		Hashtable_t1256 * L_57 = V_4;
		Type_t * L_58 = V_12;
		NullCheck(L_57);
		Object_t * L_59 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_57, L_58);
		V_13 = ((AttributeInfo_t4313 *)Castclass(L_59, AttributeInfo_t4313_il2cpp_TypeInfo_var));
		AttributeInfo_t4313 * L_60 = V_13;
		if (!L_60)
		{
			goto IL_0125;
		}
	}
	{
		AttributeInfo_t4313 * L_61 = V_13;
		NullCheck(L_61);
		AttributeUsageAttribute_t1708 * L_62 = AttributeInfo_get_Usage_m21291(L_61, /*hidden argument*/NULL);
		V_11 = L_62;
		goto IL_012e;
	}

IL_0125:
	{
		Type_t * L_63 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		AttributeUsageAttribute_t1708 * L_64 = MonoCustomAttrs_RetrieveAttributeUsage_m21305(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
		V_11 = L_64;
	}

IL_012e:
	{
		int32_t L_65 = V_7;
		if (!L_65)
		{
			goto IL_013b;
		}
	}
	{
		AttributeUsageAttribute_t1708 * L_66 = V_11;
		NullCheck(L_66);
		bool L_67 = AttributeUsageAttribute_get_Inherited_m17101(L_66, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_0161;
		}
	}

IL_013b:
	{
		AttributeUsageAttribute_t1708 * L_68 = V_11;
		NullCheck(L_68);
		bool L_69 = AttributeUsageAttribute_get_AllowMultiple_m17100(L_68, /*hidden argument*/NULL);
		if (L_69)
		{
			goto IL_0157;
		}
	}
	{
		AttributeInfo_t4313 * L_70 = V_13;
		if (!L_70)
		{
			goto IL_0157;
		}
	}
	{
		AttributeInfo_t4313 * L_71 = V_13;
		if (!L_71)
		{
			goto IL_0161;
		}
	}
	{
		AttributeInfo_t4313 * L_72 = V_13;
		NullCheck(L_72);
		int32_t L_73 = AttributeInfo_get_InheritanceLevel_m21292(L_72, /*hidden argument*/NULL);
		int32_t L_74 = V_7;
		if ((!(((uint32_t)L_73) == ((uint32_t)L_74))))
		{
			goto IL_0161;
		}
	}

IL_0157:
	{
		ArrayList_t1188 * L_75 = V_5;
		Object_t * L_76 = V_8;
		NullCheck(L_75);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_75, L_76);
	}

IL_0161:
	{
		AttributeInfo_t4313 * L_77 = V_13;
		if (L_77)
		{
			goto IL_0177;
		}
	}
	{
		Hashtable_t1256 * L_78 = V_4;
		Type_t * L_79 = V_12;
		AttributeUsageAttribute_t1708 * L_80 = V_11;
		int32_t L_81 = V_7;
		AttributeInfo_t4313 * L_82 = (AttributeInfo_t4313 *)il2cpp_codegen_object_new (AttributeInfo_t4313_il2cpp_TypeInfo_var);
		AttributeInfo__ctor_m21290(L_82, L_80, L_81, /*hidden argument*/NULL);
		NullCheck(L_78);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(26 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_78, L_79, L_82);
	}

IL_0177:
	{
		int32_t L_83 = V_10;
		V_10 = ((int32_t)((int32_t)L_83+(int32_t)1));
	}

IL_017d:
	{
		int32_t L_84 = V_10;
		ObjectU5BU5D_t21* L_85 = V_9;
		NullCheck(L_85);
		if ((((int32_t)L_84) < ((int32_t)(((int32_t)(((Array_t *)L_85)->max_length))))))
		{
			goto IL_00e4;
		}
	}
	{
		Object_t * L_86 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		Object_t * L_87 = MonoCustomAttrs_GetBase_m21304(NULL /*static, unused*/, L_86, /*hidden argument*/NULL);
		Object_t * L_88 = L_87;
		V_6 = L_88;
		if (!L_88)
		{
			goto IL_01a3;
		}
	}
	{
		int32_t L_89 = V_7;
		V_7 = ((int32_t)((int32_t)L_89+(int32_t)1));
		Object_t * L_90 = V_6;
		Type_t * L_91 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t21* L_92 = MonoCustomAttrs_GetCustomAttributesBase_m21297(NULL /*static, unused*/, L_90, L_91, /*hidden argument*/NULL);
		V_1 = L_92;
	}

IL_01a3:
	{
		bool L_93 = ___inherit;
		if (!L_93)
		{
			goto IL_01ad;
		}
	}
	{
		Object_t * L_94 = V_6;
		if (L_94)
		{
			goto IL_00d9;
		}
	}

IL_01ad:
	{
		V_14 = (ObjectU5BU5D_t21*)NULL;
		Type_t * L_95 = ___attributeType;
		if (!L_95)
		{
			goto IL_01bb;
		}
	}
	{
		Type_t * L_96 = ___attributeType;
		NullCheck(L_96);
		bool L_97 = (bool)VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Type::get_IsValueType() */, L_96);
		if (!L_97)
		{
			goto IL_01da;
		}
	}

IL_01bb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_98 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(Attribute_t471_0_0_0_var), /*hidden argument*/NULL);
		ArrayList_t1188 * L_99 = V_5;
		NullCheck(L_99);
		int32_t L_100 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_99);
		Array_t * L_101 = Array_CreateInstance_m11496(NULL /*static, unused*/, L_98, L_100, /*hidden argument*/NULL);
		V_14 = ((ObjectU5BU5D_t21*)Castclass(L_101, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		goto IL_01ee;
	}

IL_01da:
	{
		Type_t * L_102 = ___attributeType;
		ArrayList_t1188 * L_103 = V_5;
		NullCheck(L_103);
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_103);
		Array_t * L_105 = Array_CreateInstance_m11496(NULL /*static, unused*/, L_102, L_104, /*hidden argument*/NULL);
		V_14 = ((ObjectU5BU5D_t21*)IsInst(L_105, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
	}

IL_01ee:
	{
		ArrayList_t1188 * L_106 = V_5;
		ObjectU5BU5D_t21* L_107 = V_14;
		NullCheck(L_106);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(38 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_106, (Array_t *)(Array_t *)L_107, 0);
		ObjectU5BU5D_t21* L_108 = V_14;
		return L_108;
	}
}
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Boolean)
extern const Il2CppType* MonoCustomAttrs_t4314_0_0_0_var;
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* MonoCustomAttrs_t4314_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t21* MonoCustomAttrs_GetCustomAttributes_m21300 (Object_t * __this /* static, unused */, Object_t * ___obj, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4314_0_0_0_var = il2cpp_codegen_type_from_index(8148);
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		MonoCustomAttrs_t4314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8148);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral4558, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = ___inherit;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t21* L_4 = MonoCustomAttrs_GetCustomAttributesBase_m21297(NULL /*static, unused*/, L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(20 /* System.Object System.Array::Clone() */, L_4);
		return ((ObjectU5BU5D_t21*)Castclass(L_5, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
	}

IL_0023:
	{
		Object_t * L_6 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(MonoCustomAttrs_t4314_0_0_0_var), /*hidden argument*/NULL);
		bool L_8 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t21* L_9 = MonoCustomAttrs_GetCustomAttributes_m21299(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean System.MonoCustomAttrs::IsDefined(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* MonoCustomAttrs_t4314_il2cpp_TypeInfo_var;
extern TypeInfo* ICustomAttributeProvider_t2536_il2cpp_TypeInfo_var;
extern "C" bool MonoCustomAttrs_IsDefined_m21301 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		MonoCustomAttrs_t4314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8148);
		ICustomAttributeProvider_t2536_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4647);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		Type_t * L_0 = ___attributeType;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral4250, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		bool L_3 = MonoCustomAttrs_IsUserCattrProvider_m21294(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Object_t * L_4 = ___obj;
		Type_t * L_5 = ___attributeType;
		bool L_6 = ___inherit;
		NullCheck(L_4);
		bool L_7 = (bool)InterfaceFuncInvoker2< bool, Type_t *, bool >::Invoke(2 /* System.Boolean System.Reflection.ICustomAttributeProvider::IsDefined(System.Type,System.Boolean) */, ICustomAttributeProvider_t2536_il2cpp_TypeInfo_var, L_4, L_5, L_6);
		return L_7;
	}

IL_001f:
	{
		Object_t * L_8 = ___obj;
		Type_t * L_9 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		bool L_10 = MonoCustomAttrs_IsDefinedInternal_m21302(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_002a;
		}
	}
	{
		return 1;
	}

IL_002a:
	{
		Object_t * L_11 = ___obj;
		Type_t * L_12 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t21* L_13 = MonoCustomAttrs_GetPseudoCustomAttributes_m21296(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		ObjectU5BU5D_t21* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		V_1 = 0;
		goto IL_004f;
	}

IL_0039:
	{
		Type_t * L_15 = ___attributeType;
		ObjectU5BU5D_t21* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)));
		Type_t * L_19 = Object_GetType_m2871((*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), /*hidden argument*/NULL);
		NullCheck(L_15);
		bool L_20 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(43 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_15, L_19);
		if (!L_20)
		{
			goto IL_004b;
		}
	}
	{
		return 1;
	}

IL_004b:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_22 = V_1;
		ObjectU5BU5D_t21* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((Array_t *)L_23)->max_length))))))
		{
			goto IL_0039;
		}
	}

IL_0055:
	{
		bool L_24 = ___inherit;
		if (!L_24)
		{
			goto IL_006b;
		}
	}
	{
		Object_t * L_25 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		Object_t * L_26 = MonoCustomAttrs_GetBase_m21304(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		Object_t * L_27 = L_26;
		V_2 = L_27;
		if (!L_27)
		{
			goto IL_006b;
		}
	}
	{
		Object_t * L_28 = V_2;
		Type_t * L_29 = ___attributeType;
		bool L_30 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		bool L_31 = MonoCustomAttrs_IsDefined_m21301(NULL /*static, unused*/, L_28, L_29, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_006b:
	{
		return 0;
	}
}
// System.Boolean System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C" bool MonoCustomAttrs_IsDefinedInternal_m21302 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___AttributeType, const MethodInfo* method)
{
	typedef bool (*MonoCustomAttrs_IsDefinedInternal_m21302_ftn) (Object_t *, Type_t *);
	static MonoCustomAttrs_IsDefinedInternal_m21302_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoCustomAttrs_IsDefinedInternal_m21302_ftn)il2cpp_codegen_resolve_icall ("System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)");
	return _il2cpp_icall_func(___obj, ___AttributeType);
}
// System.Reflection.PropertyInfo System.MonoCustomAttrs::GetBasePropertyDefinition(System.Reflection.PropertyInfo)
extern TypeInfo* TypeU5BU5D_t562_il2cpp_TypeInfo_var;
extern "C" PropertyInfo_t * MonoCustomAttrs_GetBasePropertyDefinition_m21303 (Object_t * __this /* static, unused */, PropertyInfo_t * ___property, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t562_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t561* V_2 = {0};
	TypeU5BU5D_t562* V_3 = {0};
	int32_t V_4 = 0;
	{
		PropertyInfo_t * L_0 = ___property;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, 1);
		V_0 = L_1;
		MethodInfo_t * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		MethodInfo_t * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Reflection.MethodBase::get_IsVirtual() */, L_3);
		if (L_4)
		{
			goto IL_001b;
		}
	}

IL_0013:
	{
		PropertyInfo_t * L_5 = ___property;
		NullCheck(L_5);
		MethodInfo_t * L_6 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_5, 1);
		V_0 = L_6;
	}

IL_001b:
	{
		MethodInfo_t * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		MethodInfo_t * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Reflection.MethodBase::get_IsVirtual() */, L_8);
		if (L_9)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		return (PropertyInfo_t *)NULL;
	}

IL_0028:
	{
		MethodInfo_t * L_10 = V_0;
		NullCheck(L_10);
		MethodInfo_t * L_11 = (MethodInfo_t *)VirtFuncInvoker0< MethodInfo_t * >::Invoke(28 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_10);
		V_1 = L_11;
		MethodInfo_t * L_12 = V_1;
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		MethodInfo_t * L_13 = V_1;
		MethodInfo_t * L_14 = V_0;
		if ((((Object_t*)(MethodInfo_t *)L_13) == ((Object_t*)(MethodInfo_t *)L_14)))
		{
			goto IL_009f;
		}
	}
	{
		PropertyInfo_t * L_15 = ___property;
		NullCheck(L_15);
		ParameterInfoU5BU5D_t561* L_16 = (ParameterInfoU5BU5D_t561*)VirtFuncInvoker0< ParameterInfoU5BU5D_t561* >::Invoke(21 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_15);
		V_2 = L_16;
		ParameterInfoU5BU5D_t561* L_17 = V_2;
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		ParameterInfoU5BU5D_t561* L_18 = V_2;
		NullCheck(L_18);
		if ((((int32_t)(((int32_t)(((Array_t *)L_18)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		ParameterInfoU5BU5D_t561* L_19 = V_2;
		NullCheck(L_19);
		V_3 = ((TypeU5BU5D_t562*)SZArrayNew(TypeU5BU5D_t562_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_19)->max_length)))));
		V_4 = 0;
		goto IL_0067;
	}

IL_0054:
	{
		TypeU5BU5D_t562* L_20 = V_3;
		int32_t L_21 = V_4;
		ParameterInfoU5BU5D_t561* L_22 = V_2;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		NullCheck((*(ParameterInfo_t676 **)(ParameterInfo_t676 **)SZArrayLdElema(L_22, L_24)));
		Type_t * L_25 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t676 **)(ParameterInfo_t676 **)SZArrayLdElema(L_22, L_24)));
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		ArrayElementTypeCheck (L_20, L_25);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, L_21)) = (Type_t *)L_25;
		int32_t L_26 = V_4;
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0067:
	{
		int32_t L_27 = V_4;
		TypeU5BU5D_t562* L_28 = V_3;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((Array_t *)L_28)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		MethodInfo_t * L_29 = V_1;
		NullCheck(L_29);
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_29);
		PropertyInfo_t * L_31 = ___property;
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_31);
		PropertyInfo_t * L_33 = ___property;
		NullCheck(L_33);
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_33);
		TypeU5BU5D_t562* L_35 = V_3;
		NullCheck(L_30);
		PropertyInfo_t * L_36 = (PropertyInfo_t *)VirtFuncInvoker3< PropertyInfo_t *, String_t*, Type_t *, TypeU5BU5D_t562* >::Invoke(68 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type,System.Type[]) */, L_30, L_32, L_34, L_35);
		return L_36;
	}

IL_0087:
	{
		MethodInfo_t * L_37 = V_1;
		NullCheck(L_37);
		Type_t * L_38 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_37);
		PropertyInfo_t * L_39 = ___property;
		NullCheck(L_39);
		String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
		PropertyInfo_t * L_41 = ___property;
		NullCheck(L_41);
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_41);
		NullCheck(L_38);
		PropertyInfo_t * L_43 = (PropertyInfo_t *)VirtFuncInvoker2< PropertyInfo_t *, String_t*, Type_t * >::Invoke(67 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type) */, L_38, L_40, L_42);
		return L_43;
	}

IL_009f:
	{
		return (PropertyInfo_t *)NULL;
	}
}
// System.Reflection.ICustomAttributeProvider System.MonoCustomAttrs::GetBase(System.Reflection.ICustomAttributeProvider)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* MonoProperty_t_il2cpp_TypeInfo_var;
extern TypeInfo* MonoCustomAttrs_t4314_il2cpp_TypeInfo_var;
extern TypeInfo* MonoMethod_t_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoCustomAttrs_GetBase_m21304 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		MonoProperty_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8314);
		MonoCustomAttrs_t4314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8148);
		MonoMethod_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8508);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Object_t *)NULL;
	}

IL_0005:
	{
		Object_t * L_1 = ___obj;
		if (!((Type_t *)IsInst(L_1, Type_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		Object_t * L_2 = ___obj;
		NullCheck(((Type_t *)Castclass(L_2, Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, ((Type_t *)Castclass(L_2, Type_t_il2cpp_TypeInfo_var)));
		return L_3;
	}

IL_0019:
	{
		V_0 = (MethodInfo_t *)NULL;
		Object_t * L_4 = ___obj;
		if (!((MonoProperty_t *)IsInst(L_4, MonoProperty_t_il2cpp_TypeInfo_var)))
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_5 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		PropertyInfo_t * L_6 = MonoCustomAttrs_GetBasePropertyDefinition_m21303(NULL /*static, unused*/, ((MonoProperty_t *)Castclass(L_5, MonoProperty_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_6;
	}

IL_002f:
	{
		Object_t * L_7 = ___obj;
		if (!((MonoMethod_t *)IsInst(L_7, MonoMethod_t_il2cpp_TypeInfo_var)))
		{
			goto IL_003e;
		}
	}
	{
		Object_t * L_8 = ___obj;
		V_0 = ((MethodInfo_t *)Castclass(L_8, MethodInfo_t_il2cpp_TypeInfo_var));
	}

IL_003e:
	{
		MethodInfo_t * L_9 = V_0;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		MethodInfo_t * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Reflection.MethodBase::get_IsVirtual() */, L_10);
		if (L_11)
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (Object_t *)NULL;
	}

IL_004b:
	{
		MethodInfo_t * L_12 = V_0;
		NullCheck(L_12);
		MethodInfo_t * L_13 = (MethodInfo_t *)VirtFuncInvoker0< MethodInfo_t * >::Invoke(28 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_12);
		V_1 = L_13;
		MethodInfo_t * L_14 = V_1;
		MethodInfo_t * L_15 = V_0;
		if ((!(((Object_t*)(MethodInfo_t *)L_14) == ((Object_t*)(MethodInfo_t *)L_15))))
		{
			goto IL_0058;
		}
	}
	{
		return (Object_t *)NULL;
	}

IL_0058:
	{
		MethodInfo_t * L_16 = V_1;
		return L_16;
	}
}
// System.AttributeUsageAttribute System.MonoCustomAttrs::RetrieveAttributeUsage(System.Type)
extern const Il2CppType* AttributeUsageAttribute_t1708_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var;
extern TypeInfo* MonoCustomAttrs_t4314_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t1330_il2cpp_TypeInfo_var;
extern "C" AttributeUsageAttribute_t1708 * MonoCustomAttrs_RetrieveAttributeUsage_m21305 (Object_t * __this /* static, unused */, Type_t * ___attributeType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t1708_0_0_0_var = il2cpp_codegen_type_from_index(3296);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3296);
		MonoCustomAttrs_t4314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8148);
		FormatException_t1330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2627);
		s_Il2CppMethodIntialized = true;
	}
	AttributeUsageAttribute_t1708 * V_0 = {0};
	ObjectU5BU5D_t21* V_1 = {0};
	{
		Type_t * L_0 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(AttributeUsageAttribute_t1708_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		AttributeUsageAttribute_t1708 * L_2 = (AttributeUsageAttribute_t1708 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m7829(L_2, 4, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		V_0 = (AttributeUsageAttribute_t1708 *)NULL;
		Type_t * L_3 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		Type_t * L_4 = ((MonoCustomAttrs_t4314_StaticFields*)MonoCustomAttrs_t4314_il2cpp_TypeInfo_var->static_fields)->___AttributeUsageType_1;
		ObjectU5BU5D_t21* L_5 = MonoCustomAttrs_GetCustomAttributes_m21299(NULL /*static, unused*/, L_3, L_4, 0, /*hidden argument*/NULL);
		V_1 = L_5;
		ObjectU5BU5D_t21* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)(((Array_t *)L_6)->max_length))))
		{
			goto IL_0047;
		}
	}
	{
		Type_t * L_7 = ___attributeType;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_7);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		Type_t * L_9 = ___attributeType;
		NullCheck(L_9);
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		AttributeUsageAttribute_t1708 * L_11 = MonoCustomAttrs_RetrieveAttributeUsage_m21305(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_003c:
	{
		AttributeUsageAttribute_t1708 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_0041;
		}
	}
	{
		AttributeUsageAttribute_t1708 * L_13 = V_0;
		return L_13;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		AttributeUsageAttribute_t1708 * L_14 = ((MonoCustomAttrs_t4314_StaticFields*)MonoCustomAttrs_t4314_il2cpp_TypeInfo_var->static_fields)->___DefaultAttributeUsage_2;
		return L_14;
	}

IL_0047:
	{
		ObjectU5BU5D_t21* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)(((int32_t)(((Array_t *)L_15)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		FormatException_t1330 * L_16 = (FormatException_t1330 *)il2cpp_codegen_object_new (FormatException_t1330_il2cpp_TypeInfo_var);
		FormatException__ctor_m6577(L_16, (String_t*) &_stringLiteral5570, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0058:
	{
		ObjectU5BU5D_t21* L_17 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 0);
		int32_t L_18 = 0;
		return ((AttributeUsageAttribute_t1708 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_18)), AttributeUsageAttribute_t1708_il2cpp_TypeInfo_var));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.MonoTouchAOTHelper::.cctor()
extern "C" void MonoTouchAOTHelper__cctor_m21306 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.MonoTypeInfo
#include "mscorlib_System_MonoTypeInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.MonoTypeInfo
#include "mscorlib_System_MonoTypeInfoMethodDeclarations.h"



// System.Void System.MonoTypeInfo::.ctor()
extern "C" void MonoTypeInfo__ctor_m21307 (MonoTypeInfo_t4316 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.MonoType
#include "mscorlib_System_MonoTypeMethodDeclarations.h"

// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.Reflection.Module
#include "mscorlib_System_Reflection_Module.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Reflection.EventInfo
#include "mscorlib_System_Reflection_EventInfo.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.Missing
#include "mscorlib_System_Reflection_Missing.h"
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_BinderMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
// System.Reflection.Missing
#include "mscorlib_System_Reflection_MissingMethodDeclarations.h"
// System.UnitySerializationHolder
#include "mscorlib_System_UnitySerializationHolderMethodDeclarations.h"


// System.Reflection.TypeAttributes System.MonoType::get_attributes(System.Type)
extern "C" int32_t MonoType_get_attributes_m21308 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef int32_t (*MonoType_get_attributes_m21308_ftn) (Type_t *);
	static MonoType_get_attributes_m21308_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_get_attributes_m21308_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_attributes(System.Type)");
	return _il2cpp_icall_func(___type);
}
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
extern TypeInfo* MonoTypeInfo_t4316_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" ConstructorInfo_t2544 * MonoType_GetDefaultConstructor_m21309 (MonoType_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoTypeInfo_t4316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8510);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorInfo_t2544 * V_0 = {0};
	int32_t V_1 = {0};
	ConstructorInfo_t2544 * V_2 = {0};
	{
		V_0 = (ConstructorInfo_t2544 *)NULL;
		MonoTypeInfo_t4316 * L_0 = (__this->___type_info_8);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		MonoTypeInfo_t4316 * L_1 = (MonoTypeInfo_t4316 *)il2cpp_codegen_object_new (MonoTypeInfo_t4316_il2cpp_TypeInfo_var);
		MonoTypeInfo__ctor_m21307(L_1, /*hidden argument*/NULL);
		__this->___type_info_8 = L_1;
	}

IL_0015:
	{
		MonoTypeInfo_t4316 * L_2 = (__this->___type_info_8);
		NullCheck(L_2);
		ConstructorInfo_t2544 * L_3 = (L_2->___default_ctor_1);
		ConstructorInfo_t2544 * L_4 = L_3;
		V_0 = L_4;
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		MonoTypeInfo_t4316 * L_5 = (__this->___type_info_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t562* L_6 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		ConstructorInfo_t2544 * L_7 = (ConstructorInfo_t2544 *)VirtFuncInvoker5< ConstructorInfo_t2544 *, int32_t, Binder_t2543 *, int32_t, TypeU5BU5D_t562*, ParameterModifierU5BU5D_t2325* >::Invoke(83 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[]) */, __this, ((int32_t)52), (Binder_t2543 *)NULL, 3, L_6, (ParameterModifierU5BU5D_t2325*)(ParameterModifierU5BU5D_t2325*)NULL);
		ConstructorInfo_t2544 * L_8 = L_7;
		V_2 = L_8;
		NullCheck(L_5);
		L_5->___default_ctor_1 = L_8;
		ConstructorInfo_t2544 * L_9 = V_2;
		V_0 = L_9;
	}

IL_0043:
	{
		ConstructorInfo_t2544 * L_10 = V_0;
		return L_10;
	}
}
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
extern "C" int32_t MonoType_GetAttributeFlagsImpl_m21310 (MonoType_t * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = MonoType_get_attributes_m21308(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern TypeInfo* AmbiguousMatchException_t4014_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructorInfo_t2544_il2cpp_TypeInfo_var;
extern TypeInfo* MethodBaseU5BU5D_t4367_il2cpp_TypeInfo_var;
extern TypeInfo* Binder_t2543_il2cpp_TypeInfo_var;
extern "C" ConstructorInfo_t2544 * MonoType_GetConstructorImpl_m21311 (MonoType_t * __this, int32_t ___bindingAttr, Binder_t2543 * ___binder, int32_t ___callConvention, TypeU5BU5D_t562* ___types, ParameterModifierU5BU5D_t2325* ___modifiers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AmbiguousMatchException_t4014_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8290);
		ConstructorInfo_t2544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5786);
		MethodBaseU5BU5D_t4367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8291);
		Binder_t2543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8292);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorInfoU5BU5D_t2967* V_0 = {0};
	ConstructorInfo_t2544 * V_1 = {0};
	MethodBaseU5BU5D_t4367* V_2 = {0};
	int32_t V_3 = 0;
	ConstructorInfo_t2544 * V_4 = {0};
	ConstructorInfoU5BU5D_t2967* V_5 = {0};
	int32_t V_6 = 0;
	ConstructorInfo_t2544 * V_7 = {0};
	ConstructorInfoU5BU5D_t2967* V_8 = {0};
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___bindingAttr;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		___bindingAttr = ((int32_t)20);
	}

IL_0009:
	{
		int32_t L_1 = ___bindingAttr;
		ConstructorInfoU5BU5D_t2967* L_2 = (ConstructorInfoU5BU5D_t2967*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t2967*, int32_t >::Invoke(85 /* System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags) */, __this, L_1);
		V_0 = L_2;
		V_1 = (ConstructorInfo_t2544 *)NULL;
		V_3 = 0;
		ConstructorInfoU5BU5D_t2967* L_3 = V_0;
		V_5 = L_3;
		V_6 = 0;
		goto IL_0043;
	}

IL_001d:
	{
		ConstructorInfoU5BU5D_t2967* L_4 = V_5;
		int32_t L_5 = V_6;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (*(ConstructorInfo_t2544 **)(ConstructorInfo_t2544 **)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = ___callConvention;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0036;
		}
	}
	{
		ConstructorInfo_t2544 * L_8 = V_4;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_8);
		int32_t L_10 = ___callConvention;
		int32_t L_11 = ___callConvention;
		if ((((int32_t)((int32_t)((int32_t)L_9&(int32_t)L_10))) == ((int32_t)L_11)))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_003d;
	}

IL_0036:
	{
		ConstructorInfo_t2544 * L_12 = V_4;
		V_1 = L_12;
		int32_t L_13 = V_3;
		V_3 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_14 = V_6;
		V_6 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0043:
	{
		int32_t L_15 = V_6;
		ConstructorInfoU5BU5D_t2967* L_16 = V_5;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_17 = V_3;
		if (L_17)
		{
			goto IL_0050;
		}
	}
	{
		return (ConstructorInfo_t2544 *)NULL;
	}

IL_0050:
	{
		TypeU5BU5D_t562* L_18 = ___types;
		if (L_18)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) <= ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		AmbiguousMatchException_t4014 * L_20 = (AmbiguousMatchException_t4014 *)il2cpp_codegen_object_new (AmbiguousMatchException_t4014_il2cpp_TypeInfo_var);
		AmbiguousMatchException__ctor_m19326(L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_005e:
	{
		ConstructorInfo_t2544 * L_21 = V_1;
		MethodBase_t592 * L_22 = MonoType_CheckMethodSecurity_m21360(__this, L_21, /*hidden argument*/NULL);
		return ((ConstructorInfo_t2544 *)Castclass(L_22, ConstructorInfo_t2544_il2cpp_TypeInfo_var));
	}

IL_006b:
	{
		int32_t L_23 = V_3;
		V_2 = ((MethodBaseU5BU5D_t4367*)SZArrayNew(MethodBaseU5BU5D_t4367_il2cpp_TypeInfo_var, L_23));
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_007c;
		}
	}
	{
		MethodBaseU5BU5D_t4367* L_25 = V_2;
		ConstructorInfo_t2544 * L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((MethodBase_t592 **)(MethodBase_t592 **)SZArrayLdElema(L_25, 0)) = (MethodBase_t592 *)L_26;
		goto IL_00b6;
	}

IL_007c:
	{
		V_3 = 0;
		ConstructorInfoU5BU5D_t2967* L_27 = V_0;
		V_8 = L_27;
		V_9 = 0;
		goto IL_00ae;
	}

IL_0086:
	{
		ConstructorInfoU5BU5D_t2967* L_28 = V_8;
		int32_t L_29 = V_9;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		int32_t L_30 = L_29;
		V_7 = (*(ConstructorInfo_t2544 **)(ConstructorInfo_t2544 **)SZArrayLdElema(L_28, L_30));
		int32_t L_31 = ___callConvention;
		if ((((int32_t)L_31) == ((int32_t)3)))
		{
			goto IL_009f;
		}
	}
	{
		ConstructorInfo_t2544 * L_32 = V_7;
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_32);
		int32_t L_34 = ___callConvention;
		int32_t L_35 = ___callConvention;
		if ((((int32_t)((int32_t)((int32_t)L_33&(int32_t)L_34))) == ((int32_t)L_35)))
		{
			goto IL_009f;
		}
	}
	{
		goto IL_00a8;
	}

IL_009f:
	{
		MethodBaseU5BU5D_t4367* L_36 = V_2;
		int32_t L_37 = V_3;
		int32_t L_38 = L_37;
		V_3 = ((int32_t)((int32_t)L_38+(int32_t)1));
		ConstructorInfo_t2544 * L_39 = V_7;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_38);
		ArrayElementTypeCheck (L_36, L_39);
		*((MethodBase_t592 **)(MethodBase_t592 **)SZArrayLdElema(L_36, L_38)) = (MethodBase_t592 *)L_39;
	}

IL_00a8:
	{
		int32_t L_40 = V_9;
		V_9 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00ae:
	{
		int32_t L_41 = V_9;
		ConstructorInfoU5BU5D_t2967* L_42 = V_8;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((Array_t *)L_42)->max_length))))))
		{
			goto IL_0086;
		}
	}

IL_00b6:
	{
		Binder_t2543 * L_43 = ___binder;
		if (L_43)
		{
			goto IL_00c2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t2543_il2cpp_TypeInfo_var);
		Binder_t2543 * L_44 = Binder_get_DefaultBinder_m19383(NULL /*static, unused*/, /*hidden argument*/NULL);
		___binder = L_44;
	}

IL_00c2:
	{
		Binder_t2543 * L_45 = ___binder;
		int32_t L_46 = ___bindingAttr;
		MethodBaseU5BU5D_t4367* L_47 = V_2;
		TypeU5BU5D_t562* L_48 = ___types;
		ParameterModifierU5BU5D_t2325* L_49 = ___modifiers;
		NullCheck(L_45);
		MethodBase_t592 * L_50 = (MethodBase_t592 *)VirtFuncInvoker4< MethodBase_t592 *, int32_t, MethodBaseU5BU5D_t4367*, TypeU5BU5D_t562*, ParameterModifierU5BU5D_t2325* >::Invoke(7 /* System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[]) */, L_45, L_46, L_47, L_48, L_49);
		MethodBase_t592 * L_51 = MonoType_CheckMethodSecurity_m21360(__this, L_50, /*hidden argument*/NULL);
		return ((ConstructorInfo_t2544 *)Castclass(L_51, ConstructorInfo_t2544_il2cpp_TypeInfo_var));
	}
}
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
extern "C" ConstructorInfoU5BU5D_t2967* MonoType_GetConstructors_internal_m21312 (MonoType_t * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, const MethodInfo* method)
{
	typedef ConstructorInfoU5BU5D_t2967* (*MonoType_GetConstructors_internal_m21312_ftn) (MonoType_t *, int32_t, Type_t *);
	static MonoType_GetConstructors_internal_m21312_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_GetConstructors_internal_m21312_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)");
	return _il2cpp_icall_func(__this, ___bindingAttr, ___reflected_type);
}
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t2967* MonoType_GetConstructors_m21313 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		int32_t L_0 = ___bindingAttr;
		ConstructorInfoU5BU5D_t2967* L_1 = MonoType_GetConstructors_internal_m21312(__this, L_0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * MonoType_InternalGetEvent_m21314 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	typedef EventInfo_t * (*MonoType_InternalGetEvent_m21314_ftn) (MonoType_t *, String_t*, int32_t);
	static MonoType_InternalGetEvent_m21314_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_InternalGetEvent_m21314_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)");
	return _il2cpp_icall_func(__this, ___name, ___bindingAttr);
}
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" EventInfo_t * MonoType_GetEvent_m21315 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral1722, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___name;
		int32_t L_3 = ___bindingAttr;
		EventInfo_t * L_4 = MonoType_InternalGetEvent_m21314(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Reflection.EventInfo[] System.MonoType::GetEvents_internal(System.Reflection.BindingFlags,System.Type)
extern "C" EventInfoU5BU5D_t4363* MonoType_GetEvents_internal_m21316 (MonoType_t * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, const MethodInfo* method)
{
	typedef EventInfoU5BU5D_t4363* (*MonoType_GetEvents_internal_m21316_ftn) (MonoType_t *, int32_t, Type_t *);
	static MonoType_GetEvents_internal_m21316_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_GetEvents_internal_m21316_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetEvents_internal(System.Reflection.BindingFlags,System.Type)");
	return _il2cpp_icall_func(__this, ___bindingAttr, ___reflected_type);
}
// System.Reflection.EventInfo[] System.MonoType::GetEvents(System.Reflection.BindingFlags)
extern "C" EventInfoU5BU5D_t4363* MonoType_GetEvents_m21317 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		int32_t L_0 = ___bindingAttr;
		EventInfoU5BU5D_t4363* L_1 = MonoType_GetEvents_internal_m21316(__this, L_0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * MonoType_GetField_m21318 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	typedef FieldInfo_t * (*MonoType_GetField_m21318_ftn) (MonoType_t *, String_t*, int32_t);
	static MonoType_GetField_m21318_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_GetField_m21318_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetField(System.String,System.Reflection.BindingFlags)");
	return _il2cpp_icall_func(__this, ___name, ___bindingAttr);
}
// System.Reflection.FieldInfo[] System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)
extern "C" FieldInfoU5BU5D_t2550* MonoType_GetFields_internal_m21319 (MonoType_t * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, const MethodInfo* method)
{
	typedef FieldInfoU5BU5D_t2550* (*MonoType_GetFields_internal_m21319_ftn) (MonoType_t *, int32_t, Type_t *);
	static MonoType_GetFields_internal_m21319_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_GetFields_internal_m21319_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)");
	return _il2cpp_icall_func(__this, ___bindingAttr, ___reflected_type);
}
// System.Reflection.FieldInfo[] System.MonoType::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t2550* MonoType_GetFields_m21320 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		int32_t L_0 = ___bindingAttr;
		FieldInfoU5BU5D_t2550* L_1 = MonoType_GetFields_internal_m21319(__this, L_0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Type[] System.MonoType::GetInterfaces()
extern "C" TypeU5BU5D_t562* MonoType_GetInterfaces_m21321 (MonoType_t * __this, const MethodInfo* method)
{
	typedef TypeU5BU5D_t562* (*MonoType_GetInterfaces_m21321_ftn) (MonoType_t *);
	static MonoType_GetInterfaces_m21321_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_GetInterfaces_m21321_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetInterfaces()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" MethodInfoU5BU5D_t1670* MonoType_GetMethodsByName_m21322 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, const MethodInfo* method)
{
	typedef MethodInfoU5BU5D_t1670* (*MonoType_GetMethodsByName_m21322_ftn) (MonoType_t *, String_t*, int32_t, bool, Type_t *);
	static MonoType_GetMethodsByName_m21322_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_GetMethodsByName_m21322_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___bindingAttr, ___ignoreCase, ___reflected_type);
}
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1670* MonoType_GetMethods_m21323 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		int32_t L_0 = ___bindingAttr;
		MethodInfoU5BU5D_t1670* L_1 = MonoType_GetMethodsByName_m21322(__this, (String_t*)NULL, L_0, 0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* MethodBaseU5BU5D_t4367_il2cpp_TypeInfo_var;
extern TypeInfo* Binder_t2543_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * MonoType_GetMethodImpl_m21324 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2543 * ___binder, int32_t ___callConvention, TypeU5BU5D_t562* ___types, ParameterModifierU5BU5D_t2325* ___modifiers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		MethodBaseU5BU5D_t4367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8291);
		Binder_t2543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8292);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	MethodInfoU5BU5D_t1670* V_1 = {0};
	MethodInfo_t * V_2 = {0};
	MethodBaseU5BU5D_t4367* V_3 = {0};
	int32_t V_4 = 0;
	MethodInfo_t * V_5 = {0};
	MethodInfoU5BU5D_t1670* V_6 = {0};
	int32_t V_7 = 0;
	MethodInfo_t * V_8 = {0};
	MethodInfoU5BU5D_t1670* V_9 = {0};
	int32_t V_10 = 0;
	{
		int32_t L_0 = ___bindingAttr;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		bool L_3 = V_0;
		MethodInfoU5BU5D_t1670* L_4 = MonoType_GetMethodsByName_m21322(__this, L_1, L_2, L_3, __this, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = (MethodInfo_t *)NULL;
		V_4 = 0;
		MethodInfoU5BU5D_t1670* L_5 = V_1;
		V_6 = L_5;
		V_7 = 0;
		goto IL_004d;
	}

IL_0022:
	{
		MethodInfoU5BU5D_t1670* L_6 = V_6;
		int32_t L_7 = V_7;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_5 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_6, L_8));
		int32_t L_9 = ___callConvention;
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_003e;
		}
	}
	{
		MethodInfo_t * L_10 = V_5;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_10);
		int32_t L_12 = ___callConvention;
		int32_t L_13 = ___callConvention;
		if ((((int32_t)((int32_t)((int32_t)L_11&(int32_t)L_12))) == ((int32_t)L_13)))
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0047;
	}

IL_003e:
	{
		MethodInfo_t * L_14 = V_5;
		V_2 = L_14;
		int32_t L_15 = V_4;
		V_4 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_7;
		V_7 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_004d:
	{
		int32_t L_17 = V_7;
		MethodInfoU5BU5D_t1670* L_18 = V_6;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_19 = V_4;
		if (L_19)
		{
			goto IL_005b;
		}
	}
	{
		return (MethodInfo_t *)NULL;
	}

IL_005b:
	{
		int32_t L_20 = V_4;
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_0071;
		}
	}
	{
		TypeU5BU5D_t562* L_21 = ___types;
		if (L_21)
		{
			goto IL_0071;
		}
	}
	{
		MethodInfo_t * L_22 = V_2;
		MethodBase_t592 * L_23 = MonoType_CheckMethodSecurity_m21360(__this, L_22, /*hidden argument*/NULL);
		return ((MethodInfo_t *)Castclass(L_23, MethodInfo_t_il2cpp_TypeInfo_var));
	}

IL_0071:
	{
		int32_t L_24 = V_4;
		V_3 = ((MethodBaseU5BU5D_t4367*)SZArrayNew(MethodBaseU5BU5D_t4367_il2cpp_TypeInfo_var, L_24));
		int32_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		MethodBaseU5BU5D_t4367* L_26 = V_3;
		MethodInfo_t * L_27 = V_2;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		ArrayElementTypeCheck (L_26, L_27);
		*((MethodBase_t592 **)(MethodBase_t592 **)SZArrayLdElema(L_26, 0)) = (MethodBase_t592 *)L_27;
		goto IL_00c4;
	}

IL_0084:
	{
		V_4 = 0;
		MethodInfoU5BU5D_t1670* L_28 = V_1;
		V_9 = L_28;
		V_10 = 0;
		goto IL_00bc;
	}

IL_008f:
	{
		MethodInfoU5BU5D_t1670* L_29 = V_9;
		int32_t L_30 = V_10;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		V_8 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_29, L_31));
		int32_t L_32 = ___callConvention;
		if ((((int32_t)L_32) == ((int32_t)3)))
		{
			goto IL_00ab;
		}
	}
	{
		MethodInfo_t * L_33 = V_8;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_33);
		int32_t L_35 = ___callConvention;
		int32_t L_36 = ___callConvention;
		if ((((int32_t)((int32_t)((int32_t)L_34&(int32_t)L_35))) == ((int32_t)L_36)))
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00b6;
	}

IL_00ab:
	{
		MethodBaseU5BU5D_t4367* L_37 = V_3;
		int32_t L_38 = V_4;
		int32_t L_39 = L_38;
		V_4 = ((int32_t)((int32_t)L_39+(int32_t)1));
		MethodInfo_t * L_40 = V_8;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_39);
		ArrayElementTypeCheck (L_37, L_40);
		*((MethodBase_t592 **)(MethodBase_t592 **)SZArrayLdElema(L_37, L_39)) = (MethodBase_t592 *)L_40;
	}

IL_00b6:
	{
		int32_t L_41 = V_10;
		V_10 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00bc:
	{
		int32_t L_42 = V_10;
		MethodInfoU5BU5D_t1670* L_43 = V_9;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)(((int32_t)(((Array_t *)L_43)->max_length))))))
		{
			goto IL_008f;
		}
	}

IL_00c4:
	{
		TypeU5BU5D_t562* L_44 = ___types;
		if (L_44)
		{
			goto IL_00da;
		}
	}
	{
		MethodBaseU5BU5D_t4367* L_45 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t2543_il2cpp_TypeInfo_var);
		MethodBase_t592 * L_46 = Binder_FindMostDerivedMatch_m19386(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		MethodBase_t592 * L_47 = MonoType_CheckMethodSecurity_m21360(__this, L_46, /*hidden argument*/NULL);
		return ((MethodInfo_t *)Castclass(L_47, MethodInfo_t_il2cpp_TypeInfo_var));
	}

IL_00da:
	{
		Binder_t2543 * L_48 = ___binder;
		if (L_48)
		{
			goto IL_00e6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t2543_il2cpp_TypeInfo_var);
		Binder_t2543 * L_49 = Binder_get_DefaultBinder_m19383(NULL /*static, unused*/, /*hidden argument*/NULL);
		___binder = L_49;
	}

IL_00e6:
	{
		Binder_t2543 * L_50 = ___binder;
		int32_t L_51 = ___bindingAttr;
		MethodBaseU5BU5D_t4367* L_52 = V_3;
		TypeU5BU5D_t562* L_53 = ___types;
		ParameterModifierU5BU5D_t2325* L_54 = ___modifiers;
		NullCheck(L_50);
		MethodBase_t592 * L_55 = (MethodBase_t592 *)VirtFuncInvoker4< MethodBase_t592 *, int32_t, MethodBaseU5BU5D_t4367*, TypeU5BU5D_t562*, ParameterModifierU5BU5D_t2325* >::Invoke(7 /* System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[]) */, L_50, L_51, L_52, L_53, L_54);
		MethodBase_t592 * L_56 = MonoType_CheckMethodSecurity_m21360(__this, L_55, /*hidden argument*/NULL);
		return ((MethodInfo_t *)Castclass(L_56, MethodInfo_t_il2cpp_TypeInfo_var));
	}
}
// System.Type[] System.MonoType::GetNestedTypes(System.Reflection.BindingFlags)
extern "C" TypeU5BU5D_t562* MonoType_GetNestedTypes_m21325 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	typedef TypeU5BU5D_t562* (*MonoType_GetNestedTypes_m21325_ftn) (MonoType_t *, int32_t);
	static MonoType_GetNestedTypes_m21325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_GetNestedTypes_m21325_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetNestedTypes(System.Reflection.BindingFlags)");
	return _il2cpp_icall_func(__this, ___bindingAttr);
}
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" PropertyInfoU5BU5D_t1645* MonoType_GetPropertiesByName_m21326 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, bool ___icase, Type_t * ___reflected_type, const MethodInfo* method)
{
	typedef PropertyInfoU5BU5D_t1645* (*MonoType_GetPropertiesByName_m21326_ftn) (MonoType_t *, String_t*, int32_t, bool, Type_t *);
	static MonoType_GetPropertiesByName_m21326_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_GetPropertiesByName_m21326_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___bindingAttr, ___icase, ___reflected_type);
}
// System.Reflection.PropertyInfo[] System.MonoType::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t1645* MonoType_GetProperties_m21327 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		int32_t L_0 = ___bindingAttr;
		PropertyInfoU5BU5D_t1645* L_1 = MonoType_GetPropertiesByName_m21326(__this, (String_t*)NULL, L_0, 0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern TypeInfo* Binder_t2543_il2cpp_TypeInfo_var;
extern "C" PropertyInfo_t * MonoType_GetPropertyImpl_m21328 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2543 * ___binder, Type_t * ___returnType, TypeU5BU5D_t562* ___types, ParameterModifierU5BU5D_t2325* ___modifiers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Binder_t2543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8292);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	PropertyInfoU5BU5D_t1645* V_1 = {0};
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___bindingAttr;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		bool L_3 = V_0;
		PropertyInfoU5BU5D_t1645* L_4 = MonoType_GetPropertiesByName_m21326(__this, L_1, L_2, L_3, __this, /*hidden argument*/NULL);
		V_1 = L_4;
		PropertyInfoU5BU5D_t1645* L_5 = V_1;
		NullCheck(L_5);
		V_2 = (((int32_t)(((Array_t *)L_5)->max_length)));
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		return (PropertyInfo_t *)NULL;
	}

IL_001e:
	{
		int32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0040;
		}
	}
	{
		TypeU5BU5D_t562* L_8 = ___types;
		if (!L_8)
		{
			goto IL_002c;
		}
	}
	{
		TypeU5BU5D_t562* L_9 = ___types;
		NullCheck(L_9);
		if ((((int32_t)(((Array_t *)L_9)->max_length))))
		{
			goto IL_0040;
		}
	}

IL_002c:
	{
		Type_t * L_10 = ___returnType;
		if (!L_10)
		{
			goto IL_003c;
		}
	}
	{
		Type_t * L_11 = ___returnType;
		PropertyInfoU5BU5D_t1645* L_12 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		int32_t L_13 = 0;
		NullCheck((*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_12, L_13)));
		Type_t * L_14 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, (*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_12, L_13)));
		if ((!(((Object_t*)(Type_t *)L_11) == ((Object_t*)(Type_t *)L_14))))
		{
			goto IL_0040;
		}
	}

IL_003c:
	{
		PropertyInfoU5BU5D_t1645* L_15 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		int32_t L_16 = 0;
		return (*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_15, L_16));
	}

IL_0040:
	{
		Binder_t2543 * L_17 = ___binder;
		if (L_17)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t2543_il2cpp_TypeInfo_var);
		Binder_t2543 * L_18 = Binder_get_DefaultBinder_m19383(NULL /*static, unused*/, /*hidden argument*/NULL);
		___binder = L_18;
	}

IL_004c:
	{
		Binder_t2543 * L_19 = ___binder;
		int32_t L_20 = ___bindingAttr;
		PropertyInfoU5BU5D_t1645* L_21 = V_1;
		Type_t * L_22 = ___returnType;
		TypeU5BU5D_t562* L_23 = ___types;
		ParameterModifierU5BU5D_t2325* L_24 = ___modifiers;
		NullCheck(L_19);
		PropertyInfo_t * L_25 = (PropertyInfo_t *)VirtFuncInvoker5< PropertyInfo_t *, int32_t, PropertyInfoU5BU5D_t1645*, Type_t *, TypeU5BU5D_t562*, ParameterModifierU5BU5D_t2325* >::Invoke(8 /* System.Reflection.PropertyInfo System.Reflection.Binder::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[]) */, L_19, L_20, L_21, L_22, L_23, L_24);
		return L_25;
	}
}
// System.Boolean System.MonoType::HasElementTypeImpl()
extern "C" bool MonoType_HasElementTypeImpl_m21329 (MonoType_t * __this, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(74 /* System.Boolean System.MonoType::IsArrayImpl() */, __this);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(75 /* System.Boolean System.MonoType::IsByRefImpl() */, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(76 /* System.Boolean System.MonoType::IsPointerImpl() */, __this);
		G_B4_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		return G_B4_0;
	}
}
// System.Boolean System.MonoType::IsArrayImpl()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool MonoType_IsArrayImpl_m21330 (MonoType_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_0 = Type_IsArrayImpl_m17766(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.MonoType::IsByRefImpl()
extern "C" bool MonoType_IsByRefImpl_m21331 (MonoType_t * __this, const MethodInfo* method)
{
	typedef bool (*MonoType_IsByRefImpl_m21331_ftn) (MonoType_t *);
	static MonoType_IsByRefImpl_m21331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_IsByRefImpl_m21331_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsByRefImpl()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.MonoType::IsPointerImpl()
extern "C" bool MonoType_IsPointerImpl_m21332 (MonoType_t * __this, const MethodInfo* method)
{
	typedef bool (*MonoType_IsPointerImpl_m21332_ftn) (MonoType_t *);
	static MonoType_IsPointerImpl_m21332_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_IsPointerImpl_m21332_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsPointerImpl()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.MonoType::IsPrimitiveImpl()
extern "C" bool MonoType_IsPrimitiveImpl_m21333 (MonoType_t * __this, const MethodInfo* method)
{
	typedef bool (*MonoType_IsPrimitiveImpl_m21333_ftn) (MonoType_t *);
	static MonoType_IsPrimitiveImpl_m21333_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_IsPrimitiveImpl_m21333_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsPrimitiveImpl()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" bool MonoType_IsSubclassOf_m21334 (MonoType_t * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral2325, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Type_t * L_2 = ___type;
		bool L_3 = Type_IsSubclassOf_m17747(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern const Il2CppType* DefaultMemberAttribute_t1138_0_0_0_var;
extern const Il2CppType* ParamArrayAttribute_t715_0_0_0_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Binder_t2543_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* MissingMethodException_t4311_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Missing_t4030_il2cpp_TypeInfo_var;
extern TypeInfo* MethodBaseU5BU5D_t4367_il2cpp_TypeInfo_var;
extern TypeInfo* MissingFieldException_t4309_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoType_InvokeMember_m21335 (MonoType_t * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2543 * ___binder, Object_t * ___target, ObjectU5BU5D_t21* ___args, ParameterModifierU5BU5D_t2325* ___modifiers, CultureInfo_t1331 * ___culture, StringU5BU5D_t20* ___namedParameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t1138_0_0_0_var = il2cpp_codegen_type_from_index(1864);
		ParamArrayAttribute_t715_0_0_0_var = il2cpp_codegen_type_from_index(464);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Binder_t2543_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8292);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		MissingMethodException_t4311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8471);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Missing_t4030_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8174);
		MethodBaseU5BU5D_t4367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8291);
		MissingFieldException_t4309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8511);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	ConstructorInfoU5BU5D_t2967* V_1 = {0};
	Object_t * V_2 = {0};
	MethodBase_t592 * V_3 = {0};
	Object_t * V_4 = {0};
	DefaultMemberAttribute_t1138 * V_5 = {0};
	bool V_6 = false;
	String_t* V_7 = {0};
	bool V_8 = false;
	MethodInfoU5BU5D_t1670* V_9 = {0};
	Object_t * V_10 = {0};
	MethodBase_t592 * V_11 = {0};
	ParameterInfoU5BU5D_t561* V_12 = {0};
	int32_t V_13 = 0;
	bool V_14 = false;
	Object_t * V_15 = {0};
	FieldInfo_t * V_16 = {0};
	FieldInfo_t * V_17 = {0};
	PropertyInfoU5BU5D_t1645* V_18 = {0};
	Object_t * V_19 = {0};
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	MethodBaseU5BU5D_t4367* V_22 = {0};
	MethodBase_t592 * V_23 = {0};
	MethodBase_t592 * V_24 = {0};
	ParameterInfoU5BU5D_t561* V_25 = {0};
	bool V_26 = false;
	Object_t * V_27 = {0};
	PropertyInfoU5BU5D_t1645* V_28 = {0};
	Object_t * V_29 = {0};
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	MethodBaseU5BU5D_t4367* V_32 = {0};
	MethodBase_t592 * V_33 = {0};
	MethodBase_t592 * V_34 = {0};
	ParameterInfoU5BU5D_t561* V_35 = {0};
	bool V_36 = false;
	Object_t * V_37 = {0};
	int32_t G_B56_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B111_0 = 0;
	{
		int32_t L_0 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)512))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_1&(int32_t)((int32_t)13312))))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_t1126 * L_2 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_2, (String_t*) &_stringLiteral5571, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		goto IL_002d;
	}

IL_001f:
	{
		String_t* L_3 = ___name;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		ArgumentNullException_t1328 * L_4 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_4, (String_t*) &_stringLiteral1722, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002d:
	{
		int32_t L_5 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)1024))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_6 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_6&(int32_t)((int32_t)2048))))
		{
			goto IL_004f;
		}
	}
	{
		ArgumentException_t1126 * L_7 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_7, (String_t*) &_stringLiteral5572, (String_t*) &_stringLiteral5571, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004f:
	{
		int32_t L_8 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_8&(int32_t)((int32_t)4096))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_9 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_9&(int32_t)((int32_t)8192))))
		{
			goto IL_0071;
		}
	}
	{
		ArgumentException_t1126 * L_10 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_10, (String_t*) &_stringLiteral5573, (String_t*) &_stringLiteral5571, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0071:
	{
		int32_t L_11 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_11&(int32_t)((int32_t)256))))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_12 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_12&(int32_t)((int32_t)2048))))
		{
			goto IL_0093;
		}
	}
	{
		ArgumentException_t1126 * L_13 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_13, (String_t*) &_stringLiteral5574, (String_t*) &_stringLiteral5571, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0093:
	{
		int32_t L_14 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_14&(int32_t)((int32_t)8192))))
		{
			goto IL_00ac;
		}
	}
	{
		ArgumentException_t1126 * L_15 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_15, (String_t*) &_stringLiteral5575, (String_t*) &_stringLiteral5571, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_00ac:
	{
		StringU5BU5D_t20* L_16 = ___namedParameters;
		if (!L_16)
		{
			goto IL_00c9;
		}
	}
	{
		ObjectU5BU5D_t21* L_17 = ___args;
		if (!L_17)
		{
			goto IL_00be;
		}
	}
	{
		ObjectU5BU5D_t21* L_18 = ___args;
		NullCheck(L_18);
		StringU5BU5D_t20* L_19 = ___namedParameters;
		NullCheck(L_19);
		if ((((int32_t)(((int32_t)(((Array_t *)L_18)->max_length)))) >= ((int32_t)(((int32_t)(((Array_t *)L_19)->max_length))))))
		{
			goto IL_00c9;
		}
	}

IL_00be:
	{
		ArgumentException_t1126 * L_20 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_20, (String_t*) &_stringLiteral5576, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_00c9:
	{
		int32_t L_21 = ___invokeAttr;
		if (((int32_t)((int32_t)L_21&(int32_t)((int32_t)16128))))
		{
			goto IL_00e2;
		}
	}
	{
		ArgumentException_t1126 * L_22 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_22, (String_t*) &_stringLiteral5577, (String_t*) &_stringLiteral5571, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_00e2:
	{
		int32_t L_23 = ___invokeAttr;
		if (((int32_t)((int32_t)L_23&(int32_t)((int32_t)48))))
		{
			goto IL_00f0;
		}
	}
	{
		int32_t L_24 = ___invokeAttr;
		___invokeAttr = ((int32_t)((int32_t)L_24|(int32_t)((int32_t)16)));
	}

IL_00f0:
	{
		int32_t L_25 = ___invokeAttr;
		if (((int32_t)((int32_t)L_25&(int32_t)((int32_t)12))))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_26 = ___invokeAttr;
		___invokeAttr = ((int32_t)((int32_t)L_26|(int32_t)((int32_t)12)));
	}

IL_00fe:
	{
		Binder_t2543 * L_27 = ___binder;
		if (L_27)
		{
			goto IL_010a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t2543_il2cpp_TypeInfo_var);
		Binder_t2543 * L_28 = Binder_get_DefaultBinder_m19383(NULL /*static, unused*/, /*hidden argument*/NULL);
		___binder = L_28;
	}

IL_010a:
	{
		int32_t L_29 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_29&(int32_t)((int32_t)512))))
		{
			goto IL_0184;
		}
	}
	{
		int32_t L_30 = ___invokeAttr;
		___invokeAttr = ((int32_t)((int32_t)L_30|(int32_t)2));
		int32_t L_31 = ___invokeAttr;
		ConstructorInfoU5BU5D_t2967* L_32 = (ConstructorInfoU5BU5D_t2967*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t2967*, int32_t >::Invoke(85 /* System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags) */, __this, L_31);
		V_1 = L_32;
		V_2 = NULL;
		Binder_t2543 * L_33 = ___binder;
		int32_t L_34 = ___invokeAttr;
		ConstructorInfoU5BU5D_t2967* L_35 = V_1;
		ParameterModifierU5BU5D_t2325* L_36 = ___modifiers;
		CultureInfo_t1331 * L_37 = ___culture;
		StringU5BU5D_t20* L_38 = ___namedParameters;
		NullCheck(L_33);
		MethodBase_t592 * L_39 = (MethodBase_t592 *)VirtFuncInvoker7< MethodBase_t592 *, int32_t, MethodBaseU5BU5D_t4367*, ObjectU5BU5D_t21**, ParameterModifierU5BU5D_t2325*, CultureInfo_t1331 *, StringU5BU5D_t20*, Object_t ** >::Invoke(4 /* System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&) */, L_33, L_34, (MethodBaseU5BU5D_t4367*)(MethodBaseU5BU5D_t4367*)L_35, (&___args), L_36, L_37, L_38, (&V_2));
		V_3 = L_39;
		MethodBase_t592 * L_40 = V_3;
		if (L_40)
		{
			goto IL_0168;
		}
	}
	{
		bool L_41 = (bool)VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Type::get_IsValueType() */, __this);
		if (!L_41)
		{
			goto IL_014d;
		}
	}
	{
		ObjectU5BU5D_t21* L_42 = ___args;
		if (L_42)
		{
			goto IL_014d;
		}
	}
	{
		Object_t * L_43 = Activator_CreateInstanceInternal_m20800(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_43;
	}

IL_014d:
	{
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.MonoType::get_FullName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_45 = String_Concat_m103(NULL /*static, unused*/, (String_t*) &_stringLiteral5578, L_44, (String_t*) &_stringLiteral4737, /*hidden argument*/NULL);
		MissingMethodException_t4311 * L_46 = (MissingMethodException_t4311 *)il2cpp_codegen_object_new (MissingMethodException_t4311_il2cpp_TypeInfo_var);
		MissingMethodException__ctor_m21285(L_46, L_45, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_46);
	}

IL_0168:
	{
		MethodBase_t592 * L_47 = V_3;
		Object_t * L_48 = ___target;
		int32_t L_49 = ___invokeAttr;
		Binder_t2543 * L_50 = ___binder;
		ObjectU5BU5D_t21* L_51 = ___args;
		CultureInfo_t1331 * L_52 = ___culture;
		NullCheck(L_47);
		Object_t * L_53 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t2543 *, ObjectU5BU5D_t21*, CultureInfo_t1331 * >::Invoke(17 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_47, L_48, L_49, L_50, L_51, L_52);
		V_4 = L_53;
		Binder_t2543 * L_54 = ___binder;
		Object_t * L_55 = V_2;
		NullCheck(L_54);
		VirtActionInvoker2< ObjectU5BU5D_t21**, Object_t * >::Invoke(6 /* System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object) */, L_54, (&___args), L_55);
		Object_t * L_56 = V_4;
		return L_56;
	}

IL_0184:
	{
		String_t* L_57 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_59 = String_op_Equality_m2344(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_01c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_60 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(DefaultMemberAttribute_t1138_0_0_0_var), /*hidden argument*/NULL);
		bool L_61 = Attribute_IsDefined_m17067(NULL /*static, unused*/, __this, L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_01c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(DefaultMemberAttribute_t1138_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t471 * L_63 = Attribute_GetCustomAttribute_m11507(NULL /*static, unused*/, __this, L_62, /*hidden argument*/NULL);
		V_5 = ((DefaultMemberAttribute_t1138 *)Castclass(L_63, DefaultMemberAttribute_t1138_il2cpp_TypeInfo_var));
		DefaultMemberAttribute_t1138 * L_64 = V_5;
		NullCheck(L_64);
		String_t* L_65 = DefaultMemberAttribute_get_MemberName_m17809(L_64, /*hidden argument*/NULL);
		___name = L_65;
	}

IL_01c5:
	{
		int32_t L_66 = ___invokeAttr;
		V_6 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_66&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_7 = (String_t*)NULL;
		V_8 = 0;
		int32_t L_67 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_67&(int32_t)((int32_t)256))))
		{
			goto IL_02ea;
		}
	}
	{
		String_t* L_68 = ___name;
		int32_t L_69 = ___invokeAttr;
		bool L_70 = V_6;
		MethodInfoU5BU5D_t1670* L_71 = MonoType_GetMethodsByName_m21322(__this, L_68, L_69, L_70, __this, /*hidden argument*/NULL);
		V_9 = L_71;
		V_10 = NULL;
		ObjectU5BU5D_t21* L_72 = ___args;
		if (L_72)
		{
			goto IL_0200;
		}
	}
	{
		___args = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 0));
	}

IL_0200:
	{
		Binder_t2543 * L_73 = ___binder;
		int32_t L_74 = ___invokeAttr;
		MethodInfoU5BU5D_t1670* L_75 = V_9;
		ParameterModifierU5BU5D_t2325* L_76 = ___modifiers;
		CultureInfo_t1331 * L_77 = ___culture;
		StringU5BU5D_t20* L_78 = ___namedParameters;
		NullCheck(L_73);
		MethodBase_t592 * L_79 = (MethodBase_t592 *)VirtFuncInvoker7< MethodBase_t592 *, int32_t, MethodBaseU5BU5D_t4367*, ObjectU5BU5D_t21**, ParameterModifierU5BU5D_t2325*, CultureInfo_t1331 *, StringU5BU5D_t20*, Object_t ** >::Invoke(4 /* System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&) */, L_73, L_74, (MethodBaseU5BU5D_t4367*)(MethodBaseU5BU5D_t4367*)L_75, (&___args), L_76, L_77, L_78, (&V_10));
		V_11 = L_79;
		MethodBase_t592 * L_80 = V_11;
		if (L_80)
		{
			goto IL_024b;
		}
	}
	{
		MethodInfoU5BU5D_t1670* L_81 = V_9;
		NullCheck(L_81);
		if ((((int32_t)(((int32_t)(((Array_t *)L_81)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0234;
		}
	}
	{
		String_t* L_82 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_83 = String_Concat_m103(NULL /*static, unused*/, (String_t*) &_stringLiteral5579, L_82, (String_t*) &_stringLiteral5580, /*hidden argument*/NULL);
		V_7 = L_83;
		goto IL_0246;
	}

IL_0234:
	{
		String_t* L_84 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_85 = String_Concat_m103(NULL /*static, unused*/, (String_t*) &_stringLiteral5581, L_84, (String_t*) &_stringLiteral78, /*hidden argument*/NULL);
		V_7 = L_85;
	}

IL_0246:
	{
		goto IL_02ea;
	}

IL_024b:
	{
		MethodBase_t592 * L_86 = V_11;
		NullCheck(L_86);
		ParameterInfoU5BU5D_t561* L_87 = (ParameterInfoU5BU5D_t561*)VirtFuncInvoker0< ParameterInfoU5BU5D_t561* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_86);
		V_12 = L_87;
		V_13 = 0;
		goto IL_0292;
	}

IL_0259:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Missing_t4030_il2cpp_TypeInfo_var);
		Missing_t4030 * L_88 = ((Missing_t4030_StaticFields*)Missing_t4030_il2cpp_TypeInfo_var->static_fields)->___Value_0;
		ObjectU5BU5D_t21* L_89 = ___args;
		int32_t L_90 = V_13;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, L_90);
		int32_t L_91 = L_90;
		if ((!(((Object_t*)(Missing_t4030 *)L_88) == ((Object_t*)(Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_89, L_91))))))
		{
			goto IL_028c;
		}
	}
	{
		ParameterInfoU5BU5D_t561* L_92 = V_12;
		int32_t L_93 = V_13;
		NullCheck(L_92);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_92, L_93);
		int32_t L_94 = L_93;
		NullCheck((*(ParameterInfo_t676 **)(ParameterInfo_t676 **)SZArrayLdElema(L_92, L_94)));
		int32_t L_95 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, (*(ParameterInfo_t676 **)(ParameterInfo_t676 **)SZArrayLdElema(L_92, L_94)));
		if ((((int32_t)((int32_t)((int32_t)L_95&(int32_t)((int32_t)4096)))) == ((int32_t)((int32_t)4096))))
		{
			goto IL_028c;
		}
	}
	{
		ArgumentException_t1126 * L_96 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_96, (String_t*) &_stringLiteral5582, (String_t*) &_stringLiteral3545, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_96);
	}

IL_028c:
	{
		int32_t L_97 = V_13;
		V_13 = ((int32_t)((int32_t)L_97+(int32_t)1));
	}

IL_0292:
	{
		int32_t L_98 = V_13;
		ParameterInfoU5BU5D_t561* L_99 = V_12;
		NullCheck(L_99);
		if ((((int32_t)L_98) < ((int32_t)(((int32_t)(((Array_t *)L_99)->max_length))))))
		{
			goto IL_0259;
		}
	}
	{
		ParameterInfoU5BU5D_t561* L_100 = V_12;
		NullCheck(L_100);
		if ((((int32_t)(((int32_t)(((Array_t *)L_100)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_02bb;
		}
	}
	{
		ParameterInfoU5BU5D_t561* L_101 = V_12;
		ParameterInfoU5BU5D_t561* L_102 = V_12;
		NullCheck(L_102);
		NullCheck(L_101);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_101, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_102)->max_length)))-(int32_t)1)));
		int32_t L_103 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_102)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_104 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(ParamArrayAttribute_t715_0_0_0_var), /*hidden argument*/NULL);
		bool L_105 = Attribute_IsDefined_m17066(NULL /*static, unused*/, (*(ParameterInfo_t676 **)(ParameterInfo_t676 **)SZArrayLdElema(L_101, L_103)), L_104, /*hidden argument*/NULL);
		G_B56_0 = ((int32_t)(L_105));
		goto IL_02bc;
	}

IL_02bb:
	{
		G_B56_0 = 0;
	}

IL_02bc:
	{
		V_14 = G_B56_0;
		bool L_106 = V_14;
		if (!L_106)
		{
			goto IL_02cc;
		}
	}
	{
		MethodBase_t592 * L_107 = V_11;
		MonoType_ReorderParamArrayArguments_m21361(__this, (&___args), L_107, /*hidden argument*/NULL);
	}

IL_02cc:
	{
		MethodBase_t592 * L_108 = V_11;
		Object_t * L_109 = ___target;
		int32_t L_110 = ___invokeAttr;
		Binder_t2543 * L_111 = ___binder;
		ObjectU5BU5D_t21* L_112 = ___args;
		CultureInfo_t1331 * L_113 = ___culture;
		NullCheck(L_108);
		Object_t * L_114 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t2543 *, ObjectU5BU5D_t21*, CultureInfo_t1331 * >::Invoke(17 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_108, L_109, L_110, L_111, L_112, L_113);
		V_15 = L_114;
		Binder_t2543 * L_115 = ___binder;
		Object_t * L_116 = V_10;
		NullCheck(L_115);
		VirtActionInvoker2< ObjectU5BU5D_t21**, Object_t * >::Invoke(6 /* System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object) */, L_115, (&___args), L_116);
		Object_t * L_117 = V_15;
		return L_117;
	}

IL_02ea:
	{
		int32_t L_118 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_118&(int32_t)((int32_t)1024))))
		{
			goto IL_0319;
		}
	}
	{
		String_t* L_119 = ___name;
		int32_t L_120 = ___invokeAttr;
		FieldInfo_t * L_121 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags) */, __this, L_119, L_120);
		V_16 = L_121;
		FieldInfo_t * L_122 = V_16;
		if (!L_122)
		{
			goto IL_030b;
		}
	}
	{
		FieldInfo_t * L_123 = V_16;
		Object_t * L_124 = ___target;
		NullCheck(L_123);
		Object_t * L_125 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_123, L_124);
		return L_125;
	}

IL_030b:
	{
		int32_t L_126 = ___invokeAttr;
		if (((int32_t)((int32_t)L_126&(int32_t)((int32_t)4096))))
		{
			goto IL_0317;
		}
	}
	{
		V_8 = 1;
	}

IL_0317:
	{
		goto IL_0375;
	}

IL_0319:
	{
		int32_t L_127 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_127&(int32_t)((int32_t)2048))))
		{
			goto IL_0375;
		}
	}
	{
		String_t* L_128 = ___name;
		int32_t L_129 = ___invokeAttr;
		FieldInfo_t * L_130 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags) */, __this, L_128, L_129);
		V_17 = L_130;
		FieldInfo_t * L_131 = V_17;
		if (!L_131)
		{
			goto IL_0369;
		}
	}
	{
		ObjectU5BU5D_t21* L_132 = ___args;
		if (L_132)
		{
			goto IL_033f;
		}
	}
	{
		ArgumentNullException_t1328 * L_133 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_133, (String_t*) &_stringLiteral5583, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_133);
	}

IL_033f:
	{
		ObjectU5BU5D_t21* L_134 = ___args;
		if (!L_134)
		{
			goto IL_034a;
		}
	}
	{
		ObjectU5BU5D_t21* L_135 = ___args;
		NullCheck(L_135);
		if ((((int32_t)(((int32_t)(((Array_t *)L_135)->max_length)))) == ((int32_t)1)))
		{
			goto IL_035a;
		}
	}

IL_034a:
	{
		ArgumentException_t1126 * L_136 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_136, (String_t*) &_stringLiteral5584, (String_t*) &_stringLiteral5571, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_136);
	}

IL_035a:
	{
		FieldInfo_t * L_137 = V_17;
		Object_t * L_138 = ___target;
		ObjectU5BU5D_t21* L_139 = ___args;
		NullCheck(L_139);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_139, 0);
		int32_t L_140 = 0;
		NullCheck(L_137);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object) */, L_137, L_138, (*(Object_t **)(Object_t **)SZArrayLdElema(L_139, L_140)));
		return NULL;
	}

IL_0369:
	{
		int32_t L_141 = ___invokeAttr;
		if (((int32_t)((int32_t)L_141&(int32_t)((int32_t)8192))))
		{
			goto IL_0375;
		}
	}
	{
		V_8 = 1;
	}

IL_0375:
	{
		int32_t L_142 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_142&(int32_t)((int32_t)4096))))
		{
			goto IL_0472;
		}
	}
	{
		String_t* L_143 = ___name;
		int32_t L_144 = ___invokeAttr;
		bool L_145 = V_6;
		PropertyInfoU5BU5D_t1645* L_146 = MonoType_GetPropertiesByName_m21326(__this, L_143, L_144, L_145, __this, /*hidden argument*/NULL);
		V_18 = L_146;
		V_19 = NULL;
		V_21 = 0;
		V_20 = 0;
		goto IL_03b2;
	}

IL_0399:
	{
		PropertyInfoU5BU5D_t1645* L_147 = V_18;
		int32_t L_148 = V_20;
		NullCheck(L_147);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_147, L_148);
		int32_t L_149 = L_148;
		NullCheck((*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_147, L_149)));
		MethodInfo_t * L_150 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, (*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_147, L_149)), 1);
		if (!L_150)
		{
			goto IL_03ac;
		}
	}
	{
		int32_t L_151 = V_21;
		V_21 = ((int32_t)((int32_t)L_151+(int32_t)1));
	}

IL_03ac:
	{
		int32_t L_152 = V_20;
		V_20 = ((int32_t)((int32_t)L_152+(int32_t)1));
	}

IL_03b2:
	{
		int32_t L_153 = V_20;
		PropertyInfoU5BU5D_t1645* L_154 = V_18;
		NullCheck(L_154);
		if ((((int32_t)L_153) < ((int32_t)(((int32_t)(((Array_t *)L_154)->max_length))))))
		{
			goto IL_0399;
		}
	}
	{
		int32_t L_155 = V_21;
		V_22 = ((MethodBaseU5BU5D_t4367*)SZArrayNew(MethodBaseU5BU5D_t4367_il2cpp_TypeInfo_var, L_155));
		V_21 = 0;
		V_20 = 0;
		goto IL_03ee;
	}

IL_03cb:
	{
		PropertyInfoU5BU5D_t1645* L_156 = V_18;
		int32_t L_157 = V_20;
		NullCheck(L_156);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_156, L_157);
		int32_t L_158 = L_157;
		NullCheck((*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_156, L_158)));
		MethodInfo_t * L_159 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, (*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_156, L_158)), 1);
		V_23 = L_159;
		MethodBase_t592 * L_160 = V_23;
		if (!L_160)
		{
			goto IL_03e8;
		}
	}
	{
		MethodBaseU5BU5D_t4367* L_161 = V_22;
		int32_t L_162 = V_21;
		int32_t L_163 = L_162;
		V_21 = ((int32_t)((int32_t)L_163+(int32_t)1));
		MethodBase_t592 * L_164 = V_23;
		NullCheck(L_161);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_161, L_163);
		ArrayElementTypeCheck (L_161, L_164);
		*((MethodBase_t592 **)(MethodBase_t592 **)SZArrayLdElema(L_161, L_163)) = (MethodBase_t592 *)L_164;
	}

IL_03e8:
	{
		int32_t L_165 = V_20;
		V_20 = ((int32_t)((int32_t)L_165+(int32_t)1));
	}

IL_03ee:
	{
		int32_t L_166 = V_20;
		PropertyInfoU5BU5D_t1645* L_167 = V_18;
		NullCheck(L_167);
		if ((((int32_t)L_166) < ((int32_t)(((int32_t)(((Array_t *)L_167)->max_length))))))
		{
			goto IL_03cb;
		}
	}
	{
		Binder_t2543 * L_168 = ___binder;
		int32_t L_169 = ___invokeAttr;
		MethodBaseU5BU5D_t4367* L_170 = V_22;
		ParameterModifierU5BU5D_t2325* L_171 = ___modifiers;
		CultureInfo_t1331 * L_172 = ___culture;
		StringU5BU5D_t20* L_173 = ___namedParameters;
		NullCheck(L_168);
		MethodBase_t592 * L_174 = (MethodBase_t592 *)VirtFuncInvoker7< MethodBase_t592 *, int32_t, MethodBaseU5BU5D_t4367*, ObjectU5BU5D_t21**, ParameterModifierU5BU5D_t2325*, CultureInfo_t1331 *, StringU5BU5D_t20*, Object_t ** >::Invoke(4 /* System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&) */, L_168, L_169, L_170, (&___args), L_171, L_172, L_173, (&V_19));
		V_24 = L_174;
		MethodBase_t592 * L_175 = V_24;
		if (L_175)
		{
			goto IL_0414;
		}
	}
	{
		V_8 = 1;
		goto IL_046d;
	}

IL_0414:
	{
		MethodBase_t592 * L_176 = V_24;
		NullCheck(L_176);
		ParameterInfoU5BU5D_t561* L_177 = (ParameterInfoU5BU5D_t561*)VirtFuncInvoker0< ParameterInfoU5BU5D_t561* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_176);
		V_25 = L_177;
		ParameterInfoU5BU5D_t561* L_178 = V_25;
		NullCheck(L_178);
		if ((((int32_t)(((int32_t)(((Array_t *)L_178)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_043e;
		}
	}
	{
		ParameterInfoU5BU5D_t561* L_179 = V_25;
		ParameterInfoU5BU5D_t561* L_180 = V_25;
		NullCheck(L_180);
		NullCheck(L_179);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_179, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_180)->max_length)))-(int32_t)1)));
		int32_t L_181 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_180)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_182 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(ParamArrayAttribute_t715_0_0_0_var), /*hidden argument*/NULL);
		bool L_183 = Attribute_IsDefined_m17066(NULL /*static, unused*/, (*(ParameterInfo_t676 **)(ParameterInfo_t676 **)SZArrayLdElema(L_179, L_181)), L_182, /*hidden argument*/NULL);
		G_B91_0 = ((int32_t)(L_183));
		goto IL_043f;
	}

IL_043e:
	{
		G_B91_0 = 0;
	}

IL_043f:
	{
		V_26 = G_B91_0;
		bool L_184 = V_26;
		if (!L_184)
		{
			goto IL_044f;
		}
	}
	{
		MethodBase_t592 * L_185 = V_24;
		MonoType_ReorderParamArrayArguments_m21361(__this, (&___args), L_185, /*hidden argument*/NULL);
	}

IL_044f:
	{
		MethodBase_t592 * L_186 = V_24;
		Object_t * L_187 = ___target;
		int32_t L_188 = ___invokeAttr;
		Binder_t2543 * L_189 = ___binder;
		ObjectU5BU5D_t21* L_190 = ___args;
		CultureInfo_t1331 * L_191 = ___culture;
		NullCheck(L_186);
		Object_t * L_192 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t2543 *, ObjectU5BU5D_t21*, CultureInfo_t1331 * >::Invoke(17 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_186, L_187, L_188, L_189, L_190, L_191);
		V_27 = L_192;
		Binder_t2543 * L_193 = ___binder;
		Object_t * L_194 = V_19;
		NullCheck(L_193);
		VirtActionInvoker2< ObjectU5BU5D_t21**, Object_t * >::Invoke(6 /* System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object) */, L_193, (&___args), L_194);
		Object_t * L_195 = V_27;
		return L_195;
	}

IL_046d:
	{
		goto IL_056a;
	}

IL_0472:
	{
		int32_t L_196 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_196&(int32_t)((int32_t)8192))))
		{
			goto IL_056a;
		}
	}
	{
		String_t* L_197 = ___name;
		int32_t L_198 = ___invokeAttr;
		bool L_199 = V_6;
		PropertyInfoU5BU5D_t1645* L_200 = MonoType_GetPropertiesByName_m21326(__this, L_197, L_198, L_199, __this, /*hidden argument*/NULL);
		V_28 = L_200;
		V_29 = NULL;
		V_31 = 0;
		V_30 = 0;
		goto IL_04af;
	}

IL_0496:
	{
		PropertyInfoU5BU5D_t1645* L_201 = V_28;
		int32_t L_202 = V_30;
		NullCheck(L_201);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_201, L_202);
		int32_t L_203 = L_202;
		NullCheck((*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_201, L_203)));
		MethodInfo_t * L_204 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, (*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_201, L_203)), 1);
		if (!L_204)
		{
			goto IL_04a9;
		}
	}
	{
		int32_t L_205 = V_31;
		V_31 = ((int32_t)((int32_t)L_205+(int32_t)1));
	}

IL_04a9:
	{
		int32_t L_206 = V_30;
		V_30 = ((int32_t)((int32_t)L_206+(int32_t)1));
	}

IL_04af:
	{
		int32_t L_207 = V_30;
		PropertyInfoU5BU5D_t1645* L_208 = V_28;
		NullCheck(L_208);
		if ((((int32_t)L_207) < ((int32_t)(((int32_t)(((Array_t *)L_208)->max_length))))))
		{
			goto IL_0496;
		}
	}
	{
		int32_t L_209 = V_31;
		V_32 = ((MethodBaseU5BU5D_t4367*)SZArrayNew(MethodBaseU5BU5D_t4367_il2cpp_TypeInfo_var, L_209));
		V_31 = 0;
		V_30 = 0;
		goto IL_04eb;
	}

IL_04c8:
	{
		PropertyInfoU5BU5D_t1645* L_210 = V_28;
		int32_t L_211 = V_30;
		NullCheck(L_210);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_210, L_211);
		int32_t L_212 = L_211;
		NullCheck((*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_210, L_212)));
		MethodInfo_t * L_213 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, (*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_210, L_212)), 1);
		V_33 = L_213;
		MethodBase_t592 * L_214 = V_33;
		if (!L_214)
		{
			goto IL_04e5;
		}
	}
	{
		MethodBaseU5BU5D_t4367* L_215 = V_32;
		int32_t L_216 = V_31;
		int32_t L_217 = L_216;
		V_31 = ((int32_t)((int32_t)L_217+(int32_t)1));
		MethodBase_t592 * L_218 = V_33;
		NullCheck(L_215);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_215, L_217);
		ArrayElementTypeCheck (L_215, L_218);
		*((MethodBase_t592 **)(MethodBase_t592 **)SZArrayLdElema(L_215, L_217)) = (MethodBase_t592 *)L_218;
	}

IL_04e5:
	{
		int32_t L_219 = V_30;
		V_30 = ((int32_t)((int32_t)L_219+(int32_t)1));
	}

IL_04eb:
	{
		int32_t L_220 = V_30;
		PropertyInfoU5BU5D_t1645* L_221 = V_28;
		NullCheck(L_221);
		if ((((int32_t)L_220) < ((int32_t)(((int32_t)(((Array_t *)L_221)->max_length))))))
		{
			goto IL_04c8;
		}
	}
	{
		Binder_t2543 * L_222 = ___binder;
		int32_t L_223 = ___invokeAttr;
		MethodBaseU5BU5D_t4367* L_224 = V_32;
		ParameterModifierU5BU5D_t2325* L_225 = ___modifiers;
		CultureInfo_t1331 * L_226 = ___culture;
		StringU5BU5D_t20* L_227 = ___namedParameters;
		NullCheck(L_222);
		MethodBase_t592 * L_228 = (MethodBase_t592 *)VirtFuncInvoker7< MethodBase_t592 *, int32_t, MethodBaseU5BU5D_t4367*, ObjectU5BU5D_t21**, ParameterModifierU5BU5D_t2325*, CultureInfo_t1331 *, StringU5BU5D_t20*, Object_t ** >::Invoke(4 /* System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&) */, L_222, L_223, L_224, (&___args), L_225, L_226, L_227, (&V_29));
		V_34 = L_228;
		MethodBase_t592 * L_229 = V_34;
		if (L_229)
		{
			goto IL_0511;
		}
	}
	{
		V_8 = 1;
		goto IL_056a;
	}

IL_0511:
	{
		MethodBase_t592 * L_230 = V_34;
		NullCheck(L_230);
		ParameterInfoU5BU5D_t561* L_231 = (ParameterInfoU5BU5D_t561*)VirtFuncInvoker0< ParameterInfoU5BU5D_t561* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_230);
		V_35 = L_231;
		ParameterInfoU5BU5D_t561* L_232 = V_35;
		NullCheck(L_232);
		if ((((int32_t)(((int32_t)(((Array_t *)L_232)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_053b;
		}
	}
	{
		ParameterInfoU5BU5D_t561* L_233 = V_35;
		ParameterInfoU5BU5D_t561* L_234 = V_35;
		NullCheck(L_234);
		NullCheck(L_233);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_233, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_234)->max_length)))-(int32_t)1)));
		int32_t L_235 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_234)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_236 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(ParamArrayAttribute_t715_0_0_0_var), /*hidden argument*/NULL);
		bool L_237 = Attribute_IsDefined_m17066(NULL /*static, unused*/, (*(ParameterInfo_t676 **)(ParameterInfo_t676 **)SZArrayLdElema(L_233, L_235)), L_236, /*hidden argument*/NULL);
		G_B111_0 = ((int32_t)(L_237));
		goto IL_053c;
	}

IL_053b:
	{
		G_B111_0 = 0;
	}

IL_053c:
	{
		V_36 = G_B111_0;
		bool L_238 = V_36;
		if (!L_238)
		{
			goto IL_054c;
		}
	}
	{
		MethodBase_t592 * L_239 = V_34;
		MonoType_ReorderParamArrayArguments_m21361(__this, (&___args), L_239, /*hidden argument*/NULL);
	}

IL_054c:
	{
		MethodBase_t592 * L_240 = V_34;
		Object_t * L_241 = ___target;
		int32_t L_242 = ___invokeAttr;
		Binder_t2543 * L_243 = ___binder;
		ObjectU5BU5D_t21* L_244 = ___args;
		CultureInfo_t1331 * L_245 = ___culture;
		NullCheck(L_240);
		Object_t * L_246 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t2543 *, ObjectU5BU5D_t21*, CultureInfo_t1331 * >::Invoke(17 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_240, L_241, L_242, L_243, L_244, L_245);
		V_37 = L_246;
		Binder_t2543 * L_247 = ___binder;
		Object_t * L_248 = V_29;
		NullCheck(L_247);
		VirtActionInvoker2< ObjectU5BU5D_t21**, Object_t * >::Invoke(6 /* System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object) */, L_247, (&___args), L_248);
		Object_t * L_249 = V_37;
		return L_249;
	}

IL_056a:
	{
		String_t* L_250 = V_7;
		if (!L_250)
		{
			goto IL_0576;
		}
	}
	{
		String_t* L_251 = V_7;
		MissingMethodException_t4311 * L_252 = (MissingMethodException_t4311 *)il2cpp_codegen_object_new (MissingMethodException_t4311_il2cpp_TypeInfo_var);
		MissingMethodException__ctor_m21285(L_252, L_251, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_252);
	}

IL_0576:
	{
		bool L_253 = V_8;
		if (!L_253)
		{
			goto IL_0590;
		}
	}
	{
		String_t* L_254 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_255 = String_Concat_m103(NULL /*static, unused*/, (String_t*) &_stringLiteral5585, L_254, (String_t*) &_stringLiteral78, /*hidden argument*/NULL);
		MissingFieldException_t4309 * L_256 = (MissingFieldException_t4309 *)il2cpp_codegen_object_new (MissingFieldException_t4309_il2cpp_TypeInfo_var);
		MissingFieldException__ctor_m21275(L_256, L_255, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_256);
	}

IL_0590:
	{
		return NULL;
	}
}
// System.Type System.MonoType::GetElementType()
extern "C" Type_t * MonoType_GetElementType_m21336 (MonoType_t * __this, const MethodInfo* method)
{
	typedef Type_t * (*MonoType_GetElementType_m21336_ftn) (MonoType_t *);
	static MonoType_GetElementType_m21336_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_GetElementType_m21336_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetElementType()");
	return _il2cpp_icall_func(__this);
}
// System.Type System.MonoType::get_UnderlyingSystemType()
extern "C" Type_t * MonoType_get_UnderlyingSystemType_m21337 (MonoType_t * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Reflection.Assembly System.MonoType::get_Assembly()
extern "C" Assembly_t1601 * MonoType_get_Assembly_m21338 (MonoType_t * __this, const MethodInfo* method)
{
	typedef Assembly_t1601 * (*MonoType_get_Assembly_m21338_ftn) (MonoType_t *);
	static MonoType_get_Assembly_m21338_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_get_Assembly_m21338_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Assembly()");
	return _il2cpp_icall_func(__this);
}
// System.String System.MonoType::get_AssemblyQualifiedName()
extern "C" String_t* MonoType_get_AssemblyQualifiedName_m21339 (MonoType_t * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = MonoType_getFullName_m21340(__this, 1, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
extern "C" String_t* MonoType_getFullName_m21340 (MonoType_t * __this, bool ___full_name, bool ___assembly_qualified, const MethodInfo* method)
{
	typedef String_t* (*MonoType_getFullName_m21340_ftn) (MonoType_t *, bool, bool);
	static MonoType_getFullName_m21340_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_getFullName_m21340_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::getFullName(System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(__this, ___full_name, ___assembly_qualified);
}
// System.Type System.MonoType::get_BaseType()
extern "C" Type_t * MonoType_get_BaseType_m21341 (MonoType_t * __this, const MethodInfo* method)
{
	typedef Type_t * (*MonoType_get_BaseType_m21341_ftn) (MonoType_t *);
	static MonoType_get_BaseType_m21341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_get_BaseType_m21341_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_BaseType()");
	return _il2cpp_icall_func(__this);
}
// System.String System.MonoType::get_FullName()
extern TypeInfo* MonoTypeInfo_t4316_il2cpp_TypeInfo_var;
extern "C" String_t* MonoType_get_FullName_m21342 (MonoType_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoTypeInfo_t4316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8510);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		MonoTypeInfo_t4316 * L_0 = (__this->___type_info_8);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		MonoTypeInfo_t4316 * L_1 = (MonoTypeInfo_t4316 *)il2cpp_codegen_object_new (MonoTypeInfo_t4316_il2cpp_TypeInfo_var);
		MonoTypeInfo__ctor_m21307(L_1, /*hidden argument*/NULL);
		__this->___type_info_8 = L_1;
	}

IL_0013:
	{
		MonoTypeInfo_t4316 * L_2 = (__this->___type_info_8);
		NullCheck(L_2);
		String_t* L_3 = (L_2->___full_name_0);
		String_t* L_4 = L_3;
		V_0 = L_4;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		MonoTypeInfo_t4316 * L_5 = (__this->___type_info_8);
		String_t* L_6 = MonoType_getFullName_m21340(__this, 1, 0, /*hidden argument*/NULL);
		String_t* L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->___full_name_0 = L_7;
		String_t* L_8 = V_1;
		V_0 = L_8;
	}

IL_0039:
	{
		String_t* L_9 = V_0;
		return L_9;
	}
}
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4314_il2cpp_TypeInfo_var;
extern "C" bool MonoType_IsDefined_m21343 (MonoType_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8148);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		bool L_2 = MonoCustomAttrs_IsDefined_m21301(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4314_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t21* MonoType_GetCustomAttributes_m21344 (MonoType_t * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8148);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t21* L_1 = MonoCustomAttrs_GetCustomAttributes_m21300(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* MonoCustomAttrs_t4314_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t21* MonoType_GetCustomAttributes_m21345 (MonoType_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		MonoCustomAttrs_t4314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8148);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral4250, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Type_t * L_2 = ___attributeType;
		bool L_3 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4314_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t21* L_4 = MonoCustomAttrs_GetCustomAttributes_m21299(NULL /*static, unused*/, __this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
extern "C" int32_t MonoType_get_MemberType_m21346 (MonoType_t * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.MonoType::get_DeclaringType() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(94 /* System.Boolean System.MonoType::get_IsGenericParameter() */, __this);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return (int32_t)(((int32_t)128));
	}

IL_0016:
	{
		return (int32_t)(((int32_t)32));
	}
}
// System.String System.MonoType::get_Name()
extern "C" String_t* MonoType_get_Name_m21347 (MonoType_t * __this, const MethodInfo* method)
{
	typedef String_t* (*MonoType_get_Name_m21347_ftn) (MonoType_t *);
	static MonoType_get_Name_m21347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_get_Name_m21347_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Name()");
	return _il2cpp_icall_func(__this);
}
// System.String System.MonoType::get_Namespace()
extern "C" String_t* MonoType_get_Namespace_m21348 (MonoType_t * __this, const MethodInfo* method)
{
	typedef String_t* (*MonoType_get_Namespace_m21348_ftn) (MonoType_t *);
	static MonoType_get_Namespace_m21348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_get_Namespace_m21348_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Namespace()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.Module System.MonoType::get_Module()
extern "C" Module_t4006 * MonoType_get_Module_m21349 (MonoType_t * __this, const MethodInfo* method)
{
	typedef Module_t4006 * (*MonoType_get_Module_m21349_ftn) (MonoType_t *);
	static MonoType_get_Module_m21349_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_get_Module_m21349_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Module()");
	return _il2cpp_icall_func(__this);
}
// System.Type System.MonoType::get_DeclaringType()
extern "C" Type_t * MonoType_get_DeclaringType_m21350 (MonoType_t * __this, const MethodInfo* method)
{
	typedef Type_t * (*MonoType_get_DeclaringType_m21350_ftn) (MonoType_t *);
	static MonoType_get_DeclaringType_m21350_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_get_DeclaringType_m21350_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_DeclaringType()");
	return _il2cpp_icall_func(__this);
}
// System.Type System.MonoType::get_ReflectedType()
extern "C" Type_t * MonoType_get_ReflectedType_m21351 (MonoType_t * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.MonoType::get_DeclaringType() */, __this);
		return L_0;
	}
}
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
extern "C" RuntimeTypeHandle_t3830  MonoType_get_TypeHandle_m21352 (MonoType_t * __this, const MethodInfo* method)
{
	{
		RuntimeTypeHandle_t3830  L_0 = (((Type_t *)__this)->____impl_1);
		return L_0;
	}
}
// System.Int32 System.MonoType::GetArrayRank()
extern "C" int32_t MonoType_GetArrayRank_m21353 (MonoType_t * __this, const MethodInfo* method)
{
	typedef int32_t (*MonoType_GetArrayRank_m21353_ftn) (MonoType_t *);
	static MonoType_GetArrayRank_m21353_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_GetArrayRank_m21353_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetArrayRank()");
	return _il2cpp_icall_func(__this);
}
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoType_GetObjectData_m21354 (MonoType_t * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		UnitySerializationHolder_GetTypeData_m21562(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.MonoType::ToString()
extern "C" String_t* MonoType_ToString_m21355 (MonoType_t * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = MonoType_getFullName_m21340(__this, 0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Type[] System.MonoType::GetGenericArguments()
extern "C" TypeU5BU5D_t562* MonoType_GetGenericArguments_m21356 (MonoType_t * __this, const MethodInfo* method)
{
	typedef TypeU5BU5D_t562* (*MonoType_GetGenericArguments_m21356_ftn) (MonoType_t *);
	static MonoType_GetGenericArguments_m21356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_GetGenericArguments_m21356_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.MonoType::get_ContainsGenericParameters()
extern "C" bool MonoType_get_ContainsGenericParameters_m21357 (MonoType_t * __this, const MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t562* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(94 /* System.Boolean System.MonoType::get_IsGenericParameter() */, __this);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(92 /* System.Boolean System.Type::get_IsGenericType() */, __this);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		TypeU5BU5D_t562* L_2 = (TypeU5BU5D_t562*)VirtFuncInvoker0< TypeU5BU5D_t562* >::Invoke(88 /* System.Type[] System.MonoType::GetGenericArguments() */, __this);
		V_1 = L_2;
		V_2 = 0;
		goto IL_002f;
	}

IL_001d:
	{
		TypeU5BU5D_t562* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_3, L_5));
		Type_t * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(89 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_6);
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_9 = V_2;
		TypeU5BU5D_t562* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_001d;
		}
	}

IL_0035:
	{
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Type::get_HasElementType() */, __this);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.MonoType::GetElementType() */, __this);
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(89 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_12);
		return L_13;
	}

IL_0049:
	{
		return 0;
	}
}
// System.Boolean System.MonoType::get_IsGenericParameter()
extern "C" bool MonoType_get_IsGenericParameter_m21358 (MonoType_t * __this, const MethodInfo* method)
{
	typedef bool (*MonoType_get_IsGenericParameter_m21358_ftn) (MonoType_t *);
	static MonoType_get_IsGenericParameter_m21358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoType_get_IsGenericParameter_m21358_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_IsGenericParameter()");
	return _il2cpp_icall_func(__this);
}
// System.Type System.MonoType::GetGenericTypeDefinition()
extern TypeInfo* InvalidOperationException_t1086_il2cpp_TypeInfo_var;
extern "C" Type_t * MonoType_GetGenericTypeDefinition_m21359 (MonoType_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1609);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	{
		Type_t * L_0 = Type_GetGenericTypeDefinition_impl_m17780(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		InvalidOperationException_t1086 * L_2 = (InvalidOperationException_t1086 *)il2cpp_codegen_object_new (InvalidOperationException_t1086_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11581(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0010:
	{
		Type_t * L_3 = V_0;
		return L_3;
	}
}
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
extern "C" MethodBase_t592 * MonoType_CheckMethodSecurity_m21360 (MonoType_t * __this, MethodBase_t592 * ___mb, const MethodInfo* method)
{
	{
		MethodBase_t592 * L_0 = ___mb;
		return L_0;
	}
}
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern "C" void MonoType_ReorderParamArrayArguments_m21361 (MonoType_t * __this, ObjectU5BU5D_t21** ___args, MethodBase_t592 * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t561* V_0 = {0};
	ObjectU5BU5D_t21* V_1 = {0};
	Array_t * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		MethodBase_t592 * L_0 = ___method;
		NullCheck(L_0);
		ParameterInfoU5BU5D_t561* L_1 = (ParameterInfoU5BU5D_t561*)VirtFuncInvoker0< ParameterInfoU5BU5D_t561* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		V_0 = L_1;
		ParameterInfoU5BU5D_t561* L_2 = V_0;
		NullCheck(L_2);
		V_1 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		ParameterInfoU5BU5D_t561* L_3 = V_0;
		ParameterInfoU5BU5D_t561* L_4 = V_0;
		NullCheck(L_4);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)1)));
		int32_t L_5 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))-(int32_t)1));
		NullCheck((*(ParameterInfo_t676 **)(ParameterInfo_t676 **)SZArrayLdElema(L_3, L_5)));
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t676 **)(ParameterInfo_t676 **)SZArrayLdElema(L_3, L_5)));
		NullCheck(L_6);
		Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_6);
		ObjectU5BU5D_t21** L_8 = ___args;
		NullCheck((*((ObjectU5BU5D_t21**)L_8)));
		ParameterInfoU5BU5D_t561* L_9 = V_0;
		NullCheck(L_9);
		Array_t * L_10 = Array_CreateInstance_m11496(NULL /*static, unused*/, L_7, ((int32_t)((int32_t)(((int32_t)(((Array_t *)(*((ObjectU5BU5D_t21**)L_8)))->max_length)))-(int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)1)))), /*hidden argument*/NULL);
		V_2 = L_10;
		V_3 = 0;
		V_4 = 0;
		goto IL_0062;
	}

IL_0038:
	{
		int32_t L_11 = V_4;
		ParameterInfoU5BU5D_t561* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_12)->max_length)))-(int32_t)1)))))
		{
			goto IL_004c;
		}
	}
	{
		ObjectU5BU5D_t21* L_13 = V_1;
		int32_t L_14 = V_4;
		ObjectU5BU5D_t21** L_15 = ___args;
		int32_t L_16 = V_4;
		NullCheck((*((ObjectU5BU5D_t21**)L_15)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ObjectU5BU5D_t21**)L_15)), L_16);
		int32_t L_17 = L_16;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		ArrayElementTypeCheck (L_13, (*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t21**)L_15)), L_17)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t21**)L_15)), L_17));
		goto IL_005c;
	}

IL_004c:
	{
		Array_t * L_18 = V_2;
		ObjectU5BU5D_t21** L_19 = ___args;
		int32_t L_20 = V_4;
		NullCheck((*((ObjectU5BU5D_t21**)L_19)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ObjectU5BU5D_t21**)L_19)), L_20);
		int32_t L_21 = L_20;
		int32_t L_22 = V_3;
		NullCheck(L_18);
		Array_SetValue_m11499(L_18, (*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t21**)L_19)), L_21)), L_22, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_24 = V_4;
		V_4 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_25 = V_4;
		ObjectU5BU5D_t21** L_26 = ___args;
		NullCheck((*((ObjectU5BU5D_t21**)L_26)));
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)(*((ObjectU5BU5D_t21**)L_26)))->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		ObjectU5BU5D_t21* L_27 = V_1;
		ParameterInfoU5BU5D_t561* L_28 = V_0;
		NullCheck(L_28);
		Array_t * L_29 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_28)->max_length)))-(int32_t)1)));
		ArrayElementTypeCheck (L_27, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_27, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_28)->max_length)))-(int32_t)1)))) = (Object_t *)L_29;
		ObjectU5BU5D_t21** L_30 = ___args;
		ObjectU5BU5D_t21* L_31 = V_1;
		*((Object_t **)(L_30)) = (Object_t *)L_31;
		return;
	}
}
// System.MulticastNotSupportedException
#include "mscorlib_System_MulticastNotSupportedException.h"
#ifndef _MSC_VER
#else
#endif
// System.MulticastNotSupportedException
#include "mscorlib_System_MulticastNotSupportedExceptionMethodDeclarations.h"



// System.Void System.MulticastNotSupportedException::.ctor()
extern "C" void MulticastNotSupportedException__ctor_m21362 (MulticastNotSupportedException_t4317 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5586, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MulticastNotSupportedException::.ctor(System.String)
extern "C" void MulticastNotSupportedException__ctor_m21363 (MulticastNotSupportedException_t4317 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MulticastNotSupportedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastNotSupportedException__ctor_m21364 (MulticastNotSupportedException_t4317 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttributeMethodDeclarations.h"



// System.Void System.NonSerializedAttribute::.ctor()
extern "C" void NonSerializedAttribute__ctor_m21365 (NonSerializedAttribute_t4318 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3240(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
#ifndef _MSC_VER
#else
#endif
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"



// System.Void System.NotImplementedException::.ctor()
extern "C" void NotImplementedException__ctor_m7377 (NotImplementedException_t689 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5587, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2147467263), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.NotImplementedException::.ctor(System.String)
extern "C" void NotImplementedException__ctor_m3208 (NotImplementedException_t689 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2147467263), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.NotImplementedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NotImplementedException__ctor_m21366 (NotImplementedException_t689 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.NotSupportedException::.ctor()
extern "C" void NotSupportedException__ctor_m2434 (NotSupportedException_t571 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5588, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233067), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" void NotSupportedException__ctor_m6570 (NotSupportedException_t571 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233067), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.NotSupportedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NotSupportedException__ctor_m21367 (NotSupportedException_t571 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
#ifndef _MSC_VER
#else
#endif
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"



// System.Void System.NullReferenceException::.ctor()
extern "C" void NullReferenceException__ctor_m11484 (NullReferenceException_t1118 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5589, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.NullReferenceException::.ctor(System.String)
extern "C" void NullReferenceException__ctor_m5419 (NullReferenceException_t1118 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.NullReferenceException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NullReferenceException__ctor_m21368 (NullReferenceException_t1118 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.NumberFormatter/CustomInfo
#include "mscorlib_System_NumberFormatter_CustomInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.NumberFormatter/CustomInfo
#include "mscorlib_System_NumberFormatter_CustomInfoMethodDeclarations.h"

// System.Globalization.NumberFormatInfo
#include "mscorlib_System_Globalization_NumberFormatInfo.h"
// System.Globalization.NumberFormatInfo
#include "mscorlib_System_Globalization_NumberFormatInfoMethodDeclarations.h"


// System.Void System.NumberFormatter/CustomInfo::.ctor()
extern "C" void CustomInfo__ctor_m21369 (CustomInfo_t4319 * __this, const MethodInfo* method)
{
	{
		__this->___DecimalPointPos_2 = (-1);
		__this->___ExponentNegativeSignOnly_10 = 1;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.NumberFormatter/CustomInfo::GetActiveSection(System.String,System.Boolean&,System.Boolean,System.Int32&,System.Int32&)
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void CustomInfo_GetActiveSection_m21370 (Object_t * __this /* static, unused */, String_t* ___format, bool* ___positive, bool ___zero, int32_t* ___offset, int32_t* ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Int32U5BU5D_t119* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	{
		V_0 = ((Int32U5BU5D_t119*)SZArrayNew(Int32U5BU5D_t119_il2cpp_TypeInfo_var, 3));
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		goto IL_007c;
	}

IL_0015:
	{
		String_t* L_0 = ___format;
		int32_t L_1 = V_4;
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m2787(L_0, L_1, /*hidden argument*/NULL);
		V_5 = L_2;
		uint16_t L_3 = V_5;
		uint16_t L_4 = V_3;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		uint16_t L_5 = V_3;
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		uint16_t L_6 = V_5;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0033;
		}
	}
	{
		uint16_t L_7 = V_5;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_003f;
		}
	}

IL_0033:
	{
		uint16_t L_8 = V_3;
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		uint16_t L_9 = V_5;
		V_3 = L_9;
		goto IL_003d;
	}

IL_003b:
	{
		V_3 = 0;
	}

IL_003d:
	{
		goto IL_0076;
	}

IL_003f:
	{
		uint16_t L_10 = V_3;
		if (L_10)
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_11 = ___format;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		uint16_t L_13 = String_get_Chars_m2787(L_11, L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_14 = V_4;
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_15 = ___format;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m2787(L_15, ((int32_t)((int32_t)L_16-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)92))))
		{
			goto IL_0076;
		}
	}

IL_0060:
	{
		Int32U5BU5D_t119* L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)) = (int32_t)((int32_t)((int32_t)L_21-(int32_t)L_22));
		int32_t L_23 = V_4;
		V_2 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_0076;
		}
	}
	{
		goto IL_0086;
	}

IL_0076:
	{
		int32_t L_25 = V_4;
		V_4 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_26 = V_4;
		String_t* L_27 = ___format;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m2782(L_27, /*hidden argument*/NULL);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0015;
		}
	}

IL_0086:
	{
		int32_t L_29 = V_1;
		if (L_29)
		{
			goto IL_0096;
		}
	}
	{
		int32_t* L_30 = ___offset;
		*((int32_t*)(L_30)) = (int32_t)0;
		int32_t* L_31 = ___length;
		String_t* L_32 = ___format;
		NullCheck(L_32);
		int32_t L_33 = String_get_Length_m2782(L_32, /*hidden argument*/NULL);
		*((int32_t*)(L_31)) = (int32_t)L_33;
		return;
	}

IL_0096:
	{
		int32_t L_34 = V_1;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		bool* L_35 = ___positive;
		if ((*((int8_t*)L_35)))
		{
			goto IL_00a1;
		}
	}
	{
		bool L_36 = ___zero;
		if (!L_36)
		{
			goto IL_00ab;
		}
	}

IL_00a1:
	{
		int32_t* L_37 = ___offset;
		*((int32_t*)(L_37)) = (int32_t)0;
		int32_t* L_38 = ___length;
		Int32U5BU5D_t119* L_39 = V_0;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 0);
		int32_t L_40 = 0;
		*((int32_t*)(L_38)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_39, L_40));
		return;
	}

IL_00ab:
	{
		Int32U5BU5D_t119* L_41 = V_0;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 0);
		int32_t L_42 = 0;
		String_t* L_43 = ___format;
		NullCheck(L_43);
		int32_t L_44 = String_get_Length_m2782(L_43, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_41, L_42))+(int32_t)1))) >= ((int32_t)L_44)))
		{
			goto IL_00cf;
		}
	}
	{
		bool* L_45 = ___positive;
		*((int8_t*)(L_45)) = (int8_t)1;
		int32_t* L_46 = ___offset;
		Int32U5BU5D_t119* L_47 = V_0;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 0);
		int32_t L_48 = 0;
		*((int32_t*)(L_46)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48))+(int32_t)1));
		int32_t* L_49 = ___length;
		String_t* L_50 = ___format;
		NullCheck(L_50);
		int32_t L_51 = String_get_Length_m2782(L_50, /*hidden argument*/NULL);
		int32_t* L_52 = ___offset;
		*((int32_t*)(L_49)) = (int32_t)((int32_t)((int32_t)L_51-(int32_t)(*((int32_t*)L_52))));
		return;
	}

IL_00cf:
	{
		int32_t* L_53 = ___offset;
		*((int32_t*)(L_53)) = (int32_t)0;
		int32_t* L_54 = ___length;
		Int32U5BU5D_t119* L_55 = V_0;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 0);
		int32_t L_56 = 0;
		*((int32_t*)(L_54)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_55, L_56));
		return;
	}

IL_00d9:
	{
		int32_t L_57 = V_1;
		if ((!(((uint32_t)L_57) == ((uint32_t)2))))
		{
			goto IL_0127;
		}
	}
	{
		bool L_58 = ___zero;
		if (!L_58)
		{
			goto IL_00f8;
		}
	}
	{
		int32_t* L_59 = ___offset;
		Int32U5BU5D_t119* L_60 = V_0;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, 0);
		int32_t L_61 = 0;
		Int32U5BU5D_t119* L_62 = V_0;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, 1);
		int32_t L_63 = 1;
		*((int32_t*)(L_59)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_60, L_61))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_62, L_63))))+(int32_t)2));
		int32_t* L_64 = ___length;
		String_t* L_65 = ___format;
		NullCheck(L_65);
		int32_t L_66 = String_get_Length_m2782(L_65, /*hidden argument*/NULL);
		int32_t* L_67 = ___offset;
		*((int32_t*)(L_64)) = (int32_t)((int32_t)((int32_t)L_66-(int32_t)(*((int32_t*)L_67))));
		return;
	}

IL_00f8:
	{
		bool* L_68 = ___positive;
		if (!(*((int8_t*)L_68)))
		{
			goto IL_0106;
		}
	}
	{
		int32_t* L_69 = ___offset;
		*((int32_t*)(L_69)) = (int32_t)0;
		int32_t* L_70 = ___length;
		Int32U5BU5D_t119* L_71 = V_0;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 0);
		int32_t L_72 = 0;
		*((int32_t*)(L_70)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_71, L_72));
		return;
	}

IL_0106:
	{
		Int32U5BU5D_t119* L_73 = V_0;
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, 1);
		int32_t L_74 = 1;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_73, L_74))) <= ((int32_t)0)))
		{
			goto IL_011d;
		}
	}
	{
		bool* L_75 = ___positive;
		*((int8_t*)(L_75)) = (int8_t)1;
		int32_t* L_76 = ___offset;
		Int32U5BU5D_t119* L_77 = V_0;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 0);
		int32_t L_78 = 0;
		*((int32_t*)(L_76)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_77, L_78))+(int32_t)1));
		int32_t* L_79 = ___length;
		Int32U5BU5D_t119* L_80 = V_0;
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, 1);
		int32_t L_81 = 1;
		*((int32_t*)(L_79)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_80, L_81));
		return;
	}

IL_011d:
	{
		int32_t* L_82 = ___offset;
		*((int32_t*)(L_82)) = (int32_t)0;
		int32_t* L_83 = ___length;
		Int32U5BU5D_t119* L_84 = V_0;
		NullCheck(L_84);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_84, 0);
		int32_t L_85 = 0;
		*((int32_t*)(L_83)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_84, L_85));
		return;
	}

IL_0127:
	{
		int32_t L_86 = V_1;
		if ((!(((uint32_t)L_86) == ((uint32_t)3))))
		{
			goto IL_016f;
		}
	}
	{
		bool L_87 = ___zero;
		if (!L_87)
		{
			goto IL_0140;
		}
	}
	{
		int32_t* L_88 = ___offset;
		Int32U5BU5D_t119* L_89 = V_0;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 0);
		int32_t L_90 = 0;
		Int32U5BU5D_t119* L_91 = V_0;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 1);
		int32_t L_92 = 1;
		*((int32_t*)(L_88)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_89, L_90))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_91, L_92))))+(int32_t)2));
		int32_t* L_93 = ___length;
		Int32U5BU5D_t119* L_94 = V_0;
		NullCheck(L_94);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_94, 2);
		int32_t L_95 = 2;
		*((int32_t*)(L_93)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_94, L_95));
		return;
	}

IL_0140:
	{
		bool* L_96 = ___positive;
		if (!(*((int8_t*)L_96)))
		{
			goto IL_014e;
		}
	}
	{
		int32_t* L_97 = ___offset;
		*((int32_t*)(L_97)) = (int32_t)0;
		int32_t* L_98 = ___length;
		Int32U5BU5D_t119* L_99 = V_0;
		NullCheck(L_99);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_99, 0);
		int32_t L_100 = 0;
		*((int32_t*)(L_98)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_99, L_100));
		return;
	}

IL_014e:
	{
		Int32U5BU5D_t119* L_101 = V_0;
		NullCheck(L_101);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_101, 1);
		int32_t L_102 = 1;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_101, L_102))) <= ((int32_t)0)))
		{
			goto IL_0165;
		}
	}
	{
		bool* L_103 = ___positive;
		*((int8_t*)(L_103)) = (int8_t)1;
		int32_t* L_104 = ___offset;
		Int32U5BU5D_t119* L_105 = V_0;
		NullCheck(L_105);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_105, 0);
		int32_t L_106 = 0;
		*((int32_t*)(L_104)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_105, L_106))+(int32_t)1));
		int32_t* L_107 = ___length;
		Int32U5BU5D_t119* L_108 = V_0;
		NullCheck(L_108);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_108, 1);
		int32_t L_109 = 1;
		*((int32_t*)(L_107)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_108, L_109));
		return;
	}

IL_0165:
	{
		int32_t* L_110 = ___offset;
		*((int32_t*)(L_110)) = (int32_t)0;
		int32_t* L_111 = ___length;
		Int32U5BU5D_t119* L_112 = V_0;
		NullCheck(L_112);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_112, 0);
		int32_t L_113 = 0;
		*((int32_t*)(L_111)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_112, L_113));
		return;
	}

IL_016f:
	{
		ArgumentException_t1126 * L_114 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11580(L_114, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_114);
	}
}
// System.NumberFormatter/CustomInfo System.NumberFormatter/CustomInfo::Parse(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo)
extern TypeInfo* CustomInfo_t4319_il2cpp_TypeInfo_var;
extern "C" CustomInfo_t4319 * CustomInfo_Parse_m21371 (Object_t * __this /* static, unused */, String_t* ___format, int32_t ___offset, int32_t ___length, NumberFormatInfo_t3955 * ___nfi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CustomInfo_t4319_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8512);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	CustomInfo_t4319 * V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint16_t V_8 = 0x0;
	uint16_t V_9 = 0x0;
	uint16_t V_10 = 0x0;
	{
		V_0 = 0;
		V_1 = 1;
		V_2 = 0;
		V_3 = 0;
		V_4 = 1;
		CustomInfo_t4319 * L_0 = (CustomInfo_t4319 *)il2cpp_codegen_object_new (CustomInfo_t4319_il2cpp_TypeInfo_var);
		CustomInfo__ctor_m21369(L_0, /*hidden argument*/NULL);
		V_5 = L_0;
		V_6 = 0;
		int32_t L_1 = ___offset;
		V_7 = L_1;
		goto IL_028d;
	}

IL_001d:
	{
		String_t* L_2 = ___format;
		int32_t L_3 = V_7;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m2787(L_2, L_3, /*hidden argument*/NULL);
		V_8 = L_4;
		uint16_t L_5 = V_8;
		uint16_t L_6 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0037;
		}
	}
	{
		uint16_t L_7 = V_8;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		V_0 = 0;
		goto IL_0287;
	}

IL_0037:
	{
		uint16_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0287;
	}

IL_003f:
	{
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_10 = V_8;
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_11 = V_8;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)48))))
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_12 = V_8;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)35))))
		{
			goto IL_006f;
		}
	}
	{
		V_3 = 0;
		CustomInfo_t4319 * L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = (L_13->___DecimalPointPos_2);
		V_1 = ((((int32_t)L_14) < ((int32_t)0))? 1 : 0);
		bool L_15 = V_1;
		V_2 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		int32_t L_16 = V_7;
		V_7 = ((int32_t)((int32_t)L_16-(int32_t)1));
		goto IL_0287;
	}

IL_006f:
	{
		uint16_t L_17 = V_8;
		V_10 = L_17;
		uint16_t L_18 = V_10;
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00e7;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_00fb;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_0095;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_024e;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_0095;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_00e7;
		}
	}

IL_0095:
	{
		uint16_t L_19 = V_10;
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 0)
		{
			goto IL_0270;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 1)
		{
			goto IL_00b3;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 2)
		{
			goto IL_0233;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 3)
		{
			goto IL_00b3;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 4)
		{
			goto IL_013b;
		}
	}

IL_00b3:
	{
		uint16_t L_20 = V_10;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)69))))
		{
			goto IL_01be;
		}
	}
	{
		uint16_t L_21 = V_10;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)92))))
		{
			goto IL_00dc;
		}
	}
	{
		uint16_t L_22 = V_10;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)101))))
		{
			goto IL_01be;
		}
	}
	{
		uint16_t L_23 = V_10;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)8240))))
		{
			goto IL_025f;
		}
	}
	{
		goto IL_0285;
	}

IL_00dc:
	{
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
		goto IL_0287;
	}

IL_00e7:
	{
		uint16_t L_25 = V_8;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)34))))
		{
			goto IL_00f3;
		}
	}
	{
		uint16_t L_26 = V_8;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_00f6;
		}
	}

IL_00f3:
	{
		uint16_t L_27 = V_8;
		V_0 = L_27;
	}

IL_00f6:
	{
		goto IL_0287;
	}

IL_00fb:
	{
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_0113;
		}
	}
	{
		bool L_29 = V_1;
		if (!L_29)
		{
			goto IL_0113;
		}
	}
	{
		CustomInfo_t4319 * L_30 = V_5;
		CustomInfo_t4319 * L_31 = L_30;
		NullCheck(L_31);
		int32_t L_32 = (L_31->___IntegerHeadSharpDigits_5);
		NullCheck(L_31);
		L_31->___IntegerHeadSharpDigits_5 = ((int32_t)((int32_t)L_32+(int32_t)1));
		goto IL_0139;
	}

IL_0113:
	{
		bool L_33 = V_2;
		if (!L_33)
		{
			goto IL_0127;
		}
	}
	{
		CustomInfo_t4319 * L_34 = V_5;
		CustomInfo_t4319 * L_35 = L_34;
		NullCheck(L_35);
		int32_t L_36 = (L_35->___DecimalTailSharpDigits_3);
		NullCheck(L_35);
		L_35->___DecimalTailSharpDigits_3 = ((int32_t)((int32_t)L_36+(int32_t)1));
		goto IL_0139;
	}

IL_0127:
	{
		bool L_37 = V_3;
		if (!L_37)
		{
			goto IL_0139;
		}
	}
	{
		CustomInfo_t4319 * L_38 = V_5;
		CustomInfo_t4319 * L_39 = L_38;
		NullCheck(L_39);
		int32_t L_40 = (L_39->___ExponentTailSharpDigits_9);
		NullCheck(L_39);
		L_39->___ExponentTailSharpDigits_9 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_0139:
	{
		goto IL_013b;
	}

IL_013b:
	{
		uint16_t L_41 = V_8;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)35))))
		{
			goto IL_015c;
		}
	}
	{
		V_4 = 0;
		bool L_42 = V_2;
		if (!L_42)
		{
			goto IL_0151;
		}
	}
	{
		CustomInfo_t4319 * L_43 = V_5;
		NullCheck(L_43);
		L_43->___DecimalTailSharpDigits_3 = 0;
		goto IL_015c;
	}

IL_0151:
	{
		bool L_44 = V_3;
		if (!L_44)
		{
			goto IL_015c;
		}
	}
	{
		CustomInfo_t4319 * L_45 = V_5;
		NullCheck(L_45);
		L_45->___ExponentTailSharpDigits_9 = 0;
	}

IL_015c:
	{
		CustomInfo_t4319 * L_46 = V_5;
		NullCheck(L_46);
		int32_t L_47 = (L_46->___IntegerHeadPos_6);
		if ((!(((uint32_t)L_47) == ((uint32_t)(-1)))))
		{
			goto IL_016f;
		}
	}
	{
		CustomInfo_t4319 * L_48 = V_5;
		int32_t L_49 = V_7;
		NullCheck(L_48);
		L_48->___IntegerHeadPos_6 = L_49;
	}

IL_016f:
	{
		bool L_50 = V_1;
		if (!L_50)
		{
			goto IL_0193;
		}
	}
	{
		CustomInfo_t4319 * L_51 = V_5;
		CustomInfo_t4319 * L_52 = L_51;
		NullCheck(L_52);
		int32_t L_53 = (L_52->___IntegerDigits_4);
		NullCheck(L_52);
		L_52->___IntegerDigits_4 = ((int32_t)((int32_t)L_53+(int32_t)1));
		int32_t L_54 = V_6;
		if ((((int32_t)L_54) <= ((int32_t)0)))
		{
			goto IL_018e;
		}
	}
	{
		CustomInfo_t4319 * L_55 = V_5;
		NullCheck(L_55);
		L_55->___UseGroup_0 = 1;
	}

IL_018e:
	{
		V_6 = 0;
		goto IL_01b9;
	}

IL_0193:
	{
		bool L_56 = V_2;
		if (!L_56)
		{
			goto IL_01a7;
		}
	}
	{
		CustomInfo_t4319 * L_57 = V_5;
		CustomInfo_t4319 * L_58 = L_57;
		NullCheck(L_58);
		int32_t L_59 = (L_58->___DecimalDigits_1);
		NullCheck(L_58);
		L_58->___DecimalDigits_1 = ((int32_t)((int32_t)L_59+(int32_t)1));
		goto IL_01b9;
	}

IL_01a7:
	{
		bool L_60 = V_3;
		if (!L_60)
		{
			goto IL_01b9;
		}
	}
	{
		CustomInfo_t4319 * L_61 = V_5;
		CustomInfo_t4319 * L_62 = L_61;
		NullCheck(L_62);
		int32_t L_63 = (L_62->___ExponentDigits_8);
		NullCheck(L_62);
		L_62->___ExponentDigits_8 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_01b9:
	{
		goto IL_0287;
	}

IL_01be:
	{
		CustomInfo_t4319 * L_64 = V_5;
		NullCheck(L_64);
		bool L_65 = (L_64->___UseExponent_7);
		if (!L_65)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0287;
	}

IL_01cc:
	{
		CustomInfo_t4319 * L_66 = V_5;
		NullCheck(L_66);
		L_66->___UseExponent_7 = 1;
		V_1 = 0;
		V_2 = 0;
		V_3 = 1;
		int32_t L_67 = V_7;
		int32_t L_68 = ___offset;
		int32_t L_69 = ___length;
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_67+(int32_t)1))-(int32_t)L_68))) >= ((int32_t)L_69)))
		{
			goto IL_0231;
		}
	}
	{
		String_t* L_70 = ___format;
		int32_t L_71 = V_7;
		NullCheck(L_70);
		uint16_t L_72 = String_get_Chars_m2787(L_70, ((int32_t)((int32_t)L_71+(int32_t)1)), /*hidden argument*/NULL);
		V_9 = L_72;
		uint16_t L_73 = V_9;
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_01fd;
		}
	}
	{
		CustomInfo_t4319 * L_74 = V_5;
		NullCheck(L_74);
		L_74->___ExponentNegativeSignOnly_10 = 0;
	}

IL_01fd:
	{
		uint16_t L_75 = V_9;
		if ((((int32_t)L_75) == ((int32_t)((int32_t)43))))
		{
			goto IL_0209;
		}
	}
	{
		uint16_t L_76 = V_9;
		if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0211;
		}
	}

IL_0209:
	{
		int32_t L_77 = V_7;
		V_7 = ((int32_t)((int32_t)L_77+(int32_t)1));
		goto IL_0231;
	}

IL_0211:
	{
		uint16_t L_78 = V_9;
		if ((((int32_t)L_78) == ((int32_t)((int32_t)48))))
		{
			goto IL_0231;
		}
	}
	{
		uint16_t L_79 = V_9;
		if ((((int32_t)L_79) == ((int32_t)((int32_t)35))))
		{
			goto IL_0231;
		}
	}
	{
		CustomInfo_t4319 * L_80 = V_5;
		NullCheck(L_80);
		L_80->___UseExponent_7 = 0;
		CustomInfo_t4319 * L_81 = V_5;
		NullCheck(L_81);
		int32_t L_82 = (L_81->___DecimalPointPos_2);
		if ((((int32_t)L_82) >= ((int32_t)0)))
		{
			goto IL_0231;
		}
	}
	{
		V_1 = 1;
	}

IL_0231:
	{
		goto IL_0287;
	}

IL_0233:
	{
		V_1 = 0;
		V_2 = 1;
		V_3 = 0;
		CustomInfo_t4319 * L_83 = V_5;
		NullCheck(L_83);
		int32_t L_84 = (L_83->___DecimalPointPos_2);
		if ((!(((uint32_t)L_84) == ((uint32_t)(-1)))))
		{
			goto IL_024c;
		}
	}
	{
		CustomInfo_t4319 * L_85 = V_5;
		int32_t L_86 = V_7;
		NullCheck(L_85);
		L_85->___DecimalPointPos_2 = L_86;
	}

IL_024c:
	{
		goto IL_0287;
	}

IL_024e:
	{
		CustomInfo_t4319 * L_87 = V_5;
		CustomInfo_t4319 * L_88 = L_87;
		NullCheck(L_88);
		int32_t L_89 = (L_88->___Percents_12);
		NullCheck(L_88);
		L_88->___Percents_12 = ((int32_t)((int32_t)L_89+(int32_t)1));
		goto IL_0287;
	}

IL_025f:
	{
		CustomInfo_t4319 * L_90 = V_5;
		CustomInfo_t4319 * L_91 = L_90;
		NullCheck(L_91);
		int32_t L_92 = (L_91->___Permilles_13);
		NullCheck(L_91);
		L_91->___Permilles_13 = ((int32_t)((int32_t)L_92+(int32_t)1));
		goto IL_0287;
	}

IL_0270:
	{
		bool L_93 = V_1;
		if (!L_93)
		{
			goto IL_0283;
		}
	}
	{
		CustomInfo_t4319 * L_94 = V_5;
		NullCheck(L_94);
		int32_t L_95 = (L_94->___IntegerDigits_4);
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_0283;
		}
	}
	{
		int32_t L_96 = V_6;
		V_6 = ((int32_t)((int32_t)L_96+(int32_t)1));
	}

IL_0283:
	{
		goto IL_0287;
	}

IL_0285:
	{
		goto IL_0287;
	}

IL_0287:
	{
		int32_t L_97 = V_7;
		V_7 = ((int32_t)((int32_t)L_97+(int32_t)1));
	}

IL_028d:
	{
		int32_t L_98 = V_7;
		int32_t L_99 = ___offset;
		int32_t L_100 = ___length;
		if ((((int32_t)((int32_t)((int32_t)L_98-(int32_t)L_99))) < ((int32_t)L_100)))
		{
			goto IL_001d;
		}
	}
	{
		CustomInfo_t4319 * L_101 = V_5;
		NullCheck(L_101);
		int32_t L_102 = (L_101->___ExponentDigits_8);
		if (L_102)
		{
			goto IL_02aa;
		}
	}
	{
		CustomInfo_t4319 * L_103 = V_5;
		NullCheck(L_103);
		L_103->___UseExponent_7 = 0;
		goto IL_02b2;
	}

IL_02aa:
	{
		CustomInfo_t4319 * L_104 = V_5;
		NullCheck(L_104);
		L_104->___IntegerHeadSharpDigits_5 = 0;
	}

IL_02b2:
	{
		CustomInfo_t4319 * L_105 = V_5;
		NullCheck(L_105);
		int32_t L_106 = (L_105->___DecimalDigits_1);
		if (L_106)
		{
			goto IL_02c3;
		}
	}
	{
		CustomInfo_t4319 * L_107 = V_5;
		NullCheck(L_107);
		L_107->___DecimalPointPos_2 = (-1);
	}

IL_02c3:
	{
		CustomInfo_t4319 * L_108 = V_5;
		CustomInfo_t4319 * L_109 = L_108;
		NullCheck(L_109);
		int32_t L_110 = (L_109->___DividePlaces_11);
		int32_t L_111 = V_6;
		NullCheck(L_109);
		L_109->___DividePlaces_11 = ((int32_t)((int32_t)L_110+(int32_t)((int32_t)((int32_t)L_111*(int32_t)3))));
		CustomInfo_t4319 * L_112 = V_5;
		return L_112;
	}
}
// System.String System.NumberFormatter/CustomInfo::Format(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Boolean,System.Text.StringBuilder,System.Text.StringBuilder,System.Text.StringBuilder)
extern TypeInfo* StringBuilder_t619_il2cpp_TypeInfo_var;
extern "C" String_t* CustomInfo_Format_m21372 (CustomInfo_t4319 * __this, String_t* ___format, int32_t ___offset, int32_t ___length, NumberFormatInfo_t3955 * ___nfi, bool ___positive, StringBuilder_t619 * ___sb_int, StringBuilder_t619 * ___sb_dec, StringBuilder_t619 * ___sb_exp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t619 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int32U5BU5D_t119* V_7 = {0};
	String_t* V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	uint16_t V_17 = 0x0;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	uint16_t V_21 = 0x0;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		StringBuilder_t619 * L_0 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2789(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 1;
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		NumberFormatInfo_t3955 * L_1 = ___nfi;
		NullCheck(L_1);
		Int32U5BU5D_t119* L_2 = NumberFormatInfo_get_RawNumberGroupSizes_m18757(L_1, /*hidden argument*/NULL);
		V_7 = L_2;
		NumberFormatInfo_t3955 * L_3 = ___nfi;
		NullCheck(L_3);
		String_t* L_4 = NumberFormatInfo_get_NumberGroupSeparator_m18756(L_3, /*hidden argument*/NULL);
		V_8 = L_4;
		V_9 = 0;
		V_10 = 0;
		V_11 = 0;
		V_12 = 0;
		V_13 = 0;
		bool L_5 = (__this->___UseGroup_0);
		if (!L_5)
		{
			goto IL_00e7;
		}
	}
	{
		Int32U5BU5D_t119* L_6 = V_7;
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00e7;
		}
	}
	{
		StringBuilder_t619 * L_7 = ___sb_int;
		NullCheck(L_7);
		int32_t L_8 = StringBuilder_get_Length_m6646(L_7, /*hidden argument*/NULL);
		V_9 = L_8;
		V_14 = 0;
		goto IL_0073;
	}

IL_0059:
	{
		int32_t L_9 = V_10;
		Int32U5BU5D_t119* L_10 = V_7;
		int32_t L_11 = V_14;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_10 = ((int32_t)((int32_t)L_9+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12))));
		int32_t L_13 = V_10;
		int32_t L_14 = V_9;
		if ((((int32_t)L_13) > ((int32_t)L_14)))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_15 = V_14;
		V_11 = L_15;
	}

IL_006d:
	{
		int32_t L_16 = V_14;
		V_14 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_17 = V_14;
		Int32U5BU5D_t119* L_18 = V_7;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0059;
		}
	}
	{
		Int32U5BU5D_t119* L_19 = V_7;
		int32_t L_20 = V_11;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		V_13 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_19, L_21));
		int32_t L_22 = V_9;
		int32_t L_23 = V_10;
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_24 = V_9;
		int32_t L_25 = V_10;
		G_B10_0 = ((int32_t)((int32_t)L_24-(int32_t)L_25));
		goto IL_0090;
	}

IL_008f:
	{
		G_B10_0 = 0;
	}

IL_0090:
	{
		V_15 = G_B10_0;
		int32_t L_26 = V_13;
		if (L_26)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_009e;
	}

IL_0098:
	{
		int32_t L_27 = V_11;
		V_11 = ((int32_t)((int32_t)L_27-(int32_t)1));
	}

IL_009e:
	{
		int32_t L_28 = V_11;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		Int32U5BU5D_t119* L_29 = V_7;
		int32_t L_30 = V_11;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		if (!(*(int32_t*)(int32_t*)SZArrayLdElema(L_29, L_31)))
		{
			goto IL_0098;
		}
	}

IL_00aa:
	{
		int32_t L_32 = V_15;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_33 = V_15;
		G_B18_0 = L_33;
		goto IL_00b8;
	}

IL_00b3:
	{
		Int32U5BU5D_t119* L_34 = V_7;
		int32_t L_35 = V_11;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		int32_t L_36 = L_35;
		G_B18_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_34, L_36));
	}

IL_00b8:
	{
		V_13 = G_B18_0;
	}

IL_00ba:
	{
		int32_t L_37 = V_15;
		if (L_37)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_38 = V_13;
		V_12 = L_38;
		goto IL_00e5;
	}

IL_00c4:
	{
		int32_t L_39 = V_11;
		int32_t L_40 = V_15;
		int32_t L_41 = V_13;
		V_11 = ((int32_t)((int32_t)L_39+(int32_t)((int32_t)((int32_t)L_40/(int32_t)L_41))));
		int32_t L_42 = V_15;
		int32_t L_43 = V_13;
		V_12 = ((int32_t)((int32_t)L_42%(int32_t)L_43));
		int32_t L_44 = V_12;
		if (L_44)
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_45 = V_13;
		V_12 = L_45;
		goto IL_00e5;
	}

IL_00df:
	{
		int32_t L_46 = V_11;
		V_11 = ((int32_t)((int32_t)L_46+(int32_t)1));
	}

IL_00e5:
	{
		goto IL_00ee;
	}

IL_00e7:
	{
		__this->___UseGroup_0 = 0;
	}

IL_00ee:
	{
		int32_t L_47 = ___offset;
		V_16 = L_47;
		goto IL_03ce;
	}

IL_00f6:
	{
		String_t* L_48 = ___format;
		int32_t L_49 = V_16;
		NullCheck(L_48);
		uint16_t L_50 = String_get_Chars_m2787(L_48, L_49, /*hidden argument*/NULL);
		V_17 = L_50;
		uint16_t L_51 = V_17;
		uint16_t L_52 = V_1;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0110;
		}
	}
	{
		uint16_t L_53 = V_17;
		if (!L_53)
		{
			goto IL_0110;
		}
	}
	{
		V_1 = 0;
		goto IL_03c8;
	}

IL_0110:
	{
		uint16_t L_54 = V_1;
		if (!L_54)
		{
			goto IL_0121;
		}
	}
	{
		StringBuilder_t619 * L_55 = V_0;
		uint16_t L_56 = V_17;
		NullCheck(L_55);
		StringBuilder_Append_m5401(L_55, L_56, /*hidden argument*/NULL);
		goto IL_03c8;
	}

IL_0121:
	{
		uint16_t L_57 = V_17;
		V_21 = L_57;
		uint16_t L_58 = V_21;
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_01af;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_01c3;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_0147;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_039d;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_0147;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_01af;
		}
	}

IL_0147:
	{
		uint16_t L_59 = V_21;
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 0)
		{
			goto IL_039b;
		}
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 1)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 2)
		{
			goto IL_0348;
		}
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 3)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 4)
		{
			goto IL_01c5;
		}
	}

IL_0165:
	{
		uint16_t L_60 = V_21;
		if ((((int32_t)L_60) == ((int32_t)((int32_t)69))))
		{
			goto IL_0297;
		}
	}
	{
		uint16_t L_61 = V_21;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)92))))
		{
			goto IL_018e;
		}
	}
	{
		uint16_t L_62 = V_21;
		if ((((int32_t)L_62) == ((int32_t)((int32_t)101))))
		{
			goto IL_0297;
		}
	}
	{
		uint16_t L_63 = V_21;
		if ((((int32_t)L_63) == ((int32_t)((int32_t)8240))))
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_03bd;
	}

IL_018e:
	{
		int32_t L_64 = V_16;
		V_16 = ((int32_t)((int32_t)L_64+(int32_t)1));
		int32_t L_65 = V_16;
		int32_t L_66 = ___offset;
		int32_t L_67 = ___length;
		if ((((int32_t)((int32_t)((int32_t)L_65-(int32_t)L_66))) >= ((int32_t)L_67)))
		{
			goto IL_01aa;
		}
	}
	{
		StringBuilder_t619 * L_68 = V_0;
		String_t* L_69 = ___format;
		int32_t L_70 = V_16;
		NullCheck(L_69);
		uint16_t L_71 = String_get_Chars_m2787(L_69, L_70, /*hidden argument*/NULL);
		NullCheck(L_68);
		StringBuilder_Append_m5401(L_68, L_71, /*hidden argument*/NULL);
	}

IL_01aa:
	{
		goto IL_03c8;
	}

IL_01af:
	{
		uint16_t L_72 = V_17;
		if ((((int32_t)L_72) == ((int32_t)((int32_t)34))))
		{
			goto IL_01bb;
		}
	}
	{
		uint16_t L_73 = V_17;
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_01be;
		}
	}

IL_01bb:
	{
		uint16_t L_74 = V_17;
		V_1 = L_74;
	}

IL_01be:
	{
		goto IL_03c8;
	}

IL_01c3:
	{
		goto IL_01c5;
	}

IL_01c5:
	{
		bool L_75 = V_2;
		if (!L_75)
		{
			goto IL_0261;
		}
	}
	{
		int32_t L_76 = V_4;
		V_4 = ((int32_t)((int32_t)L_76+(int32_t)1));
		int32_t L_77 = (__this->___IntegerDigits_4);
		int32_t L_78 = V_4;
		StringBuilder_t619 * L_79 = ___sb_int;
		NullCheck(L_79);
		int32_t L_80 = StringBuilder_get_Length_m6646(L_79, /*hidden argument*/NULL);
		int32_t L_81 = V_5;
		if ((((int32_t)((int32_t)((int32_t)L_77-(int32_t)L_78))) < ((int32_t)((int32_t)((int32_t)L_80+(int32_t)L_81)))))
		{
			goto IL_01ef;
		}
	}
	{
		uint16_t L_82 = V_17;
		if ((!(((uint32_t)L_82) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_025c;
		}
	}

IL_01ef:
	{
		goto IL_0247;
	}

IL_01f1:
	{
		StringBuilder_t619 * L_83 = V_0;
		StringBuilder_t619 * L_84 = ___sb_int;
		int32_t L_85 = V_5;
		int32_t L_86 = L_85;
		V_5 = ((int32_t)((int32_t)L_86+(int32_t)1));
		NullCheck(L_84);
		uint16_t L_87 = StringBuilder_get_Chars_m11585(L_84, L_86, /*hidden argument*/NULL);
		NullCheck(L_83);
		StringBuilder_Append_m5401(L_83, L_87, /*hidden argument*/NULL);
		bool L_88 = (__this->___UseGroup_0);
		if (!L_88)
		{
			goto IL_0247;
		}
	}
	{
		int32_t L_89 = V_9;
		int32_t L_90 = ((int32_t)((int32_t)L_89-(int32_t)1));
		V_9 = L_90;
		if ((((int32_t)L_90) <= ((int32_t)0)))
		{
			goto IL_0247;
		}
	}
	{
		int32_t L_91 = V_12;
		int32_t L_92 = ((int32_t)((int32_t)L_91-(int32_t)1));
		V_12 = L_92;
		if (L_92)
		{
			goto IL_0247;
		}
	}
	{
		StringBuilder_t619 * L_93 = V_0;
		String_t* L_94 = V_8;
		NullCheck(L_93);
		StringBuilder_Append_m2790(L_93, L_94, /*hidden argument*/NULL);
		int32_t L_95 = V_11;
		int32_t L_96 = ((int32_t)((int32_t)L_95-(int32_t)1));
		V_11 = L_96;
		Int32U5BU5D_t119* L_97 = V_7;
		NullCheck(L_97);
		if ((((int32_t)L_96) >= ((int32_t)(((int32_t)(((Array_t *)L_97)->max_length))))))
		{
			goto IL_0243;
		}
	}
	{
		int32_t L_98 = V_11;
		if ((((int32_t)L_98) < ((int32_t)0)))
		{
			goto IL_0243;
		}
	}
	{
		Int32U5BU5D_t119* L_99 = V_7;
		int32_t L_100 = V_11;
		NullCheck(L_99);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_99, L_100);
		int32_t L_101 = L_100;
		V_13 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_99, L_101));
	}

IL_0243:
	{
		int32_t L_102 = V_13;
		V_12 = L_102;
	}

IL_0247:
	{
		int32_t L_103 = (__this->___IntegerDigits_4);
		int32_t L_104 = V_4;
		int32_t L_105 = V_5;
		StringBuilder_t619 * L_106 = ___sb_int;
		NullCheck(L_106);
		int32_t L_107 = StringBuilder_get_Length_m6646(L_106, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_103-(int32_t)L_104))+(int32_t)L_105))) < ((int32_t)L_107)))
		{
			goto IL_01f1;
		}
	}

IL_025c:
	{
		goto IL_03c8;
	}

IL_0261:
	{
		bool L_108 = V_3;
		if (!L_108)
		{
			goto IL_0289;
		}
	}
	{
		int32_t L_109 = V_6;
		StringBuilder_t619 * L_110 = ___sb_dec;
		NullCheck(L_110);
		int32_t L_111 = StringBuilder_get_Length_m6646(L_110, /*hidden argument*/NULL);
		if ((((int32_t)L_109) >= ((int32_t)L_111)))
		{
			goto IL_0284;
		}
	}
	{
		StringBuilder_t619 * L_112 = V_0;
		StringBuilder_t619 * L_113 = ___sb_dec;
		int32_t L_114 = V_6;
		int32_t L_115 = L_114;
		V_6 = ((int32_t)((int32_t)L_115+(int32_t)1));
		NullCheck(L_113);
		uint16_t L_116 = StringBuilder_get_Chars_m11585(L_113, L_115, /*hidden argument*/NULL);
		NullCheck(L_112);
		StringBuilder_Append_m5401(L_112, L_116, /*hidden argument*/NULL);
	}

IL_0284:
	{
		goto IL_03c8;
	}

IL_0289:
	{
		StringBuilder_t619 * L_117 = V_0;
		uint16_t L_118 = V_17;
		NullCheck(L_117);
		StringBuilder_Append_m5401(L_117, L_118, /*hidden argument*/NULL);
		goto IL_03c8;
	}

IL_0297:
	{
		StringBuilder_t619 * L_119 = ___sb_exp;
		if (!L_119)
		{
			goto IL_02a3;
		}
	}
	{
		bool L_120 = (__this->___UseExponent_7);
		if (L_120)
		{
			goto IL_02b1;
		}
	}

IL_02a3:
	{
		StringBuilder_t619 * L_121 = V_0;
		uint16_t L_122 = V_17;
		NullCheck(L_121);
		StringBuilder_Append_m5401(L_121, L_122, /*hidden argument*/NULL);
		goto IL_03c8;
	}

IL_02b1:
	{
		V_18 = 1;
		V_19 = 0;
		int32_t L_123 = V_16;
		V_20 = ((int32_t)((int32_t)L_123+(int32_t)1));
		goto IL_0301;
	}

IL_02bf:
	{
		String_t* L_124 = ___format;
		int32_t L_125 = V_20;
		NullCheck(L_124);
		uint16_t L_126 = String_get_Chars_m2787(L_124, L_125, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_126) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_02d0;
		}
	}
	{
		V_19 = 1;
		goto IL_02fb;
	}

IL_02d0:
	{
		int32_t L_127 = V_20;
		int32_t L_128 = V_16;
		if ((!(((uint32_t)L_127) == ((uint32_t)((int32_t)((int32_t)L_128+(int32_t)1))))))
		{
			goto IL_02f2;
		}
	}
	{
		String_t* L_129 = ___format;
		int32_t L_130 = V_20;
		NullCheck(L_129);
		uint16_t L_131 = String_get_Chars_m2787(L_129, L_130, /*hidden argument*/NULL);
		if ((((int32_t)L_131) == ((int32_t)((int32_t)43))))
		{
			goto IL_02f0;
		}
	}
	{
		String_t* L_132 = ___format;
		int32_t L_133 = V_20;
		NullCheck(L_132);
		uint16_t L_134 = String_get_Chars_m2787(L_132, L_133, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_134) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_02f2;
		}
	}

IL_02f0:
	{
		goto IL_02fb;
	}

IL_02f2:
	{
		bool L_135 = V_19;
		if (L_135)
		{
			goto IL_02f9;
		}
	}
	{
		V_18 = 0;
	}

IL_02f9:
	{
		goto IL_0308;
	}

IL_02fb:
	{
		int32_t L_136 = V_20;
		V_20 = ((int32_t)((int32_t)L_136+(int32_t)1));
	}

IL_0301:
	{
		int32_t L_137 = V_20;
		int32_t L_138 = ___offset;
		int32_t L_139 = ___length;
		if ((((int32_t)((int32_t)((int32_t)L_137-(int32_t)L_138))) < ((int32_t)L_139)))
		{
			goto IL_02bf;
		}
	}

IL_0308:
	{
		bool L_140 = V_18;
		if (!L_140)
		{
			goto IL_033a;
		}
	}
	{
		int32_t L_141 = V_20;
		V_16 = ((int32_t)((int32_t)L_141-(int32_t)1));
		int32_t L_142 = (__this->___DecimalPointPos_2);
		V_2 = ((((int32_t)L_142) < ((int32_t)0))? 1 : 0);
		bool L_143 = V_2;
		V_3 = ((((int32_t)L_143) == ((int32_t)0))? 1 : 0);
		StringBuilder_t619 * L_144 = V_0;
		uint16_t L_145 = V_17;
		NullCheck(L_144);
		StringBuilder_Append_m5401(L_144, L_145, /*hidden argument*/NULL);
		StringBuilder_t619 * L_146 = V_0;
		StringBuilder_t619 * L_147 = ___sb_exp;
		NullCheck(L_146);
		StringBuilder_Append_m14677(L_146, L_147, /*hidden argument*/NULL);
		___sb_exp = (StringBuilder_t619 *)NULL;
		goto IL_0343;
	}

IL_033a:
	{
		StringBuilder_t619 * L_148 = V_0;
		uint16_t L_149 = V_17;
		NullCheck(L_148);
		StringBuilder_Append_m5401(L_148, L_149, /*hidden argument*/NULL);
	}

IL_0343:
	{
		goto IL_03c8;
	}

IL_0348:
	{
		int32_t L_150 = (__this->___DecimalPointPos_2);
		int32_t L_151 = V_16;
		if ((!(((uint32_t)L_150) == ((uint32_t)L_151))))
		{
			goto IL_0395;
		}
	}
	{
		int32_t L_152 = (__this->___DecimalDigits_1);
		if ((((int32_t)L_152) <= ((int32_t)0)))
		{
			goto IL_037d;
		}
	}
	{
		goto IL_0372;
	}

IL_035d:
	{
		StringBuilder_t619 * L_153 = V_0;
		StringBuilder_t619 * L_154 = ___sb_int;
		int32_t L_155 = V_5;
		int32_t L_156 = L_155;
		V_5 = ((int32_t)((int32_t)L_156+(int32_t)1));
		NullCheck(L_154);
		uint16_t L_157 = StringBuilder_get_Chars_m11585(L_154, L_156, /*hidden argument*/NULL);
		NullCheck(L_153);
		StringBuilder_Append_m5401(L_153, L_157, /*hidden argument*/NULL);
	}

IL_0372:
	{
		int32_t L_158 = V_5;
		StringBuilder_t619 * L_159 = ___sb_int;
		NullCheck(L_159);
		int32_t L_160 = StringBuilder_get_Length_m6646(L_159, /*hidden argument*/NULL);
		if ((((int32_t)L_158) < ((int32_t)L_160)))
		{
			goto IL_035d;
		}
	}

IL_037d:
	{
		StringBuilder_t619 * L_161 = ___sb_dec;
		NullCheck(L_161);
		int32_t L_162 = StringBuilder_get_Length_m6646(L_161, /*hidden argument*/NULL);
		if ((((int32_t)L_162) <= ((int32_t)0)))
		{
			goto IL_0395;
		}
	}
	{
		StringBuilder_t619 * L_163 = V_0;
		NumberFormatInfo_t3955 * L_164 = ___nfi;
		NullCheck(L_164);
		String_t* L_165 = NumberFormatInfo_get_NumberDecimalSeparator_m18755(L_164, /*hidden argument*/NULL);
		NullCheck(L_163);
		StringBuilder_Append_m2790(L_163, L_165, /*hidden argument*/NULL);
	}

IL_0395:
	{
		V_2 = 0;
		V_3 = 1;
		goto IL_03c8;
	}

IL_039b:
	{
		goto IL_03c8;
	}

IL_039d:
	{
		StringBuilder_t619 * L_166 = V_0;
		NumberFormatInfo_t3955 * L_167 = ___nfi;
		NullCheck(L_167);
		String_t* L_168 = NumberFormatInfo_get_PercentSymbol_m18766(L_167, /*hidden argument*/NULL);
		NullCheck(L_166);
		StringBuilder_Append_m2790(L_166, L_168, /*hidden argument*/NULL);
		goto IL_03c8;
	}

IL_03ad:
	{
		StringBuilder_t619 * L_169 = V_0;
		NumberFormatInfo_t3955 * L_170 = ___nfi;
		NullCheck(L_170);
		String_t* L_171 = NumberFormatInfo_get_PerMilleSymbol_m18767(L_170, /*hidden argument*/NULL);
		NullCheck(L_169);
		StringBuilder_Append_m2790(L_169, L_171, /*hidden argument*/NULL);
		goto IL_03c8;
	}

IL_03bd:
	{
		StringBuilder_t619 * L_172 = V_0;
		uint16_t L_173 = V_17;
		NullCheck(L_172);
		StringBuilder_Append_m5401(L_172, L_173, /*hidden argument*/NULL);
		goto IL_03c8;
	}

IL_03c8:
	{
		int32_t L_174 = V_16;
		V_16 = ((int32_t)((int32_t)L_174+(int32_t)1));
	}

IL_03ce:
	{
		int32_t L_175 = V_16;
		int32_t L_176 = ___offset;
		int32_t L_177 = ___length;
		if ((((int32_t)((int32_t)((int32_t)L_175-(int32_t)L_176))) < ((int32_t)L_177)))
		{
			goto IL_00f6;
		}
	}
	{
		bool L_178 = ___positive;
		if (L_178)
		{
			goto IL_03eb;
		}
	}
	{
		StringBuilder_t619 * L_179 = V_0;
		NumberFormatInfo_t3955 * L_180 = ___nfi;
		NullCheck(L_180);
		String_t* L_181 = NumberFormatInfo_get_NegativeSign_m18753(L_180, /*hidden argument*/NULL);
		NullCheck(L_179);
		StringBuilder_Insert_m20612(L_179, 0, L_181, /*hidden argument*/NULL);
	}

IL_03eb:
	{
		StringBuilder_t619 * L_182 = V_0;
		NullCheck(L_182);
		String_t* L_183 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_182);
		return L_183;
	}
}
// System.NumberFormatter
#include "mscorlib_System_NumberFormatter.h"
#ifndef _MSC_VER
#else
#endif
// System.NumberFormatter
#include "mscorlib_System_NumberFormatterMethodDeclarations.h"

// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"


// System.Void System.NumberFormatter::.ctor(System.Threading.Thread)
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter__ctor_m21373 (NumberFormatter_t4320 * __this, Thread_t1597 * ___current, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		__this->____cbuf_23 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, 0));
		Thread_t1597 * L_0 = ___current;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		Thread_t1597 * L_1 = ___current;
		__this->____thread_6 = L_1;
		Thread_t1597 * L_2 = (__this->____thread_6);
		NullCheck(L_2);
		CultureInfo_t1331 * L_3 = Thread_get_CurrentCulture_m20759(L_2, /*hidden argument*/NULL);
		NumberFormatter_set_CurrentCulture_m21402(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.NumberFormatter::.cctor()
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter__cctor_m21374 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	{
		NumberFormatter_GetFormatterTables_m21375(NULL /*static, unused*/, (&((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___MantissaBitsTable_0), (&((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___TensExponentTable_1), (&((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___DigitLowerTable_2), (&((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___DigitUpperTable_3), (&((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___TenPowersList_4), (&((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___DecHexDigits_5), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)
extern "C" void NumberFormatter_GetFormatterTables_m21375 (Object_t * __this /* static, unused */, uint64_t** ___MantissaBitsTable, int32_t** ___TensExponentTable, uint16_t** ___DigitLowerTable, uint16_t** ___DigitUpperTable, int64_t** ___TenPowersList, int32_t** ___DecHexDigits, const MethodInfo* method)
{
	typedef void (*NumberFormatter_GetFormatterTables_m21375_ftn) (uint64_t**, int32_t**, uint16_t**, uint16_t**, int64_t**, int32_t**);
	static NumberFormatter_GetFormatterTables_m21375_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NumberFormatter_GetFormatterTables_m21375_ftn)il2cpp_codegen_resolve_icall ("System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)");
	_il2cpp_icall_func(___MantissaBitsTable, ___TensExponentTable, ___DigitLowerTable, ___DigitUpperTable, ___TenPowersList, ___DecHexDigits);
}
// System.Int64 System.NumberFormatter::GetTenPowerOf(System.Int32)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" int64_t NumberFormatter_GetTenPowerOf_m21376 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int64_t* L_0 = ((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___TenPowersList_4;
		int32_t L_1 = ___i;
		return (*((int64_t*)((intptr_t)((intptr_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)8))))));
	}
}
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter_InitDecHexDigits_m21377 (NumberFormatter_t4320 * __this, uint32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___value;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)100000000)))))
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_1 = ___value;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)((int32_t)100000000)));
		uint32_t L_2 = ___value;
		int32_t L_3 = V_0;
		___value = ((int32_t)((int32_t)L_2-(int32_t)((int32_t)((int32_t)((int32_t)100000000)*(int32_t)L_3))));
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_5 = NumberFormatter_FastToDecHex_m21380(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->____val2_20 = L_5;
	}

IL_0029:
	{
		uint32_t L_6 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_7 = NumberFormatter_ToDecHex_m21381(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->____val1_19 = L_7;
		return;
	}
}
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt64)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter_InitDecHexDigits_m21378 (NumberFormatter_t4320 * __this, uint64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint64_t L_0 = ___value;
		if ((!(((uint64_t)L_0) >= ((uint64_t)(((int64_t)((int32_t)100000000)))))))
		{
			goto IL_005b;
		}
	}
	{
		uint64_t L_1 = ___value;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_1/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_2 = ___value;
		int64_t L_3 = V_0;
		___value = ((int64_t)((int64_t)L_2-(int64_t)((int64_t)((int64_t)(((int64_t)((int32_t)100000000)))*(int64_t)L_3))));
		int64_t L_4 = V_0;
		if ((((int64_t)L_4) < ((int64_t)(((int64_t)((int32_t)100000000))))))
		{
			goto IL_004b;
		}
	}
	{
		int64_t L_5 = V_0;
		V_1 = (((int32_t)((int64_t)((int64_t)L_5/(int64_t)(((int64_t)((int32_t)100000000)))))));
		int64_t L_6 = V_0;
		int32_t L_7 = V_1;
		V_0 = ((int64_t)((int64_t)L_6-(int64_t)((int64_t)((int64_t)(((int64_t)L_7))*(int64_t)(((int64_t)((int32_t)100000000)))))));
		int32_t L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_9 = NumberFormatter_ToDecHex_m21381(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		__this->____val3_21 = L_9;
	}

IL_004b:
	{
		int64_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		int64_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_12 = NumberFormatter_ToDecHex_m21381(NULL /*static, unused*/, (((int32_t)L_11)), /*hidden argument*/NULL);
		__this->____val2_20 = L_12;
	}

IL_005b:
	{
		uint64_t L_13 = ___value;
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		uint64_t L_14 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_15 = NumberFormatter_ToDecHex_m21381(NULL /*static, unused*/, (((int32_t)L_14)), /*hidden argument*/NULL);
		__this->____val1_19 = L_15;
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32,System.UInt64)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter_InitDecHexDigits_m21379 (NumberFormatter_t4320 * __this, uint32_t ___hi, uint64_t ___lo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		uint32_t L_0 = ___hi;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		uint64_t L_1 = ___lo;
		NumberFormatter_InitDecHexDigits_m21378(__this, L_1, /*hidden argument*/NULL);
		return;
	}

IL_000b:
	{
		uint32_t L_2 = ___hi;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_2/(uint32_t)(int32_t)((int32_t)100000000)));
		uint32_t L_3 = ___hi;
		uint32_t L_4 = V_0;
		V_1 = (((uint64_t)(((uint32_t)((int32_t)((int32_t)L_3-(int32_t)((int32_t)((int32_t)L_4*(int32_t)((int32_t)100000000)))))))));
		uint64_t L_5 = ___lo;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_5/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_6 = ___lo;
		uint64_t L_7 = V_2;
		uint64_t L_8 = V_1;
		V_3 = ((int64_t)((int64_t)((int64_t)((int64_t)L_6-(int64_t)((int64_t)((int64_t)L_7*(int64_t)(((int64_t)((int32_t)100000000)))))))+(int64_t)((int64_t)((int64_t)L_8*(int64_t)(((int64_t)((int32_t)9551616)))))));
		uint32_t L_9 = V_0;
		___hi = L_9;
		uint64_t L_10 = V_2;
		uint64_t L_11 = V_1;
		___lo = ((int64_t)((int64_t)L_10+(int64_t)((int64_t)((int64_t)L_11*(int64_t)((int64_t)184467440737LL)))));
		uint64_t L_12 = V_3;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_12/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_13 = V_3;
		uint64_t L_14 = V_2;
		V_3 = ((int64_t)((int64_t)L_13-(int64_t)((int64_t)((int64_t)L_14*(int64_t)(((int64_t)((int32_t)100000000)))))));
		uint64_t L_15 = ___lo;
		uint64_t L_16 = V_2;
		___lo = ((int64_t)((int64_t)L_15+(int64_t)L_16));
		uint64_t L_17 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_18 = NumberFormatter_ToDecHex_m21381(NULL /*static, unused*/, (((int32_t)L_17)), /*hidden argument*/NULL);
		__this->____val1_19 = L_18;
		uint64_t L_19 = ___lo;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_19/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_20 = ___lo;
		uint64_t L_21 = V_2;
		V_3 = ((int64_t)((int64_t)L_20-(int64_t)((int64_t)((int64_t)L_21*(int64_t)(((int64_t)((int32_t)100000000)))))));
		uint64_t L_22 = V_2;
		___lo = L_22;
		uint32_t L_23 = ___hi;
		if (!L_23)
		{
			goto IL_00ce;
		}
	}
	{
		uint64_t L_24 = ___lo;
		uint32_t L_25 = ___hi;
		___lo = ((int64_t)((int64_t)L_24+(int64_t)((int64_t)((int64_t)(((uint64_t)L_25))*(int64_t)((int64_t)184467440737LL)))));
		uint64_t L_26 = V_3;
		uint32_t L_27 = ___hi;
		V_3 = ((int64_t)((int64_t)L_26+(int64_t)((int64_t)((int64_t)(((uint64_t)L_27))*(int64_t)(((int64_t)((int32_t)9551616)))))));
		uint64_t L_28 = V_3;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_28/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_29 = ___lo;
		uint64_t L_30 = V_2;
		___lo = ((int64_t)((int64_t)L_29+(int64_t)L_30));
		uint64_t L_31 = V_3;
		uint64_t L_32 = V_2;
		V_3 = ((int64_t)((int64_t)L_31-(int64_t)((int64_t)((int64_t)L_32*(int64_t)(((int64_t)((int32_t)100000000)))))));
	}

IL_00ce:
	{
		uint64_t L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_34 = NumberFormatter_ToDecHex_m21381(NULL /*static, unused*/, (((int32_t)L_33)), /*hidden argument*/NULL);
		__this->____val2_20 = L_34;
		uint64_t L_35 = ___lo;
		if ((!(((uint64_t)L_35) >= ((uint64_t)(((int64_t)((int32_t)100000000)))))))
		{
			goto IL_0108;
		}
	}
	{
		uint64_t L_36 = ___lo;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_36/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_37 = ___lo;
		uint64_t L_38 = V_2;
		___lo = ((int64_t)((int64_t)L_37-(int64_t)((int64_t)((int64_t)L_38*(int64_t)(((int64_t)((int32_t)100000000)))))));
		uint64_t L_39 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_40 = NumberFormatter_ToDecHex_m21381(NULL /*static, unused*/, (((int32_t)L_39)), /*hidden argument*/NULL);
		__this->____val4_22 = L_40;
	}

IL_0108:
	{
		uint64_t L_41 = ___lo;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_42 = NumberFormatter_ToDecHex_m21381(NULL /*static, unused*/, (((int32_t)L_41)), /*hidden argument*/NULL);
		__this->____val3_21 = L_42;
		return;
	}
}
// System.UInt32 System.NumberFormatter::FastToDecHex(System.Int32)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" uint32_t NumberFormatter_FastToDecHex_m21380 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___val;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)100))))
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t* L_1 = ((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___DecHexDigits_5;
		int32_t L_2 = ___val;
		return (*((int32_t*)((intptr_t)((intptr_t)L_1+(int32_t)((int32_t)((int32_t)L_2*(int32_t)4))))));
	}

IL_0010:
	{
		int32_t L_3 = ___val;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)5243)))>>(int32_t)((int32_t)19)));
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t* L_4 = ((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___DecHexDigits_5;
		int32_t L_5 = V_0;
		int32_t* L_6 = ((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___DecHexDigits_5;
		int32_t L_7 = ___val;
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_4+(int32_t)((int32_t)((int32_t)L_5*(int32_t)4))))))<<(int32_t)8))|(int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_6+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7-(int32_t)((int32_t)((int32_t)L_8*(int32_t)((int32_t)100)))))*(int32_t)4))))))));
	}
}
// System.UInt32 System.NumberFormatter::ToDecHex(System.Int32)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" uint32_t NumberFormatter_ToDecHex_m21381 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___val;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)10000))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = ___val;
		V_1 = ((int32_t)((int32_t)L_1/(int32_t)((int32_t)10000)));
		int32_t L_2 = ___val;
		int32_t L_3 = V_1;
		___val = ((int32_t)((int32_t)L_2-(int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)10000)))));
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_5 = NumberFormatter_FastToDecHex_m21380(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)));
	}

IL_0029:
	{
		uint32_t L_6 = V_0;
		int32_t L_7 = ___val;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_8 = NumberFormatter_FastToDecHex_m21380(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_6|(int32_t)L_8));
	}
}
// System.Int32 System.NumberFormatter::FastDecHexLen(System.Int32)
extern "C" int32_t NumberFormatter_FastDecHexLen_m21382 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method)
{
	{
		int32_t L_0 = ___val;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___val;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)16))))
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		return 2;
	}

IL_0011:
	{
		int32_t L_2 = ___val;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)4096))))
		{
			goto IL_001b;
		}
	}
	{
		return 3;
	}

IL_001b:
	{
		return 4;
	}
}
// System.Int32 System.NumberFormatter::DecHexLen(System.UInt32)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" int32_t NumberFormatter_DecHexLen_m21383 (Object_t * __this /* static, unused */, uint32_t ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint32_t L_0 = ___val;
		if ((!(((uint32_t)L_0) < ((uint32_t)((int32_t)65536)))))
		{
			goto IL_000f;
		}
	}
	{
		uint32_t L_1 = ___val;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t L_2 = NumberFormatter_FastDecHexLen_m21382(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000f:
	{
		uint32_t L_3 = ___val;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t L_4 = NumberFormatter_FastDecHexLen_m21382(NULL /*static, unused*/, ((int32_t)((uint32_t)L_3>>((int32_t)16))), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)4+(int32_t)L_4));
	}
}
// System.Int32 System.NumberFormatter::DecHexLen()
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" int32_t NumberFormatter_DecHexLen_m21384 (NumberFormatter_t4320 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint32_t L_0 = (__this->____val4_22);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		uint32_t L_1 = (__this->____val4_22);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t L_2 = NumberFormatter_DecHexLen_m21383(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_2+(int32_t)((int32_t)24)));
	}

IL_0017:
	{
		uint32_t L_3 = (__this->____val3_21);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		uint32_t L_4 = (__this->____val3_21);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t L_5 = NumberFormatter_DecHexLen_m21383(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_5+(int32_t)((int32_t)16)));
	}

IL_002e:
	{
		uint32_t L_6 = (__this->____val2_20);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		uint32_t L_7 = (__this->____val2_20);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t L_8 = NumberFormatter_DecHexLen_m21383(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_8+(int32_t)8));
	}

IL_0044:
	{
		uint32_t L_9 = (__this->____val1_19);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_10 = (__this->____val1_19);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t L_11 = NumberFormatter_DecHexLen_m21383(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0058:
	{
		return 0;
	}
}
// System.Int32 System.NumberFormatter::ScaleOrder(System.Int64)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" int32_t NumberFormatter_ScaleOrder_m21385 (Object_t * __this /* static, unused */, int64_t ___hi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)18);
		goto IL_0016;
	}

IL_0005:
	{
		int64_t L_0 = ___hi;
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int64_t L_2 = NumberFormatter_GetTenPowerOf_m21376(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if ((((int64_t)L_0) < ((int64_t)L_2)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		return ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0012:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4-(int32_t)1));
	}

IL_0016:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}
}
// System.Int32 System.NumberFormatter::InitialFloatingPrecision()
extern "C" int32_t NumberFormatter_InitialFloatingPrecision_m21386 (NumberFormatter_t4320 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->____specifier_13);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = (__this->____defPrecision_15);
		return ((int32_t)((int32_t)L_1+(int32_t)2));
	}

IL_0013:
	{
		int32_t L_2 = (__this->____precision_14);
		int32_t L_3 = (__this->____defPrecision_15);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = (__this->____defPrecision_15);
		return L_4;
	}

IL_0028:
	{
		uint16_t L_5 = (__this->____specifier_13);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)71)))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = (__this->____defPrecision_15);
		int32_t L_7 = (__this->____precision_14);
		int32_t L_8 = Math_Min_m11572(NULL /*static, unused*/, ((int32_t)((int32_t)L_6+(int32_t)2)), L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0046:
	{
		uint16_t L_9 = (__this->____specifier_13);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_10 = (__this->____defPrecision_15);
		int32_t L_11 = (__this->____precision_14);
		int32_t L_12 = Math_Min_m11572(NULL /*static, unused*/, ((int32_t)((int32_t)L_10+(int32_t)2)), ((int32_t)((int32_t)L_11+(int32_t)1)), /*hidden argument*/NULL);
		return L_12;
	}

IL_0066:
	{
		int32_t L_13 = (__this->____defPrecision_15);
		return L_13;
	}
}
// System.Int32 System.NumberFormatter::ParsePrecision(System.String)
extern "C" int32_t NumberFormatter_ParsePrecision_m21387 (Object_t * __this /* static, unused */, String_t* ___format, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = 1;
		goto IL_002d;
	}

IL_0006:
	{
		String_t* L_0 = ___format;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m2787(L_0, L_1, /*hidden argument*/NULL);
		V_2 = ((int32_t)((int32_t)L_2-(int32_t)((int32_t)48)));
		int32_t L_3 = V_0;
		int32_t L_4 = V_2;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)10)))+(int32_t)L_4));
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)9))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)99))))
		{
			goto IL_0029;
		}
	}

IL_0026:
	{
		return ((int32_t)-2);
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_9 = V_1;
		String_t* L_10 = ___format;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m2782(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Void System.NumberFormatter::Init(System.String)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter_Init_m21388 (NumberFormatter_t4320 * __this, String_t* ___format, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = 0;
		V_1 = L_0;
		__this->____val4_22 = L_0;
		uint32_t L_1 = V_1;
		uint32_t L_2 = L_1;
		V_1 = L_2;
		__this->____val3_21 = L_2;
		uint32_t L_3 = V_1;
		uint32_t L_4 = L_3;
		V_1 = L_4;
		__this->____val2_20 = L_4;
		uint32_t L_5 = V_1;
		__this->____val1_19 = L_5;
		__this->____offset_17 = 0;
		int32_t L_6 = 0;
		V_2 = L_6;
		__this->____infinity_9 = L_6;
		bool L_7 = V_2;
		__this->____NaN_8 = L_7;
		__this->____isCustomFormat_10 = 0;
		__this->____specifierIsUpper_11 = 1;
		__this->____precision_14 = (-1);
		String_t* L_8 = ___format;
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_9 = ___format;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m2782(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0062;
		}
	}

IL_0059:
	{
		__this->____specifier_13 = ((int32_t)71);
		return;
	}

IL_0062:
	{
		String_t* L_11 = ___format;
		NullCheck(L_11);
		uint16_t L_12 = String_get_Chars_m2787(L_11, 0, /*hidden argument*/NULL);
		V_0 = L_12;
		uint16_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)97))))
		{
			goto IL_0086;
		}
	}
	{
		uint16_t L_14 = V_0;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)122))))
		{
			goto IL_0086;
		}
	}
	{
		uint16_t L_15 = V_0;
		V_0 = (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15-(int32_t)((int32_t)97)))+(int32_t)((int32_t)65)))));
		__this->____specifierIsUpper_11 = 0;
		goto IL_00a0;
	}

IL_0086:
	{
		uint16_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)65))))
		{
			goto IL_0090;
		}
	}
	{
		uint16_t L_17 = V_0;
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)90))))
		{
			goto IL_00a0;
		}
	}

IL_0090:
	{
		__this->____isCustomFormat_10 = 1;
		__this->____specifier_13 = ((int32_t)48);
		return;
	}

IL_00a0:
	{
		uint16_t L_18 = V_0;
		__this->____specifier_13 = L_18;
		String_t* L_19 = ___format;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m2782(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_00dc;
		}
	}
	{
		String_t* L_21 = ___format;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t L_22 = NumberFormatter_ParsePrecision_m21387(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		__this->____precision_14 = L_22;
		int32_t L_23 = (__this->____precision_14);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_00dc;
		}
	}
	{
		__this->____isCustomFormat_10 = 1;
		__this->____specifier_13 = ((int32_t)48);
		__this->____precision_14 = (-1);
	}

IL_00dc:
	{
		return;
	}
}
// System.Void System.NumberFormatter::InitHex(System.UInt64)
extern "C" void NumberFormatter_InitHex_m21389 (NumberFormatter_t4320 * __this, uint64_t ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____defPrecision_15);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 0)
		{
			goto IL_0022;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 1)
		{
			goto IL_001b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 2)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_003d;
	}

IL_0022:
	{
		uint64_t L_3 = ___value;
		___value = (((uint64_t)(((uint8_t)L_3))));
		goto IL_003d;
	}

IL_002b:
	{
		uint64_t L_4 = ___value;
		___value = (((uint64_t)(((uint16_t)L_4))));
		goto IL_003d;
	}

IL_0034:
	{
		uint64_t L_5 = ___value;
		___value = (((uint64_t)(((uint32_t)L_5))));
		goto IL_003d;
	}

IL_003d:
	{
		uint64_t L_6 = ___value;
		__this->____val1_19 = (((uint32_t)L_6));
		uint64_t L_7 = ___value;
		__this->____val2_20 = (((uint32_t)((int64_t)((uint64_t)L_7>>((int32_t)32)))));
		int32_t L_8 = NumberFormatter_DecHexLen_m21384(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->____digitsLen_16 = L_9;
		int32_t L_10 = V_0;
		__this->____decPointPos_18 = L_10;
		uint64_t L_11 = ___value;
		if (L_11)
		{
			goto IL_006f;
		}
	}
	{
		__this->____decPointPos_18 = 1;
	}

IL_006f:
	{
		return;
	}
}
// System.Void System.NumberFormatter::Init(System.String,System.Int32,System.Int32)
extern "C" void NumberFormatter_Init_m21390 (NumberFormatter_t4320 * __this, String_t* ___format, int32_t ___value, int32_t ___defPrecision, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___format;
		NumberFormatter_Init_m21388(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___defPrecision;
		__this->____defPrecision_15 = L_1;
		int32_t L_2 = ___value;
		__this->____positive_12 = ((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_3 = ___value;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		uint16_t L_4 = (__this->____specifier_13);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_0031;
		}
	}

IL_0028:
	{
		int32_t L_5 = ___value;
		NumberFormatter_InitHex_m21389(__this, (((int64_t)L_5)), /*hidden argument*/NULL);
		return;
	}

IL_0031:
	{
		int32_t L_6 = ___value;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_7 = ___value;
		___value = ((-L_7));
	}

IL_003b:
	{
		int32_t L_8 = ___value;
		NumberFormatter_InitDecHexDigits_m21377(__this, L_8, /*hidden argument*/NULL);
		int32_t L_9 = NumberFormatter_DecHexLen_m21384(__this, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		V_0 = L_10;
		__this->____digitsLen_16 = L_10;
		int32_t L_11 = V_0;
		__this->____decPointPos_18 = L_11;
		return;
	}
}
// System.Void System.NumberFormatter::Init(System.String,System.UInt32,System.Int32)
extern "C" void NumberFormatter_Init_m21391 (NumberFormatter_t4320 * __this, String_t* ___format, uint32_t ___value, int32_t ___defPrecision, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___format;
		NumberFormatter_Init_m21388(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___defPrecision;
		__this->____defPrecision_15 = L_1;
		__this->____positive_12 = 1;
		uint32_t L_2 = ___value;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		uint16_t L_3 = (__this->____specifier_13);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_002b;
		}
	}

IL_0022:
	{
		uint32_t L_4 = ___value;
		NumberFormatter_InitHex_m21389(__this, (((uint64_t)L_4)), /*hidden argument*/NULL);
		return;
	}

IL_002b:
	{
		uint32_t L_5 = ___value;
		NumberFormatter_InitDecHexDigits_m21377(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = NumberFormatter_DecHexLen_m21384(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->____digitsLen_16 = L_7;
		int32_t L_8 = V_0;
		__this->____decPointPos_18 = L_8;
		return;
	}
}
// System.Void System.NumberFormatter::Init(System.String,System.Int64)
extern "C" void NumberFormatter_Init_m21392 (NumberFormatter_t4320 * __this, String_t* ___format, int64_t ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___format;
		NumberFormatter_Init_m21388(__this, L_0, /*hidden argument*/NULL);
		__this->____defPrecision_15 = ((int32_t)19);
		int64_t L_1 = ___value;
		__this->____positive_12 = ((((int32_t)((((int64_t)L_1) < ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int64_t L_2 = ___value;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		uint16_t L_3 = (__this->____specifier_13);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_0032;
		}
	}

IL_002a:
	{
		int64_t L_4 = ___value;
		NumberFormatter_InitHex_m21389(__this, L_4, /*hidden argument*/NULL);
		return;
	}

IL_0032:
	{
		int64_t L_5 = ___value;
		if ((((int64_t)L_5) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t L_6 = ___value;
		___value = ((-L_6));
	}

IL_003d:
	{
		int64_t L_7 = ___value;
		NumberFormatter_InitDecHexDigits_m21378(__this, L_7, /*hidden argument*/NULL);
		int32_t L_8 = NumberFormatter_DecHexLen_m21384(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->____digitsLen_16 = L_9;
		int32_t L_10 = V_0;
		__this->____decPointPos_18 = L_10;
		return;
	}
}
// System.Void System.NumberFormatter::Init(System.String,System.UInt64)
extern "C" void NumberFormatter_Init_m21393 (NumberFormatter_t4320 * __this, String_t* ___format, uint64_t ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___format;
		NumberFormatter_Init_m21388(__this, L_0, /*hidden argument*/NULL);
		__this->____defPrecision_15 = ((int32_t)20);
		__this->____positive_12 = 1;
		uint64_t L_1 = ___value;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		uint16_t L_2 = (__this->____specifier_13);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_002b;
		}
	}

IL_0023:
	{
		uint64_t L_3 = ___value;
		NumberFormatter_InitHex_m21389(__this, L_3, /*hidden argument*/NULL);
		return;
	}

IL_002b:
	{
		uint64_t L_4 = ___value;
		NumberFormatter_InitDecHexDigits_m21378(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = NumberFormatter_DecHexLen_m21384(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		V_0 = L_6;
		__this->____digitsLen_16 = L_6;
		int32_t L_7 = V_0;
		__this->____decPointPos_18 = L_7;
		return;
	}
}
// System.Void System.NumberFormatter::Init(System.String,System.Double,System.Int32)
extern TypeInfo* BitConverter_t1333_il2cpp_TypeInfo_var;
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter_Init_m21394 (NumberFormatter_t4320 * __this, String_t* ___format, double ___value, int32_t ___defPrecision, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BitConverter_t1333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2631);
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	int64_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int64_t V_13 = 0;
	{
		String_t* L_0 = ___format;
		NumberFormatter_Init_m21388(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___defPrecision;
		__this->____defPrecision_15 = L_1;
		double L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t1333_il2cpp_TypeInfo_var);
		int64_t L_3 = BitConverter_DoubleToInt64Bits_m20833(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int64_t L_4 = V_0;
		__this->____positive_12 = ((((int32_t)((((int64_t)L_4) < ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int64_t L_5 = V_0;
		V_0 = ((int64_t)((int64_t)L_5&(int64_t)((int64_t)std::numeric_limits<int64_t>::max())));
		int64_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		__this->____decPointPos_18 = 1;
		__this->____digitsLen_16 = 0;
		__this->____positive_12 = 1;
		return;
	}

IL_0048:
	{
		int64_t L_7 = V_0;
		V_1 = (((int32_t)((int64_t)((int64_t)L_7>>(int32_t)((int32_t)52)))));
		int64_t L_8 = V_0;
		V_2 = ((int64_t)((int64_t)L_8&(int64_t)((int64_t)4503599627370495LL)));
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)2047)))))
		{
			goto IL_007c;
		}
	}
	{
		int64_t L_10 = V_2;
		__this->____NaN_8 = ((((int32_t)((((int64_t)L_10) == ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int64_t L_11 = V_2;
		__this->____infinity_9 = ((((int64_t)L_11) == ((int64_t)(((int64_t)0))))? 1 : 0);
		return;
	}

IL_007c:
	{
		V_3 = 0;
		int32_t L_12 = V_1;
		if (L_12)
		{
			goto IL_00a3;
		}
	}
	{
		V_1 = 1;
		int64_t L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t L_14 = NumberFormatter_ScaleOrder_m21385(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		int32_t L_15 = V_4;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)15))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_16 = V_4;
		V_3 = ((int32_t)((int32_t)L_16-(int32_t)((int32_t)15)));
		int64_t L_17 = V_2;
		int32_t L_18 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int64_t L_19 = NumberFormatter_GetTenPowerOf_m21376(NULL /*static, unused*/, ((-L_18)), /*hidden argument*/NULL);
		V_2 = ((int64_t)((int64_t)L_17*(int64_t)L_19));
	}

IL_00a1:
	{
		goto IL_00b8;
	}

IL_00a3:
	{
		int64_t L_20 = V_2;
		V_2 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_20+(int64_t)((int64_t)4503599627370495LL)))+(int64_t)(((int64_t)1))))*(int64_t)(((int64_t)((int32_t)10)))));
		V_3 = (-1);
	}

IL_00b8:
	{
		int64_t L_21 = V_2;
		V_5 = (((uint64_t)(((uint32_t)L_21))));
		int64_t L_22 = V_2;
		V_6 = ((int64_t)((uint64_t)L_22>>((int32_t)32)));
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint64_t* L_23 = ((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___MantissaBitsTable_0;
		int32_t L_24 = V_1;
		V_7 = (*((int64_t*)((intptr_t)((intptr_t)L_23+(int32_t)((int32_t)((int32_t)L_24*(int32_t)8))))));
		uint64_t L_25 = V_7;
		V_8 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_7;
		V_7 = (((uint64_t)(((uint32_t)L_26))));
		uint64_t L_27 = V_6;
		uint64_t L_28 = V_7;
		uint64_t L_29 = V_5;
		uint64_t L_30 = V_8;
		uint64_t L_31 = V_5;
		uint64_t L_32 = V_7;
		V_9 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_27*(int64_t)L_28))+(int64_t)((int64_t)((int64_t)L_29*(int64_t)L_30))))+(int64_t)((int64_t)((uint64_t)((int64_t)((int64_t)L_31*(int64_t)L_32))>>((int32_t)32)))));
		uint64_t L_33 = V_6;
		uint64_t L_34 = V_8;
		uint64_t L_35 = V_9;
		V_10 = ((int64_t)((int64_t)((int64_t)((int64_t)L_33*(int64_t)L_34))+(int64_t)((int64_t)((uint64_t)L_35>>((int32_t)32)))));
		goto IL_011e;
	}

IL_0101:
	{
		uint64_t L_36 = V_9;
		V_9 = ((int64_t)((int64_t)((int64_t)((int64_t)L_36&(int64_t)(((uint64_t)(((uint32_t)(-1)))))))*(int64_t)(((int64_t)((int32_t)10)))));
		int64_t L_37 = V_10;
		uint64_t L_38 = V_9;
		V_10 = ((int64_t)((int64_t)((int64_t)((int64_t)L_37*(int64_t)(((int64_t)((int32_t)10)))))+(int64_t)((int64_t)((uint64_t)L_38>>((int32_t)32)))));
		int32_t L_39 = V_3;
		V_3 = ((int32_t)((int32_t)L_39-(int32_t)1));
	}

IL_011e:
	{
		int64_t L_40 = V_10;
		if ((((int64_t)L_40) < ((int64_t)((int64_t)10000000000000000LL))))
		{
			goto IL_0101;
		}
	}
	{
		uint64_t L_41 = V_9;
		if (!((int64_t)((int64_t)L_41&(int64_t)(((uint64_t)(((uint32_t)((int32_t)-2147483648))))))))
		{
			goto IL_013d;
		}
	}
	{
		int64_t L_42 = V_10;
		V_10 = ((int64_t)((int64_t)L_42+(int64_t)(((int64_t)1))));
	}

IL_013d:
	{
		V_11 = ((int32_t)17);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t* L_43 = ((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___TensExponentTable_1;
		int32_t L_44 = V_1;
		int32_t L_45 = V_3;
		int32_t L_46 = V_11;
		__this->____decPointPos_18 = ((int32_t)((int32_t)((int32_t)((int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_43+(int32_t)((int32_t)((int32_t)L_44*(int32_t)4))))))+(int32_t)L_45))+(int32_t)L_46));
		int32_t L_47 = NumberFormatter_InitialFloatingPrecision_m21386(__this, /*hidden argument*/NULL);
		V_12 = L_47;
		int32_t L_48 = V_11;
		int32_t L_49 = V_12;
		if ((((int32_t)L_48) <= ((int32_t)L_49)))
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_50 = V_11;
		int32_t L_51 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int64_t L_52 = NumberFormatter_GetTenPowerOf_m21376(NULL /*static, unused*/, ((int32_t)((int32_t)L_50-(int32_t)L_51)), /*hidden argument*/NULL);
		V_13 = L_52;
		int64_t L_53 = V_10;
		int64_t L_54 = V_13;
		int64_t L_55 = V_13;
		V_10 = ((int64_t)((int64_t)((int64_t)((int64_t)L_53+(int64_t)((int64_t)((int64_t)L_54>>(int32_t)1))))/(int64_t)L_55));
		int32_t L_56 = V_12;
		V_11 = L_56;
	}

IL_0180:
	{
		int64_t L_57 = V_10;
		int32_t L_58 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int64_t L_59 = NumberFormatter_GetTenPowerOf_m21376(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
		if ((((int64_t)L_57) < ((int64_t)L_59)))
		{
			goto IL_019f;
		}
	}
	{
		int32_t L_60 = V_11;
		V_11 = ((int32_t)((int32_t)L_60+(int32_t)1));
		int32_t L_61 = (__this->____decPointPos_18);
		__this->____decPointPos_18 = ((int32_t)((int32_t)L_61+(int32_t)1));
	}

IL_019f:
	{
		int64_t L_62 = V_10;
		NumberFormatter_InitDecHexDigits_m21378(__this, L_62, /*hidden argument*/NULL);
		int32_t L_63 = NumberFormatter_CountTrailingZeros_m21414(__this, /*hidden argument*/NULL);
		__this->____offset_17 = L_63;
		int32_t L_64 = V_11;
		int32_t L_65 = (__this->____offset_17);
		__this->____digitsLen_16 = ((int32_t)((int32_t)L_64-(int32_t)L_65));
		return;
	}
}
// System.Void System.NumberFormatter::Init(System.String,System.Decimal)
extern TypeInfo* Decimal_t2541_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter_Init_m21395 (NumberFormatter_t4320 * __this, String_t* ___format, Decimal_t2541  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Decimal_t2541_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4635);
		s_Il2CppMethodIntialized = true;
	}
	Int32U5BU5D_t119* V_0 = {0};
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___format;
		NumberFormatter_Init_m21388(__this, L_0, /*hidden argument*/NULL);
		__this->____defPrecision_15 = ((int32_t)100);
		Decimal_t2541  L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2541_il2cpp_TypeInfo_var);
		Int32U5BU5D_t119* L_2 = Decimal_GetBits_m17457(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Int32U5BU5D_t119* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		int32_t L_4 = 3;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_4))&(int32_t)((int32_t)2031616)))>>(int32_t)((int32_t)16)));
		Int32U5BU5D_t119* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		int32_t L_6 = 3;
		__this->____positive_12 = ((((int32_t)((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		Int32U5BU5D_t119* L_7 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8)))
		{
			goto IL_0058;
		}
	}
	{
		Int32U5BU5D_t119* L_9 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		int32_t L_10 = 1;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_10)))
		{
			goto IL_0058;
		}
	}
	{
		Int32U5BU5D_t119* L_11 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 2);
		int32_t L_12 = 2;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_13 = V_1;
		__this->____decPointPos_18 = ((-L_13));
		__this->____positive_12 = 1;
		__this->____digitsLen_16 = 0;
		return;
	}

IL_0058:
	{
		Int32U5BU5D_t119* L_14 = V_0;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
		int32_t L_15 = 2;
		Int32U5BU5D_t119* L_16 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		int32_t L_17 = 1;
		Int32U5BU5D_t119* L_18 = V_0;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		int32_t L_19 = 0;
		NumberFormatter_InitDecHexDigits_m21379(__this, (*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_15)), ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_17))))<<(int32_t)((int32_t)32)))|(int64_t)(((uint64_t)(((uint32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_19)))))))), /*hidden argument*/NULL);
		int32_t L_20 = NumberFormatter_DecHexLen_m21384(__this, /*hidden argument*/NULL);
		__this->____digitsLen_16 = L_20;
		int32_t L_21 = (__this->____digitsLen_16);
		int32_t L_22 = V_1;
		__this->____decPointPos_18 = ((int32_t)((int32_t)L_21-(int32_t)L_22));
		int32_t L_23 = (__this->____precision_14);
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_009a;
		}
	}
	{
		uint16_t L_24 = (__this->____specifier_13);
		if ((((int32_t)L_24) == ((int32_t)((int32_t)71))))
		{
			goto IL_00b9;
		}
	}

IL_009a:
	{
		int32_t L_25 = NumberFormatter_CountTrailingZeros_m21414(__this, /*hidden argument*/NULL);
		__this->____offset_17 = L_25;
		int32_t L_26 = (__this->____digitsLen_16);
		int32_t L_27 = (__this->____offset_17);
		__this->____digitsLen_16 = ((int32_t)((int32_t)L_26-(int32_t)L_27));
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.NumberFormatter::ResetCharBuf(System.Int32)
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter_ResetCharBuf_m21396 (NumberFormatter_t4320 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____ind_24 = 0;
		CharU5BU5D_t646* L_0 = (__this->____cbuf_23);
		NullCheck(L_0);
		int32_t L_1 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) >= ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___size;
		__this->____cbuf_23 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, L_2));
	}

IL_001e:
	{
		return;
	}
}
// System.Void System.NumberFormatter::Resize(System.Int32)
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter_Resize_m21397 (NumberFormatter_t4320 * __this, int32_t ___len, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t646* V_0 = {0};
	{
		int32_t L_0 = ___len;
		V_0 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, L_0));
		CharU5BU5D_t646* L_1 = (__this->____cbuf_23);
		CharU5BU5D_t646* L_2 = V_0;
		int32_t L_3 = (__this->____ind_24);
		Array_Copy_m11497(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/NULL);
		CharU5BU5D_t646* L_4 = V_0;
		__this->____cbuf_23 = L_4;
		return;
	}
}
// System.Void System.NumberFormatter::Append(System.Char)
extern "C" void NumberFormatter_Append_m21398 (NumberFormatter_t4320 * __this, uint16_t ___c, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____ind_24);
		CharU5BU5D_t646* L_1 = (__this->____cbuf_23);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (__this->____ind_24);
		NumberFormatter_Resize_m21397(__this, ((int32_t)((int32_t)L_2+(int32_t)((int32_t)10))), /*hidden argument*/NULL);
	}

IL_001f:
	{
		CharU5BU5D_t646* L_3 = (__this->____cbuf_23);
		int32_t L_4 = (__this->____ind_24);
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->____ind_24 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		uint16_t L_7 = ___c;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_6)) = (uint16_t)L_7;
		return;
	}
}
// System.Void System.NumberFormatter::Append(System.Char,System.Int32)
extern "C" void NumberFormatter_Append_m21399 (NumberFormatter_t4320 * __this, uint16_t ___c, int32_t ___cnt, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____ind_24);
		int32_t L_1 = ___cnt;
		CharU5BU5D_t646* L_2 = (__this->____cbuf_23);
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1))) <= ((int32_t)(((int32_t)(((Array_t *)L_2)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = (__this->____ind_24);
		int32_t L_4 = ___cnt;
		NumberFormatter_Resize_m21397(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)L_4))+(int32_t)((int32_t)10))), /*hidden argument*/NULL);
	}

IL_0023:
	{
		goto IL_003e;
	}

IL_0025:
	{
		CharU5BU5D_t646* L_5 = (__this->____cbuf_23);
		int32_t L_6 = (__this->____ind_24);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->____ind_24 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		uint16_t L_9 = ___c;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_8)) = (uint16_t)L_9;
	}

IL_003e:
	{
		int32_t L_10 = ___cnt;
		int32_t L_11 = L_10;
		___cnt = ((int32_t)((int32_t)L_11-(int32_t)1));
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		return;
	}
}
// System.Void System.NumberFormatter::Append(System.String)
extern "C" void NumberFormatter_Append_m21400 (NumberFormatter_t4320 * __this, String_t* ___s, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___s;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m2782(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->____ind_24);
		int32_t L_3 = V_0;
		CharU5BU5D_t646* L_4 = (__this->____cbuf_23);
		NullCheck(L_4);
		if ((((int32_t)((int32_t)((int32_t)L_2+(int32_t)L_3))) <= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = (__this->____ind_24);
		int32_t L_6 = V_0;
		NumberFormatter_Resize_m21397(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))+(int32_t)((int32_t)10))), /*hidden argument*/NULL);
	}

IL_002a:
	{
		V_1 = 0;
		goto IL_0051;
	}

IL_002e:
	{
		CharU5BU5D_t646* L_7 = (__this->____cbuf_23);
		int32_t L_8 = (__this->____ind_24);
		int32_t L_9 = L_8;
		V_2 = L_9;
		__this->____ind_24 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_2;
		String_t* L_11 = ___s;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		uint16_t L_13 = String_get_Chars_m2787(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_10);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_7, L_10)) = (uint16_t)L_13;
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}
}
// System.Globalization.NumberFormatInfo System.NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
extern TypeInfo* NumberFormatInfo_t3955_il2cpp_TypeInfo_var;
extern "C" NumberFormatInfo_t3955 * NumberFormatter_GetNumberFormatInstance_m21401 (NumberFormatter_t4320 * __this, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatInfo_t3955_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8150);
		s_Il2CppMethodIntialized = true;
	}
	{
		NumberFormatInfo_t3955 * L_0 = (__this->____nfi_7);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___fp;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		NumberFormatInfo_t3955 * L_2 = (__this->____nfi_7);
		return L_2;
	}

IL_0012:
	{
		Object_t * L_3 = ___fp;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t3955_il2cpp_TypeInfo_var);
		NumberFormatInfo_t3955 * L_4 = NumberFormatInfo_GetInstance_m18772(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
extern "C" void NumberFormatter_set_CurrentCulture_m21402 (NumberFormatter_t4320 * __this, CultureInfo_t1331 * ___value, const MethodInfo* method)
{
	{
		CultureInfo_t1331 * L_0 = ___value;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		CultureInfo_t1331 * L_1 = ___value;
		NullCheck(L_1);
		bool L_2 = CultureInfo_get_IsReadOnly_m18671(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		CultureInfo_t1331 * L_3 = ___value;
		NullCheck(L_3);
		NumberFormatInfo_t3955 * L_4 = (NumberFormatInfo_t3955 *)VirtFuncInvoker0< NumberFormatInfo_t3955 * >::Invoke(11 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_3);
		__this->____nfi_7 = L_4;
		goto IL_0020;
	}

IL_0019:
	{
		__this->____nfi_7 = (NumberFormatInfo_t3955 *)NULL;
	}

IL_0020:
	{
		return;
	}
}
// System.Int32 System.NumberFormatter::get_IntegerDigits()
extern "C" int32_t NumberFormatter_get_IntegerDigits_m21403 (NumberFormatter_t4320 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->____decPointPos_18);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = (__this->____decPointPos_18);
		G_B3_0 = L_1;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		return G_B3_0;
	}
}
// System.Int32 System.NumberFormatter::get_DecimalDigits()
extern "C" int32_t NumberFormatter_get_DecimalDigits_m21404 (NumberFormatter_t4320 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->____digitsLen_16);
		int32_t L_1 = (__this->____decPointPos_18);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = (__this->____digitsLen_16);
		int32_t L_3 = (__this->____decPointPos_18);
		G_B3_0 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return G_B3_0;
	}
}
// System.Boolean System.NumberFormatter::get_IsFloatingSource()
extern "C" bool NumberFormatter_get_IsFloatingSource_m21405 (NumberFormatter_t4320 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->____defPrecision_15);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)15))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = (__this->____defPrecision_15);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)7))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
// System.Boolean System.NumberFormatter::get_IsZero()
extern "C" bool NumberFormatter_get_IsZero_m21406 (NumberFormatter_t4320 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____digitsLen_16);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.NumberFormatter::get_IsZeroInteger()
extern "C" bool NumberFormatter_get_IsZeroInteger_m21407 (NumberFormatter_t4320 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->____digitsLen_16);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = (__this->____decPointPos_18);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Void System.NumberFormatter::RoundPos(System.Int32)
extern "C" void NumberFormatter_RoundPos_m21408 (NumberFormatter_t4320 * __this, int32_t ___pos, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____digitsLen_16);
		int32_t L_1 = ___pos;
		NumberFormatter_RoundBits_m21410(__this, ((int32_t)((int32_t)L_0-(int32_t)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.NumberFormatter::RoundDecimal(System.Int32)
extern "C" bool NumberFormatter_RoundDecimal_m21409 (NumberFormatter_t4320 * __this, int32_t ___decimals, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____digitsLen_16);
		int32_t L_1 = (__this->____decPointPos_18);
		int32_t L_2 = ___decimals;
		bool L_3 = NumberFormatter_RoundBits_m21410(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.NumberFormatter::RoundBits(System.Int32)
extern "C" bool NumberFormatter_RoundBits_m21410 (NumberFormatter_t4320 * __this, int32_t ___shift, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		int32_t L_0 = ___shift;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		int32_t L_1 = ___shift;
		int32_t L_2 = (__this->____digitsLen_16);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_004e;
		}
	}
	{
		__this->____digitsLen_16 = 0;
		__this->____decPointPos_18 = 1;
		int32_t L_3 = 0;
		V_4 = L_3;
		__this->____val4_22 = L_3;
		uint32_t L_4 = V_4;
		uint32_t L_5 = L_4;
		V_4 = L_5;
		__this->____val3_21 = L_5;
		uint32_t L_6 = V_4;
		uint32_t L_7 = L_6;
		V_4 = L_7;
		__this->____val2_20 = L_7;
		uint32_t L_8 = V_4;
		__this->____val1_19 = L_8;
		__this->____positive_12 = 1;
		return 0;
	}

IL_004e:
	{
		int32_t L_9 = ___shift;
		int32_t L_10 = (__this->____offset_17);
		___shift = ((int32_t)((int32_t)L_9+(int32_t)L_10));
		int32_t L_11 = (__this->____digitsLen_16);
		int32_t L_12 = (__this->____offset_17);
		__this->____digitsLen_16 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
		goto IL_00af;
	}

IL_006f:
	{
		uint32_t L_13 = (__this->____val2_20);
		__this->____val1_19 = L_13;
		uint32_t L_14 = (__this->____val3_21);
		__this->____val2_20 = L_14;
		uint32_t L_15 = (__this->____val4_22);
		__this->____val3_21 = L_15;
		__this->____val4_22 = 0;
		int32_t L_16 = (__this->____digitsLen_16);
		__this->____digitsLen_16 = ((int32_t)((int32_t)L_16-(int32_t)8));
		int32_t L_17 = ___shift;
		___shift = ((int32_t)((int32_t)L_17-(int32_t)8));
	}

IL_00af:
	{
		int32_t L_18 = ___shift;
		if ((((int32_t)L_18) > ((int32_t)8)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_19 = ___shift;
		___shift = ((int32_t)((int32_t)((int32_t)((int32_t)L_19-(int32_t)1))<<(int32_t)2));
		uint32_t L_20 = (__this->____val1_19);
		int32_t L_21 = ___shift;
		V_0 = ((int32_t)((uint32_t)L_20>>((int32_t)((int32_t)L_21&(int32_t)((int32_t)31)))));
		uint32_t L_22 = V_0;
		V_1 = ((int32_t)((int32_t)L_22&(int32_t)((int32_t)15)));
		uint32_t L_23 = V_0;
		uint32_t L_24 = V_1;
		int32_t L_25 = ___shift;
		__this->____val1_19 = ((int32_t)((int32_t)((int32_t)((int32_t)L_23^(int32_t)L_24))<<(int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)31)))));
		V_2 = 0;
		uint32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) >= ((uint32_t)5))))
		{
			goto IL_0134;
		}
	}
	{
		uint32_t L_27 = (__this->____val1_19);
		int32_t L_28 = ___shift;
		__this->____val1_19 = ((int32_t)((int32_t)L_27|(int32_t)((int32_t)((uint32_t)((int32_t)-1717986919)>>((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)28)-(int32_t)L_28))&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
		NumberFormatter_AddOneToDecHex_m21412(__this, /*hidden argument*/NULL);
		int32_t L_29 = NumberFormatter_DecHexLen_m21384(__this, /*hidden argument*/NULL);
		V_3 = L_29;
		int32_t L_30 = V_3;
		int32_t L_31 = (__this->____digitsLen_16);
		V_2 = ((((int32_t)((((int32_t)L_30) == ((int32_t)L_31))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_32 = (__this->____decPointPos_18);
		int32_t L_33 = V_3;
		int32_t L_34 = (__this->____digitsLen_16);
		__this->____decPointPos_18 = ((int32_t)((int32_t)((int32_t)((int32_t)L_32+(int32_t)L_33))-(int32_t)L_34));
		int32_t L_35 = V_3;
		__this->____digitsLen_16 = L_35;
	}

IL_0134:
	{
		NumberFormatter_RemoveTrailingZeros_m21411(__this, /*hidden argument*/NULL);
		bool L_36 = V_2;
		return L_36;
	}
}
// System.Void System.NumberFormatter::RemoveTrailingZeros()
extern "C" void NumberFormatter_RemoveTrailingZeros_m21411 (NumberFormatter_t4320 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = NumberFormatter_CountTrailingZeros_m21414(__this, /*hidden argument*/NULL);
		__this->____offset_17 = L_0;
		int32_t L_1 = (__this->____digitsLen_16);
		int32_t L_2 = (__this->____offset_17);
		__this->____digitsLen_16 = ((int32_t)((int32_t)L_1-(int32_t)L_2));
		int32_t L_3 = (__this->____digitsLen_16);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		__this->____offset_17 = 0;
		__this->____decPointPos_18 = 1;
		__this->____positive_12 = 1;
	}

IL_003c:
	{
		return;
	}
}
// System.Void System.NumberFormatter::AddOneToDecHex()
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter_AddOneToDecHex_m21412 (NumberFormatter_t4320 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint32_t L_0 = (__this->____val1_19);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_0075;
		}
	}
	{
		__this->____val1_19 = 0;
		uint32_t L_1 = (__this->____val2_20);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_0062;
		}
	}
	{
		__this->____val2_20 = 0;
		uint32_t L_2 = (__this->____val3_21);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_004f;
		}
	}
	{
		__this->____val3_21 = 0;
		uint32_t L_3 = (__this->____val4_22);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_4 = NumberFormatter_AddOneToDecHex_m21413(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->____val4_22 = L_4;
		goto IL_0060;
	}

IL_004f:
	{
		uint32_t L_5 = (__this->____val3_21);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_6 = NumberFormatter_AddOneToDecHex_m21413(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->____val3_21 = L_6;
	}

IL_0060:
	{
		goto IL_0073;
	}

IL_0062:
	{
		uint32_t L_7 = (__this->____val2_20);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_8 = NumberFormatter_AddOneToDecHex_m21413(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		__this->____val2_20 = L_8;
	}

IL_0073:
	{
		goto IL_0086;
	}

IL_0075:
	{
		uint32_t L_9 = (__this->____val1_19);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_10 = NumberFormatter_AddOneToDecHex_m21413(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		__this->____val1_19 = L_10;
	}

IL_0086:
	{
		return;
	}
}
// System.UInt32 System.NumberFormatter::AddOneToDecHex(System.UInt32)
extern "C" uint32_t NumberFormatter_AddOneToDecHex_m21413 (Object_t * __this /* static, unused */, uint32_t ___val, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___val;
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)65535)))) == ((uint32_t)((int32_t)39321)))))
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_1 = ___val;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)16777215)))) == ((uint32_t)((int32_t)10066329)))))
		{
			goto IL_003a;
		}
	}
	{
		uint32_t L_2 = ___val;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)268435455)))) == ((uint32_t)((int32_t)161061273)))))
		{
			goto IL_0032;
		}
	}
	{
		uint32_t L_3 = ___val;
		return ((int32_t)((int32_t)L_3+(int32_t)((int32_t)107374183)));
	}

IL_0032:
	{
		uint32_t L_4 = ___val;
		return ((int32_t)((int32_t)L_4+(int32_t)((int32_t)6710887)));
	}

IL_003a:
	{
		uint32_t L_5 = ___val;
		if ((!(((uint32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)1048575)))) == ((uint32_t)((int32_t)629145)))))
		{
			goto IL_0050;
		}
	}
	{
		uint32_t L_6 = ___val;
		return ((int32_t)((int32_t)L_6+(int32_t)((int32_t)419431)));
	}

IL_0050:
	{
		uint32_t L_7 = ___val;
		return ((int32_t)((int32_t)L_7+(int32_t)((int32_t)26215)));
	}

IL_0058:
	{
		uint32_t L_8 = ___val;
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)255)))) == ((uint32_t)((int32_t)153)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_9 = ___val;
		if ((!(((uint32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)4095)))) == ((uint32_t)((int32_t)2457)))))
		{
			goto IL_007c;
		}
	}
	{
		uint32_t L_10 = ___val;
		return ((int32_t)((int32_t)L_10+(int32_t)((int32_t)1639)));
	}

IL_007c:
	{
		uint32_t L_11 = ___val;
		return ((int32_t)((int32_t)L_11+(int32_t)((int32_t)103)));
	}

IL_0081:
	{
		uint32_t L_12 = ___val;
		if ((!(((uint32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)15)))) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_13 = ___val;
		return ((int32_t)((int32_t)L_13+(int32_t)7));
	}

IL_008d:
	{
		uint32_t L_14 = ___val;
		return ((int32_t)((int32_t)L_14+(int32_t)1));
	}
}
// System.Int32 System.NumberFormatter::CountTrailingZeros()
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" int32_t NumberFormatter_CountTrailingZeros_m21414 (NumberFormatter_t4320 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint32_t L_0 = (__this->____val1_19);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		uint32_t L_1 = (__this->____val1_19);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t L_2 = NumberFormatter_CountTrailingZeros_m21415(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		uint32_t L_3 = (__this->____val2_20);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		uint32_t L_4 = (__this->____val2_20);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t L_5 = NumberFormatter_CountTrailingZeros_m21415(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_5+(int32_t)8));
	}

IL_002a:
	{
		uint32_t L_6 = (__this->____val3_21);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_7 = (__this->____val3_21);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t L_8 = NumberFormatter_CountTrailingZeros_m21415(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_8+(int32_t)((int32_t)16)));
	}

IL_0041:
	{
		uint32_t L_9 = (__this->____val4_22);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_10 = (__this->____val4_22);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t L_11 = NumberFormatter_CountTrailingZeros_m21415(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_11+(int32_t)((int32_t)24)));
	}

IL_0058:
	{
		int32_t L_12 = (__this->____digitsLen_16);
		return L_12;
	}
}
// System.Int32 System.NumberFormatter::CountTrailingZeros(System.UInt32)
extern "C" int32_t NumberFormatter_CountTrailingZeros_m21415 (Object_t * __this /* static, unused */, uint32_t ___val, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___val;
		if (((int32_t)((int32_t)L_0&(int32_t)((int32_t)65535))))
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_1 = ___val;
		if (((int32_t)((int32_t)L_1&(int32_t)((int32_t)16777215))))
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_2 = ___val;
		if (((int32_t)((int32_t)L_2&(int32_t)((int32_t)268435455))))
		{
			goto IL_001d;
		}
	}
	{
		return 7;
	}

IL_001d:
	{
		return 6;
	}

IL_001f:
	{
		uint32_t L_3 = ___val;
		if (((int32_t)((int32_t)L_3&(int32_t)((int32_t)1048575))))
		{
			goto IL_002a;
		}
	}
	{
		return 5;
	}

IL_002a:
	{
		return 4;
	}

IL_002c:
	{
		uint32_t L_4 = ___val;
		if (((int32_t)((int32_t)L_4&(int32_t)((int32_t)255))))
		{
			goto IL_0042;
		}
	}
	{
		uint32_t L_5 = ___val;
		if (((int32_t)((int32_t)L_5&(int32_t)((int32_t)4095))))
		{
			goto IL_0040;
		}
	}
	{
		return 3;
	}

IL_0040:
	{
		return 2;
	}

IL_0042:
	{
		uint32_t L_6 = ___val;
		if (((int32_t)((int32_t)L_6&(int32_t)((int32_t)15))))
		{
			goto IL_004a;
		}
	}
	{
		return 1;
	}

IL_004a:
	{
		return 0;
	}
}
// System.NumberFormatter System.NumberFormatter::GetInstance()
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1597_il2cpp_TypeInfo_var;
extern "C" NumberFormatter_t4320 * NumberFormatter_GetInstance_m21416 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		Thread_t1597_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3103);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = ((NumberFormatter_t4320_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(NumberFormatter_t4320_il2cpp_TypeInfo_var))->___threadNumberFormatter_25;
		V_0 = L_0;
		((NumberFormatter_t4320_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(NumberFormatter_t4320_il2cpp_TypeInfo_var))->___threadNumberFormatter_25 = (NumberFormatter_t4320 *)NULL;
		NumberFormatter_t4320 * L_1 = V_0;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1597_il2cpp_TypeInfo_var);
		Thread_t1597 * L_2 = Thread_get_CurrentThread_m7400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NumberFormatter_t4320 * L_3 = (NumberFormatter_t4320 *)il2cpp_codegen_object_new (NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter__ctor_m21373(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		NumberFormatter_t4320 * L_4 = V_0;
		return L_4;
	}
}
// System.Void System.NumberFormatter::Release()
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter_Release_m21417 (NumberFormatter_t4320 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		((NumberFormatter_t4320_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(NumberFormatter_t4320_il2cpp_TypeInfo_var))->___threadNumberFormatter_25 = __this;
		return;
	}
}
// System.Void System.NumberFormatter::SetThreadCurrentCulture(System.Globalization.CultureInfo)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter_SetThreadCurrentCulture_m21418 (Object_t * __this /* static, unused */, CultureInfo_t1331 * ___culture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = ((NumberFormatter_t4320_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(NumberFormatter_t4320_il2cpp_TypeInfo_var))->___threadNumberFormatter_25;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_1 = ((NumberFormatter_t4320_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(NumberFormatter_t4320_il2cpp_TypeInfo_var))->___threadNumberFormatter_25;
		CultureInfo_t1331 * L_2 = ___culture;
		NullCheck(L_1);
		NumberFormatter_set_CurrentCulture_m21402(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.String System.NumberFormatter::NumberToString(System.String,System.SByte,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21419 (Object_t * __this /* static, unused */, String_t* ___format, int8_t ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NumberFormatter_t4320 * L_1 = V_0;
		String_t* L_2 = ___format;
		int8_t L_3 = ___value;
		NullCheck(L_1);
		NumberFormatter_Init_m21390(L_1, L_2, (((int32_t)L_3)), 3, /*hidden argument*/NULL);
		NumberFormatter_t4320 * L_4 = V_0;
		String_t* L_5 = ___format;
		Object_t * L_6 = ___fp;
		NullCheck(L_4);
		String_t* L_7 = NumberFormatter_IntegerToString_m21437(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		NumberFormatter_t4320 * L_8 = V_0;
		NullCheck(L_8);
		NumberFormatter_Release_m21417(L_8, /*hidden argument*/NULL);
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.String System.NumberFormatter::NumberToString(System.String,System.Byte,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21420 (Object_t * __this /* static, unused */, String_t* ___format, uint8_t ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NumberFormatter_t4320 * L_1 = V_0;
		String_t* L_2 = ___format;
		uint8_t L_3 = ___value;
		NullCheck(L_1);
		NumberFormatter_Init_m21390(L_1, L_2, L_3, 3, /*hidden argument*/NULL);
		NumberFormatter_t4320 * L_4 = V_0;
		String_t* L_5 = ___format;
		Object_t * L_6 = ___fp;
		NullCheck(L_4);
		String_t* L_7 = NumberFormatter_IntegerToString_m21437(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		NumberFormatter_t4320 * L_8 = V_0;
		NullCheck(L_8);
		NumberFormatter_Release_m21417(L_8, /*hidden argument*/NULL);
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21421 (Object_t * __this /* static, unused */, String_t* ___format, uint16_t ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NumberFormatter_t4320 * L_1 = V_0;
		String_t* L_2 = ___format;
		uint16_t L_3 = ___value;
		NullCheck(L_1);
		NumberFormatter_Init_m21390(L_1, L_2, L_3, 5, /*hidden argument*/NULL);
		NumberFormatter_t4320 * L_4 = V_0;
		String_t* L_5 = ___format;
		Object_t * L_6 = ___fp;
		NullCheck(L_4);
		String_t* L_7 = NumberFormatter_IntegerToString_m21437(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		NumberFormatter_t4320 * L_8 = V_0;
		NullCheck(L_8);
		NumberFormatter_Release_m21417(L_8, /*hidden argument*/NULL);
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.String System.NumberFormatter::NumberToString(System.String,System.Int16,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21422 (Object_t * __this /* static, unused */, String_t* ___format, int16_t ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NumberFormatter_t4320 * L_1 = V_0;
		String_t* L_2 = ___format;
		int16_t L_3 = ___value;
		NullCheck(L_1);
		NumberFormatter_Init_m21390(L_1, L_2, L_3, 5, /*hidden argument*/NULL);
		NumberFormatter_t4320 * L_4 = V_0;
		String_t* L_5 = ___format;
		Object_t * L_6 = ___fp;
		NullCheck(L_4);
		String_t* L_7 = NumberFormatter_IntegerToString_m21437(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		NumberFormatter_t4320 * L_8 = V_0;
		NullCheck(L_8);
		NumberFormatter_Release_m21417(L_8, /*hidden argument*/NULL);
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21423 (Object_t * __this /* static, unused */, String_t* ___format, uint32_t ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NumberFormatter_t4320 * L_1 = V_0;
		String_t* L_2 = ___format;
		uint32_t L_3 = ___value;
		NullCheck(L_1);
		NumberFormatter_Init_m21391(L_1, L_2, L_3, ((int32_t)10), /*hidden argument*/NULL);
		NumberFormatter_t4320 * L_4 = V_0;
		String_t* L_5 = ___format;
		Object_t * L_6 = ___fp;
		NullCheck(L_4);
		String_t* L_7 = NumberFormatter_IntegerToString_m21437(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		NumberFormatter_t4320 * L_8 = V_0;
		NullCheck(L_8);
		NumberFormatter_Release_m21417(L_8, /*hidden argument*/NULL);
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.String System.NumberFormatter::NumberToString(System.String,System.Int32,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21424 (Object_t * __this /* static, unused */, String_t* ___format, int32_t ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NumberFormatter_t4320 * L_1 = V_0;
		String_t* L_2 = ___format;
		int32_t L_3 = ___value;
		NullCheck(L_1);
		NumberFormatter_Init_m21390(L_1, L_2, L_3, ((int32_t)10), /*hidden argument*/NULL);
		NumberFormatter_t4320 * L_4 = V_0;
		String_t* L_5 = ___format;
		Object_t * L_6 = ___fp;
		NullCheck(L_4);
		String_t* L_7 = NumberFormatter_IntegerToString_m21437(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		NumberFormatter_t4320 * L_8 = V_0;
		NullCheck(L_8);
		NumberFormatter_Release_m21417(L_8, /*hidden argument*/NULL);
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21425 (Object_t * __this /* static, unused */, String_t* ___format, uint64_t ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NumberFormatter_t4320 * L_1 = V_0;
		String_t* L_2 = ___format;
		uint64_t L_3 = ___value;
		NullCheck(L_1);
		NumberFormatter_Init_m21393(L_1, L_2, L_3, /*hidden argument*/NULL);
		NumberFormatter_t4320 * L_4 = V_0;
		String_t* L_5 = ___format;
		Object_t * L_6 = ___fp;
		NullCheck(L_4);
		String_t* L_7 = NumberFormatter_IntegerToString_m21437(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		NumberFormatter_t4320 * L_8 = V_0;
		NullCheck(L_8);
		NumberFormatter_Release_m21417(L_8, /*hidden argument*/NULL);
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.String System.NumberFormatter::NumberToString(System.String,System.Int64,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21426 (Object_t * __this /* static, unused */, String_t* ___format, int64_t ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NumberFormatter_t4320 * L_1 = V_0;
		String_t* L_2 = ___format;
		int64_t L_3 = ___value;
		NullCheck(L_1);
		NumberFormatter_Init_m21392(L_1, L_2, L_3, /*hidden argument*/NULL);
		NumberFormatter_t4320 * L_4 = V_0;
		String_t* L_5 = ___format;
		Object_t * L_6 = ___fp;
		NullCheck(L_4);
		String_t* L_7 = NumberFormatter_IntegerToString_m21437(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		NumberFormatter_t4320 * L_8 = V_0;
		NullCheck(L_8);
		NumberFormatter_Release_m21417(L_8, /*hidden argument*/NULL);
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21427 (Object_t * __this /* static, unused */, String_t* ___format, float ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	NumberFormatInfo_t3955 * V_1 = {0};
	String_t* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NumberFormatter_t4320 * L_1 = V_0;
		String_t* L_2 = ___format;
		float L_3 = ___value;
		NullCheck(L_1);
		NumberFormatter_Init_m21394(L_1, L_2, (((double)L_3)), 7, /*hidden argument*/NULL);
		NumberFormatter_t4320 * L_4 = V_0;
		Object_t * L_5 = ___fp;
		NullCheck(L_4);
		NumberFormatInfo_t3955 * L_6 = NumberFormatter_GetNumberFormatInstance_m21401(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		NumberFormatter_t4320 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = (L_7->____NaN_8);
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		NumberFormatInfo_t3955 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = NumberFormatInfo_get_NaNSymbol_m18751(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_0069;
	}

IL_0029:
	{
		NumberFormatter_t4320 * L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = (L_11->____infinity_9);
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		NumberFormatter_t4320 * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = (L_13->____positive_12);
		if (!L_14)
		{
			goto IL_0042;
		}
	}
	{
		NumberFormatInfo_t3955 * L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16 = NumberFormatInfo_get_PositiveInfinitySymbol_m18768(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		goto IL_0049;
	}

IL_0042:
	{
		NumberFormatInfo_t3955 * L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = NumberFormatInfo_get_NegativeInfinitySymbol_m18752(L_17, /*hidden argument*/NULL);
		V_2 = L_18;
	}

IL_0049:
	{
		goto IL_0069;
	}

IL_004b:
	{
		NumberFormatter_t4320 * L_19 = V_0;
		NullCheck(L_19);
		uint16_t L_20 = (L_19->____specifier_13);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0060;
		}
	}
	{
		NumberFormatter_t4320 * L_21 = V_0;
		float L_22 = ___value;
		NumberFormatInfo_t3955 * L_23 = V_1;
		NullCheck(L_21);
		String_t* L_24 = NumberFormatter_FormatRoundtrip_m21444(L_21, L_22, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		goto IL_0069;
	}

IL_0060:
	{
		NumberFormatter_t4320 * L_25 = V_0;
		String_t* L_26 = ___format;
		NumberFormatInfo_t3955 * L_27 = V_1;
		NullCheck(L_25);
		String_t* L_28 = NumberFormatter_NumberToString_m21438(L_25, L_26, L_27, /*hidden argument*/NULL);
		V_2 = L_28;
	}

IL_0069:
	{
		NumberFormatter_t4320 * L_29 = V_0;
		NullCheck(L_29);
		NumberFormatter_Release_m21417(L_29, /*hidden argument*/NULL);
		String_t* L_30 = V_2;
		return L_30;
	}
}
// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21428 (Object_t * __this /* static, unused */, String_t* ___format, double ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	NumberFormatInfo_t3955 * V_1 = {0};
	String_t* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NumberFormatter_t4320 * L_1 = V_0;
		String_t* L_2 = ___format;
		double L_3 = ___value;
		NullCheck(L_1);
		NumberFormatter_Init_m21394(L_1, L_2, L_3, ((int32_t)15), /*hidden argument*/NULL);
		NumberFormatter_t4320 * L_4 = V_0;
		Object_t * L_5 = ___fp;
		NullCheck(L_4);
		NumberFormatInfo_t3955 * L_6 = NumberFormatter_GetNumberFormatInstance_m21401(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		NumberFormatter_t4320 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = (L_7->____NaN_8);
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		NumberFormatInfo_t3955 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = NumberFormatInfo_get_NaNSymbol_m18751(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_0069;
	}

IL_0029:
	{
		NumberFormatter_t4320 * L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = (L_11->____infinity_9);
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		NumberFormatter_t4320 * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = (L_13->____positive_12);
		if (!L_14)
		{
			goto IL_0042;
		}
	}
	{
		NumberFormatInfo_t3955 * L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16 = NumberFormatInfo_get_PositiveInfinitySymbol_m18768(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		goto IL_0049;
	}

IL_0042:
	{
		NumberFormatInfo_t3955 * L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = NumberFormatInfo_get_NegativeInfinitySymbol_m18752(L_17, /*hidden argument*/NULL);
		V_2 = L_18;
	}

IL_0049:
	{
		goto IL_0069;
	}

IL_004b:
	{
		NumberFormatter_t4320 * L_19 = V_0;
		NullCheck(L_19);
		uint16_t L_20 = (L_19->____specifier_13);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0060;
		}
	}
	{
		NumberFormatter_t4320 * L_21 = V_0;
		double L_22 = ___value;
		NumberFormatInfo_t3955 * L_23 = V_1;
		NullCheck(L_21);
		String_t* L_24 = NumberFormatter_FormatRoundtrip_m21443(L_21, L_22, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		goto IL_0069;
	}

IL_0060:
	{
		NumberFormatter_t4320 * L_25 = V_0;
		String_t* L_26 = ___format;
		NumberFormatInfo_t3955 * L_27 = V_1;
		NullCheck(L_25);
		String_t* L_28 = NumberFormatter_NumberToString_m21438(L_25, L_26, L_27, /*hidden argument*/NULL);
		V_2 = L_28;
	}

IL_0069:
	{
		NumberFormatter_t4320 * L_29 = V_0;
		NullCheck(L_29);
		NumberFormatter_Release_m21417(L_29, /*hidden argument*/NULL);
		String_t* L_30 = V_2;
		return L_30;
	}
}
// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21429 (Object_t * __this /* static, unused */, String_t* ___format, Decimal_t2541  ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NumberFormatter_t4320 * L_1 = V_0;
		String_t* L_2 = ___format;
		Decimal_t2541  L_3 = ___value;
		NullCheck(L_1);
		NumberFormatter_Init_m21395(L_1, L_2, L_3, /*hidden argument*/NULL);
		NumberFormatter_t4320 * L_4 = V_0;
		String_t* L_5 = ___format;
		NumberFormatter_t4320 * L_6 = V_0;
		Object_t * L_7 = ___fp;
		NullCheck(L_6);
		NumberFormatInfo_t3955 * L_8 = NumberFormatter_GetNumberFormatInstance_m21401(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_9 = NumberFormatter_NumberToString_m21438(L_4, L_5, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		NumberFormatter_t4320 * L_10 = V_0;
		NullCheck(L_10);
		NumberFormatter_Release_m21417(L_10, /*hidden argument*/NULL);
		String_t* L_11 = V_1;
		return L_11;
	}
}
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21430 (Object_t * __this /* static, unused */, uint32_t ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		uint32_t L_0 = ___value;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)100000000)))))
		{
			goto IL_0011;
		}
	}
	{
		uint32_t L_1 = ___value;
		Object_t * L_2 = ___fp;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		String_t* L_3 = NumberFormatter_NumberToString_m21423(NULL /*static, unused*/, (String_t*)NULL, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_4 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_4;
		NumberFormatter_t4320 * L_5 = V_0;
		uint32_t L_6 = ___value;
		Object_t * L_7 = ___fp;
		NullCheck(L_5);
		String_t* L_8 = NumberFormatter_FastIntegerToString_m21436(L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		NumberFormatter_t4320 * L_9 = V_0;
		NullCheck(L_9);
		NumberFormatter_Release_m21417(L_9, /*hidden argument*/NULL);
		String_t* L_10 = V_1;
		return L_10;
	}
}
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21431 (Object_t * __this /* static, unused */, int32_t ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		int32_t L_0 = ___value;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)100000000))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___value;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)-100000000))))
		{
			goto IL_0019;
		}
	}

IL_0010:
	{
		int32_t L_2 = ___value;
		Object_t * L_3 = ___fp;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		String_t* L_4 = NumberFormatter_NumberToString_m21424(NULL /*static, unused*/, (String_t*)NULL, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_5 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_5;
		NumberFormatter_t4320 * L_6 = V_0;
		int32_t L_7 = ___value;
		Object_t * L_8 = ___fp;
		NullCheck(L_6);
		String_t* L_9 = NumberFormatter_FastIntegerToString_m21436(L_6, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		NumberFormatter_t4320 * L_10 = V_0;
		NullCheck(L_10);
		NumberFormatter_Release_m21417(L_10, /*hidden argument*/NULL);
		String_t* L_11 = V_1;
		return L_11;
	}
}
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21432 (Object_t * __this /* static, unused */, uint64_t ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		uint64_t L_0 = ___value;
		if ((!(((uint64_t)L_0) >= ((uint64_t)(((int64_t)((int32_t)100000000)))))))
		{
			goto IL_0012;
		}
	}
	{
		uint64_t L_1 = ___value;
		Object_t * L_2 = ___fp;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		String_t* L_3 = NumberFormatter_NumberToString_m21425(NULL /*static, unused*/, (String_t*)NULL, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_4 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_4;
		NumberFormatter_t4320 * L_5 = V_0;
		uint64_t L_6 = ___value;
		Object_t * L_7 = ___fp;
		NullCheck(L_5);
		String_t* L_8 = NumberFormatter_FastIntegerToString_m21436(L_5, (((int32_t)L_6)), L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		NumberFormatter_t4320 * L_9 = V_0;
		NullCheck(L_9);
		NumberFormatter_Release_m21417(L_9, /*hidden argument*/NULL);
		String_t* L_10 = V_1;
		return L_10;
	}
}
// System.String System.NumberFormatter::NumberToString(System.Int64,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21433 (Object_t * __this /* static, unused */, int64_t ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		int64_t L_0 = ___value;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)((int32_t)100000000))))))
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_1 = ___value;
		if ((((int64_t)L_1) > ((int64_t)(((int64_t)((int32_t)-100000000))))))
		{
			goto IL_001b;
		}
	}

IL_0012:
	{
		int64_t L_2 = ___value;
		Object_t * L_3 = ___fp;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		String_t* L_4 = NumberFormatter_NumberToString_m21426(NULL /*static, unused*/, (String_t*)NULL, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_5 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_5;
		NumberFormatter_t4320 * L_6 = V_0;
		int64_t L_7 = ___value;
		Object_t * L_8 = ___fp;
		NullCheck(L_6);
		String_t* L_9 = NumberFormatter_FastIntegerToString_m21436(L_6, (((int32_t)L_7)), L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		NumberFormatter_t4320 * L_10 = V_0;
		NullCheck(L_10);
		NumberFormatter_Release_m21417(L_10, /*hidden argument*/NULL);
		String_t* L_11 = V_1;
		return L_11;
	}
}
// System.String System.NumberFormatter::NumberToString(System.Single,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21434 (Object_t * __this /* static, unused */, float ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	NumberFormatInfo_t3955 * V_1 = {0};
	String_t* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NumberFormatter_t4320 * L_1 = V_0;
		float L_2 = ___value;
		NullCheck(L_1);
		NumberFormatter_Init_m21394(L_1, (String_t*)NULL, (((double)L_2)), 7, /*hidden argument*/NULL);
		NumberFormatter_t4320 * L_3 = V_0;
		Object_t * L_4 = ___fp;
		NullCheck(L_3);
		NumberFormatInfo_t3955 * L_5 = NumberFormatter_GetNumberFormatInstance_m21401(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		NumberFormatter_t4320 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = (L_6->____NaN_8);
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		NumberFormatInfo_t3955 * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = NumberFormatInfo_get_NaNSymbol_m18751(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		goto IL_0054;
	}

IL_0029:
	{
		NumberFormatter_t4320 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = (L_10->____infinity_9);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		NumberFormatter_t4320 * L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = (L_12->____positive_12);
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		NumberFormatInfo_t3955 * L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15 = NumberFormatInfo_get_PositiveInfinitySymbol_m18768(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		goto IL_0049;
	}

IL_0042:
	{
		NumberFormatInfo_t3955 * L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17 = NumberFormatInfo_get_NegativeInfinitySymbol_m18752(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
	}

IL_0049:
	{
		goto IL_0054;
	}

IL_004b:
	{
		NumberFormatter_t4320 * L_18 = V_0;
		NumberFormatInfo_t3955 * L_19 = V_1;
		NullCheck(L_18);
		String_t* L_20 = NumberFormatter_FormatGeneral_m21445(L_18, (-1), L_19, /*hidden argument*/NULL);
		V_2 = L_20;
	}

IL_0054:
	{
		NumberFormatter_t4320 * L_21 = V_0;
		NullCheck(L_21);
		NumberFormatter_Release_m21417(L_21, /*hidden argument*/NULL);
		String_t* L_22 = V_2;
		return L_22;
	}
}
// System.String System.NumberFormatter::NumberToString(System.Double,System.IFormatProvider)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21435 (Object_t * __this /* static, unused */, double ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatter_t4320 * V_0 = {0};
	NumberFormatInfo_t3955 * V_1 = {0};
	String_t* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetInstance_m21416(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NumberFormatter_t4320 * L_1 = V_0;
		Object_t * L_2 = ___fp;
		NullCheck(L_1);
		NumberFormatInfo_t3955 * L_3 = NumberFormatter_GetNumberFormatInstance_m21401(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		NumberFormatter_t4320 * L_4 = V_0;
		double L_5 = ___value;
		NullCheck(L_4);
		NumberFormatter_Init_m21394(L_4, (String_t*)NULL, L_5, ((int32_t)15), /*hidden argument*/NULL);
		NumberFormatter_t4320 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = (L_6->____NaN_8);
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		NumberFormatInfo_t3955 * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = NumberFormatInfo_get_NaNSymbol_m18751(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		goto IL_0054;
	}

IL_0029:
	{
		NumberFormatter_t4320 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = (L_10->____infinity_9);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		NumberFormatter_t4320 * L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = (L_12->____positive_12);
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		NumberFormatInfo_t3955 * L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15 = NumberFormatInfo_get_PositiveInfinitySymbol_m18768(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		goto IL_0049;
	}

IL_0042:
	{
		NumberFormatInfo_t3955 * L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17 = NumberFormatInfo_get_NegativeInfinitySymbol_m18752(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
	}

IL_0049:
	{
		goto IL_0054;
	}

IL_004b:
	{
		NumberFormatter_t4320 * L_18 = V_0;
		NumberFormatInfo_t3955 * L_19 = V_1;
		NullCheck(L_18);
		String_t* L_20 = NumberFormatter_FormatGeneral_m21445(L_18, (-1), L_19, /*hidden argument*/NULL);
		V_2 = L_20;
	}

IL_0054:
	{
		NumberFormatter_t4320 * L_21 = V_0;
		NullCheck(L_21);
		NumberFormatter_Release_m21417(L_21, /*hidden argument*/NULL);
		String_t* L_22 = V_2;
		return L_22;
	}
}
// System.String System.NumberFormatter::FastIntegerToString(System.Int32,System.IFormatProvider)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_FastIntegerToString_m21436 (NumberFormatter_t4320 * __this, int32_t ___value, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___value;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		Object_t * L_1 = ___fp;
		NumberFormatInfo_t3955 * L_2 = NumberFormatter_GetNumberFormatInstance_m21401(__this, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = NumberFormatInfo_get_NegativeSign_m18753(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m2782(L_4, /*hidden argument*/NULL);
		NumberFormatter_ResetCharBuf_m21396(__this, ((int32_t)((int32_t)8+(int32_t)L_5)), /*hidden argument*/NULL);
		int32_t L_6 = ___value;
		___value = ((-L_6));
		String_t* L_7 = V_0;
		NumberFormatter_Append_m21400(__this, L_7, /*hidden argument*/NULL);
		goto IL_0035;
	}

IL_002e:
	{
		NumberFormatter_ResetCharBuf_m21396(__this, 8, /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_8 = ___value;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)10000))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_9 = ___value;
		V_1 = ((int32_t)((int32_t)L_9/(int32_t)((int32_t)10000)));
		int32_t L_10 = V_1;
		NumberFormatter_FastAppendDigits_m21461(__this, L_10, 0, /*hidden argument*/NULL);
		int32_t L_11 = ___value;
		int32_t L_12 = V_1;
		NumberFormatter_FastAppendDigits_m21461(__this, ((int32_t)((int32_t)L_11-(int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)10000))))), 1, /*hidden argument*/NULL);
		goto IL_0067;
	}

IL_005f:
	{
		int32_t L_13 = ___value;
		NumberFormatter_FastAppendDigits_m21461(__this, L_13, 0, /*hidden argument*/NULL);
	}

IL_0067:
	{
		CharU5BU5D_t646* L_14 = (__this->____cbuf_23);
		int32_t L_15 = (__this->____ind_24);
		String_t* L_16 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_16 = String_CreateString_m11524(L_16, L_14, 0, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.String System.NumberFormatter::IntegerToString(System.String,System.IFormatProvider)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t1330_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_IntegerToString_m21437 (NumberFormatter_t4320 * __this, String_t* ___format, Object_t * ___fp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t1330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2627);
		s_Il2CppMethodIntialized = true;
	}
	NumberFormatInfo_t3955 * V_0 = {0};
	uint16_t V_1 = 0x0;
	{
		Object_t * L_0 = ___fp;
		NumberFormatInfo_t3955 * L_1 = NumberFormatter_GetNumberFormatInstance_m21401(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		uint16_t L_2 = (__this->____specifier_13);
		V_1 = L_2;
		uint16_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 0)
		{
			goto IL_005a;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 1)
		{
			goto IL_0068;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 2)
		{
			goto IL_0076;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 3)
		{
			goto IL_0084;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 4)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 5)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 6)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 7)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 8)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 9)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 10)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 11)
		{
			goto IL_00b2;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 12)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 13)
		{
			goto IL_00c0;
		}
	}

IL_0050:
	{
		uint16_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)88))))
		{
			goto IL_00ce;
		}
	}
	{
		goto IL_00db;
	}

IL_005a:
	{
		int32_t L_5 = (__this->____precision_14);
		NumberFormatInfo_t3955 * L_6 = V_0;
		String_t* L_7 = NumberFormatter_FormatCurrency_m21439(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0068:
	{
		int32_t L_8 = (__this->____precision_14);
		NumberFormatInfo_t3955 * L_9 = V_0;
		String_t* L_10 = NumberFormatter_FormatDecimal_m21440(__this, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0076:
	{
		int32_t L_11 = (__this->____precision_14);
		NumberFormatInfo_t3955 * L_12 = V_0;
		String_t* L_13 = NumberFormatter_FormatExponential_m21448(__this, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0084:
	{
		int32_t L_14 = (__this->____precision_14);
		NumberFormatInfo_t3955 * L_15 = V_0;
		String_t* L_16 = NumberFormatter_FormatFixedPoint_m21442(__this, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0092:
	{
		int32_t L_17 = (__this->____precision_14);
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		NumberFormatInfo_t3955 * L_18 = V_0;
		String_t* L_19 = NumberFormatter_FormatDecimal_m21440(__this, (-1), L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_00a4:
	{
		int32_t L_20 = (__this->____precision_14);
		NumberFormatInfo_t3955 * L_21 = V_0;
		String_t* L_22 = NumberFormatter_FormatGeneral_m21445(__this, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_00b2:
	{
		int32_t L_23 = (__this->____precision_14);
		NumberFormatInfo_t3955 * L_24 = V_0;
		String_t* L_25 = NumberFormatter_FormatNumber_m21446(__this, L_23, L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_00c0:
	{
		int32_t L_26 = (__this->____precision_14);
		NumberFormatInfo_t3955 * L_27 = V_0;
		String_t* L_28 = NumberFormatter_FormatPercent_m21447(__this, L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}

IL_00ce:
	{
		int32_t L_29 = (__this->____precision_14);
		String_t* L_30 = NumberFormatter_FormatHexadecimal_m21441(__this, L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_00db:
	{
		bool L_31 = (__this->____isCustomFormat_10);
		if (!L_31)
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_32 = ___format;
		NumberFormatInfo_t3955 * L_33 = V_0;
		String_t* L_34 = NumberFormatter_FormatCustom_m21450(__this, L_32, L_33, /*hidden argument*/NULL);
		return L_34;
	}

IL_00ec:
	{
		String_t* L_35 = ___format;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m103(NULL /*static, unused*/, (String_t*) &_stringLiteral5590, L_35, (String_t*) &_stringLiteral5591, /*hidden argument*/NULL);
		FormatException_t1330 * L_37 = (FormatException_t1330 *)il2cpp_codegen_object_new (FormatException_t1330_il2cpp_TypeInfo_var);
		FormatException__ctor_m6577(L_37, L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_37);
	}
}
// System.String System.NumberFormatter::NumberToString(System.String,System.Globalization.NumberFormatInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t1330_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_NumberToString_m21438 (NumberFormatter_t4320 * __this, String_t* ___format, NumberFormatInfo_t3955 * ___nfi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		FormatException_t1330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2627);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	{
		uint16_t L_0 = (__this->____specifier_13);
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 0)
		{
			goto IL_0040;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 1)
		{
			goto IL_0024;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 2)
		{
			goto IL_004e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 3)
		{
			goto IL_005c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 4)
		{
			goto IL_006a;
		}
	}

IL_0024:
	{
		uint16_t L_2 = V_0;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)78))) == 0)
		{
			goto IL_0078;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)78))) == 1)
		{
			goto IL_0039;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)78))) == 2)
		{
			goto IL_0086;
		}
	}

IL_0039:
	{
		uint16_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)88))))
		{
			goto IL_0094;
		}
	}
	{
		goto IL_0094;
	}

IL_0040:
	{
		int32_t L_4 = (__this->____precision_14);
		NumberFormatInfo_t3955 * L_5 = ___nfi;
		String_t* L_6 = NumberFormatter_FormatCurrency_m21439(__this, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_004e:
	{
		int32_t L_7 = (__this->____precision_14);
		NumberFormatInfo_t3955 * L_8 = ___nfi;
		String_t* L_9 = NumberFormatter_FormatExponential_m21448(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_005c:
	{
		int32_t L_10 = (__this->____precision_14);
		NumberFormatInfo_t3955 * L_11 = ___nfi;
		String_t* L_12 = NumberFormatter_FormatFixedPoint_m21442(__this, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_006a:
	{
		int32_t L_13 = (__this->____precision_14);
		NumberFormatInfo_t3955 * L_14 = ___nfi;
		String_t* L_15 = NumberFormatter_FormatGeneral_m21445(__this, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0078:
	{
		int32_t L_16 = (__this->____precision_14);
		NumberFormatInfo_t3955 * L_17 = ___nfi;
		String_t* L_18 = NumberFormatter_FormatNumber_m21446(__this, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0086:
	{
		int32_t L_19 = (__this->____precision_14);
		NumberFormatInfo_t3955 * L_20 = ___nfi;
		String_t* L_21 = NumberFormatter_FormatPercent_m21447(__this, L_19, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0094:
	{
		bool L_22 = (__this->____isCustomFormat_10);
		if (!L_22)
		{
			goto IL_00a5;
		}
	}
	{
		String_t* L_23 = ___format;
		NumberFormatInfo_t3955 * L_24 = ___nfi;
		String_t* L_25 = NumberFormatter_FormatCustom_m21450(__this, L_23, L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_00a5:
	{
		String_t* L_26 = ___format;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m103(NULL /*static, unused*/, (String_t*) &_stringLiteral5590, L_26, (String_t*) &_stringLiteral5591, /*hidden argument*/NULL);
		FormatException_t1330 * L_28 = (FormatException_t1330 *)il2cpp_codegen_object_new (FormatException_t1330_il2cpp_TypeInfo_var);
		FormatException__ctor_m6577(L_28, L_27, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}
}
// System.String System.NumberFormatter::FormatCurrency(System.Int32,System.Globalization.NumberFormatInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_FormatCurrency_m21439 (NumberFormatter_t4320 * __this, int32_t ___precision, NumberFormatInfo_t3955 * ___nfi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___precision;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = ___precision;
		G_B3_0 = L_1;
		goto IL_000d;
	}

IL_0007:
	{
		NumberFormatInfo_t3955 * L_2 = ___nfi;
		NullCheck(L_2);
		int32_t L_3 = NumberFormatInfo_get_CurrencyDecimalDigits_m18742(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		___precision = G_B3_0;
		int32_t L_4 = ___precision;
		NumberFormatter_RoundDecimal_m21409(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = NumberFormatter_get_IntegerDigits_m21403(__this, /*hidden argument*/NULL);
		int32_t L_6 = ___precision;
		NumberFormatter_ResetCharBuf_m21396(__this, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)2))+(int32_t)((int32_t)((int32_t)L_6*(int32_t)2))))+(int32_t)((int32_t)16))), /*hidden argument*/NULL);
		bool L_7 = (__this->____positive_12);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		NumberFormatInfo_t3955 * L_8 = ___nfi;
		NullCheck(L_8);
		int32_t L_9 = NumberFormatInfo_get_CurrencyPositivePattern_m18747(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if (L_10 == 0)
		{
			goto IL_0051;
		}
		if (L_10 == 1)
		{
			goto IL_0075;
		}
		if (L_10 == 2)
		{
			goto IL_005f;
		}
	}
	{
		goto IL_0075;
	}

IL_0051:
	{
		NumberFormatInfo_t3955 * L_11 = ___nfi;
		NullCheck(L_11);
		String_t* L_12 = NumberFormatInfo_get_CurrencySymbol_m18748(L_11, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_12, /*hidden argument*/NULL);
		goto IL_0075;
	}

IL_005f:
	{
		NumberFormatInfo_t3955 * L_13 = ___nfi;
		NullCheck(L_13);
		String_t* L_14 = NumberFormatInfo_get_CurrencySymbol_m18748(L_13, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_14, /*hidden argument*/NULL);
		NumberFormatter_Append_m21398(__this, ((int32_t)32), /*hidden argument*/NULL);
		goto IL_0075;
	}

IL_0075:
	{
		goto IL_01e1;
	}

IL_007a:
	{
		NumberFormatInfo_t3955 * L_15 = ___nfi;
		NullCheck(L_15);
		int32_t L_16 = NumberFormatInfo_get_CurrencyNegativePattern_m18746(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		int32_t L_17 = V_0;
		if (L_17 == 0)
		{
			goto IL_00cc;
		}
		if (L_17 == 1)
		{
			goto IL_00e5;
		}
		if (L_17 == 2)
		{
			goto IL_0102;
		}
		if (L_17 == 3)
		{
			goto IL_011f;
		}
		if (L_17 == 4)
		{
			goto IL_0130;
		}
		if (L_17 == 5)
		{
			goto IL_013d;
		}
		if (L_17 == 6)
		{
			goto IL_01e1;
		}
		if (L_17 == 7)
		{
			goto IL_01e1;
		}
		if (L_17 == 8)
		{
			goto IL_014e;
		}
		if (L_17 == 9)
		{
			goto IL_015f;
		}
		if (L_17 == 10)
		{
			goto IL_01e1;
		}
		if (L_17 == 11)
		{
			goto IL_0181;
		}
		if (L_17 == 12)
		{
			goto IL_0197;
		}
		if (L_17 == 13)
		{
			goto IL_01e1;
		}
		if (L_17 == 14)
		{
			goto IL_01b9;
		}
		if (L_17 == 15)
		{
			goto IL_01d7;
		}
	}
	{
		goto IL_01e1;
	}

IL_00cc:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)40), /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_18 = ___nfi;
		NullCheck(L_18);
		String_t* L_19 = NumberFormatInfo_get_CurrencySymbol_m18748(L_18, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_19, /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_00e5:
	{
		NumberFormatInfo_t3955 * L_20 = ___nfi;
		NullCheck(L_20);
		String_t* L_21 = NumberFormatInfo_get_NegativeSign_m18753(L_20, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_21, /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_22 = ___nfi;
		NullCheck(L_22);
		String_t* L_23 = NumberFormatInfo_get_CurrencySymbol_m18748(L_22, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_23, /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_0102:
	{
		NumberFormatInfo_t3955 * L_24 = ___nfi;
		NullCheck(L_24);
		String_t* L_25 = NumberFormatInfo_get_CurrencySymbol_m18748(L_24, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_25, /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_26 = ___nfi;
		NullCheck(L_26);
		String_t* L_27 = NumberFormatInfo_get_NegativeSign_m18753(L_26, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_27, /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_011f:
	{
		NumberFormatInfo_t3955 * L_28 = ___nfi;
		NullCheck(L_28);
		String_t* L_29 = NumberFormatInfo_get_CurrencySymbol_m18748(L_28, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_29, /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_0130:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)40), /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_013d:
	{
		NumberFormatInfo_t3955 * L_30 = ___nfi;
		NullCheck(L_30);
		String_t* L_31 = NumberFormatInfo_get_NegativeSign_m18753(L_30, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_31, /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_014e:
	{
		NumberFormatInfo_t3955 * L_32 = ___nfi;
		NullCheck(L_32);
		String_t* L_33 = NumberFormatInfo_get_NegativeSign_m18753(L_32, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_33, /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_015f:
	{
		NumberFormatInfo_t3955 * L_34 = ___nfi;
		NullCheck(L_34);
		String_t* L_35 = NumberFormatInfo_get_NegativeSign_m18753(L_34, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_35, /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_36 = ___nfi;
		NullCheck(L_36);
		String_t* L_37 = NumberFormatInfo_get_CurrencySymbol_m18748(L_36, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_37, /*hidden argument*/NULL);
		NumberFormatter_Append_m21398(__this, ((int32_t)32), /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_0181:
	{
		NumberFormatInfo_t3955 * L_38 = ___nfi;
		NullCheck(L_38);
		String_t* L_39 = NumberFormatInfo_get_CurrencySymbol_m18748(L_38, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_39, /*hidden argument*/NULL);
		NumberFormatter_Append_m21398(__this, ((int32_t)32), /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_0197:
	{
		NumberFormatInfo_t3955 * L_40 = ___nfi;
		NullCheck(L_40);
		String_t* L_41 = NumberFormatInfo_get_CurrencySymbol_m18748(L_40, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_41, /*hidden argument*/NULL);
		NumberFormatter_Append_m21398(__this, ((int32_t)32), /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_42 = ___nfi;
		NullCheck(L_42);
		String_t* L_43 = NumberFormatInfo_get_NegativeSign_m18753(L_42, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_43, /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_01b9:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)40), /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_44 = ___nfi;
		NullCheck(L_44);
		String_t* L_45 = NumberFormatInfo_get_CurrencySymbol_m18748(L_44, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_45, /*hidden argument*/NULL);
		NumberFormatter_Append_m21398(__this, ((int32_t)32), /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_01d7:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)40), /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_01e1:
	{
		NumberFormatInfo_t3955 * L_46 = ___nfi;
		NullCheck(L_46);
		Int32U5BU5D_t119* L_47 = NumberFormatInfo_get_RawCurrencyGroupSizes_m18745(L_46, /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_48 = ___nfi;
		NullCheck(L_48);
		String_t* L_49 = NumberFormatInfo_get_CurrencyGroupSeparator_m18744(L_48, /*hidden argument*/NULL);
		NumberFormatter_AppendIntegerStringWithGroupSeparator_m21458(__this, L_47, L_49, /*hidden argument*/NULL);
		int32_t L_50 = ___precision;
		if ((((int32_t)L_50) <= ((int32_t)0)))
		{
			goto IL_020a;
		}
	}
	{
		NumberFormatInfo_t3955 * L_51 = ___nfi;
		NullCheck(L_51);
		String_t* L_52 = NumberFormatInfo_get_CurrencyDecimalSeparator_m18743(L_51, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_52, /*hidden argument*/NULL);
		int32_t L_53 = ___precision;
		NumberFormatter_AppendDecimalString_m21457(__this, L_53, /*hidden argument*/NULL);
	}

IL_020a:
	{
		bool L_54 = (__this->____positive_12);
		if (!L_54)
		{
			goto IL_0258;
		}
	}
	{
		NumberFormatInfo_t3955 * L_55 = ___nfi;
		NullCheck(L_55);
		int32_t L_56 = NumberFormatInfo_get_CurrencyPositivePattern_m18747(L_55, /*hidden argument*/NULL);
		V_0 = L_56;
		int32_t L_57 = V_0;
		if (((int32_t)((int32_t)L_57-(int32_t)1)) == 0)
		{
			goto IL_022f;
		}
		if (((int32_t)((int32_t)L_57-(int32_t)1)) == 1)
		{
			goto IL_0253;
		}
		if (((int32_t)((int32_t)L_57-(int32_t)1)) == 2)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_0253;
	}

IL_022f:
	{
		NumberFormatInfo_t3955 * L_58 = ___nfi;
		NullCheck(L_58);
		String_t* L_59 = NumberFormatInfo_get_CurrencySymbol_m18748(L_58, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_59, /*hidden argument*/NULL);
		goto IL_0253;
	}

IL_023d:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)32), /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_60 = ___nfi;
		NullCheck(L_60);
		String_t* L_61 = NumberFormatInfo_get_CurrencySymbol_m18748(L_60, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_61, /*hidden argument*/NULL);
		goto IL_0253;
	}

IL_0253:
	{
		goto IL_03bf;
	}

IL_0258:
	{
		NumberFormatInfo_t3955 * L_62 = ___nfi;
		NullCheck(L_62);
		int32_t L_63 = NumberFormatInfo_get_CurrencyNegativePattern_m18746(L_62, /*hidden argument*/NULL);
		V_0 = L_63;
		int32_t L_64 = V_0;
		if (L_64 == 0)
		{
			goto IL_02aa;
		}
		if (L_64 == 1)
		{
			goto IL_03bf;
		}
		if (L_64 == 2)
		{
			goto IL_03bf;
		}
		if (L_64 == 3)
		{
			goto IL_02b7;
		}
		if (L_64 == 4)
		{
			goto IL_02c8;
		}
		if (L_64 == 5)
		{
			goto IL_02e1;
		}
		if (L_64 == 6)
		{
			goto IL_02f2;
		}
		if (L_64 == 7)
		{
			goto IL_030f;
		}
		if (L_64 == 8)
		{
			goto IL_032c;
		}
		if (L_64 == 9)
		{
			goto IL_03bf;
		}
		if (L_64 == 10)
		{
			goto IL_0345;
		}
		if (L_64 == 11)
		{
			goto IL_0367;
		}
		if (L_64 == 12)
		{
			goto IL_03bf;
		}
		if (L_64 == 13)
		{
			goto IL_0375;
		}
		if (L_64 == 14)
		{
			goto IL_0397;
		}
		if (L_64 == 15)
		{
			goto IL_03a1;
		}
	}
	{
		goto IL_03bf;
	}

IL_02aa:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)41), /*hidden argument*/NULL);
		goto IL_03bf;
	}

IL_02b7:
	{
		NumberFormatInfo_t3955 * L_65 = ___nfi;
		NullCheck(L_65);
		String_t* L_66 = NumberFormatInfo_get_NegativeSign_m18753(L_65, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_66, /*hidden argument*/NULL);
		goto IL_03bf;
	}

IL_02c8:
	{
		NumberFormatInfo_t3955 * L_67 = ___nfi;
		NullCheck(L_67);
		String_t* L_68 = NumberFormatInfo_get_CurrencySymbol_m18748(L_67, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_68, /*hidden argument*/NULL);
		NumberFormatter_Append_m21398(__this, ((int32_t)41), /*hidden argument*/NULL);
		goto IL_03bf;
	}

IL_02e1:
	{
		NumberFormatInfo_t3955 * L_69 = ___nfi;
		NullCheck(L_69);
		String_t* L_70 = NumberFormatInfo_get_CurrencySymbol_m18748(L_69, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_70, /*hidden argument*/NULL);
		goto IL_03bf;
	}

IL_02f2:
	{
		NumberFormatInfo_t3955 * L_71 = ___nfi;
		NullCheck(L_71);
		String_t* L_72 = NumberFormatInfo_get_NegativeSign_m18753(L_71, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_72, /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_73 = ___nfi;
		NullCheck(L_73);
		String_t* L_74 = NumberFormatInfo_get_CurrencySymbol_m18748(L_73, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_74, /*hidden argument*/NULL);
		goto IL_03bf;
	}

IL_030f:
	{
		NumberFormatInfo_t3955 * L_75 = ___nfi;
		NullCheck(L_75);
		String_t* L_76 = NumberFormatInfo_get_CurrencySymbol_m18748(L_75, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_76, /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_77 = ___nfi;
		NullCheck(L_77);
		String_t* L_78 = NumberFormatInfo_get_NegativeSign_m18753(L_77, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_78, /*hidden argument*/NULL);
		goto IL_03bf;
	}

IL_032c:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)32), /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_79 = ___nfi;
		NullCheck(L_79);
		String_t* L_80 = NumberFormatInfo_get_CurrencySymbol_m18748(L_79, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_80, /*hidden argument*/NULL);
		goto IL_03bf;
	}

IL_0345:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)32), /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_81 = ___nfi;
		NullCheck(L_81);
		String_t* L_82 = NumberFormatInfo_get_CurrencySymbol_m18748(L_81, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_82, /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_83 = ___nfi;
		NullCheck(L_83);
		String_t* L_84 = NumberFormatInfo_get_NegativeSign_m18753(L_83, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_84, /*hidden argument*/NULL);
		goto IL_03bf;
	}

IL_0367:
	{
		NumberFormatInfo_t3955 * L_85 = ___nfi;
		NullCheck(L_85);
		String_t* L_86 = NumberFormatInfo_get_NegativeSign_m18753(L_85, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_86, /*hidden argument*/NULL);
		goto IL_03bf;
	}

IL_0375:
	{
		NumberFormatInfo_t3955 * L_87 = ___nfi;
		NullCheck(L_87);
		String_t* L_88 = NumberFormatInfo_get_NegativeSign_m18753(L_87, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_88, /*hidden argument*/NULL);
		NumberFormatter_Append_m21398(__this, ((int32_t)32), /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_89 = ___nfi;
		NullCheck(L_89);
		String_t* L_90 = NumberFormatInfo_get_CurrencySymbol_m18748(L_89, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_90, /*hidden argument*/NULL);
		goto IL_03bf;
	}

IL_0397:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)41), /*hidden argument*/NULL);
		goto IL_03bf;
	}

IL_03a1:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)32), /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_91 = ___nfi;
		NullCheck(L_91);
		String_t* L_92 = NumberFormatInfo_get_CurrencySymbol_m18748(L_91, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_92, /*hidden argument*/NULL);
		NumberFormatter_Append_m21398(__this, ((int32_t)41), /*hidden argument*/NULL);
		goto IL_03bf;
	}

IL_03bf:
	{
		CharU5BU5D_t646* L_93 = (__this->____cbuf_23);
		int32_t L_94 = (__this->____ind_24);
		String_t* L_95 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_95 = String_CreateString_m11524(L_95, L_93, 0, L_94, /*hidden argument*/NULL);
		return L_95;
	}
}
// System.String System.NumberFormatter::FormatDecimal(System.Int32,System.Globalization.NumberFormatInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_FormatDecimal_m21440 (NumberFormatter_t4320 * __this, int32_t ___precision, NumberFormatInfo_t3955 * ___nfi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___precision;
		int32_t L_1 = (__this->____digitsLen_16);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = (__this->____digitsLen_16);
		___precision = L_2;
	}

IL_0013:
	{
		int32_t L_3 = ___precision;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (String_t*) &_stringLiteral1001;
	}

IL_001c:
	{
		int32_t L_4 = ___precision;
		NumberFormatter_ResetCharBuf_m21396(__this, ((int32_t)((int32_t)L_4+(int32_t)1)), /*hidden argument*/NULL);
		bool L_5 = (__this->____positive_12);
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		NumberFormatInfo_t3955 * L_6 = ___nfi;
		NullCheck(L_6);
		String_t* L_7 = NumberFormatInfo_get_NegativeSign_m18753(L_6, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_7, /*hidden argument*/NULL);
	}

IL_0039:
	{
		int32_t L_8 = ___precision;
		NumberFormatter_AppendDigits_m21462(__this, 0, L_8, /*hidden argument*/NULL);
		CharU5BU5D_t646* L_9 = (__this->____cbuf_23);
		int32_t L_10 = (__this->____ind_24);
		String_t* L_11 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_11 = String_CreateString_m11524(L_11, L_9, 0, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.String System.NumberFormatter::FormatHexadecimal(System.Int32)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_FormatHexadecimal_m21441 (NumberFormatter_t4320 * __this, int32_t ___precision, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	uint16_t* V_1 = {0};
	uint64_t V_2 = 0;
	uint16_t* G_B3_0 = {0};
	{
		int32_t L_0 = ___precision;
		int32_t L_1 = (__this->____decPointPos_18);
		int32_t L_2 = Math_Max_m6594(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = (__this->____specifierIsUpper_11);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint16_t* L_4 = ((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___DigitUpperTable_3;
		G_B3_0 = L_4;
		goto IL_0021;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint16_t* L_5 = ((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___DigitLowerTable_2;
		G_B3_0 = L_5;
	}

IL_0021:
	{
		V_1 = (uint16_t*)G_B3_0;
		int32_t L_6 = V_0;
		NumberFormatter_ResetCharBuf_m21396(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		__this->____ind_24 = L_7;
		uint32_t L_8 = (__this->____val1_19);
		uint32_t L_9 = (__this->____val2_20);
		V_2 = ((int64_t)((int64_t)(((uint64_t)L_8))|(int64_t)((int64_t)((int64_t)(((uint64_t)L_9))<<(int32_t)((int32_t)32)))));
		goto IL_0061;
	}

IL_0045:
	{
		CharU5BU5D_t646* L_10 = (__this->____cbuf_23);
		int32_t L_11 = V_0;
		int32_t L_12 = ((int32_t)((int32_t)L_11-(int32_t)1));
		V_0 = L_12;
		uint16_t* L_13 = V_1;
		uint64_t L_14 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_12);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, L_12)) = (uint16_t)(*((uint16_t*)((intptr_t)((intptr_t)L_13+(intptr_t)(((uintptr_t)((int64_t)((int64_t)((int64_t)((int64_t)L_14&(int64_t)(((int64_t)((int32_t)15)))))*(int64_t)(((int64_t)2))))))))));
		uint64_t L_15 = V_2;
		V_2 = ((int64_t)((uint64_t)L_15>>4));
	}

IL_0061:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		CharU5BU5D_t646* L_17 = (__this->____cbuf_23);
		int32_t L_18 = (__this->____ind_24);
		String_t* L_19 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_19 = String_CreateString_m11524(L_19, L_17, 0, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.String System.NumberFormatter::FormatFixedPoint(System.Int32,System.Globalization.NumberFormatInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_FormatFixedPoint_m21442 (NumberFormatter_t4320 * __this, int32_t ___precision, NumberFormatInfo_t3955 * ___nfi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___precision;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		NumberFormatInfo_t3955 * L_1 = ___nfi;
		NullCheck(L_1);
		int32_t L_2 = NumberFormatInfo_get_NumberDecimalDigits_m18754(L_1, /*hidden argument*/NULL);
		___precision = L_2;
	}

IL_000e:
	{
		int32_t L_3 = ___precision;
		NumberFormatter_RoundDecimal_m21409(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = NumberFormatter_get_IntegerDigits_m21403(__this, /*hidden argument*/NULL);
		int32_t L_5 = ___precision;
		NumberFormatter_ResetCharBuf_m21396(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))+(int32_t)2)), /*hidden argument*/NULL);
		bool L_6 = (__this->____positive_12);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		NumberFormatInfo_t3955 * L_7 = ___nfi;
		NullCheck(L_7);
		String_t* L_8 = NumberFormatInfo_get_NegativeSign_m18753(L_7, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_8, /*hidden argument*/NULL);
	}

IL_003a:
	{
		int32_t L_9 = NumberFormatter_get_IntegerDigits_m21403(__this, /*hidden argument*/NULL);
		NumberFormatter_AppendIntegerString_m21455(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = ___precision;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		NumberFormatInfo_t3955 * L_11 = ___nfi;
		NullCheck(L_11);
		String_t* L_12 = NumberFormatInfo_get_NumberDecimalSeparator_m18755(L_11, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_12, /*hidden argument*/NULL);
		int32_t L_13 = ___precision;
		NumberFormatter_AppendDecimalString_m21457(__this, L_13, /*hidden argument*/NULL);
	}

IL_005d:
	{
		CharU5BU5D_t646* L_14 = (__this->____cbuf_23);
		int32_t L_15 = (__this->____ind_24);
		String_t* L_16 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_16 = String_CreateString_m11524(L_16, L_14, 0, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.String System.NumberFormatter::FormatRoundtrip(System.Double,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatRoundtrip_m21443 (NumberFormatter_t4320 * __this, double ___origval, NumberFormatInfo_t3955 * ___nfi, const MethodInfo* method)
{
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetClone_m21466(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		double L_1 = ___origval;
		if ((!(((double)L_1) >= ((double)(-1.79769313486231E+308)))))
		{
			goto IL_0039;
		}
	}
	{
		double L_2 = ___origval;
		if ((!(((double)L_2) <= ((double)(1.79769313486231E+308)))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = (__this->____defPrecision_15);
		NumberFormatInfo_t3955 * L_4 = ___nfi;
		String_t* L_5 = NumberFormatter_FormatGeneral_m21445(__this, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		double L_6 = ___origval;
		String_t* L_7 = V_1;
		NumberFormatInfo_t3955 * L_8 = ___nfi;
		double L_9 = Double_Parse_m7361(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if ((!(((double)L_6) == ((double)L_9))))
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_10 = V_1;
		return L_10;
	}

IL_0039:
	{
		NumberFormatter_t4320 * L_11 = V_0;
		int32_t L_12 = (__this->____defPrecision_15);
		NumberFormatInfo_t3955 * L_13 = ___nfi;
		NullCheck(L_11);
		String_t* L_14 = NumberFormatter_FormatGeneral_m21445(L_11, ((int32_t)((int32_t)L_12+(int32_t)2)), L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.String System.NumberFormatter::FormatRoundtrip(System.Single,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatRoundtrip_m21444 (NumberFormatter_t4320 * __this, float ___origval, NumberFormatInfo_t3955 * ___nfi, const MethodInfo* method)
{
	NumberFormatter_t4320 * V_0 = {0};
	String_t* V_1 = {0};
	{
		NumberFormatter_t4320 * L_0 = NumberFormatter_GetClone_m21466(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = (__this->____defPrecision_15);
		NumberFormatInfo_t3955 * L_2 = ___nfi;
		String_t* L_3 = NumberFormatter_FormatGeneral_m21445(__this, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = ___origval;
		String_t* L_5 = V_1;
		NumberFormatInfo_t3955 * L_6 = ___nfi;
		float L_7 = Single_Parse_m17407(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if ((!(((float)L_4) == ((float)L_7))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_8 = V_1;
		return L_8;
	}

IL_0021:
	{
		NumberFormatter_t4320 * L_9 = V_0;
		int32_t L_10 = (__this->____defPrecision_15);
		NumberFormatInfo_t3955 * L_11 = ___nfi;
		NullCheck(L_9);
		String_t* L_12 = NumberFormatter_FormatGeneral_m21445(L_9, ((int32_t)((int32_t)L_10+(int32_t)2)), L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String System.NumberFormatter::FormatGeneral(System.Int32,System.Globalization.NumberFormatInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_FormatGeneral_m21445 (NumberFormatter_t4320 * __this, int32_t ___precision, NumberFormatInfo_t3955 * ___nfi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___precision;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = NumberFormatter_get_IsFloatingSource_m21405(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->____defPrecision_15);
		___precision = L_2;
		goto IL_002d;
	}

IL_0017:
	{
		V_0 = 1;
		int32_t L_3 = ___precision;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = (__this->____defPrecision_15);
		___precision = L_4;
	}

IL_0026:
	{
		int32_t L_5 = ___precision;
		NumberFormatter_RoundPos_m21408(__this, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		int32_t L_6 = (__this->____decPointPos_18);
		V_1 = L_6;
		int32_t L_7 = (__this->____digitsLen_16);
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		V_3 = ((int32_t)((int32_t)L_8-(int32_t)L_9));
		int32_t L_10 = V_1;
		int32_t L_11 = ___precision;
		if ((((int32_t)L_10) > ((int32_t)L_11)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)-4))))
		{
			goto IL_0057;
		}
	}

IL_0048:
	{
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_14 = V_2;
		NumberFormatInfo_t3955 * L_15 = ___nfi;
		String_t* L_16 = NumberFormatter_FormatExponential_m21449(__this, ((int32_t)((int32_t)L_14-(int32_t)1)), L_15, 2, /*hidden argument*/NULL);
		return L_16;
	}

IL_0057:
	{
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		V_3 = 0;
	}

IL_005d:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		V_1 = 0;
	}

IL_0063:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_1;
		NumberFormatter_ResetCharBuf_m21396(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_19+(int32_t)L_20))+(int32_t)3)), /*hidden argument*/NULL);
		bool L_21 = (__this->____positive_12);
		if (L_21)
		{
			goto IL_0082;
		}
	}
	{
		NumberFormatInfo_t3955 * L_22 = ___nfi;
		NullCheck(L_22);
		String_t* L_23 = NumberFormatInfo_get_NegativeSign_m18753(L_22, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_23, /*hidden argument*/NULL);
	}

IL_0082:
	{
		int32_t L_24 = V_1;
		if (L_24)
		{
			goto IL_008f;
		}
	}
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)48), /*hidden argument*/NULL);
		goto IL_0099;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		NumberFormatter_AppendDigits_m21462(__this, ((int32_t)((int32_t)L_25-(int32_t)L_26)), L_27, /*hidden argument*/NULL);
	}

IL_0099:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		NumberFormatInfo_t3955 * L_29 = ___nfi;
		NullCheck(L_29);
		String_t* L_30 = NumberFormatInfo_get_NumberDecimalSeparator_m18755(L_29, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_30, /*hidden argument*/NULL);
		int32_t L_31 = V_3;
		NumberFormatter_AppendDigits_m21462(__this, 0, L_31, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		CharU5BU5D_t646* L_32 = (__this->____cbuf_23);
		int32_t L_33 = (__this->____ind_24);
		String_t* L_34 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_34 = String_CreateString_m11524(L_34, L_32, 0, L_33, /*hidden argument*/NULL);
		return L_34;
	}
}
// System.String System.NumberFormatter::FormatNumber(System.Int32,System.Globalization.NumberFormatInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_FormatNumber_m21446 (NumberFormatter_t4320 * __this, int32_t ___precision, NumberFormatInfo_t3955 * ___nfi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___precision;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = ___precision;
		G_B3_0 = L_1;
		goto IL_000d;
	}

IL_0007:
	{
		NumberFormatInfo_t3955 * L_2 = ___nfi;
		NullCheck(L_2);
		int32_t L_3 = NumberFormatInfo_get_NumberDecimalDigits_m18754(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		___precision = G_B3_0;
		int32_t L_4 = NumberFormatter_get_IntegerDigits_m21403(__this, /*hidden argument*/NULL);
		int32_t L_5 = ___precision;
		NumberFormatter_ResetCharBuf_m21396(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_4*(int32_t)3))+(int32_t)L_5)), /*hidden argument*/NULL);
		int32_t L_6 = ___precision;
		NumberFormatter_RoundDecimal_m21409(__this, L_6, /*hidden argument*/NULL);
		bool L_7 = (__this->____positive_12);
		if (L_7)
		{
			goto IL_007a;
		}
	}
	{
		NumberFormatInfo_t3955 * L_8 = ___nfi;
		NullCheck(L_8);
		int32_t L_9 = NumberFormatInfo_get_NumberNegativePattern_m18758(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if (L_10 == 0)
		{
			goto IL_004c;
		}
		if (L_10 == 1)
		{
			goto IL_0056;
		}
		if (L_10 == 2)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_007a;
	}

IL_004c:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)40), /*hidden argument*/NULL);
		goto IL_007a;
	}

IL_0056:
	{
		NumberFormatInfo_t3955 * L_11 = ___nfi;
		NullCheck(L_11);
		String_t* L_12 = NumberFormatInfo_get_NegativeSign_m18753(L_11, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_12, /*hidden argument*/NULL);
		goto IL_007a;
	}

IL_0064:
	{
		NumberFormatInfo_t3955 * L_13 = ___nfi;
		NullCheck(L_13);
		String_t* L_14 = NumberFormatInfo_get_NegativeSign_m18753(L_13, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_14, /*hidden argument*/NULL);
		NumberFormatter_Append_m21398(__this, ((int32_t)32), /*hidden argument*/NULL);
		goto IL_007a;
	}

IL_007a:
	{
		NumberFormatInfo_t3955 * L_15 = ___nfi;
		NullCheck(L_15);
		Int32U5BU5D_t119* L_16 = NumberFormatInfo_get_RawNumberGroupSizes_m18757(L_15, /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_17 = ___nfi;
		NullCheck(L_17);
		String_t* L_18 = NumberFormatInfo_get_NumberGroupSeparator_m18756(L_17, /*hidden argument*/NULL);
		NumberFormatter_AppendIntegerStringWithGroupSeparator_m21458(__this, L_16, L_18, /*hidden argument*/NULL);
		int32_t L_19 = ___precision;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		NumberFormatInfo_t3955 * L_20 = ___nfi;
		NullCheck(L_20);
		String_t* L_21 = NumberFormatInfo_get_NumberDecimalSeparator_m18755(L_20, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_21, /*hidden argument*/NULL);
		int32_t L_22 = ___precision;
		NumberFormatter_AppendDecimalString_m21457(__this, L_22, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		bool L_23 = (__this->____positive_12);
		if (L_23)
		{
			goto IL_00fc;
		}
	}
	{
		NumberFormatInfo_t3955 * L_24 = ___nfi;
		NullCheck(L_24);
		int32_t L_25 = NumberFormatInfo_get_NumberNegativePattern_m18758(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		int32_t L_26 = V_0;
		if (L_26 == 0)
		{
			goto IL_00ce;
		}
		if (L_26 == 1)
		{
			goto IL_00fc;
		}
		if (L_26 == 2)
		{
			goto IL_00fc;
		}
		if (L_26 == 3)
		{
			goto IL_00d8;
		}
		if (L_26 == 4)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00fc;
	}

IL_00ce:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)41), /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00d8:
	{
		NumberFormatInfo_t3955 * L_27 = ___nfi;
		NullCheck(L_27);
		String_t* L_28 = NumberFormatInfo_get_NegativeSign_m18753(L_27, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_28, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00e6:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)32), /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_29 = ___nfi;
		NullCheck(L_29);
		String_t* L_30 = NumberFormatInfo_get_NegativeSign_m18753(L_29, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_30, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00fc:
	{
		CharU5BU5D_t646* L_31 = (__this->____cbuf_23);
		int32_t L_32 = (__this->____ind_24);
		String_t* L_33 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_33 = String_CreateString_m11524(L_33, L_31, 0, L_32, /*hidden argument*/NULL);
		return L_33;
	}
}
// System.String System.NumberFormatter::FormatPercent(System.Int32,System.Globalization.NumberFormatInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_FormatPercent_m21447 (NumberFormatter_t4320 * __this, int32_t ___precision, NumberFormatInfo_t3955 * ___nfi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___precision;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = ___precision;
		G_B3_0 = L_1;
		goto IL_000d;
	}

IL_0007:
	{
		NumberFormatInfo_t3955 * L_2 = ___nfi;
		NullCheck(L_2);
		int32_t L_3 = NumberFormatInfo_get_PercentDecimalDigits_m18760(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		___precision = G_B3_0;
		NumberFormatter_Multiply10_m21464(__this, 2, /*hidden argument*/NULL);
		int32_t L_4 = ___precision;
		NumberFormatter_RoundDecimal_m21409(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = NumberFormatter_get_IntegerDigits_m21403(__this, /*hidden argument*/NULL);
		int32_t L_6 = ___precision;
		NumberFormatter_ResetCharBuf_m21396(__this, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)2))+(int32_t)L_6))+(int32_t)((int32_t)16))), /*hidden argument*/NULL);
		bool L_7 = (__this->____positive_12);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		NumberFormatInfo_t3955 * L_8 = ___nfi;
		NullCheck(L_8);
		int32_t L_9 = NumberFormatInfo_get_PercentPositivePattern_m18765(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0050;
		}
	}
	{
		NumberFormatInfo_t3955 * L_10 = ___nfi;
		NullCheck(L_10);
		String_t* L_11 = NumberFormatInfo_get_PercentSymbol_m18766(L_10, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_11, /*hidden argument*/NULL);
	}

IL_0050:
	{
		goto IL_00a3;
	}

IL_0052:
	{
		NumberFormatInfo_t3955 * L_12 = ___nfi;
		NullCheck(L_12);
		int32_t L_13 = NumberFormatInfo_get_PercentNegativePattern_m18764(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14 == 0)
		{
			goto IL_006d;
		}
		if (L_14 == 1)
		{
			goto IL_007b;
		}
		if (L_14 == 2)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00a3;
	}

IL_006d:
	{
		NumberFormatInfo_t3955 * L_15 = ___nfi;
		NullCheck(L_15);
		String_t* L_16 = NumberFormatInfo_get_NegativeSign_m18753(L_15, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_16, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_007b:
	{
		NumberFormatInfo_t3955 * L_17 = ___nfi;
		NullCheck(L_17);
		String_t* L_18 = NumberFormatInfo_get_NegativeSign_m18753(L_17, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_18, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_0089:
	{
		NumberFormatInfo_t3955 * L_19 = ___nfi;
		NullCheck(L_19);
		String_t* L_20 = NumberFormatInfo_get_NegativeSign_m18753(L_19, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_20, /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_21 = ___nfi;
		NullCheck(L_21);
		String_t* L_22 = NumberFormatInfo_get_PercentSymbol_m18766(L_21, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_22, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_00a3:
	{
		NumberFormatInfo_t3955 * L_23 = ___nfi;
		NullCheck(L_23);
		Int32U5BU5D_t119* L_24 = NumberFormatInfo_get_RawPercentGroupSizes_m18763(L_23, /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_25 = ___nfi;
		NullCheck(L_25);
		String_t* L_26 = NumberFormatInfo_get_PercentGroupSeparator_m18762(L_25, /*hidden argument*/NULL);
		NumberFormatter_AppendIntegerStringWithGroupSeparator_m21458(__this, L_24, L_26, /*hidden argument*/NULL);
		int32_t L_27 = ___precision;
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_00cc;
		}
	}
	{
		NumberFormatInfo_t3955 * L_28 = ___nfi;
		NullCheck(L_28);
		String_t* L_29 = NumberFormatInfo_get_PercentDecimalSeparator_m18761(L_28, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_29, /*hidden argument*/NULL);
		int32_t L_30 = ___precision;
		NumberFormatter_AppendDecimalString_m21457(__this, L_30, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		bool L_31 = (__this->____positive_12);
		if (!L_31)
		{
			goto IL_010a;
		}
	}
	{
		NumberFormatInfo_t3955 * L_32 = ___nfi;
		NullCheck(L_32);
		int32_t L_33 = NumberFormatInfo_get_PercentPositivePattern_m18765(L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		int32_t L_34 = V_0;
		if (!L_34)
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) == ((int32_t)1)))
		{
			goto IL_00fa;
		}
	}
	{
		goto IL_0108;
	}

IL_00e4:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)32), /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_36 = ___nfi;
		NullCheck(L_36);
		String_t* L_37 = NumberFormatInfo_get_PercentSymbol_m18766(L_36, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_37, /*hidden argument*/NULL);
		goto IL_0108;
	}

IL_00fa:
	{
		NumberFormatInfo_t3955 * L_38 = ___nfi;
		NullCheck(L_38);
		String_t* L_39 = NumberFormatInfo_get_PercentSymbol_m18766(L_38, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_39, /*hidden argument*/NULL);
		goto IL_0108;
	}

IL_0108:
	{
		goto IL_013e;
	}

IL_010a:
	{
		NumberFormatInfo_t3955 * L_40 = ___nfi;
		NullCheck(L_40);
		int32_t L_41 = NumberFormatInfo_get_PercentNegativePattern_m18764(L_40, /*hidden argument*/NULL);
		V_0 = L_41;
		int32_t L_42 = V_0;
		if (!L_42)
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_43 = V_0;
		if ((((int32_t)L_43) == ((int32_t)1)))
		{
			goto IL_0130;
		}
	}
	{
		goto IL_013e;
	}

IL_011a:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)32), /*hidden argument*/NULL);
		NumberFormatInfo_t3955 * L_44 = ___nfi;
		NullCheck(L_44);
		String_t* L_45 = NumberFormatInfo_get_PercentSymbol_m18766(L_44, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_45, /*hidden argument*/NULL);
		goto IL_013e;
	}

IL_0130:
	{
		NumberFormatInfo_t3955 * L_46 = ___nfi;
		NullCheck(L_46);
		String_t* L_47 = NumberFormatInfo_get_PercentSymbol_m18766(L_46, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_47, /*hidden argument*/NULL);
		goto IL_013e;
	}

IL_013e:
	{
		CharU5BU5D_t646* L_48 = (__this->____cbuf_23);
		int32_t L_49 = (__this->____ind_24);
		String_t* L_50 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_50 = String_CreateString_m11524(L_50, L_48, 0, L_49, /*hidden argument*/NULL);
		return L_50;
	}
}
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo)
extern "C" String_t* NumberFormatter_FormatExponential_m21448 (NumberFormatter_t4320 * __this, int32_t ___precision, NumberFormatInfo_t3955 * ___nfi, const MethodInfo* method)
{
	{
		int32_t L_0 = ___precision;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0009;
		}
	}
	{
		___precision = 6;
	}

IL_0009:
	{
		int32_t L_1 = ___precision;
		NumberFormatter_RoundPos_m21408(__this, ((int32_t)((int32_t)L_1+(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_2 = ___precision;
		NumberFormatInfo_t3955 * L_3 = ___nfi;
		String_t* L_4 = NumberFormatter_FormatExponential_m21449(__this, L_2, L_3, 3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_FormatExponential_m21449 (NumberFormatter_t4320 * __this, int32_t ___precision, NumberFormatInfo_t3955 * ___nfi, int32_t ___expDigits, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = (__this->____decPointPos_18);
		V_0 = L_0;
		int32_t L_1 = (__this->____digitsLen_16);
		V_1 = L_1;
		int32_t L_2 = V_0;
		V_2 = ((int32_t)((int32_t)L_2-(int32_t)1));
		int32_t L_3 = 1;
		V_3 = L_3;
		__this->____decPointPos_18 = L_3;
		int32_t L_4 = V_3;
		V_0 = L_4;
		int32_t L_5 = ___precision;
		NumberFormatter_ResetCharBuf_m21396(__this, ((int32_t)((int32_t)L_5+(int32_t)8)), /*hidden argument*/NULL);
		bool L_6 = (__this->____positive_12);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		NumberFormatInfo_t3955 * L_7 = ___nfi;
		NullCheck(L_7);
		String_t* L_8 = NumberFormatInfo_get_NegativeSign_m18753(L_7, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_8, /*hidden argument*/NULL);
	}

IL_003a:
	{
		int32_t L_9 = V_1;
		NumberFormatter_AppendOneDigit_m21460(__this, ((int32_t)((int32_t)L_9-(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_10 = ___precision;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		NumberFormatInfo_t3955 * L_11 = ___nfi;
		NullCheck(L_11);
		String_t* L_12 = NumberFormatInfo_get_NumberDecimalSeparator_m18755(L_11, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		int32_t L_14 = ___precision;
		int32_t L_15 = V_1;
		int32_t L_16 = (__this->____decPointPos_18);
		NumberFormatter_AppendDigits_m21462(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14))-(int32_t)1)), ((int32_t)((int32_t)L_15-(int32_t)L_16)), /*hidden argument*/NULL);
	}

IL_0066:
	{
		NumberFormatInfo_t3955 * L_17 = ___nfi;
		int32_t L_18 = V_2;
		int32_t L_19 = ___expDigits;
		NumberFormatter_AppendExponent_m21459(__this, L_17, L_18, L_19, /*hidden argument*/NULL);
		CharU5BU5D_t646* L_20 = (__this->____cbuf_23);
		int32_t L_21 = (__this->____ind_24);
		String_t* L_22 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_22 = String_CreateString_m11524(L_22, L_20, 0, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String System.NumberFormatter::FormatCustom(System.String,System.Globalization.NumberFormatInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t619_il2cpp_TypeInfo_var;
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" String_t* NumberFormatter_FormatCustom_m21450 (NumberFormatter_t4320 * __this, String_t* ___format, NumberFormatInfo_t3955 * ___nfi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StringBuilder_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	CustomInfo_t4319 * V_3 = {0};
	StringBuilder_t619 * V_4 = {0};
	StringBuilder_t619 * V_5 = {0};
	StringBuilder_t619 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	String_t* G_B4_0 = {0};
	StringBuilder_t619 * G_B8_0 = {0};
	StringBuilder_t619 * G_B21_0 = {0};
	StringBuilder_t619 * G_B20_0 = {0};
	int32_t G_B22_0 = 0;
	StringBuilder_t619 * G_B22_1 = {0};
	{
		bool L_0 = (__this->____positive_12);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		String_t* L_1 = ___format;
		bool L_2 = NumberFormatter_get_IsZero_m21406(__this, /*hidden argument*/NULL);
		CustomInfo_GetActiveSection_m21370(NULL /*static, unused*/, L_1, (&V_0), L_2, (&V_1), (&V_2), /*hidden argument*/NULL);
		int32_t L_3 = V_2;
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		bool L_4 = (__this->____positive_12);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B4_0 = L_5;
		goto IL_0035;
	}

IL_002f:
	{
		NumberFormatInfo_t3955 * L_6 = ___nfi;
		NullCheck(L_6);
		String_t* L_7 = NumberFormatInfo_get_NegativeSign_m18753(L_6, /*hidden argument*/NULL);
		G_B4_0 = L_7;
	}

IL_0035:
	{
		return G_B4_0;
	}

IL_0036:
	{
		bool L_8 = V_0;
		__this->____positive_12 = L_8;
		String_t* L_9 = ___format;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		NumberFormatInfo_t3955 * L_12 = ___nfi;
		CustomInfo_t4319 * L_13 = CustomInfo_Parse_m21371(NULL /*static, unused*/, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		CustomInfo_t4319 * L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15 = (L_14->___IntegerDigits_4);
		StringBuilder_t619 * L_16 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m6588(L_16, ((int32_t)((int32_t)L_15*(int32_t)2)), /*hidden argument*/NULL);
		V_4 = L_16;
		CustomInfo_t4319 * L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18 = (L_17->___DecimalDigits_1);
		StringBuilder_t619 * L_19 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m6588(L_19, ((int32_t)((int32_t)L_18*(int32_t)2)), /*hidden argument*/NULL);
		V_5 = L_19;
		CustomInfo_t4319 * L_20 = V_3;
		NullCheck(L_20);
		bool L_21 = (L_20->___UseExponent_7);
		if (!L_21)
		{
			goto IL_007c;
		}
	}
	{
		CustomInfo_t4319 * L_22 = V_3;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___ExponentDigits_8);
		StringBuilder_t619 * L_24 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m6588(L_24, ((int32_t)((int32_t)L_23*(int32_t)2)), /*hidden argument*/NULL);
		G_B8_0 = L_24;
		goto IL_007d;
	}

IL_007c:
	{
		G_B8_0 = ((StringBuilder_t619 *)(NULL));
	}

IL_007d:
	{
		V_6 = G_B8_0;
		V_7 = 0;
		CustomInfo_t4319 * L_25 = V_3;
		NullCheck(L_25);
		int32_t L_26 = (L_25->___Percents_12);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_0099;
		}
	}
	{
		CustomInfo_t4319 * L_27 = V_3;
		NullCheck(L_27);
		int32_t L_28 = (L_27->___Percents_12);
		NumberFormatter_Multiply10_m21464(__this, ((int32_t)((int32_t)2*(int32_t)L_28)), /*hidden argument*/NULL);
	}

IL_0099:
	{
		CustomInfo_t4319 * L_29 = V_3;
		NullCheck(L_29);
		int32_t L_30 = (L_29->___Permilles_13);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_00b0;
		}
	}
	{
		CustomInfo_t4319 * L_31 = V_3;
		NullCheck(L_31);
		int32_t L_32 = (L_31->___Permilles_13);
		NumberFormatter_Multiply10_m21464(__this, ((int32_t)((int32_t)3*(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00b0:
	{
		CustomInfo_t4319 * L_33 = V_3;
		NullCheck(L_33);
		int32_t L_34 = (L_33->___DividePlaces_11);
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		CustomInfo_t4319 * L_35 = V_3;
		NullCheck(L_35);
		int32_t L_36 = (L_35->___DividePlaces_11);
		NumberFormatter_Divide10_m21465(__this, L_36, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		V_8 = 1;
		CustomInfo_t4319 * L_37 = V_3;
		NullCheck(L_37);
		bool L_38 = (L_37->___UseExponent_7);
		if (!L_38)
		{
			goto IL_013a;
		}
	}
	{
		CustomInfo_t4319 * L_39 = V_3;
		NullCheck(L_39);
		int32_t L_40 = (L_39->___DecimalDigits_1);
		if ((((int32_t)L_40) > ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		CustomInfo_t4319 * L_41 = V_3;
		NullCheck(L_41);
		int32_t L_42 = (L_41->___IntegerDigits_4);
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_013a;
		}
	}

IL_00e2:
	{
		bool L_43 = NumberFormatter_get_IsZero_m21406(__this, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_011b;
		}
	}
	{
		CustomInfo_t4319 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = (L_44->___DecimalDigits_1);
		CustomInfo_t4319 * L_46 = V_3;
		NullCheck(L_46);
		int32_t L_47 = (L_46->___IntegerDigits_4);
		NumberFormatter_RoundPos_m21408(__this, ((int32_t)((int32_t)L_45+(int32_t)L_47)), /*hidden argument*/NULL);
		int32_t L_48 = V_7;
		int32_t L_49 = (__this->____decPointPos_18);
		CustomInfo_t4319 * L_50 = V_3;
		NullCheck(L_50);
		int32_t L_51 = (L_50->___IntegerDigits_4);
		V_7 = ((int32_t)((int32_t)L_48-(int32_t)((int32_t)((int32_t)L_49-(int32_t)L_51))));
		CustomInfo_t4319 * L_52 = V_3;
		NullCheck(L_52);
		int32_t L_53 = (L_52->___IntegerDigits_4);
		__this->____decPointPos_18 = L_53;
	}

IL_011b:
	{
		int32_t L_54 = V_7;
		V_8 = ((((int32_t)((((int32_t)L_54) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		StringBuilder_t619 * L_55 = V_6;
		int32_t L_56 = V_7;
		G_B20_0 = L_55;
		if ((((int32_t)L_56) >= ((int32_t)0)))
		{
			G_B21_0 = L_55;
			goto IL_0131;
		}
	}
	{
		int32_t L_57 = V_7;
		G_B22_0 = ((-L_57));
		G_B22_1 = G_B20_0;
		goto IL_0133;
	}

IL_0131:
	{
		int32_t L_58 = V_7;
		G_B22_0 = L_58;
		G_B22_1 = G_B21_0;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_AppendNonNegativeNumber_m21453(NULL /*static, unused*/, G_B22_1, G_B22_0, /*hidden argument*/NULL);
		goto IL_0147;
	}

IL_013a:
	{
		CustomInfo_t4319 * L_59 = V_3;
		NullCheck(L_59);
		int32_t L_60 = (L_59->___DecimalDigits_1);
		NumberFormatter_RoundDecimal_m21409(__this, L_60, /*hidden argument*/NULL);
	}

IL_0147:
	{
		CustomInfo_t4319 * L_61 = V_3;
		NullCheck(L_61);
		int32_t L_62 = (L_61->___IntegerDigits_4);
		if (L_62)
		{
			goto IL_0157;
		}
	}
	{
		bool L_63 = NumberFormatter_get_IsZeroInteger_m21407(__this, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_0165;
		}
	}

IL_0157:
	{
		int32_t L_64 = NumberFormatter_get_IntegerDigits_m21403(__this, /*hidden argument*/NULL);
		StringBuilder_t619 * L_65 = V_4;
		NumberFormatter_AppendIntegerString_m21454(__this, L_64, L_65, /*hidden argument*/NULL);
	}

IL_0165:
	{
		int32_t L_66 = NumberFormatter_get_DecimalDigits_m21404(__this, /*hidden argument*/NULL);
		StringBuilder_t619 * L_67 = V_5;
		NumberFormatter_AppendDecimalString_m21456(__this, L_66, L_67, /*hidden argument*/NULL);
		CustomInfo_t4319 * L_68 = V_3;
		NullCheck(L_68);
		bool L_69 = (L_68->___UseExponent_7);
		if (!L_69)
		{
			goto IL_0217;
		}
	}
	{
		CustomInfo_t4319 * L_70 = V_3;
		NullCheck(L_70);
		int32_t L_71 = (L_70->___DecimalDigits_1);
		if ((((int32_t)L_71) > ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		CustomInfo_t4319 * L_72 = V_3;
		NullCheck(L_72);
		int32_t L_73 = (L_72->___IntegerDigits_4);
		if ((((int32_t)L_73) > ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		__this->____positive_12 = 1;
	}

IL_0197:
	{
		StringBuilder_t619 * L_74 = V_4;
		NullCheck(L_74);
		int32_t L_75 = StringBuilder_get_Length_m6646(L_74, /*hidden argument*/NULL);
		CustomInfo_t4319 * L_76 = V_3;
		NullCheck(L_76);
		int32_t L_77 = (L_76->___IntegerDigits_4);
		if ((((int32_t)L_75) >= ((int32_t)L_77)))
		{
			goto IL_01c2;
		}
	}
	{
		StringBuilder_t619 * L_78 = V_4;
		CustomInfo_t4319 * L_79 = V_3;
		NullCheck(L_79);
		int32_t L_80 = (L_79->___IntegerDigits_4);
		StringBuilder_t619 * L_81 = V_4;
		NullCheck(L_81);
		int32_t L_82 = StringBuilder_get_Length_m6646(L_81, /*hidden argument*/NULL);
		NullCheck(L_78);
		StringBuilder_Insert_m20614(L_78, 0, (String_t*) &_stringLiteral1001, ((int32_t)((int32_t)L_80-(int32_t)L_82)), /*hidden argument*/NULL);
	}

IL_01c2:
	{
		goto IL_01cf;
	}

IL_01c4:
	{
		StringBuilder_t619 * L_83 = V_6;
		NullCheck(L_83);
		StringBuilder_Insert_m20613(L_83, 0, ((int32_t)48), /*hidden argument*/NULL);
	}

IL_01cf:
	{
		StringBuilder_t619 * L_84 = V_6;
		NullCheck(L_84);
		int32_t L_85 = StringBuilder_get_Length_m6646(L_84, /*hidden argument*/NULL);
		CustomInfo_t4319 * L_86 = V_3;
		NullCheck(L_86);
		int32_t L_87 = (L_86->___ExponentDigits_8);
		CustomInfo_t4319 * L_88 = V_3;
		NullCheck(L_88);
		int32_t L_89 = (L_88->___ExponentTailSharpDigits_9);
		if ((((int32_t)L_85) < ((int32_t)((int32_t)((int32_t)L_87-(int32_t)L_89)))))
		{
			goto IL_01c4;
		}
	}
	{
		bool L_90 = V_8;
		if (!L_90)
		{
			goto IL_0202;
		}
	}
	{
		CustomInfo_t4319 * L_91 = V_3;
		NullCheck(L_91);
		bool L_92 = (L_91->___ExponentNegativeSignOnly_10);
		if (L_92)
		{
			goto IL_0202;
		}
	}
	{
		StringBuilder_t619 * L_93 = V_6;
		NumberFormatInfo_t3955 * L_94 = ___nfi;
		NullCheck(L_94);
		String_t* L_95 = NumberFormatInfo_get_PositiveSign_m18769(L_94, /*hidden argument*/NULL);
		NullCheck(L_93);
		StringBuilder_Insert_m20612(L_93, 0, L_95, /*hidden argument*/NULL);
		goto IL_0215;
	}

IL_0202:
	{
		bool L_96 = V_8;
		if (L_96)
		{
			goto IL_0215;
		}
	}
	{
		StringBuilder_t619 * L_97 = V_6;
		NumberFormatInfo_t3955 * L_98 = ___nfi;
		NullCheck(L_98);
		String_t* L_99 = NumberFormatInfo_get_NegativeSign_m18753(L_98, /*hidden argument*/NULL);
		NullCheck(L_97);
		StringBuilder_Insert_m20612(L_97, 0, L_99, /*hidden argument*/NULL);
	}

IL_0215:
	{
		goto IL_0277;
	}

IL_0217:
	{
		StringBuilder_t619 * L_100 = V_4;
		NullCheck(L_100);
		int32_t L_101 = StringBuilder_get_Length_m6646(L_100, /*hidden argument*/NULL);
		CustomInfo_t4319 * L_102 = V_3;
		NullCheck(L_102);
		int32_t L_103 = (L_102->___IntegerDigits_4);
		CustomInfo_t4319 * L_104 = V_3;
		NullCheck(L_104);
		int32_t L_105 = (L_104->___IntegerHeadSharpDigits_5);
		if ((((int32_t)L_101) >= ((int32_t)((int32_t)((int32_t)L_103-(int32_t)L_105)))))
		{
			goto IL_0250;
		}
	}
	{
		StringBuilder_t619 * L_106 = V_4;
		CustomInfo_t4319 * L_107 = V_3;
		NullCheck(L_107);
		int32_t L_108 = (L_107->___IntegerDigits_4);
		CustomInfo_t4319 * L_109 = V_3;
		NullCheck(L_109);
		int32_t L_110 = (L_109->___IntegerHeadSharpDigits_5);
		StringBuilder_t619 * L_111 = V_4;
		NullCheck(L_111);
		int32_t L_112 = StringBuilder_get_Length_m6646(L_111, /*hidden argument*/NULL);
		NullCheck(L_106);
		StringBuilder_Insert_m20614(L_106, 0, (String_t*) &_stringLiteral1001, ((int32_t)((int32_t)((int32_t)((int32_t)L_108-(int32_t)L_110))-(int32_t)L_112)), /*hidden argument*/NULL);
	}

IL_0250:
	{
		CustomInfo_t4319 * L_113 = V_3;
		NullCheck(L_113);
		int32_t L_114 = (L_113->___IntegerDigits_4);
		CustomInfo_t4319 * L_115 = V_3;
		NullCheck(L_115);
		int32_t L_116 = (L_115->___IntegerHeadSharpDigits_5);
		if ((!(((uint32_t)L_114) == ((uint32_t)L_116))))
		{
			goto IL_0277;
		}
	}
	{
		StringBuilder_t619 * L_117 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		bool L_118 = NumberFormatter_IsZeroOnly_m21452(NULL /*static, unused*/, L_117, /*hidden argument*/NULL);
		if (!L_118)
		{
			goto IL_0277;
		}
	}
	{
		StringBuilder_t619 * L_119 = V_4;
		StringBuilder_t619 * L_120 = V_4;
		NullCheck(L_120);
		int32_t L_121 = StringBuilder_get_Length_m6646(L_120, /*hidden argument*/NULL);
		NullCheck(L_119);
		StringBuilder_Remove_m7358(L_119, 0, L_121, /*hidden argument*/NULL);
	}

IL_0277:
	{
		StringBuilder_t619 * L_122 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		NumberFormatter_ZeroTrimEnd_m21451(NULL /*static, unused*/, L_122, 1, /*hidden argument*/NULL);
		goto IL_028b;
	}

IL_0281:
	{
		StringBuilder_t619 * L_123 = V_5;
		NullCheck(L_123);
		StringBuilder_Append_m5401(L_123, ((int32_t)48), /*hidden argument*/NULL);
	}

IL_028b:
	{
		StringBuilder_t619 * L_124 = V_5;
		NullCheck(L_124);
		int32_t L_125 = StringBuilder_get_Length_m6646(L_124, /*hidden argument*/NULL);
		CustomInfo_t4319 * L_126 = V_3;
		NullCheck(L_126);
		int32_t L_127 = (L_126->___DecimalDigits_1);
		CustomInfo_t4319 * L_128 = V_3;
		NullCheck(L_128);
		int32_t L_129 = (L_128->___DecimalTailSharpDigits_3);
		if ((((int32_t)L_125) < ((int32_t)((int32_t)((int32_t)L_127-(int32_t)L_129)))))
		{
			goto IL_0281;
		}
	}
	{
		StringBuilder_t619 * L_130 = V_5;
		NullCheck(L_130);
		int32_t L_131 = StringBuilder_get_Length_m6646(L_130, /*hidden argument*/NULL);
		CustomInfo_t4319 * L_132 = V_3;
		NullCheck(L_132);
		int32_t L_133 = (L_132->___DecimalDigits_1);
		if ((((int32_t)L_131) <= ((int32_t)L_133)))
		{
			goto IL_02cc;
		}
	}
	{
		StringBuilder_t619 * L_134 = V_5;
		CustomInfo_t4319 * L_135 = V_3;
		NullCheck(L_135);
		int32_t L_136 = (L_135->___DecimalDigits_1);
		StringBuilder_t619 * L_137 = V_5;
		NullCheck(L_137);
		int32_t L_138 = StringBuilder_get_Length_m6646(L_137, /*hidden argument*/NULL);
		CustomInfo_t4319 * L_139 = V_3;
		NullCheck(L_139);
		int32_t L_140 = (L_139->___DecimalDigits_1);
		NullCheck(L_134);
		StringBuilder_Remove_m7358(L_134, L_136, ((int32_t)((int32_t)L_138-(int32_t)L_140)), /*hidden argument*/NULL);
	}

IL_02cc:
	{
		CustomInfo_t4319 * L_141 = V_3;
		String_t* L_142 = ___format;
		int32_t L_143 = V_1;
		int32_t L_144 = V_2;
		NumberFormatInfo_t3955 * L_145 = ___nfi;
		bool L_146 = (__this->____positive_12);
		StringBuilder_t619 * L_147 = V_4;
		StringBuilder_t619 * L_148 = V_5;
		StringBuilder_t619 * L_149 = V_6;
		NullCheck(L_141);
		String_t* L_150 = CustomInfo_Format_m21372(L_141, L_142, L_143, L_144, L_145, L_146, L_147, L_148, L_149, /*hidden argument*/NULL);
		return L_150;
	}
}
// System.Void System.NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
extern "C" void NumberFormatter_ZeroTrimEnd_m21451 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___sb, bool ___canEmpty, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B7_0 = 0;
	{
		V_0 = 0;
		StringBuilder_t619 * L_0 = ___sb;
		NullCheck(L_0);
		int32_t L_1 = StringBuilder_get_Length_m6646(L_0, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_1-(int32_t)1));
		goto IL_0022;
	}

IL_000d:
	{
		StringBuilder_t619 * L_2 = ___sb;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		uint16_t L_4 = StringBuilder_get_Chars_m11585(L_2, L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)48))))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0034;
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6-(int32_t)1));
	}

IL_0022:
	{
		bool L_7 = ___canEmpty;
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_8 = V_1;
		G_B7_0 = ((((int32_t)((((int32_t)L_8) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0032;
	}

IL_002e:
	{
		int32_t L_9 = V_1;
		G_B7_0 = ((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		if (G_B7_0)
		{
			goto IL_000d;
		}
	}

IL_0034:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		StringBuilder_t619 * L_11 = ___sb;
		StringBuilder_t619 * L_12 = ___sb;
		NullCheck(L_12);
		int32_t L_13 = StringBuilder_get_Length_m6646(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		int32_t L_15 = V_0;
		NullCheck(L_11);
		StringBuilder_Remove_m7358(L_11, ((int32_t)((int32_t)L_13-(int32_t)L_14)), L_15, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Boolean System.NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
extern TypeInfo* Char_t684_il2cpp_TypeInfo_var;
extern "C" bool NumberFormatter_IsZeroOnly_m21452 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___sb, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_0004:
	{
		StringBuilder_t619 * L_0 = ___sb;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		uint16_t L_2 = StringBuilder_get_Chars_m11585(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t684_il2cpp_TypeInfo_var);
		bool L_3 = Char_IsDigit_m16806(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t619 * L_4 = ___sb;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint16_t L_6 = StringBuilder_get_Chars_m11585(L_4, L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)48))))
		{
			goto IL_001f;
		}
	}
	{
		return 0;
	}

IL_001f:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_8 = V_0;
		StringBuilder_t619 * L_9 = ___sb;
		NullCheck(L_9);
		int32_t L_10 = StringBuilder_get_Length_m6646(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
// System.Void System.NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter_AppendNonNegativeNumber_m21453 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___sb, int32_t ___v, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___v;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		ArgumentException_t1126 * L_1 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11580(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000a:
	{
		int32_t L_2 = ___v;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t L_3 = NumberFormatter_ScaleOrder_m21385(NULL /*static, unused*/, (((int64_t)L_2)), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_3-(int32_t)1));
	}

IL_0014:
	{
		int32_t L_4 = ___v;
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int64_t L_6 = NumberFormatter_GetTenPowerOf_m21376(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_4/(int32_t)(((int32_t)L_6))));
		StringBuilder_t619 * L_7 = ___sb;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		StringBuilder_Append_m5401(L_7, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)L_8)))), /*hidden argument*/NULL);
		int32_t L_9 = ___v;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)((int32_t)L_11-(int32_t)1));
		int64_t L_12 = NumberFormatter_GetTenPowerOf_m21376(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		___v = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)((int32_t)(((int32_t)L_12))*(int32_t)L_13))));
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendIntegerString_m21454 (NumberFormatter_t4320 * __this, int32_t ___minLength, StringBuilder_t619 * ___sb, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____decPointPos_18);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		StringBuilder_t619 * L_1 = ___sb;
		int32_t L_2 = ___minLength;
		NullCheck(L_1);
		StringBuilder_Append_m20610(L_1, ((int32_t)48), L_2, /*hidden argument*/NULL);
		return;
	}

IL_0014:
	{
		int32_t L_3 = (__this->____decPointPos_18);
		int32_t L_4 = ___minLength;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}
	{
		StringBuilder_t619 * L_5 = ___sb;
		int32_t L_6 = ___minLength;
		int32_t L_7 = (__this->____decPointPos_18);
		NullCheck(L_5);
		StringBuilder_Append_m20610(L_5, ((int32_t)48), ((int32_t)((int32_t)L_6-(int32_t)L_7)), /*hidden argument*/NULL);
	}

IL_002e:
	{
		int32_t L_8 = (__this->____digitsLen_16);
		int32_t L_9 = (__this->____decPointPos_18);
		int32_t L_10 = (__this->____digitsLen_16);
		StringBuilder_t619 * L_11 = ___sb;
		NumberFormatter_AppendDigits_m21463(__this, ((int32_t)((int32_t)L_8-(int32_t)L_9)), L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32)
extern "C" void NumberFormatter_AppendIntegerString_m21455 (NumberFormatter_t4320 * __this, int32_t ___minLength, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____decPointPos_18);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___minLength;
		NumberFormatter_Append_m21399(__this, ((int32_t)48), L_1, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		int32_t L_2 = (__this->____decPointPos_18);
		int32_t L_3 = ___minLength;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = ___minLength;
		int32_t L_5 = (__this->____decPointPos_18);
		NumberFormatter_Append_m21399(__this, ((int32_t)48), ((int32_t)((int32_t)L_4-(int32_t)L_5)), /*hidden argument*/NULL);
	}

IL_002c:
	{
		int32_t L_6 = (__this->____digitsLen_16);
		int32_t L_7 = (__this->____decPointPos_18);
		int32_t L_8 = (__this->____digitsLen_16);
		NumberFormatter_AppendDigits_m21462(__this, ((int32_t)((int32_t)L_6-(int32_t)L_7)), L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendDecimalString_m21456 (NumberFormatter_t4320 * __this, int32_t ___precision, StringBuilder_t619 * ___sb, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____digitsLen_16);
		int32_t L_1 = ___precision;
		int32_t L_2 = (__this->____decPointPos_18);
		int32_t L_3 = (__this->____digitsLen_16);
		int32_t L_4 = (__this->____decPointPos_18);
		StringBuilder_t619 * L_5 = ___sb;
		NumberFormatter_AppendDigits_m21463(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), ((int32_t)((int32_t)L_3-(int32_t)L_4)), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32)
extern "C" void NumberFormatter_AppendDecimalString_m21457 (NumberFormatter_t4320 * __this, int32_t ___precision, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____digitsLen_16);
		int32_t L_1 = ___precision;
		int32_t L_2 = (__this->____decPointPos_18);
		int32_t L_3 = (__this->____digitsLen_16);
		int32_t L_4 = (__this->____decPointPos_18);
		NumberFormatter_AppendDigits_m21462(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), ((int32_t)((int32_t)L_3-(int32_t)L_4)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Int32[],System.String)
extern "C" void NumberFormatter_AppendIntegerStringWithGroupSeparator_m21458 (NumberFormatter_t4320 * __this, Int32U5BU5D_t119* ___groups, String_t* ___groupSeparator, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
	{
		bool L_0 = NumberFormatter_get_IsZeroInteger_m21407(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)48), /*hidden argument*/NULL);
		return;
	}

IL_0011:
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		goto IL_0032;
	}

IL_0019:
	{
		int32_t L_1 = V_0;
		Int32U5BU5D_t119* L_2 = ___groups;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4))));
		int32_t L_5 = V_0;
		int32_t L_6 = (__this->____decPointPos_18);
		if ((((int32_t)L_5) > ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_2;
		V_1 = L_7;
		goto IL_002e;
	}

IL_002c:
	{
		goto IL_0038;
	}

IL_002e:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_9 = V_2;
		Int32U5BU5D_t119* L_10 = ___groups;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0019;
		}
	}

IL_0038:
	{
		Int32U5BU5D_t119* L_11 = ___groups;
		NullCheck(L_11);
		if ((((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_011a;
		}
	}
	{
		Int32U5BU5D_t119* L_13 = ___groups;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_4 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15));
		int32_t L_16 = (__this->____decPointPos_18);
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_18 = (__this->____decPointPos_18);
		int32_t L_19 = V_0;
		G_B13_0 = ((int32_t)((int32_t)L_18-(int32_t)L_19));
		goto IL_0061;
	}

IL_0060:
	{
		G_B13_0 = 0;
	}

IL_0061:
	{
		V_5 = G_B13_0;
		int32_t L_20 = V_4;
		if (L_20)
		{
			goto IL_0084;
		}
	}
	{
		goto IL_006d;
	}

IL_0069:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)((int32_t)L_21-(int32_t)1));
	}

IL_006d:
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		Int32U5BU5D_t119* L_23 = ___groups;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		if (!(*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25)))
		{
			goto IL_0069;
		}
	}

IL_0076:
	{
		int32_t L_26 = V_5;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_5;
		G_B21_0 = L_27;
		goto IL_0082;
	}

IL_007f:
	{
		Int32U5BU5D_t119* L_28 = ___groups;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		int32_t L_30 = L_29;
		G_B21_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_28, L_30));
	}

IL_0082:
	{
		V_4 = G_B21_0;
	}

IL_0084:
	{
		int32_t L_31 = V_5;
		if (L_31)
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_32 = V_4;
		V_3 = L_32;
		goto IL_00a7;
	}

IL_008d:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = V_5;
		int32_t L_35 = V_4;
		V_1 = ((int32_t)((int32_t)L_33+(int32_t)((int32_t)((int32_t)L_34/(int32_t)L_35))));
		int32_t L_36 = V_5;
		int32_t L_37 = V_4;
		V_3 = ((int32_t)((int32_t)L_36%(int32_t)L_37));
		int32_t L_38 = V_3;
		if (L_38)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_39 = V_4;
		V_3 = L_39;
		goto IL_00a7;
	}

IL_00a3:
	{
		int32_t L_40 = V_1;
		V_1 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00a7:
	{
		V_6 = 0;
		goto IL_0116;
	}

IL_00ac:
	{
		int32_t L_41 = (__this->____decPointPos_18);
		int32_t L_42 = V_6;
		int32_t L_43 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_41-(int32_t)L_42))) <= ((int32_t)L_43)))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_44 = V_3;
		if (L_44)
		{
			goto IL_00d9;
		}
	}

IL_00bb:
	{
		int32_t L_45 = (__this->____digitsLen_16);
		int32_t L_46 = (__this->____decPointPos_18);
		int32_t L_47 = (__this->____digitsLen_16);
		int32_t L_48 = V_6;
		NumberFormatter_AppendDigits_m21462(__this, ((int32_t)((int32_t)L_45-(int32_t)L_46)), ((int32_t)((int32_t)L_47-(int32_t)L_48)), /*hidden argument*/NULL);
		goto IL_0118;
	}

IL_00d9:
	{
		int32_t L_49 = (__this->____digitsLen_16);
		int32_t L_50 = V_6;
		int32_t L_51 = V_3;
		int32_t L_52 = (__this->____digitsLen_16);
		int32_t L_53 = V_6;
		NumberFormatter_AppendDigits_m21462(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_49-(int32_t)L_50))-(int32_t)L_51)), ((int32_t)((int32_t)L_52-(int32_t)L_53)), /*hidden argument*/NULL);
		int32_t L_54 = V_6;
		int32_t L_55 = V_3;
		V_6 = ((int32_t)((int32_t)L_54+(int32_t)L_55));
		String_t* L_56 = ___groupSeparator;
		NumberFormatter_Append_m21400(__this, L_56, /*hidden argument*/NULL);
		int32_t L_57 = V_1;
		int32_t L_58 = ((int32_t)((int32_t)L_57-(int32_t)1));
		V_1 = L_58;
		Int32U5BU5D_t119* L_59 = ___groups;
		NullCheck(L_59);
		if ((((int32_t)L_58) >= ((int32_t)(((int32_t)(((Array_t *)L_59)->max_length))))))
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_60 = V_1;
		if ((((int32_t)L_60) < ((int32_t)0)))
		{
			goto IL_0113;
		}
	}
	{
		Int32U5BU5D_t119* L_61 = ___groups;
		int32_t L_62 = V_1;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		int32_t L_63 = L_62;
		V_4 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_61, L_63));
	}

IL_0113:
	{
		int32_t L_64 = V_4;
		V_3 = L_64;
	}

IL_0116:
	{
		goto IL_00ac;
	}

IL_0118:
	{
		goto IL_0133;
	}

IL_011a:
	{
		int32_t L_65 = (__this->____digitsLen_16);
		int32_t L_66 = (__this->____decPointPos_18);
		int32_t L_67 = (__this->____digitsLen_16);
		NumberFormatter_AppendDigits_m21462(__this, ((int32_t)((int32_t)L_65-(int32_t)L_66)), L_67, /*hidden argument*/NULL);
	}

IL_0133:
	{
		return;
	}
}
// System.Void System.NumberFormatter::AppendExponent(System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter_AppendExponent_m21459 (NumberFormatter_t4320 * __this, NumberFormatInfo_t3955 * ___nfi, int32_t ___exponent, int32_t ___minDigits, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		bool L_0 = (__this->____specifierIsUpper_11);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		uint16_t L_1 = (__this->____specifier_13);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)69), /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_001c:
	{
		NumberFormatter_Append_m21398(__this, ((int32_t)101), /*hidden argument*/NULL);
	}

IL_0024:
	{
		int32_t L_2 = ___exponent;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		NumberFormatInfo_t3955 * L_3 = ___nfi;
		NullCheck(L_3);
		String_t* L_4 = NumberFormatInfo_get_PositiveSign_m18769(L_3, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_4, /*hidden argument*/NULL);
		goto IL_0048;
	}

IL_0036:
	{
		NumberFormatInfo_t3955 * L_5 = ___nfi;
		NullCheck(L_5);
		String_t* L_6 = NumberFormatInfo_get_NegativeSign_m18753(L_5, /*hidden argument*/NULL);
		NumberFormatter_Append_m21400(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___exponent;
		___exponent = ((-L_7));
	}

IL_0048:
	{
		int32_t L_8 = ___exponent;
		if (L_8)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_9 = ___minDigits;
		NumberFormatter_Append_m21399(__this, ((int32_t)48), L_9, /*hidden argument*/NULL);
		goto IL_00ae;
	}

IL_0056:
	{
		int32_t L_10 = ___exponent;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_11 = ___minDigits;
		NumberFormatter_Append_m21399(__this, ((int32_t)48), ((int32_t)((int32_t)L_11-(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_12 = ___exponent;
		NumberFormatter_Append_m21398(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)L_12)))), /*hidden argument*/NULL);
		goto IL_00ae;
	}

IL_0073:
	{
		int32_t L_13 = ___exponent;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		uint32_t L_14 = NumberFormatter_FastToDecHex_m21380(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		int32_t L_15 = ___exponent;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)100))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_16 = ___minDigits;
		if ((!(((uint32_t)L_16) == ((uint32_t)3))))
		{
			goto IL_0090;
		}
	}

IL_0083:
	{
		uint32_t L_17 = V_0;
		NumberFormatter_Append_m21398(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((uint32_t)L_17>>8)))))), /*hidden argument*/NULL);
	}

IL_0090:
	{
		uint32_t L_18 = V_0;
		NumberFormatter_Append_m21398(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_18>>4))&(int32_t)((int32_t)15))))))), /*hidden argument*/NULL);
		uint32_t L_19 = V_0;
		NumberFormatter_Append_m21398(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)15))))))), /*hidden argument*/NULL);
	}

IL_00ae:
	{
		return;
	}
}
// System.Void System.NumberFormatter::AppendOneDigit(System.Int32)
extern "C" void NumberFormatter_AppendOneDigit_m21460 (NumberFormatter_t4320 * __this, int32_t ___start, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->____ind_24);
		CharU5BU5D_t646* L_1 = (__this->____cbuf_23);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (__this->____ind_24);
		NumberFormatter_Resize_m21397(__this, ((int32_t)((int32_t)L_2+(int32_t)((int32_t)10))), /*hidden argument*/NULL);
	}

IL_001f:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (__this->____offset_17);
		___start = ((int32_t)((int32_t)L_3+(int32_t)L_4));
		int32_t L_5 = ___start;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		V_0 = 0;
		goto IL_006c;
	}

IL_0033:
	{
		int32_t L_6 = ___start;
		if ((((int32_t)L_6) >= ((int32_t)8)))
		{
			goto IL_0040;
		}
	}
	{
		uint32_t L_7 = (__this->____val1_19);
		V_0 = L_7;
		goto IL_006c;
	}

IL_0040:
	{
		int32_t L_8 = ___start;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)16))))
		{
			goto IL_004e;
		}
	}
	{
		uint32_t L_9 = (__this->____val2_20);
		V_0 = L_9;
		goto IL_006c;
	}

IL_004e:
	{
		int32_t L_10 = ___start;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)24))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_11 = (__this->____val3_21);
		V_0 = L_11;
		goto IL_006c;
	}

IL_005c:
	{
		int32_t L_12 = ___start;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)32))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_13 = (__this->____val4_22);
		V_0 = L_13;
		goto IL_006c;
	}

IL_006a:
	{
		V_0 = 0;
	}

IL_006c:
	{
		uint32_t L_14 = V_0;
		int32_t L_15 = ___start;
		V_0 = ((int32_t)((uint32_t)L_14>>((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15&(int32_t)7))<<(int32_t)2))&(int32_t)((int32_t)31)))));
		CharU5BU5D_t646* L_16 = (__this->____cbuf_23);
		int32_t L_17 = (__this->____ind_24);
		int32_t L_18 = L_17;
		V_1 = L_18;
		__this->____ind_24 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_1;
		uint32_t L_20 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_19);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_16, L_19)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)15)))))));
		return;
	}
}
// System.Void System.NumberFormatter::FastAppendDigits(System.Int32,System.Boolean)
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" void NumberFormatter_FastAppendDigits_m21461 (NumberFormatter_t4320 * __this, int32_t ___val, bool ___force, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->____ind_24);
		V_0 = L_0;
		bool L_1 = ___force;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ___val;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)100))))
		{
			goto IL_0069;
		}
	}

IL_000f:
	{
		int32_t L_3 = ___val;
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)5243)))>>(int32_t)((int32_t)19)));
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t* L_4 = ((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___DecHexDigits_5;
		int32_t L_5 = V_2;
		V_1 = (*((int32_t*)((intptr_t)((intptr_t)L_4+(int32_t)((int32_t)((int32_t)L_5*(int32_t)4))))));
		bool L_6 = ___force;
		if (L_6)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_7 = ___val;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)1000))))
		{
			goto IL_0043;
		}
	}

IL_0030:
	{
		CharU5BU5D_t646* L_8 = (__this->____cbuf_23);
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_10);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, L_10)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_11>>(int32_t)4))))));
	}

IL_0043:
	{
		CharU5BU5D_t646* L_12 = (__this->____cbuf_23);
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_14);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, L_14)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)15)))))));
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t* L_16 = ((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___DecHexDigits_5;
		int32_t L_17 = ___val;
		int32_t L_18 = V_2;
		V_1 = (*((int32_t*)((intptr_t)((intptr_t)L_16+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17-(int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)100)))))*(int32_t)4))))));
		goto IL_0074;
	}

IL_0069:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4320_il2cpp_TypeInfo_var);
		int32_t* L_19 = ((NumberFormatter_t4320_StaticFields*)NumberFormatter_t4320_il2cpp_TypeInfo_var->static_fields)->___DecHexDigits_5;
		int32_t L_20 = ___val;
		V_1 = (*((int32_t*)((intptr_t)((intptr_t)L_19+(int32_t)((int32_t)((int32_t)L_20*(int32_t)4))))));
	}

IL_0074:
	{
		bool L_21 = ___force;
		if (L_21)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_22 = ___val;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)10))))
		{
			goto IL_008f;
		}
	}

IL_007c:
	{
		CharU5BU5D_t646* L_23 = (__this->____cbuf_23);
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)1));
		int32_t L_26 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_25);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_23, L_25)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_26>>(int32_t)4))))));
	}

IL_008f:
	{
		CharU5BU5D_t646* L_27 = (__this->____cbuf_23);
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		V_0 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_1;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_29);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)15)))))));
		int32_t L_31 = V_0;
		__this->____ind_24 = L_31;
		return;
	}
}
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32)
extern "C" void NumberFormatter_AppendDigits_m21462 (NumberFormatter_t4320 * __this, int32_t ___start, int32_t ___end, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___start;
		int32_t L_1 = ___end;
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
		int32_t L_2 = (__this->____ind_24);
		int32_t L_3 = ___end;
		int32_t L_4 = ___start;
		V_0 = ((int32_t)((int32_t)L_2+(int32_t)((int32_t)((int32_t)L_3-(int32_t)L_4))));
		int32_t L_5 = V_0;
		CharU5BU5D_t646* L_6 = (__this->____cbuf_23);
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_7 = V_0;
		NumberFormatter_Resize_m21397(__this, ((int32_t)((int32_t)L_7+(int32_t)((int32_t)10))), /*hidden argument*/NULL);
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		__this->____ind_24 = L_8;
		int32_t L_9 = ___end;
		int32_t L_10 = (__this->____offset_17);
		___end = ((int32_t)((int32_t)L_9+(int32_t)L_10));
		int32_t L_11 = ___start;
		int32_t L_12 = (__this->____offset_17);
		___start = ((int32_t)((int32_t)L_11+(int32_t)L_12));
		int32_t L_13 = ___start;
		int32_t L_14 = ___start;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_13+(int32_t)8))-(int32_t)((int32_t)((int32_t)L_14&(int32_t)7))));
		goto IL_01a6;
	}

IL_0051:
	{
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)8))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_16 = (__this->____val1_19);
		V_2 = L_16;
		goto IL_008a;
	}

IL_005e:
	{
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_18 = (__this->____val2_20);
		V_2 = L_18;
		goto IL_008a;
	}

IL_006c:
	{
		int32_t L_19 = V_1;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_007a;
		}
	}
	{
		uint32_t L_20 = (__this->____val3_21);
		V_2 = L_20;
		goto IL_008a;
	}

IL_007a:
	{
		int32_t L_21 = V_1;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_22 = (__this->____val4_22);
		V_2 = L_22;
		goto IL_008a;
	}

IL_0088:
	{
		V_2 = 0;
	}

IL_008a:
	{
		uint32_t L_23 = V_2;
		int32_t L_24 = ___start;
		V_2 = ((int32_t)((uint32_t)L_23>>((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_24&(int32_t)7))<<(int32_t)2))&(int32_t)((int32_t)31)))));
		int32_t L_25 = V_1;
		int32_t L_26 = ___end;
		if ((((int32_t)L_25) <= ((int32_t)L_26)))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_27 = ___end;
		V_1 = L_27;
	}

IL_009b:
	{
		CharU5BU5D_t646* L_28 = (__this->____cbuf_23);
		int32_t L_29 = V_0;
		int32_t L_30 = ((int32_t)((int32_t)L_29-(int32_t)1));
		V_0 = L_30;
		uint32_t L_31 = V_2;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_30);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_28, L_30)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)15)))))));
		int32_t L_32 = V_1;
		int32_t L_33 = ___start;
		V_3 = ((int32_t)((int32_t)L_32-(int32_t)L_33));
		int32_t L_34 = V_3;
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 0)
		{
			goto IL_0196;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 1)
		{
			goto IL_017c;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 2)
		{
			goto IL_0162;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 3)
		{
			goto IL_0148;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 4)
		{
			goto IL_012e;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 5)
		{
			goto IL_0114;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 6)
		{
			goto IL_00fa;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 7)
		{
			goto IL_00e0;
		}
	}
	{
		goto IL_019d;
	}

IL_00e0:
	{
		CharU5BU5D_t646* L_35 = (__this->____cbuf_23);
		int32_t L_36 = V_0;
		int32_t L_37 = ((int32_t)((int32_t)L_36-(int32_t)1));
		V_0 = L_37;
		uint32_t L_38 = V_2;
		int32_t L_39 = ((int32_t)((uint32_t)L_38>>4));
		V_2 = L_39;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_37);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_35, L_37)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)15)))))));
		goto IL_00fa;
	}

IL_00fa:
	{
		CharU5BU5D_t646* L_40 = (__this->____cbuf_23);
		int32_t L_41 = V_0;
		int32_t L_42 = ((int32_t)((int32_t)L_41-(int32_t)1));
		V_0 = L_42;
		uint32_t L_43 = V_2;
		int32_t L_44 = ((int32_t)((uint32_t)L_43>>4));
		V_2 = L_44;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_42);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_40, L_42)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_44&(int32_t)((int32_t)15)))))));
		goto IL_0114;
	}

IL_0114:
	{
		CharU5BU5D_t646* L_45 = (__this->____cbuf_23);
		int32_t L_46 = V_0;
		int32_t L_47 = ((int32_t)((int32_t)L_46-(int32_t)1));
		V_0 = L_47;
		uint32_t L_48 = V_2;
		int32_t L_49 = ((int32_t)((uint32_t)L_48>>4));
		V_2 = L_49;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_47);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_49&(int32_t)((int32_t)15)))))));
		goto IL_012e;
	}

IL_012e:
	{
		CharU5BU5D_t646* L_50 = (__this->____cbuf_23);
		int32_t L_51 = V_0;
		int32_t L_52 = ((int32_t)((int32_t)L_51-(int32_t)1));
		V_0 = L_52;
		uint32_t L_53 = V_2;
		int32_t L_54 = ((int32_t)((uint32_t)L_53>>4));
		V_2 = L_54;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_52);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_50, L_52)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_54&(int32_t)((int32_t)15)))))));
		goto IL_0148;
	}

IL_0148:
	{
		CharU5BU5D_t646* L_55 = (__this->____cbuf_23);
		int32_t L_56 = V_0;
		int32_t L_57 = ((int32_t)((int32_t)L_56-(int32_t)1));
		V_0 = L_57;
		uint32_t L_58 = V_2;
		int32_t L_59 = ((int32_t)((uint32_t)L_58>>4));
		V_2 = L_59;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_57);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_55, L_57)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)15)))))));
		goto IL_0162;
	}

IL_0162:
	{
		CharU5BU5D_t646* L_60 = (__this->____cbuf_23);
		int32_t L_61 = V_0;
		int32_t L_62 = ((int32_t)((int32_t)L_61-(int32_t)1));
		V_0 = L_62;
		uint32_t L_63 = V_2;
		int32_t L_64 = ((int32_t)((uint32_t)L_63>>4));
		V_2 = L_64;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_62);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_64&(int32_t)((int32_t)15)))))));
		goto IL_017c;
	}

IL_017c:
	{
		CharU5BU5D_t646* L_65 = (__this->____cbuf_23);
		int32_t L_66 = V_0;
		int32_t L_67 = ((int32_t)((int32_t)L_66-(int32_t)1));
		V_0 = L_67;
		uint32_t L_68 = V_2;
		int32_t L_69 = ((int32_t)((uint32_t)L_68>>4));
		V_2 = L_69;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_67);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_65, L_67)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_69&(int32_t)((int32_t)15)))))));
		goto IL_0196;
	}

IL_0196:
	{
		int32_t L_70 = V_1;
		int32_t L_71 = ___end;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_019b;
		}
	}
	{
		return;
	}

IL_019b:
	{
		goto IL_019d;
	}

IL_019d:
	{
		int32_t L_72 = V_1;
		___start = L_72;
		int32_t L_73 = V_1;
		V_1 = ((int32_t)((int32_t)L_73+(int32_t)8));
	}

IL_01a6:
	{
		goto IL_0051;
	}
}
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
extern "C" void NumberFormatter_AppendDigits_m21463 (NumberFormatter_t4320 * __this, int32_t ___start, int32_t ___end, StringBuilder_t619 * ___sb, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___start;
		int32_t L_1 = ___end;
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
		StringBuilder_t619 * L_2 = ___sb;
		NullCheck(L_2);
		int32_t L_3 = StringBuilder_get_Length_m6646(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___end;
		int32_t L_5 = ___start;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)((int32_t)((int32_t)L_4-(int32_t)L_5))));
		StringBuilder_t619 * L_6 = ___sb;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		StringBuilder_set_Length_m11520(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = ___end;
		int32_t L_9 = (__this->____offset_17);
		___end = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		int32_t L_10 = ___start;
		int32_t L_11 = (__this->____offset_17);
		___start = ((int32_t)((int32_t)L_10+(int32_t)L_11));
		int32_t L_12 = ___start;
		int32_t L_13 = ___start;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12+(int32_t)8))-(int32_t)((int32_t)((int32_t)L_13&(int32_t)7))));
		goto IL_0189;
	}

IL_003c:
	{
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)8))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_15 = (__this->____val1_19);
		V_2 = L_15;
		goto IL_0075;
	}

IL_0049:
	{
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_17 = (__this->____val2_20);
		V_2 = L_17;
		goto IL_0075;
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_19 = (__this->____val3_21);
		V_2 = L_19;
		goto IL_0075;
	}

IL_0065:
	{
		int32_t L_20 = V_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_21 = (__this->____val4_22);
		V_2 = L_21;
		goto IL_0075;
	}

IL_0073:
	{
		V_2 = 0;
	}

IL_0075:
	{
		uint32_t L_22 = V_2;
		int32_t L_23 = ___start;
		V_2 = ((int32_t)((uint32_t)L_22>>((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_23&(int32_t)7))<<(int32_t)2))&(int32_t)((int32_t)31)))));
		int32_t L_24 = V_1;
		int32_t L_25 = ___end;
		if ((((int32_t)L_24) <= ((int32_t)L_25)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_26 = ___end;
		V_1 = L_26;
	}

IL_0086:
	{
		StringBuilder_t619 * L_27 = ___sb;
		int32_t L_28 = V_0;
		int32_t L_29 = ((int32_t)((int32_t)L_28-(int32_t)1));
		V_0 = L_29;
		uint32_t L_30 = V_2;
		NullCheck(L_27);
		StringBuilder_set_Chars_m7359(L_27, L_29, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)15))))))), /*hidden argument*/NULL);
		int32_t L_31 = V_1;
		int32_t L_32 = ___start;
		V_3 = ((int32_t)((int32_t)L_31-(int32_t)L_32));
		int32_t L_33 = V_3;
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 0)
		{
			goto IL_0179;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 1)
		{
			goto IL_0160;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 2)
		{
			goto IL_0147;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 3)
		{
			goto IL_012e;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 4)
		{
			goto IL_0115;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 5)
		{
			goto IL_00fc;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 6)
		{
			goto IL_00e3;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 7)
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0180;
	}

IL_00ca:
	{
		StringBuilder_t619 * L_34 = ___sb;
		int32_t L_35 = V_0;
		int32_t L_36 = ((int32_t)((int32_t)L_35-(int32_t)1));
		V_0 = L_36;
		uint32_t L_37 = V_2;
		int32_t L_38 = ((int32_t)((uint32_t)L_37>>4));
		V_2 = L_38;
		NullCheck(L_34);
		StringBuilder_set_Chars_m7359(L_34, L_36, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_38&(int32_t)((int32_t)15))))))), /*hidden argument*/NULL);
		goto IL_00e3;
	}

IL_00e3:
	{
		StringBuilder_t619 * L_39 = ___sb;
		int32_t L_40 = V_0;
		int32_t L_41 = ((int32_t)((int32_t)L_40-(int32_t)1));
		V_0 = L_41;
		uint32_t L_42 = V_2;
		int32_t L_43 = ((int32_t)((uint32_t)L_42>>4));
		V_2 = L_43;
		NullCheck(L_39);
		StringBuilder_set_Chars_m7359(L_39, L_41, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_43&(int32_t)((int32_t)15))))))), /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00fc:
	{
		StringBuilder_t619 * L_44 = ___sb;
		int32_t L_45 = V_0;
		int32_t L_46 = ((int32_t)((int32_t)L_45-(int32_t)1));
		V_0 = L_46;
		uint32_t L_47 = V_2;
		int32_t L_48 = ((int32_t)((uint32_t)L_47>>4));
		V_2 = L_48;
		NullCheck(L_44);
		StringBuilder_set_Chars_m7359(L_44, L_46, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_48&(int32_t)((int32_t)15))))))), /*hidden argument*/NULL);
		goto IL_0115;
	}

IL_0115:
	{
		StringBuilder_t619 * L_49 = ___sb;
		int32_t L_50 = V_0;
		int32_t L_51 = ((int32_t)((int32_t)L_50-(int32_t)1));
		V_0 = L_51;
		uint32_t L_52 = V_2;
		int32_t L_53 = ((int32_t)((uint32_t)L_52>>4));
		V_2 = L_53;
		NullCheck(L_49);
		StringBuilder_set_Chars_m7359(L_49, L_51, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)15))))))), /*hidden argument*/NULL);
		goto IL_012e;
	}

IL_012e:
	{
		StringBuilder_t619 * L_54 = ___sb;
		int32_t L_55 = V_0;
		int32_t L_56 = ((int32_t)((int32_t)L_55-(int32_t)1));
		V_0 = L_56;
		uint32_t L_57 = V_2;
		int32_t L_58 = ((int32_t)((uint32_t)L_57>>4));
		V_2 = L_58;
		NullCheck(L_54);
		StringBuilder_set_Chars_m7359(L_54, L_56, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_58&(int32_t)((int32_t)15))))))), /*hidden argument*/NULL);
		goto IL_0147;
	}

IL_0147:
	{
		StringBuilder_t619 * L_59 = ___sb;
		int32_t L_60 = V_0;
		int32_t L_61 = ((int32_t)((int32_t)L_60-(int32_t)1));
		V_0 = L_61;
		uint32_t L_62 = V_2;
		int32_t L_63 = ((int32_t)((uint32_t)L_62>>4));
		V_2 = L_63;
		NullCheck(L_59);
		StringBuilder_set_Chars_m7359(L_59, L_61, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_63&(int32_t)((int32_t)15))))))), /*hidden argument*/NULL);
		goto IL_0160;
	}

IL_0160:
	{
		StringBuilder_t619 * L_64 = ___sb;
		int32_t L_65 = V_0;
		int32_t L_66 = ((int32_t)((int32_t)L_65-(int32_t)1));
		V_0 = L_66;
		uint32_t L_67 = V_2;
		int32_t L_68 = ((int32_t)((uint32_t)L_67>>4));
		V_2 = L_68;
		NullCheck(L_64);
		StringBuilder_set_Chars_m7359(L_64, L_66, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_68&(int32_t)((int32_t)15))))))), /*hidden argument*/NULL);
		goto IL_0179;
	}

IL_0179:
	{
		int32_t L_69 = V_1;
		int32_t L_70 = ___end;
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_017e;
		}
	}
	{
		return;
	}

IL_017e:
	{
		goto IL_0180;
	}

IL_0180:
	{
		int32_t L_71 = V_1;
		___start = L_71;
		int32_t L_72 = V_1;
		V_1 = ((int32_t)((int32_t)L_72+(int32_t)8));
	}

IL_0189:
	{
		goto IL_003c;
	}
}
// System.Void System.NumberFormatter::Multiply10(System.Int32)
extern "C" void NumberFormatter_Multiply10_m21464 (NumberFormatter_t4320 * __this, int32_t ___count, const MethodInfo* method)
{
	{
		int32_t L_0 = ___count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = (__this->____digitsLen_16);
		if (L_1)
		{
			goto IL_000d;
		}
	}

IL_000c:
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = (__this->____decPointPos_18);
		int32_t L_3 = ___count;
		__this->____decPointPos_18 = ((int32_t)((int32_t)L_2+(int32_t)L_3));
		return;
	}
}
// System.Void System.NumberFormatter::Divide10(System.Int32)
extern "C" void NumberFormatter_Divide10_m21465 (NumberFormatter_t4320 * __this, int32_t ___count, const MethodInfo* method)
{
	{
		int32_t L_0 = ___count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = (__this->____digitsLen_16);
		if (L_1)
		{
			goto IL_000d;
		}
	}

IL_000c:
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = (__this->____decPointPos_18);
		int32_t L_3 = ___count;
		__this->____decPointPos_18 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		return;
	}
}
// System.NumberFormatter System.NumberFormatter::GetClone()
extern TypeInfo* NumberFormatter_t4320_il2cpp_TypeInfo_var;
extern "C" NumberFormatter_t4320 * NumberFormatter_GetClone_m21466 (NumberFormatter_t4320 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NumberFormatter_t4320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Object_MemberwiseClone_m17058(__this, /*hidden argument*/NULL);
		return ((NumberFormatter_t4320 *)Castclass(L_0, NumberFormatter_t4320_il2cpp_TypeInfo_var));
	}
}
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
#ifndef _MSC_VER
#else
#endif
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"



// System.Void System.ObjectDisposedException::.ctor(System.String)
extern "C" void ObjectDisposedException__ctor_m6605 (ObjectDisposedException_t1338 * __this, String_t* ___objectName, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5592, /*hidden argument*/NULL);
		InvalidOperationException__ctor_m6655(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___objectName;
		__this->___obj_name_12 = L_1;
		String_t* L_2 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5592, /*hidden argument*/NULL);
		__this->___msg_13 = L_2;
		return;
	}
}
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
extern "C" void ObjectDisposedException__ctor_m11571 (ObjectDisposedException_t1338 * __this, String_t* ___objectName, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		InvalidOperationException__ctor_m6655(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___objectName;
		__this->___obj_name_12 = L_1;
		String_t* L_2 = ___message;
		__this->___msg_13 = L_2;
		return;
	}
}
// System.Void System.ObjectDisposedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ObjectDisposedException__ctor_m21467 (ObjectDisposedException_t1338 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		InvalidOperationException__ctor_m16824(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_2 = ___info;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m11565(L_2, (String_t*) &_stringLiteral5593, /*hidden argument*/NULL);
		__this->___obj_name_12 = L_3;
		return;
	}
}
// System.String System.ObjectDisposedException::get_Message()
extern "C" String_t* ObjectDisposedException_get_Message_m21468 (ObjectDisposedException_t1338 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___msg_13);
		return L_0;
	}
}
// System.Void System.ObjectDisposedException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ObjectDisposedException_GetObjectData_m21469 (ObjectDisposedException_t1338 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		Exception_GetObjectData_m6785(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_2 = ___info;
		String_t* L_3 = (__this->___obj_name_12);
		NullCheck(L_2);
		SerializationInfo_AddValue_m6629(L_2, (String_t*) &_stringLiteral5593, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.OperatingSystem::.ctor(System.PlatformID,System.Version)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void OperatingSystem__ctor_m21470 (OperatingSystem_t4299 * __this, int32_t ___platform, Version_t1549 * ___version, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->____servicePack_2 = L_0;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		Version_t1549 * L_1 = ___version;
		bool L_2 = Version_op_Equality_m16813(NULL /*static, unused*/, L_1, (Version_t1549 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*) &_stringLiteral1822, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0025:
	{
		int32_t L_4 = ___platform;
		__this->____platform_0 = L_4;
		Version_t1549 * L_5 = ___version;
		__this->____version_1 = L_5;
		return;
	}
}
// System.PlatformID System.OperatingSystem::get_Platform()
extern "C" int32_t OperatingSystem_get_Platform_m21471 (OperatingSystem_t4299 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____platform_0);
		return L_0;
	}
}
// System.Void System.OperatingSystem::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* PlatformID_t4323_il2cpp_TypeInfo_var;
extern "C" void OperatingSystem_GetObjectData_m21472 (OperatingSystem_t4299 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformID_t4323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8513);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t1322 * L_0 = ___info;
		int32_t L_1 = (__this->____platform_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(PlatformID_t4323_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		SerializationInfo_AddValue_m6629(L_0, (String_t*) &_stringLiteral5594, L_3, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_4 = ___info;
		Version_t1549 * L_5 = (__this->____version_1);
		NullCheck(L_4);
		SerializationInfo_AddValue_m6629(L_4, (String_t*) &_stringLiteral5595, L_5, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_6 = ___info;
		String_t* L_7 = (__this->____servicePack_2);
		NullCheck(L_6);
		SerializationInfo_AddValue_m6629(L_6, (String_t*) &_stringLiteral5596, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.OperatingSystem::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* OperatingSystem_ToString_m21473 (OperatingSystem_t4299 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->____platform_0);
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
		if (L_1 == 2)
		{
			goto IL_0033;
		}
		if (L_1 == 3)
		{
			goto IL_004b;
		}
		if (L_1 == 4)
		{
			goto IL_0053;
		}
		if (L_1 == 5)
		{
			goto IL_005b;
		}
		if (L_1 == 6)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)128))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_006b;
	}

IL_0033:
	{
		V_0 = (String_t*) &_stringLiteral5597;
		goto IL_0078;
	}

IL_003b:
	{
		V_0 = (String_t*) &_stringLiteral5598;
		goto IL_0078;
	}

IL_0043:
	{
		V_0 = (String_t*) &_stringLiteral5599;
		goto IL_0078;
	}

IL_004b:
	{
		V_0 = (String_t*) &_stringLiteral5600;
		goto IL_0078;
	}

IL_0053:
	{
		V_0 = (String_t*) &_stringLiteral5601;
		goto IL_0078;
	}

IL_005b:
	{
		V_0 = (String_t*) &_stringLiteral5602;
		goto IL_0078;
	}

IL_0063:
	{
		V_0 = (String_t*) &_stringLiteral5603;
		goto IL_0078;
	}

IL_006b:
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5604, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0078;
	}

IL_0078:
	{
		String_t* L_4 = V_0;
		Version_t1549 * L_5 = (__this->____version_1);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Version::ToString() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m103(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral68, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.OperationCanceledException
#include "mscorlib_System_OperationCanceledException.h"
#ifndef _MSC_VER
#else
#endif
// System.OperationCanceledException
#include "mscorlib_System_OperationCanceledExceptionMethodDeclarations.h"



// System.Void System.OperationCanceledException::.ctor()
extern "C" void OperationCanceledException__ctor_m7661 (OperationCanceledException_t1675 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5605, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233029), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.OperationCanceledException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OperationCanceledException__ctor_m21474 (OperationCanceledException_t1675 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.OutOfMemoryException
#include "mscorlib_System_OutOfMemoryException.h"
#ifndef _MSC_VER
#else
#endif
// System.OutOfMemoryException
#include "mscorlib_System_OutOfMemoryExceptionMethodDeclarations.h"



// System.Void System.OutOfMemoryException::.ctor()
extern "C" void OutOfMemoryException__ctor_m21475 (OutOfMemoryException_t4321 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5606, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2147024882), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.OutOfMemoryException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OutOfMemoryException__ctor_m21476 (OutOfMemoryException_t4321 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.OverflowException::.ctor()
extern "C" void OverflowException__ctor_m21477 (OverflowException_t4322 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5607, /*hidden argument*/NULL);
		ArithmeticException__ctor_m6565(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233066), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.OverflowException::.ctor(System.String)
extern "C" void OverflowException__ctor_m21478 (OverflowException_t4322 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		ArithmeticException__ctor_m6565(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233066), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.OverflowException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OverflowException__ctor_m21479 (OverflowException_t4322 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		ArithmeticException__ctor_m20826(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.PlatformID
#include "mscorlib_System_PlatformIDMethodDeclarations.h"



// System.Random
#include "mscorlib_System_Random.h"
#ifndef _MSC_VER
#else
#endif
// System.Random
#include "mscorlib_System_RandomMethodDeclarations.h"

// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"


// System.Void System.Random::.ctor()
extern "C" void Random__ctor_m2432 (Random_t81 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Environment_get_TickCount_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		Random__ctor_m12185(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Random::.ctor(System.Int32)
extern TypeInfo* Int32U5BU5D_t119_il2cpp_TypeInfo_var;
extern "C" void Random__ctor_m12185 (Random_t81 * __this, int32_t ___Seed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		__this->___SeedArray_5 = ((Int32U5BU5D_t119*)SZArrayNew(Int32U5BU5D_t119_il2cpp_TypeInfo_var, ((int32_t)56)));
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___Seed;
		int32_t L_1 = abs(L_0);
		V_1 = ((int32_t)((int32_t)((int32_t)161803398)-(int32_t)L_1));
		Int32U5BU5D_t119* L_2 = (__this->___SeedArray_5);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)55));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, ((int32_t)55))) = (int32_t)L_3;
		V_2 = 1;
		V_3 = 1;
		goto IL_005e;
	}

IL_0030:
	{
		int32_t L_4 = V_3;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)21)*(int32_t)L_4))%(int32_t)((int32_t)55)));
		Int32U5BU5D_t119* L_5 = (__this->___SeedArray_5);
		int32_t L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6)) = (int32_t)L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_8-(int32_t)L_9));
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)((int32_t)2147483647)));
	}

IL_0051:
	{
		Int32U5BU5D_t119* L_12 = (__this->___SeedArray_5);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_12, L_14));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)55))))
		{
			goto IL_0030;
		}
	}
	{
		V_4 = 1;
		goto IL_00c3;
	}

IL_0068:
	{
		V_5 = 1;
		goto IL_00b7;
	}

IL_006d:
	{
		Int32U5BU5D_t119* L_17 = (__this->___SeedArray_5);
		int32_t L_18 = V_5;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t* L_19 = ((int32_t*)(int32_t*)SZArrayLdElema(L_17, L_18));
		Int32U5BU5D_t119* L_20 = (__this->___SeedArray_5);
		int32_t L_21 = V_5;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)((int32_t)1+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21+(int32_t)((int32_t)30)))%(int32_t)((int32_t)55))))));
		int32_t L_22 = ((int32_t)((int32_t)1+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21+(int32_t)((int32_t)30)))%(int32_t)((int32_t)55)))));
		*((int32_t*)(L_19)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_19))-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))));
		Int32U5BU5D_t119* L_23 = (__this->___SeedArray_5);
		int32_t L_24 = V_5;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25))) >= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		Int32U5BU5D_t119* L_26 = (__this->___SeedArray_5);
		int32_t L_27 = V_5;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t* L_28 = ((int32_t*)(int32_t*)SZArrayLdElema(L_26, L_27));
		*((int32_t*)(L_28)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)((int32_t)2147483647)));
	}

IL_00b1:
	{
		int32_t L_29 = V_5;
		V_5 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00b7:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)56))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00c3:
	{
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) < ((int32_t)5)))
		{
			goto IL_0068;
		}
	}
	{
		__this->___inext_3 = 0;
		__this->___inextp_4 = ((int32_t)31);
		return;
	}
}
// System.Double System.Random::Sample()
extern "C" double Random_Sample_m21480 (Random_t81 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___inext_3);
		int32_t L_1 = ((int32_t)((int32_t)L_0+(int32_t)1));
		V_1 = L_1;
		__this->___inext_3 = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)56))))
		{
			goto IL_001c;
		}
	}
	{
		__this->___inext_3 = 1;
	}

IL_001c:
	{
		int32_t L_3 = (__this->___inextp_4);
		int32_t L_4 = ((int32_t)((int32_t)L_3+(int32_t)1));
		V_1 = L_4;
		__this->___inextp_4 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)56))))
		{
			goto IL_0038;
		}
	}
	{
		__this->___inextp_4 = 1;
	}

IL_0038:
	{
		Int32U5BU5D_t119* L_6 = (__this->___SeedArray_5);
		int32_t L_7 = (__this->___inext_3);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		Int32U5BU5D_t119* L_9 = (__this->___SeedArray_5);
		int32_t L_10 = (__this->___inextp_4);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_0 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_8))-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))));
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)((int32_t)2147483647)));
	}

IL_0060:
	{
		Int32U5BU5D_t119* L_14 = (__this->___SeedArray_5);
		int32_t L_15 = (__this->___inext_3);
		int32_t L_16 = V_0;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_14, L_15)) = (int32_t)L_16;
		int32_t L_17 = V_0;
		return ((double)((double)(((double)L_17))*(double)(4.6566128752457969E-10)));
	}
}
// System.Int32 System.Random::Next()
extern "C" int32_t Random_Next_m21481 (Random_t81 * __this, const MethodInfo* method)
{
	{
		double L_0 = (double)VirtFuncInvoker0< double >::Invoke(4 /* System.Double System.Random::Sample() */, __this);
		return (((int32_t)((double)((double)L_0*(double)(2147483647.0)))));
	}
}
// System.Int32 System.Random::Next(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" int32_t Random_Next_m21482 (Random_t81 * __this, int32_t ___maxValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___maxValue;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5608, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_2 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		double L_3 = (double)VirtFuncInvoker0< double >::Invoke(4 /* System.Double System.Random::Sample() */, __this);
		int32_t L_4 = ___maxValue;
		return (((int32_t)((double)((double)L_3*(double)(((double)L_4))))));
	}
}
// System.Int32 System.Random::Next(System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" int32_t Random_Next_m21483 (Random_t81 * __this, int32_t ___minValue, int32_t ___maxValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___minValue;
		int32_t L_1 = ___maxValue;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5609, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_3 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0014:
	{
		int32_t L_4 = ___maxValue;
		int32_t L_5 = ___minValue;
		V_0 = ((int32_t)((int32_t)L_4-(int32_t)L_5));
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) <= ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_7 = ___minValue;
		return L_7;
	}

IL_001e:
	{
		double L_8 = (double)VirtFuncInvoker0< double >::Invoke(4 /* System.Double System.Random::Sample() */, __this);
		uint32_t L_9 = V_0;
		int32_t L_10 = ___minValue;
		return (((int32_t)((int64_t)((int64_t)(((uint64_t)(((uint32_t)((double)((double)L_8*(double)(((double)(((double)L_9))))))))))+(int64_t)(((int64_t)L_10))))));
	}
}
// System.Double System.Random::NextDouble()
extern "C" double Random_NextDouble_m21484 (Random_t81 * __this, const MethodInfo* method)
{
	{
		double L_0 = (double)VirtFuncInvoker0< double >::Invoke(4 /* System.Double System.Random::Sample() */, __this);
		return L_0;
	}
}
// System.RankException
#include "mscorlib_System_RankException.h"
#ifndef _MSC_VER
#else
#endif
// System.RankException
#include "mscorlib_System_RankExceptionMethodDeclarations.h"



// System.Void System.RankException::.ctor()
extern "C" void RankException__ctor_m21485 (RankException_t4324 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5610, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233065), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.RankException::.ctor(System.String)
extern "C" void RankException__ctor_m21486 (RankException_t4324 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233065), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.RankException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RankException__ctor_m21487 (RankException_t4324 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.ResolveEventArgs
#include "mscorlib_System_ResolveEventArgs.h"
#ifndef _MSC_VER
#else
#endif
// System.ResolveEventArgs
#include "mscorlib_System_ResolveEventArgsMethodDeclarations.h"



// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
#ifndef _MSC_VER
#else
#endif
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandleMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationException.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationExceptionMethodDeclarations.h"


// System.Void System.RuntimeMethodHandle::.ctor(System.IntPtr)
extern "C" void RuntimeMethodHandle__ctor_m21488 (RuntimeMethodHandle_t4326 * __this, IntPtr_t ___v, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___v;
		__this->___value_0 = L_0;
		return;
	}
}
// System.Void System.RuntimeMethodHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* MonoMethod_t_0_0_0_var;
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* MonoMethod_t_il2cpp_TypeInfo_var;
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t3761_il2cpp_TypeInfo_var;
extern "C" void RuntimeMethodHandle__ctor_m21489 (RuntimeMethodHandle_t4326 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoMethod_t_0_0_0_var = il2cpp_codegen_type_from_index(8508);
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		MonoMethod_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8508);
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1358);
		SerializationException_t3761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7373);
		s_Il2CppMethodIntialized = true;
	}
	MonoMethod_t * V_0 = {0};
	RuntimeMethodHandle_t4326  V_1 = {0};
	{
		SerializationInfo_t1322 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral216, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t1322 * L_2 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(MonoMethod_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_4 = SerializationInfo_GetValue_m11566(L_2, (String_t*) &_stringLiteral5611, L_3, /*hidden argument*/NULL);
		V_0 = ((MonoMethod_t *)Castclass(L_4, MonoMethod_t_il2cpp_TypeInfo_var));
		MonoMethod_t * L_5 = V_0;
		NullCheck(L_5);
		RuntimeMethodHandle_t4326  L_6 = (RuntimeMethodHandle_t4326 )VirtFuncInvoker0< RuntimeMethodHandle_t4326  >::Invoke(18 /* System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle() */, L_5);
		V_1 = L_6;
		IntPtr_t L_7 = RuntimeMethodHandle_get_Value_m21490((&V_1), /*hidden argument*/NULL);
		__this->___value_0 = L_7;
		IntPtr_t L_8 = (__this->___value_0);
		IntPtr_t L_9 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_10 = IntPtr_op_Equality_m13773(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_11 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral4449, /*hidden argument*/NULL);
		SerializationException_t3761 * L_12 = (SerializationException_t3761 *)il2cpp_codegen_object_new (SerializationException_t3761_il2cpp_TypeInfo_var);
		SerializationException__ctor_m16766(L_12, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_005f:
	{
		return;
	}
}
// System.IntPtr System.RuntimeMethodHandle::get_Value()
extern "C" IntPtr_t RuntimeMethodHandle_get_Value_m21490 (RuntimeMethodHandle_t4326 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___value_0);
		return L_0;
	}
}
// System.Void System.RuntimeMethodHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* MonoMethod_t_0_0_0_var;
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t3761_il2cpp_TypeInfo_var;
extern TypeInfo* MonoMethod_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void RuntimeMethodHandle_GetObjectData_m21491 (RuntimeMethodHandle_t4326 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoMethod_t_0_0_0_var = il2cpp_codegen_type_from_index(8508);
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1358);
		SerializationException_t3761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7373);
		MonoMethod_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8508);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t1322 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral216, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		IntPtr_t L_2 = (__this->___value_0);
		IntPtr_t L_3 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_4 = IntPtr_op_Equality_m13773(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		SerializationException_t3761 * L_5 = (SerializationException_t3761 *)il2cpp_codegen_object_new (SerializationException_t3761_il2cpp_TypeInfo_var);
		SerializationException__ctor_m16766(L_5, (String_t*) &_stringLiteral4450, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002b:
	{
		SerializationInfo_t1322 * L_6 = ___info;
		MethodBase_t592 * L_7 = MethodBase_GetMethodFromHandle_m2661(NULL /*static, unused*/, (*(RuntimeMethodHandle_t4326 *)__this), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(MonoMethod_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		SerializationInfo_AddValue_m16764(L_6, (String_t*) &_stringLiteral5611, ((MonoMethod_t *)Castclass(L_7, MonoMethod_t_il2cpp_TypeInfo_var)), L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.RuntimeMethodHandle::Equals(System.Object)
extern TypeInfo* RuntimeMethodHandle_t4326_il2cpp_TypeInfo_var;
extern "C" bool RuntimeMethodHandle_Equals_m21492 (RuntimeMethodHandle_t4326 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RuntimeMethodHandle_t4326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8514);
		s_Il2CppMethodIntialized = true;
	}
	RuntimeMethodHandle_t4326  V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeMethodHandle_t4326  L_1 = (*(RuntimeMethodHandle_t4326 *)__this);
		Object_t * L_2 = Box(RuntimeMethodHandle_t4326_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m2871(L_2, /*hidden argument*/NULL);
		Object_t * L_4 = ___obj;
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m2871(L_4, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_3) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		return 0;
	}

IL_001d:
	{
		IntPtr_t L_6 = (__this->___value_0);
		Object_t * L_7 = ___obj;
		V_0 = ((*(RuntimeMethodHandle_t4326 *)((RuntimeMethodHandle_t4326 *)UnBox (L_7, RuntimeMethodHandle_t4326_il2cpp_TypeInfo_var))));
		IntPtr_t L_8 = RuntimeMethodHandle_get_Value_m21490((&V_0), /*hidden argument*/NULL);
		bool L_9 = IntPtr_op_Equality_m13773(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 System.RuntimeMethodHandle::GetHashCode()
extern "C" int32_t RuntimeMethodHandle_GetHashCode_m21493 (RuntimeMethodHandle_t4326 * __this, const MethodInfo* method)
{
	{
		IntPtr_t* L_0 = &(__this->___value_0);
		int32_t L_1 = IntPtr_GetHashCode_m17546(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
#ifndef _MSC_VER
#else
#endif
// System.StringComparer
#include "mscorlib_System_StringComparerMethodDeclarations.h"

// System.CultureAwareComparer
#include "mscorlib_System_CultureAwareComparer.h"
// System.OrdinalComparer
#include "mscorlib_System_OrdinalComparer.h"
// System.CultureAwareComparer
#include "mscorlib_System_CultureAwareComparerMethodDeclarations.h"
// System.OrdinalComparer
#include "mscorlib_System_OrdinalComparerMethodDeclarations.h"


// System.Void System.StringComparer::.ctor()
extern "C" void StringComparer__ctor_m21494 (StringComparer_t2665 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.StringComparer::.cctor()
extern TypeInfo* CultureInfo_t1331_il2cpp_TypeInfo_var;
extern TypeInfo* CultureAwareComparer_t4327_il2cpp_TypeInfo_var;
extern TypeInfo* StringComparer_t2665_il2cpp_TypeInfo_var;
extern TypeInfo* OrdinalComparer_t4328_il2cpp_TypeInfo_var;
extern "C" void StringComparer__cctor_m21495 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t1331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2628);
		CultureAwareComparer_t4327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8515);
		StringComparer_t2665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5452);
		OrdinalComparer_t4328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8516);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1331_il2cpp_TypeInfo_var);
		CultureInfo_t1331 * L_0 = CultureInfo_get_InvariantCulture_m6578(NULL /*static, unused*/, /*hidden argument*/NULL);
		CultureAwareComparer_t4327 * L_1 = (CultureAwareComparer_t4327 *)il2cpp_codegen_object_new (CultureAwareComparer_t4327_il2cpp_TypeInfo_var);
		CultureAwareComparer__ctor_m21499(L_1, L_0, 1, /*hidden argument*/NULL);
		((StringComparer_t2665_StaticFields*)StringComparer_t2665_il2cpp_TypeInfo_var->static_fields)->___invariantCultureIgnoreCase_0 = L_1;
		CultureInfo_t1331 * L_2 = CultureInfo_get_InvariantCulture_m6578(NULL /*static, unused*/, /*hidden argument*/NULL);
		CultureAwareComparer_t4327 * L_3 = (CultureAwareComparer_t4327 *)il2cpp_codegen_object_new (CultureAwareComparer_t4327_il2cpp_TypeInfo_var);
		CultureAwareComparer__ctor_m21499(L_3, L_2, 0, /*hidden argument*/NULL);
		((StringComparer_t2665_StaticFields*)StringComparer_t2665_il2cpp_TypeInfo_var->static_fields)->___invariantCulture_1 = L_3;
		OrdinalComparer_t4328 * L_4 = (OrdinalComparer_t4328 *)il2cpp_codegen_object_new (OrdinalComparer_t4328_il2cpp_TypeInfo_var);
		OrdinalComparer__ctor_m21503(L_4, 1, /*hidden argument*/NULL);
		((StringComparer_t2665_StaticFields*)StringComparer_t2665_il2cpp_TypeInfo_var->static_fields)->___ordinalIgnoreCase_2 = L_4;
		OrdinalComparer_t4328 * L_5 = (OrdinalComparer_t4328 *)il2cpp_codegen_object_new (OrdinalComparer_t4328_il2cpp_TypeInfo_var);
		OrdinalComparer__ctor_m21503(L_5, 0, /*hidden argument*/NULL);
		((StringComparer_t2665_StaticFields*)StringComparer_t2665_il2cpp_TypeInfo_var->static_fields)->___ordinal_3 = L_5;
		return;
	}
}
// System.StringComparer System.StringComparer::get_InvariantCultureIgnoreCase()
extern TypeInfo* StringComparer_t2665_il2cpp_TypeInfo_var;
extern "C" StringComparer_t2665 * StringComparer_get_InvariantCultureIgnoreCase_m16832 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t2665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5452);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t2665_il2cpp_TypeInfo_var);
		StringComparer_t2665 * L_0 = ((StringComparer_t2665_StaticFields*)StringComparer_t2665_il2cpp_TypeInfo_var->static_fields)->___invariantCultureIgnoreCase_0;
		return L_0;
	}
}
// System.StringComparer System.StringComparer::get_Ordinal()
extern TypeInfo* StringComparer_t2665_il2cpp_TypeInfo_var;
extern "C" StringComparer_t2665 * StringComparer_get_Ordinal_m12155 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t2665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5452);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t2665_il2cpp_TypeInfo_var);
		StringComparer_t2665 * L_0 = ((StringComparer_t2665_StaticFields*)StringComparer_t2665_il2cpp_TypeInfo_var->static_fields)->___ordinal_3;
		return L_0;
	}
}
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
extern TypeInfo* StringComparer_t2665_il2cpp_TypeInfo_var;
extern "C" StringComparer_t2665 * StringComparer_get_OrdinalIgnoreCase_m13703 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t2665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5452);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t2665_il2cpp_TypeInfo_var);
		StringComparer_t2665 * L_0 = ((StringComparer_t2665_StaticFields*)StringComparer_t2665_il2cpp_TypeInfo_var->static_fields)->___ordinalIgnoreCase_2;
		return L_0;
	}
}
// System.Int32 System.StringComparer::Compare(System.Object,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IComparable_t43_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" int32_t StringComparer_Compare_m21496 (StringComparer_t2665 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		IComparable_t43_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Object_t * V_2 = {0};
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		if ((!(((Object_t*)(Object_t *)L_0) == ((Object_t*)(Object_t *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		Object_t * L_2 = ___x;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		Object_t * L_3 = ___y;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_4 = ___x;
		V_0 = ((String_t*)IsInst(L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_6 = ___y;
		V_1 = ((String_t*)IsInst(L_6, String_t_il2cpp_TypeInfo_var));
		String_t* L_7 = V_1;
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_8 = V_0;
		String_t* L_9 = V_1;
		int32_t L_10 = (int32_t)VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(10 /* System.Int32 System.StringComparer::Compare(System.String,System.String) */, __this, L_8, L_9);
		return L_10;
	}

IL_002d:
	{
		Object_t * L_11 = ___x;
		V_2 = ((Object_t *)IsInst(L_11, IComparable_t43_il2cpp_TypeInfo_var));
		Object_t * L_12 = V_2;
		if (L_12)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentException_t1126 * L_13 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11580(L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_003d:
	{
		Object_t * L_14 = V_2;
		Object_t * L_15 = ___y;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t43_il2cpp_TypeInfo_var, L_14, L_15);
		return L_16;
	}
}
// System.Boolean System.StringComparer::Equals(System.Object,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool StringComparer_Equals_m21497 (StringComparer_t2665 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		if ((!(((Object_t*)(Object_t *)L_0) == ((Object_t*)(Object_t *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		Object_t * L_2 = ___x;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		Object_t * L_3 = ___y;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return 0;
	}

IL_000e:
	{
		Object_t * L_4 = ___x;
		V_0 = ((String_t*)IsInst(L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_6 = ___y;
		V_1 = ((String_t*)IsInst(L_6, String_t_il2cpp_TypeInfo_var));
		String_t* L_7 = V_1;
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_8 = V_0;
		String_t* L_9 = V_1;
		bool L_10 = (bool)VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(11 /* System.Boolean System.StringComparer::Equals(System.String,System.String) */, __this, L_8, L_9);
		return L_10;
	}

IL_002b:
	{
		Object_t * L_11 = ___x;
		Object_t * L_12 = ___y;
		NullCheck(L_11);
		bool L_13 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_11, L_12);
		return L_13;
	}
}
// System.Int32 System.StringComparer::GetHashCode(System.Object)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t StringComparer_GetHashCode_m21498 (StringComparer_t2665 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral4558, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___obj;
		V_0 = ((String_t*)IsInst(L_2, String_t_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		Object_t * L_4 = ___obj;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		G_B5_0 = L_5;
		goto IL_0027;
	}

IL_0020:
	{
		String_t* L_6 = V_0;
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, String_t* >::Invoke(12 /* System.Int32 System.StringComparer::GetHashCode(System.String) */, __this, L_6);
		G_B5_0 = L_7;
	}

IL_0027:
	{
		return G_B5_0;
	}
}
// System.Int32 System.StringComparer::Compare(System.String,System.String)
// System.Boolean System.StringComparer::Equals(System.String,System.String)
// System.Int32 System.StringComparer::GetHashCode(System.String)
#ifndef _MSC_VER
#else
#endif

// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfo.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"
// System.Globalization.SortKey
#include "mscorlib_System_Globalization_SortKey.h"
// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfoMethodDeclarations.h"
// System.Globalization.SortKey
#include "mscorlib_System_Globalization_SortKeyMethodDeclarations.h"


// System.Void System.CultureAwareComparer::.ctor(System.Globalization.CultureInfo,System.Boolean)
extern TypeInfo* StringComparer_t2665_il2cpp_TypeInfo_var;
extern "C" void CultureAwareComparer__ctor_m21499 (CultureAwareComparer_t4327 * __this, CultureInfo_t1331 * ___ci, bool ___ignore_case, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t2665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5452);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t2665_il2cpp_TypeInfo_var);
		StringComparer__ctor_m21494(__this, /*hidden argument*/NULL);
		CultureInfo_t1331 * L_0 = ___ci;
		NullCheck(L_0);
		CompareInfo_t1356 * L_1 = (CompareInfo_t1356 *)VirtFuncInvoker0< CompareInfo_t1356 * >::Invoke(9 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_0);
		__this->____compareInfo_5 = L_1;
		bool L_2 = ___ignore_case;
		__this->____ignoreCase_4 = L_2;
		return;
	}
}
// System.Int32 System.CultureAwareComparer::Compare(System.String,System.String)
extern "C" int32_t CultureAwareComparer_Compare_m21500 (CultureAwareComparer_t4327 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->____ignoreCase_4);
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 0;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		CompareInfo_t1356 * L_1 = (__this->____compareInfo_5);
		String_t* L_2 = ___x;
		String_t* L_3 = ___y;
		int32_t L_4 = V_0;
		NullCheck(L_1);
		int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, String_t*, String_t*, int32_t >::Invoke(6 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.String,System.Globalization.CompareOptions) */, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Boolean System.CultureAwareComparer::Equals(System.String,System.String)
extern "C" bool CultureAwareComparer_Equals_m21501 (CultureAwareComparer_t4327 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method)
{
	{
		String_t* L_0 = ___x;
		String_t* L_1 = ___y;
		int32_t L_2 = (int32_t)VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(10 /* System.Int32 System.CultureAwareComparer::Compare(System.String,System.String) */, __this, L_0, L_1);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.CultureAwareComparer::GetHashCode(System.String)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" int32_t CultureAwareComparer_GetHashCode_m21502 (CultureAwareComparer_t4327 * __this, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		String_t* L_0 = ___s;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral4255, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = (__this->____ignoreCase_4);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_001a;
	}

IL_0019:
	{
		G_B5_0 = 0;
	}

IL_001a:
	{
		V_0 = G_B5_0;
		CompareInfo_t1356 * L_3 = (__this->____compareInfo_5);
		String_t* L_4 = ___s;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		SortKey_t3870 * L_6 = (SortKey_t3870 *)VirtFuncInvoker2< SortKey_t3870 *, String_t*, int32_t >::Invoke(8 /* System.Globalization.SortKey System.Globalization.CompareInfo::GetSortKey(System.String,System.Globalization.CompareOptions) */, L_3, L_4, L_5);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Globalization.SortKey::GetHashCode() */, L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.OrdinalComparer::.ctor(System.Boolean)
extern TypeInfo* StringComparer_t2665_il2cpp_TypeInfo_var;
extern "C" void OrdinalComparer__ctor_m21503 (OrdinalComparer_t4328 * __this, bool ___ignoreCase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t2665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5452);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t2665_il2cpp_TypeInfo_var);
		StringComparer__ctor_m21494(__this, /*hidden argument*/NULL);
		bool L_0 = ___ignoreCase;
		__this->____ignoreCase_4 = L_0;
		return;
	}
}
// System.Int32 System.OrdinalComparer::Compare(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t OrdinalComparer_Compare_m21504 (OrdinalComparer_t4328 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->____ignoreCase_4);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = ___x;
		String_t* L_2 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_3 = String_CompareOrdinalCaseInsensitiveUnchecked_m17342(NULL /*static, unused*/, L_1, 0, ((int32_t)2147483647), L_2, 0, ((int32_t)2147483647), /*hidden argument*/NULL);
		return L_3;
	}

IL_001c:
	{
		String_t* L_4 = ___x;
		String_t* L_5 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_6 = String_CompareOrdinalUnchecked_m17341(NULL /*static, unused*/, L_4, 0, ((int32_t)2147483647), L_5, 0, ((int32_t)2147483647), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean System.OrdinalComparer::Equals(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool OrdinalComparer_Equals_m21505 (OrdinalComparer_t4328 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->____ignoreCase_4);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = ___x;
		String_t* L_2 = ___y;
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(10 /* System.Int32 System.OrdinalComparer::Compare(System.String,System.String) */, __this, L_1, L_2);
		return ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0014:
	{
		String_t* L_4 = ___x;
		String_t* L_5 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m2344(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int32 System.OrdinalComparer::GetHashCode(System.String)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" int32_t OrdinalComparer_GetHashCode_m21506 (OrdinalComparer_t4328 * __this, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___s;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral4255, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = (__this->____ignoreCase_4);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3 = ___s;
		NullCheck(L_3);
		int32_t L_4 = String_GetCaseInsensitiveHashCode_m17372(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001d:
	{
		String_t* L_5 = ___s;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_5);
		return L_6;
	}
}
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
#ifndef _MSC_VER
#else
#endif
// System.StringComparison
#include "mscorlib_System_StringComparisonMethodDeclarations.h"



// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptions.h"
#ifndef _MSC_VER
#else
#endif
// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptionsMethodDeclarations.h"



// System.SystemException
#include "mscorlib_System_SystemException.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.SystemException::.ctor()
extern "C" void SystemException__ctor_m11561 (SystemException_t2475 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5612, /*hidden argument*/NULL);
		Exception__ctor_m3150(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233087), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.SystemException::.ctor(System.String)
extern "C" void SystemException__ctor_m11567 (SystemException_t2475 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m3150(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233087), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SystemException__ctor_m11563 (SystemException_t2475 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		Exception__ctor_m6689(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern "C" void SystemException__ctor_m11562 (SystemException_t2475 * __this, String_t* ___message, Exception_t468 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t468 * L_1 = ___innerException;
		Exception__ctor_m7433(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233087), /*hidden argument*/NULL);
		return;
	}
}
// System.ThreadStaticAttribute
#include "mscorlib_System_ThreadStaticAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.ThreadStaticAttribute
#include "mscorlib_System_ThreadStaticAttributeMethodDeclarations.h"



// System.Void System.ThreadStaticAttribute::.ctor()
extern "C" void ThreadStaticAttribute__ctor_m7733 (ThreadStaticAttribute_t1694 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3240(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
#ifndef _MSC_VER
#else
#endif
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2.h"
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2MethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C" void TimeSpan__ctor_m12197 (TimeSpan_t2672 * __this, int64_t ___ticks, const MethodInfo* method)
{
	{
		int64_t L_0 = ___ticks;
		__this->____ticks_8 = L_0;
		return;
	}
}
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern TypeInfo* TimeSpan_t2672_il2cpp_TypeInfo_var;
extern "C" void TimeSpan__ctor_m14691 (TimeSpan_t2672 * __this, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t2672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6898);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___hours;
		int32_t L_1 = ___minutes;
		int32_t L_2 = ___seconds;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t2672_il2cpp_TypeInfo_var);
		int64_t L_3 = TimeSpan_CalculateTicks_m21509(NULL /*static, unused*/, 0, L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		__this->____ticks_8 = L_3;
		return;
	}
}
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* TimeSpan_t2672_il2cpp_TypeInfo_var;
extern "C" void TimeSpan__ctor_m21507 (TimeSpan_t2672 * __this, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t2672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6898);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___days;
		int32_t L_1 = ___hours;
		int32_t L_2 = ___minutes;
		int32_t L_3 = ___seconds;
		int32_t L_4 = ___milliseconds;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t2672_il2cpp_TypeInfo_var);
		int64_t L_5 = TimeSpan_CalculateTicks_m21509(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->____ticks_8 = L_5;
		return;
	}
}
// System.Void System.TimeSpan::.cctor()
extern TypeInfo* TimeSpan_t2672_il2cpp_TypeInfo_var;
extern TypeInfo* MonoTouchAOTHelper_t4315_il2cpp_TypeInfo_var;
extern TypeInfo* GenericComparer_1_t4398_il2cpp_TypeInfo_var;
extern TypeInfo* GenericEqualityComparer_1_t4399_il2cpp_TypeInfo_var;
extern const MethodInfo* GenericComparer_1__ctor_m21648_MethodInfo_var;
extern const MethodInfo* GenericEqualityComparer_1__ctor_m21649_MethodInfo_var;
extern "C" void TimeSpan__cctor_m21508 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t2672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6898);
		MonoTouchAOTHelper_t4315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8491);
		GenericComparer_1_t4398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8517);
		GenericEqualityComparer_1_t4399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8518);
		GenericComparer_1__ctor_m21648_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485205);
		GenericEqualityComparer_1__ctor_m21649_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485206);
		s_Il2CppMethodIntialized = true;
	}
	GenericComparer_1_t4398 * V_0 = {0};
	GenericEqualityComparer_1_t4399 * V_1 = {0};
	{
		TimeSpan_t2672  L_0 = {0};
		TimeSpan__ctor_m12197(&L_0, ((int64_t)std::numeric_limits<int64_t>::max()), /*hidden argument*/NULL);
		((TimeSpan_t2672_StaticFields*)TimeSpan_t2672_il2cpp_TypeInfo_var->static_fields)->___MaxValue_5 = L_0;
		TimeSpan_t2672  L_1 = {0};
		TimeSpan__ctor_m12197(&L_1, ((int64_t)std::numeric_limits<int64_t>::min()), /*hidden argument*/NULL);
		((TimeSpan_t2672_StaticFields*)TimeSpan_t2672_il2cpp_TypeInfo_var->static_fields)->___MinValue_6 = L_1;
		TimeSpan_t2672  L_2 = {0};
		TimeSpan__ctor_m12197(&L_2, (((int64_t)0)), /*hidden argument*/NULL);
		((TimeSpan_t2672_StaticFields*)TimeSpan_t2672_il2cpp_TypeInfo_var->static_fields)->___Zero_7 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(MonoTouchAOTHelper_t4315_il2cpp_TypeInfo_var);
		bool L_3 = ((MonoTouchAOTHelper_t4315_StaticFields*)MonoTouchAOTHelper_t4315_il2cpp_TypeInfo_var->static_fields)->___FalseFlag_0;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		GenericComparer_1_t4398 * L_4 = (GenericComparer_1_t4398 *)il2cpp_codegen_object_new (GenericComparer_1_t4398_il2cpp_TypeInfo_var);
		GenericComparer_1__ctor_m21648(L_4, /*hidden argument*/GenericComparer_1__ctor_m21648_MethodInfo_var);
		V_0 = L_4;
		GenericEqualityComparer_1_t4399 * L_5 = (GenericEqualityComparer_1_t4399 *)il2cpp_codegen_object_new (GenericEqualityComparer_1_t4399_il2cpp_TypeInfo_var);
		GenericEqualityComparer_1__ctor_m21649(L_5, /*hidden argument*/GenericEqualityComparer_1__ctor_m21649_MethodInfo_var);
		V_1 = L_5;
	}

IL_0045:
	{
		return;
	}
}
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" int64_t TimeSpan_CalculateTicks_m21509 (Object_t * __this /* static, unused */, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	bool V_3 = false;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	{
		int32_t L_0 = ___hours;
		V_0 = ((int32_t)((int32_t)L_0*(int32_t)((int32_t)3600)));
		int32_t L_1 = ___minutes;
		V_1 = ((int32_t)((int32_t)L_1*(int32_t)((int32_t)60)));
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ___seconds;
		int32_t L_5 = ___milliseconds;
		V_2 = ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2+(int32_t)L_3))+(int32_t)L_4))))*(int64_t)(((int64_t)((int32_t)1000)))))+(int64_t)(((int64_t)L_5))));
		int64_t L_6 = V_2;
		V_2 = ((int64_t)((int64_t)L_6*(int64_t)(((int64_t)((int32_t)10000)))));
		V_3 = 0;
		int32_t L_7 = ___days;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_8 = ___days;
		V_4 = ((int64_t)((int64_t)((int64_t)864000000000LL)*(int64_t)(((int64_t)L_8))));
		int64_t L_9 = V_2;
		if ((((int64_t)L_9) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0051;
		}
	}
	{
		int64_t L_10 = V_2;
		V_5 = L_10;
		int64_t L_11 = V_2;
		int64_t L_12 = V_4;
		V_2 = ((int64_t)((int64_t)L_11+(int64_t)L_12));
		int64_t L_13 = V_5;
		int64_t L_14 = V_2;
		V_3 = ((((int64_t)L_13) > ((int64_t)L_14))? 1 : 0);
		goto IL_005c;
	}

IL_0051:
	{
		int64_t L_15 = V_2;
		int64_t L_16 = V_4;
		V_2 = ((int64_t)((int64_t)L_15+(int64_t)L_16));
		int64_t L_17 = V_2;
		V_3 = ((((int64_t)L_17) < ((int64_t)(((int64_t)0))))? 1 : 0);
	}

IL_005c:
	{
		goto IL_0090;
	}

IL_005e:
	{
		int32_t L_18 = ___days;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_19 = ___days;
		V_6 = ((int64_t)((int64_t)((int64_t)864000000000LL)*(int64_t)(((int64_t)L_19))));
		int64_t L_20 = V_2;
		if ((((int64_t)L_20) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0082;
		}
	}
	{
		int64_t L_21 = V_2;
		int64_t L_22 = V_6;
		V_2 = ((int64_t)((int64_t)L_21+(int64_t)L_22));
		int64_t L_23 = V_2;
		V_3 = ((((int64_t)L_23) > ((int64_t)(((int64_t)0))))? 1 : 0);
		goto IL_0090;
	}

IL_0082:
	{
		int64_t L_24 = V_2;
		V_7 = L_24;
		int64_t L_25 = V_2;
		int64_t L_26 = V_6;
		V_2 = ((int64_t)((int64_t)L_25+(int64_t)L_26));
		int64_t L_27 = V_2;
		int64_t L_28 = V_7;
		V_3 = ((((int64_t)L_27) > ((int64_t)L_28))? 1 : 0);
	}

IL_0090:
	{
		bool L_29 = V_3;
		if (!L_29)
		{
			goto IL_00a3;
		}
	}
	{
		String_t* L_30 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5613, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_31 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_31, L_30, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_00a3:
	{
		int64_t L_32 = V_2;
		return L_32;
	}
}
// System.Int32 System.TimeSpan::get_Days()
extern "C" int32_t TimeSpan_get_Days_m21510 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_8);
		return (((int32_t)((int64_t)((int64_t)L_0/(int64_t)((int64_t)864000000000LL)))));
	}
}
// System.Int32 System.TimeSpan::get_Hours()
extern "C" int32_t TimeSpan_get_Hours_m21511 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_8);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)((int64_t)864000000000LL)))/(int64_t)((int64_t)36000000000LL)))));
	}
}
// System.Int32 System.TimeSpan::get_Milliseconds()
extern "C" int32_t TimeSpan_get_Milliseconds_m21512 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_8);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)(((int64_t)((int32_t)10000000)))))/(int64_t)(((int64_t)((int32_t)10000)))))));
	}
}
// System.Int32 System.TimeSpan::get_Minutes()
extern "C" int32_t TimeSpan_get_Minutes_m21513 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_8);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)((int64_t)36000000000LL)))/(int64_t)(((int64_t)((int32_t)600000000)))))));
	}
}
// System.Int32 System.TimeSpan::get_Seconds()
extern "C" int32_t TimeSpan_get_Seconds_m21514 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_8);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)(((int64_t)((int32_t)600000000)))))/(int64_t)(((int64_t)((int32_t)10000000)))))));
	}
}
// System.Int64 System.TimeSpan::get_Ticks()
extern "C" int64_t TimeSpan_get_Ticks_m14694 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_8);
		return L_0;
	}
}
// System.Double System.TimeSpan::get_TotalDays()
extern "C" double TimeSpan_get_TotalDays_m21515 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_8);
		return ((double)((double)(((double)L_0))/(double)(864000000000.0)));
	}
}
// System.Double System.TimeSpan::get_TotalHours()
extern "C" double TimeSpan_get_TotalHours_m21516 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_8);
		return ((double)((double)(((double)L_0))/(double)(36000000000.0)));
	}
}
// System.Double System.TimeSpan::get_TotalMilliseconds()
extern "C" double TimeSpan_get_TotalMilliseconds_m16773 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_8);
		return ((double)((double)(((double)L_0))/(double)(10000.0)));
	}
}
// System.Double System.TimeSpan::get_TotalMinutes()
extern "C" double TimeSpan_get_TotalMinutes_m21517 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_8);
		return ((double)((double)(((double)L_0))/(double)(600000000.0)));
	}
}
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C" double TimeSpan_get_TotalSeconds_m12198 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->____ticks_8);
		return ((double)((double)(((double)L_0))/(double)(10000000.0)));
	}
}
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
extern TypeInfo* OverflowException_t4322_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t2672  TimeSpan_Add_m21518 (TimeSpan_t2672 * __this, TimeSpan_t2672  ___ts, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OverflowException_t4322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8149);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t2672  V_0 = {0};
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
			int64_t L_0 = (__this->____ticks_8);
			int64_t L_1 = TimeSpan_get_Ticks_m14694((&___ts), /*hidden argument*/NULL);
			if (((int64_t)L_1 >= 0 && (int64_t)L_0 > (int64_t)9223372036854775807LL - (int64_t)L_1) || ((int64_t)L_1 < 0 && (int64_t)L_0 < (int64_t)(int64_t)-9223372036854775808LL - (int64_t)L_1))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			TimeSpan_t2672  L_2 = {0};
			TimeSpan__ctor_m12197(&L_2, ((int64_t)((int64_t)L_0+(int64_t)L_1)), /*hidden argument*/NULL);
			V_0 = L_2;
			goto IL_002b;
		}

IL_0016:
		{
			goto IL_002b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (OverflowException_t4322_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.OverflowException)
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5614, /*hidden argument*/NULL);
		OverflowException_t4322 * L_4 = (OverflowException_t4322 *)il2cpp_codegen_object_new (OverflowException_t4322_il2cpp_TypeInfo_var);
		OverflowException__ctor_m21478(L_4, L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		TimeSpan_t2672  L_5 = V_0;
		return L_5;
	}
}
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
extern "C" int32_t TimeSpan_Compare_m21519 (Object_t * __this /* static, unused */, TimeSpan_t2672  ___t1, TimeSpan_t2672  ___t2, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&___t1)->____ticks_8);
		int64_t L_1 = ((&___t2)->____ticks_8);
		if ((((int64_t)L_0) >= ((int64_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}

IL_0012:
	{
		int64_t L_2 = ((&___t1)->____ticks_8);
		int64_t L_3 = ((&___t2)->____ticks_8);
		if ((((int64_t)L_2) <= ((int64_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		return 0;
	}
}
// System.Int32 System.TimeSpan::CompareTo(System.Object)
extern TypeInfo* TimeSpan_t2672_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" int32_t TimeSpan_CompareTo_m21520 (TimeSpan_t2672 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t2672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6898);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		Object_t * L_1 = ___value;
		if (((Object_t *)IsInst(L_1, TimeSpan_t2672_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5615, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_3 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_3, L_2, (String_t*) &_stringLiteral1338, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		Object_t * L_4 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t2672_il2cpp_TypeInfo_var);
		int32_t L_5 = TimeSpan_Compare_m21519(NULL /*static, unused*/, (*(TimeSpan_t2672 *)__this), ((*(TimeSpan_t2672 *)((TimeSpan_t2672 *)UnBox (L_4, TimeSpan_t2672_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
extern TypeInfo* TimeSpan_t2672_il2cpp_TypeInfo_var;
extern "C" int32_t TimeSpan_CompareTo_m21521 (TimeSpan_t2672 * __this, TimeSpan_t2672  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t2672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6898);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t2672  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t2672_il2cpp_TypeInfo_var);
		int32_t L_1 = TimeSpan_Compare_m21519(NULL /*static, unused*/, (*(TimeSpan_t2672 *)__this), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
extern "C" bool TimeSpan_Equals_m21522 (TimeSpan_t2672 * __this, TimeSpan_t2672  ___obj, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&___obj)->____ticks_8);
		int64_t L_1 = (__this->____ticks_8);
		return ((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
// System.TimeSpan System.TimeSpan::Duration()
extern TypeInfo* OverflowException_t4322_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t2672  TimeSpan_Duration_m21523 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OverflowException_t4322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8149);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t2672  V_0 = {0};
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
			int64_t L_0 = (__this->____ticks_8);
			int64_t L_1 = llabs(L_0);
			TimeSpan_t2672  L_2 = {0};
			TimeSpan__ctor_m12197(&L_2, L_1, /*hidden argument*/NULL);
			V_0 = L_2;
			goto IL_0028;
		}

IL_0013:
		{
			goto IL_0028;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (OverflowException_t4322_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0015;
		throw e;
	}

CATCH_0015:
	{ // begin catch(System.OverflowException)
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5616, /*hidden argument*/NULL);
		OverflowException_t4322 * L_4 = (OverflowException_t4322 *)il2cpp_codegen_object_new (OverflowException_t4322_il2cpp_TypeInfo_var);
		OverflowException__ctor_m21478(L_4, L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_0028;
	} // end catch (depth: 1)

IL_0028:
	{
		TimeSpan_t2672  L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.TimeSpan::Equals(System.Object)
extern TypeInfo* TimeSpan_t2672_il2cpp_TypeInfo_var;
extern "C" bool TimeSpan_Equals_m21524 (TimeSpan_t2672 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t2672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6898);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t2672  V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (((Object_t *)IsInst(L_0, TimeSpan_t2672_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int64_t L_1 = (__this->____ticks_8);
		Object_t * L_2 = ___value;
		V_0 = ((*(TimeSpan_t2672 *)((TimeSpan_t2672 *)UnBox (L_2, TimeSpan_t2672_il2cpp_TypeInfo_var))));
		int64_t L_3 = ((&V_0)->____ticks_8);
		return ((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
extern TypeInfo* TimeSpan_t2672_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t2672  TimeSpan_FromMinutes_m21525 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t2672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6898);
		s_Il2CppMethodIntialized = true;
	}
	{
		double L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t2672_il2cpp_TypeInfo_var);
		TimeSpan_t2672  L_1 = TimeSpan_From_m21526(NULL /*static, unused*/, L_0, (((int64_t)((int32_t)600000000))), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t2672_il2cpp_TypeInfo_var;
extern TypeInfo* OverflowException_t4322_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t2672  TimeSpan_From_m21526 (Object_t * __this /* static, unused */, double ___value, int64_t ___tickMultiplicator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		TimeSpan_t2672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6898);
		OverflowException_t4322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8149);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	TimeSpan_t2672  V_1 = {0};
	TimeSpan_t2672  V_2 = {0};
	TimeSpan_t2672  V_3 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		double L_0 = ___value;
		bool L_1 = Double_IsNaN_m11549(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5617, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_3 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6568(L_3, L_2, (String_t*) &_stringLiteral1338, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		double L_4 = ___value;
		bool L_5 = Double_IsNegativeInfinity_m11547(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		double L_6 = ___value;
		bool L_7 = Double_IsPositiveInfinity_m11548(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		double L_8 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t2672_il2cpp_TypeInfo_var);
		TimeSpan_t2672  L_9 = ((TimeSpan_t2672_StaticFields*)TimeSpan_t2672_il2cpp_TypeInfo_var->static_fields)->___MinValue_6;
		V_1 = L_9;
		int64_t L_10 = TimeSpan_get_Ticks_m14694((&V_1), /*hidden argument*/NULL);
		if ((((double)L_8) < ((double)(((double)L_10)))))
		{
			goto IL_004f;
		}
	}
	{
		double L_11 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t2672_il2cpp_TypeInfo_var);
		TimeSpan_t2672  L_12 = ((TimeSpan_t2672_StaticFields*)TimeSpan_t2672_il2cpp_TypeInfo_var->static_fields)->___MaxValue_5;
		V_2 = L_12;
		int64_t L_13 = TimeSpan_get_Ticks_m14694((&V_2), /*hidden argument*/NULL);
		if ((!(((double)L_11) > ((double)(((double)L_13))))))
		{
			goto IL_005f;
		}
	}

IL_004f:
	{
		String_t* L_14 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5618, /*hidden argument*/NULL);
		OverflowException_t4322 * L_15 = (OverflowException_t4322 *)il2cpp_codegen_object_new (OverflowException_t4322_il2cpp_TypeInfo_var);
		OverflowException__ctor_m21478(L_15, L_14, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_005f:
	try
	{ // begin try (depth: 1)
		{
			double L_16 = ___value;
			int64_t L_17 = ___tickMultiplicator;
			___value = ((double)((double)L_16*(double)(((double)((int64_t)((int64_t)L_17/(int64_t)(((int64_t)((int32_t)10000)))))))));
			double L_18 = ___value;
			double L_19 = round(L_18);
			if (L_19 > (double)(std::numeric_limits<int64_t>::max())) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			V_0 = (((int64_t)L_19));
			int64_t L_20 = V_0;
			if (il2cpp_codegen_check_mul_overflow_i64((int64_t)L_20, (int64_t)(((int64_t)((int32_t)10000))), (int64_t)-9223372036854775808LL, (int64_t)9223372036854775807LL))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			TimeSpan_t2672  L_21 = {0};
			TimeSpan__ctor_m12197(&L_21, ((int64_t)((int64_t)L_20*(int64_t)(((int64_t)((int32_t)10000))))), /*hidden argument*/NULL);
			V_3 = L_21;
			goto IL_009b;
		}

IL_0086:
		{
			goto IL_009b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (OverflowException_t4322_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0088;
		throw e;
	}

CATCH_0088:
	{ // begin catch(System.OverflowException)
		String_t* L_22 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5614, /*hidden argument*/NULL);
		OverflowException_t4322 * L_23 = (OverflowException_t4322 *)il2cpp_codegen_object_new (OverflowException_t4322_il2cpp_TypeInfo_var);
		OverflowException__ctor_m21478(L_23, L_22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
		goto IL_009b;
	} // end catch (depth: 1)

IL_009b:
	{
		TimeSpan_t2672  L_24 = V_3;
		return L_24;
	}
}
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
extern "C" TimeSpan_t2672  TimeSpan_FromTicks_m16772 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		TimeSpan_t2672  L_1 = {0};
		TimeSpan__ctor_m12197(&L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.TimeSpan::GetHashCode()
extern "C" int32_t TimeSpan_GetHashCode_m14697 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	{
		int64_t* L_0 = &(__this->____ticks_8);
		int32_t L_1 = Int64_GetHashCode_m17119(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.TimeSpan System.TimeSpan::Negate()
extern TypeInfo* TimeSpan_t2672_il2cpp_TypeInfo_var;
extern TypeInfo* OverflowException_t4322_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t2672  TimeSpan_Negate_m21527 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t2672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6898);
		OverflowException_t4322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8149);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t2672  V_0 = {0};
	{
		int64_t L_0 = (__this->____ticks_8);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t2672_il2cpp_TypeInfo_var);
		TimeSpan_t2672  L_1 = ((TimeSpan_t2672_StaticFields*)TimeSpan_t2672_il2cpp_TypeInfo_var->static_fields)->___MinValue_6;
		V_0 = L_1;
		int64_t L_2 = ((&V_0)->____ticks_8);
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5619, /*hidden argument*/NULL);
		OverflowException_t4322 * L_4 = (OverflowException_t4322 *)il2cpp_codegen_object_new (OverflowException_t4322_il2cpp_TypeInfo_var);
		OverflowException__ctor_m21478(L_4, L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0025:
	{
		int64_t L_5 = (__this->____ticks_8);
		TimeSpan_t2672  L_6 = {0};
		TimeSpan__ctor_m12197(&L_6, ((-L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
extern TypeInfo* OverflowException_t4322_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t2672  TimeSpan_Subtract_m21528 (TimeSpan_t2672 * __this, TimeSpan_t2672  ___ts, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OverflowException_t4322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8149);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t2672  V_0 = {0};
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
			int64_t L_0 = (__this->____ticks_8);
			int64_t L_1 = TimeSpan_get_Ticks_m14694((&___ts), /*hidden argument*/NULL);
			if (((int64_t)L_1 >= 0 && (int64_t)L_0 < (int64_t)-9223372036854775808LL + (int64_t)L_1) || ((int64_t)L_1 < 0 && (int64_t)L_0 > (int64_t)9223372036854775807LL + (int64_t)L_1))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			TimeSpan_t2672  L_2 = {0};
			TimeSpan__ctor_m12197(&L_2, ((int64_t)((int64_t)L_0-(int64_t)L_1)), /*hidden argument*/NULL);
			V_0 = L_2;
			goto IL_002b;
		}

IL_0016:
		{
			goto IL_002b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (OverflowException_t4322_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.OverflowException)
		String_t* L_3 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5614, /*hidden argument*/NULL);
		OverflowException_t4322 * L_4 = (OverflowException_t4322 *)il2cpp_codegen_object_new (OverflowException_t4322_il2cpp_TypeInfo_var);
		OverflowException__ctor_m21478(L_4, L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		TimeSpan_t2672  L_5 = V_0;
		return L_5;
	}
}
// System.String System.TimeSpan::ToString()
extern TypeInfo* StringBuilder_t619_il2cpp_TypeInfo_var;
extern "C" String_t* TimeSpan_ToString_m21529 (TimeSpan_t2672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t619 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		StringBuilder_t619 * L_0 = (StringBuilder_t619 *)il2cpp_codegen_object_new (StringBuilder_t619_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m6588(L_0, ((int32_t)14), /*hidden argument*/NULL);
		V_0 = L_0;
		int64_t L_1 = (__this->____ticks_8);
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_001b;
		}
	}
	{
		StringBuilder_t619 * L_2 = V_0;
		NullCheck(L_2);
		StringBuilder_Append_m5401(L_2, ((int32_t)45), /*hidden argument*/NULL);
	}

IL_001b:
	{
		int32_t L_3 = TimeSpan_get_Days_m21510(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		StringBuilder_t619 * L_4 = V_0;
		int32_t L_5 = TimeSpan_get_Days_m21510(__this, /*hidden argument*/NULL);
		int32_t L_6 = abs(L_5);
		NullCheck(L_4);
		StringBuilder_Append_m11518(L_4, L_6, /*hidden argument*/NULL);
		StringBuilder_t619 * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_m5401(L_7, ((int32_t)46), /*hidden argument*/NULL);
	}

IL_003e:
	{
		StringBuilder_t619 * L_8 = V_0;
		int32_t L_9 = TimeSpan_get_Hours_m21511(__this, /*hidden argument*/NULL);
		int32_t L_10 = abs(L_9);
		V_2 = L_10;
		String_t* L_11 = Int32_ToString_m16801((&V_2), (String_t*) &_stringLiteral5620, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringBuilder_Append_m2790(L_8, L_11, /*hidden argument*/NULL);
		StringBuilder_t619 * L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_Append_m5401(L_12, ((int32_t)58), /*hidden argument*/NULL);
		StringBuilder_t619 * L_13 = V_0;
		int32_t L_14 = TimeSpan_get_Minutes_m21513(__this, /*hidden argument*/NULL);
		int32_t L_15 = abs(L_14);
		V_3 = L_15;
		String_t* L_16 = Int32_ToString_m16801((&V_3), (String_t*) &_stringLiteral5620, /*hidden argument*/NULL);
		NullCheck(L_13);
		StringBuilder_Append_m2790(L_13, L_16, /*hidden argument*/NULL);
		StringBuilder_t619 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m5401(L_17, ((int32_t)58), /*hidden argument*/NULL);
		StringBuilder_t619 * L_18 = V_0;
		int32_t L_19 = TimeSpan_get_Seconds_m21514(__this, /*hidden argument*/NULL);
		int32_t L_20 = abs(L_19);
		V_4 = L_20;
		String_t* L_21 = Int32_ToString_m16801((&V_4), (String_t*) &_stringLiteral5620, /*hidden argument*/NULL);
		NullCheck(L_18);
		StringBuilder_Append_m2790(L_18, L_21, /*hidden argument*/NULL);
		int64_t L_22 = (__this->____ticks_8);
		int64_t L_23 = llabs(((int64_t)((int64_t)L_22%(int64_t)(((int64_t)((int32_t)10000000))))));
		V_1 = (((int32_t)L_23));
		int32_t L_24 = V_1;
		if (!L_24)
		{
			goto IL_00e1;
		}
	}
	{
		StringBuilder_t619 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m5401(L_25, ((int32_t)46), /*hidden argument*/NULL);
		StringBuilder_t619 * L_26 = V_0;
		String_t* L_27 = Int32_ToString_m16801((&V_1), (String_t*) &_stringLiteral5621, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m2790(L_26, L_27, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		StringBuilder_t619 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_28);
		return L_29;
	}
}
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
extern "C" TimeSpan_t2672  TimeSpan_op_Addition_m14698 (Object_t * __this /* static, unused */, TimeSpan_t2672  ___t1, TimeSpan_t2672  ___t2, const MethodInfo* method)
{
	{
		TimeSpan_t2672  L_0 = ___t2;
		TimeSpan_t2672  L_1 = TimeSpan_Add_m21518((&___t1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_Equality_m14695 (Object_t * __this /* static, unused */, TimeSpan_t2672  ___t1, TimeSpan_t2672  ___t2, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&___t1)->____ticks_8);
		int64_t L_1 = ((&___t2)->____ticks_8);
		return ((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_GreaterThan_m14692 (Object_t * __this /* static, unused */, TimeSpan_t2672  ___t1, TimeSpan_t2672  ___t2, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&___t1)->____ticks_8);
		int64_t L_1 = ((&___t2)->____ticks_8);
		return ((((int64_t)L_0) > ((int64_t)L_1))? 1 : 0);
	}
}
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_GreaterThanOrEqual_m21530 (Object_t * __this /* static, unused */, TimeSpan_t2672  ___t1, TimeSpan_t2672  ___t2, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&___t1)->____ticks_8);
		int64_t L_1 = ((&___t2)->____ticks_8);
		return ((((int32_t)((((int64_t)L_0) < ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_Inequality_m14700 (Object_t * __this /* static, unused */, TimeSpan_t2672  ___t1, TimeSpan_t2672  ___t2, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&___t1)->____ticks_8);
		int64_t L_1 = ((&___t2)->____ticks_8);
		return ((((int32_t)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_LessThan_m14693 (Object_t * __this /* static, unused */, TimeSpan_t2672  ___t1, TimeSpan_t2672  ___t2, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&___t1)->____ticks_8);
		int64_t L_1 = ((&___t2)->____ticks_8);
		return ((((int64_t)L_0) < ((int64_t)L_1))? 1 : 0);
	}
}
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_LessThanOrEqual_m21531 (Object_t * __this /* static, unused */, TimeSpan_t2672  ___t1, TimeSpan_t2672  ___t2, const MethodInfo* method)
{
	{
		int64_t L_0 = ((&___t1)->____ticks_8);
		int64_t L_1 = ((&___t2)->____ticks_8);
		return ((((int32_t)((((int64_t)L_0) > ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
extern "C" TimeSpan_t2672  TimeSpan_op_Subtraction_m14710 (Object_t * __this /* static, unused */, TimeSpan_t2672  ___t1, TimeSpan_t2672  ___t2, const MethodInfo* method)
{
	{
		TimeSpan_t2672  L_0 = ___t2;
		TimeSpan_t2672  L_1 = TimeSpan_Subtract_m21528((&___t1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.TimeZone
#include "mscorlib_System_TimeZone.h"
#ifndef _MSC_VER
#else
#endif
// System.TimeZone
#include "mscorlib_System_TimeZoneMethodDeclarations.h"

// System.CurrentSystemTimeZone
#include "mscorlib_System_CurrentSystemTimeZone.h"
// System.Globalization.DaylightTime
#include "mscorlib_System_Globalization_DaylightTime.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTimeKind
#include "mscorlib_System_DateTimeKind.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.CurrentSystemTimeZone
#include "mscorlib_System_CurrentSystemTimeZoneMethodDeclarations.h"
// System.Globalization.DaylightTime
#include "mscorlib_System_Globalization_DaylightTimeMethodDeclarations.h"


// System.Void System.TimeZone::.ctor()
extern "C" void TimeZone__ctor_m21532 (TimeZone_t3768 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TimeZone::.cctor()
extern TypeInfo* DateTime_t1219_il2cpp_TypeInfo_var;
extern TypeInfo* CurrentSystemTimeZone_t4331_il2cpp_TypeInfo_var;
extern TypeInfo* TimeZone_t3768_il2cpp_TypeInfo_var;
extern "C" void TimeZone__cctor_m21533 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2630);
		CurrentSystemTimeZone_t4331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8519);
		TimeZone_t3768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7442);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		int64_t L_0 = DateTime_GetNow_m21100(NULL /*static, unused*/, /*hidden argument*/NULL);
		CurrentSystemTimeZone_t4331 * L_1 = (CurrentSystemTimeZone_t4331 *)il2cpp_codegen_object_new (CurrentSystemTimeZone_t4331_il2cpp_TypeInfo_var);
		CurrentSystemTimeZone__ctor_m21541(L_1, L_0, /*hidden argument*/NULL);
		((TimeZone_t3768_StaticFields*)TimeZone_t3768_il2cpp_TypeInfo_var->static_fields)->___currentTimeZone_0 = L_1;
		return;
	}
}
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern TypeInfo* TimeZone_t3768_il2cpp_TypeInfo_var;
extern "C" TimeZone_t3768 * TimeZone_get_CurrentTimeZone_m16821 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeZone_t3768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7442);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZone_t3768_il2cpp_TypeInfo_var);
		TimeZone_t3768 * L_0 = ((TimeZone_t3768_StaticFields*)TimeZone_t3768_il2cpp_TypeInfo_var->static_fields)->___currentTimeZone_0;
		return L_0;
	}
}
// System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32)
// System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime)
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern TypeInfo* TimeZone_t3768_il2cpp_TypeInfo_var;
extern "C" bool TimeZone_IsDaylightSavingTime_m21534 (TimeZone_t3768 * __this, DateTime_t1219  ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeZone_t3768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7442);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t1219  L_0 = ___time;
		int32_t L_1 = DateTime_get_Year_m12187((&___time), /*hidden argument*/NULL);
		DaylightTime_t3958 * L_2 = (DaylightTime_t3958 *)VirtFuncInvoker1< DaylightTime_t3958 *, int32_t >::Invoke(4 /* System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32) */, __this, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(TimeZone_t3768_il2cpp_TypeInfo_var);
		bool L_3 = TimeZone_IsDaylightSavingTime_m21535(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" bool TimeZone_IsDaylightSavingTime_m21535 (Object_t * __this /* static, unused */, DateTime_t1219  ___time, DaylightTime_t3958 * ___daylightTimes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t1219  V_0 = {0};
	DateTime_t1219  V_1 = {0};
	DateTime_t1219  V_2 = {0};
	DateTime_t1219  V_3 = {0};
	DateTime_t1219  V_4 = {0};
	DateTime_t1219  V_5 = {0};
	DateTime_t1219  V_6 = {0};
	DateTime_t1219  V_7 = {0};
	DateTime_t1219  V_8 = {0};
	DateTime_t1219  V_9 = {0};
	{
		DaylightTime_t3958 * L_0 = ___daylightTimes;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral5622, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		DaylightTime_t3958 * L_2 = ___daylightTimes;
		NullCheck(L_2);
		DateTime_t1219  L_3 = DaylightTime_get_Start_m18726(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int64_t L_4 = DateTime_get_Ticks_m6662((&V_0), /*hidden argument*/NULL);
		DaylightTime_t3958 * L_5 = ___daylightTimes;
		NullCheck(L_5);
		DateTime_t1219  L_6 = DaylightTime_get_End_m18727(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		int64_t L_7 = DateTime_get_Ticks_m6662((&V_1), /*hidden argument*/NULL);
		if ((!(((uint64_t)L_4) == ((uint64_t)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		return 0;
	}

IL_002e:
	{
		DaylightTime_t3958 * L_8 = ___daylightTimes;
		NullCheck(L_8);
		DateTime_t1219  L_9 = DaylightTime_get_Start_m18726(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		int64_t L_10 = DateTime_get_Ticks_m6662((&V_2), /*hidden argument*/NULL);
		DaylightTime_t3958 * L_11 = ___daylightTimes;
		NullCheck(L_11);
		DateTime_t1219  L_12 = DaylightTime_get_End_m18727(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		int64_t L_13 = DateTime_get_Ticks_m6662((&V_3), /*hidden argument*/NULL);
		if ((((int64_t)L_10) >= ((int64_t)L_13)))
		{
			goto IL_0080;
		}
	}
	{
		DaylightTime_t3958 * L_14 = ___daylightTimes;
		NullCheck(L_14);
		DateTime_t1219  L_15 = DaylightTime_get_Start_m18726(L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		int64_t L_16 = DateTime_get_Ticks_m6662((&V_4), /*hidden argument*/NULL);
		int64_t L_17 = DateTime_get_Ticks_m6662((&___time), /*hidden argument*/NULL);
		if ((((int64_t)L_16) >= ((int64_t)L_17)))
		{
			goto IL_007e;
		}
	}
	{
		DaylightTime_t3958 * L_18 = ___daylightTimes;
		NullCheck(L_18);
		DateTime_t1219  L_19 = DaylightTime_get_End_m18727(L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		int64_t L_20 = DateTime_get_Ticks_m6662((&V_5), /*hidden argument*/NULL);
		int64_t L_21 = DateTime_get_Ticks_m6662((&___time), /*hidden argument*/NULL);
		if ((((int64_t)L_20) <= ((int64_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		return 1;
	}

IL_007e:
	{
		goto IL_00e2;
	}

IL_0080:
	{
		int32_t L_22 = DateTime_get_Year_m12187((&___time), /*hidden argument*/NULL);
		DaylightTime_t3958 * L_23 = ___daylightTimes;
		NullCheck(L_23);
		DateTime_t1219  L_24 = DaylightTime_get_Start_m18726(L_23, /*hidden argument*/NULL);
		V_6 = L_24;
		int32_t L_25 = DateTime_get_Year_m12187((&V_6), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)L_25))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_26 = DateTime_get_Year_m12187((&___time), /*hidden argument*/NULL);
		DaylightTime_t3958 * L_27 = ___daylightTimes;
		NullCheck(L_27);
		DateTime_t1219  L_28 = DaylightTime_get_End_m18727(L_27, /*hidden argument*/NULL);
		V_7 = L_28;
		int32_t L_29 = DateTime_get_Year_m12187((&V_7), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)L_29))))
		{
			goto IL_00e2;
		}
	}
	{
		int64_t L_30 = DateTime_get_Ticks_m6662((&___time), /*hidden argument*/NULL);
		DaylightTime_t3958 * L_31 = ___daylightTimes;
		NullCheck(L_31);
		DateTime_t1219  L_32 = DaylightTime_get_End_m18727(L_31, /*hidden argument*/NULL);
		V_8 = L_32;
		int64_t L_33 = DateTime_get_Ticks_m6662((&V_8), /*hidden argument*/NULL);
		if ((((int64_t)L_30) < ((int64_t)L_33)))
		{
			goto IL_00e0;
		}
	}
	{
		int64_t L_34 = DateTime_get_Ticks_m6662((&___time), /*hidden argument*/NULL);
		DaylightTime_t3958 * L_35 = ___daylightTimes;
		NullCheck(L_35);
		DateTime_t1219  L_36 = DaylightTime_get_Start_m18726(L_35, /*hidden argument*/NULL);
		V_9 = L_36;
		int64_t L_37 = DateTime_get_Ticks_m6662((&V_9), /*hidden argument*/NULL);
		if ((((int64_t)L_34) <= ((int64_t)L_37)))
		{
			goto IL_00e2;
		}
	}

IL_00e0:
	{
		return 1;
	}

IL_00e2:
	{
		return 0;
	}
}
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern TypeInfo* DateTime_t1219_il2cpp_TypeInfo_var;
extern "C" DateTime_t1219  TimeZone_ToLocalTime_m21536 (TimeZone_t3768 * __this, DateTime_t1219  ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2630);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t2672  V_0 = {0};
	DateTime_t1219  V_1 = {0};
	DaylightTime_t3958 * V_2 = {0};
	TimeSpan_t2672  V_3 = {0};
	DateTime_t1219  V_4 = {0};
	TimeSpan_t2672  V_5 = {0};
	DateTime_t1219  V_6 = {0};
	{
		int32_t L_0 = DateTime_get_Kind_m14690((&___time), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000c;
		}
	}
	{
		DateTime_t1219  L_1 = ___time;
		return L_1;
	}

IL_000c:
	{
		DateTime_t1219  L_2 = ___time;
		TimeSpan_t2672  L_3 = (TimeSpan_t2672 )VirtFuncInvoker1< TimeSpan_t2672 , DateTime_t1219  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_2);
		V_0 = L_3;
		int64_t L_4 = TimeSpan_get_Ticks_m14694((&V_0), /*hidden argument*/NULL);
		if ((((int64_t)L_4) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		DateTime_t1219  L_5 = ((DateTime_t1219_StaticFields*)DateTime_t1219_il2cpp_TypeInfo_var->static_fields)->___MaxValue_12;
		TimeSpan_t2672  L_6 = V_0;
		DateTime_t1219  L_7 = DateTime_op_Subtraction_m14708(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		DateTime_t1219  L_8 = ___time;
		bool L_9 = DateTime_op_LessThan_m13768(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		DateTime_t1219  L_10 = ((DateTime_t1219_StaticFields*)DateTime_t1219_il2cpp_TypeInfo_var->static_fields)->___MaxValue_12;
		DateTime_t1219  L_11 = DateTime_SpecifyKind_m16820(NULL /*static, unused*/, L_10, 2, /*hidden argument*/NULL);
		return L_11;
	}

IL_003e:
	{
		goto IL_0076;
	}

IL_0040:
	{
		int64_t L_12 = TimeSpan_get_Ticks_m14694((&V_0), /*hidden argument*/NULL);
		if ((((int64_t)L_12) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0076;
		}
	}
	{
		int64_t L_13 = DateTime_get_Ticks_m6662((&___time), /*hidden argument*/NULL);
		int64_t L_14 = TimeSpan_get_Ticks_m14694((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		DateTime_t1219  L_15 = ((DateTime_t1219_StaticFields*)DateTime_t1219_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		V_4 = L_15;
		int64_t L_16 = DateTime_get_Ticks_m6662((&V_4), /*hidden argument*/NULL);
		if ((((int64_t)((int64_t)((int64_t)L_13+(int64_t)L_14))) >= ((int64_t)L_16)))
		{
			goto IL_0076;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		DateTime_t1219  L_17 = ((DateTime_t1219_StaticFields*)DateTime_t1219_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		DateTime_t1219  L_18 = DateTime_SpecifyKind_m16820(NULL /*static, unused*/, L_17, 2, /*hidden argument*/NULL);
		return L_18;
	}

IL_0076:
	{
		TimeSpan_t2672  L_19 = V_0;
		DateTime_t1219  L_20 = DateTime_Add_m21102((&___time), L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		int32_t L_21 = DateTime_get_Year_m12187((&___time), /*hidden argument*/NULL);
		DaylightTime_t3958 * L_22 = (DaylightTime_t3958 *)VirtFuncInvoker1< DaylightTime_t3958 *, int32_t >::Invoke(4 /* System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32) */, __this, L_21);
		V_2 = L_22;
		DaylightTime_t3958 * L_23 = V_2;
		NullCheck(L_23);
		TimeSpan_t2672  L_24 = DaylightTime_get_Delta_m18728(L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		int64_t L_25 = TimeSpan_get_Ticks_m14694((&V_5), /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00a6;
		}
	}
	{
		DateTime_t1219  L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		DateTime_t1219  L_27 = DateTime_SpecifyKind_m16820(NULL /*static, unused*/, L_26, 2, /*hidden argument*/NULL);
		return L_27;
	}

IL_00a6:
	{
		DateTime_t1219  L_28 = V_1;
		DaylightTime_t3958 * L_29 = V_2;
		NullCheck(L_29);
		DateTime_t1219  L_30 = DaylightTime_get_End_m18727(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		bool L_31 = DateTime_op_LessThan_m13768(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		DaylightTime_t3958 * L_32 = V_2;
		NullCheck(L_32);
		DateTime_t1219  L_33 = DaylightTime_get_End_m18727(L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		DaylightTime_t3958 * L_34 = V_2;
		NullCheck(L_34);
		TimeSpan_t2672  L_35 = DaylightTime_get_Delta_m18728(L_34, /*hidden argument*/NULL);
		DateTime_t1219  L_36 = DateTime_Subtract_m21133((&V_6), L_35, /*hidden argument*/NULL);
		DateTime_t1219  L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		bool L_38 = DateTime_op_LessThanOrEqual_m6626(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		DateTime_t1219  L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		DateTime_t1219  L_40 = DateTime_SpecifyKind_m16820(NULL /*static, unused*/, L_39, 2, /*hidden argument*/NULL);
		return L_40;
	}

IL_00d9:
	{
		DateTime_t1219  L_41 = V_1;
		TimeSpan_t2672  L_42 = (TimeSpan_t2672 )VirtFuncInvoker1< TimeSpan_t2672 , DateTime_t1219  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_41);
		V_3 = L_42;
		TimeSpan_t2672  L_43 = V_3;
		DateTime_t1219  L_44 = DateTime_Add_m21102((&___time), L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		DateTime_t1219  L_45 = DateTime_SpecifyKind_m16820(NULL /*static, unused*/, L_44, 2, /*hidden argument*/NULL);
		return L_45;
	}
}
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern TypeInfo* DateTime_t1219_il2cpp_TypeInfo_var;
extern "C" DateTime_t1219  TimeZone_ToUniversalTime_m21537 (TimeZone_t3768 * __this, DateTime_t1219  ___time, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2630);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t2672  V_0 = {0};
	{
		int32_t L_0 = DateTime_get_Kind_m14690((&___time), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000c;
		}
	}
	{
		DateTime_t1219  L_1 = ___time;
		return L_1;
	}

IL_000c:
	{
		DateTime_t1219  L_2 = ___time;
		TimeSpan_t2672  L_3 = (TimeSpan_t2672 )VirtFuncInvoker1< TimeSpan_t2672 , DateTime_t1219  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_2);
		V_0 = L_3;
		int64_t L_4 = TimeSpan_get_Ticks_m14694((&V_0), /*hidden argument*/NULL);
		if ((((int64_t)L_4) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		DateTime_t1219  L_5 = ((DateTime_t1219_StaticFields*)DateTime_t1219_il2cpp_TypeInfo_var->static_fields)->___MaxValue_12;
		TimeSpan_t2672  L_6 = V_0;
		DateTime_t1219  L_7 = DateTime_op_Addition_m14705(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		DateTime_t1219  L_8 = ___time;
		bool L_9 = DateTime_op_LessThan_m13768(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		DateTime_t1219  L_10 = ((DateTime_t1219_StaticFields*)DateTime_t1219_il2cpp_TypeInfo_var->static_fields)->___MaxValue_12;
		DateTime_t1219  L_11 = DateTime_SpecifyKind_m16820(NULL /*static, unused*/, L_10, 1, /*hidden argument*/NULL);
		return L_11;
	}

IL_003e:
	{
		goto IL_006a;
	}

IL_0040:
	{
		int64_t L_12 = TimeSpan_get_Ticks_m14694((&V_0), /*hidden argument*/NULL);
		if ((((int64_t)L_12) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		DateTime_t1219  L_13 = ((DateTime_t1219_StaticFields*)DateTime_t1219_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		TimeSpan_t2672  L_14 = V_0;
		DateTime_t1219  L_15 = DateTime_op_Addition_m14705(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		DateTime_t1219  L_16 = ___time;
		bool L_17 = DateTime_op_GreaterThan_m6625(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		DateTime_t1219  L_18 = ((DateTime_t1219_StaticFields*)DateTime_t1219_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		DateTime_t1219  L_19 = DateTime_SpecifyKind_m16820(NULL /*static, unused*/, L_18, 1, /*hidden argument*/NULL);
		return L_19;
	}

IL_006a:
	{
		int64_t L_20 = DateTime_get_Ticks_m6662((&___time), /*hidden argument*/NULL);
		int64_t L_21 = TimeSpan_get_Ticks_m14694((&V_0), /*hidden argument*/NULL);
		DateTime_t1219  L_22 = {0};
		DateTime__ctor_m21077(&L_22, ((int64_t)((int64_t)L_20-(int64_t)L_21)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		DateTime_t1219  L_23 = DateTime_SpecifyKind_m16820(NULL /*static, unused*/, L_22, 1, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C" TimeSpan_t2672  TimeZone_GetLocalTimeDiff_m21538 (TimeZone_t3768 * __this, DateTime_t1219  ___time, const MethodInfo* method)
{
	{
		DateTime_t1219  L_0 = ___time;
		DateTime_t1219  L_1 = ___time;
		TimeSpan_t2672  L_2 = (TimeSpan_t2672 )VirtFuncInvoker1< TimeSpan_t2672 , DateTime_t1219  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_1);
		TimeSpan_t2672  L_3 = TimeZone_GetLocalTimeDiff_m21539(__this, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern TypeInfo* DateTime_t1219_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t2672_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t2672  TimeZone_GetLocalTimeDiff_m21539 (TimeZone_t3768 * __this, DateTime_t1219  ___time, TimeSpan_t2672  ___utc_offset, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2630);
		TimeSpan_t2672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6898);
		s_Il2CppMethodIntialized = true;
	}
	DaylightTime_t3958 * V_0 = {0};
	DateTime_t1219  V_1 = {0};
	TimeSpan_t2672  V_2 = {0};
	DateTime_t1219  V_3 = {0};
	DateTime_t1219  V_4 = {0};
	{
		int32_t L_0 = DateTime_get_Year_m12187((&___time), /*hidden argument*/NULL);
		DaylightTime_t3958 * L_1 = (DaylightTime_t3958 *)VirtFuncInvoker1< DaylightTime_t3958 *, int32_t >::Invoke(4 /* System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32) */, __this, L_0);
		V_0 = L_1;
		DaylightTime_t3958 * L_2 = V_0;
		NullCheck(L_2);
		TimeSpan_t2672  L_3 = DaylightTime_get_Delta_m18728(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		int64_t L_4 = TimeSpan_get_Ticks_m14694((&V_2), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		TimeSpan_t2672  L_5 = ___utc_offset;
		return L_5;
	}

IL_0020:
	{
		TimeSpan_t2672  L_6 = ___utc_offset;
		DateTime_t1219  L_7 = DateTime_Add_m21102((&___time), L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		DateTime_t1219  L_8 = V_1;
		DaylightTime_t3958 * L_9 = V_0;
		NullCheck(L_9);
		DateTime_t1219  L_10 = DaylightTime_get_End_m18727(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		bool L_11 = DateTime_op_LessThan_m13768(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		DaylightTime_t3958 * L_12 = V_0;
		NullCheck(L_12);
		DateTime_t1219  L_13 = DaylightTime_get_End_m18727(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		DaylightTime_t3958 * L_14 = V_0;
		NullCheck(L_14);
		TimeSpan_t2672  L_15 = DaylightTime_get_Delta_m18728(L_14, /*hidden argument*/NULL);
		DateTime_t1219  L_16 = DateTime_Subtract_m21133((&V_3), L_15, /*hidden argument*/NULL);
		DateTime_t1219  L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		bool L_18 = DateTime_op_LessThanOrEqual_m6626(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0055;
		}
	}
	{
		TimeSpan_t2672  L_19 = ___utc_offset;
		return L_19;
	}

IL_0055:
	{
		DateTime_t1219  L_20 = V_1;
		DaylightTime_t3958 * L_21 = V_0;
		NullCheck(L_21);
		DateTime_t1219  L_22 = DaylightTime_get_Start_m18726(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		bool L_23 = DateTime_op_GreaterThanOrEqual_m13697(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_008d;
		}
	}
	{
		DaylightTime_t3958 * L_24 = V_0;
		NullCheck(L_24);
		DateTime_t1219  L_25 = DaylightTime_get_Start_m18726(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		DaylightTime_t3958 * L_26 = V_0;
		NullCheck(L_26);
		TimeSpan_t2672  L_27 = DaylightTime_get_Delta_m18728(L_26, /*hidden argument*/NULL);
		DateTime_t1219  L_28 = DateTime_Add_m21102((&V_4), L_27, /*hidden argument*/NULL);
		DateTime_t1219  L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		bool L_30 = DateTime_op_GreaterThan_m6625(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_008d;
		}
	}
	{
		TimeSpan_t2672  L_31 = ___utc_offset;
		DaylightTime_t3958 * L_32 = V_0;
		NullCheck(L_32);
		TimeSpan_t2672  L_33 = DaylightTime_get_Delta_m18728(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t2672_il2cpp_TypeInfo_var);
		TimeSpan_t2672  L_34 = TimeSpan_op_Subtraction_m14710(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
		return L_34;
	}

IL_008d:
	{
		DateTime_t1219  L_35 = V_1;
		TimeSpan_t2672  L_36 = (TimeSpan_t2672 )VirtFuncInvoker1< TimeSpan_t2672 , DateTime_t1219  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_35);
		return L_36;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.CurrentSystemTimeZone::.ctor()
extern TypeInfo* Hashtable_t1256_il2cpp_TypeInfo_var;
extern TypeInfo* TimeZone_t3768_il2cpp_TypeInfo_var;
extern "C" void CurrentSystemTimeZone__ctor_m21540 (CurrentSystemTimeZone_t4331 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2705);
		TimeZone_t3768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7442);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t1256 * L_0 = (Hashtable_t1256 *)il2cpp_codegen_object_new (Hashtable_t1256_il2cpp_TypeInfo_var);
		Hashtable__ctor_m16857(L_0, 1, /*hidden argument*/NULL);
		__this->___m_CachedDaylightChanges_3 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZone_t3768_il2cpp_TypeInfo_var);
		TimeZone__ctor_m21532(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern TypeInfo* Hashtable_t1256_il2cpp_TypeInfo_var;
extern TypeInfo* TimeZone_t3768_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" void CurrentSystemTimeZone__ctor_m21541 (CurrentSystemTimeZone_t4331 * __this, int64_t ___lnow, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2705);
		TimeZone_t3768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7442);
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Int64U5BU5D_t2413* V_0 = {0};
	StringU5BU5D_t20* V_1 = {0};
	DateTime_t1219  V_2 = {0};
	DaylightTime_t3958 * V_3 = {0};
	{
		Hashtable_t1256 * L_0 = (Hashtable_t1256 *)il2cpp_codegen_object_new (Hashtable_t1256_il2cpp_TypeInfo_var);
		Hashtable__ctor_m16857(L_0, 1, /*hidden argument*/NULL);
		__this->___m_CachedDaylightChanges_3 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZone_t3768_il2cpp_TypeInfo_var);
		TimeZone__ctor_m21532(__this, /*hidden argument*/NULL);
		int64_t L_1 = ___lnow;
		DateTime__ctor_m21077((&V_2), L_1, /*hidden argument*/NULL);
		int32_t L_2 = DateTime_get_Year_m12187((&V_2), /*hidden argument*/NULL);
		bool L_3 = CurrentSystemTimeZone_GetTimeZoneData_m21543(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5623, /*hidden argument*/NULL);
		NotSupportedException_t571 * L_5 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_5, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003c:
	{
		StringU5BU5D_t20* L_6 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		int32_t L_7 = 0;
		String_t* L_8 = Locale_GetText_m17822(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_6, L_7)), /*hidden argument*/NULL);
		__this->___m_standardName_1 = L_8;
		StringU5BU5D_t20* L_9 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		int32_t L_10 = 1;
		String_t* L_11 = Locale_GetText_m17822(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_9, L_10)), /*hidden argument*/NULL);
		__this->___m_daylightName_2 = L_11;
		Int64U5BU5D_t2413* L_12 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		int32_t L_13 = 2;
		__this->___m_ticksOffset_4 = (*(int64_t*)(int64_t*)SZArrayLdElema(L_12, L_13));
		Int64U5BU5D_t2413* L_14 = V_0;
		DaylightTime_t3958 * L_15 = CurrentSystemTimeZone_GetDaylightTimeFromData_m21547(__this, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		Hashtable_t1256 * L_16 = (__this->___m_CachedDaylightChanges_3);
		int32_t L_17 = DateTime_get_Year_m12187((&V_2), /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_18);
		DaylightTime_t3958 * L_20 = V_3;
		NullCheck(L_16);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(26 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_16, L_19, L_20);
		DaylightTime_t3958 * L_21 = V_3;
		CurrentSystemTimeZone_OnDeserialization_m21546(__this, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m21542 (CurrentSystemTimeZone_t4331 * __this, Object_t * ___sender, const MethodInfo* method)
{
	{
		CurrentSystemTimeZone_OnDeserialization_m21546(__this, (DaylightTime_t3958 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m21543 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t2413** ___data, StringU5BU5D_t20** ___names, const MethodInfo* method)
{
	typedef bool (*CurrentSystemTimeZone_GetTimeZoneData_m21543_ftn) (int32_t, Int64U5BU5D_t2413**, StringU5BU5D_t20**);
	static CurrentSystemTimeZone_GetTimeZoneData_m21543_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CurrentSystemTimeZone_GetTimeZoneData_m21543_ftn)il2cpp_codegen_resolve_icall ("System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)");
	return _il2cpp_icall_func(___year, ___data, ___names);
}
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern TypeInfo* CurrentSystemTimeZone_t4331_il2cpp_TypeInfo_var;
extern TypeInfo* DaylightTime_t3958_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" DaylightTime_t3958 * CurrentSystemTimeZone_GetDaylightChanges_m21544 (CurrentSystemTimeZone_t4331 * __this, int32_t ___year, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		CurrentSystemTimeZone_t4331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8519);
		DaylightTime_t3958_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8520);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t1256 * V_0 = {0};
	DaylightTime_t3958 * V_1 = {0};
	Int64U5BU5D_t2413* V_2 = {0};
	StringU5BU5D_t20* V_3 = {0};
	DaylightTime_t3958 * V_4 = {0};
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___year;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___year;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)9999))))
		{
			goto IL_002c;
		}
	}

IL_000c:
	{
		int32_t L_2 = ___year;
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5624, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m92(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1123 * L_7 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6587(L_7, (String_t*) &_stringLiteral2932, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002c:
	{
		int32_t L_8 = ___year;
		int32_t L_9 = ((CurrentSystemTimeZone_t4331_StaticFields*)CurrentSystemTimeZone_t4331_il2cpp_TypeInfo_var->static_fields)->___this_year_7;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_003a;
		}
	}
	{
		DaylightTime_t3958 * L_10 = ((CurrentSystemTimeZone_t4331_StaticFields*)CurrentSystemTimeZone_t4331_il2cpp_TypeInfo_var->static_fields)->___this_year_dlt_8;
		return L_10;
	}

IL_003a:
	{
		Hashtable_t1256 * L_11 = (__this->___m_CachedDaylightChanges_3);
		V_0 = L_11;
		Hashtable_t1256 * L_12 = V_0;
		Monitor_Enter_m2469(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			Hashtable_t1256 * L_13 = (__this->___m_CachedDaylightChanges_3);
			int32_t L_14 = ___year;
			int32_t L_15 = L_14;
			Object_t * L_16 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_15);
			NullCheck(L_13);
			Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_13, L_16);
			V_1 = ((DaylightTime_t3958 *)Castclass(L_17, DaylightTime_t3958_il2cpp_TypeInfo_var));
			DaylightTime_t3958 * L_18 = V_1;
			if (L_18)
			{
				goto IL_00a2;
			}
		}

IL_0061:
		{
			int32_t L_19 = ___year;
			bool L_20 = CurrentSystemTimeZone_GetTimeZoneData_m21543(NULL /*static, unused*/, L_19, (&V_2), (&V_3), /*hidden argument*/NULL);
			if (L_20)
			{
				goto IL_0088;
			}
		}

IL_006d:
		{
			int32_t L_21 = ___year;
			int32_t L_22 = L_21;
			Object_t * L_23 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_22);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_24 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral5625, L_23, /*hidden argument*/NULL);
			String_t* L_25 = Locale_GetText_m17822(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			ArgumentException_t1126 * L_26 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m5500(L_26, L_25, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_26);
		}

IL_0088:
		{
			Int64U5BU5D_t2413* L_27 = V_2;
			DaylightTime_t3958 * L_28 = CurrentSystemTimeZone_GetDaylightTimeFromData_m21547(__this, L_27, /*hidden argument*/NULL);
			V_1 = L_28;
			Hashtable_t1256 * L_29 = (__this->___m_CachedDaylightChanges_3);
			int32_t L_30 = ___year;
			int32_t L_31 = L_30;
			Object_t * L_32 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_31);
			DaylightTime_t3958 * L_33 = V_1;
			NullCheck(L_29);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(26 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_29, L_32, L_33);
		}

IL_00a2:
		{
			DaylightTime_t3958 * L_34 = V_1;
			V_4 = L_34;
			IL2CPP_LEAVE(0xB0, FINALLY_00a9);
		}

IL_00a7:
		{
			IL2CPP_LEAVE(0xB0, FINALLY_00a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_00a9;
	}

FINALLY_00a9:
	{ // begin finally (depth: 1)
		Hashtable_t1256 * L_35 = V_0;
		Monitor_Exit_m2472(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(169)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(169)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_00b0:
	{
		DaylightTime_t3958 * L_36 = V_4;
		return L_36;
	}
}
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t2672  CurrentSystemTimeZone_GetUtcOffset_m21545 (CurrentSystemTimeZone_t4331 * __this, DateTime_t1219  ___time, const MethodInfo* method)
{
	{
		DateTime_t1219  L_0 = ___time;
		bool L_1 = (bool)VirtFuncInvoker1< bool, DateTime_t1219  >::Invoke(6 /* System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime) */, __this, L_0);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		TimeSpan_t2672  L_2 = (__this->___utcOffsetWithDLS_6);
		return L_2;
	}

IL_0010:
	{
		TimeSpan_t2672  L_3 = (__this->___utcOffsetWithOutDLS_5);
		return L_3;
	}
}
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern TypeInfo* DateTime_t1219_il2cpp_TypeInfo_var;
extern TypeInfo* CurrentSystemTimeZone_t4331_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void CurrentSystemTimeZone_OnDeserialization_m21546 (CurrentSystemTimeZone_t4331 * __this, DaylightTime_t3958 * ___dlt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t1219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2630);
		CurrentSystemTimeZone_t4331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8519);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	Int64U5BU5D_t2413* V_0 = {0};
	StringU5BU5D_t20* V_1 = {0};
	DateTime_t1219  V_2 = {0};
	DateTime_t1219  V_3 = {0};
	TimeSpan_t2672  V_4 = {0};
	{
		DaylightTime_t3958 * L_0 = ___dlt;
		if (L_0)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t1219_il2cpp_TypeInfo_var);
		DateTime_t1219  L_1 = DateTime_get_Now_m12186(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_1;
		int32_t L_2 = DateTime_get_Year_m12187((&V_2), /*hidden argument*/NULL);
		((CurrentSystemTimeZone_t4331_StaticFields*)CurrentSystemTimeZone_t4331_il2cpp_TypeInfo_var->static_fields)->___this_year_7 = L_2;
		int32_t L_3 = ((CurrentSystemTimeZone_t4331_StaticFields*)CurrentSystemTimeZone_t4331_il2cpp_TypeInfo_var->static_fields)->___this_year_7;
		bool L_4 = CurrentSystemTimeZone_GetTimeZoneData_m21543(NULL /*static, unused*/, L_3, (&V_0), (&V_1), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_5 = ((CurrentSystemTimeZone_t4331_StaticFields*)CurrentSystemTimeZone_t4331_il2cpp_TypeInfo_var->static_fields)->___this_year_7;
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral5625, L_7, /*hidden argument*/NULL);
		String_t* L_9 = Locale_GetText_m17822(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_10 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_10, L_9, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0044:
	{
		Int64U5BU5D_t2413* L_11 = V_0;
		DaylightTime_t3958 * L_12 = CurrentSystemTimeZone_GetDaylightTimeFromData_m21547(__this, L_11, /*hidden argument*/NULL);
		___dlt = L_12;
		goto IL_0064;
	}

IL_0051:
	{
		DaylightTime_t3958 * L_13 = ___dlt;
		NullCheck(L_13);
		DateTime_t1219  L_14 = DaylightTime_get_Start_m18726(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		int32_t L_15 = DateTime_get_Year_m12187((&V_3), /*hidden argument*/NULL);
		((CurrentSystemTimeZone_t4331_StaticFields*)CurrentSystemTimeZone_t4331_il2cpp_TypeInfo_var->static_fields)->___this_year_7 = L_15;
	}

IL_0064:
	{
		int64_t L_16 = (__this->___m_ticksOffset_4);
		TimeSpan_t2672  L_17 = {0};
		TimeSpan__ctor_m12197(&L_17, L_16, /*hidden argument*/NULL);
		__this->___utcOffsetWithOutDLS_5 = L_17;
		int64_t L_18 = (__this->___m_ticksOffset_4);
		DaylightTime_t3958 * L_19 = ___dlt;
		NullCheck(L_19);
		TimeSpan_t2672  L_20 = DaylightTime_get_Delta_m18728(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		int64_t L_21 = TimeSpan_get_Ticks_m14694((&V_4), /*hidden argument*/NULL);
		TimeSpan_t2672  L_22 = {0};
		TimeSpan__ctor_m12197(&L_22, ((int64_t)((int64_t)L_18+(int64_t)L_21)), /*hidden argument*/NULL);
		__this->___utcOffsetWithDLS_6 = L_22;
		DaylightTime_t3958 * L_23 = ___dlt;
		((CurrentSystemTimeZone_t4331_StaticFields*)CurrentSystemTimeZone_t4331_il2cpp_TypeInfo_var->static_fields)->___this_year_dlt_8 = L_23;
		return;
	}
}
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern TypeInfo* DaylightTime_t3958_il2cpp_TypeInfo_var;
extern "C" DaylightTime_t3958 * CurrentSystemTimeZone_GetDaylightTimeFromData_m21547 (CurrentSystemTimeZone_t4331 * __this, Int64U5BU5D_t2413* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DaylightTime_t3958_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8520);
		s_Il2CppMethodIntialized = true;
	}
	{
		Int64U5BU5D_t2413* L_0 = ___data;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		DateTime_t1219  L_2 = {0};
		DateTime__ctor_m21077(&L_2, (*(int64_t*)(int64_t*)SZArrayLdElema(L_0, L_1)), /*hidden argument*/NULL);
		Int64U5BU5D_t2413* L_3 = ___data;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		int32_t L_4 = 1;
		DateTime_t1219  L_5 = {0};
		DateTime__ctor_m21077(&L_5, (*(int64_t*)(int64_t*)SZArrayLdElema(L_3, L_4)), /*hidden argument*/NULL);
		Int64U5BU5D_t2413* L_6 = ___data;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		int32_t L_7 = 3;
		TimeSpan_t2672  L_8 = {0};
		TimeSpan__ctor_m12197(&L_8, (*(int64_t*)(int64_t*)SZArrayLdElema(L_6, L_7)), /*hidden argument*/NULL);
		DaylightTime_t3958 * L_9 = (DaylightTime_t3958 *)il2cpp_codegen_object_new (DaylightTime_t3958_il2cpp_TypeInfo_var);
		DaylightTime__ctor_m18725(L_9, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
#ifndef _MSC_VER
#else
#endif
// System.TypeCode
#include "mscorlib_System_TypeCodeMethodDeclarations.h"



// System.TypeInitializationException
#include "mscorlib_System_TypeInitializationException.h"
#ifndef _MSC_VER
#else
#endif
// System.TypeInitializationException
#include "mscorlib_System_TypeInitializationExceptionMethodDeclarations.h"



// System.Void System.TypeInitializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeInitializationException__ctor_m21548 (TypeInitializationException_t4333 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_2 = ___info;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m11565(L_2, (String_t*) &_stringLiteral4421, /*hidden argument*/NULL);
		__this->___type_name_11 = L_3;
		return;
	}
}
// System.Void System.TypeInitializationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeInitializationException_GetObjectData_m21549 (TypeInitializationException_t4333 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		Exception_GetObjectData_m6785(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_2 = ___info;
		String_t* L_3 = (__this->___type_name_11);
		NullCheck(L_2);
		SerializationInfo_AddValue_m6629(L_2, (String_t*) &_stringLiteral4421, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.TypeLoadException
#include "mscorlib_System_TypeLoadException.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.TypeLoadException::.ctor()
extern "C" void TypeLoadException__ctor_m21550 (TypeLoadException_t4291 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5628, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233054), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.String)
extern "C" void TypeLoadException__ctor_m21551 (TypeLoadException_t4291 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233054), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern "C" void TypeLoadException__ctor_m21552 (TypeLoadException_t4291 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_2 = ___info;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t1328 * L_3 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_3, (String_t*) &_stringLiteral216, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0016:
	{
		SerializationInfo_t1322 * L_4 = ___info;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m11565(L_4, (String_t*) &_stringLiteral5629, /*hidden argument*/NULL);
		__this->___className_12 = L_5;
		SerializationInfo_t1322 * L_6 = ___info;
		NullCheck(L_6);
		String_t* L_7 = SerializationInfo_GetString_m11565(L_6, (String_t*) &_stringLiteral5630, /*hidden argument*/NULL);
		__this->___assemblyName_13 = L_7;
		return;
	}
}
// System.String System.TypeLoadException::get_Message()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* TypeLoadException_get_Message_m21553 (TypeLoadException_t4291 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___className_12);
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_1 = (__this->___assemblyName_13);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_2 = (__this->___assemblyName_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_4 = String_op_Inequality_m3147(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_5 = (__this->___className_12);
		String_t* L_6 = (__this->___assemblyName_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral5626, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0039:
	{
		String_t* L_8 = (__this->___className_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2680(NULL /*static, unused*/, (String_t*) &_stringLiteral5627, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_004a:
	{
		String_t* L_10 = Exception_get_Message_m6787(__this, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void System.TypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Int32_t29_0_0_0_var;
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" void TypeLoadException_GetObjectData_m21554 (TypeLoadException_t4291 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(1);
		Int32_t29_0_0_0_var = il2cpp_codegen_type_from_index(14);
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t1322 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral216, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t1322 * L_2 = ___info;
		StreamingContext_t1323  L_3 = ___context;
		Exception_GetObjectData_m6785(__this, L_2, L_3, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_4 = ___info;
		String_t* L_5 = (__this->___className_12);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m16764(L_4, (String_t*) &_stringLiteral5629, L_5, L_6, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_7 = ___info;
		String_t* L_8 = (__this->___assemblyName_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_AddValue_m16764(L_7, (String_t*) &_stringLiteral5630, L_8, L_9, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_10 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		Type_t * L_12 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		SerializationInfo_AddValue_m16764(L_10, (String_t*) &_stringLiteral5631, L_11, L_12, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_13 = ___info;
		int32_t L_14 = 0;
		Object_t * L_15 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_14);
		Type_t * L_16 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(Int32_t29_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		SerializationInfo_AddValue_m16764(L_13, (String_t*) &_stringLiteral5632, L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.UnauthorizedAccessException
#include "mscorlib_System_UnauthorizedAccessException.h"
#ifndef _MSC_VER
#else
#endif
// System.UnauthorizedAccessException
#include "mscorlib_System_UnauthorizedAccessExceptionMethodDeclarations.h"



// System.Void System.UnauthorizedAccessException::.ctor()
extern "C" void UnauthorizedAccessException__ctor_m21555 (UnauthorizedAccessException_t4334 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5633, /*hidden argument*/NULL);
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233088), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern "C" void UnauthorizedAccessException__ctor_m21556 (UnauthorizedAccessException_t4334 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m11567(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m13770(__this, ((int32_t)-2146233088), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnauthorizedAccessException__ctor_m21557 (UnauthorizedAccessException_t4334 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1322 * L_0 = ___info;
		StreamingContext_t1323  L_1 = ___context;
		SystemException__ctor_m11563(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"
#ifndef _MSC_VER
#else
#endif
// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgsMethodDeclarations.h"



// System.Void System.UnhandledExceptionEventArgs::.ctor(System.Object,System.Boolean)
extern TypeInfo* EventArgs_t877_il2cpp_TypeInfo_var;
extern "C" void UnhandledExceptionEventArgs__ctor_m21558 (UnhandledExceptionEventArgs_t4335 * __this, Object_t * ___exception, bool ___isTerminating, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t877_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1642);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t877_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5429(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___exception;
		__this->___exception_1 = L_0;
		bool L_1 = ___isTerminating;
		__this->___m_isTerminating_2 = L_1;
		return;
	}
}
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
extern "C" Object_t * UnhandledExceptionEventArgs_get_ExceptionObject_m21559 (UnhandledExceptionEventArgs_t4335 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___exception_1);
		return L_0;
	}
}
// System.Boolean System.UnhandledExceptionEventArgs::get_IsTerminating()
extern "C" bool UnhandledExceptionEventArgs_get_IsTerminating_m21560 (UnhandledExceptionEventArgs_t4335 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_isTerminating_2);
		return L_0;
	}
}
// System.UnitySerializationHolder/UnityType
#include "mscorlib_System_UnitySerializationHolder_UnityType.h"
#ifndef _MSC_VER
#else
#endif
// System.UnitySerializationHolder/UnityType
#include "mscorlib_System_UnitySerializationHolder_UnityTypeMethodDeclarations.h"



// System.UnitySerializationHolder
#include "mscorlib_System_UnitySerializationHolder.h"
#ifndef _MSC_VER
#else
#endif

// System.DBNull
#include "mscorlib_System_DBNull.h"
// System.Reflection.Module
#include "mscorlib_System_Reflection_ModuleMethodDeclarations.h"
// System.DBNull
#include "mscorlib_System_DBNullMethodDeclarations.h"


// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m21561 (UnitySerializationHolder_t4337 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___ctx, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_0 = ___info;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m11565(L_0, (String_t*) &_stringLiteral4444, /*hidden argument*/NULL);
		__this->____data_0 = L_1;
		SerializationInfo_t1322 * L_2 = ___info;
		NullCheck(L_2);
		int32_t L_3 = SerializationInfo_GetInt32_m11564(L_2, (String_t*) &_stringLiteral5634, /*hidden argument*/NULL);
		__this->____unityType_1 = (((uint8_t)L_3));
		SerializationInfo_t1322 * L_4 = ___info;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m11565(L_4, (String_t*) &_stringLiteral4887, /*hidden argument*/NULL);
		__this->____assemblyName_2 = L_5;
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* UnitySerializationHolder_t4337_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void UnitySerializationHolder_GetTypeData_m21562 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnitySerializationHolder_t4337_0_0_0_var = il2cpp_codegen_type_from_index(8521);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t1322 * L_0 = ___info;
		Type_t * L_1 = ___instance;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m6629(L_0, (String_t*) &_stringLiteral4444, L_2, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_3 = ___info;
		NullCheck(L_3);
		SerializationInfo_AddValue_m11568(L_3, (String_t*) &_stringLiteral5634, 4, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_4 = ___info;
		Type_t * L_5 = ___instance;
		NullCheck(L_5);
		Assembly_t1601 * L_6 = (Assembly_t1601 *)VirtFuncInvoker0< Assembly_t1601 * >::Invoke(15 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		NullCheck(L_4);
		SerializationInfo_AddValue_m6629(L_4, (String_t*) &_stringLiteral4887, L_7, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_8 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(UnitySerializationHolder_t4337_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_SetType_m20041(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* UnitySerializationHolder_t4337_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void UnitySerializationHolder_GetDBNullData_m21563 (Object_t * __this /* static, unused */, DBNull_t2546 * ___instance, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnitySerializationHolder_t4337_0_0_0_var = il2cpp_codegen_type_from_index(8521);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t1322 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfo_AddValue_m6629(L_0, (String_t*) &_stringLiteral4444, NULL, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_1 = ___info;
		NullCheck(L_1);
		SerializationInfo_AddValue_m11568(L_1, (String_t*) &_stringLiteral5634, 2, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_2 = ___info;
		DBNull_t2546 * L_3 = ___instance;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m2871(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Assembly_t1601 * L_5 = (Assembly_t1601 *)VirtFuncInvoker0< Assembly_t1601 * >::Invoke(15 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_4);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.Assembly::get_FullName() */, L_5);
		NullCheck(L_2);
		SerializationInfo_AddValue_m6629(L_2, (String_t*) &_stringLiteral4887, L_6, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_7 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(UnitySerializationHolder_t4337_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_SetType_m20041(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* UnitySerializationHolder_t4337_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void UnitySerializationHolder_GetModuleData_m21564 (Object_t * __this /* static, unused */, Module_t4006 * ___instance, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnitySerializationHolder_t4337_0_0_0_var = il2cpp_codegen_type_from_index(8521);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t1322 * L_0 = ___info;
		Module_t4006 * L_1 = ___instance;
		NullCheck(L_1);
		String_t* L_2 = Module_get_ScopeName_m19443(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_AddValue_m6629(L_0, (String_t*) &_stringLiteral4444, L_2, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_3 = ___info;
		NullCheck(L_3);
		SerializationInfo_AddValue_m11568(L_3, (String_t*) &_stringLiteral5634, 5, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_4 = ___info;
		Module_t4006 * L_5 = ___instance;
		NullCheck(L_5);
		Assembly_t1601 * L_6 = Module_get_Assembly_m19442(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		NullCheck(L_4);
		SerializationInfo_AddValue_m6629(L_4, (String_t*) &_stringLiteral4887, L_7, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_8 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(UnitySerializationHolder_t4337_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_SetType_m20041(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" void UnitySerializationHolder_GetObjectData_m21565 (UnitySerializationHolder_t4337 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t571 * L_0 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2434(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern TypeInfo* DBNull_t2546_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t571_il2cpp_TypeInfo_var;
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m21566 (UnitySerializationHolder_t4337 * __this, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DBNull_t2546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4645);
		NotSupportedException_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		s_Il2CppMethodIntialized = true;
	}
	Assembly_t1601 * V_0 = {0};
	Assembly_t1601 * V_1 = {0};
	uint8_t V_2 = {0};
	{
		uint8_t L_0 = (__this->____unityType_1);
		V_2 = L_0;
		uint8_t L_1 = V_2;
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 0)
		{
			goto IL_003e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 1)
		{
			goto IL_0069;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 2)
		{
			goto IL_0025;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 3)
		{
			goto IL_0044;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 4)
		{
			goto IL_005d;
		}
	}
	{
		goto IL_0069;
	}

IL_0025:
	{
		String_t* L_2 = (__this->____assemblyName_2);
		Assembly_t1601 * L_3 = Assembly_Load_m19346(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Assembly_t1601 * L_4 = V_0;
		String_t* L_5 = (__this->____data_0);
		NullCheck(L_4);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(13 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_4, L_5);
		return L_6;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t2546_il2cpp_TypeInfo_var);
		DBNull_t2546 * L_7 = ((DBNull_t2546_StaticFields*)DBNull_t2546_il2cpp_TypeInfo_var->static_fields)->___Value_0;
		return L_7;
	}

IL_0044:
	{
		String_t* L_8 = (__this->____assemblyName_2);
		Assembly_t1601 * L_9 = Assembly_Load_m19346(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Assembly_t1601 * L_10 = V_1;
		String_t* L_11 = (__this->____data_0);
		NullCheck(L_10);
		Module_t4006 * L_12 = (Module_t4006 *)VirtFuncInvoker1< Module_t4006 *, String_t* >::Invoke(16 /* System.Reflection.Module System.Reflection.Assembly::GetModule(System.String) */, L_10, L_11);
		return L_12;
	}

IL_005d:
	{
		String_t* L_13 = (__this->____data_0);
		Assembly_t1601 * L_14 = Assembly_Load_m19346(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0069:
	{
		String_t* L_15 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5635, /*hidden argument*/NULL);
		NotSupportedException_t571 * L_16 = (NotSupportedException_t571 *)il2cpp_codegen_object_new (NotSupportedException_t571_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6570(L_16, L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Version::.ctor()
extern "C" void Version__ctor_m21567 (Version_t1549 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		Version_CheckedSet_m21569(__this, 2, 0, 0, (-1), (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.String)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t646_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" void Version__ctor_m7579 (Version_t1549 * __this, String_t* ___version, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		CharU5BU5D_t646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t20* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		V_2 = (-1);
		V_3 = (-1);
		V_4 = (-1);
		V_5 = (-1);
		String_t* L_0 = ___version;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral1822, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001e:
	{
		String_t* L_2 = ___version;
		CharU5BU5D_t646* L_3 = ((CharU5BU5D_t646*)SZArrayNew(CharU5BU5D_t646_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)46);
		NullCheck(L_2);
		StringU5BU5D_t20* L_4 = String_Split_m2993(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		StringU5BU5D_t20* L_5 = V_1;
		NullCheck(L_5);
		V_0 = (((int32_t)(((Array_t *)L_5)->max_length)));
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)4)))
		{
			goto IL_004c;
		}
	}

IL_003c:
	{
		String_t* L_8 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5636, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_9 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004c:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		StringU5BU5D_t20* L_11 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		int32_t L_12 = 0;
		int32_t L_13 = Int32_Parse_m2992(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_11, L_12)), /*hidden argument*/NULL);
		V_2 = L_13;
	}

IL_0059:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) <= ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		StringU5BU5D_t20* L_15 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		int32_t L_16 = 1;
		int32_t L_17 = Int32_Parse_m2992(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_15, L_16)), /*hidden argument*/NULL);
		V_3 = L_17;
	}

IL_0066:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_0074;
		}
	}
	{
		StringU5BU5D_t20* L_19 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		int32_t L_20 = 2;
		int32_t L_21 = Int32_Parse_m2992(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_19, L_20)), /*hidden argument*/NULL);
		V_4 = L_21;
	}

IL_0074:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) <= ((int32_t)3)))
		{
			goto IL_0082;
		}
	}
	{
		StringU5BU5D_t20* L_23 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 3);
		int32_t L_24 = 3;
		int32_t L_25 = Int32_Parse_m2992(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_23, L_24)), /*hidden argument*/NULL);
		V_5 = L_25;
	}

IL_0082:
	{
		int32_t L_26 = V_0;
		int32_t L_27 = V_2;
		int32_t L_28 = V_3;
		int32_t L_29 = V_4;
		int32_t L_30 = V_5;
		Version_CheckedSet_m21569(__this, L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C" void Version__ctor_m16812 (Version_t1549 * __this, int32_t ___major, int32_t ___minor, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major;
		int32_t L_1 = ___minor;
		Version_CheckedSet_m21569(__this, 2, L_0, L_1, 0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version__ctor_m21568 (Version_t1549 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major;
		int32_t L_1 = ___minor;
		int32_t L_2 = ___build;
		int32_t L_3 = ___revision;
		Version_CheckedSet_m21569(__this, 4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var;
extern "C" void Version_CheckedSet_m21569 (Version_t1549 * __this, int32_t ___defined, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1763);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___major;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_1 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_1, (String_t*) &_stringLiteral5637, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		int32_t L_2 = ___major;
		__this->____Major_1 = L_2;
		int32_t L_3 = ___minor;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_4 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_4, (String_t*) &_stringLiteral5638, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0025:
	{
		int32_t L_5 = ___minor;
		__this->____Minor_2 = L_5;
		int32_t L_6 = ___defined;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_003f;
		}
	}
	{
		__this->____Build_3 = (-1);
		__this->____Revision_4 = (-1);
		return;
	}

IL_003f:
	{
		int32_t L_7 = ___build;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_8 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_8, (String_t*) &_stringLiteral5639, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004f:
	{
		int32_t L_9 = ___build;
		__this->____Build_3 = L_9;
		int32_t L_10 = ___defined;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_0063;
		}
	}
	{
		__this->____Revision_4 = (-1);
		return;
	}

IL_0063:
	{
		int32_t L_11 = ___revision;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		ArgumentOutOfRangeException_t1123 * L_12 = (ArgumentOutOfRangeException_t1123 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1123_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6569(L_12, (String_t*) &_stringLiteral5640, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0073:
	{
		int32_t L_13 = ___revision;
		__this->____Revision_4 = L_13;
		return;
	}
}
// System.Int32 System.Version::get_Build()
extern "C" int32_t Version_get_Build_m21570 (Version_t1549 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Build_3);
		return L_0;
	}
}
// System.Int32 System.Version::get_Major()
extern "C" int32_t Version_get_Major_m16816 (Version_t1549 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Major_1);
		return L_0;
	}
}
// System.Int32 System.Version::get_Minor()
extern "C" int32_t Version_get_Minor_m16817 (Version_t1549 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Minor_2);
		return L_0;
	}
}
// System.Int32 System.Version::get_Revision()
extern "C" int32_t Version_get_Revision_m21571 (Version_t1549 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Revision_4);
		return L_0;
	}
}
// System.Int32 System.Version::CompareTo(System.Object)
extern TypeInfo* Version_t1549_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t1126_il2cpp_TypeInfo_var;
extern "C" int32_t Version_CompareTo_m21572 (Version_t1549 * __this, Object_t * ___version, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t1549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3208);
		ArgumentException_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___version;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		Object_t * L_1 = ___version;
		if (((Version_t1549 *)IsInst(L_1, Version_t1549_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m17822(NULL /*static, unused*/, (String_t*) &_stringLiteral5641, /*hidden argument*/NULL);
		ArgumentException_t1126 * L_3 = (ArgumentException_t1126 *)il2cpp_codegen_object_new (ArgumentException_t1126_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5500(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		Object_t * L_4 = ___version;
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, Version_t1549 * >::Invoke(5 /* System.Int32 System.Version::CompareTo(System.Version) */, __this, ((Version_t1549 *)Castclass(L_4, Version_t1549_il2cpp_TypeInfo_var)));
		return L_5;
	}
}
// System.Boolean System.Version::Equals(System.Object)
extern TypeInfo* Version_t1549_il2cpp_TypeInfo_var;
extern "C" bool Version_Equals_m21573 (Version_t1549 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t1549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3208);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		bool L_1 = (bool)VirtFuncInvoker1< bool, Version_t1549 * >::Invoke(6 /* System.Boolean System.Version::Equals(System.Version) */, __this, ((Version_t1549 *)IsInst(L_0, Version_t1549_il2cpp_TypeInfo_var)));
		return L_1;
	}
}
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" int32_t Version_CompareTo_m21574 (Version_t1549 * __this, Version_t1549 * ___value, const MethodInfo* method)
{
	{
		Version_t1549 * L_0 = ___value;
		bool L_1 = Version_op_Equality_m16813(NULL /*static, unused*/, L_0, (Version_t1549 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		int32_t L_2 = (__this->____Major_1);
		Version_t1549 * L_3 = ___value;
		NullCheck(L_3);
		int32_t L_4 = (L_3->____Major_1);
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		int32_t L_5 = (__this->____Major_1);
		Version_t1549 * L_6 = ___value;
		NullCheck(L_6);
		int32_t L_7 = (L_6->____Major_1);
		if ((((int32_t)L_5) >= ((int32_t)L_7)))
		{
			goto IL_002b;
		}
	}
	{
		return (-1);
	}

IL_002b:
	{
		int32_t L_8 = (__this->____Minor_2);
		Version_t1549 * L_9 = ___value;
		NullCheck(L_9);
		int32_t L_10 = (L_9->____Minor_2);
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_003b;
		}
	}
	{
		return 1;
	}

IL_003b:
	{
		int32_t L_11 = (__this->____Minor_2);
		Version_t1549 * L_12 = ___value;
		NullCheck(L_12);
		int32_t L_13 = (L_12->____Minor_2);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (-1);
	}

IL_004b:
	{
		int32_t L_14 = (__this->____Build_3);
		Version_t1549 * L_15 = ___value;
		NullCheck(L_15);
		int32_t L_16 = (L_15->____Build_3);
		if ((((int32_t)L_14) <= ((int32_t)L_16)))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		int32_t L_17 = (__this->____Build_3);
		Version_t1549 * L_18 = ___value;
		NullCheck(L_18);
		int32_t L_19 = (L_18->____Build_3);
		if ((((int32_t)L_17) >= ((int32_t)L_19)))
		{
			goto IL_006b;
		}
	}
	{
		return (-1);
	}

IL_006b:
	{
		int32_t L_20 = (__this->____Revision_4);
		Version_t1549 * L_21 = ___value;
		NullCheck(L_21);
		int32_t L_22 = (L_21->____Revision_4);
		if ((((int32_t)L_20) <= ((int32_t)L_22)))
		{
			goto IL_007b;
		}
	}
	{
		return 1;
	}

IL_007b:
	{
		int32_t L_23 = (__this->____Revision_4);
		Version_t1549 * L_24 = ___value;
		NullCheck(L_24);
		int32_t L_25 = (L_24->____Revision_4);
		if ((((int32_t)L_23) >= ((int32_t)L_25)))
		{
			goto IL_008b;
		}
	}
	{
		return (-1);
	}

IL_008b:
	{
		return 0;
	}
}
// System.Boolean System.Version::Equals(System.Version)
extern "C" bool Version_Equals_m21575 (Version_t1549 * __this, Version_t1549 * ___obj, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		Version_t1549 * L_0 = ___obj;
		bool L_1 = Version_op_Inequality_m16814(NULL /*static, unused*/, L_0, (Version_t1549 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		Version_t1549 * L_2 = ___obj;
		NullCheck(L_2);
		int32_t L_3 = (L_2->____Major_1);
		int32_t L_4 = (__this->____Major_1);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0043;
		}
	}
	{
		Version_t1549 * L_5 = ___obj;
		NullCheck(L_5);
		int32_t L_6 = (L_5->____Minor_2);
		int32_t L_7 = (__this->____Minor_2);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0043;
		}
	}
	{
		Version_t1549 * L_8 = ___obj;
		NullCheck(L_8);
		int32_t L_9 = (L_8->____Build_3);
		int32_t L_10 = (__this->____Build_3);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0043;
		}
	}
	{
		Version_t1549 * L_11 = ___obj;
		NullCheck(L_11);
		int32_t L_12 = (L_11->____Revision_4);
		int32_t L_13 = (__this->____Revision_4);
		G_B6_0 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 0;
	}

IL_0044:
	{
		return G_B6_0;
	}
}
// System.Int32 System.Version::GetHashCode()
extern "C" int32_t Version_GetHashCode_m21576 (Version_t1549 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Revision_4);
		int32_t L_1 = (__this->____Build_3);
		int32_t L_2 = (__this->____Minor_2);
		int32_t L_3 = (__this->____Major_1);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))))|(int32_t)L_3));
	}
}
// System.String System.Version::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Version_ToString_m21577 (Version_t1549 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t* L_0 = &(__this->____Major_1);
		String_t* L_1 = Int32_ToString_m2448(L_0, /*hidden argument*/NULL);
		int32_t* L_2 = &(__this->____Minor_2);
		String_t* L_3 = Int32_ToString_m2448(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m103(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral78, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = (__this->____Build_3);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_6 = V_0;
		int32_t* L_7 = &(__this->____Build_3);
		String_t* L_8 = Int32_ToString_m2448(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m103(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral78, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0041:
	{
		int32_t L_10 = (__this->____Revision_4);
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_11 = V_0;
		int32_t* L_12 = &(__this->____Revision_4);
		String_t* L_13 = Int32_ToString_m2448(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m103(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral78, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0061:
	{
		String_t* L_15 = V_0;
		return L_15;
	}
}
// System.Version System.Version::CreateFromString(System.String)
extern TypeInfo* Version_t1549_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t684_il2cpp_TypeInfo_var;
extern "C" Version_t1549 * Version_CreateFromString_m21578 (Object_t * __this /* static, unused */, String_t* ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t1549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3208);
		Char_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0x0;
	int32_t V_8 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 1;
		V_5 = (-1);
		String_t* L_0 = ___info;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		Version_t1549 * L_1 = (Version_t1549 *)il2cpp_codegen_object_new (Version_t1549_il2cpp_TypeInfo_var);
		Version__ctor_m21568(L_1, 0, 0, 0, 0, /*hidden argument*/NULL);
		return L_1;
	}

IL_001b:
	{
		V_6 = 0;
		goto IL_00a1;
	}

IL_0023:
	{
		String_t* L_2 = ___info;
		int32_t L_3 = V_6;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m2787(L_2, L_3, /*hidden argument*/NULL);
		V_7 = L_4;
		uint16_t L_5 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t684_il2cpp_TypeInfo_var);
		bool L_6 = Char_IsDigit_m16806(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_7 = V_5;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		uint16_t L_8 = V_7;
		V_5 = ((int32_t)((int32_t)L_8-(int32_t)((int32_t)48)));
		goto IL_0051;
	}

IL_0044:
	{
		int32_t L_9 = V_5;
		uint16_t L_10 = V_7;
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)10)))+(int32_t)((int32_t)((int32_t)L_10-(int32_t)((int32_t)48)))));
	}

IL_0051:
	{
		goto IL_0094;
	}

IL_0053:
	{
		int32_t L_11 = V_5;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_12 = V_4;
		V_8 = L_12;
		int32_t L_13 = V_8;
		if (((int32_t)((int32_t)L_13-(int32_t)1)) == 0)
		{
			goto IL_0077;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)1)) == 1)
		{
			goto IL_007c;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)1)) == 2)
		{
			goto IL_0081;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)1)) == 3)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_008b;
	}

IL_0077:
	{
		int32_t L_14 = V_5;
		V_0 = L_14;
		goto IL_008b;
	}

IL_007c:
	{
		int32_t L_15 = V_5;
		V_1 = L_15;
		goto IL_008b;
	}

IL_0081:
	{
		int32_t L_16 = V_5;
		V_2 = L_16;
		goto IL_008b;
	}

IL_0086:
	{
		int32_t L_17 = V_5;
		V_3 = L_17;
		goto IL_008b;
	}

IL_008b:
	{
		V_5 = (-1);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0094:
	{
		int32_t L_19 = V_4;
		if ((!(((uint32_t)L_19) == ((uint32_t)5))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_00ae;
	}

IL_009b:
	{
		int32_t L_20 = V_6;
		V_6 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00a1:
	{
		int32_t L_21 = V_6;
		String_t* L_22 = ___info;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m2782(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0023;
		}
	}

IL_00ae:
	{
		int32_t L_24 = V_5;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_25 = V_4;
		V_8 = L_25;
		int32_t L_26 = V_8;
		if (((int32_t)((int32_t)L_26-(int32_t)1)) == 0)
		{
			goto IL_00d2;
		}
		if (((int32_t)((int32_t)L_26-(int32_t)1)) == 1)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_26-(int32_t)1)) == 2)
		{
			goto IL_00dc;
		}
		if (((int32_t)((int32_t)L_26-(int32_t)1)) == 3)
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_00e6;
	}

IL_00d2:
	{
		int32_t L_27 = V_5;
		V_0 = L_27;
		goto IL_00e6;
	}

IL_00d7:
	{
		int32_t L_28 = V_5;
		V_1 = L_28;
		goto IL_00e6;
	}

IL_00dc:
	{
		int32_t L_29 = V_5;
		V_2 = L_29;
		goto IL_00e6;
	}

IL_00e1:
	{
		int32_t L_30 = V_5;
		V_3 = L_30;
		goto IL_00e6;
	}

IL_00e6:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		Version_t1549 * L_35 = (Version_t1549 *)il2cpp_codegen_object_new (Version_t1549_il2cpp_TypeInfo_var);
		Version__ctor_m21568(L_35, L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" bool Version_op_Equality_m16813 (Object_t * __this /* static, unused */, Version_t1549 * ___v1, Version_t1549 * ___v2, const MethodInfo* method)
{
	{
		Version_t1549 * L_0 = ___v1;
		Version_t1549 * L_1 = ___v2;
		bool L_2 = Object_Equals_m5277(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C" bool Version_op_Inequality_m16814 (Object_t * __this /* static, unused */, Version_t1549 * ___v1, Version_t1549 * ___v2, const MethodInfo* method)
{
	{
		Version_t1549 * L_0 = ___v1;
		Version_t1549 * L_1 = ___v2;
		bool L_2 = Object_Equals_m5277(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_LessThan(System.Version,System.Version)
extern "C" bool Version_op_LessThan_m16815 (Object_t * __this /* static, unused */, Version_t1549 * ___v1, Version_t1549 * ___v2, const MethodInfo* method)
{
	{
		Version_t1549 * L_0 = ___v1;
		Version_t1549 * L_1 = ___v2;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, Version_t1549 * >::Invoke(5 /* System.Int32 System.Version::CompareTo(System.Version) */, L_0, L_1);
		return ((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
	}
}
// System.WeakReference
#include "mscorlib_System_WeakReference.h"
#ifndef _MSC_VER
#else
#endif
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"

// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandleMethodDeclarations.h"


// System.Void System.WeakReference::.ctor()
extern "C" void WeakReference__ctor_m21579 (WeakReference_t1729 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object)
extern "C" void WeakReference__ctor_m16830 (WeakReference_t1729 * __this, Object_t * ___target, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		WeakReference__ctor_m21580(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C" void WeakReference__ctor_m21580 (WeakReference_t1729 * __this, Object_t * ___target, bool ___trackResurrection, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection;
		__this->___isLongReference_0 = L_0;
		Object_t * L_1 = ___target;
		WeakReference_AllocateHandle_m21582(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void WeakReference__ctor_m21581 (WeakReference_t1729 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		SerializationInfo_t1322 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral216, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		SerializationInfo_t1322 * L_2 = ___info;
		NullCheck(L_2);
		bool L_3 = SerializationInfo_GetBoolean_m16767(L_2, (String_t*) &_stringLiteral5642, /*hidden argument*/NULL);
		__this->___isLongReference_0 = L_3;
		SerializationInfo_t1322 * L_4 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m2347(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		Object_t * L_6 = SerializationInfo_GetValue_m11566(L_4, (String_t*) &_stringLiteral5643, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Object_t * L_7 = V_0;
		WeakReference_AllocateHandle_m21582(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C" void WeakReference_AllocateHandle_m21582 (WeakReference_t1729 * __this, Object_t * ___target, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isLongReference_0);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_1 = ___target;
		GCHandle_t3555  L_2 = GCHandle_Alloc_m19620(NULL /*static, unused*/, L_1, 1, /*hidden argument*/NULL);
		__this->___gcHandle_1 = L_2;
		goto IL_0024;
	}

IL_0017:
	{
		Object_t * L_3 = ___target;
		GCHandle_t3555  L_4 = GCHandle_Alloc_m19620(NULL /*static, unused*/, L_3, 0, /*hidden argument*/NULL);
		__this->___gcHandle_1 = L_4;
	}

IL_0024:
	{
		return;
	}
}
// System.Boolean System.WeakReference::get_IsAlive()
extern "C" bool WeakReference_get_IsAlive_m21583 (WeakReference_t1729 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		return ((((int32_t)((((Object_t*)(Object_t *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object System.WeakReference::get_Target()
extern "C" Object_t * WeakReference_get_Target_m21584 (WeakReference_t1729 * __this, const MethodInfo* method)
{
	{
		GCHandle_t3555 * L_0 = &(__this->___gcHandle_1);
		Object_t * L_1 = GCHandle_get_Target_m16779(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C" bool WeakReference_get_TrackResurrection_m21585 (WeakReference_t1729 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isLongReference_0);
		return L_0;
	}
}
// System.Void System.WeakReference::Finalize()
extern "C" void WeakReference_Finalize_m21586 (WeakReference_t1729 * __this, const MethodInfo* method)
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
		GCHandle_t3555 * L_0 = &(__this->___gcHandle_1);
		GCHandle_Free_m16777(L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t468 *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		Object_Finalize_m127(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_JUMP_TBL(0x14, IL_0014)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t468 *)
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t1328_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t468_il2cpp_TypeInfo_var;
extern "C" void WeakReference_GetObjectData_m21587 (WeakReference_t1729 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2625);
		Exception_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t468 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t468 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t1322 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1328 * L_1 = (ArgumentNullException_t1328 *)il2cpp_codegen_object_new (ArgumentNullException_t1328_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6575(L_1, (String_t*) &_stringLiteral216, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t1322 * L_2 = ___info;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.WeakReference::get_TrackResurrection() */, __this);
		NullCheck(L_2);
		SerializationInfo_AddValue_m16765(L_2, (String_t*) &_stringLiteral5642, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t1322 * L_4 = ___info;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		NullCheck(L_4);
		SerializationInfo_AddValue_m6629(L_4, (String_t*) &_stringLiteral5643, L_5, /*hidden argument*/NULL);
		goto IL_0041;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t468 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t468_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		SerializationInfo_t1322 * L_6 = ___info;
		NullCheck(L_6);
		SerializationInfo_AddValue_m6629(L_6, (String_t*) &_stringLiteral5643, NULL, /*hidden argument*/NULL);
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		return;
	}
}
// Mono.Math.Prime.PrimalityTest
#include "mscorlib_Mono_Math_Prime_PrimalityTest.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Math.Prime.PrimalityTest
#include "mscorlib_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"

// Mono.Math.BigInteger
#include "mscorlib_Mono_Math_BigInteger.h"
// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern "C" void PrimalityTest__ctor_m21588 (PrimalityTest_t4338 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C" bool PrimalityTest_Invoke_m21589 (PrimalityTest_t4338 * __this, BigInteger_t3877 * ___bi, int32_t ___confidence, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrimalityTest_Invoke_m21589((PrimalityTest_t4338 *)__this->___prev_9,___bi, ___confidence, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, BigInteger_t3877 * ___bi, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, BigInteger_t3877 * ___bi, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_PrimalityTest_t4338(Il2CppObject* delegate, BigInteger_t3877 * ___bi, int32_t ___confidence)
{
	// Marshaling of parameter '___bi' to native representation
	BigInteger_t3877 * ____bi_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern TypeInfo* ConfidenceFactor_t3874_il2cpp_TypeInfo_var;
extern "C" Object_t * PrimalityTest_BeginInvoke_m21590 (PrimalityTest_t4338 * __this, BigInteger_t3877 * ___bi, int32_t ___confidence, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfidenceFactor_t3874_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8522);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___bi;
	__d_args[1] = Box(ConfidenceFactor_t3874_il2cpp_TypeInfo_var, &___confidence);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern "C" bool PrimalityTest_EndInvoke_m21591 (PrimalityTest_t4338 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Reflection.MemberFilter
#include "mscorlib_System_Reflection_MemberFilter.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MemberFilter
#include "mscorlib_System_Reflection_MemberFilterMethodDeclarations.h"



// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
extern "C" void MemberFilter__ctor_m21592 (MemberFilter_t3829 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
extern "C" bool MemberFilter_Invoke_m21593 (MemberFilter_t3829 * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MemberFilter_Invoke_m21593((MemberFilter_t3829 *)__this->___prev_9,___m, ___filterCriteria, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_MemberFilter_t3829(Il2CppObject* delegate, MemberInfo_t * ___m, Object_t * ___filterCriteria)
{
	// Marshaling of parameter '___m' to native representation
	MemberInfo_t * ____m_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Reflection.MemberInfo'."));
}
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * MemberFilter_BeginInvoke_m21594 (MemberFilter_t3829 * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___m;
	__d_args[1] = ___filterCriteria;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
extern "C" bool MemberFilter_EndInvoke_m21595 (MemberFilter_t3829 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilter.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilterMethodDeclarations.h"



// System.Void System.Reflection.TypeFilter::.ctor(System.Object,System.IntPtr)
extern "C" void TypeFilter__ctor_m21596 (TypeFilter_t4031 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Reflection.TypeFilter::Invoke(System.Type,System.Object)
extern "C" bool TypeFilter_Invoke_m21597 (TypeFilter_t4031 * __this, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TypeFilter_Invoke_m21597((TypeFilter_t4031 *)__this->___prev_9,___m, ___filterCriteria, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_TypeFilter_t4031(Il2CppObject* delegate, Type_t * ___m, Object_t * ___filterCriteria)
{
	// Marshaling of parameter '___m' to native representation
	Type_t * ____m_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Type'."));
}
// System.IAsyncResult System.Reflection.TypeFilter::BeginInvoke(System.Type,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * TypeFilter_BeginInvoke_m21598 (TypeFilter_t4031 * __this, Type_t * ___m, Object_t * ___filterCriteria, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___m;
	__d_args[1] = ___filterCriteria;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Reflection.TypeFilter::EndInvoke(System.IAsyncResult)
extern "C" bool TypeFilter_EndInvoke_m21599 (TypeFilter_t4031 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandlerMethodDeclarations.h"

// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"


// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
extern "C" void HeaderHandler__ctor_m21600 (HeaderHandler_t4340 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
extern "C" Object_t * HeaderHandler_Invoke_m21601 (HeaderHandler_t4340 * __this, HeaderU5BU5D_t4339* ___headers, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		HeaderHandler_Invoke_m21601((HeaderHandler_t4340 *)__this->___prev_9,___headers, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, HeaderU5BU5D_t4339* ___headers, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___headers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, HeaderU5BU5D_t4339* ___headers, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___headers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___headers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_HeaderHandler_t4340(Il2CppObject* delegate, HeaderU5BU5D_t4339* ___headers)
{
	// Marshaling of parameter '___headers' to native representation
	HeaderU5BU5D_t4339* ____headers_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Messaging.Header[]'."));
}
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
extern "C" Object_t * HeaderHandler_BeginInvoke_m21602 (HeaderHandler_t4340 * __this, HeaderU5BU5D_t4339* ___headers, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___headers;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
extern "C" Object_t * HeaderHandler_EndInvoke_m21603 (HeaderHandler_t4340 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Threading.ParameterizedThreadStart
#include "mscorlib_System_Threading_ParameterizedThreadStart.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ParameterizedThreadStart
#include "mscorlib_System_Threading_ParameterizedThreadStartMethodDeclarations.h"



// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
extern "C" void ParameterizedThreadStart__ctor_m7649 (ParameterizedThreadStart_t1671 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.ParameterizedThreadStart::Invoke(System.Object)
extern "C" void ParameterizedThreadStart_Invoke_m21604 (ParameterizedThreadStart_t1671 * __this, Object_t * ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ParameterizedThreadStart_Invoke_m21604((ParameterizedThreadStart_t1671 *)__this->___prev_9,___obj, method);
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
extern "C" void pinvoke_delegate_wrapper_ParameterizedThreadStart_t1671(Il2CppObject* delegate, Object_t * ___obj)
{
	// Marshaling of parameter '___obj' to native representation
	Object_t * ____obj_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Threading.ParameterizedThreadStart::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * ParameterizedThreadStart_BeginInvoke_m21605 (ParameterizedThreadStart_t1671 * __this, Object_t * ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.ParameterizedThreadStart::EndInvoke(System.IAsyncResult)
extern "C" void ParameterizedThreadStart_EndInvoke_m21606 (ParameterizedThreadStart_t1671 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Threading.SendOrPostCallback
#include "mscorlib_System_Threading_SendOrPostCallback.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.SendOrPostCallback
#include "mscorlib_System_Threading_SendOrPostCallbackMethodDeclarations.h"



// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
extern "C" void SendOrPostCallback__ctor_m7697 (SendOrPostCallback_t1682 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
extern "C" void SendOrPostCallback_Invoke_m21607 (SendOrPostCallback_t1682 * __this, Object_t * ___state, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SendOrPostCallback_Invoke_m21607((SendOrPostCallback_t1682 *)__this->___prev_9,___state, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SendOrPostCallback_t1682(Il2CppObject* delegate, Object_t * ___state)
{
	// Marshaling of parameter '___state' to native representation
	Object_t * ____state_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Threading.SendOrPostCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SendOrPostCallback_BeginInvoke_m21608 (SendOrPostCallback_t1682 * __this, Object_t * ___state, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___state;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.SendOrPostCallback::EndInvoke(System.IAsyncResult)
extern "C" void SendOrPostCallback_EndInvoke_m21609 (SendOrPostCallback_t1682 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Threading.ThreadStart
#include "mscorlib_System_Threading_ThreadStart.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ThreadStart
#include "mscorlib_System_Threading_ThreadStartMethodDeclarations.h"



// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
extern "C" void ThreadStart__ctor_m14410 (ThreadStart_t3173 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.ThreadStart::Invoke()
extern "C" void ThreadStart_Invoke_m21610 (ThreadStart_t3173 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ThreadStart_Invoke_m21610((ThreadStart_t3173 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_ThreadStart_t3173(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult System.Threading.ThreadStart::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ThreadStart_BeginInvoke_m21611 (ThreadStart_t3173 * __this, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.ThreadStart::EndInvoke(System.IAsyncResult)
extern "C" void ThreadStart_EndInvoke_m21612 (ThreadStart_t3173 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallback.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallbackMethodDeclarations.h"



// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
extern "C" void WaitCallback__ctor_m2470 (WaitCallback_t574 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.WaitCallback::Invoke(System.Object)
extern "C" void WaitCallback_Invoke_m21613 (WaitCallback_t574 * __this, Object_t * ___state, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WaitCallback_Invoke_m21613((WaitCallback_t574 *)__this->___prev_9,___state, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WaitCallback_t574(Il2CppObject* delegate, Object_t * ___state)
{
	// Marshaling of parameter '___state' to native representation
	Object_t * ____state_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * WaitCallback_BeginInvoke_m21614 (WaitCallback_t574 * __this, Object_t * ___state, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___state;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.WaitCallback::EndInvoke(System.IAsyncResult)
extern "C" void WaitCallback_EndInvoke_m21615 (WaitCallback_t574 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializer.h"
#ifndef _MSC_VER
#else
#endif
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializerMethodDeclarations.h"



// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C" void AppDomainInitializer__ctor_m21616 (AppDomainInitializer_t4276 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C" void AppDomainInitializer_Invoke_m21617 (AppDomainInitializer_t4276 * __this, StringU5BU5D_t20* ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AppDomainInitializer_Invoke_m21617((AppDomainInitializer_t4276 *)__this->___prev_9,___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, StringU5BU5D_t20* ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, StringU5BU5D_t20* ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t4276(Il2CppObject* delegate, StringU5BU5D_t20* ___args)
{
	typedef void (STDCALL *native_function_ptr_type)(char**);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___args' to native representation
	char** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_string_array(___args);

	// Native function invocation
	_il2cpp_pinvoke_func(____args_marshaled);

	// Marshaling cleanup of parameter '___args' native representation
	if (___args != NULL) il2cpp_codegen_marshal_free_string_array((void**)____args_marshaled, ((Il2CppCodeGenArray*)___args)->max_length);
	____args_marshaled = NULL;

}
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * AppDomainInitializer_BeginInvoke_m21618 (AppDomainInitializer_t4276 * __this, StringU5BU5D_t20* ___args, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C" void AppDomainInitializer_EndInvoke_m21619 (AppDomainInitializer_t4276 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandlerMethodDeclarations.h"

// System.AssemblyLoadEventArgs
#include "mscorlib_System_AssemblyLoadEventArgs.h"


// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AssemblyLoadEventHandler__ctor_m21620 (AssemblyLoadEventHandler_t4273 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern "C" void AssemblyLoadEventHandler_Invoke_m21621 (AssemblyLoadEventHandler_t4273 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t4279 * ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AssemblyLoadEventHandler_Invoke_m21621((AssemblyLoadEventHandler_t4273 *)__this->___prev_9,___sender, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, AssemblyLoadEventArgs_t4279 * ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, AssemblyLoadEventArgs_t4279 * ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, AssemblyLoadEventArgs_t4279 * ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t4273(Il2CppObject* delegate, Object_t * ___sender, AssemblyLoadEventArgs_t4279 * ___args)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * AssemblyLoadEventHandler_BeginInvoke_m21622 (AssemblyLoadEventHandler_t4273 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t4279 * ___args, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void AssemblyLoadEventHandler_EndInvoke_m21623 (AssemblyLoadEventHandler_t4273 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.EventHandler
#include "mscorlib_System_EventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"



// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void EventHandler__ctor_m5274 (EventHandler_t874 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern "C" void EventHandler_Invoke_m21624 (EventHandler_t874 * __this, Object_t * ___sender, EventArgs_t877 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventHandler_Invoke_m21624((EventHandler_t874 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, EventArgs_t877 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, EventArgs_t877 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, EventArgs_t877 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_EventHandler_t874(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t877 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandler_BeginInvoke_m21625 (EventHandler_t874 * __this, Object_t * ___sender, EventArgs_t877 * ___e, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern "C" void EventHandler_EndInvoke_m21626 (EventHandler_t874 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandlerMethodDeclarations.h"



// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m21627 (ResolveEventHandler_t4274 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t1601 * ResolveEventHandler_Invoke_m21628 (ResolveEventHandler_t4274 * __this, Object_t * ___sender, ResolveEventArgs_t4325 * ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ResolveEventHandler_Invoke_m21628((ResolveEventHandler_t4274 *)__this->___prev_9,___sender, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Assembly_t1601 * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, ResolveEventArgs_t4325 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Assembly_t1601 * (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, ResolveEventArgs_t4325 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Assembly_t1601 * (*FunctionPointerType) (Object_t * __this, ResolveEventArgs_t4325 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Assembly_t1601 * pinvoke_delegate_wrapper_ResolveEventHandler_t4274(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t4325 * ___args)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m21629 (ResolveEventHandler_t4274 * __this, Object_t * ___sender, ResolveEventArgs_t4325 * ___args, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t1601 * ResolveEventHandler_EndInvoke_m21630 (ResolveEventHandler_t4274 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Assembly_t1601 *)__result;
}
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"



// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UnhandledExceptionEventHandler__ctor_m21631 (UnhandledExceptionEventHandler_t4275 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C" void UnhandledExceptionEventHandler_Invoke_m21632 (UnhandledExceptionEventHandler_t4275 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t4335 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnhandledExceptionEventHandler_Invoke_m21632((UnhandledExceptionEventHandler_t4275 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t4335 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t4335 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, UnhandledExceptionEventArgs_t4335 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t4275(Il2CppObject* delegate, Object_t * ___sender, UnhandledExceptionEventArgs_t4335 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UnhandledExceptionEventHandler_BeginInvoke_m21633 (UnhandledExceptionEventHandler_t4275 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t4335 * ___e, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UnhandledExceptionEventHandler_EndInvoke_m21634 (UnhandledExceptionEventHandler_t4275 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void U24ArrayTypeU2456_t4341_marshal(const U24ArrayTypeU2456_t4341& unmarshaled, U24ArrayTypeU2456_t4341_marshaled& marshaled)
{
}
void U24ArrayTypeU2456_t4341_marshal_back(const U24ArrayTypeU2456_t4341_marshaled& marshaled, U24ArrayTypeU2456_t4341& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void U24ArrayTypeU2456_t4341_marshal_cleanup(U24ArrayTypeU2456_t4341_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void U24ArrayTypeU2424_t4342_marshal(const U24ArrayTypeU2424_t4342& unmarshaled, U24ArrayTypeU2424_t4342_marshaled& marshaled)
{
}
void U24ArrayTypeU2424_t4342_marshal_back(const U24ArrayTypeU2424_t4342_marshaled& marshaled, U24ArrayTypeU2424_t4342& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void U24ArrayTypeU2424_t4342_marshal_cleanup(U24ArrayTypeU2424_t4342_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void U24ArrayTypeU2416_t4343_marshal(const U24ArrayTypeU2416_t4343& unmarshaled, U24ArrayTypeU2416_t4343_marshaled& marshaled)
{
}
void U24ArrayTypeU2416_t4343_marshal_back(const U24ArrayTypeU2416_t4343_marshaled& marshaled, U24ArrayTypeU2416_t4343& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void U24ArrayTypeU2416_t4343_marshal_cleanup(U24ArrayTypeU2416_t4343_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void U24ArrayTypeU24120_t4344_marshal(const U24ArrayTypeU24120_t4344& unmarshaled, U24ArrayTypeU24120_t4344_marshaled& marshaled)
{
}
void U24ArrayTypeU24120_t4344_marshal_back(const U24ArrayTypeU24120_t4344_marshaled& marshaled, U24ArrayTypeU24120_t4344& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void U24ArrayTypeU24120_t4344_marshal_cleanup(U24ArrayTypeU24120_t4344_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void U24ArrayTypeU243132_t4345_marshal(const U24ArrayTypeU243132_t4345& unmarshaled, U24ArrayTypeU243132_t4345_marshaled& marshaled)
{
}
void U24ArrayTypeU243132_t4345_marshal_back(const U24ArrayTypeU243132_t4345_marshaled& marshaled, U24ArrayTypeU243132_t4345& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void U24ArrayTypeU243132_t4345_marshal_cleanup(U24ArrayTypeU243132_t4345_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void U24ArrayTypeU2420_t4346_marshal(const U24ArrayTypeU2420_t4346& unmarshaled, U24ArrayTypeU2420_t4346_marshaled& marshaled)
{
}
void U24ArrayTypeU2420_t4346_marshal_back(const U24ArrayTypeU2420_t4346_marshaled& marshaled, U24ArrayTypeU2420_t4346& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void U24ArrayTypeU2420_t4346_marshal_cleanup(U24ArrayTypeU2420_t4346_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void U24ArrayTypeU2432_t4347_marshal(const U24ArrayTypeU2432_t4347& unmarshaled, U24ArrayTypeU2432_t4347_marshaled& marshaled)
{
}
void U24ArrayTypeU2432_t4347_marshal_back(const U24ArrayTypeU2432_t4347_marshaled& marshaled, U24ArrayTypeU2432_t4347& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void U24ArrayTypeU2432_t4347_marshal_cleanup(U24ArrayTypeU2432_t4347_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void U24ArrayTypeU2448_t4348_marshal(const U24ArrayTypeU2448_t4348& unmarshaled, U24ArrayTypeU2448_t4348_marshaled& marshaled)
{
}
void U24ArrayTypeU2448_t4348_marshal_back(const U24ArrayTypeU2448_t4348_marshaled& marshaled, U24ArrayTypeU2448_t4348& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void U24ArrayTypeU2448_t4348_marshal_cleanup(U24ArrayTypeU2448_t4348_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void U24ArrayTypeU2464_t4349_marshal(const U24ArrayTypeU2464_t4349& unmarshaled, U24ArrayTypeU2464_t4349_marshaled& marshaled)
{
}
void U24ArrayTypeU2464_t4349_marshal_back(const U24ArrayTypeU2464_t4349_marshaled& marshaled, U24ArrayTypeU2464_t4349& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void U24ArrayTypeU2464_t4349_marshal_cleanup(U24ArrayTypeU2464_t4349_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void U24ArrayTypeU2412_t4350_marshal(const U24ArrayTypeU2412_t4350& unmarshaled, U24ArrayTypeU2412_t4350_marshaled& marshaled)
{
}
void U24ArrayTypeU2412_t4350_marshal_back(const U24ArrayTypeU2412_t4350_marshaled& marshaled, U24ArrayTypeU2412_t4350& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void U24ArrayTypeU2412_t4350_marshal_cleanup(U24ArrayTypeU2412_t4350_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void U24ArrayTypeU24136_t4351_marshal(const U24ArrayTypeU24136_t4351& unmarshaled, U24ArrayTypeU24136_t4351_marshaled& marshaled)
{
}
void U24ArrayTypeU24136_t4351_marshal_back(const U24ArrayTypeU24136_t4351_marshaled& marshaled, U24ArrayTypeU24136_t4351& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void U24ArrayTypeU24136_t4351_marshal_cleanup(U24ArrayTypeU24136_t4351_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void U24ArrayTypeU2472_t4352_marshal(const U24ArrayTypeU2472_t4352& unmarshaled, U24ArrayTypeU2472_t4352_marshaled& marshaled)
{
}
void U24ArrayTypeU2472_t4352_marshal_back(const U24ArrayTypeU2472_t4352_marshaled& marshaled, U24ArrayTypeU2472_t4352& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void U24ArrayTypeU2472_t4352_marshal_cleanup(U24ArrayTypeU2472_t4352_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void U24ArrayTypeU24124_t4353_marshal(const U24ArrayTypeU24124_t4353& unmarshaled, U24ArrayTypeU24124_t4353_marshaled& marshaled)
{
}
void U24ArrayTypeU24124_t4353_marshal_back(const U24ArrayTypeU24124_t4353_marshaled& marshaled, U24ArrayTypeU24124_t4353& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void U24ArrayTypeU24124_t4353_marshal_cleanup(U24ArrayTypeU24124_t4353_marshaled& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
